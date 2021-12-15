$@ # ifndef yy@
$@ # define yy@

/* $Id: Parser.hh,v 1.29 2008/10/08 10:18:35 grosch Exp $ */

# include "Sets.h"
# include "Errors.h"
# include "Global.h"
$@ # include "$.h"

# define		rbool		char
# define		rtrue		1
# define		rfalse		0

$-	/* IMPORT section is inserted here */
$E[	/* EXPORT section is inserted here */
$@ typedef struct { $_tScanAttribute Scan; } @_tParsAttribute;
$]

$@ # ifndef @_BASE_CLASS
$@ # define @_BASE_CLASS
# endif

typedef unsigned short	yyStateRange	;
typedef unsigned short	yySymbolRange	;
$@ typedef struct { short yyMode; rbool yyActions, yyMessages; } @_yytControl;

# if defined YYTrialParse | defined YYReParse | defined YYGetLook

typedef struct { yySymbolRange	yyToken;
$@ 		 $_tScanAttribute	yyAttribute;
# ifdef YYMemoParse
		 short		yyStart;
# endif
$@ 	       } @_yytBuffer;
# endif

$@ class @ @_BASE_CLASS {

public:
					/* named constants for start symbols */
$I	/* start symbol constants are inserted here */
					/* named constants for tokens */
$6	/* token constants are inserted here */

   const char * const * TokenName	;
   rbool		yyDebug		;
   void			(* Exit)	(void);

$@ 			@		(void);
$@ 			@		($ * ScannerObj,
					 Errors * ErrorsObj = & gErrors);
   int			Parse		(void);
   int			Parse		(yyStateRange yyStartSymbol);
   void			Reset		(void);
$@ 			~@		(void);

$@    $ *		ScannerObj	;
   Errors *		ErrorsObj	;

protected:
   void			yyInitialize	(void);
$@    @_yytControl		yyControl	;
   unsigned long	yyStateStackSize;
   yyStateRange *	yyStateStack	;
   yyStateRange *	yyEndOfStack	;
   unsigned long	yyAttrStackSize ;
$@    @_tParsAttribute *	yyAttributeStack;

# if defined YYTrialParse | defined YYReParse
   yyStateRange *	yyStateStackPtr ;
$@    @_tParsAttribute *	yyAttrStackPtr	;
# endif
# ifndef NO_RECOVER
   yyStateRange *	yyIsContStackPtr;
   unsigned long	yyIsContStackSize;
   yyStateRange *	yyCompResStackPtr;
   unsigned long	yyCompResStackSize;
# endif
# if defined YYTrialParse | defined YYReParse | defined YYGetLook
$@    @_yytBuffer *		yyBuffer	;
   unsigned long	yyBufferSize	;
   unsigned long	yyBufferNext	;
   unsigned long	yyBufferLast	;
   rbool		yyBufferClear	;
   short		yyParseLevel	;

   int		yyGetToken	(void);
   void		yyBufferSet	(yySymbolRange);
# endif
# ifdef YYGetLook
   int		yyGetLookahead	(int, yySymbolRange);
$@    void		xxGetAttribute	(int, yySymbolRange, $_tScanAttribute *);
# endif
# ifdef YYTrialParse
   int		yyTrialParse	(yyStateRange, yySymbolRange, int);
# endif
# ifdef YYReParse
$@    @_yytControl	yyPrevControl	;

   int		ReParse		(yyStateRange, int, int, rbool, rbool);
   long		yyBufferOn	(rbool, rbool, yySymbolRange);
   long		BufferOff	(void);
   void		BufferClear	(void);
# endif
# ifdef YYDEBUG
   long		yyCount		;
   FILE *	yyTrace		;

   void		yyNl		(void);
   void		yyPrintState	(yyStateRange);
   rbool	yyPrintResult	(yyStateRange, int, rbool);
# endif
   void		yyCheckMemory	(char *);
$@    void		yyExtendStack	(yyStateRange * *, @_tParsAttribute * *,
				 yyStateRange);
   int		yyParse		(yyStateRange, yySymbolRange, int);
# ifndef NO_RECOVER
   int		yyErrorRecovery	(yySymbolRange,
# ifdef YYDEBUG
				 yySymbolRange *,
# endif
				 long);
   rbool	yyIsContinuation	(yySymbolRange, long);
   void		yyComputeContinuation	(long, tSet *);
   void		yyComputeRestartPoints	(long, tSet *);
# endif
};

# endif
