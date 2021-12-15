/* $Id: Tables.c,v 1.7 2001/01/25 16:18:22 grosch rel $ */

/*
 * $Log: Tables.c,v $
 * Revision 1.7  2001/01/25 16:18:22  grosch
 * introduced ifdef HAVE_ARGS
 * deleted superfluous typedefs
 *
 * Revision 1.6  1997/05/27 21:46:12  grosch
 * truncation of filenames to 8.3 format
 *
 * Revision 1.5  1996/10/01 12:20:00  grosch
 * some bug fixes and improvements
 *
 * Revision 1.4  1995/02/23  19:50:30  grosch
 * renamed Positions to Position, StringMem to StringM, Relations to Relation
 *
 * Revision 1.3  1995/02/06  11:26:00  grosch
 * added escape for keywords
 *
 * Revision 1.2  1994/05/30  10:10:28  grosch
 * adaption to lark concerning YYACCEPT and YYABORT
 *
 * Revision 1.1  1994/01/30  14:36:51  grosch
 * renamed bool to rbool
 *
 * Revision 1.0  1993/08/17  16:24:29  grosch
 * Initial revision
 *
 */

#include <stdio.h>
#include "rString.h"
#include "rMemory.h"
#include "StringM.h"
#include "Idents.h"
#include "Tables.h"

/* types for nodes of linked lists */
struct tName {
		tStringRef name;
		tStringRef alias;
		struct tName *cdr;
	     };

struct tToken {
		tStringRef name;
		int value;
		struct tToken *cdr;
	     };

struct tType {
		tStringRef name;
		tStringRef type;
		struct tType *cdr;
	     };

struct tRule {
		int tag; /* 0 = text, 1 = rule */
		union {
			struct tCell * text;
			struct tElmt * rule;
		      } car;
		struct tRule *cdr;
	     };

/* heads of linked lists */
struct tName * name_list = 0;
struct tToken * token_list = 0;

struct tType * type_list = 0;
struct tCell * oper_list = 0;
struct tCell * global_list = 0;
struct tCell * action_list;

tStringRef start_symbol = 0;

struct tElmt * rule_elmts_list;
struct tCell * text_list = 0;
struct tRule * rule_list = 0;

int token_val;
int type = 0;
int generate_actions = 1;

rbool MyEqual
# ifdef HAVE_ARGS
   (tStringRef r, tString s)
# else
   (r, s) tStringRef r; tString s;
# endif
{
  return LengthSt (r) == strlen (s) && IsEqualSt (r, s);
}

void print_symbol
# ifdef HAVE_ARGS
   (tStringRef r)
# else
   (r) tStringRef r;
# endif
{
  register struct tName * p;
  char v[256];

  StGetString (r, v);
  if (v[0] == '\'') {
    (void) printf ("%s", v);
    return;
  }
  for (p = name_list; p; p = p->cdr)
    if (MyEqual (p->name, v)) {
      WriteString (stdout, p->alias);
      return;
    }
  (void) printf ("%s", v);
}

/* check if name is already in name_list */
int unique_name
# ifdef HAVE_ARGS
   (char * v)
# else
   (v) char * v;
# endif
{
  register struct tName * p;
  for (p = name_list; p; p = p->cdr)
    if (p->alias && MyEqual (p->alias, v)) return 0;
  return 1;
}

/* if name not yet in list, append it */
void put_name
# ifdef HAVE_ARGS
   (tStringRef name)
# else
   (name) tStringRef name;
# endif
{
  register struct tName * p;
  char s[256];

  for (p = name_list; p; p = p->cdr) {
    StGetString (name, s);
    if (MyEqual (p->name, s)) return;
  }
  p = (struct tName *) Alloc (sizeof (struct tName));
  p->name  = name;
  p->alias = 0;
  p->cdr   = name_list;
  name_list = p;
}

/* transform every ident with dots */
void process_names ARGS ((void))
{
  register struct tName * p;
  register int i;
  int dotflag;
  char s[256];
  char v[256];
  tIdent keyword;

  (void) MakeIdent ("BEGIN"	, 5);
  (void) MakeIdent ("CLOSE"	, 5);
  (void) MakeIdent ("EXPORT"	, 6);
  (void) MakeIdent ("GLOBAL"	, 6);
  (void) MakeIdent ("IMPORT"	, 6);
  (void) MakeIdent ("LEFT"	, 4);
  (void) MakeIdent ("LOCAL"	, 5);
  (void) MakeIdent ("NONE"	, 4);
  (void) MakeIdent ("OPER"	, 4);
  (void) MakeIdent ("PARSER"	, 6);
  (void) MakeIdent ("PREC"	, 4);
  (void) MakeIdent ("RIGHT"	, 5);
  (void) MakeIdent ("RULE"	, 4);
  (void) MakeIdent ("SCANNER"	, 7);
  (void) MakeIdent ("START"	, 5);
  (void) MakeIdent ("TOKEN"	, 5);

  keyword = MaxIdent ();

  for (p = name_list; p; p= p->cdr) {
    StGetString (p->name, s);
    if (s[0] != '\'') {
      dotflag = 0;
      for (i = 0; s[i]; i++)
        if (s[i] == '.') {
	  dotflag = 1;
	  s[i] = '_';
        }
      if (dotflag) {
        i = 0;
        do {
	  i++;
	  (void) sprintf (v, "%s_%d", s, i);
        } while (! unique_name (v));
        p->alias = PutString (v, strlen (v));
      } else if (MakeIdent (s, LengthSt (p->name)) <= keyword) {
	(void) sprintf (v, "\\%s", s);
        p->alias = PutString (v, strlen (v));
      } else
        p->alias = p->name;
    } else
      p->alias = p->name;
  }
}

/* if token not yet in list, append it */
void put_token
# ifdef HAVE_ARGS
   (tStringRef name, int value)
# else
   (name, value) tStringRef name; int value;
# endif
{
  register struct tToken * p;
  char s[256];

  for (p = token_list; p; p = p->cdr) {
    StGetString (name, s);
    if (MyEqual (p->name, s)) return;
  }
  p = (struct tToken *) Alloc (sizeof (struct tToken));
  p->name  = name;
  p->value = value;
  p->cdr   = token_list;
  token_list = p;
}

/* print the TOKEN section */
void aux_print_tokens
# ifdef HAVE_ARGS
   (struct tToken * p)
# else
   (p) struct tToken * p;
# endif
{
  register int i, v;
  char s[256];

  if (p) {
    aux_print_tokens (p->cdr);
    (void) printf ("\t");
    print_symbol (p->name);
    if (p->value) {
      v = p->value;
    } else {
      StGetString (p->name, s);
      if (s[0] == '\'') {
	if (s[1] == '\\') {
	  switch (s[2]) {
	    case 'b' : v = 8; break;
	    case 't' : v = 9; break;
	    case 'n' : v = 10; break;
	    case 'f' : v = 12; break;
	    case 'r' : v = 13; break;
	    default :
	      if ((s[2] >= '0') && (s[2] <= '7')) {
		v = 0;
		for (i = 2; s[i] != '\''; i++)
		  v = 8 * v + s[i] - '0';
	      } else
		v = (int) s[2];
	      break;
	  }
	} else
	  if ((s[1] == '\'') && (s[2] == '\'') && (s[4] =='\0')) {
	    v = (int) '\'';
	  } else
	    if (s[3]) {
	      v = token_val++;
	    } else
	      v = (int) s[1];
      } else
	v = token_val++;
    }
    if (v)
      (void) printf ("\t= %d", (int) v);
    (void) printf ("\n");
  }
}

void print_tokens ARGS ((void))
{
  token_val = 257;
  (void) printf ("\nTOKEN\n");
  aux_print_tokens (token_list);
  (void) printf ("\terror\n");
}

/* put type of symbol to list */
void put_type
# ifdef HAVE_ARGS
   (tStringRef name, tStringRef type)
# else
   (name, type) tStringRef name; tStringRef type;
# endif
{
  struct tType *p;

  p = (struct tType *) Alloc (sizeof (struct tType));
  p->name = name;
  p->type = type;
  p->cdr  = type_list;
  type_list = p;
}

/* get type of symbol */
tStringRef search_type
# ifdef HAVE_ARGS
   (tStringRef t)
# else
   (t) tStringRef t;
# endif
{
  char s[256];
  register struct tType * p;

  StGetString (t, s);
  for (p = type_list; p; p = p->cdr)
    if (MyEqual (p->name, s)) return p->type;
  return 0;
}

tStringRef aux_get_type
# ifdef HAVE_ARGS
   (struct tElmt * p, int * n)
# else
   (p, n) struct tElmt * p; int * n;
# endif
{
  if (p->tag != 2 /* lhs */) {
    tStringRef t = aux_get_type (p->cdr, n);
    if (p->tag == 0 /* symbol */ || p->tag == 1 /* action */ || p->tag == 4 /* last action */) -- * n;
    if (! * n) {
      return search_type (p->car.symbol);
    } else {
      return t;
    }
  } else {
    return 0;
  }
}

tStringRef aux_get_type_0 ARGS ((void))
{
  register struct tElmt * p;

  for (p = rule_elmts_list; p->cdr; p = p->cdr);
  return search_type (p->car.symbol);
}

/* if n = 0 get type of lhs, else of n-th rhs item, 0 if no type */
tStringRef get_type
# ifdef HAVE_ARGS
   (int n)
# else
   (n) int n;
# endif
{
  if (n < 0) {
    return 0;
  } else if (! n) {
    return aux_get_type_0 ();
  } else
    return aux_get_type (rule_elmts_list, &n);
}

/* put operand to list */
void put_oper
# ifdef HAVE_ARGS
   (tStringRef s)
# else
   (s) tStringRef s;
# endif
{
  struct tCell * p;

  p = (struct tCell *) Alloc (sizeof (struct tCell));
  p->car = s;
  p->cdr = oper_list;
  oper_list = p;
}

/* print OPER section */
void aux_print_opers
# ifdef HAVE_ARGS
   (struct tCell * p)
# else
   (p) struct tCell * p;
# endif
{
  if (p) {
    aux_print_opers (p->cdr);
    print_symbol (p->car);
    (void) printf ("\t");
  }
}

void print_opers ARGS ((void))
{
  if (oper_list) {
    (void) printf ("\nOPER");
    aux_print_opers (oper_list);
    (void) printf ("\n");
  }
}

/* put text to GLOBAL section */
void put_global
# ifdef HAVE_ARGS
   (tStringRef v)
# else
   (v) tStringRef v;
# endif
{
  struct tCell * p;

  p = (struct tCell *) Alloc (sizeof (struct tCell));
  p->car = v;
  p->cdr = global_list;
  global_list = p;
}

char * YACC1 [] = {
   "\n",
   "/* REM the next 10/13 lines can be removed if the features are not used */\n",
   "# define tParsAttribute	YYSTYPE\n",
   "# define yySynAttribute	yyval\n",
   "# define yyTerminal	yychar\n",
   "# define yyclearin\n",
   "# define yyerrok\n",
   "# ifndef YYMAXDEPTH\n",
   "# define YYMAXDEPTH	150\n",
   "# endif\n",
   0
};

char * YACC2 [] = {
   "# ifndef YYSTYPE\n",
   "# define YYSTYPE	int\n",
   "# endif\n",
   0
};

char * YACC3 [] = {
   "YYSTYPE yylval;\n",
   "# define yylvalDef\n",
   "# define YYERROR\n",
   "# define YYBACKUP(newtoken, newvalue)	YYERROR\n",
   "# define YYRECOVERING()	yyIsRepairing\n",
   "\n",
   0
};

void yacc_globals ARGS ((void))
{
   register int i;

   for (i = 0; YACC1 [i]; i++)
      put_global (PutString (YACC1 [i], strlen (YACC1 [i])));
   if (! type) for (i = 0; YACC2 [i]; i++)
      put_global (PutString (YACC2 [i], strlen (YACC2 [i])));
   for (i = 0; YACC3 [i]; i++)
      put_global (PutString (YACC3 [i], strlen (YACC3 [i])));
}

/* print GLOBAL section */
void aux_print_global
# ifdef HAVE_ARGS
   (struct tCell * p)
# else
   (p) struct tCell * p;
# endif
{
  if (p) {
    aux_print_global (p->cdr);
    WriteString (stdout, p->car);
  }
}

void print_global ARGS ((void))
{
  if (global_list) {
    (void) printf ("EXPORT {\n");
    (void) printf ("/* REM the next two lines can be removed in most cases */\n");

    (void) printf ("# define yacc_interface\n");
    (void) printf ("# define lex_interface\n");
    (void) printf ("}\n\n");
    (void) printf ("GLOBAL {\n");
    aux_print_global (global_list);
    (void) printf ("}\n");
  }
}

/* put text to action */
void put_action
# ifdef HAVE_ARGS
   (tStringRef v)
# else
   (v) tStringRef v;
# endif
{
  struct tCell * p;

  p = (struct tCell *) Alloc (sizeof (struct tCell));
  p->car = v;
  p->cdr = action_list;
  action_list = p;
}

/* put action list to rule */
void put_whole_action
# ifdef HAVE_ARGS
   (struct tCell * v, rbool b)
# else
   (v, b) struct tCell * v; rbool b;
# endif
{
  struct tElmt * p;

  p = (struct tElmt *) Alloc (sizeof (struct tElmt));
  p->tag = b ? 4 : 1;
  p->car.action = v;
  p->cdr = rule_elmts_list;
  rule_elmts_list = p;
}

/* put lhs to rule */
void put_lhs
# ifdef HAVE_ARGS
   (tStringRef v)
# else
   (v) tStringRef v;
# endif
{
  struct tElmt * p;

  p = (struct tElmt *) Alloc (sizeof (struct tElmt));
  p->tag = 2;
  p->car.symbol = v;
  p->cdr = rule_elmts_list;
  rule_elmts_list = p;
}

/* put symbol to rule */
void put_symbol
# ifdef HAVE_ARGS
   (tStringRef v)
# else
   (v) tStringRef v;
# endif
{
  struct tElmt * p;

  p = (struct tElmt *) Alloc (sizeof (struct tElmt));
  p->tag = 0;
  p->car.symbol = v;
  p->cdr = rule_elmts_list;
  rule_elmts_list = p;
}

/* put delimiter to rule */
void put_delim
# ifdef HAVE_ARGS
   (tStringRef v)
# else
   (v) tStringRef v;
# endif
{
  struct tElmt * p;

  p = (struct tElmt *) Alloc (sizeof (struct tElmt));
  p->tag = 3;
  p->car.symbol = v;
  p->cdr = rule_elmts_list;
  rule_elmts_list = p;
}

/* put rule to RULE section */
void put_rule
# ifdef HAVE_ARGS
   (struct tElmt * v)
# else
   (v) struct tElmt * v;
# endif
{
  struct tRule * p;

  p = (struct tRule *) Alloc (sizeof (struct tRule));
  p->tag = 1;
  p->car.rule = v;
  p->cdr = rule_list;
  rule_list = p;
}

/* put text to list */
void append_text
# ifdef HAVE_ARGS
   (tStringRef v)
# else
   (v) tStringRef v;
# endif
{
  struct tCell * p;

  p = (struct tCell *) Alloc (sizeof (struct tCell));
  p->car = v;
  p->cdr = text_list;
  text_list = p;
}

/* put text list to rule */
void put_text
# ifdef HAVE_ARGS
   (struct tCell * v)
# else
   (v) struct tCell * v;
# endif
{
  struct tRule * p;

  if (v) {
    p = (struct tRule *) Alloc (sizeof (struct tRule));
    p->tag = 0;
    p->car.text = v;
    p->cdr = rule_list;
    rule_list = p;
    text_list = 0;
  }
}

/* print RULE section */
void print_actions
# ifdef HAVE_ARGS
   (struct tCell * p)
# else
   (p) struct tCell * p;
# endif
{
  if (p) {
    print_actions (p->cdr);
    WriteString (stdout, p->car);
  }
}

void print_rule_elmts
# ifdef HAVE_ARGS
   (struct tElmt * p)
# else
   (p) struct tElmt * p;
# endif
{
  if (p) {
    print_rule_elmts (p->cdr);
    switch (p->tag) {
      case 1: /* action	*/
	if (generate_actions) {
	   (void) printf ("{{");
	   print_actions (p->car.action);
	   (void) printf (" ");
	}
	break;
      case 4: /* last action */
	if (generate_actions) {
	   (void) printf ("{ $$ = $1; {");
	   print_actions (p->car.action);
	   (void) printf (" ");
	}
	break;
      case 3: /* delim	*/
      case 0: /* symbol	*/
	print_symbol (p->car.symbol); (void) printf (" ");
	break;
      default: /* lhs	*/
	;
    }
  }
}

void print_text
# ifdef HAVE_ARGS
   (struct tCell * p)
# else
   (p) struct tCell * p;
# endif
{
  if (p) {
    print_text (p->cdr);
    WriteString (stdout, p->car);
  }
}

void aux_print_rules
# ifdef HAVE_ARGS
   (struct tRule * p)
# else
   (p) struct tRule * p;
# endif
{
  if (p) {
    aux_print_rules (p->cdr);
    if (p->tag) {
      print_rule_elmts (p->car.rule);
    } else
      print_text (p->car.text);
  }
}

void print_rules ARGS ((void))
{
  (void) printf ("\nRULE\n");
  if (start_symbol) {
    (void) printf ("\n__START__\t: ");
    print_symbol (start_symbol);
    (void) printf (" .");
  }
  aux_print_rules (rule_list);
  (void) printf ("\n");
}
