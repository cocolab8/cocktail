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
yyNTspec	= 28,
yyNTspec_4	= 29,
yyNTspec_3	= 30,
yyNTspec_2	= 31,
yyNTspec_1	= 32,
yyNTdef	= 33,
yyNTrword	= 34,
yyNTtag	= 35,
yyNTnlist	= 36,
yyNTnmno	= 37,
yyNTopt_semicolon	= 38,
yyNTopt_string	= 39,
yyNTrules	= 40,
yyNTrules_1	= 41,
yyNTrule	= 42,
yyNTrule_2	= 43,
yyNTrule_1	= 44,
yyNTrbody	= 45,
yyNTact	= 46,
yyNTprec	= 47
} yytNonterminal;
typedef struct { short yyMode; rbool yyActions, yyMessages; } yytControl;

static	yytControl	yyControl	= { 0, rtrue, rtrue };
	rbool		Debug	= rfalse;

# define yyFirstTerminal	0
# define yyLastTerminal	26
# define yySetSize	27
# define yyFirstSymbol	0
# define yyLastSymbol	47
# define yyTTableMax	161
# define yyNTableMax	82
# define yyStartState	1
# define yyFirstReadState	1
# define yyLastReadState	44
# define yyFirstReadReduceState	45
# define yyLastReadReduceState	56
# define yyFirstReduceState	57
# define yyLastReduceState	102
# define yyLastState	102
# define yyLastStopState	57
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
/* line 36 "yacc.lrk" */

# include "ratc.h"

typedef union { tScanAttribute Scan; } tParsAttribute;

int rword;		/* 0 = %token, 1 = %oper, 2 = %type */
tStringRef lhs, tag, prec;
tStringRef left_str, right_str, none_str, colon_str, bar_str, action_str, prec_str, dot_str;
int has_rhs, has_action;
struct tCell default_action = { 0, 0 };

/* line 154 "Parser.c" */

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
"0_intern : spec _EOF_ ",
"spec : spec_1 '%%' spec_2 rules spec_3 spec_4 ",
"spec_4 : ",
"spec_4 : '%%' ",
"spec_3 : ",
"spec_2 : ",
"spec_1 : ",
"spec_1 : spec_1 def ",
"def : '%start' identifier opt_semicolon ",
"def : '%union' opt_semicolon ",
"def : rword tag nlist opt_semicolon ",
"def : '%expect' number opt_semicolon ",
"def : '%pure_parser' opt_semicolon ",
"def : '%code' identifier code_block opt_semicolon ",
"def : '%destructor' code_block tag opt_semicolon ",
"rword : '%token' ",
"rword : '%left' ",
"rword : '%right' ",
"rword : '%nonassoc' ",
"rword : '%type' ",
"tag : '<' identifier '>' ",
"tag : ",
"nlist : nmno ",
"nlist : nlist nmno ",
"nlist : nlist ',' nmno ",
"nmno : identifier opt_string ",
"nmno : identifier number opt_string ",
"opt_semicolon : ",
"opt_semicolon : ';' ",
"opt_string : ",
"opt_string : string ",
"rules : C_IDENT rules_1 ':' rbody prec ",
"rules : rules rule ",
"rules_1 : ",
"rule : C_IDENT rule_1 ':' rbody prec ",
"rule : '|' rule_2 rbody prec ",
"rule_2 : ",
"rule_1 : ",
"rbody : rbody identifier ",
"rbody : rbody act ",
"rbody : ",
"act : '{' '}' ",
"prec : '%prec' identifier ",
"prec : '%prec' identifier act ",
"prec : prec ';' ",
"prec : ",
""
};
# endif
	char *		TokenName	[yyLastTerminal + 2] = {
"_EOF_",
"identifier",
"C_IDENT",
"number",
"string",
"code_block",
"%%",
"%code",
"%destructor",
"%expect",
"%left",
"%nonassoc",
"%prec",
"%pure_parser",
"%right",
"%start",
"%token",
"%type",
"%union",
",",
":",
";",
"<",
">",
"{",
"|",
"}",
""
};
static	yytComb		yyTComb		[yyTTableMax + 1] = {
{   2,   57}, {  30,   86}, {  25,   24}, {  17,   23}, {  30,   53}, 
{  18,   24}, {  30,   86}, {  30,   86}, {  30,   86}, {  30,   86}, 
{  30,   86}, {  30,   86}, {  38,   43}, {  30,   86}, {  30,   86}, 
{  30,   86}, {  30,   86}, {  30,   86}, {  30,   86}, {  30,   86}, 
{  25,   31}, {  30,   86}, {  14,   78}, {  14,   78}, {  14,   78}, 
{  14,   78}, {  14,   78}, {  14,   78}, {   9,   16}, {  14,   78}, 
{  14,   78}, {  14,   78}, {  14,   78}, {  14,   78}, {  14,   78}, 
{  31,   24}, {   5,   13}, {  14,   78}, {  14,   17}, {  10,   84}, 
{  10,   84}, {  10,   84}, {  10,   84}, {  10,   84}, {  10,   84}, 
{  12,   19}, {  10,   84}, {  10,   84}, {  10,   84}, {  10,   84}, 
{  10,   84}, {  10,   84}, {   4,   62}, {  11,   78}, {  10,   52}, 
{   1,   63}, {   1,   63}, {   1,   63}, {   1,   63}, {   1,   63}, 
{   1,   63}, {  24,   30}, {   1,   63}, {   1,   63}, {   1,   63}, 
{   1,   63}, {   1,   63}, {   1,   63}, {   3,    4}, {   3,    5}, 
{   3,    6}, {   3,    7}, {   3,   47}, {   3,   49}, {  11,   17}, 
{   3,    8}, {   3,   48}, {   3,    9}, {   3,   46}, {   3,   50}, 
{   3,   10}, {  32,   97}, {  32,   97}, {  32,   97}, {   7,   15}, 
{  29,   59}, {   6,   14}, {  32,   97}, {  28,   93}, {  28,   93}, 
{  28,   93}, {  29,   45}, {  13,   21}, {  32,   97}, {  28,   93}, 
{  41,  102}, {  41,   54}, {  41,  102}, {  19,   90}, {  33,   36}, 
{  28,   93}, {  41,  102}, {  32,   97}, {  27,   94}, {  26,   32}, 
{  32,   97}, {  32,   97}, {  41,   38}, {  43,   99}, {  28,   93}, 
{  43,   99}, {  23,   51}, {  28,   93}, {  28,   93}, {  43,   99}, 
{  44,   91}, {  41,  102}, {  44,   91}, {  39,   55}, {   0,    0}, 
{  41,  102}, {  44,   91}, {  40,   88}, {   0,    0}, {  40,   88}, 
{  20,   61}, {   0,    0}, {  20,   27}, {  40,   88}, {  43,   99}, 
{   0,    0}, {  20,   61}, {  43,   39}, {  43,   99}, {   0,    0}, 
{  42,   92}, {  44,   56}, {  42,   92}, {   0,    0}, {   0,    0}, 
{  44,   91}, {  42,   92}, {   0,    0}, {   0,    0}, {   0,    0}, 
{   0,    0}, {   0,    0}, {  40,   88}, {   0,    0}, {   0,    0}, 
{  20,   28}, {   0,    0}, {   0,    0}, {   0,    0}, {   0,    0}, 
{   0,    0}, {   0,    0}, {   0,    0}, {   0,    0}, {   0,    0}, 
{  42,   92}, {   0,    0}, 
};
static	yytNComb	yyNComb		[yyNTableMax - yyLastTerminal] = {
{   0,    0}, {   1,    2}, {   0,    0}, {  20,   29}, {   0,    0}, 
{   1,    3}, {   0,    0}, {   0,    0}, {   0,    0}, {   0,    0}, 
{  25,   80}, {  25,   67}, {  18,   25}, {  18,   79}, {   0,    0}, 
{  20,   89}, {   3,   64}, {   3,   11}, {   0,    0}, {  37,   96}, 
{  37,   42}, {  35,   40}, {  41,   44}, {  43,  100}, {  28,   34}, 
{  32,   35}, {  10,   66}, {  14,   22}, {  29,   58}, {  30,   83}, 
{  11,   18}, {  22,   71}, {  21,   70}, {  34,   37}, {  16,   65}, 
{  36,   41}, {  31,   81}, {  15,   68}, {  12,   20}, {   4,   12}, 
{  24,   82}, {   8,   69}, {  27,   33}, {  19,   26}, {   0,    0}, 
{   0,    0}, {   0,    0}, {   0,    0}, {   0,    0}, {   0,    0}, 
{   0,    0}, {   0,    0}, {   0,    0}, {   0,    0}, {   0,    0}, 
{   0,    0}, 
};
static	yytComb *	yyTBasePtr	[yyLastReadState + 1] = { 0,
& yyTComb [  49], & yyTComb [   0], & yyTComb [  62], & yyTComb [  50], 
& yyTComb [  35], & yyTComb [  81], & yyTComb [  81], & yyTComb [   0], 
& yyTComb [  27], & yyTComb [  33], & yyTComb [  52], & yyTComb [  43], 
& yyTComb [  87], & yyTComb [  16], & yyTComb [   0], & yyTComb [   0], 
& yyTComb [   2], & yyTComb [   4], & yyTComb [  78], & yyTComb [ 125], 
& yyTComb [   0], & yyTComb [   0], & yyTComb [  88], & yyTComb [  58], 
& yyTComb [   1], & yyTComb [  84], & yyTComb [  83], & yyTComb [  88], 
& yyTComb [  85], & yyTComb [   0], & yyTComb [  34], & yyTComb [  81], 
& yyTComb [  79], & yyTComb [   0], & yyTComb [   0], & yyTComb [   0], 
& yyTComb [   0], & yyTComb [  11], & yyTComb [  92], & yyTComb [ 122], 
& yyTComb [  95], & yyTComb [ 135], & yyTComb [ 108], & yyTComb [ 115], 
};
static	yytNComb *	yyNBasePtr	[yyLastReadState + 1] = { 0,
& yyNComb [ -27], & yyNComb [ -27], & yyNComb [ -17], & yyNComb [   8], 
& yyNComb [ -27], & yyNComb [ -27], & yyNComb [ -27], & yyNComb [   3], 
& yyNComb [ -27], & yyNComb [ -12], & yyNComb [  -5], & yyNComb [  -2], 
& yyNComb [ -27], & yyNComb [  -8], & yyNComb [  -1], & yyNComb [  -4], 
& yyNComb [ -27], & yyNComb [ -24], & yyNComb [   2], & yyNComb [ -27], 
& yyNComb [  -6], & yyNComb [  -7], & yyNComb [ -27], & yyNComb [   1], 
& yyNComb [ -27], & yyNComb [ -27], & yyNComb [  -2], & yyNComb [ -19], 
& yyNComb [  -1], & yyNComb [ -10], & yyNComb [  -1], & yyNComb [ -20], 
& yyNComb [ -27], & yyNComb [ -12], & yyNComb [ -26], & yyNComb [ -10], 
& yyNComb [ -27], & yyNComb [ -27], & yyNComb [ -27], & yyNComb [ -27], 
& yyNComb [ -25], & yyNComb [ -27], & yyNComb [ -23], & yyNComb [ -27], 
};
# ifdef YYTDefault
static	unsigned short	yyTDefault	[yyLastReadState + 1] = { 0,
    0,     0,     0,     0,     0,     0,     0,    10,     0,     0, 
    0,     0,     0,     0,    10,    10,     0,     0,     0,     0, 
   10,    10,     0,    30,    10,     0,     0,     0,     0,     0, 
    0,     0,     0,    32,    41,    32,    41,     0,     0,    44, 
   43,    44,     0,     0, 
};
# endif
# ifdef YYNDefault
static	unsigned short	yyNDefault	[yyLastReadState + 1] = { 0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0, 
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0, 
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0, 
    0,     0,     0,     0,    37,     0,     0,     0,     0,     0, 
   37,     0,     0,     0, 
};
# endif
# if ! defined NO_RECOVER | defined YYDEC_TABLE | defined YYCSTree
static	unsigned char	yyLength	[yyLastReduceState - yyFirstReduceState
							+ 1] = {
    2,     6,     0,     1,     0,     0,     0,     2,     3,     2, 
    4,     3,     2,     4,     4,     1,     1,     1,     1,     1, 
    3,     0,     1,     2,     3,     2,     3,     0,     1,     0, 
    1,     5,     2,     0,     5,     4,     0,     0,     2,     2, 
    0,     2,     2,     3,     2,     0, 
};
# endif
# if ! defined NO_RECOVER | defined YYDEC_TABLE
static	yytNonterminal	yyLeftHandSide	[yyLastReduceState - yyFirstReduceState
							+ 1] = {
yyNT0_intern,
yyNTspec,
yyNTspec_4,
yyNTspec_4,
yyNTspec_3,
yyNTspec_2,
yyNTspec_1,
yyNTspec_1,
yyNTdef,
yyNTdef,
yyNTdef,
yyNTdef,
yyNTdef,
yyNTdef,
yyNTdef,
yyNTrword,
yyNTrword,
yyNTrword,
yyNTrword,
yyNTrword,
yyNTtag,
yyNTtag,
yyNTnlist,
yyNTnlist,
yyNTnlist,
yyNTnmno,
yyNTnmno,
yyNTopt_semicolon,
yyNTopt_semicolon,
yyNTopt_string,
yyNTopt_string,
yyNTrules,
yyNTrules,
yyNTrules_1,
yyNTrule,
yyNTrule,
yyNTrule_2,
yyNTrule_1,
yyNTrbody,
yyNTrbody,
yyNTrbody,
yyNTact,
yyNTprec,
yyNTprec,
yyNTprec,
yyNTprec,
};
# endif
# ifndef NO_RECOVER
static	yySymbolRange	yyContinuation	[yyLastReadState + 1] = { 0,
    6,     0,     6,     2,     1,     5,     3,     6,     1,     6, 
    1,     2,     5,     6,     6,     6,     1,     1,    20,     0, 
    6,     6,    23,     1,     6,    20,    20,     0,     0,     1, 
    1,     0,    20,     0,     0,     0,     0,     1,    26,     0, 
    0,     0,     0,     0, 
};
static	unsigned short	yyCondition	[yyLastState - yyLastReduceState + 1] =
{ 0,
};
# endif
static	unsigned short	yyFinalToProd	[yyLastReadReduceState -
						yyFirstReadReduceState + 2] = {
   60,    72,    73,    74,    75,    76,    77,    85,    87,    95, 
   98,   101, 
0
};
static	unsigned short	yyStartLine	[yyLastStopState - yyFirstReduceState
							+ 2] = { 0,
59,
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
case 57:
YYACCEPT;
case 58: /* spec : spec_1 '%%' spec_2 rules spec_3 spec_4 */
yyDecrement (6) yySetNT (yyNTspec) {
/* line 1191 "Parser.c" */
} break;
case 59: /* spec_4 : */
yySetNT (yyNTspec_4) {
/* line 1195 "Parser.c" */
} break;
case 60:
case 45: /* spec_4 : '%%' */
yyDecrement (1) yySetNT (yyNTspec_4) {
/* line 1200 "Parser.c" */
} break;
case 61: /* spec_3 : */
yySetNT (yyNTspec_3) {
/* line 62 "-" */
/* line 90 "yacc.lrk" */
 yacc_globals (); 
/* line 1207 "Parser.c" */
} break;
case 62: /* spec_2 : */
yySetNT (yyNTspec_2) {
/* line 64 "-" */
/* line 90 "yacc.lrk" */
 put_text (text_list); 
/* line 1214 "Parser.c" */
} break;
case 63: /* spec_1 : */
yySetNT (yyNTspec_1) {
/* line 1218 "Parser.c" */
} break;
case 64: /* spec_1 : spec_1 def */
yyDecrement (2) yySetNT (yyNTspec_1) {
/* line 1222 "Parser.c" */
} break;
case 65: /* def : '%start' identifier opt_semicolon */
yyDecrement (3) yySetNT (yyNTdef) {
/* line 69 "-" */
/* line 93 "yacc.lrk" */
 start_symbol = yyA [1].Scan.string; 
/* line 1229 "Parser.c" */
} break;
case 66: /* def : '%union' opt_semicolon */
yyDecrement (2) yySetNT (yyNTdef) {
/* line 1233 "Parser.c" */
} break;
case 67: /* def : rword tag nlist opt_semicolon */
yyDecrement (4) yySetNT (yyNTdef) {
/* line 1237 "Parser.c" */
} break;
case 68: /* def : '%expect' number opt_semicolon */
yyDecrement (3) yySetNT (yyNTdef) {
/* line 1241 "Parser.c" */
} break;
case 69: /* def : '%pure_parser' opt_semicolon */
yyDecrement (2) yySetNT (yyNTdef) {
/* line 1245 "Parser.c" */
} break;
case 70: /* def : '%code' identifier code_block opt_semicolon */
yyDecrement (4) yySetNT (yyNTdef) {
/* line 1249 "Parser.c" */
} break;
case 71: /* def : '%destructor' code_block tag opt_semicolon */
yyDecrement (4) yySetNT (yyNTdef) {
/* line 1253 "Parser.c" */
} break;
case 72:
case 46: /* rword : '%token' */
yyDecrement (1) yySetNT (yyNTrword) {
/* line 78 "-" */
/* line 102 "yacc.lrk" */
 rword = 0; 
/* line 1261 "Parser.c" */
} break;
case 73:
case 47: /* rword : '%left' */
yyDecrement (1) yySetNT (yyNTrword) {
/* line 80 "-" */
/* line 103 "yacc.lrk" */
 rword = 1; put_oper (left_str); 
/* line 1269 "Parser.c" */
} break;
case 74:
case 48: /* rword : '%right' */
yyDecrement (1) yySetNT (yyNTrword) {
/* line 82 "-" */
/* line 104 "yacc.lrk" */
 rword = 1; put_oper (right_str); 
/* line 1277 "Parser.c" */
} break;
case 75:
case 49: /* rword : '%nonassoc' */
yyDecrement (1) yySetNT (yyNTrword) {
/* line 84 "-" */
/* line 105 "yacc.lrk" */
 rword = 1; put_oper (none_str); 
/* line 1285 "Parser.c" */
} break;
case 76:
case 50: /* rword : '%type' */
yyDecrement (1) yySetNT (yyNTrword) {
/* line 86 "-" */
/* line 106 "yacc.lrk" */
 rword = 2; type = 1; 
/* line 1293 "Parser.c" */
} break;
case 77:
case 51: /* tag : '<' identifier '>' */
yyDecrement (3) yySetNT (yyNTtag) {
/* line 89 "-" */
/* line 109 "yacc.lrk" */
 tag = yyA [1].Scan.string; 
/* line 1301 "Parser.c" */
} break;
case 78: /* tag : */
yySetNT (yyNTtag) {
/* line 91 "-" */
/* line 110 "yacc.lrk" */
 tag = 0; 
/* line 1308 "Parser.c" */
} break;
case 79: /* nlist : nmno */
yyDecrement (1) yySetNT (yyNTnlist) {
/* line 1312 "Parser.c" */
} break;
case 80: /* nlist : nlist nmno */
yyDecrement (2) yySetNT (yyNTnlist) {
/* line 1316 "Parser.c" */
} break;
case 81: /* nlist : nlist ',' nmno */
yyDecrement (3) yySetNT (yyNTnlist) {
/* line 1320 "Parser.c" */
} break;
case 82: /* nmno : identifier opt_string */
yyDecrement (2) yySetNT (yyNTnmno) {
/* line 99 "-" */
/* line 119 "yacc.lrk" */
 switch (rword) {
	  case 1 : put_oper (yyA [0].Scan.string);
	  case 0 : put_token (yyA [0].Scan.string, 0); break;
	  default: break;
	  }
	  if (tag) put_type (yyA [0].Scan.string, tag);
	
/* line 1333 "Parser.c" */
} break;
case 83: /* nmno : identifier number opt_string */
yyDecrement (3) yySetNT (yyNTnmno) {
/* line 109 "-" */
/* line 128 "yacc.lrk" */
 switch (rword) {
	  case 1 : put_oper (yyA [0].Scan.string);
	  case 0 : put_token (yyA [0].Scan.string, yyA [1].Scan.number); break;
	  default: break;
	  }
	  if (tag) put_type (yyA [0].Scan.string, tag);
	
/* line 1346 "Parser.c" */
} break;
case 84: /* opt_semicolon : */
yySetNT (yyNTopt_semicolon) {
/* line 1350 "Parser.c" */
} break;
case 85:
case 52: /* opt_semicolon : ';' */
yyDecrement (1) yySetNT (yyNTopt_semicolon) {
/* line 1355 "Parser.c" */
} break;
case 86: /* opt_string : */
yySetNT (yyNTopt_string) {
/* line 1359 "Parser.c" */
} break;
case 87:
case 53: /* opt_string : string */
yyDecrement (1) yySetNT (yyNTopt_string) {
/* line 1364 "Parser.c" */
} break;
case 88: /* rules : C_IDENT rules_1 ':' rbody prec */
yyDecrement (5) yySetNT (yyNTrules) {
/* line 126 "-" */
/* line 149 "yacc.lrk" */
 if (has_rhs && ! has_action) put_whole_action (& default_action, rtrue);
	    if (prec) { put_delim (prec_str); put_delim (prec); }
	    if (yyTerminal != t_bar) put_delim (dot_str);
	    put_rule (rule_elmts_list); put_text (text_list); 
/* line 1374 "Parser.c" */
} break;
case 89: /* rules : rules rule */
yyDecrement (2) yySetNT (yyNTrules) {
/* line 1378 "Parser.c" */
} break;
case 90: /* rules_1 : */
yySetNT (yyNTrules_1) {
/* line 134 "-" */
/* line 146 "yacc.lrk" */
 rule_elmts_list = NULL; prec = NULL; has_rhs = has_action = 0; lhs = yyA [-1].Scan.string;
	    put_lhs (lhs); put_delim (lhs); put_delim (colon_str); 
/* line 1386 "Parser.c" */
} break;
case 91: /* rule : C_IDENT rule_1 ':' rbody prec */
yyDecrement (5) yySetNT (yyNTrule) {
/* line 140 "-" */
/* line 160 "yacc.lrk" */
 if (has_rhs && ! has_action) put_whole_action (& default_action, rtrue);
	    if (prec) { put_delim (prec_str); put_delim (prec); }
	    if (yyTerminal != t_bar) put_delim (dot_str);
	    put_rule (rule_elmts_list); put_text (text_list); 
/* line 1396 "Parser.c" */
} break;
case 92: /* rule : '|' rule_2 rbody prec */
yyDecrement (4) yySetNT (yyNTrule) {
/* line 147 "-" */
/* line 168 "yacc.lrk" */
 if (has_rhs && ! has_action) put_whole_action (& default_action, rtrue);
	    if (prec) { put_delim (prec_str); put_delim (prec); }
	    if (yyTerminal != t_bar) put_delim (dot_str);
	    put_rule (rule_elmts_list); put_text (text_list); 
/* line 1406 "Parser.c" */
} break;
case 93: /* rule_2 : */
yySetNT (yyNTrule_2) {
/* line 154 "-" */
/* line 165 "yacc.lrk" */
 rule_elmts_list = NULL; prec = NULL; has_rhs = has_action = 0;
	    put_lhs (lhs); put_delim (bar_str); 
/* line 1414 "Parser.c" */
} break;
case 94: /* rule_1 : */
yySetNT (yyNTrule_1) {
/* line 159 "-" */
/* line 157 "yacc.lrk" */
 rule_elmts_list = NULL; prec = NULL; has_rhs = has_action = 0; lhs = yyA [-1].Scan.string;
	    put_lhs (lhs); put_delim (lhs); put_delim (colon_str); 
/* line 1422 "Parser.c" */
} break;
case 95:
case 54: /* rbody : rbody identifier */
yyDecrement (2) yySetNT (yyNTrbody) {
/* line 164 "-" */
/* line 174 "yacc.lrk" */
 put_symbol (yyA [1].Scan.string); has_rhs = 1; 
/* line 1430 "Parser.c" */
} break;
case 96: /* rbody : rbody act */
yyDecrement (2) yySetNT (yyNTrbody) {
/* line 1434 "Parser.c" */
} break;
case 97: /* rbody : */
yySetNT (yyNTrbody) {
/* line 1438 "Parser.c" */
} break;
case 98:
case 55: /* act : '{' '}' */
yyDecrement (2) yySetNT (yyNTact) {
/* line 171 "-" */
/* line 181 "yacc.lrk" */
 has_action = 1;
						/* is it last action ? */
		    put_whole_action (yyA [1].Scan.action, (rbool) (has_rhs &
		    (yyTerminal == t_bar ||
		     yyTerminal == t_semicolon ||
		     yyTerminal == t__EOF_))); 
/* line 1451 "Parser.c" */
} break;
case 99: /* prec : '%prec' identifier */
yyDecrement (2) yySetNT (yyNTprec) {
/* line 180 "-" */
/* line 189 "yacc.lrk" */
 prec = yyA [1].Scan.string; 
/* line 1458 "Parser.c" */
} break;
case 100: /* prec : '%prec' identifier act */
yyDecrement (3) yySetNT (yyNTprec) {
/* line 182 "-" */
/* line 190 "yacc.lrk" */
 prec = yyA [1].Scan.string; 
/* line 1465 "Parser.c" */
} break;
case 101:
case 56: /* prec : prec ';' */
yyDecrement (2) yySetNT (yyNTprec) {
/* line 1470 "Parser.c" */
} break;
case 102: /* prec : */
yySetNT (yyNTprec) {
/* line 1474 "Parser.c" */
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
/* line 16 "-" */
/* line 48 "yacc.lrk" */

left_str	= PutString ("\n\tLEFT", 6);
right_str	= PutString ("\n\tRIGHT", 7);
none_str	= PutString ("\n\tNONE", 6);
colon_str	= PutString ("\t:", 2);
bar_str		= PutString ("\t|", 2);
action_str	= PutString (" }}", 3);
prec_str	= PutString ("PREC", 4);
dot_str		= PutString ("\n\t.", 3);
default_action.car = action_str;

/* line 1912 "Parser.c" */
   }

void CloseParser ARGS ((void))
   {
   }

