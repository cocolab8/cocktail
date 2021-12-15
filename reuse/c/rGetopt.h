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
 * Descr:	Analyzing command line options
 * Author:	Dr. Juergen Vollmer <vollmer@cocolab.de>
 *              Andreas Winter <winter@cocolab.de>
 * Id: rGetopt.h,v 1.41 2007/01/10 17:23:23 vollmer Exp $
 */

# ifndef rGetopt_H
# define rGetopt_H
# include "ratc.h"
# include <stdio.h>

# define rGetOptVersion "2007-01-10"

/* Remarks:
 * This is Cocktail's version of the UNIX getopt routine.  Due to many
 * incompatibilities under various UNIXes and MS** this version is provided by
 * the Cocktail Reuse library.
 *
 * The following two methods may be used to parse command line options:
 *   - rGetopt
 *     Traditional one letter options (and as an extension two letter options)
 *     taking no, or (optional) arguments.
 *     rGetopt behaves more or less like the usual getopt-function.
 *   - rGetoptLong
 *     Traditional options with short names as above and long option names
 *     like `--verbose'.
 *     The rGetoptLong tries to be clever so that `--verbose' may be
 *     abbreviated (e.g. `--verb' or `--v'. rGetoptLong also accepts
 *     `-verbose' and abbreviations of that.
 *     (Abbreviation and using only one `-' instead works only if the result
 *      option is unique).
 *     Options values may be written to a file as well as read from one.
 *     The list of allowed option names may be listed and help-texts
 *     (read from a file) may be emitted.
 *
 * Note: A given application may use only the one or the other routine.
 *       Intermixing calls of rGetopt and rGetoptLong would result
 *       in disaster.
 */

/* Both routines use the following global variables: */

/* Error messages stored in rOptmsg
 * If no error occurred rOptmsg == 0.
 */
extern char *rOptmsg;
# define rNO_SUCH_OPTION_MSG        "no such option"
# define rOPTION_ARG_MISSING_MSG    "option requires argument"
# define rOPTION_NO_ARG_ALLOWD_MSG  "option does not take an argument"
# define rERROR_IN_OPTION_ARG_MSG   "error in option argument"
# define rAMBIGUOUS_OPTION_MSG      "option is abbreviated ambiguously"
# define rERROR_IN_OPTION_SPEC_MSG  "option specification has an error"
# define rGETOPT_MISSING_SECOND_MSG "missing second option character"
# define rERROR_IN_OPTION_FILE_MSG  "error reading the option file"
# define rERROR_IN_WRITE_MSG        "error writing options"

extern char *rOptarg;
/* For communication from rGetopt and rGetoptLong to the caller.
 * When rGetopt / rGetoptLong finds an option that takes an argument,
 * the argument value is returned here. Otherwise NULL.
 */

extern int rOptind;
/* Index in ARGV of the next element to be scanned.
 * This is used for communication to and from the caller
 * and for communication between successive calls to rGetopt.
 *
 * On entry to rGetopt / rGetoptLong zero means this is the first call;
 * initialize.
 *
 * When rGetopt returns EOF, this is the index of the first of the
 * non-option elements that the caller should itself scan.
 *
 * Otherwise, rOptind communicates from one call to the next
 * how much of ARGV has been scanned so far.
*/

extern int rOpterr;
/* Just for compatibility with other getopt implementations. The value of this
 * variable is ignored by rGetopt / rGetoptLong.
 */

/*****************************************************************************
 *                            r G e t o p t
 *****************************************************************************/

extern int rGetopt (int argc, char *const *argv, const char *optstring);
/* The rGetopt() function parses the command line arguments.  Its arguments
 * argc and argv are the argument count and array as passed to the main()
 * function on program invocation.  An element of argv that starts with `-'
 * (and is not exactly "-" or "--") is an option element.  The characters of
 * this element (aside from the initial `-') are option characters.  If
 * rGetopt() is called repeatedly, it returns successively each of the option
 * characters from each of the option elements.
 *
 * If rGetopt() finds another option character, it returns that character,
 * updating the external variable rOptind so that the next call to rGetopt()
 * can resume the scan with the following option character or argv-element.
 *
 * If there are no more option characters, rGetopt() returns EOF.  Then rOptind
 * is the index in argv of the first argv-element that is not an option.
 *
 * optstring is a string containing the legitimate option characters.
 * The option letter may be followed by colon or exclamation mark
 *     :    ::    !c    !c:    !c::
 * - A single colon indicates that the option requires an argument.
 *   If the flag rGetoptArgumentWithEqual is set to true, the
 *   argument may be preceeded by a "=" (for better readability).
 *   That '=' is removed from rOptarg. If rGetoptArgumentWithEqual is false,
 *   '=' is always part of the rOptarg.
 * - Two colons mean an option takes an optional arg; if there is text in the
 *   current argv-element, it is returned in rOptarg, otherwise rOptarg is set
 *   to zero. If the flag rGetoptOptionalWithEqual is set to true, the
 *   optional argument may be preceeded by a "=" (for better readability).
 *   That '=' is removed from rOptarg. If rGetoptOptionalWithEqual is false,
 *   '=' is always part of the rOptarg.
 * - An exclamation mark ! indicates that the option consists of two letters,
 *   the second letter is following one. E.g   a!b   means that the on the
 *   command line "-ab" must be given. The second letter may be used as
 *   as first option character too. rGetopt() returns the first letter,
 *   the variable rOptopt2 contains the second letter.
 *   Two-letter options may be used in conjunction with : and ::
 *
 * If the first character of optstring is `+', then option processing stops as
 * soon as a non-option argument is encountered.  If the first character of
 * optstring is `-', then each non-option argv-element is handled as if it were
 * the argument of an option with character code 1 (i.e. '\1').
 * (This is used by programs that were written to expect options and other
 * argv-elements in any order and that care about the ordering of the two.)
 * The special argument `--' forces an end of option-scanning regardless of
 * the scanning mode.
 * Default (if  the first character of optstring is not `+' or `-') is the same
 * as if `+' is given.
 *
 * If rGetopt() does not recognize an option character or if a required option
 * argument is missing, rGetopt stores the (option) character in rOptopt,
 * and returns `?'.
 *
 * In case of an error rGetopt returns '?' and stores an error message
 * number string in rOptmsg.  No error message is printed.
 *
 * Main difference of the rGetpot routine to other getopt-implementations:
 * - Error handling:
 *     - No error message is printed, instead the global variable rOptmsg get
 *       an error string assigned.
 *     - The variable opterr (rOpterr) is ignored.
 * - Handling of the optstring argument of rGetopt():
 *     optstring is preprocessed on the first call and stored internally.
 *     This preprocessing is done by rGetopt() when rOptind has the
 *     value 0, or if rOptreset() is called.
 *     (Other getopt-implementations rescan optstring each time getopt()
 *     is called, allowing to change the allowed options each time getopt()
 *     is called.)
 * - No environment variables are considered (others use e.g. POSIX_CORRECT).
 * - Added two-letter options indicated by `!' after the first option letter.
 */

extern int rOptopt;
/* Set to the option current character, returned by rGetopt.
 * If rGetopt returns '?' (i.e. error) rOptopt holds the character causing
 * that error (and not '?').
 */

extern char rOptopt2;
/* Contains the second letter of a two letter option, or 0 */

extern int rGetoptArgumentWithEqual;
/* 1: the required argument may be preceeded by a "=" (for better readability).
 *    That '=' is removed from rOptarg.
 * 0: '=' is always part of the rOptarg.
 * default: 0
 */
extern int rGetoptOptionalWithEqual;
/* 1: the optional argument may be preceeded by a "=" (for better readability).
 *    That '=' is removed from rOptarg.
 * 0: '=' is always part of the rOptarg.
 * default: 0
 */

extern void rOptreset (void);
/* Recomputes the internal representation of optstring, next time rGetopt
 * is called. rOptreset() does not change the value of rOptind or other
 * internal values. Hence it may be called to switch optstring between two
 * calls of rGetopt and continue with processing the command line.
 */

/*****************************************************************************
 *                            r G e t o p t L o n g
 *****************************************************************************/

/* The rGetoptLong uses the following approach for specifying options:
 * + There are two kind of option names:
 *   1. short option names:
 *      Usually consists of only one letter. To be compatible
 *      with our rGetopt routine, two letters may be specified to.
 *      And as extension: any string may be specified.
 *      Short options are introduced by a single '-'.
 *      Short option names may not be abbreviated.
 *      Several short option names may follow a single '-'.
 *      Examples:   -h -abc -a -b -c
 *   2. Long option names:
 *      Usually consists of "speaking" identifiers, like 'verbose'.
 *      Long options are introduced by '--'.
 *      Long options may be introduced by a single '-', if there is no
 *      short option starting with that option name.
 *      Long options may be abbreviated.
 *      Only one option may follow the '--'.
 *      The characters '-' and a '_' inside a long option name are treated
 *      as equivalent:  "--with-abc"  and "--with_abc" specify the same
 *      option.
 *
 * + Option arguments are typed.
 *   - Each option may have an argument.
 *   - The option argument is typed: boolean, integer and string, list of
 *     integers and list of strings.
 *
 * + The option names, their types etc. are specified by an array of elements
 *   of type trGetoptLong. The last element of the array is marked by
 *   0 in the name field.
 *
 * + rGetoptLong returns (usually) an index into that array corresponding to
 *   the given short / long option name. rGetoptLong converts boolean and
 *   integer arguments to the corresponding rbool or long it value
 *   and stores the values in the global variables rOptargBool or rOptargInt.
 */

typedef enum {  /* type of the option argument      		*/
  rBoolArg,     /* boolean flag                     		*/
  rBoolNegArg,  /* negated boolean flag             		*/
  rEnumArg,     /* boolean flag, but assigns a value		*/
  rIntArg,      /* expect an integer                		*/
  roIntArg,     /* expect an optional integer       		*/
  rlIntArg,     /* list of integers                 		*/
  rCardArg,     /* expect an non negative integer               */
  roCardArg,    /* expect an optional non negative integer      */
  rlCardArg,    /* list of non negative integers                */
  rStringArg,   /* expect an string                 		*/
  roStringArg,  /* expect an optional string        		*/
  rlStringArg   /* list of strings                  		*/
} trGetoptArg;

extern char *rGetoptArgText[];
/* textual representation of trGetoptArg values */
# ifdef RGETOPT_INSIDE
char *rGetoptArgText[] = {
  "boolean",     /* rBoolArg    */
  "boolean",     /* rBoolNegArg */
  "boolean",     /* rEnumArg    */
  "integer",
  "optional integer",
  "list of integers",
  "non negative integer",
  "optional non negative integer",
  "list of non negative integers",
  "string",
  "optional string",
  "list of strings"
};
# endif

/* All options (except for rEnumArg-typed ones) may take an argument,
 * which may optional.
 * The format of specifying options with arguments are:
 *    <option>=<argument>           for mandatory and optional arguments
 *    <option><argument>            for mandatory and optional arguments
 *    <option> <argument>           for mandatory arguments
 *
 * Format of accepted option arguments:
 * + rBoolArg:
 * + rBoolNegArg:
 *    A boolean flag may take one of the following optional arguments:
 *    - to indicate true:  `true',  `on',  `enable',  'yes'
 *    - to indicate false: `false', `off', `disable', 'no'
 *    those words are comapred case-insentitive
 *    If no argument is given,
 *    for rBoolArg    the value is true
 *    for rBoolNegArg the value is false
 * + rEnumArg:
 *   For the user it is a boolean flag, it may be given or not.
 *   rEnumArg typed options does not take any argument.
 *   If given, the value specified in the option is used.
 * + rIntArg, roIntArg, rCardArg, roCardArg,
 *    An int-argument may take the following kind of arguments:
 *       <value>
 *      +<value>
 *      -<value>   // only rIntArg, roIntArg
 *    where <value> is one of (written as regular expression):
 *       [1-9][0-9]*       ==> a decimal value
 *       0[0-9]*           ==> a octal value
 *       0x[0-9a-fA-F]+    ==> a hexadecimal value
 *    If the <value> can not be represented as an long int, an error is
 *    indicated.
 *    If no argument is given for an roIntArg typed option, the value
 *    specified in the option is used.
 * + rStringArg, roStringArg
 *    There is no specific format for strings.
 *    If no argument is given for an roStringArg typed option, the value ""
 *    is used.
 *
 * + rlIntArg, rlCardArg, rlStringArg
 *    Several arguments may be passed and are stored in an dynamically
 *    allocated and growing array. The memory is allocated and freed using
 *    "malloc" and "free". That's all done by rGetoptLong.
 *    The arguments must be either integers or strings as shown above.
 *    The arguments may be given either as several option/argument pairs:
 *       --word=abc --word=efg
 *    Or one option with a multiple argument, each argument separated by
 *    a comma (or other delimiters):
 *       --word=uvw,xyz
 *    Or intermixed:
 *       --word=abc --word=uvw,xyz --word=efg
 *
 *
 * Note:
 *   - If an option is used with an argument, the characters used as argument
 *     are stored in the variable rOptarg.
 *     rOptargBool and rOptargInt are set if the option is of type
 *     rBoolArg, rIntArg, roIntArg, rCardArg, or roCardArg resp.
 *   - If an option with an option argument is used without an argument,
 *     the global variable rOptarg is set to NULL.
 *     For a boolean option rOptargBool is set to true.
 *     For an integer option rOptargInt its set to -1.
 */

typedef struct {         /* integer list arguments                */
  char     *delim;       /* list of delimiter characters
			  * if NULL, then ","
			  */
  int       size;        /* elem[0] .. elem[size-1] are allocated */
  int       max;         /* elem[0] .. elem[max-1]  are used      */
                         /* Note: if for given rlIntArg/rlCardArg
			  *       option is not given, the max field
			  *       will be set to -1 by rGetoptLong
			  */
  long int *elem;
} trGetoptIntListArg;

typedef struct {         /* string list arguments                 */
  char       *delim;     /* list of delimiter characters
			  * if NULL, then ","
			  */
  int         size;      /* elem[0] .. elem[size-1] are allocated */
  int         max;       /* elem[0] .. elem[max-1] are used       */
                         /* Note: if for given rlStringArg
			  *       option is not given, the max field
			  *       will be set to -1 by rGetoptLong
			  */
  char      **elem;
} trGetoptStringListArg;


struct srGetoptLong;
typedef int (*trGetoptFunc) (struct srGetoptLong *r_options,
			     int                  r_index);
/* A function to be called by rGetoptLong as soon as an option and its
 * arguments have been parsed. Its return value is returned by rGetoptLong.
 * The global variables of this modules may be used, especially if
 * an error will be flagged rOptmsg should be set.
 */
typedef struct srGetoptLong {
  /* specification of the allowed options */
  char       *name;     /* long name,  if 0: end of option list  */
  char       *sname;    /* short name, if 0: no short name given */
  trGetoptArg type;     /* Argument type */
  void       *variable; /* if != NULL the value of the option is stored here.
			 * The following type mapping is used:
			 *   rBoolArg    ==> rbool
			 *   rBoolNegArg ==> rbool
			 *   rEnumArg    ==> int
                         *                   value casted to an (int) is stored
                         *   rIntArg, rCardArg
			 *               ==> long int
			 *   roIntArg, roCardArg
			 *               ==> long int
			 *                   if option is given without an
			 *                   argument, value casted to
			 *		     (long int) is stored
			 *   rlIntArg, rlCardArg
			 *		 ==> trGetoptIntListArg*
			 *   rStringArg  ==> char*
			 *   roStringArg ==> char*
			 *                   if option is given without an
			 *                   argument, value casted to a
			 *                   (char*) is stored.
			 *   rlStringArg ==> trGetoptStringListArg*
			 */
  void       *value;    /* The value to be assigned to variable, depending
			 * on the option's type.
			 * That value is either used as a default value for
			 * optional arguments, or is assigned if
			 * rGetoptInitVars() is called and variable is defined.
			 * The following type mapping and assignment is used:
			 *
			 *   rBoolArg, rBoolNegArg
			 *		 ==> rbool
			 *		     assigned during rGetoptInitVars()
			 *   rEnumArg    ==> int
                         *                   if this option is given, this
			 *                   value is stored.
                         *   rIntArg, rCardArg
			 *               ==> long int
			 *		     assigned during rGetoptInitVars()
			 *   roIntArg, roCardArg
			 *               ==> long int
			 *                   if option is given without an
			 *                   argument, value casted to
			 *		     (long int) is stored
			 *   rStringArg  ==> char*
			 *		     assigned during rGetoptInitVars()
			 *   roStringArg ==> char*
			 *                   if option is given without an
			 *                   argument, value casted to a
			 *                   (char*) is stored.
			 *   rlStringArg, rlIntArg, rlCardArg
			 *		 ==> undefined, not applicable
			 */
  trGetoptFunc func;    /* if != NULL a function to be called as soon as
			 * that option has been parsed and processed.
			 */
  int         ret_value;/* if 0: rGetoptLong returns the index in the array
			 * else return that value, should be positive
			 */
} trGetoptLong;

/* Beside the index of the ret_value, rGetoptLong returns one of the following
 * values:
 */
# define rNO_MORE_OPTION       -1
# define rNO_SUCH_OPTION       -2
# define rOPTION_NO_ARG_ALLOWD -3
# define rOPTION_ARG_MISSING   -4
# define rERROR_IN_OPTION_ARG  -5
# define rAMBIGUOUS_OPTION     -6
# define rERROR_IN_OPTION_SPEC -7
# define rERROR_IN_OPTION_FILE -9
# define rERROR_IN_WRITE      -10

extern int rGetoptLong (int argc, char *const *argv, trGetoptLong *r_options);
/* If a option has been found and is unique
 * then rOptIndex = index of the option in the options array
 *      if   options[rOptIndex].ret_value == 0
 *      then return rOptIndex
 *      else return options[rOptIndex].ret_value
 *      fi
 *      Note: take care, that all ret_value's are different from the
 *            indices into the options-array!
 *      if the option takes an argument
 *      then rOptarg points the the argument string
 *           if   the argument type is an integer
 *           then rOptargInt = the integer value
 *                if   there is an error
 *                then return rERROR_IN_OPTION_ARG
 *                fi
 *           fi
 *           if   the argument type is a boolean
 *           then rOptargBool = the boolean value
 *                if   there is an error
 *                then return rERROR_IN_OPTION_ARG
 *                fi
 *           fi
 *           if the argument type is a list of integer or string
 *           and a variable is given
 *           then allocate enough memory to hold each element
 *           fi
 *           In any case set rOptarg to the argument string.
 *           If options[rOptIndex].variable != NULL store the value.
 *      else rOptarg = NULL
 *           if the option is of type rEnumArg
 *           then rOptargInt get the value assigned
 *           fi
 *      fi
 * else if there is no more option             then return rNO_MORE_OPTION
 * else if the given option name is ambiguous  then return rAMBIGUOUS_OPTION
 * else return one of the error code.
 * fi
 * The special argument `--' forces an end of option-scanning regardless of
 * the scanning mode.
 * Note:
 *  In the first call of rGetoptLong the max-field of all list-option arguments
 *  is set to -1. Therefore a loop "for (i = 0; i < variable.max; i++)" is
 *  legal to use.
 */

# define rOPT_KEY(x)  ((x)+10000)
/* When defining ret_value's use rOPT_KEY to avoid clashes with option indices
 * and those letters that's useful if you have many command line options.
 */

extern int   rOptIndex;     /* the index in the options array  */
extern char *rOptoptLong;   /* the actual accepted option text */
extern rbool rOptargBool;   /* if a boolean flag is given      */
extern long  rOptargInt;    /* if an integer argument is given */

extern trGetoptLong *rGetoptConcat (trGetoptLong *opts1, trGetoptLong *opts2);
/* concats the two option arrays and return a new one. */

extern void  rGetoptInitVars (trGetoptLong *r_options);
/* Initializes all variables given in r_options.
 * - Variables of options with optional arguments are initialied to 0.
 * - Variables of options with lists max = size = elems = 0, delim not modified
 * - Variables of options with type rEnumArg are not modified.
 * - all others:
 *   if r_option[i].value == NULL
 *   then  0's are copied to r_option[i].variable
 *   else  r_option[i].value is copied to r_option[i].variable
 */

extern void  rGetoptWrite (FILE *r_file, trGetoptLong *r_options,
			   rbool r_all);
/* Write all options which have a variable != NULL to the file
 * return true, if everything was ok, else false.
 * if all == rtrue, the option names of options without a variable
 * are written as comments.
 * The format of the written file see rGetoptRead().
 */

extern rbool rGetoptWriteName (const char *r_filename, trGetoptLong *r_options,
			       rbool r_all);
/* Calls rGetoptWrite for the file "r_filename".
 * "-" stands for stdout, if the file is not writable, returns false.
 */

extern int rGetoptWriteFunc (trGetoptLong *r_options, int r_index);
/* Calls rGetoptWrite for the option by r_options[r_index].variable,
 * which should of type roStringArg.
 * The value "-" indicates write to stdout.
 * If everthing is ok
 * then returns r_index
 * else returns rERROR_IN_WRITE and rOptmsg contains an
 *      appropriate message.
 */

extern rbool rGetoptRead (FILE *r_file, trGetoptLong *r_options);
/* Reads option values from the given file.
 * On Success, returns true.
 * The format of the file is:
 *  - each line contains one option (without the leading '--')
 *  - blank lines are ignored
 *  - all blanks in a line are ignored
 *  - for options with arguments: between the option name, the = and the value
 *    blanks are allowed
 *  - all text following a # is treated as a comment (i.e. ignored)
 *  - lines may be continued, if ended with a \ character
 */

extern rbool rGetoptReadName (const char *r_filename, trGetoptLong *r_options);
/* Read file "r_filename" with rGetoptRead()
 * If everything is ok, returns true, else false.
 */

extern int rGetoptReadFunc (trGetoptLong *r_options, int r_index);
/* Read the option file specified by r_options[r_index].variable, which should
 * of type rStringArg.
 * If everthing is ok
 * then returns r_index
 * else rERROR_IN_OPTION_FILE and rOptmsg contains an appropriate message.
 */

extern void rGetoptShow (FILE *r_file, trGetoptLong *r_options,
			 const char *r_prefix, FILE *r_help);
/* Write to file the name of all options, and their expected types.
 * The listing is sorted:
 *   1. all options which have a short name.
 *   2. all other options.
 * If help != NULL, reads the help-file and emits the text found for a
 * given option.
 * Format of the help-file:
 * - Lines starting with # are ignored (comments)
 * - A line starting with -- followed by an long option name starts the
 *   help text for that option. The lines following that line are
 *   emitted until the next option starts or a line containing only --
 *   is seen.
 * - The lines following a --@START@ tag are written before all other
 *   options and the lines following --@END@ are written after all options.
 */

extern rbool rGetoptShowName (FILE *r_file, trGetoptLong *r_options,
			      const char *r_prefix,
			      const char *r_help_name,
			      const char *r_help_path);
/* if r_help_name != NULL o0ens that file and calls rGetoptShow
 * If everything is ok, returns true, else rOptmsg contains a message and false
 * is returned.
 * If r_help_path == NULL
 * then the file is searched in the actual directory
 * else in r_help_path
 */

/*****************************************************************************/

/* An Example:
 *   rbool                  opt_verbose:
 *   long int               opt_nr;
 *   trGetoptStringListArg *opt_words   = {",;"};
 *   int                    opt_cases   = 0;         // default value
 *   char                  *opt_str;
 *   char                  *opt_opt_file;
 *
 * static int nr_func (trGetoptLong *options, int index)
 * {
 *  // do something here with the option
 *  return index;
 * }
 *
 * static int usage (trGetoptLong *options, int index)
 * {
 *  printf ("usage: foo [options] [<file> ...]\n");
 *  printf ("options are:\n");
 *  if (!rGetoptShowName (stdout, options, "  ",
 *			 (options[index].ret_value == rOPT_KEY ('M'))?
 *				"foo-help.txt" : NULL, NULL)
 *     printf ("%s\n", rOptMsg);
 *  }
 *  exit (0);
 *  return index; // to please the compiler
 * }
 *
 *   trGetoptLong options[] = {
 *    {"help",        "h",  rBoolArg,    NULL,         0, usage, rOPT_KEY('h')},
 *    {"manual",      "M",  rBoolArg,    NULL,         0, usage, rOPT_KEY('M')},
 *    {"verbose",     "v",  rBoolArg,    &opt_verbose},
 *    {"Version",     "V",  rBoolArg,    NULL,         0, NULL,  rOPT_KEY('V')},
 *    {"option_file", "o",  rStringArg,  &opt_opt_file,0, rGetoptReadFunc},
 *    {"nr",          "n",  rIntArg,     &opt_nr,      0, nr_func},
 *    {"str",         0,    rStringArg,  &opt_str,     "str-default"},
 *    {"word",        "w",  rlStringArg, &opt_words},
 *    {"case-a",      "a",  rEnumArg,    &opt_cases, (void*)1},
 *    {"case-b",      "b",  rEnumArg,    &opt_cases, (void*)2},
 *    {"case-c",      "c",  rEnumArg,    &opt_cases, (void*)3},
 *    {0} // must be the last item in the array
 *   };
 *   // Note: "trailing" 0-values may be omitted in static initializers!
 *
 *   int option;
 *   rGetoptinitVars (options);
 *   while ((option = rGetoptLong (argc, argv, options)) ! rNO_MORE_OPTION) {
 *     switch (option) {
 *       case rOPT_KEY('V'):
 *          printf ("version: 4711\n");
 *          break;
 *       default:
 *          if (option < 0) {
 *           printf ("error %s using option %s\n", rOptmsg, rOptoptLong);
 *          }
 *          // no need to handle other options, since their arguments are
 *          // stored in the corresponding variables, or functions are called
 *          break;
 *     }
 *   }
 *
 *   if (opt_verbose) {
 *     for (i = 0; i < opt_word.max; i++) {
 *       printf (" word = %s\n", opt_word.elem[i]);
 *     }
 *   }
 */

/*****************************************************************************/

/*
 * Log: rGetopt.h,v $
 * Revision 1.41  2007/01/10 17:23:23  vollmer
 * fixed some initializations
 *
 * Revision 1.40  2006/09/05 16:31:43  vollmer
 * Compiles now without warnings under G++, GCC and MS-cl
 *
 * Revision 1.39  2006/08/24 14:19:36  vollmer
 * In order to give a correct error message, store second char of an unknown
 * option in rOptopt2
 *
 * Revision 1.38  2006/04/28 08:40:40  vollmer
 * avoid a bug when compiling under aix64
 *
 * Revision 1.37  2006/02/06 14:01:30  vollmer
 * Added a name to a struct (to avoid a g++ warning)
 *
 * Revision 1.36  2004/01/10 16:50:52  vollmer
 * besides 0 allow "" as empty short option name
 *
 * Revision 1.29  2003/12/09 10:06:54  vollmer
 * added: rGetoptReadName, rGetoptReadFunc, rGetoptShowName
 *
 * Revision 1.27  2003/11/28 19:43:23  vollmer
 * added rGetoptInitVars
 *
 * Revision 1.25  2003/11/24 13:49:08  vollmer
 * rGetoptLong: Set max field of list argument option to -1 in the first call
 *
 * Revision 1.24  2003/11/24 09:42:04  vollmer
 * added rCardArg, roCardArg, rlCardArg
 *
 * Revision 1.23  2003/11/21 10:08:04  vollmer
 * added some prefix to parameter names
 *
 * Revision 1.21  2003/11/20 14:36:43  vollmer
 * rGetoptShow: emit sorted options
 *
 * Revision 1.20  2003/11/20 13:37:37  vollmer
 * added rGetoptConcat
 *
 * Revision 1.19  2003/11/20 10:30:47  vollmer
 * reordered fields in options-array, so that it easier to emit more values
 *
 * Revision 1.18  2003/11/20 10:04:08  vollmer
 * added rEnumArg
 *
 * Revision 1.17  2003/11/20 08:17:43  vollmer
 * added rBoolNegArg
 *
 * Revision 1.16  2003/11/20 08:03:29  vollmer
 * added rOPT_KEY macro
 *
 * Revision 1.15  2003/11/18 13:46:00  vollmer
 * added long option names (rGetoptLong)
 *
 * Revision 1.14  2002/10/18 07:34:36  vollmer
 * Removed dependency from Errors.h
 *
 * Revision 1.13  2002/08/23 07:34:02  vollmer
 * replace call of abort() by Reuse_Exit()
 *
 * Revision 1.12  2001/09/24 07:57:58  vollmer
 * added rGetoptArgumentWithEqual flag
 *
 * Revision 1.11  2001/09/11 07:13:46  vollmer
 * added rGetoptOptionalWithEqual flag
 *
 * Revision 1.10  2001/06/20 13:55:45  vollmer
 * Added two-letter options indicated by `!' after the first option letter.
 *
 * Revision 1.8  2000/08/15 07:15:53  vollmer
 * fixed: if first case of optstring is a '-', now the correct option '\1'
 *        (character code 1) is returned for non-option arguments;
 * 	old: the character '1' was returned.
 *
 * Revision 1.7  2000/05/08 11:17:01  vollmer
 * fixed typing errors
 *
 * Revision 1.4  2000/05/03 13:37:27  vollmer
 * compiles now under C,C++ (gcc) as well as under Microsoft Visual Studio
 *
 * Revision 1.0  1999/11/11 15:41:32  grosch
 * Initial revision
 *
 * Revision 1.3  1998/10/14 12:53:22  vollmer
 * removed `extern "C++"' around everything in case of C++
 *
 * Revision 1.2  1998/09/18 14:38:00  vollmer
 * changed error messages for rOptmsg
 *
 * Revision 1.1  1998/09/09 13:23:29  vollmer
 * Initial revision
 */

# endif
