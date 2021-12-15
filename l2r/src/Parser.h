# ifndef yyParser
# define yyParser

/* $Id: Parser.h,v 1.8 2002/09/25 14:26:49 grosch rel $ */

# include "ratc.h"


# ifdef yacc_interface
# define Parser			yyparse
# define yyInitStackSize	YYMAXDEPTH
# endif
# define rbool		char
# define rtrue		1
# define rfalse		0
					/* named constants for start symbols */
					/* named constants for tokens */

extern	rbool	Debug;
extern	char *	TokenName	[];
extern	void	(* Exit)	ARGS ((void));

extern	void	BeginParser	ARGS ((void));
extern	int	Parser	ARGS ((void));
extern	int	Parser2	ARGS ((int yyStartSymbol));
extern	void	ResetParser	ARGS ((void));
extern	void	CloseParser	ARGS ((void));

# endif
