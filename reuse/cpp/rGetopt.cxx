/* Copyright (c) 1999 Dr. Josef Grosch, CoCoLab - Datenverarbeitung

   This file contains proprietary and confidential information and
   remains the property of CoCoLab. Use, disclosure, or reproduction
   is prohibited except as permitted by express written license agreement
   with CoCoLab.

   Phone : +49-7841-669144
   Fax   : +49-7841-669145
   E-mail: grosch@cocolab.de
*/

/* Project:	Cocktail Reuse Library
 * Descr:	Analysing command line options
 * Author:	Dr. Juergen Vollmer <vollmer@cocolab.de>
 *              Andreas Winter <winter@cocolab.de>
 * Id: rGetopt.c,v 1.70 2007/01/10 17:26:45 vollmer Exp $
 */

# include <assert.h>
# include <stdio.h>
# include <stdlib.h>
# include <errno.h>

# include "rSystem.h"
# include "rString.h"

# define RGETOPT_INSIDE
# include "rGetopt.h"

# undef DEBUG_RGETOPT
# ifdef DEBUG_RGETOPT
# define DPRINTF(arg) {printf arg; fflush (stdout);}
# else
# define DPRINTF(arg) /* nothing */
# endif

# if defined _MSC_VER & (_MSC_VER >= 1100)
#  pragma warning (disable:4127)   /* conditional expr is constant */
# endif

# define RGETOPT_USE_MALLOC
# ifdef RGETOPT_USE_MALLOC
# define MALLOC(size)    malloc (size)
# define FREE(size,ptr)  free (ptr)
# define STRDUP(str)     strdup(str)
# else
# include "rMemory.h"
# define MALLOC(size)   Alloc (size)
# define FREE(size,ptr) Free (size,(char*)ptr)
# define STRDUP(str)    my_strdup(str)
static char *my_strdup (const char* str)
{
  int   l = strlen (str) + 1;
  char *s = (char*)Alloc (l);
  strcpy (s, str);
  return s;
}
# endif

int   rOpterr = 1  ;
int   rOptopt = '?';
int   rOptind = 0  ;
const char *rOptarg = 0;
const char *rOptmsg = 0;

char rOptopt2 = 0;
int rGetoptOptionalWithEqual = 0;
int rGetoptArgumentWithEqual = 0;

static char msg_buffer[512];

static const char *nextchar = "";
	/* "" indicates: end of current argv-element reached */

#define NOARG   1
#define MUSTARG 2
#define MAYARG  3

# define MAX_OPTS (2*256)
struct sOptinfo {
  char first;    /* first option char */
  char second;	 /* '\0': second option char is not defined
		  * option consists of a two character sequence.
		 */
  char mode;     /* NOARG, MUSTARG, MAYARG */
} optinfo [MAX_OPTS];
static int  last_optinfo = -1;
	       /* optinfo[0] .. optinfo[last_info] are defined.
		* last_optinfo = -1: rOptreset was called.
		*/

static char rOptmode; /* '+' or '-' */

void
rOptreset (void)
{
  last_optinfo = -1;
}

static void
create_optinfo (const char *optstring)
/* Transform optstring and store it in optinfo
 * Set rOptmode.
 */

{
  int i = 0;
  rOptreset ();

  /* first char may be an option for getopt */
  if (optstring[0] == '+'|| optstring[0] == '-') {
    rOptmode = optstring[0];
    i++;
  } else {
    rOptmode = '+';
  }

  while (optstring[i]) {
    last_optinfo++;
    if (last_optinfo == MAX_OPTS) {
      DPRINTF (("rGetopt: fatal error too many options given\n"));
      Reuse_Exit();
    }

    optinfo[last_optinfo].first = optstring[i++];

    /* second option char? */
    if (optstring[i] == '!') {
      i++;
      optinfo[last_optinfo].second = optstring[i++];
    } else {
      optinfo[last_optinfo].second = '\0';
    }

    /* mode? */
    if (optstring[i] == ':' ) {
      if (optstring[i+1] == ':') {
	optinfo[last_optinfo].mode = MAYARG; /* may have an Argument */
	i += 2;
      } else  {
	optinfo[last_optinfo].mode = MUSTARG; /* must have an Argument */
	i++;
      }
    } else {
      optinfo[last_optinfo].mode = NOARG; /* no Argument*/
    }
  }
}

static int
process_char (int argc, char * const argv[])
/* Analyse the current option character stored in rOptopt.
 * If there is no error return rOptopt and set rOptarg as required.
 * If there is an error return `?' and set rOptmsg.
 * nextchar must point to the char following the current option.
 * Update nextchar, rOptind, rOptarg, rOptmsg.
 */
{
  int i;

  for (i = 0; i <= last_optinfo; i++) {
    if (optinfo[i].first == rOptopt) {
      if (optinfo[i].second) {
	/* second option char is defined */
	if (*nextchar == '\0') {
	  rOptmsg  = rGETOPT_MISSING_SECOND_MSG;
	  rOptopt2 = '\0';
	  return '?';
	}
	if (*nextchar == optinfo[i].second) {
	  /* ... and given */
	  rOptopt2 = *nextchar++;
	} else {
	  /* second char does not fit, try next option */
  	  rOptopt2 = *nextchar;
	  /* store char as it may be used in an error message */
	  continue;
	}
      } else {
	/* no second option char */
	rOptopt2 = '\0';
      }

      switch (optinfo[i].mode) {
      case NOARG:
	return rOptopt;
      case MUSTARG:
	if (*nextchar) {
	  /* argument follows option-char in the same argv-element */
	  if (rGetoptArgumentWithEqual == 1 && *nextchar == '=') {
	    rOptarg  = nextchar + 1;
	  } else {
	    rOptarg  = nextchar;
	  }
	  nextchar = "";
	  return rOptopt;
	} else {
	  /* argument follows in next argv-element, nextchar == "" */
	  rOptind++;
	  if (rOptind >= argc) {
	    /* no more argv-elements */
	    rOptmsg = rOPTION_ARG_MISSING_MSG;
	    return '?';
	  } else {
	    if (rGetoptArgumentWithEqual == 1 && *argv[rOptind] == '=') {
	      rOptarg = argv[rOptind] + 1;
	    } else {
	      rOptarg = argv[rOptind];
	    }
	    return rOptopt;
	  }
	}
      case MAYARG:
	if (*nextchar) {
	  /* optional argument follows in this argv-element */
	  if (rGetoptOptionalWithEqual == 1 && *nextchar == '=') {
	    rOptarg  = nextchar + 1;
	  } else {
	    rOptarg  = nextchar;
	  }
	  nextchar = "";
	} else {
	  /* no argument given */
	  rOptarg  = NULL;
	}
	return rOptopt;
      }
    }
  }

  /* current option char not found */
  rOptmsg = rNO_SUCH_OPTION_MSG;
  return '?';
}

int
rGetopt (int argc, char * const argv[], const char *optstring)
{
  DPRINTF (("options  = [%s]\n",  optstring));
  DPRINTF (("rOptind  = [%d]\n",  rOptind));
  DPRINTF (("argv[]   = [%s]\n",  argv[rOptind]));
  DPRINTF (("argc     = [%d]\n",  argc));
  DPRINTF (("nextchar = [%c]\n", *nextchar));

  if (last_optinfo < 0 || rOptind == 0) {
    /* preprocess optstring */
    create_optinfo (optstring);
  }

  if (rOptind <= 0) {
    /* first call */
    nextchar = "";
    rOptind  = 0;
  }

  rOptmsg = 0;
  rOptarg = 0;

  if (*nextchar != '\0') {
    /* inside an option argv-element */
    rOptopt = *nextchar++;
    return process_char (argc,argv);
  } else {
    /* end of current argv-element reached, goto the next an analyse it */
    rOptind ++;
    if (rOptind < argc) {
      nextchar = argv[rOptind];
    } else {
      /* no more argv elements */
      return EOF;
    }

    /* check whether current argv-element starts with a `-' */
    if (nextchar[0] == '-') {
      /* start of an option */
      if (nextchar[1] == '\0') {
	/* a single `-' terminates options and counts not as option prefix
	 *  i.e. argv[rOptind] == "-"
	 */
	return EOF;
      }
      if (nextchar[1] == '-' && nextchar[2] == '\0' ) {
	/* `--' terminates the option scanning, rOptind refers to the
	 * argv-element following the `--'
	 */
	rOptind++;
	return EOF;
      }
      nextchar++; /* skip the `-' */
      rOptopt = *nextchar++;
      return process_char (argc,argv);
    } else {
      /* current argv-element does not start with a `-' */
      if (rOptmode == '-') {
	/* treat non-option argv's as options, with option == '\1' */
	rOptarg  = nextchar;
	nextchar = "";
	return '\1';
      } else {
	return EOF;
      }
    }
  }
}

/**********************************  end of rGetopt ************************/

# define INIT_LIST_ARG_SIZE 20

int      rOptIndex;
rbool    rOptargBool;
const char *rOptoptLong;
long int rOptargInt;

static int check_long_option (const char *str, const char *option)
/* returns number of matching characters
 * str or str followed by a "=" must be a substring of option,
 * '-' and '_' are treated as equal char's.
 */
{
  const char *s = str;
  while (*s != '\0' && *s != '=') {
    if (*option == '\0') {
      /* not a substring */
      s = str;
      break;
    } else if (*s != *option) {
      if (!((*s == '-' && *option == '_') ||
	    (*s == '_' && *option == '-'))) {
	/* not a substring */
	s = str;
	break;
      }
    }
    s++;
    option++;
  }
  return s - str;
}

/*****************************************************************************/

static int search_long_option (const char *str, trGetoptLong *options)
/* if an unique option is found
 * then set rOptIndex to the found index
 *      return number of matching chars
 * else set rOptIndex to the error code
 *      return -1
 * fi
 */
{
  int idx       =  0;
  int max_idx   =  0;  /* index of the longest matching option */
  int max_match =  0;  /* number of matching chars of it       */
  int eq_match  =  -1; /* if there is another option matching
			* the same number of chars, the number
			* of matching chars are stored here
			*/
  int eq_idx    =  0;  /* the index of the equal match         */
  DPRINTF (("\t search_long_option:`%s' ", str));
  while (options[idx].name != NULL) {
    int match = check_long_option (str, options[idx].name);
    if (match > 0) {
      if (options[idx].name[match] == '\0' ||
	  options[idx].name[match] == '=') {
	/* str is an exact match */
	DPRINTF (("exact match: match=%d idx=%d\n", match, idx));
	rOptIndex = idx;
	return match;
      } else if (match == eq_match) {
	/* another option found, matching str */
	eq_match = match;
	eq_idx   = idx;
      } else if (match > max_match) {
	/* an option with a longer match found */
	eq_match  = max_match = match;
	eq_idx    = max_idx   = idx;
      }
    }
    idx++;
  }

  if (max_match > 0) {
    /* a matching option found */
    if (max_idx == eq_idx) {
      /* a unique match found */
      DPRINTF (("substring match:  match=%d idx=%d\n", max_match, max_idx));
      rOptIndex = max_idx;
      return max_match;
    } else {
      /* there are two matches of the same length */
      DPRINTF (("ambiguous match:  match=%d idx1=%d, idx2=%d\n", max_match,
		max_idx, eq_idx));
      rOptmsg   = rAMBIGUOUS_OPTION_MSG;
      rOptIndex = rAMBIGUOUS_OPTION;
      return -1;
    }
  } else {
    /* no matching option found */
    DPRINTF (("no match\n"));
    rOptmsg   = rNO_SUCH_OPTION_MSG;
    rOptIndex = rNO_SUCH_OPTION;
    return -1;
  }
}

/*****************************************************************************/

static int search_short_option (const char *str, trGetoptLong *options)
/* if a matching short option is found
 * then set rOptIndex to the found index
 *      return number of matching chars
 * else set rOptIndex to the error code
 *      return -1
 * fi
 */
{
  int idx =  0;
  DPRINTF (("\t search_short_option:`%s' ", str));
  while (options[idx].name != NULL) {
    if (options[idx].sname != NULL && options[idx].sname[0] != '\0') {
      int matching = strlen (options[idx].sname);
      if (strncmp (options[idx].sname, str, matching) == 0) {
	rOptIndex = idx;
	DPRINTF (("match:  match=%d idx=%d\n", matching, idx));
	return matching;
      }
    }
    idx++;
  }
  DPRINTF (("no match\n"));
  rOptmsg   = rNO_SUCH_OPTION_MSG;
  rOptIndex = rNO_SUCH_OPTION;
  return -1;
}


/*****************************************************************************/

/* set all max fields of list arguments to -1 */
static rbool reset_list_variables = rtrue;
static void reset_list_options (trGetoptLong *options)
{
  int i = 0;
  trGetoptIntListArg *variable;
  while (options[i].name != NULL) {
    switch (options[i].type) {
    case rlIntArg:
    case rlCardArg:
    case rlStringArg:
      if (options[i].variable) {
	variable = (trGetoptIntListArg*) options[i].variable;
	variable->max = -1;
      }
      break;
    default:
      /* nothing to do */
      break;
    }
    i++;
  }
}

/*****************************************************************************/

int rGetoptLong (int argc, char *const *argv, trGetoptLong *options)
{
  #define NEXT_ARGV_ELEM(ARG_EXPECTED) 				\
		      {		       				\
		  	rOptind++;		       		\
			if (rOptind >= argc) {	       		\
			   if (ARG_EXPECTED) {			\
  			      rOptmsg = rOPTION_ARG_MISSING_MSG;\
			      res     = rOPTION_ARG_MISSING;	\
			   }					\
		      	   goto end;		       		\
			}					\
		        nextchar = argv[rOptind];		\
		      }

  # define GET_OPT_ARG()  					\
		      {						\
		        if (*nextchar == '=') {			\
	  		  nextchar++;				\
			  rOptarg = nextchar;			\
			} else if (*nextchar == '\0') {		\
			  NEXT_ARGV_ELEM(1);			\
			  rOptarg = nextchar;			\
			} else {				\
			  rOptarg = nextchar;			\
			}					\
	 	      }
  # define GET_OPT_O_ARG()  					\
		      {						\
		        if (*nextchar == '=') {			\
	  		  nextchar++;				\
			  rOptarg = nextchar;			\
			} else if (*nextchar != '\0') {		\
			  rOptarg = nextchar;			\
			}					\
		      }
  int res;
  int matching; /* number of matching chars */

  rOptoptLong   = 0;
  rOptmsg       = 0;
  rOptarg       = 0;
  rOptargBool   = rfalse;
  rOptargInt    = 0;
  rOptIndex     = res = rNO_MORE_OPTION;

  if (rOptind <= 0) {
    /* first call */
    if (reset_list_variables) {
      reset_list_options (options);
    }
    rOptind  = 0;
    nextchar = "";
  }

  if (*nextchar == '\0') {
    /* end of argv[rOptind] reached, go to next element */
    NEXT_ARGV_ELEM(0);
  }
  DPRINTF (("rGetoptLong:\n"));
  DPRINTF ((" rOptind  = [%d]\n",  rOptind));
  DPRINTF ((" argv[]   = [%s]\n",  argv[rOptind]));
  DPRINTF ((" argc     = [%d]\n",  argc));
  DPRINTF ((" nextchar = [%c]\n", *nextchar));

  if (nextchar[0] == '-') {
    rOptoptLong = nextchar;
    if (nextchar[1] == '-') {
      /* long option starts here */
      if (nextchar[2] == '\0') {
	/* -- not followed by a string ==> end of options */
	rOptind++;
	DPRINTF (("--> \"--\" the following argv[] elements are arguments\n"));
	res = rNO_MORE_OPTION;
	goto end;
      }
      /* search long option */
      nextchar += 2;
      matching = search_long_option (nextchar, options);
    } else {
      /* short option starts here */
      /* search short option */
      nextchar += 1;
      matching = search_short_option (nextchar, options);
      /* check if there is a long option starting with that */
      if (matching < 0) {
	matching = search_long_option (nextchar, options);
      }
    }
  } else if (argv[rOptind] < nextchar) {
    /* inside a short option */
    matching = search_short_option (nextchar, options);
  } else {
    /* end of options reached */
    goto end;
  }

  res = rOptIndex; /* contains already the error code */
  if (matching < 0) {
    /* some error happened */
    nextchar = "";
    goto end;
  }
  nextchar += matching;

  /* check option arguments */
  switch (options[rOptIndex].type) {
  case rBoolArg:
  case rBoolNegArg:
    /* a boolean flag may be given one of the following arguments */
    if (*nextchar == '=') {
      nextchar++;
      if (strcasecmp (nextchar, "true")         == 0 ||
	  strcasecmp (nextchar, "on")           == 0 ||
	  strcasecmp (nextchar, "yes")          == 0 ||
	  strcasecmp (nextchar, "enable")       == 0) {
	rOptargBool = rtrue;
	rOptarg     = nextchar;
	if (options[rOptIndex].variable) {
	  *((rbool*) options[rOptIndex].variable) = rOptargBool;
	}
	nextchar      = "";
      } else if (strcasecmp (nextchar, "false") == 0 ||
		 strcasecmp (nextchar, "off")          == 0 ||
		 strcasecmp (nextchar, "no")           == 0 ||
		 strcasecmp (nextchar, "disable")      == 0) {
	rOptargBool = rfalse;
	rOptarg     = nextchar;
	if (options[rOptIndex].variable) {
	  *((rbool*) options[rOptIndex].variable) = rOptargBool;
	}
	nextchar      = "";
      } else {
	rOptmsg  = rERROR_IN_OPTION_ARG_MSG;
	res      = rERROR_IN_OPTION_ARG;
	nextchar = "";
      }
    } else {
      /* if no argument is given, the value is true */
      rOptargBool = (rbool) ((options[rOptIndex].type == rBoolArg) ?
			     rtrue : rfalse);
      rOptarg     = NULL;
      if (options[rOptIndex].variable) {
	*((rbool*) options[rOptIndex].variable) = rOptargBool;
      }
    }
    break;
  case rEnumArg:
    if (rOptarg == NULL) {
      rOptargInt = (long int) options[rOptIndex].value;
      if (options[rOptIndex].variable) {
	*((int*) options[rOptIndex].variable) = (int) rOptargInt;
      }
    } else {
      rOptmsg  = rOPTION_NO_ARG_ALLOWD_MSG;
      res      = rOPTION_NO_ARG_ALLOWD;
      nextchar = "";
    }
    break;
  case rIntArg:
  case rCardArg:
    GET_OPT_ARG();
    {
      char *end;
      errno = 0;
      rOptargInt = strtol (rOptarg, &end, 0);
      if (errno != 0 || *end != '\0' ||
	  (options[rOptIndex].type == rCardArg && rOptargInt < 0)) {
	rOptmsg  = rERROR_IN_OPTION_ARG_MSG;
	res      = rERROR_IN_OPTION_ARG;
	nextchar = "";
	goto end;
      }

      if (options[rOptIndex].variable) {
	*((long int*) options[rOptIndex].variable) = rOptargInt;
      }
    }
    nextchar = "";
    break;
  case roIntArg:
  case roCardArg:
    GET_OPT_O_ARG();
    if (rOptarg == 0) {
      rOptargInt = (long int) options[rOptIndex].value;

    } else {
      char *end;
      errno = 0;
      rOptargInt = strtol (rOptarg, &end, 0);
      if (errno != 0 || *end != '\0' ||
	  (options[rOptIndex].type == roCardArg && rOptargInt < 0)) {
	rOptmsg  = rERROR_IN_OPTION_ARG_MSG;
	res      = rERROR_IN_OPTION_ARG;
	nextchar = "";
	goto end;
      }
    }
    if (options[rOptIndex].variable) {
      *((long int*) options[rOptIndex].variable) = rOptargInt;
    }
    nextchar = "";
    break;
  case rlIntArg:
  case rlCardArg:
    GET_OPT_ARG();
    if (options[rOptIndex].variable) {
      int   l   = strlen (rOptarg)+1;
      char *str = (char*) MALLOC (l);
      char *tok;
      char *end;
      trGetoptIntListArg *variable =
	(trGetoptIntListArg*) options[rOptIndex].variable;
      strcpy (str, rOptarg);
      if (variable->max < 0) variable->max = 0;
      for (tok  = strtok(str, variable->delim? variable->delim : ",");
	   tok != NULL;
           tok  = strtok(NULL, variable->delim? variable->delim : ",")) {
	if (variable->max >= variable->size) {
	  if (variable->size == 0) {
	    /* create array */
	    variable->size = INIT_LIST_ARG_SIZE;
	    variable->max  = 0;
	    variable->elem = (long int*)MALLOC(sizeof(long int) * variable->size);
	  } else {
	    /* extend array */
	    int i;
	    long int *elem = (long int*)MALLOC(2*sizeof(long int)*variable->size);
	    for (i = 0; i < variable->max; i++) {
	      elem[i] = variable->elem[i];
	    }
	    FREE (sizeof (long int) * variable->size, variable->elem);
	    variable->elem = elem;
	    variable->size *= 2;
	  }
	}
	errno = 0;
	variable->elem[variable->max] = strtol (tok, &end, 0);
	if (errno != 0 || *end != '\0' ||
	  (options[rOptIndex].type == rlCardArg && rOptargInt < 0)) {
	  rOptmsg  = rERROR_IN_OPTION_ARG_MSG;
	  res      = rERROR_IN_OPTION_ARG;
	  nextchar = "";
	  goto end;
	}
	variable->max++;
      }
      FREE (l, str);
    }
    nextchar = "";
    break;
  case rStringArg:
    GET_OPT_ARG();
    if (options[rOptIndex].variable) {
      *((const char**) options[rOptIndex].variable) = rOptarg;
    }
    nextchar = "";
    break;
  case roStringArg:
    GET_OPT_O_ARG();
    if (options[rOptIndex].variable) {
      *((const char**) options[rOptIndex].variable) = rOptarg ?
		rOptarg : (char*) options[rOptIndex].value;
    }
    nextchar = "";
    break;
  case rlStringArg:
    GET_OPT_ARG();
    if (options[rOptIndex].variable) {
      int   l   = strlen (rOptarg)+1;
      char *str = (char*) MALLOC (l);
      char *tok;
      trGetoptStringListArg *variable =
	(trGetoptStringListArg*) options[rOptIndex].variable;
      strcpy (str, rOptarg);

      if (variable->max < 0) variable->max = 0;
      for (tok  = strtok(str, variable->delim? variable->delim : ",");
	   tok != NULL;
           tok  = strtok(NULL, variable->delim? variable->delim : ",")) {
	if (variable->max >= variable->size) {
	  if (variable->size == 0) {
	    /* create array */
	    variable->size = INIT_LIST_ARG_SIZE;
	    variable->max  = 0;
	    variable->elem = (char**) MALLOC (sizeof(char*) * variable->size);
	  } else {
	    /* extend array */
	    int i;
	    char **elem = (char**) MALLOC (2 * sizeof(char*) * variable->size);
	    for (i = 0; i < variable->max; i++) {
	      elem[i] = variable->elem[i];
	    }
	    FREE (sizeof(char*) * variable->size, variable->elem);
	    variable->elem = elem;
	    variable->size *= 2;
	  }
	}
	variable->elem[variable->max] = tok;
	variable->max++;
      }
    }
    nextchar = "";
    break;
  default:
    rOptmsg  = rERROR_IN_OPTION_SPEC_MSG;
    res      = rERROR_IN_OPTION_SPEC;
    nextchar = "";
  }

 end:
  if (res >= 0) {
    if (options[rOptIndex].ret_value > 0) {
      res = options[rOptIndex].ret_value;
    }
    if (options[rOptIndex].func) {
      res = options[rOptIndex].func (options, rOptIndex);
    }
  }

  DPRINTF (("--> res=%d idx=%d val=%d msg=%s opt=%s arg=%s rOptind=%d argv[%d]=%s\n",
	    res,
	    rOptIndex,
	    (rOptIndex >= 0)? options[rOptIndex].ret_value : 0,
	    rOptmsg? rOptmsg:"",
	    (rOptIndex >= 0)? options[rOptIndex].name : "",
	    (rOptarg)? rOptarg : "",
	    rOptind,
	    rOptind, (rOptind < argc)? argv[rOptind] : ""
	    ));
  return res;
}

/*****************************************************************************/

void rGetoptInitVars (trGetoptLong *options)
{
  int i;
  i = 0;
  while (options[i].name != NULL) {
    if (options[i].variable) {
      switch (options[i].type) {
      case rBoolArg: case rBoolNegArg:
	*(rbool*)options[i].variable = (rbool) ((options[i].value) ?
						rtrue : rfalse);
	break;
      case rEnumArg:
	/* nothing to be done */
	break;
      case rIntArg: case rCardArg:
	*(long int*)options[i].variable = (options[i].value) ?
	  (long int) options[i].value : 0;
	break;
      case roIntArg: case roCardArg:
	*(long int*)options[i].variable = 0;
	break;
      case rStringArg:
	*(char**)options[i].variable = (options[i].value) ?
	  (char*) options[i].value : 0;
	break;
      case roStringArg:
	*(char**)options[i].variable = 0;
	break;
      case rlIntArg: case rlCardArg:
	{
	  trGetoptIntListArg *il =
	    (trGetoptIntListArg*) options[i].variable;
	  il->max  = 0;
	  il->size = 0;
	  il->elem = 0;
	}
	break;
      case rlStringArg:
	{
	  trGetoptStringListArg *sl =
	    (trGetoptStringListArg*) options[i].variable;
	  sl->max  = 0;
	  sl->size = 0;
	  sl->elem = 0;
	}
	break;
      default:
	  fprintf (stderr,"rGetoptInitVars: fatal error wrong type for %s\n",
		   options[i].name);
	  Reuse_Exit();
      }
    }
    i++;
  }
}

/*****************************************************************************/

trGetoptLong *rGetoptConcat (trGetoptLong *opts1, trGetoptLong *opts2)
{
  int l1 = 0;
  int l2 = 0;
  trGetoptLong *options;

  /* count how many options we have */
  while (opts1[l1].name != 0) l1++;
  while (opts2[l2].name != 0) l2++;

  options = (trGetoptLong*) MALLOC (sizeof (trGetoptLong) * (l1+l2+1));
  memcpy (&options[0],  opts1, sizeof (trGetoptLong) * l1);
  memcpy (&options[l1], opts2, sizeof (trGetoptLong) * l2);
  memset (&options[l1+l2], 0,  sizeof (trGetoptLong));
  return options;
}

/*****************************************************************************/

static int compare_options_with_sname (const void *o1, const void *o2)
{
  /* compare options:
   *    1. options with short names are vefore those without
   *    2. compare short names
   *    3. compare long names
   */
  trGetoptLong *opt1 = (trGetoptLong *) o1;
  trGetoptLong *opt2 = (trGetoptLong *) o2;
  if (opt1->sname) {
    if (opt2->sname) {
      return strcasecmp (opt1->sname, opt2->sname);
    } else {
      return -1;
    }
  }
  if (opt2->sname) {
    return 1;
  }
  return strcasecmp (opt1->name, opt2->name);
}

/*****************************************************************************/

static int compare_options_only_name (const void *o1, const void *o2)
{
  /* compare options:
   *    1. compare long names
   */
  trGetoptLong *opt1 = (trGetoptLong *) o1;
  trGetoptLong *opt2 = (trGetoptLong *) o2;
  return strcasecmp (opt1->name, opt2->name);
}

/*****************************************************************************/

static trGetoptLong* sort_options (trGetoptLong *options,
				   int count,
				   int(*compare)(const void *, const void *))
/* copy and sort options */
{
  trGetoptLong dummy[] = {{0,0,(trGetoptArg)0,0,0,0,0}};
  options = rGetoptConcat (options, dummy);
  qsort (options, count, sizeof (trGetoptLong), compare);
  return options;
}

/*****************************************************************************/

void rGetoptWrite (FILE *file, trGetoptLong *options, rbool all)
{
  int i;
  char  *str;
  rbool written;
  int indent = 0;
  int count  = 0;

  /* compute max length of all option names */
  count = 0;
  while (options[count].name != NULL) {
    int l = strlen (options[count].name);
    if (l > indent) indent = l;
    count++;
  }
  indent++;

  /* copy and sort options */
  options = sort_options (options, count, compare_options_only_name);

  i = 0;
  while (options[i].name != NULL) {
    written = rfalse;
    if (options[i].variable) {
      switch (options[i].type) {
      case rBoolArg:
      case rBoolNegArg:
	written = rtrue;
	fprintf (file, "%*s = ", -indent, options[i].name);
	fprintf (file, "%s\n", *((rbool*)options[i].variable)? "true" : "false");
	break;
      case rEnumArg:
	if (*(long*)options[i].variable == (long)options[i].value) {
	     written = rtrue;
	     fprintf (file, "%*s", -indent, options[i].name);
	     fprintf (file, "\n");
	}
	break;
      case rIntArg:
      case roIntArg:
      case rCardArg:
      case roCardArg:
	written = rtrue;
	fprintf (file, "%*s = ", -indent, options[i].name);
	fprintf (file, "%ld\n", *((long int*)options[i].variable));
	break;
      case rlIntArg:
      case rlCardArg:
	written = rtrue;
	fprintf (file, "%*s = ", -indent, options[i].name);
	{
	  trGetoptIntListArg *variable = (trGetoptIntListArg*) options[i].variable;
	  int j;
	  int k = 0;
	  for (j = 0; j < variable->max; j++) {
	    k += fprintf (file, "%ld", variable->elem[j]);
	    if (j < variable->max-1) {
	      k += fprintf (file, "%c", variable->delim? variable->delim[0] : ',');
	      if (k > 80-indent) {
		fprintf (file, "\\\n%*s", -(indent+3), "");
	      }
	    }
	  }
	}
	fprintf (file, "\n");
	break;
      case rStringArg:
	written = rtrue;
	fprintf (file, "%*s = ", -indent, options[i].name);
	str = *(char **)options[i].variable;
	fprintf (file, "%s\n", str? str : "");
	break;
      case roStringArg:
	written = rtrue;
	fprintf (file, "%*s = ", -indent, options[i].name);
	str = *(char **)options[i].variable;
	fprintf (file, "%s\n", str? str : "");
	break;
      case rlStringArg:
	written = rtrue;
	fprintf (file, "%*s = ", -indent, options[i].name);
	{
	  trGetoptStringListArg *variable =
	    (trGetoptStringListArg*) options[i].variable;
	  int j;
	  int k = 0;
	  for (j = 0; j < variable->max; j++) {
	    k += fprintf (file, "%s", variable->elem[j]);
	    if (j < variable->max-1) {
	      k += fprintf (file, "%c", variable->delim? variable->delim[0] : ',');
	      if (k > 80-indent) {
		fprintf (file, "\\\n%*s", -(indent+3), "");
	      }
	    }
	  }
	}
	fprintf (file, "\n");
	break;
      default:
	written = rtrue;
	fprintf (file, "%*s = ", -indent, options[i].name);
	fprintf (stderr, "rGetoptWrite: fatal error wrong type for %s\n",
		 options[i].name);
	Reuse_Exit();
      }
    }
    if (all && !written) {
      fprintf (file, "#%s\n", options[i].name);
    }
    i++;
  }

  /* deallocate memory of the sorted options */
  FREE (sizeof (trGetoptLong) * (count+1), options);
}

/*****************************************************************************/

rbool rGetoptWriteName (const char *r_filename, trGetoptLong *r_options,
			rbool r_all)
{
  FILE *f;
  if (strcmp (r_filename, "-") == 0) {
    f = stdout;
  } else {
    f = fopen (r_filename, "w");
    if (f == NULL) {
      return rfalse;
    }
  }
  rGetoptWrite (f, r_options, rtrue);
  if (f != stdout) {
    fclose (f);
  }
  if (r_all) {; /* calm down MS-compiler */}
  return rtrue;
}

/*****************************************************************************/

int rGetoptWriteFunc (trGetoptLong *r_options, int r_index)
{
  assert (r_index >= 0);
  assert (r_options[r_index].type == roStringArg);
  assert (r_options[r_index].variable != NULL);

  if (rGetoptWriteName (*(char**)r_options[r_index].variable,
			r_options, rtrue)) {
    return r_index;
  } else {
    sprintf (msg_buffer, "%s: %s", rERROR_IN_WRITE_MSG,
	     *(char**)r_options[r_index].variable);
    rOptmsg = msg_buffer;
    return rERROR_IN_WRITE;
  }
}

/*****************************************************************************/

# define LINE_BUFF_SIZE 10*1024

static char *read_line (FILE* f, int *line_nr)
/* reads one or several lines with the continuation character \ at the
 * line end.
 * if a line could be read return a pointer to a static string
 * if eof is reached return NULL
 */
{
         char  buffer[LINE_BUFF_SIZE];
  static char  line[LINE_BUFF_SIZE];
         rbool eof    = rfalse;
         rbool cont   = rtrue;
         char *line_c = line;

  if (feof (f)) return NULL;
  line[0] = '\0';
  while (!eof && cont) {
    int l;
    eof = (rbool) (fgets (buffer, LINE_BUFF_SIZE, f) == NULL);
    (*line_nr)++;
    if (eof) {
      buffer[0] = '\n';
      buffer[1] = '\0';
    }

    l = strlen (buffer);
    if (line_c + l - line >= LINE_BUFF_SIZE ||
	buffer[l-1] != '\n') {
      fprintf (stderr,
	       "rGetoptRead: line %d too long or not termined by \\n\n",
	       *line_nr);
      return line;
    }
    if (buffer[l-2] == '\\') {
      /* buffer [-1] == '\n' */
      cont = rtrue;
      buffer[l-2] = '\0'; /* remove \ and \n */
    } else {
      cont = rfalse;
    }
    strcat (line_c, buffer);
    line_c += l-2; /* "remove" \\ \n */
  }
  return line;
}

/*****************************************************************************/

rbool rGetoptRead (FILE *file, trGetoptLong *options)
{
  rbool res           = rtrue;
  int   line_nr       = 0;
  int   prev_rOptind  = rOptind;
  const char *prev_nextchar = nextchar;

  char  buffer[LINE_BUFF_SIZE];
  int   argc          = 2;
  char *argv[3]       = {0, 0, 0};

  /* list option variables should be reset only once, in case of nested
   * calls to rGetoptRead.
   */
  rbool prev_reset_list_variables = reset_list_variables;
  if (reset_list_variables) {
    reset_list_options (options);
    reset_list_variables = rfalse;
  }

  for (;;) {
    int i, j;
    int option;
    char *line = read_line (file, &line_nr);
    if (line == NULL) break;
    /* skip leading blanks */
    for (i = 0; line[i] == ' ' || line[i] == '\t'; i++);

    /* ignore comment lines */
    if (line[i] == '#') continue;

    /* remove all blanks, by copying line[i] to line[j] for all non-blanks */
    buffer[0] = '-';
    buffer[1] = '-';
    j = 2;
    while (line[i] != '\0') {
      if (line[i] == '#') break;
      if (line[i] != ' '  && line[i] != '\n' &&
	  line[i] != '\t' && line[i] != '\r') {
	buffer[j++] = line[i];
      }
      i++;
    }

    /* ignore empty lines (Note: "--" was inserted in buffer) */
    if (j == 2) continue;
    buffer[j] = '\0';

    rOptind = 0;
    argv[1] = STRDUP (buffer);
    option  = rGetoptLong (argc, argv, options);
    if (option < 0) {
      res = rfalse;
      fprintf (stderr, "rGetoptRead: error %s in line %d\n", rOptmsg, line_nr);
    }
  } /* for (;;) */

  rOptind              = prev_rOptind;
  nextchar             = prev_nextchar;
  reset_list_variables = prev_reset_list_variables;
  return res;
}

/*****************************************************************************/

rbool rGetoptReadName (const char *r_filename, trGetoptLong *r_options)
{
  FILE *f = fopen (r_filename, "r");
  if (f == NULL) {
    return rfalse;
  }
  if (!rGetoptRead (f, r_options)) {
    return rfalse;
  }
  fclose (f);
  return rtrue;
}

/*****************************************************************************/

int rGetoptReadFunc (trGetoptLong *r_options, int r_index)
{
  assert (r_index >= 0);
  assert (r_options[r_index].type == rStringArg);
  assert (r_options[r_index].variable != NULL);
  if (rGetoptReadName (*(char**) r_options[r_index].variable, r_options)) {
    return r_index;
  } else {
    sprintf (msg_buffer, "%s: %s", rERROR_IN_OPTION_FILE_MSG,
	     *(char**)r_options[r_index].variable);
    rOptmsg = msg_buffer;
    return rERROR_IN_OPTION_FILE;
  }
}

/*****************************************************************************/

static char** help_text;
static int    help_text_max   = 0;
static int    help_text_count = 0;
static void read_help_file (FILE *file)
/* reads the entire help file and store the lines in help_text */
{
  # define HELP_LINE_BUFF_SIZE 1024
  char  buffer[HELP_LINE_BUFF_SIZE];
  rbool eof = rfalse;

  help_text_max   = 1000;
  help_text_count = -1;
  help_text       = (char**) MALLOC (sizeof (char*) * help_text_max);

  if (feof (file)) return;
  while (!eof) {
    int l;
    eof = (rbool) (fgets (buffer, HELP_LINE_BUFF_SIZE, file) == NULL);
    if (eof) {
      buffer[0] = '\0';
    }
    if (buffer[0] == '#') continue; /* ignore comment lines */

    help_text_count++;
    if (help_text_count >= help_text_max) {
      /* extend help_text array */
      char **n = (char**) MALLOC (sizeof (char*) * help_text_max * 2);
      memcpy (n, help_text, sizeof (char*) * help_text_max);
      FREE (sizeof (char*) * help_text_max, help_text);
      help_text     =  n;
      help_text_max *= 2;
    }
    /* remove trailing blanks and \n */
    l = strlen (buffer);
    while (l > 0 &&
	   (buffer[l-1] == '\n' || buffer[l-1] == '\r' ||
	    buffer[l-1] == '\t' || buffer[l-1] == ' ')) {
      buffer[l-1] = '\0';
      l--;
    }
    help_text[help_text_count] = STRDUP (buffer);
  }
}

/*****************************************************************************/

static void write_help_text (FILE *file, trGetoptLong *options, int idx,
			     const char *prefix)
/* search help text of options[idx] in the help_text text array and
 * emit it to file
 */
{
  int i;
  rbool inside = rfalse;
  const char *indent;
  if (strcmp ("@START@", options[idx].name) == 0 ||
      strcmp ("@END@",   options[idx].name) == 0) {
    indent = "";
  } else {
    indent = " ";
  }
  for (i = 0; i < help_text_count; i++) {
    if (help_text[i][0] == '-' && help_text[i][1] == '-') {
      if (inside) {
	/* finished text for this option */
	fprintf (file, "%s\n", prefix);
	return;
      }
      if (strcmp (help_text[i]+2, options[idx].name) == 0) {
	inside = rtrue;
	continue;
      }
    }

    if (inside) {
      fprintf (file, "%s%s%s\n", prefix, indent, help_text[i]);
    }
  }
}

/*****************************************************************************/

void rGetoptShow (FILE *file, trGetoptLong *options,
		  const char *prefix, FILE *help)
{
  # define MAX_INDENT 30

  int i;
  int count;
  int indent  = 0;
  int sindent = 0;

  /* compute max length of all option names */
  count = 0;
  while (options[count].name != NULL) {
    int l = strlen (options[count].name);
    if (l > indent && l <= MAX_INDENT) indent = l;
    if (options[count].sname) {
      l = strlen (options[count].sname);
      if (l > sindent) sindent = l;
    }
    count++;
  }

  /* copy and sort options */
  options = sort_options (options, count,
			  help ? compare_options_only_name :
			         compare_options_with_sname);
  if (help) {
    trGetoptLong start[] = {
      {"@START@", 0, rBoolArg,0,0,0,0},
      {0,0,(trGetoptArg)0,0,0,0,0}
    };
    read_help_file (help);
    write_help_text (file, start, 0, prefix);
  }

  i = 0;
  while (options[i].name != NULL) {
    fprintf (file, "%s", prefix);
    if (!help) {
      /* don't show help text, format of the output,
       * all options sorted by shortname, then by long name:
       *     -SN --LN : type
       * or
       *     --LN     : type
       */
      if (options[i].sname) {
	fprintf (file, "-%*s ", -sindent, options[i].sname);
      }
      fprintf (file, "--%*s", -indent, options[i].name);
      if (!options[i].sname) {
	fprintf (file, "%*s", sindent+2, "");
      }
    } else {
      /* show help text, format of the output,
       * all options sorted by long name:
       *     --LN     : type
       *      text-lines
       *      empty line
       * or
       *     --LN -SN : type
       *      text-lines
       *      empty line
       */
      if (options[i].sname) {
	fprintf (file, "--%s -%*s%*s",
		 options[i].name,
		 -sindent, options[i].sname,
		 indent - (int)strlen (options[i].name), "");
      } else {
	fprintf (file, "--%*s", -(sindent + indent + 2), options[i].name);
      }
    }
    fprintf (file, " : %s", rGetoptArgText [options[i].type]);
    if ((options[i].type == rlIntArg || options[i].type == rlStringArg)
	&& options[i].variable) {
      trGetoptIntListArg *variable = (trGetoptIntListArg*) options[i].variable;
      fprintf (file, " separated by: \"%s\"",
	       variable->delim? variable->delim : ",");
    }
    fprintf (file, "\n");
    if (help) {
      write_help_text (file, options, i, prefix);
    }
    i++;
  }

  if (help) {
    trGetoptLong end[] = {
      {"@END@", 0, rBoolArg,0,0,0,0},
      {0,0,(trGetoptArg)0,0,0,0,0}
    };
    write_help_text (file, end, 0, prefix);

    /* deallocate help text storage */
    for (i = 0; i < help_text_count; i++) {
      FREE (strlen (help_text[i]+1), help_text[i]);
    }
    FREE (sizeof (char*) * help_text_max, help_text);
  }
  /* deallocate memory of the sorted options */
  FREE (sizeof (trGetoptLong) * (count+1), options);
}

/*****************************************************************************/

rbool rGetoptShowName (FILE *r_file, trGetoptLong *r_options,
		       const char *r_prefix,
		       const char *r_help_name,
		       const char *r_help_path)
{
  rbool res  = rtrue;
  FILE *help = NULL;
  if (r_help_name != NULL) {
    char name[255];
    sprintf (name, "%s%c%s", r_help_path? r_help_path : ".",
	     DirectorySeparator(), r_help_name);
    help = fopen (name, "r");
    if (help == NULL) {
      sprintf (msg_buffer, "Can not read file %s", name);
      rOptmsg = msg_buffer;
      res = rfalse;
    }
  }

  rGetoptShow (r_file, r_options, r_prefix, help);

  if (help != NULL) {
     fclose (help);
  }
  return res;
}


/**********************************  end of rGetopt.c ************************/
