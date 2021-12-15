$@ # ifndef yy@
$@ # define yy@

/* $Id: Parser.h,v 1.8 2002/09/25 14:26:49 grosch rel $ */

# include "ratc.h"

$-	/* IMPORT section is inserted here */
$E	/* EXPORT section is inserted here */

# ifdef yacc_interface
$@ # define @			yyparse
# define yyInitStackSize	YYMAXDEPTH
# endif
# define rbool		char
# define rtrue		1
# define rfalse		0
					/* named constants for start symbols */
$I	/* start symbol constants are inserted here */
					/* named constants for tokens */
$6	/* token constants are inserted here */

$@ extern	rbool	@_Debug;
$@ extern	char *	@_TokenName	[];
$@ extern	void	(* @_Exit)	ARGS ((void));

$@ extern	void	Begin@	ARGS ((void));
$@ extern	int	@	ARGS ((void));
$@ extern	int	@2	ARGS ((int yyStartSymbol));
$@ extern	void	Reset@	ARGS ((void));
$@ extern	void	Close@	ARGS ((void));

# endif
