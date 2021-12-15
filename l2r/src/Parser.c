/* $Id: Parser.c,v 1.54 2010/07/07 09:53:21 grosch Exp $ */

# include "Parser.h"
# include <stdio.h>
# include <stddef.h>

# ifndef EXTERN_C_BEGIN
#  define EXTERN_C_BEGIN
#  define EXTERN_C_END
# endif

EXTERN_C_BEGIN
# include "rString.h"
# include "rSystem.h"
# include "rMemory.h"
# include "General.h"
# include "DynArray.h"
# ifndef NO_RECOVER
#  include "Sets.h"
# endif
# if ! defined NO_RECOVER | defined YYReParse
#  include "Errors.h"
# endif
# if defined YYDEBUG | defined lex_interface
#  include "Position.h"
# endif
EXTERN_C_END

# ifdef lex_interface
#  define GetToken	yylex
     extern int yylex ARGS ((void));
#  ifndef AttributeDef
#   include "Position.h"
	   typedef struct { tPosition Position; } tScanAttribute;
	   tScanAttribute	Attribute = {{ 0, 0 }};
#  endif
#  ifndef ErrorAttributeDef
#   define ErrorAttribute(Token, RepairAttribute)
#  endif
#  ifndef yyGetAttribute
#   define yyGetAttribute(yyAttrStackPtr, a) * yyAttrStackPtr = yylval
#  endif
# else
#  include "Scanner.h"
#  ifndef yyGetAttribute
#   define yyGetAttribute(yyAttrStackPtr, a) (yyAttrStackPtr)->Scan = a
#  endif
# endif

static void yyExit ARGS ((void)) { rExit (1); }

	void		(* Exit) ARGS ((void)) = yyExit;

static void yyCheckMemory
# ifdef HAVE_ARGS
   (char * ptr)
# else
   (ptr) char * ptr;
# endif
{
  if (! (ptr)) Exit ();
}

# define yyMakeArray(ptr, count, size)	 { MakeArray (ptr, count, size); \
					   yyCheckMemory (* ptr); }
# define yyExtendArray(ptr, count, size) { ExtendArray (ptr, count, size); \
					   yyCheckMemory (* ptr); }

typedef unsigned short	yyStateRange	;
typedef unsigned short	yySymbolRange	;
typedef struct { yyStateRange Check, Next; } yytComb;
typedef enum {
yyNT0_intern	= 27,
yyNTsource	= 28,
yyNTsource_3	= 29,
yyNTsource_2	= 30,
yyNTsource_1	= 31,
yyNTdefs	= 32,
yyNTdefs_1	= 33,
yyNTdefs_2	= 34,
yyNTdef	= 35,
yyNTdef_1	= 36,
yyNTdef_2	= 37,
yyNTmacrodef	= 38,
yyNTrules	= 39,
yyNTrules_1	= 40,
yyNTrules_2	= 41,
yyNTrule	= 42,
yyNTrule_1	= 43,
yyNTrule_2	= 44,
yyNTstartcond	= 45,
yyNTcaret	= 46,
yyNTendcond	= 47,
yyNTendcond_1	= 48,
yyNTfullexpr	= 49,
yyNTfullexpr_1	= 50,
yyNTexpr	= 51,
yyNTexpr_1	= 52,
yyNTsequence	= 53,
yyNTsecondary	= 54,
yyNTprimary	= 55,
yyNTprimary_1	= 56,
yyNTaction	= 57,
yyNTaction_3	= 58,
yyNTaction_1	= 59,
yyNTaction_2	= 60
} yytNonterminal;
typedef struct { short yyMode; rbool yyActions, yyMessages; } yytControl;

static	yytControl	yyControl	= { 0, rtrue, rtrue };
	rbool		Debug	= rfalse;

# define yyFirstTerminal	0
# define yyLastTerminal	26
# define yySetSize	27
# define yyFirstSymbol	0
# define yyLastSymbol	60
# define yyTTableMax	205
# define yyNTableMax	108
# define yyStartState	1
# define yyFirstReadState	1
# define yyLastReadState	38
# define yyFirstReadReduceState	39
# define yyLastReadReduceState	60
# define yyFirstReduceState	61
# define yyLastReduceState	121
# define yyLastState	121
# define yyLastStopState	61
# define YYTDefault
# define YYNDefault

# define yyFirstFinalState	yyFirstReadReduceState

# define ErrorMessages(Messages) yyControl.yyMessages = Messages
# define SemActions(Actions)	 yyControl.yyActions = Actions

# ifdef YYCSTree
#  include "cs_tree.h"
#  define CommonParsAttrs tCSTree Tree;
# endif

# ifdef YYGetLook

#  define GetLookahead(k)	yyGetLookahead ((k) - 1, yyTerminal)
#  define GetAttribute(k, a)	xxGetAttribute ((k) - 1, yyTerminal, a)

static int yyGetLookahead	ARGS ((int yyk, yySymbolRange yyToken));
static void xxGetAttribute	ARGS ((int yyk, yySymbolRange yyToken,
				tScanAttribute * yyAttribute));

# endif

/* line 2 "-" */
/* line 25 "lex.lrk" */


#include <stdio.h>

typedef struct { tScanAttribute Scan; } tParsAttribute;

static int in_defs = 1;	/* parsing definition part			*/
static char macro [256];/* regular expression for macro definition	*/
static int  m;		/* index for macro				*/
static int level = 0;	/* level count to decide on meaning of $	*/

/* output representation for character, see print_char			*/
static char how_to_print [] =
{ 0, 0, 0, 0, 0, 0, 0, 0, 'b', 't', 'n', 0, 'f', 'r', 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  1, 1, 2, 2, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2,
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 1, 2, 2, 2, 2,
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 1, 1,
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 1, 0 };

/* in definition part, append v to macro, otherwise copy to buffer	*/
static void str_put (v)
   char * v;
{
  if (in_defs) {
    while (macro [m++] = *v++);
    m--;
  }
  else BufString (v);
}

/* print one character, escape if necessary				*/
static void print_char (c)
   char c;
{
  char i;
  char v [8];

  i = how_to_print [c];
  switch (i) {
    case 0	: (void) sprintf (v, "\\%d", c); break;
    case 1	: (void) sprintf (v,   "%c", c); break;
    case 2	: (void) sprintf (v, "\\%c", c); break;
    default	: (void) sprintf (v, "\\%c", i); break;
  }
  str_put (v);
}

/* print the default rules for lex compatibility			*/
default_rules ()
{
  str_put ("\n/* REM the next three lines can be removed in most cases */\n");
  str_put ("\" \"	:- { yyEcho; }\n");
  str_put ("\\t	:- { yyTab; yyEcho; }\n");
  str_put ("\\n	:- { yyEol (0); yyEcho; }\n");
}

/* line 215 "Parser.c" */

# if defined lex_interface & ! defined yylvalDef
     tParsAttribute yylval;
# endif

# ifndef yyInitStackSize
#  define yyInitStackSize	100
# endif
# define yyNoState		0
# define yystandard		1
# define yytrial		2
# define yybuffer		4
# define yyreparse		8
# define yyS			yySynAttribute
# define yyA			yyAttrStackPtr
# define YYACCEPT		goto yyAccept
# define YYABORT		goto yyAbort

# ifdef YYDEC_TABLE
#  define yyDecrement(x)
#  define yySetNT(x)
# else
#  define yyDecrement(x)	yyStateStackPtr -= x; yyAttrStackPtr -= x;
#  define yySetNT(x)		yyNonterminal = x;
# endif

# ifdef YYNDefault
#  define yytNComb yytComb
# else
#  define yytNComb yyStateRange
# endif

# if defined YYDEBUG | defined YYDCRP
static	long		yyCount		= 0;
static	FILE *		yyTrace		;

static	void		yyPrintState	ARGS ((yyStateRange yyState));
static	void		yyNl		ARGS ((void));

static	char *		yyRule		[] = { 0,
"0_intern : source _EOF_ ",
"source : defs '%%' source_1 rules source_2 source_3 ",
"source_3 : ",
"source_3 : '%%' ",
"source_2 : ",
"source_1 : ",
"defs : defs_1 ",
"defs_1 : ",
"defs_1 : defs_1 defs_2 ",
"defs_2 : def '\\n' ",
"def : macrodef expr ",
"def : STARTDEF ",
"def : '%t' def_1 '%t' ",
"def : ",
"def_1 : ",
"def_1 : def_1 def_2 ",
"def_2 : TRANSLATION '\\n' ",
"macrodef : MACRODEF ",
"rules : rules_1 ",
"rules_1 : ",
"rules_1 : rules_1 rules_2 ",
"rules_2 : rule '\\n' ",
"rule : rule_1 action ",
"rule_1 : ",
"rule_1 : startcond caret fullexpr rule_2 ",
"rule_2 : ",
"rule_2 : endcond ",
"startcond : STARTCOND ",
"startcond : ",
"caret : '^' ",
"caret : ",
"endcond : '/' endcond_1 expr ",
"endcond_1 : ",
"fullexpr : fullexpr '|' fullexpr_1 sequence ",
"fullexpr : sequence ",
"fullexpr_1 : ",
"expr : expr '|' expr_1 sequence ",
"expr : sequence ",
"expr_1 : ",
"sequence : sequence secondary ",
"sequence : secondary ",
"secondary : secondary '?' ",
"secondary : secondary '*' ",
"secondary : secondary '+' ",
"secondary : secondary REPEAT ",
"secondary : primary ",
"primary : '(' primary_1 expr ')' ",
"primary : EXPANSION ",
"primary : CHARCLASS ",
"primary : '.' ",
"primary : STRING ",
"primary : CHAR ",
"primary : '$' ",
"primary_1 : ",
"action : action_3 action_1 ",
"action : PSEUDOACTION ",
"action : ",
"action_3 : ",
"action_1 : action_1 action_2 ",
"action_1 : action_2 ",
"action_2 : ACTION ",
""
};
# endif
	char *		TokenName	[yyLastTerminal + 2] = {
"_EOF_",
"%%",
0,
0,
"STARTDEF",
"%t",
"/",
".",
"?",
"+",
"*",
"(",
")",
"|",
"ACTION",
"STARTCOND",
"REPEAT",
"EXPANSION",
"^",
"PSEUDOACTION",
"STRING",
"CHARCLASS",
"CHAR",
"MACRODEF",
"TRANSLATION",
"\\n",
"$",
""
};
static	yytComb		yyTComb		[yyTTableMax + 1] = {
{  15,   65}, {  15,   65}, {  21,   63}, {  21,   39}, {   2,   61}, 
{   3,    5}, {  14,  101}, {  14,  101}, {  14,   48}, {  14,   50}, 
{  14,   49}, {  14,  101}, {  14,  101}, {  14,  101}, {  14,  101}, 
{  12,   19}, {  14,   51}, {  14,  101}, {  27,   60}, {  14,  101}, 
{  14,  101}, {  14,  101}, {  14,  101}, {   5,   66}, {   5,   66}, 
{  14,  101}, {  14,  101}, {  12,   71}, {   4,   67}, {  22,   45}, 
{   5,   66}, {   4,   41}, {   4,    6}, {  30,  115}, {   5,   66}, 
{  25,   52}, {  25,   19}, {   5,   66}, {   5,   66}, {  10,   42}, 
{   5,   66}, {   5,   66}, {   5,   66}, {   5,   66}, {   5,   66}, 
{   5,   66}, {   9,   80}, {   9,   80}, {   5,   66}, {   5,   66}, 
{   4,   44}, {   1,   68}, {   4,   74}, {   9,   80}, {   1,   68}, 
{   1,   68}, {   7,   40}, {   9,   80}, {  10,   17}, {   6,   75}, 
{   9,   80}, {   9,   80}, {  17,   43}, {   9,   80}, {   9,   80}, 
{   9,   80}, {   9,   80}, {   9,   80}, {   9,   80}, {  16,   79}, 
{  16,   79}, {   9,   80}, {   9,   80}, {   1,   68}, {  23,  118}, 
{   1,   68}, {  16,   89}, {   0,    0}, {   6,   75}, {  23,   59}, 
{  16,   89}, {   0,    0}, {   0,    0}, {  16,   84}, {  16,   46}, 
{  23,  117}, {  16,   89}, {  16,   89}, {  16,   84}, {  16,   89}, 
{  16,   89}, {  16,   89}, {  20,  100}, {  20,  100}, {  16,   84}, 
{  16,   89}, {   0,    0}, {  20,  100}, {  20,  100}, {  20,  100}, 
{  20,  100}, {   0,    0}, {   0,    0}, {  20,  100}, {   0,    0}, 
{  20,  100}, {  20,  100}, {  20,  100}, {  20,  100}, {  24,   91}, 
{   0,    0}, {  20,  100}, {  20,  100}, {  24,   91}, {   0,    0}, 
{   0,    0}, {   0,    0}, {  33,   93}, {   0,    0}, {  24,   91}, 
{  24,   47}, {  33,   93}, {  24,   91}, {  24,   91}, {  24,   91}, 
{  11,  114}, {   0,    0}, {  33,   93}, {  24,   91}, {  11,  114}, 
{  33,   93}, {  33,   93}, {  33,   93}, {  19,   99}, {   0,    0}, 
{  11,  114}, {  33,   93}, {  19,   99}, {  11,  114}, {  11,  114}, 
{  11,  114}, {  34,   96}, {   0,    0}, {  19,   99}, {  11,  114}, 
{  34,   96}, {  19,   99}, {  19,   99}, {  19,   99}, {   8,   55}, 
{   0,    0}, {  34,   96}, {  19,   99}, {   8,   11}, {  34,   96}, 
{  34,   96}, {  34,   96}, {   0,    0}, {   0,    0}, {   8,   53}, 
{  34,   96}, {   0,    0}, {   8,   56}, {   8,   54}, {   8,   57}, 
{  13,   98}, {  13,   98}, {  13,   98}, {   8,   58}, {  32,   95}, 
{   0,    0}, {   0,    0}, {  13,   98}, {  29,   97}, {  29,   97}, 
{  29,   97}, {  32,   95}, {  32,   95}, {  13,   98}, {   0,    0}, 
{  29,   97}, {   0,    0}, {  32,   95}, {  38,   94}, {  37,   92}, 
{  31,   33}, {  29,   97}, {   0,    0}, {  32,   95}, {  37,   92}, 
{  38,   94}, {  38,   94}, {  31,   34}, {  31,   86}, {   0,    0}, 
{  37,   92}, {  38,   94}, {   0,    0}, {  31,   86}, {   0,    0}, 
{   0,    0}, {   0,    0}, {  38,   94}, {   0,    0}, {  31,   86}, 
{   0,    0}, 
};
static	yytNComb	yyNComb		[yyNTableMax - yyLastTerminal] = {
{   0,    0}, {   0,    0}, {   0,    0}, {   0,    0}, {   0,    0}, 
{   0,    0}, {   0,    0}, {   0,    0}, {   0,    0}, {   0,    0}, 
{   0,    0}, {   0,    0}, {   0,    0}, {   0,    0}, {  16,   81}, 
{  16,   22}, {  16,   23}, {   1,    2}, {  16,   24}, {   4,   69}, 
{   4,    7}, {   1,    3}, {   1,    4}, {   4,    8}, {  28,   31}, 
{   8,   12}, {  35,   37}, {   8,   13}, {  28,   32}, {  26,   29}, 
{  26,   14}, {  23,   83}, {  23,   27}, {  31,   85}, {  13,   20}, 
{  13,  106}, {  31,   87}, {  27,   30}, {  27,  120}, {   9,   15}, 
{   9,   16}, {  36,   38}, {  18,   25}, {  30,  119}, {   5,    9}, 
{  33,   35}, {  19,   26}, {  34,   36}, {  11,   18}, {  15,   21}, 
{  21,   62}, {  24,   28}, {  10,   76}, {   6,   10}, {   0,    0}, 
{   0,    0}, {   0,    0}, {   0,    0}, {   0,    0}, {   0,    0}, 
{   0,    0}, {   0,    0}, {   0,    0}, {   0,    0}, {   0,    0}, 
{   0,    0}, {   0,    0}, {   0,    0}, {   0,    0}, {   0,    0}, 
{   0,    0}, {   0,    0}, {   0,    0}, {   0,    0}, {   0,    0}, 
{   0,    0}, {   0,    0}, {   0,    0}, {   0,    0}, {   0,    0}, 
{   0,    0}, {   0,    0}, 
};
static	yytComb *	yyTBasePtr	[yyLastReadState + 1] = { 0,
& yyTComb [  50], & yyTComb [   4], & yyTComb [   4], & yyTComb [  27], 
& yyTComb [  23], & yyTComb [  54], & yyTComb [  31], & yyTComb [ 142], 
& yyTComb [  46], & yyTComb [  34], & yyTComb [ 118], & yyTComb [   2], 
& yyTComb [ 153], & yyTComb [   0], & yyTComb [   0], & yyTComb [  69], 
& yyTComb [  37], & yyTComb [   0], & yyTComb [ 126], & yyTComb [  86], 
& yyTComb [   2], & yyTComb [   4], & yyTComb [  60], & yyTComb [ 102], 
& yyTComb [  23], & yyTComb [   0], & yyTComb [   4], & yyTComb [   0], 
& yyTComb [ 161], & yyTComb [   8], & yyTComb [ 179], & yyTComb [ 163], 
& yyTComb [ 110], & yyTComb [ 134], & yyTComb [   0], & yyTComb [   0], 
& yyTComb [ 170], & yyTComb [ 177], 
};
static	yytNComb *	yyNBasePtr	[yyLastReadState + 1] = { 0,
& yyNComb [ -11], & yyNComb [ -27], & yyNComb [ -27], & yyNComb [ -15], 
& yyNComb [  13], & yyNComb [  17], & yyNComb [ -27], & yyNComb [ -26], 
& yyNComb [   0], & yyNComb [  15], & yyNComb [  -8], & yyNComb [ -27], 
& yyNComb [ -20], & yyNComb [ -27], & yyNComb [  19], & yyNComb [ -27], 
& yyNComb [ -27], & yyNComb [  -9], & yyNComb [  -6], & yyNComb [ -27], 
& yyNComb [  21], & yyNComb [ -27], & yyNComb [ -26], & yyNComb [   5], 
& yyNComb [ -27], & yyNComb [ -24], & yyNComb [ -22], & yyNComb [ -25], 
& yyNComb [ -27], & yyNComb [ -17], & yyNComb [ -11], & yyNComb [ -27], 
& yyNComb [  -3], & yyNComb [  -3], & yyNComb [ -25], & yyNComb [ -12], 
& yyNComb [ -27], & yyNComb [ -27], 
};
# ifdef YYTDefault
static	unsigned short	yyTDefault	[yyLastReadState + 1] = { 0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0, 
    0,     0,     8,     0,     0,     0,     0,     8,     0,    14, 
    0,     0,     0,     0,     0,     8,     0,     8,    13,    27, 
    0,    38,     0,     0,     8,     8,    12,     8, 
};
# endif
# ifdef YYNDefault
static	unsigned short	yyNDefault	[yyLastReadState + 1] = { 0,
    0,     0,     0,     0,     0,     0,     0,    26,     0,     0, 
    0,     0,     0,     0,     0,     0,     0,     8,     0,     0, 
    0,     0,     0,     0,     0,    13,     0,    26,    13,     0, 
    0,    13,     0,     0,     8,    26,     0,    13, 
};
# endif
# if ! defined NO_RECOVER | defined YYDEC_TABLE | defined YYCSTree
static	unsigned char	yyLength	[yyLastReduceState - yyFirstReduceState
							+ 1] = {
    2,     6,     0,     1,     0,     0,     1,     0,     2,     2, 
    2,     1,     3,     0,     0,     2,     2,     1,     1,     0, 
    2,     2,     2,     0,     4,     0,     1,     1,     0,     1, 
    0,     3,     0,     4,     1,     0,     4,     1,     0,     2, 
    1,     2,     2,     2,     2,     1,     4,     1,     1,     1, 
    1,     1,     1,     0,     2,     1,     0,     0,     2,     1, 
    1, 
};
# endif
# if ! defined NO_RECOVER | defined YYDEC_TABLE
static	yytNonterminal	yyLeftHandSide	[yyLastReduceState - yyFirstReduceState
							+ 1] = {
yyNT0_intern,
yyNTsource,
yyNTsource_3,
yyNTsource_3,
yyNTsource_2,
yyNTsource_1,
yyNTdefs,
yyNTdefs_1,
yyNTdefs_1,
yyNTdefs_2,
yyNTdef,
yyNTdef,
yyNTdef,
yyNTdef,
yyNTdef_1,
yyNTdef_1,
yyNTdef_2,
yyNTmacrodef,
yyNTrules,
yyNTrules_1,
yyNTrules_1,
yyNTrules_2,
yyNTrule,
yyNTrule_1,
yyNTrule_1,
yyNTrule_2,
yyNTrule_2,
yyNTstartcond,
yyNTstartcond,
yyNTcaret,
yyNTcaret,
yyNTendcond,
yyNTendcond_1,
yyNTfullexpr,
yyNTfullexpr,
yyNTfullexpr_1,
yyNTexpr,
yyNTexpr,
yyNTexpr_1,
yyNTsequence,
yyNTsequence,
yyNTsecondary,
yyNTsecondary,
yyNTsecondary,
yyNTsecondary,
yyNTsecondary,
yyNTprimary,
yyNTprimary,
yyNTprimary,
yyNTprimary,
yyNTprimary,
yyNTprimary,
yyNTprimary,
yyNTprimary_1,
yyNTaction,
yyNTaction,
yyNTaction,
yyNTaction_3,
yyNTaction_1,
yyNTaction_1,
yyNTaction_2,
};
# endif
# ifndef NO_RECOVER
static	yySymbolRange	yyContinuation	[yyLastReadState + 1] = { 0,
    1,     0,     1,     1,     0,     5,    25,    26,     0,     5, 
    7,    25,    12,     6,     0,     0,    25,    26,     7,     6, 
    0,    25,    25,     7,    12,    26,    14,    26,    12,    25, 
   14,     6,     7,     7,    26,    26,    14,     6, 
};
static	unsigned short	yyCondition	[yyLastState - yyLastReduceState + 1] =
{ 0,
};
# endif
static	unsigned short	yyFinalToProd	[yyLastReadReduceState -
						yyFirstReadReduceState + 2] = {
   64,    70,    72,    73,    77,    78,    82,    88,    90,   102, 
  103,   104,   105,   107,   108,   109,   110,   111,   112,   113, 
  116,   121, 
0
};
static	unsigned short	yyStartLine	[yyLastStopState - yyFirstReduceState
							+ 2] = { 0,
100,
};
# ifdef YYaccDefault

static	unsigned long *	yyDefaultLook	[yyLastReadState + 1] = { 0,
};
# endif


static	int	yyParse		ARGS ((yyStateRange, yySymbolRange, int));

# ifndef NO_RECOVER
static	yyStateRange yyNext	ARGS ((yyStateRange, yySymbolRange));
#  ifdef YYDEBUG
static	int	yyErrorRecovery	ARGS ((yySymbolRange, yySymbolRange *, long));
#  else
static	int	yyErrorRecovery	ARGS ((yySymbolRange, long));
#  endif
static	void	yyComputeContinuation	ARGS ((long, tSet *));
static	rbool	yyIsContinuation	ARGS ((yySymbolRange, long));
static	void	yyComputeRestartPoints	ARGS ((long, tSet *));
# endif

# if defined YYTrialParse | defined YYReParse | defined YYGetLook

# ifndef yyInitBufferSize
#  define yyInitBufferSize 100
# endif

typedef struct { yySymbolRange	yyToken;
		 tScanAttribute	yyAttribute;
# ifdef YYMemoParse
		 short		yyStart;
# endif
	       } yytBuffer;

static yytBuffer *	yyBuffer	= NULL;
static unsigned long	yyBufferSize	= yyInitBufferSize;
static long		yyBufferNext	= 1;
static long		yyBufferLast	= 1;
static rbool		yyBufferClear	= rtrue;
static unsigned short	yyParseLevel	= 0;

static void yyBufferSet
# ifdef HAVE_ARGS
   (yySymbolRange yyToken)
# else
   (yyToken) yySymbolRange yyToken;
# endif
{
   if (yyBufferNext == yyBufferLast) {
      if (yyBufferClear) yyBufferLast = 0;
      if (++ yyBufferLast >= (long) yyBufferSize) {
	 yyExtendArray ((char * *) & yyBuffer, & yyBufferSize,
			  (unsigned long) sizeof (yytBuffer));
# ifdef YYDEBUG
	 if (Debug) {
	    yyPrintState (0);
	    fprintf (yyTrace, "extend  token buffer from %ld to %ld",
		yyBufferSize / 2, yyBufferSize); yyNl ();
	 }
# endif
      }
      yyBuffer [yyBufferLast].yyToken	= yyToken;
      yyBuffer [yyBufferLast].yyAttribute= Attribute;
# ifdef YYMemoParse
      yyBuffer [yyBufferLast].yyStart	= 0;
# endif
      yyBufferNext = yyBufferLast;
   }
}

static int yyGetToken ARGS ((void))
{
   register yySymbolRange yyToken;

   if (yyBufferNext < yyBufferLast) {
      yyToken = yyBuffer [++ yyBufferNext].yyToken;
      Attribute = yyBuffer [yyBufferNext].yyAttribute;
   } else {
      yyToken = GetToken ();
      if ((yytrial | yybuffer) & yyControl.yyMode) {
	 if (++ yyBufferLast >= (long) yyBufferSize) {
	    yyExtendArray ((char * *) & yyBuffer, & yyBufferSize,
			     (unsigned long) sizeof (yytBuffer));
# ifdef YYDEBUG
	    if (Debug) {
	       yyPrintState (0);
	       fprintf (yyTrace, "extend  token buffer from %ld to %ld",
		  yyBufferSize / 2, yyBufferSize); yyNl ();
	    }
# endif
	 }
	 yyBuffer [yyBufferLast].yyToken = yyToken;
	 yyBuffer [yyBufferLast].yyAttribute = Attribute;
# ifdef YYMemoParse
	 yyBuffer [yyBufferLast].yyStart = 0;
# endif
	 yyBufferNext = yyBufferLast;
      }
   }
# ifdef TOKENOP
   TOKENOP
# endif
   return yyToken;
}

# else
# define yyGetToken GetToken
# endif

# ifdef YYGetLook

static int yyGetLookahead
# ifdef HAVE_ARGS
   (int yyk, yySymbolRange yyToken)
# else
   (yyk, yyToken) int yyk; yySymbolRange yyToken;
# endif
{
   if (yyk == 0) return yyToken;
   if (yyControl.yyMode == yystandard) yyBufferSet (yyToken);
   while (yyBufferNext + yyk > yyBufferLast) {
      if (yyBufferNext < yyBufferLast &&
	 yyBuffer [yyBufferLast].yyToken == EofToken)
	 return EofToken;
      if (++ yyBufferLast >= (long) yyBufferSize) {
	 yyExtendArray ((char * *) & yyBuffer, & yyBufferSize,
			  (unsigned long) sizeof (yytBuffer));
# ifdef YYDEBUG
	 if (Debug) {
	    yyPrintState (0);
	    fprintf (yyTrace, "extend  token buffer from %ld to %ld",
		yyBufferSize / 2, yyBufferSize); yyNl ();
	 }
# endif
      }
      yyBuffer [yyBufferLast].yyToken = GetToken ();
      yyBuffer [yyBufferLast].yyAttribute = Attribute;
# ifdef YYMemoParse
      yyBuffer [yyBufferLast].yyStart = 0;
# endif
   }
   Attribute = yyBuffer [yyBufferNext].yyAttribute;
   return yyBuffer [yyBufferNext + yyk].yyToken;
}

static void xxGetAttribute
# ifdef HAVE_ARGS
   (int yyk, yySymbolRange yyToken, tScanAttribute * yyAttribute)
# else
   (yyk, yyToken, yyAttribute)
   int yyk; yySymbolRange yyToken; tScanAttribute * yyAttribute;
# endif
{
   if (yyk == 0) * yyAttribute = Attribute;
   else {
      yyGetLookahead (yyk, yyToken);
      * yyAttribute =
	 yyBuffer [Min (yyBufferNext + yyk, yyBufferLast)].yyAttribute;
   }
}

# endif

# ifdef YYReParse

#  define BufferOn(Actions, Messages) yyBufferOn (Actions, Messages, yyTerminal)
#  define BufferPosition yyBufferNext

static yytControl yyPrevControl;

static long yyBufferOn
# ifdef HAVE_ARGS
   (rbool yyActions, rbool yyMessages, yySymbolRange yyToken)
# else
   (yyActions, yyMessages, yyToken)
   rbool yyActions, yyMessages; yySymbolRange yyToken;
# endif
{
   if (yyControl.yyMode == yystandard) {
      yyPrevControl		= yyControl;
      yyControl.yyMode		= yybuffer;
      yyControl.yyActions	= yyActions;
      yyControl.yyMessages	= yyMessages;
      yyBufferSet (yyToken);
      yyBufferClear		= rfalse;
   }
   return yyBufferNext;
}

static long BufferOff ARGS ((void))
{
   if (yyControl.yyMode == yybuffer) yyControl = yyPrevControl;
   return yyBufferNext;
}

static void BufferClear ARGS ((void))
{
   yyBufferClear = rtrue;
}

# endif

# if defined YYDEBUG | defined YYDCRP

static void yyNl ARGS ((void)) { putc ('\n', yyTrace); fflush (yyTrace); }

# endif

# ifdef YYDEBUG

static void yyPrintState
# ifdef HAVE_ARGS
   (yyStateRange yyState)
# else
   (yyState) yyStateRange yyState;
# endif
{
   fprintf (yyTrace, "%4ld:", ++ yyCount);
   WritePosition  (yyTrace, Attribute.Position);
   fprintf (yyTrace, ":%5d  %c  ", yyState, " ST-B---R" [yyControl.yyMode]);
# if defined YYTrialParse | defined YYReParse
   if (yyParseLevel > 0) {
      register int yyi = yyParseLevel;
      fprintf (yyTrace, "%2d  ", yyi);
      do fputs ("  ", yyTrace); while (-- yyi);
   } else
# endif
   fputs ("    ", yyTrace);
}

static rbool yyPrintResult
# ifdef HAVE_ARGS
   (yyStateRange yyState, int yyLine, rbool yyCondition)
# else
   (yyState, yyLine, yyCondition)
   yyStateRange	yyState;
   int		yyLine;
   rbool	yyCondition;
# endif
{
   if (Debug) {
      yyPrintState (yyState);
      fprintf (yyTrace, "check   predicate in line %d, result = %d",
	 yyLine, yyCondition); yyNl ();
   }
   return yyCondition;
}

# else
#  define yyPrintResult(State, Line, Condition) Condition
# endif

# if defined YYDEBUG | defined YYDEC_TABLE
#  define yyGotoReduce(State, Rule)	{ yyState = State; goto yyReduce; }
#  define yyGotoRead(State)		{ yyState = State; goto yyRead; }
# else
#  define yyGotoReduce(State, Rule)	goto Rule;
#  define yyGotoRead(State)		{ yyState = State; goto yyRead; }
# endif

static unsigned long	yyStateStackSize	= yyInitStackSize;
static yyStateRange *	yyStateStack		= NULL;
static yyStateRange *	yyEndOfStack		;
static unsigned long	yyAttrStackSize		= yyInitStackSize;
static tParsAttribute * yyAttributeStack	= NULL;
# if defined YYTrialParse | defined YYReParse
static yyStateRange *	yyStateStackPtr		;
static tParsAttribute * yyAttrStackPtr		;
# endif
# ifndef NO_RECOVER
static yyStateRange *	yyIsContStackPtr	= NULL;
static unsigned long	yyIsContStackSize	= yyInitStackSize;
static yyStateRange *	yyCompResStackPtr	= NULL;
static unsigned long	yyCompResStackSize	= yyInitStackSize;
# endif

void ResetParser ARGS ((void))
   {
      if (yyStateStack) {
	 ReleaseArray ((char * *) & yyStateStack, & yyStateStackSize,
			(unsigned long) sizeof (yyStateRange));
	 yyStateStack = NULL;
      }
      if (yyAttributeStack) {
	 ReleaseArray ((char * *) & yyAttributeStack, & yyAttrStackSize,
			(unsigned long) sizeof (tParsAttribute));
	 yyAttributeStack = NULL;
      }
# ifndef NO_RECOVER
      if (yyIsContStackPtr) {
	 ReleaseArray ((char * *) & yyIsContStackPtr, & yyIsContStackSize,
			(unsigned long) sizeof (yyStateRange));
	 yyIsContStackPtr = NULL;
      }
      if (yyCompResStackPtr) {
	 ReleaseArray ((char * *) & yyCompResStackPtr, & yyCompResStackSize,
			(unsigned long) sizeof (yyStateRange));
	 yyCompResStackPtr = NULL;
      }
# endif
# if defined YYTrialParse | defined YYReParse | defined YYGetLook
      if (yyBuffer) {
	 ReleaseArray ((char * *) & yyBuffer, & yyBufferSize,
			(unsigned long) sizeof (yytBuffer));
	 yyBuffer = NULL;
      }
# endif
   }

int Parser ARGS ((void))
   {
      return Parser2 (yyStartState);
   }

int Parser2
# ifdef HAVE_ARGS
   (int yyStartSymbol)
# else
   (yyStartSymbol) int yyStartSymbol;
# endif
   {
      int		yyErrorCount;
# if defined YYDEBUG | defined YYDCRP
      yyTrace		= stdout;
# endif
      BeginParser ();
      yyStateStackSize	= yyInitStackSize;
      yyMakeArray ((char * *) & yyStateStack, & yyStateStackSize,
		     (unsigned long) sizeof (yyStateRange));
      yyAttrStackSize	= yyInitStackSize;
      yyMakeArray ((char * *) & yyAttributeStack, & yyAttrStackSize,
		     (unsigned long) sizeof (tParsAttribute));
# ifndef NO_RECOVER
      yyIsContStackSize	= yyInitStackSize;
      yyMakeArray ((char * *) & yyIsContStackPtr, & yyIsContStackSize,
		     (unsigned long) sizeof (yyStateRange));
      yyCompResStackSize= yyInitStackSize;
      yyMakeArray ((char * *) & yyCompResStackPtr, & yyCompResStackSize,
		     (unsigned long) sizeof (yyStateRange));
# endif
# if defined YYTrialParse | defined YYReParse | defined YYGetLook
      yyBufferSize	= yyInitBufferSize;
      yyMakeArray ((char * *) & yyBuffer, & yyBufferSize,
		     (unsigned long) sizeof (yytBuffer));
# endif
      yyEndOfStack	= & yyStateStack [yyStateStackSize - 1];
# if defined YYTrialParse | defined YYReParse
      yyStateStackPtr	= yyStateStack;
      yyAttrStackPtr	= yyAttributeStack;
      yyBufferNext	= 1;
      yyBufferLast	= 1;
      yyBufferClear	= rtrue;
      yyParseLevel	= 0;
# endif
# ifdef YYDEBUG
      if (Debug) {
	 yyCount = 0;
	 fprintf (yyTrace,
      "  # |Position|State|Mod|Lev|Action |Terminal and Lookahead or Rule\n");
	 yyNl ();
      }
# endif
      yyControl.yyMode		= yystandard;
      yyControl.yyActions	= rtrue;
      yyControl.yyMessages	= rtrue;
      yyErrorCount = yyParse ((yyStateRange) yyStartSymbol,
	 (yySymbolRange) yyGetToken (), (int) yyStartLine [yyStartSymbol]);
      ResetParser ();
      return yyErrorCount;
   }

# ifdef YYTrialParse

# ifdef YYMemoParse
#  define MemoryClear(Position) yyBuffer [Position].yyStart = 0
# endif

static int yyTrialParse
# ifdef HAVE_ARGS
   (yyStateRange yyStartSymbol, yySymbolRange yyToken, int yyLine)
# else
   (yyStartSymbol, yyToken, yyLine)
   yyStateRange		yyStartSymbol	;
   yySymbolRange	yyToken		;
   int			yyLine		;
# endif
   {
      int	yyErrorCount		;
      ptrdiff_t	yyPrevStateStackPtr	= yyStateStackPtr - yyStateStack;
      ptrdiff_t	yyPrevAttrStackPtr	= yyAttrStackPtr - yyAttributeStack;
      long	yyPrevBufferNext	;
      yytControl yyPrevControl		;

# ifdef BEFORE_TRIAL
      BEFORE_TRIAL
# endif
# ifdef YYMemoParse
      if (yyBuffer [yyBufferNext].yyStart ==   yyStartSymbol) return 0;
      if (yyBuffer [yyBufferNext].yyStart == - yyStartSymbol) return 1;
# endif
      yyPrevControl		= yyControl;
      yyStateStackPtr		++;
      yyAttrStackPtr		++;
      yyParseLevel		++;
      if (yyControl.yyMode == yystandard) yyBufferSet (yyToken);
      yyPrevBufferNext		= yyBufferNext;
      yyControl.yyMode		= yytrial;
      yyControl.yyActions	= rfalse;
      yyControl.yyMessages	= rfalse;
      yyErrorCount		= yyParse (yyStartSymbol, yyToken, yyLine);
# ifdef YYMemoParse
      yyBuffer [yyPrevBufferNext].yyStart = yyErrorCount ?
					- yyStartSymbol : yyStartSymbol;
# endif
      yyStateStackPtr		= yyStateStack + yyPrevStateStackPtr;
      yyAttrStackPtr		= yyAttributeStack + yyPrevAttrStackPtr;
      yyBufferNext		= yyPrevBufferNext;
      yyControl			= yyPrevControl;
      yyParseLevel		--;
      Attribute		= yyBuffer [yyBufferNext].yyAttribute;
# ifdef AFTER_TRIAL
      AFTER_TRIAL
# endif
      return yyErrorCount;
   }

# endif

# ifdef YYReParse

static int ReParse
# ifdef HAVE_ARGS
   (yyStateRange yyStartSymbol, int yyFrom, int yyTo, rbool yyActions,
      rbool yyMessages)
# else
   (yyStartSymbol, yyFrom, yyTo, yyActions, yyMessages)
   yyStateRange	yyStartSymbol		;
   int		yyFrom, yyTo		;
   rbool	yyActions, yyMessages	;
# endif
   {
      int yyErrorCount = 1;

      if (1 <= yyFrom && yyFrom <= yyTo && yyTo <= yyBufferLast) {
	 ptrdiff_t yyPrevStateStackPtr	= yyStateStackPtr - yyStateStack;
	 ptrdiff_t yyPrevAttrStackPtr	= yyAttrStackPtr - yyAttributeStack;
	 long	yyPrevBufferNext	= yyBufferNext;
	 int	yyToToken		= yyBuffer [yyTo].yyToken;
	 yytControl yyPrevControl	;

	 yyPrevControl		= yyControl;
	 yyStateStackPtr	++;
	 yyAttrStackPtr		++;
	 yyParseLevel		++;
	 yyBufferNext		= yyFrom - 1;
	 yyBuffer [yyTo].yyToken= EofToken;
	 yyControl.yyMode	= yyreparse;
	 yyControl.yyActions	= yyActions;
	 yyControl.yyMessages	= yyMessages;
	 yyErrorCount		= yyParse (yyStartSymbol,
	    (yySymbolRange) yyGetToken (), (int) yyStartLine [yyStartSymbol]);
	 yyStateStackPtr	= yyStateStack + yyPrevStateStackPtr;
	 yyAttrStackPtr		= yyAttributeStack + yyPrevAttrStackPtr;
	 yyBufferNext		= yyPrevBufferNext;
	 yyControl		= yyPrevControl;
	 yyParseLevel		--;
	 yyBuffer [yyTo].yyToken= yyToToken;
	 Attribute		= yyBuffer [yyBufferNext].yyAttribute;
      } else {
      ErrorMessage (xxInvalidCallOfReParse, xxError, Attribute.Position);
      }
      return yyErrorCount;
   }

# endif

static char * yyGetTokenName
# ifdef HAVE_ARGS
   (yySymbolRange yyTerminal)
# else
   (yyTerminal) yySymbolRange yyTerminal;
# endif
   {
      if (yyTerminal <= yyLastTerminal && TokenName [yyTerminal])
	 return TokenName [yyTerminal];
      else
	 return "_unknown_";
   }

static void yyExtendStack
# ifdef HAVE_ARGS
   (yyStateRange * *	yyStateStackPtr,
    tParsAttribute * *	yyAttrStackPtr,
    yyStateRange	yyState)
# else
   (yyStateStackPtr, yyAttrStackPtr, yyState)
   yyStateRange * *	yyStateStackPtr;
   tParsAttribute * *	yyAttrStackPtr;
   yyStateRange		yyState;
# endif
   {
      ptrdiff_t yyyStateStackPtr = * yyStateStackPtr - yyStateStack;
      ptrdiff_t yyyAttrStackPtr = * yyAttrStackPtr - yyAttributeStack;
      yyExtendArray ((char * *) & yyStateStack, & yyStateStackSize,
		       (unsigned long) sizeof (yyStateRange));
      yyExtendArray ((char * *) & yyAttributeStack, & yyAttrStackSize,
		       (unsigned long) sizeof (tParsAttribute));
      * yyStateStackPtr	= yyStateStack + yyyStateStackPtr;
      * yyAttrStackPtr	= yyAttributeStack + yyyAttrStackPtr;
      yyEndOfStack	= & yyStateStack [yyStateStackSize - 1];
# ifdef YYDEBUG
      if (Debug) {
	 yyPrintState (yyState);
	 fprintf (yyTrace, "extend  stack from %ld to %ld",
	    yyStateStackSize / 2, yyStateStackSize); yyNl ();
      }
# endif
   }

static int yyParse
# ifdef HAVE_ARGS
   (yyStateRange yyStartSymbol, yySymbolRange yyToken, int yyLine)
# else
   (yyStartSymbol, yyToken, yyLine)
   yyStateRange		yyStartSymbol	;
   yySymbolRange	yyToken		;
   int			yyLine		;
# endif
   {
      register	yyStateRange	yyState		= yyStartSymbol;
      register	yySymbolRange	yyTerminal	= yyToken;
      register	rbool		yyIsRepairing	= rfalse;
		tParsAttribute	yySynAttribute	;   /* synthesized attribute */
		int		yyErrorCount	= 0;
# if ! (defined YYTrialParse | defined YYReParse)
		yyStateRange *	yyStateStackPtr	= yyStateStack;
		tParsAttribute *yyAttrStackPtr	= yyAttributeStack;
# endif
# ifdef YYDEBUG
		long		yyStartCount	= yyCount + 1;
		yySymbolRange	yyPrevTerminal	= yyToken;
# endif
# ifdef YYGetLook
		yySymbolRange	yy2;
# endif


# ifdef YYDEBUG
      if (Debug) {
	 yyPrintState (yyStartSymbol);
	 fprintf (yyTrace, "parse   for predicate in line %d, lookahead: %s",
	    yyLine, yyGetTokenName (yyTerminal)); yyNl ();
      }
# endif

      memset (& yySynAttribute, 0, sizeof yySynAttribute);

      for (;;) {
	 if (yyStateStackPtr >= yyEndOfStack) {
	    yyExtendStack (& yyStateStackPtr, & yyAttrStackPtr, yyState);
	 }
	 * yyStateStackPtr = yyState;

	 for (;;) { /* SPEC State = Next (State, Terminal); terminal transit */
	    register yytComb * yyTCombPtr = yyTBasePtr [yyState] + yyTerminal;
# if defined YYTDefault & defined YYaccDefault
	    register unsigned long * yylp;
# endif
	    if (yyTCombPtr->Check == yyState) {
	       yyState = yyTCombPtr->Next; break;
	    }
# ifdef YYTDefault
#  ifdef YYaccDefault
	    if ((yylp = yyDefaultLook [yyState]) &&
	       (yylp [yyTerminal >> 5] >> (yyTerminal & 0x1f)) & 1) {
	       yyState = yyTDefault [yyState]; break;
	    }
	    yyState = yyNoState; break;
#  else
	    if ((yyState = yyTDefault [yyState]) == yyNoState) break;
#  endif
# endif
	 }

	 if (yyState == yyNoState ||			/* syntax error ? */
	    yyIsRepairing && yyState >= yyFirstReduceState) { /* repair mode */
	    yySymbolRange yyRepairToken;

	    if (yyState == yyNoState && ! yyIsRepairing) { /* syntax error */
# ifdef ERROR
	       for (;;) {		/* be compatible with error trick */
		  yySymbolRange yyyTerminal = (yySymbolRange) yyTerminal;
		  ERROR
		  goto yyRecover;
	       }
	       goto yyFinal;
   yyRecover:
# endif
# ifdef ERROR2
	       ERROR2
# endif
# ifdef YYTrialParse
	       if (yyControl.yyMode == yytrial) YYABORT;
# endif
# ifndef NO_RECOVER
	       yyErrorCount ++;				/* report and recover */
	       yyTerminal = yyErrorRecovery (yyTerminal,
#  ifdef YYDEBUG
			& yyPrevTerminal,
#  endif
			(long) (yyStateStackPtr - yyStateStack));
	       yyIsRepairing = rtrue;
	       yyState = * yyStateStackPtr;
	       continue;
# else
	       YYABORT;
# endif
	    }

# ifndef NO_RECOVER
	/* SPEC State = Next (Top (), Continuation [yyState]); repair transit */
	    yyState = * yyStateStackPtr;
	    yyRepairToken = yyContinuation [yyState];	/* repair */
	    yyState = yyNext (yyState, yyRepairToken);
	    if (yyState > yyLastReduceState) {		/* dynamic ? */
	       yyState = yyCondition [yyState - yyLastReduceState];
	    }
	    if (yyState <= yyLastReadReduceState) { /* read or read reduce ? */
	       tScanAttribute yyRepairAttribute;
	       ErrorAttribute ((int) yyRepairToken, & yyRepairAttribute);
	       if (yyControl.yyMessages)
		  ErrorMessageI (xxTokenInserted, xxRepair,
		     Attribute.Position, xxString,
		     yyGetTokenName (yyRepairToken));
#  ifdef YYDEBUG
	       if (Debug) {
		  yyPrintState (* yyStateStackPtr);
		  fprintf (yyTrace, "insert  %s",
		     yyGetTokenName (yyRepairToken)); yyNl ();
		  yyPrintState (* yyStateStackPtr);
		  fprintf (yyTrace, "shift   %s, lookahead: %s",
		     yyGetTokenName (yyRepairToken),
		     yyGetTokenName (yyTerminal)); yyNl ();
	       }
#  endif
	       if (yyStateStackPtr >= yyEndOfStack) {
		  yyExtendStack (& yyStateStackPtr, & yyAttrStackPtr, yyState);
	       }
	       yyStateStackPtr ++;
	       yyGetAttribute (yyAttrStackPtr ++, yyRepairAttribute);
	       if (yyState >= yyFirstFinalState) {	/* read reduce */
		  * yyStateStackPtr = yyStateStackPtr [-1];
		  yyState = yyFinalToProd [yyState - yyFirstReadReduceState];
	       } else {					/* read */
		  * yyStateStackPtr = yyState;
	       }
	    }
	    if (yyState <= yyLastReadState) continue;	/* read ? */
# endif
	 }

   yyFinal:
	 if (yyState >= yyFirstFinalState) {		/* final state ? */
	    if (yyState <= yyLastReadReduceState) {	/* read reduce ? */
	       yyStateStackPtr ++;
	       yyGetAttribute (yyAttrStackPtr ++, Attribute);
	       yyTerminal = yyGetToken ();
# ifdef YYDEBUG
	       if (Debug) {
		  yyStateStackPtr [0] = yyStateStackPtr [-1];
		  yyPrintState (* yyStateStackPtr);
		  fprintf (yyTrace, "shift   %s, lookahead: %s",
		     yyGetTokenName (yyPrevTerminal),
		     yyGetTokenName (yyTerminal)); yyNl ();
		  yyPrevTerminal = yyTerminal;
	       }
# endif
	       yyIsRepairing = rfalse;
	    }

	    for (;;) {
	       register yytNonterminal yyNonterminal;	/* left-hand side */

   yyReduce:
# ifdef YYDEBUG
	       if (Debug) {
		  if (yyState <= yyLastReadReduceState)	/* read reduce ? */
		     yyState = yyFinalToProd [yyState - yyFirstReadReduceState];
		  yyPrintState (* yyStateStackPtr);
		  if (yyState <= yyLastReduceState) {
		     fprintf (yyTrace, "reduce  %s",
			yyRule [yyState - yyLastReadReduceState]); yyNl ();
		  } else {
		     fprintf (yyTrace, "dynamic decision %d",
			yyState - yyLastReduceState); yyNl ();
		  }
	       }
# endif
# ifdef YYCSTree
	       if (yyControl.yyActions) {
		 yyStateRange yystate = yyState;
		 if (yystate <= yyLastReadReduceState) { /* read reduce ? */
		   yystate = yyFinalToProd [yystate - yyFirstReadReduceState];
		 }
		 if (yystate <= yyLastStopState) {		/* accept */
		   CSTree = NewNonterminal (yystate - yyLastReadReduceState,
		     yyAttrStackPtr [-1].Common.Tree);
		 } else if (yystate <= yyLastReduceState) {	/* reduce */
		   int yyrule = yystate - yyLastReadReduceState;
		   int yyleng = yyLength [yyrule - 1], i;
		   tCSTree yynode = NULL, yynext = NULL;
		   for (i = yyleng - 1; i >= 0; i --) {
		     unsigned short yysymbol = yyRules [yyrule] [i];
		     tParsAttribute * yyap = & yyAttrStackPtr [i - yyleng];
		     if (yysymbol < yyEpsilon) {		/* terminal */
		       yynode = NewTerminal (yyap->Scan.Position,
			 StGetCStr (yyap->Scan.Common.Text));
		     } else {					/* nonterminal*/
		       yynode = yyap->Common.Tree;
		     }
		     yynode->Next = yynext;
		     if (yynext) yynext->Previous = yynode;
		     yynext = yynode;
		   }
		   yySynAttribute.Common.Tree = NewNonterminal (yyrule, yynode);
		 }
	       }
# endif
# ifdef YYDEC_TABLE
	       if (yyLastStopState < yyState && yyState <= yyLastReduceState) {
		  register int yyd = yyLength [yyState - yyFirstReduceState];
		  yyStateStackPtr -= yyd;
		  yyAttrStackPtr  -= yyd;
		  yyNonterminal = yyLeftHandSide [yyState - yyFirstReduceState];
	       }
# endif
switch (yyState) {
case 61:
YYACCEPT;
case 62: /* source : defs '%%' source_1 rules source_2 source_3 */
yyDecrement (6) yySetNT (yyNTsource) {
/* line 1294 "Parser.c" */
} break;
case 63: /* source_3 : */
yySetNT (yyNTsource_3) {
/* line 1298 "Parser.c" */
} break;
case 64:
case 39: /* source_3 : '%%' */
yyDecrement (1) yySetNT (yyNTsource_3) {
/* line 1303 "Parser.c" */
} break;
case 65: /* source_2 : */
yySetNT (yyNTsource_2) {
/* line 103 "-" */
/* line 126 "lex.lrk" */
 default_rules (); 
/* line 1310 "Parser.c" */
} break;
case 66: /* source_1 : */
yySetNT (yyNTsource_1) {
/* line 106 "-" */
/* line 124 "lex.lrk" */
 in_defs = 0; str_put ("\nRULE\n\n");
  str_put ("/* REM the string \" (void) GetWord (yytext);\" can be removed in most cases */\n\n"); 
/* line 1318 "Parser.c" */
} break;
case 67: /* defs : defs_1 */
yyDecrement (1) yySetNT (yyNTdefs) {
/* line 1322 "Parser.c" */
} break;
case 68: /* defs_1 : */
yySetNT (yyNTdefs_1) {
/* line 1326 "Parser.c" */
} break;
case 69: /* defs_1 : defs_1 defs_2 */
yyDecrement (2) yySetNT (yyNTdefs_1) {
/* line 1330 "Parser.c" */
} break;
case 70:
case 40: /* defs_2 : def '\\n' */
yyDecrement (2) yySetNT (yyNTdefs_2) {
/* line 1335 "Parser.c" */
} break;
case 71: /* def : macrodef expr */
yyDecrement (2) yySetNT (yyNTdef) {
/* line 124 "-" */
/* line 141 "lex.lrk" */
 str_put (" ."); put_macro (macro); level--; 
/* line 1342 "Parser.c" */
} break;
case 72:
case 41: /* def : STARTDEF */
yyDecrement (1) yySetNT (yyNTdef) {
/* line 1347 "Parser.c" */
} break;
case 73:
case 42: /* def : '%t' def_1 '%t' */
yyDecrement (3) yySetNT (yyNTdef) {
/* line 127 "-" */
/* line 144 "lex.lrk" */
 (void) fprintf (stderr, "WARNING: translation table ignored !\n"); 
/* line 1355 "Parser.c" */
} break;
case 74: /* def : */
yySetNT (yyNTdef) {
/* line 1359 "Parser.c" */
} break;
case 75: /* def_1 : */
yySetNT (yyNTdef_1) {
/* line 1363 "Parser.c" */
} break;
case 76: /* def_1 : def_1 def_2 */
yyDecrement (2) yySetNT (yyNTdef_1) {
/* line 1367 "Parser.c" */
} break;
case 77:
case 43: /* def_2 : TRANSLATION '\\n' */
yyDecrement (2) yySetNT (yyNTdef_2) {
/* line 1372 "Parser.c" */
} break;
case 78:
case 44: /* macrodef : MACRODEF */
yyDecrement (1) yySetNT (yyNTmacrodef) {
/* line 135 "-" */
/* line 148 "lex.lrk" */
 m = 0;
			     str_put ((char *) yyA [0].Scan.string_value);
			     str_put ("\t= ");
			     level++; 
/* line 1383 "Parser.c" */
} break;
case 79: /* rules : rules_1 */
yyDecrement (1) yySetNT (yyNTrules) {
/* line 1387 "Parser.c" */
} break;
case 80: /* rules_1 : */
yySetNT (yyNTrules_1) {
/* line 1391 "Parser.c" */
} break;
case 81: /* rules_1 : rules_1 rules_2 */
yyDecrement (2) yySetNT (yyNTrules_1) {
/* line 1395 "Parser.c" */
} break;
case 82:
case 45: /* rules_2 : rule '\\n' */
yyDecrement (2) yySetNT (yyNTrules_2) {
/* line 152 "-" */
/* line 162 "lex.lrk" */
 str_put ("\n"); 
/* line 1403 "Parser.c" */
} break;
case 83: /* rule : rule_1 action */
yyDecrement (2) yySetNT (yyNTrule) {
/* line 1407 "Parser.c" */
} break;
case 84: /* rule_1 : */
yySetNT (yyNTrule_1) {
/* line 1411 "Parser.c" */
} break;
case 85: /* rule_1 : startcond caret fullexpr rule_2 */
yyDecrement (4) yySetNT (yyNTrule_1) {
/* line 1415 "Parser.c" */
} break;
case 86: /* rule_2 : */
yySetNT (yyNTrule_2) {
/* line 1419 "Parser.c" */
} break;
case 87: /* rule_2 : endcond */
yyDecrement (1) yySetNT (yyNTrule_2) {
/* line 1423 "Parser.c" */
} break;
case 88:
case 46: /* startcond : STARTCOND */
yyDecrement (1) yySetNT (yyNTstartcond) {
/* line 161 "-" */
/* line 168 "lex.lrk" */
 str_put ((char *) yyA [0].Scan.string_value); str_put (" "); 
/* line 1431 "Parser.c" */
} break;
case 89: /* startcond : */
yySetNT (yyNTstartcond) {
/* line 1435 "Parser.c" */
} break;
case 90:
case 47: /* caret : '^' */
yyDecrement (1) yySetNT (yyNTcaret) {
/* line 165 "-" */
/* line 172 "lex.lrk" */
 str_put ("< "); 
/* line 1443 "Parser.c" */
} break;
case 91: /* caret : */
yySetNT (yyNTcaret) {
/* line 1447 "Parser.c" */
} break;
case 92: /* endcond : '/' endcond_1 expr */
yyDecrement (3) yySetNT (yyNTendcond) {
/* line 1451 "Parser.c" */
} break;
case 93: /* endcond_1 : */
yySetNT (yyNTendcond_1) {
/* line 170 "-" */
/* line 176 "lex.lrk" */
 str_put (" / "); 
/* line 1458 "Parser.c" */
} break;
case 94: /* fullexpr : fullexpr '|' fullexpr_1 sequence */
yyDecrement (4) yySetNT (yyNTfullexpr) {
/* line 1462 "Parser.c" */
} break;
case 95: /* fullexpr : sequence */
yyDecrement (1) yySetNT (yyNTfullexpr) {
/* line 1466 "Parser.c" */
} break;
case 96: /* fullexpr_1 : */
yySetNT (yyNTfullexpr_1) {
/* line 175 "-" */
/* line 179 "lex.lrk" */
 str_put (" , "); 
/* line 1473 "Parser.c" */
} break;
case 97: /* expr : expr '|' expr_1 sequence */
yyDecrement (4) yySetNT (yyNTexpr) {
/* line 1477 "Parser.c" */
} break;
case 98: /* expr : sequence */
yyDecrement (1) yySetNT (yyNTexpr) {
/* line 1481 "Parser.c" */
} break;
case 99: /* expr_1 : */
yySetNT (yyNTexpr_1) {
/* line 180 "-" */
/* line 183 "lex.lrk" */
 str_put (" | "); 
/* line 1488 "Parser.c" */
} break;
case 100: /* sequence : sequence secondary */
yyDecrement (2) yySetNT (yyNTsequence) {
/* line 1492 "Parser.c" */
} break;
case 101: /* sequence : secondary */
yyDecrement (1) yySetNT (yyNTsequence) {
/* line 1496 "Parser.c" */
} break;
case 102:
case 48: /* secondary : secondary '?' */
yyDecrement (2) yySetNT (yyNTsecondary) {
/* line 186 "-" */
/* line 191 "lex.lrk" */
 str_put (" ?"); 
/* line 1504 "Parser.c" */
} break;
case 103:
case 49: /* secondary : secondary '*' */
yyDecrement (2) yySetNT (yyNTsecondary) {
/* line 188 "-" */
/* line 192 "lex.lrk" */
 str_put (" *"); 
/* line 1512 "Parser.c" */
} break;
case 104:
case 50: /* secondary : secondary '+' */
yyDecrement (2) yySetNT (yyNTsecondary) {
/* line 190 "-" */
/* line 193 "lex.lrk" */
 str_put (" +"); 
/* line 1520 "Parser.c" */
} break;
case 105:
case 51: /* secondary : secondary REPEAT */
yyDecrement (2) yySetNT (yyNTsecondary) {
/* line 192 "-" */
/* line 194 "lex.lrk" */
 str_put ((char *) yyA [1].Scan.string_value); 
/* line 1528 "Parser.c" */
} break;
case 106: /* secondary : primary */
yyDecrement (1) yySetNT (yyNTsecondary) {
/* line 1532 "Parser.c" */
} break;
case 107:
case 52: /* primary : '(' primary_1 expr ')' */
yyDecrement (4) yySetNT (yyNTprimary) {
/* line 196 "-" */
/* line 199 "lex.lrk" */
 str_put (")"); level--; 
/* line 1540 "Parser.c" */
} break;
case 108:
case 53: /* primary : EXPANSION */
yyDecrement (1) yySetNT (yyNTprimary) {
/* line 198 "-" */
/* line 200 "lex.lrk" */
 str_put ((char *) yyA [0].Scan.string_value); 
/* line 1548 "Parser.c" */
} break;
case 109:
case 54: /* primary : CHARCLASS */
yyDecrement (1) yySetNT (yyNTprimary) {
/* line 200 "-" */
/* line 201 "lex.lrk" */
 str_put ((char *) yyA [0].Scan.string_value); 
/* line 1556 "Parser.c" */
} break;
case 110:
case 55: /* primary : '.' */
yyDecrement (1) yySetNT (yyNTprimary) {
/* line 202 "-" */
/* line 202 "lex.lrk" */
 str_put (" ANY "); 
/* line 1564 "Parser.c" */
} break;
case 111:
case 56: /* primary : STRING */
yyDecrement (1) yySetNT (yyNTprimary) {
/* line 204 "-" */
/* line 203 "lex.lrk" */
 str_put ((char *) yyA [0].Scan.string_value); 
/* line 1572 "Parser.c" */
} break;
case 112:
case 57: /* primary : CHAR */
yyDecrement (1) yySetNT (yyNTprimary) {
/* line 206 "-" */
/* line 204 "lex.lrk" */
 print_char ((char) yyA [0].Scan.char_value); 
/* line 1580 "Parser.c" */
} break;
case 113:
case 58: /* primary : '$' */
yyDecrement (1) yySetNT (yyNTprimary) {
/* line 209 "-" */
/* line 205 "lex.lrk" */
 if (level != 0)
			    { str_put ("$"); }
			  else
			    str_put (" >"); 
/* line 1591 "Parser.c" */
} break;
case 114: /* primary_1 : */
yySetNT (yyNTprimary_1) {
/* line 215 "-" */
/* line 198 "lex.lrk" */
 str_put ("("); level++; 
/* line 1598 "Parser.c" */
} break;
case 115: /* action : action_3 action_1 */
yyDecrement (2) yySetNT (yyNTaction) {
/* line 218 "-" */
/* line 212 "lex.lrk" */
 str_put (" }"); 
/* line 1605 "Parser.c" */
} break;
case 116:
case 59: /* action : PSEUDOACTION */
yyDecrement (1) yySetNT (yyNTaction) {
/* line 220 "-" */
/* line 213 "lex.lrk" */
 str_put (" ,"); 
/* line 1613 "Parser.c" */
} break;
case 117: /* action : */
yySetNT (yyNTaction) {
/* line 1617 "Parser.c" */
} break;
case 118: /* action_3 : */
yySetNT (yyNTaction_3) {
/* line 223 "-" */
/* line 211 "lex.lrk" */
 str_put ("	: { (void) GetWord (yytext); "); 
/* line 1624 "Parser.c" */
} break;
case 119: /* action_1 : action_1 action_2 */
yyDecrement (2) yySetNT (yyNTaction_1) {
/* line 1628 "Parser.c" */
} break;
case 120: /* action_1 : action_2 */
yyDecrement (1) yySetNT (yyNTaction_1) {
/* line 1632 "Parser.c" */
} break;
case 121:
case 60: /* action_2 : ACTION */
yyDecrement (1) yySetNT (yyNTaction_2) {
/* line 229 "-" */
/* line 221 "lex.lrk" */
 str_put ((char *) yyA [0].Scan.string_value); 
/* line 1640 "Parser.c" */
} break;
default: switch (yyState) {
case 1: goto yyAbort;
case 2: goto yyRead;
case 3: goto yyReduce;
}
}

	/* SPEC State = Next (Top (), Nonterminal); nonterminal transition */
# ifdef YYNDefault
	       yyState = * yyStateStackPtr ++;
	       for (;;) {
		  register yytComb * yyNCombPtr =
				yyNBasePtr [yyState] + (int) yyNonterminal;
		  if (yyNCombPtr->Check == yyState) {
		     yyState = yyNCombPtr->Next; break;
		  }
		  yyState = yyNDefault [yyState];
	       }
# else
	       yyState = yyNBasePtr [* yyStateStackPtr ++] [yyNonterminal];
# endif
	       * yyAttrStackPtr ++ = yySynAttribute;
	       if (yyState < yyFirstFinalState) break;	/* read nonterminal ? */
# ifdef YYDEBUG
	       yyStateStackPtr [0] = yyStateStackPtr [-1];
# endif
	    }

	 } else {					/* read */
   yyRead:  yyStateStackPtr ++;
	    yyGetAttribute (yyAttrStackPtr ++, Attribute);
	    yyTerminal = yyGetToken ();
# ifdef YYDEBUG
	    if (Debug) {
	       yyPrintState (yyStateStackPtr [-1]);
	       fprintf (yyTrace, "shift   %s, lookahead: %s",
		  yyGetTokenName (yyPrevTerminal),
		  yyGetTokenName (yyTerminal)); yyNl ();
	       yyPrevTerminal = yyTerminal;
	    }
# endif
	    yyIsRepairing = rfalse;
	 }
      }

   yyAbort:
# ifdef YYDEBUG
      if (Debug) {
	 yyPrintState (* yyStateStackPtr);
	 fprintf (yyTrace, "fail    parse started at %ld", yyStartCount);
	 yyNl ();
      }
# endif
      return ++ yyErrorCount;

   yyAccept:
# ifdef YYDEBUG
      if (Debug) {
	 yyPrintState (* yyStateStackPtr);
	 fprintf (yyTrace, "accept  parse started at %ld", yyStartCount);
	 yyNl ();
      }
# endif
      return yyErrorCount;
   }

# ifndef NO_RECOVER
static int yyErrorRecovery
# ifdef HAVE_ARGS
   (yySymbolRange yyTerminal,
#  ifdef YYDEBUG
    yySymbolRange * yyPrevTerminal,
#  endif
    long yyStackPtr)
# else
   (yyTerminal,
#  ifdef YYDEBUG
    yyPrevTerminal,
#  endif
    yyStackPtr)
   yySymbolRange	yyTerminal	;
#  ifdef YYDEBUG
   yySymbolRange *	yyPrevTerminal	;
#  endif
   long			yyStackPtr	;
# endif
   {
#     define	yyContinueSize	5000
      rbool	yyTokensSkipped	;
      tSet	yyContinueSet	;
      tSet	yyRestartSet	;
      int	yyLength	;
      char	yyContinueString [yyContinueSize + 2];

      if (yyControl.yyMessages) {
   /* 1. report an error */
	 ErrorMessage (xxSyntaxError, xxError, Attribute.Position);

   /* 2. report the offending token */
	 strcpy (yyContinueString, yyGetTokenName (yyTerminal));
# ifdef SPELLING
	 if (strncmp (yyContinueString, TokenPtr, TokenLength)) {
	    yyContinueString [yyLength = strlen (yyContinueString)] = ' ';
	    GetWord (& yyContinueString [++ yyLength]);
	 }
# endif
	 ErrorMessageI (xxTokenFound, xxInformation, Attribute.Position,
	    xxString, yyContinueString);

   /* 3. report the set of expected terminal symbols */
	 MakeSet (& yyContinueSet, yyLastTerminal);
	 yyComputeContinuation (yyStackPtr, & yyContinueSet);
	 yyLength = 0;
	 yyContinueString [0] = '\0';
	 while (! IsEmpty (& yyContinueSet)) {
	    char * yyTokenString =
	       yyGetTokenName ((yySymbolRange) Extract (& yyContinueSet));
	    int yyl = strlen (yyTokenString);
	    if (yyLength + yyl >= yyContinueSize) break;
	    strcpy (& yyContinueString [yyLength], yyTokenString);
	    yyLength += yyl;
	    yyContinueString [yyLength ++] = ' ';
	 }
	 yyContinueString [-- yyLength] = '\0';
	 ErrorMessageI (xxExpectedTokens, xxInformation, Attribute.Position,
	    xxString, yyContinueString);
	 ReleaseSet (& yyContinueSet);
      }

   /* 4. compute the set of terminal symbols for restart of the parse */
      MakeSet (& yyRestartSet, yyLastTerminal);
      yyComputeRestartPoints (yyStackPtr, & yyRestartSet);

   /* 5. skip terminal symbols until a restart point is reached */
      yyTokensSkipped = rfalse;
      while (! IsElement (yyTerminal, & yyRestartSet)) {
	 yyTerminal = yyGetToken ();
	 yyTokensSkipped = rtrue;
# ifdef YYDEBUG
	 if (Debug) {
	    yyPrintState (yyStateStack [yyStackPtr]);
	    fprintf (yyTrace, "skip    %s, lookahead: %s",
	       yyGetTokenName (* yyPrevTerminal),
	       yyGetTokenName (yyTerminal)); yyNl ();
	    * yyPrevTerminal = yyTerminal;
	 }
# endif
      }
      ReleaseSet (& yyRestartSet);

   /* 6. report the restart point */
      if (yyTokensSkipped & yyControl.yyMessages)
	 ErrorMessage (xxRestartPoint, xxInformation, Attribute.Position);

      return yyTerminal;
   }

/*
   compute the set of terminal symbols that can be accepted (read)
   in a given stack configuration (eventually after reduce actions)
*/

static void yyComputeContinuation
# ifdef HAVE_ARGS
   (long yyStackPtr, tSet * yyContinueSet)
# else
   (yyStackPtr, yyContinueSet)
   long			yyStackPtr	;
   tSet *		yyContinueSet	;
# endif
   {
      register yySymbolRange	yyTerminal;
      register yyStateRange	yyState = yyStateStack [yyStackPtr];

      AssignEmpty (yyContinueSet);
      for (yyTerminal = yyFirstTerminal; yyTerminal <= yyLastTerminal;
							yyTerminal ++) {
	 yyStateRange yyNextState = yyNext (yyState, yyTerminal);
	 if (yyNextState != yyNoState && (yyNextState <= yyLastStopState ||
	    yyIsContinuation (yyTerminal, yyStackPtr))) {
	    Include (yyContinueSet, yyTerminal);
	 }
      }
   }

/*
   check whether a given terminal symbol can be accepted (read)
   in a certain stack configuration (eventually after reduce actions)
*/

static rbool yyIsContinuation
# ifdef HAVE_ARGS
   (yySymbolRange yyTerminal, long yyStackPtr)
# else
   (yyTerminal, yyStackPtr)
   yySymbolRange	yyTerminal	;
   long			yyStackPtr	;
# endif
   {
      register yyStateRange	yState		;
      register yytNonterminal	yyNonterminal	;

      while (yyStackPtr >= yyIsContStackSize)	       /* pass Stack by value */
	 yyExtendArray ((char * *) & yyIsContStackPtr, & yyIsContStackSize,
			  (unsigned long) sizeof (yyStateRange));
      memcpy ((char *) yyIsContStackPtr, (char *) yyStateStack,
		(int) sizeof (yyStateRange) * (yyStackPtr + 1));

      yState = yyIsContStackPtr [yyStackPtr];
      for (;;) {
	 yyIsContStackPtr [yyStackPtr] = yState;
	 yState = yyNext (yState, yyTerminal);
	 if (yState == yyNoState) return rfalse;

	 do {						/* reduce */
	    if (yState > yyLastReduceState) {		/* dynamic ? */
	       yState = yyCondition [yState - yyLastReduceState];
	    }
	    if (yState <= yyLastStopState) { /* read, read reduce, or accept? */
	       return rtrue;
	    } else {					/* reduce */
	       yyStackPtr -= yyLength [yState - yyFirstReduceState];
	       yyNonterminal = yyLeftHandSide [yState - yyFirstReduceState];
	    }

	    yState = yyNext (yyIsContStackPtr [yyStackPtr],
				(yySymbolRange) yyNonterminal);
	    yyStackPtr ++;
	    if (yyStackPtr >= yyIsContStackSize) {
	       yyExtendArray ((char * *) & yyIsContStackPtr,
		  & yyIsContStackSize, (unsigned long) sizeof (yyStateRange));
	       if (yyStackPtr >= 1000) return rfalse; /* EMERGENCY break !!! */
	    }
	 } while (yState >= yyFirstFinalState);
      }
   }

/*
   compute the set of terminal symbols that can be accepted (read)
   directly in a given stack configuration
*/

static void yyCompContinuation
# ifdef HAVE_ARGS
   (yyStateRange yyState, tSet * yyContinueSet)
# else
   (yyState, yyContinueSet)
   yyStateRange		yyState		;
   tSet *		yyContinueSet	;
# endif
   {
      register yySymbolRange	yyTerminal;

      AssignEmpty (yyContinueSet);
      for (yyTerminal = yyFirstTerminal; yyTerminal <= yyLastTerminal;
							yyTerminal ++) {
	 yyStateRange yyNextState = yyNext (yyState, yyTerminal);
	 if (yyNextState != yyNoState && yyNextState <= yyLastStopState) {
	    Include (yyContinueSet, yyTerminal);
	 }
      }
   }

/*
   compute a set of terminal symbols that can be used to restart
   parsing in a given stack configuration. We simulate parsing until
   end of file using a suffix program synthesized by the function (array)
   yyContinuation. All symbols acceptable in the states reached during
   the simulation can be used to restart parsing.
*/

static void yyComputeRestartPoints
# ifdef HAVE_ARGS
   (long yyStackPtr, tSet * yyRestartSet)
# else
   (yyStackPtr, yyRestartSet)
   long			yyStackPtr	;
   tSet *		yyRestartSet	;
# endif
   {
      register yyStateRange	yState		;
      register yytNonterminal	yyNonterminal	;
	       tSet		yyContinueSet	;

      while (yyStackPtr >= yyCompResStackSize)	       /* pass Stack by value */
	 yyExtendArray ((char * *) & yyCompResStackPtr, & yyCompResStackSize,
			  (unsigned long) sizeof (yyStateRange));
      memcpy ((char *) yyCompResStackPtr, (char *) yyStateStack,
		(int) sizeof (yyStateRange) * (yyStackPtr + 1));

      MakeSet (& yyContinueSet, yyLastTerminal);
      AssignEmpty (yyRestartSet);
      yState = yyCompResStackPtr [yyStackPtr];

      for (;;) {
	 if (yyStackPtr >= yyCompResStackSize)
	    yyExtendArray ((char * *) & yyCompResStackPtr, & yyCompResStackSize,
			     (unsigned long) sizeof (yyStateRange));
	 yyCompResStackPtr [yyStackPtr] = yState;
	 yyCompContinuation (yState, & yyContinueSet);
	 Union (yyRestartSet, & yyContinueSet);
# ifdef YYDCRP
	 {
	    int yyLength = 0;
	    char yyContinueString [yyContinueSize + 2];
	    yyContinueString [0] = '\0';
	    while (! IsEmpty (& yyContinueSet)) {
	       char * yyTokenString =
		  yyGetTokenName ((yySymbolRange) Extract (& yyContinueSet));
	       int yyl = strlen (yyTokenString);
	       if (yyLength + yyl >= yyContinueSize) break;
	       strcpy (& yyContinueString [yyLength], yyTokenString);
	       yyLength += yyl;
	       yyContinueString [yyLength ++] = ' ';
	    }
	    yyContinueString [-- yyLength] = '\0';
	    fprintf (yyTrace, "%5d union %s", yState, yyContinueString);
	    yyNl ();
	 }
# endif
	 yState = yyNext (yState, yyContinuation [yState]);

	 if (yState >= yyFirstFinalState) {		/* final state ? */
	    if (yState <= yyLastReadReduceState) {	/* read reduce ? */
	       yyStackPtr ++;
	       yState = yyFinalToProd [yState - yyFirstReadReduceState];
# ifdef YYDCRP
	       yyCompResStackPtr [yyStackPtr] =
					yyCompResStackPtr [yyStackPtr - 1];
	       fprintf (yyTrace, "%5d shift   %s",
		  yyCompResStackPtr [yyStackPtr], yyGetTokenName
		  (yyContinuation [yyCompResStackPtr [yyStackPtr]])); yyNl ();
# endif
	    }

	    do {					/* reduce */
	       if (yState > yyLastReduceState) {	/* dynamic ? */
# ifdef YYDCRP
		  fprintf (yyTrace, "%5d dynamic decision %d",
		    yyCompResStackPtr [yyStackPtr], yState - yyLastReduceState);
		  yyNl ();
# endif
		  yState = yyCondition [yState - yyLastReduceState];
	       }
	       if (yyFirstReduceState <= yState &&
		   yState <= yyLastStopState) {		/* accept */
# ifdef YYDCRP
		  fprintf (yyTrace, "%5d accept",
		     yyCompResStackPtr [yyStackPtr]); yyNl ();
# endif
		  ReleaseSet (& yyContinueSet);
		  return;
	       } else if (yState < yyFirstFinalState) {	/* read */
		  goto yyRead;
	       } else {					/* reduce */
# ifdef YYDCRP
		  fprintf (yyTrace, "%5d reduce  %s",
		     yyCompResStackPtr [yyStackPtr],
		     yyRule [yState - yyLastReadReduceState]); yyNl ();
# endif
		  yyStackPtr -= yyLength [yState - yyFirstReduceState];
		  yyNonterminal = yyLeftHandSide [yState - yyFirstReduceState];
	       }

	       yState = yyNext (yyCompResStackPtr [yyStackPtr],
				(yySymbolRange) yyNonterminal);
	       yyStackPtr ++;
	    } while (yState >= yyFirstFinalState);
	 } else {					/* read */
yyRead:
# ifdef YYDCRP
	    fprintf (yyTrace, "%5d shift   %s",
	       yyCompResStackPtr [yyStackPtr], yyGetTokenName
	       (yyContinuation [yyCompResStackPtr [yyStackPtr]])); yyNl ();
# endif
	    yyStackPtr ++;
	 }
      }
   }

/* access the parse table:   Next : State x Symbol -> Action */

static yyStateRange yyNext
# ifdef HAVE_ARGS
   (yyStateRange yyState, yySymbolRange yySymbol)
# else
   (yyState, yySymbol) yyStateRange yyState; yySymbolRange yySymbol;
# endif
   {
      if (yySymbol <= yyLastTerminal) {
	 for (;;) {
	    register yytComb * yyTCombPtr = yyTBasePtr [yyState] + yySymbol;
# if defined YYTDefault & defined YYaccDefault
	    register unsigned long * yylp;
# endif
	    if (yyTCombPtr->Check == yyState) return yyTCombPtr->Next;
# ifdef YYTDefault
#  ifdef YYaccDefault
	    return (yylp = yyDefaultLook [yyState]) &&
	       (yylp [yySymbol >> 5] >> (yySymbol & 0x1f)) & 1 ?
		  yyTDefault [yyState] : yyNoState;
#  else
	    if ((yyState = yyTDefault [yyState]) == yyNoState) return yyNoState;
#  endif
# else
	    return yyNoState;
# endif
	 }
      }
# ifdef YYNDefault
      for (;;) {
	 register yytComb * yyNCombPtr = yyNBasePtr [yyState] + yySymbol;
	 if (yyNCombPtr->Check == yyState) return yyNCombPtr->Next;
	 yyState = yyNDefault [yyState];
      }
# else
      return yyNBasePtr [yyState] [yySymbol];
# endif
   }
# endif

void BeginParser ARGS ((void))
   {
   }

void CloseParser ARGS ((void))
   {
   }

