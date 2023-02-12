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
# define t__EOF_	0
# define t_identifier	1
# define t_C_IDENT	2
# define t_number	3
# define t_string	4
# define t_code_block	5
# define t_percent_percent	6
# define t_percent_code	7
# define t_percent_define	8
# define t_percent_destructor	9
# define t_percent_expect	10
# define t_percent_left	11
# define t_percent_lex_param	12
# define t_percent_nonassoc	13
# define t_percent_parse_param	14
# define t_percent_prec	15
# define t_percent_pure_parser	16
# define t_percent_right	17
# define t_percent_start	18
# define t_percent_token	19
# define t_percent_type	20
# define t_percent_union	21
# define t_dot	22
# define t_comma	23
# define t_colon	24
# define t_semicolon	25
# define t_less	26
# define t_greater	27
# define t_left_curly	28
# define t_bar	29
# define t_right_curly	30

extern	rbool	Debug;
extern	char *	TokenName	[];
extern	void	(* Exit)	ARGS ((void));

extern	void	BeginParser	ARGS ((void));
extern	int	Parser	ARGS ((void));
extern	int	Parser2	ARGS ((int yyStartSymbol));
extern	void	ResetParser	ARGS ((void));
extern	void	CloseParser	ARGS ((void));

# endif
