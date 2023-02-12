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
yyNT0_intern	= 31,
yyNTspec	= 32,
yyNTspec_4	= 33,
yyNTspec_3	= 34,
yyNTspec_2	= 35,
yyNTspec_1	= 36,
yyNTdef	= 37,
yyNTrword	= 38,
yyNTtag	= 39,
yyNTnlist	= 40,
yyNTnmno	= 41,
yyNTopt_semicolon	= 42,
yyNTopt_string	= 43,
yyNTrules	= 44,
yyNTrules_1	= 45,
yyNTrule	= 46,
yyNTrule_2	= 47,
yyNTrule_1	= 48,
yyNTrbody	= 49,
yyNTact	= 50,
yyNTprec	= 51
} yytNonterminal;
typedef struct { short yyMode; rbool yyActions, yyMessages; } yytControl;

static	yytControl	yyControl	= { 0, rtrue, rtrue };
	rbool		Debug	= rfalse;

# define yyFirstTerminal	0
# define yyLastTerminal	30
# define yySetSize	31
# define yyFirstSymbol	0
# define yyLastSymbol	51
# define yyTTableMax	181
# define yyNTableMax	89
# define yyStartState	1
# define yyFirstReadState	1
# define yyLastReadState	52
# define yyFirstReadReduceState	53
# define yyLastReadReduceState	64
# define yyFirstReduceState	65
# define yyLastReduceState	114
# define yyLastState	114
# define yyLastStopState	65
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
"def : '%define' identifier opt_semicolon ",
"def : '%define' identifier '.' identifier opt_semicolon ",
"def : '%lex-param' code_block opt_semicolon ",
"def : '%parse-param' code_block opt_semicolon ",
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
"%define",
"%destructor",
"%expect",
"%left",
"%lex-param",
"%nonassoc",
"%parse-param",
"%prec",
"%pure_parser",
"%right",
"%start",
"%token",
"%type",
"%union",
".",
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
{   2,   65}, {  38,   98}, {  32,   31}, {  39,   31}, {  38,   61}, 
{   5,   16}, {  38,   98}, {  38,   98}, {  38,   98}, {  38,   98}, 
{  38,   98}, {  38,   98}, {  38,   98}, {  38,   98}, {  38,   98}, 
{  24,   31}, {  38,   98}, {  38,   98}, {  38,   98}, {  38,   98}, 
{  38,   98}, {  38,   98}, {  23,   30}, {  38,   98}, {  32,   39}, 
{  38,   98}, {  18,   90}, {  18,   90}, {  18,   90}, {  18,   90}, 
{  18,   90}, {  18,   90}, {  18,   90}, {  18,   90}, {  18,   90}, 
{  12,   22}, {  18,   90}, {  18,   90}, {  18,   90}, {  18,   90}, 
{  18,   90}, {  18,   90}, {   6,   17}, {  28,   37}, {  46,   51}, 
{  18,   90}, {  18,   23}, {  37,   96}, {  37,   96}, {  37,   96}, 
{  37,   96}, {  37,   96}, {  37,   96}, {  37,   96}, {  37,   96}, 
{  37,   96}, {   4,   70}, {  37,   96}, {  37,   96}, {  37,   96}, 
{  37,   96}, {  37,   96}, {  37,   96}, {  15,   25}, {  31,   38}, 
{   8,   19}, {  37,   60}, {   3,    4}, {   3,    5}, {   3,    6}, 
{   3,    7}, {   3,    8}, {   3,   55}, {   3,    9}, {   3,   57}, 
{   3,   10}, {  10,   21}, {   3,   11}, {   3,   56}, {   3,   12}, 
{   3,   54}, {   3,   58}, {   3,   13}, {   1,   71}, {   1,   71}, 
{   1,   71}, {   1,   71}, {   1,   71}, {   1,   71}, {   1,   71}, 
{   1,   71}, {   1,   71}, {   9,   20}, {   1,   71}, {   1,   71}, 
{   1,   71}, {   1,   71}, {   1,   71}, {   1,   71}, {  35,  105}, 
{  35,  105}, {  35,  105}, {  16,   27}, {   7,   18}, {  36,   67}, 
{  35,  105}, {  40,  109}, {  40,  109}, {  40,  109}, {  26,   69}, 
{  36,   53}, {  26,   34}, {  40,  109}, {  17,   28}, {  35,  105}, 
{  26,   69}, {  14,   90}, {  49,  114}, {  49,   62}, {  49,  114}, 
{  51,  111}, {  40,  109}, {  51,  111}, {  49,  114}, {  35,  105}, 
{  41,   44}, {  51,  111}, {  35,  105}, {  35,  105}, {  25,  102}, 
{  34,  106}, {  40,  109}, {  49,   46}, {  33,   40}, {  40,  109}, 
{  40,  109}, {  30,   59}, {  52,  103}, {  26,   35}, {  52,  103}, 
{  47,   63}, {  14,   23}, {  49,  114}, {  52,  103}, {   0,    0}, 
{  51,  111}, {  49,  114}, {   0,    0}, {  51,   47}, {  51,  111}, 
{  48,  100}, {  50,  104}, {  48,  100}, {  50,  104}, {   0,    0}, 
{   0,    0}, {  48,  100}, {  50,  104}, {   0,    0}, {   0,    0}, 
{   0,    0}, {   0,    0}, {  52,   64}, {   0,    0}, {   0,    0}, 
{   0,    0}, {  52,  103}, {   0,    0}, {   0,    0}, {   0,    0}, 
{   0,    0}, {   0,    0}, {   0,    0}, {   0,    0}, {   0,    0}, 
{   0,    0}, {   0,    0}, {   0,    0}, {   0,    0}, {  48,  100}, 
{  50,  104}, {   0,    0}, 
};
static	yytNComb	yyNComb		[yyNTableMax - yyLastTerminal] = {
{   0,    0}, {   1,    2}, {   0,    0}, {  26,   36}, {   0,    0}, 
{   1,    3}, {   0,    0}, {   0,    0}, {   0,    0}, {   0,    0}, 
{  32,   92}, {  32,   75}, {  24,   32}, {  24,   91}, {   0,    0}, 
{  26,  101}, {   0,    0}, {   0,    0}, {   0,    0}, {  45,  108}, 
{  45,   50}, {   3,   72}, {   3,   14}, {  43,   48}, {  49,   52}, 
{  51,  112}, {  40,   43}, {  35,   42}, {  37,   81}, {  18,   29}, 
{  36,   66}, {  38,   95}, {  14,   24}, {  42,   45}, {  39,   93}, 
{  29,   79}, {  13,   74}, {  11,   77}, {  27,   78}, {  22,   73}, 
{  21,   83}, {  19,   76}, {   4,   15}, {  15,   26}, {  31,   94}, 
{  20,   82}, {  44,   49}, {  34,   41}, {  25,   33}, {  17,   80}, 
{   0,    0}, {   0,    0}, {   0,    0}, {   0,    0}, {   0,    0}, 
{   0,    0}, {   0,    0}, {   0,    0}, {   0,    0}, 
};
static	yytComb *	yyTBasePtr	[yyLastReadState + 1] = { 0,
& yyTComb [  77], & yyTComb [   0], & yyTComb [  61], & yyTComb [  54], 
& yyTComb [   4], & yyTComb [  41], & yyTComb [  98], & yyTComb [  62], 
& yyTComb [  87], & yyTComb [  71], & yyTComb [   0], & yyTComb [  34], 
& yyTComb [   0], & yyTComb [ 115], & yyTComb [  61], & yyTComb [  97], 
& yyTComb [  91], & yyTComb [  20], & yyTComb [   0], & yyTComb [   0], 
& yyTComb [   0], & yyTComb [   0], & yyTComb [  21], & yyTComb [  14], 
& yyTComb [ 105], & yyTComb [ 109], & yyTComb [   0], & yyTComb [  42], 
& yyTComb [   0], & yyTComb [ 109], & yyTComb [  61], & yyTComb [   1], 
& yyTComb [ 109], & yyTComb [ 106], & yyTComb [  99], & yyTComb [ 104], 
& yyTComb [  41], & yyTComb [   0], & yyTComb [   2], & yyTComb [ 106], 
& yyTComb [ 101], & yyTComb [   0], & yyTComb [   0], & yyTComb [   0], 
& yyTComb [   0], & yyTComb [  43], & yyTComb [ 110], & yyTComb [ 150], 
& yyTComb [ 117], & yyTComb [ 151], & yyTComb [ 120], & yyTComb [ 137], 
};
static	yytNComb *	yyNBasePtr	[yyLastReadState + 1] = { 0,
& yyNComb [ -31], & yyNComb [ -31], & yyNComb [ -16], & yyNComb [   7], 
& yyNComb [ -31], & yyNComb [ -31], & yyNComb [ -31], & yyNComb [ -31], 
& yyNComb [ -31], & yyNComb [ -31], & yyNComb [  -5], & yyNComb [ -31], 
& yyNComb [  -6], & yyNComb [  -7], & yyNComb [  -1], & yyNComb [ -31], 
& yyNComb [   7], & yyNComb [ -10], & yyNComb [  -1], & yyNComb [   3], 
& yyNComb [  -2], & yyNComb [  -3], & yyNComb [ -31], & yyNComb [ -28], 
& yyNComb [   3], & yyNComb [ -31], & yyNComb [  -4], & yyNComb [ -31], 
& yyNComb [  -7], & yyNComb [ -31], & yyNComb [   1], & yyNComb [ -31], 
& yyNComb [ -31], & yyNComb [  -1], & yyNComb [ -20], & yyNComb [  -3], 
& yyNComb [ -14], & yyNComb [ -12], & yyNComb [  -7], & yyNComb [ -23], 
& yyNComb [ -31], & yyNComb [ -16], & yyNComb [ -28], & yyNComb [  -3], 
& yyNComb [ -31], & yyNComb [ -31], & yyNComb [ -31], & yyNComb [ -31], 
& yyNComb [ -27], & yyNComb [ -31], & yyNComb [ -25], & yyNComb [ -31], 
};
# ifdef YYTDefault
static	unsigned short	yyTDefault	[yyLastReadState + 1] = { 0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0, 
   37,     0,    37,     0,     0,     0,    37,     0,    37,    37, 
   37,    37,     0,     0,     0,     0,    37,     0,    37,     0, 
   38,    37,     0,     0,     0,     0,     0,     0,     0,     0, 
    0,    40,    49,    40,    49,     0,     0,    52,    51,    52, 
    0,     0, 
};
# endif
# ifdef YYNDefault
static	unsigned short	yyNDefault	[yyLastReadState + 1] = { 0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0, 
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0, 
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0, 
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0, 
    0,     0,    45,     0,     0,     0,     0,     0,    45,     0, 
    0,     0, 
};
# endif
# if ! defined NO_RECOVER | defined YYDEC_TABLE | defined YYCSTree
static	unsigned char	yyLength	[yyLastReduceState - yyFirstReduceState
							+ 1] = {
    2,     6,     0,     1,     0,     0,     0,     2,     3,     2, 
    4,     3,     2,     4,     4,     3,     5,     3,     3,     1, 
    1,     1,     1,     1,     3,     0,     1,     2,     3,     2, 
    3,     0,     1,     0,     1,     5,     2,     0,     5,     4, 
    0,     0,     2,     2,     0,     2,     2,     3,     2,     0, 
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
    6,     0,     6,     2,     1,     1,     5,     3,     5,     5, 
    6,     1,     6,     1,     2,     5,     6,     6,     6,     6, 
    6,     6,     1,     1,    24,     0,     6,     1,     6,    27, 
    1,     6,    24,    24,     0,     0,     6,     1,     1,     0, 
   24,     0,     0,     0,     0,     1,    30,     0,     0,     0, 
    0,     0, 
};
static	unsigned short	yyCondition	[yyLastState - yyLastReduceState + 1] =
{ 0,
};
# endif
static	unsigned short	yyFinalToProd	[yyLastReadReduceState -
						yyFirstReadReduceState + 2] = {
   68,    84,    85,    86,    87,    88,    89,    97,    99,   107, 
  110,   113, 
0
};
static	unsigned short	yyStartLine	[yyLastStopState - yyFirstReduceState
							+ 2] = { 0,
63,
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
case 65:
YYACCEPT;
case 66: /* spec : spec_1 '%%' spec_2 rules spec_3 spec_4 */
yyDecrement (6) yySetNT (yyNTspec) {
/* line 1214 "Parser.c" */
} break;
case 67: /* spec_4 : */
yySetNT (yyNTspec_4) {
/* line 1218 "Parser.c" */
} break;
case 68:
case 53: /* spec_4 : '%%' */
yyDecrement (1) yySetNT (yyNTspec_4) {
/* line 1223 "Parser.c" */
} break;
case 69: /* spec_3 : */
yySetNT (yyNTspec_3) {
/* line 66 "-" */
/* line 94 "yacc.lrk" */
 yacc_globals (); 
/* line 1230 "Parser.c" */
} break;
case 70: /* spec_2 : */
yySetNT (yyNTspec_2) {
/* line 68 "-" */
/* line 94 "yacc.lrk" */
 put_text (text_list); 
/* line 1237 "Parser.c" */
} break;
case 71: /* spec_1 : */
yySetNT (yyNTspec_1) {
/* line 1241 "Parser.c" */
} break;
case 72: /* spec_1 : spec_1 def */
yyDecrement (2) yySetNT (yyNTspec_1) {
/* line 1245 "Parser.c" */
} break;
case 73: /* def : '%start' identifier opt_semicolon */
yyDecrement (3) yySetNT (yyNTdef) {
/* line 73 "-" */
/* line 97 "yacc.lrk" */
 start_symbol = yyA [1].Scan.string; 
/* line 1252 "Parser.c" */
} break;
case 74: /* def : '%union' opt_semicolon */
yyDecrement (2) yySetNT (yyNTdef) {
/* line 1256 "Parser.c" */
} break;
case 75: /* def : rword tag nlist opt_semicolon */
yyDecrement (4) yySetNT (yyNTdef) {
/* line 1260 "Parser.c" */
} break;
case 76: /* def : '%expect' number opt_semicolon */
yyDecrement (3) yySetNT (yyNTdef) {
/* line 1264 "Parser.c" */
} break;
case 77: /* def : '%pure_parser' opt_semicolon */
yyDecrement (2) yySetNT (yyNTdef) {
/* line 1268 "Parser.c" */
} break;
case 78: /* def : '%code' identifier code_block opt_semicolon */
yyDecrement (4) yySetNT (yyNTdef) {
/* line 1272 "Parser.c" */
} break;
case 79: /* def : '%destructor' code_block tag opt_semicolon */
yyDecrement (4) yySetNT (yyNTdef) {
/* line 1276 "Parser.c" */
} break;
case 80: /* def : '%define' identifier opt_semicolon */
yyDecrement (3) yySetNT (yyNTdef) {
/* line 1280 "Parser.c" */
} break;
case 81: /* def : '%define' identifier '.' identifier opt_semicolon */
yyDecrement (5) yySetNT (yyNTdef) {
/* line 1284 "Parser.c" */
} break;
case 82: /* def : '%lex-param' code_block opt_semicolon */
yyDecrement (3) yySetNT (yyNTdef) {
/* line 1288 "Parser.c" */
} break;
case 83: /* def : '%parse-param' code_block opt_semicolon */
yyDecrement (3) yySetNT (yyNTdef) {
/* line 1292 "Parser.c" */
} break;
case 84:
case 54: /* rword : '%token' */
yyDecrement (1) yySetNT (yyNTrword) {
/* line 86 "-" */
/* line 110 "yacc.lrk" */
 rword = 0; 
/* line 1300 "Parser.c" */
} break;
case 85:
case 55: /* rword : '%left' */
yyDecrement (1) yySetNT (yyNTrword) {
/* line 88 "-" */
/* line 111 "yacc.lrk" */
 rword = 1; put_oper (left_str); 
/* line 1308 "Parser.c" */
} break;
case 86:
case 56: /* rword : '%right' */
yyDecrement (1) yySetNT (yyNTrword) {
/* line 90 "-" */
/* line 112 "yacc.lrk" */
 rword = 1; put_oper (right_str); 
/* line 1316 "Parser.c" */
} break;
case 87:
case 57: /* rword : '%nonassoc' */
yyDecrement (1) yySetNT (yyNTrword) {
/* line 92 "-" */
/* line 113 "yacc.lrk" */
 rword = 1; put_oper (none_str); 
/* line 1324 "Parser.c" */
} break;
case 88:
case 58: /* rword : '%type' */
yyDecrement (1) yySetNT (yyNTrword) {
/* line 94 "-" */
/* line 114 "yacc.lrk" */
 rword = 2; type = 1; 
/* line 1332 "Parser.c" */
} break;
case 89:
case 59: /* tag : '<' identifier '>' */
yyDecrement (3) yySetNT (yyNTtag) {
/* line 97 "-" */
/* line 117 "yacc.lrk" */
 tag = yyA [1].Scan.string; 
/* line 1340 "Parser.c" */
} break;
case 90: /* tag : */
yySetNT (yyNTtag) {
/* line 99 "-" */
/* line 118 "yacc.lrk" */
 tag = 0; 
/* line 1347 "Parser.c" */
} break;
case 91: /* nlist : nmno */
yyDecrement (1) yySetNT (yyNTnlist) {
/* line 1351 "Parser.c" */
} break;
case 92: /* nlist : nlist nmno */
yyDecrement (2) yySetNT (yyNTnlist) {
/* line 1355 "Parser.c" */
} break;
case 93: /* nlist : nlist ',' nmno */
yyDecrement (3) yySetNT (yyNTnlist) {
/* line 1359 "Parser.c" */
} break;
case 94: /* nmno : identifier opt_string */
yyDecrement (2) yySetNT (yyNTnmno) {
/* line 107 "-" */
/* line 127 "yacc.lrk" */
 switch (rword) {
	  case 1 : put_oper (yyA [0].Scan.string);
	  case 0 : put_token (yyA [0].Scan.string, 0); break;
	  default: break;
	  }
	  if (tag) put_type (yyA [0].Scan.string, tag);
	
/* line 1372 "Parser.c" */
} break;
case 95: /* nmno : identifier number opt_string */
yyDecrement (3) yySetNT (yyNTnmno) {
/* line 117 "-" */
/* line 136 "yacc.lrk" */
 switch (rword) {
	  case 1 : put_oper (yyA [0].Scan.string);
	  case 0 : put_token (yyA [0].Scan.string, yyA [1].Scan.number); break;
	  default: break;
	  }
	  if (tag) put_type (yyA [0].Scan.string, tag);
	
/* line 1385 "Parser.c" */
} break;
case 96: /* opt_semicolon : */
yySetNT (yyNTopt_semicolon) {
/* line 1389 "Parser.c" */
} break;
case 97:
case 60: /* opt_semicolon : ';' */
yyDecrement (1) yySetNT (yyNTopt_semicolon) {
/* line 1394 "Parser.c" */
} break;
case 98: /* opt_string : */
yySetNT (yyNTopt_string) {
/* line 1398 "Parser.c" */
} break;
case 99:
case 61: /* opt_string : string */
yyDecrement (1) yySetNT (yyNTopt_string) {
/* line 1403 "Parser.c" */
} break;
case 100: /* rules : C_IDENT rules_1 ':' rbody prec */
yyDecrement (5) yySetNT (yyNTrules) {
/* line 134 "-" */
/* line 157 "yacc.lrk" */
 if (has_rhs && ! has_action) put_whole_action (& default_action, rtrue);
	    if (prec) { put_delim (prec_str); put_delim (prec); }
	    if (yyTerminal != t_bar) put_delim (dot_str);
	    put_rule (rule_elmts_list); put_text (text_list); 
/* line 1413 "Parser.c" */
} break;
case 101: /* rules : rules rule */
yyDecrement (2) yySetNT (yyNTrules) {
/* line 1417 "Parser.c" */
} break;
case 102: /* rules_1 : */
yySetNT (yyNTrules_1) {
/* line 142 "-" */
/* line 154 "yacc.lrk" */
 rule_elmts_list = NULL; prec = NULL; has_rhs = has_action = 0; lhs = yyA [-1].Scan.string;
	    put_lhs (lhs); put_delim (lhs); put_delim (colon_str); 
/* line 1425 "Parser.c" */
} break;
case 103: /* rule : C_IDENT rule_1 ':' rbody prec */
yyDecrement (5) yySetNT (yyNTrule) {
/* line 148 "-" */
/* line 168 "yacc.lrk" */
 if (has_rhs && ! has_action) put_whole_action (& default_action, rtrue);
	    if (prec) { put_delim (prec_str); put_delim (prec); }
	    if (yyTerminal != t_bar) put_delim (dot_str);
	    put_rule (rule_elmts_list); put_text (text_list); 
/* line 1435 "Parser.c" */
} break;
case 104: /* rule : '|' rule_2 rbody prec */
yyDecrement (4) yySetNT (yyNTrule) {
/* line 155 "-" */
/* line 176 "yacc.lrk" */
 if (has_rhs && ! has_action) put_whole_action (& default_action, rtrue);
	    if (prec) { put_delim (prec_str); put_delim (prec); }
	    if (yyTerminal != t_bar) put_delim (dot_str);
	    put_rule (rule_elmts_list); put_text (text_list); 
/* line 1445 "Parser.c" */
} break;
case 105: /* rule_2 : */
yySetNT (yyNTrule_2) {
/* line 162 "-" */
/* line 173 "yacc.lrk" */
 rule_elmts_list = NULL; prec = NULL; has_rhs = has_action = 0;
	    put_lhs (lhs); put_delim (bar_str); 
/* line 1453 "Parser.c" */
} break;
case 106: /* rule_1 : */
yySetNT (yyNTrule_1) {
/* line 167 "-" */
/* line 165 "yacc.lrk" */
 rule_elmts_list = NULL; prec = NULL; has_rhs = has_action = 0; lhs = yyA [-1].Scan.string;
	    put_lhs (lhs); put_delim (lhs); put_delim (colon_str); 
/* line 1461 "Parser.c" */
} break;
case 107:
case 62: /* rbody : rbody identifier */
yyDecrement (2) yySetNT (yyNTrbody) {
/* line 172 "-" */
/* line 182 "yacc.lrk" */
 put_symbol (yyA [1].Scan.string); has_rhs = 1; 
/* line 1469 "Parser.c" */
} break;
case 108: /* rbody : rbody act */
yyDecrement (2) yySetNT (yyNTrbody) {
/* line 1473 "Parser.c" */
} break;
case 109: /* rbody : */
yySetNT (yyNTrbody) {
/* line 1477 "Parser.c" */
} break;
case 110:
case 63: /* act : '{' '}' */
yyDecrement (2) yySetNT (yyNTact) {
/* line 179 "-" */
/* line 189 "yacc.lrk" */
 has_action = 1;
						/* is it last action ? */
		    put_whole_action (yyA [1].Scan.action, (rbool) (has_rhs &
		    (yyTerminal == t_bar ||
		     yyTerminal == t_semicolon ||
		     yyTerminal == t__EOF_))); 
/* line 1490 "Parser.c" */
} break;
case 111: /* prec : '%prec' identifier */
yyDecrement (2) yySetNT (yyNTprec) {
/* line 188 "-" */
/* line 197 "yacc.lrk" */
 prec = yyA [1].Scan.string; 
/* line 1497 "Parser.c" */
} break;
case 112: /* prec : '%prec' identifier act */
yyDecrement (3) yySetNT (yyNTprec) {
/* line 190 "-" */
/* line 198 "yacc.lrk" */
 prec = yyA [1].Scan.string; 
/* line 1504 "Parser.c" */
} break;
case 113:
case 64: /* prec : prec ';' */
yyDecrement (2) yySetNT (yyNTprec) {
/* line 1509 "Parser.c" */
} break;
case 114: /* prec : */
yySetNT (yyNTprec) {
/* line 1513 "Parser.c" */
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

/* line 1951 "Parser.c" */
   }

void CloseParser ARGS ((void))
   {
   }

