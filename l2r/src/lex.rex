/* $Id: lex.rex,v 1.8 2008/10/09 21:03:13 grosch Exp $ */

/*
 * $Log: lex.rex,v $
 * Revision 1.8  2008/10/09 21:03:13  grosch
 * removed superfluous semicolons (because of IBM's xlc)
 *
 * Revision 1.7  2000/09/04 14:28:37  grosch
 * removed type cardinal
 *
 * Revision 1.6  2000/04/03 10:29:00  grosch
 * added missing assignment of Attribute.Position
 *
 * Revision 1.5  1997/05/27 21:46:44  grosch
 * truncation of filenames to 8.3 format
 *
 * Revision 1.4  1997/01/19 18:02:36  grosch
 * fixed bug at: strlen (sprintf (q ,%d, x))
 *
 * Revision 1.3  1996/09/30  23:30:35  grosch
 * bug fixes, improvements, and cosmetic changes
 *
 * Revision 1.2  1996/05/14  20:11:34  grosch
 * fixed bug for MS-DOS at \ \r \n
 * replaced lalr by lark and use Errors.[hc] from reuse
 *
 * Revision 1.1  1995/02/23  19:53:39  grosch
 * renamed Positions to Position, StringMem to StringM, Relations to Relation
 *
 * Revision 1.0  1993/08/17  16:15:50  grosch
 * Initial revision
 *
 */

/************************************************************************/
/*									*/
/* specification of scanner for lex input language in rex syntax	*/
/*									*/
/************************************************************************/

EXPORT {
# include <string.h>
# include "rMemory.h"
# include "Position.h"
# include "StringM.h"
# include "StringBu.h"

extern void print_startconds	();
extern void print_macrodefs	();
extern void print_local		();
extern void put_macro		();

typedef struct	{ tPosition Position;
		  char char_value;
		  char string_value [256];
		} tScanAttribute;

extern void ErrorAttribute ();
}

GLOBAL {
# include <stdio.h>
# include "Errors.h"

# define DPercent	1
# define Startdef	4
# define Translate	5
# define Slash		6
# define Dot		7
# define Question	8
# define Plus		9
# define Times		10
# define LParent	11
# define RParent	12
# define Bar		13
# define Action		14
# define Startcond	15
# define Repeat		16
# define Expansion	17
# define Caret		18
# define Pseudoaction	19
# define String		20
# define Charclass	21
# define Char		22
# define Macrodef	23
# define Translation	24
# define Newline	25
# define Dollar		26

static short k, l;	/* temporary variables for string length	*/
static char v [256];	/* temporary variable for strings		*/
static int level;	/* counter for nested braces in actions		*/

/* struct for lists of strings for start conditions and macro defs.	*/
typedef struct scell {
		tStringRef car;
		struct scell * cdr;
	       } cell;

static cell * startconds  = NULL;	/* list of start conditions	*/
static cell * definitions = NULL;	/* list of macro definitions	*/
static cell * local_section = NULL;	/* text of local section	*/

/* constructor for string lists						*/
static cell * cons (s, p)
   tStringRef s;
   cell * p;
{
  cell * q = (cell *) Alloc (sizeof (cell));
  q->car = s;
  q->cdr = p;
  return q;
}

/* procedures for printing the start conditions				*/
void aux_print_startconds (p)
   cell * p;
{
  if (p != NULL) {
    aux_print_startconds ((cell *) p->cdr);
    (void) printf ("   ");
    WriteString (stdout, p->car);
    (void) printf (",\n");
  }
}

void print_startconds ()
{
  if (startconds != NULL) {
    (void) printf ("\nSTART\n");
    aux_print_startconds ((cell *) startconds->cdr);
    (void) printf ("   ");
    WriteString (stdout, startconds->car);
    (void) printf ("\n");
  }
}

/* procedures for printing the macro definitions			*/
void aux_print_macrodefs (p)
   cell * p;
{
  if (p != NULL) {
    aux_print_macrodefs ((cell *) p->cdr);
    (void) printf ("   ");
    WriteString (stdout, p->car);
    (void) printf ("\n");
  }
}

void print_macrodefs ()
{
  if (definitions != NULL) {
    (void) printf ("\nDEFINE\n\n");
    (void) printf ("/* REM the suffix '_' can be removed from most identifiers */\n\n");
    aux_print_macrodefs (definitions);
  }
}

/* procedures for printing the LOCAL section				*/
void aux_print_local (p)
   cell * p;
{
  if (p != NULL) {
    aux_print_local ((cell *) p->cdr);
    WriteString (stdout, p->car);
  }
}

void print_local ()
{
  if (local_section != NULL) {
    (void) printf ("LOCAL {\n");
    aux_print_local (local_section);
    (void) printf ("}\n");
  }
}

/* put macro to list of definitions					*/
void put_macro (p)
   char *p;
{
  definitions = cons (PutString (p, strlen (p)), definitions);
}

/* put string to text of LOCAL section					*/
void put_local (p)
   char *p;
{
  local_section = cons (PutString (p, strlen (p)), local_section);
}


/* attribute for tokens inserted by parser				*/
void ErrorAttribute (Token, pAttribute)
  int Token;
  tScanAttribute * pAttribute;
  {
    pAttribute->Position = Attribute.Position;
    pAttribute->char_value = '\0';
  }

/* convert character in character class from LEX to REX format		*/
/* returns the number of characters read				*/
static int debracket (t, q)
   char **t;
   char *q;
{
  int x;
  int r;
  char *p = *t;

  if (*p == '\\') {
    *q++ = *p++;
    if ((*p >= '0') && (*p <= '7')) {	/* octal escape to decimal */
      x = 0;
      while ((*p >= '0') && (*p <= '7'))
	x = 8 * x + *p++ - '0';
      (void) sprintf (q ,"%d", x);
      r = 1 + strlen (q);
    } else {				/* any other escape	*/
      *q = *p++;
      r = 2;
    }
  } else {				/* REX special chars	*/
    if ((*p == '-') || (*p == '}') || (*p == ' ') || (*p == '\\')) {
      *q++ = '\\';
      *q = *p++;
      r = 2;
    } else {				/* normal character	*/
      *q = *p++;
      r = 1;
    }
  }
  *t = p;
  return r;
}
}

LOCAL { char *p; }

BEGIN {
  (void) printf ("EXPORT {\n");
  (void) printf ("/* REM the next line can be removed if lark is used */\n");
  (void) printf ("# define lex_interface\n");
  (void) printf ("# include \"Position.h\"\n");
  (void) printf ("typedef struct { tPosition Position; } tScanAttribute;\n");
  (void) printf ("extern void ErrorAttribute ();\n");
  (void) printf ("}\n\n");
  (void) printf ("GLOBAL {\n");
  (void) printf ("/* REM the next four lines can be removed if the features are not used */\n");
  (void) printf ("# define ECHO (void) printf (\"%%s\", yytext)\n");
  (void) printf ("# define yyless yyLess\n");
  (void) printf ("# define yyDoBEGIN(state) { yyPreviousStart = yyStartState; yyStartState = (state) ? (state) : 1; }\n");
  (void) printf ("char yytext [256];\n");
}

EOF {
switch (yyStartState) {
  case InAction	: ;
  case MultiLine: Message ("} missing"	, xxError, Attribute.Position); break;
  case String1	: Message ("' missing"	, xxError, Attribute.Position); break;
  case String2	: Message ("\" missing"	, xxError, Attribute.Position); break;
  case Comment	: Message ("unclosed comment", xxError, Attribute.Position); break;
}
}

DEFINE
	OctDigit	= {0-7} .
	UpperCase	= {A-Z} .
	LowerCase	= {a-z} .
	Digit		= {0-9} .
	AnyChar		= - { \ \t\n } .
	Bracketed	= - { ]\\ } | \\ OctDigit + | \\ ANY  .
	WhiteSpace	= ( \  | \t ) + .

START
	Target1,	/* scanning target after WhiteSpace		*/
	InTarget,	/* scanning text between %{ %}			*/
	InMacro,	/* scanning expression of macro definition	*/
	RulePart,	/* scanning rule part				*/
	Local,		/* scanning local section			*/
	InAction,	/* scanning action in rule part			*/
	MultiLine,	/* scanning multi line action			*/
	String1,	/* action text between single quotes		*/
	String2,	/* action text between double quotes		*/
	Comment,	/* action text in comments			*/
	AfterAction,	/* single line action scanned, but not at eol	*/
	InBrackets,	/* scanning character class			*/
	NowCaret	/* Caret is following after start condition	*/

RULES

/* matching rule for %%, switching between scanner states */
< "%%" ANY * \n / { \ \t\n } :
	{ yyEol (0);
	  if (yyStartState == STD) { yyStart (Local); }
	  else yyStart (InTarget);
	  return DPercent;
	}

< "%%" ANY * \n	:
	{ yyEol (0);
	  if (yyStartState == STD) { yyStart (RulePart); }
	  else yyStart (InTarget);
	  return DPercent;
	}

/* matching rules for tokens in definition part 			*/
/* matching rules for target code, escape special characters		*/
#STD#	< WhiteSpace ANY * : { yyEcho; yyStart (Target1); }

#STD#	< "%{" : { yyStart (InTarget); }

#Target1# ANY + : { yyEcho; }

#Target1# \r ? \n : { yyPrevious; yyEcho; yyEol (0); }

#InTarget# - { % \n } + :
	{ if (yyStartState == Local) { (void) GetWord (v); put_local (v); } else yyEcho; }

#InTarget# % :
	{ if (yyStartState == Local) put_local ("%"); else yyEcho; }

#InTarget# \r ? \n :
	{ if (yyStartState == Local) put_local ("\n"); else yyEcho; yyEol (0); }

#InTarget# < "%}" ANY * : { yyStart (STD); }

#Local# ANY + :
	{ if (yyStartState == Local) { (void) GetWord (v); put_local (v); } else yyEcho; }

#Local# \r ? \n / { \ \t\n } :
	{ put_local ("\n"); yyEol (0); }

#Local# \r ? \n :
	{ put_local ("\n"); yyEol (0); yyStart (RulePart); }

/* process BEGIN macro */
#InTarget, Target1, Local# BEGIN WhiteSpace - {;} * / ; :
	{ k = 5 + GetWord (& v [5]);
	  (void) strcpy (v, "yyDoBEGIN ");
	  v [10] = '(';
	  v [k++] = ')';
	  v [k] = '\0';
	  l += k;
	  if (yyStartState == Local) put_local (v);
	  else (void) printf ("%s", v);
	}

/* matching rule for macro definition					*/
#STD#	< ( UpperCase | LowerCase ) - { \ \t\n } * WhiteSpace ? :
	{ l = GetWord (Attribute.string_value);
	  while (Attribute.string_value [--l] <= ' ')
	    Attribute.string_value [l] = '\0';
	  Attribute.string_value [++l] = '_';
	  Attribute.string_value [++l] = '\0';
	  yyStart (InMacro);
	  return Macrodef;
	}

/* matching rules for start definition					*/
#STD#	< ( "%s" | "%S" | "%x" | "%X" ) ANY * :
	{ l = GetWord (v);
	  (void) strtok (v, " \t\n");
	  do {
	    p = strtok ((char *) NULL, " \t\n");
	    if (p) startconds = cons (PutString (p, strlen (p)), startconds);
	  } while (p);
	  return Startdef;
	}

/* matching rules for character set table				*/
#STD#	< ( "%t" | "%T" ) : { return Translate; }

#STD#	Digit + WhiteSpace ANY * : { return Translation; }

/* lines containing LEX directives are skipped				*/
#STD#	< "%" - { sStTxX%\{\n } ANY * \n :- { yyEol (0); }

/* rule part */
#RulePart# WhiteSpace \r ? \n : { yyEol (0); }

/* matching rules for operators in rule part */
#InMacro, RulePart# "/" : { return Slash	; }
#InMacro, RulePart# "." : { return Dot		; }
#InMacro, RulePart# "?" : { return Question	; }
#InMacro, RulePart# "+" : { return Plus		; }
#InMacro, RulePart# "*" : { return Times	; }
#InMacro, RulePart# "(" : { return LParent	; }
#InMacro, RulePart# ")" : { return RParent	; }
#InMacro, RulePart# "|" : { return Bar		; }

/* matching pseudo action */
#RulePart# WhiteSpace "|" ANY * : { return Pseudoaction; }

/* matching rules for actions in rule part */
#RulePart# WhiteSpace / - { {\n } : { yyStart (InAction); l = 0; }

/* process BEGIN macro */
#InAction, MultiLine# BEGIN WhiteSpace - {;} * / ; :
	{ k = 5 + GetWord (& v [5]);
	  (void) strcpy (v, "yyDoBEGIN ");
	  v [10] = '(';
	  v [k++] = ')';
	  v [k] = '\0';
	  (void) strcpy (& Attribute.string_value [l], v);
	  l += k;
	}

/* skip strings and comments, escape characters if necessary */
#InAction, MultiLine# ' :
	{ yyStart (String1); Attribute.string_value [l++] = '\''; }

#String1# - { '\t\n\\ } + ,
#String1# \\ ANY :
	{ l += GetWord (& Attribute.string_value [l]); }

#String1# ' : { yyPrevious; Attribute.string_value [l++] = '\''; }

#InAction, MultiLine# \" :
	{ yyStart (String2); Attribute.string_value [l++] = '"'; }

#String2# - { "\t\n\\ } + ,
#String2# \\ ANY :
	{ l += GetWord (& Attribute.string_value [l]); }

#String2# \" : { yyPrevious; Attribute.string_value [l++] = '"'; }

#STD, InAction, MultiLine# "/*" :-
	{ yyStart (Comment); }

#Comment# - { *\t\n } + | "*" :-
	{}

#Comment# "*/" :-
	{ yyPrevious; }

#String1, String2# \n :
	{ Attribute.string_value [l++] = '\n';
	  Attribute.string_value [l++] = '\0';
	  l = 0;
	  yyEol (0);
	  return Action;
	}

#String1, String2# \t : { Attribute.string_value [l++] = '\t'; yyTab; }

#InAction# - { ;\"' } : { l += GetWord (& Attribute.string_value [l]); }

/* detect end of action */
#InAction# ";" / \n :
	{ yyStart (RulePart);
	  Attribute.string_value [l++] = ';';
	  Attribute.string_value [l++] = '\0';
	  return Action;
	}

#InAction# ";" :
	{ yyStart (AfterAction);
	  Attribute.string_value [l++] = ';';
	  Attribute.string_value [l++] = '\0';
	  return Action;
	}

#AfterAction# ANY * : { yyStart (RulePart); }

/* actions in curly braces */
#RulePart# WhiteSpace ? "{" : { yyStart (MultiLine); level = 1; l = 0; }

#MultiLine# "{" : { Attribute.string_value [l++] = '{'; ++ level; }

#MultiLine# "}" / \r ? \n :
	{ if (-- level == 0) { Attribute.string_value [l] = '\0'; yyStart (RulePart); return Action; }
	  else Attribute.string_value [l++] = '}';
	}

#MultiLine# "}" :
	{ if (-- level == 0) { Attribute.string_value [l] = '\0'; yyStart (AfterAction); return Action; }
	  else Attribute.string_value [l++] = '}';
	}

#MultiLine# \n :
	{ l += GetWord (& Attribute.string_value [l]); l = 0; yyEol (0); return Action; }

#MultiLine# - { {\}\n } :
	{ (void) GetWord (& Attribute.string_value [l++]); }

/* match start condition and prepare matching of caret */
#RulePart# < "<" - { >\n } + ">" / "^" :
	{ yyStart (NowCaret);
	  l = GetWord (Attribute.string_value);
	  Attribute.string_value [0] = '#';
	  Attribute.string_value [l-1] = '#';
	  return Startcond;
	}

/* match start condition */
#RulePart# < "<" - { >\n } + ">" :
	{ l = GetWord (Attribute.string_value);
	  Attribute.string_value [0] = '#';
	  Attribute.string_value [l-1] = '#';
	  return Startcond;
	}

/* match repeat with one or two counts */
#InMacro, RulePart# "{" Digit + ( "," Digit + ) ? "}" :
	{ l = GetWord (Attribute.string_value);
	  Attribute.string_value [0] = '[';
	  Attribute.string_value [l-1] = ']';
	  p = & Attribute.string_value [1];
	  while ((*p >= '0') && (*p <= '9')) p++;
	  if (*p == ',') *p = '-';
	  return Repeat;
	}

/* match name expansion */
#InMacro, RulePart# "{" ( UpperCase | LowerCase ) - { \}\n } * "}" :
	{ l = GetWord (Attribute.string_value);
	  Attribute.string_value [0] = ' ';
	  Attribute.string_value [l-1] = '_';
	  Attribute.string_value [l++] = ' ';
	  Attribute.string_value [l] = '\0';
	  return Expansion;
	}

/* match caret at beginning of line */
#RulePart# < "^"	: { return Caret; }

/* match caret after start condition */
#NowCaret# "^"	: { yyStart (RulePart); return Caret; }

/* match escape with octal representation */
#InMacro, RulePart# "\" OctDigit + :
	{ Attribute.char_value = 0;
	  (void) GetWord (v);
	  p = & v [1];
	  while (*p) Attribute.char_value = 8 * Attribute.char_value + *p++ - '0';
	  return Char;
	}

/* match character escape */
#InMacro, RulePart# "\" ANY :
	{ (void) GetWord (v);
	  switch (v [1]) {
	    case 'n'	: Attribute.char_value = 10; break;
	    case 'b'	: Attribute.char_value = 8 ; break;
	    case 't'	: Attribute.char_value = 9 ; break;
	    case 'f'	: Attribute.char_value = 12; break;
	    case 'r'	: Attribute.char_value = 13; break;
	    default	: Attribute.char_value = v [1]; break;
	  }
	  return Char;
	}

/* NOT has to be escaped */
#InMacro, RulePart# \NOT :
	{ (void) strcpy (Attribute.string_value, "\\NOT"); return String; }

/* numbers have to be escaped */
#InMacro, RulePart# Digit + :
	{ l = GetWord (& Attribute.string_value [1]);
	  Attribute.string_value [0] = '"';
	  Attribute.string_value [++l] = '"';
	  Attribute.string_value [++l] = '\0';
	  return String;
	}

/* match string */
#InMacro, RulePart# \" - {\n"} * \" :
	{ l = GetWord (Attribute.string_value); return String; }

/* match character class */
/* at first, match opening bracket and caret, if existing */
#InMacro, RulePart# "[" "^" ? :
	{ yyStart (InBrackets);
	  l = GetWord (Attribute.string_value);
	  if (l == 2) {
	    Attribute.string_value [0] = '-';
	    Attribute.string_value [1] = '{';
	  }
	  else
	    Attribute.string_value [0] = '{';
	}

/* match character range char - char */
#InBrackets# Bracketed "-" Bracketed :-
	{ (void) GetWord (v);
	  p = v;
	  l += debracket (& p, & Attribute.string_value [l]);
	  Attribute.string_value [l++] = '-';
	  p++;
	  l += debracket (& p, & Attribute.string_value [l]);
	}

/* match arbitrary character */
#InBrackets# Bracketed :-
	{ (void) GetWord (v);
	  p = v;
	  l += debracket (& p, & Attribute.string_value [l]);
	}

/* match closing bracket */
#InBrackets# "]" :-
	{ yyPrevious;
	  Attribute.string_value [l++] = '}';
	  Attribute.string_value [l++] = '\0';
	  return Charclass; }

/* match dollar as candidate for right context indicator */
#InMacro, RulePart# "$" / { |\ \t } : { return Dollar; }

\f | \r | \26 :- {}

/* match letter or special character if not matched by previous rules */
AnyChar : { (void) GetWord (v); Attribute.char_value = v [0]; return Char; }

/* match newline and stop accepting macro expansion */
\r ? \n	: { yyEol (0); if (yyStartState == InMacro) yyStart (STD); return Newline; }
