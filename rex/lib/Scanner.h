$@ # ifndef yy@
$@ # define yy@

/* $Id: Scanner.h,v 2.18 2005/03/24 17:43:29 grosch rel $ */

# include "config.h"
# if HAVE_WCHAR_H
#  include <wchar.h>
# endif
# include "ratc.h"

$- user import declarations
$E[ user export declarations
# include "Position.h"
$@ typedef struct { tPosition Position; } $_tScanAttribute;
$@ extern void $_ErrorAttribute ARGS ((int Token, $_tScanAttribute * Attribute));
$]

$@ # define $_EofToken	0
$V define directives

$@ # ifndef $_xxtChar
$@ #  if $_xxMaxCharacter < 256
$@ #   define $_xxtChar	char
#  else
$@ #   define $_xxtChar	wchar_t
#  endif
# endif

$@ # ifndef $_xxtusChar
$@ #  if $_xxMaxCharacter < 256
$@ #   define $_xxtusChar	unsigned char
#  else
$@ #   define $_xxtusChar	wchar_t
#  endif
# endif

# ifdef lex_interface
$@ #  define $_GetToken	yylex
$@ #  define $_TokenLength	yyleng
# endif

$@ extern $_xxtChar *	$_TokenPtr	;
$@ extern int		$_TokenLength	;
$@ extern $_tScanAttribute	$_Attribute	;
$@ extern void		(* @_Exit) ARGS ((void));

$@ extern void	$_BeginScanner	ARGS ((void));
$@ extern void	$_BeginFile	ARGS ((char * yyFileName));
# if HAVE_WCHAR_T
$@ extern void	$_BeginFileW	ARGS ((wchar_t * yyFileName));
# endif
$@ extern void	$_BeginMemory	ARGS ((void * yyInputPtr));
$@ extern void	$_BeginMemoryN	ARGS ((void * yyInputPtr, int yyLength));
$@ extern void	$_BeginGeneric	ARGS ((void * yyInputPtr));
$@ extern int	$_GetToken	ARGS ((void));
$@ extern int	$_GetWord 	ARGS (($_xxtChar * yyWord));
$@ extern int	$_GetLower	ARGS (($_xxtChar * yyWord));
$@ extern int	$_GetUpper	ARGS (($_xxtChar * yyWord));
$@ extern void	$_CloseFile	ARGS ((void));
$@ extern void	$_CloseScanner	ARGS ((void));
$@ extern void	$_ResetScanner	ARGS ((void));

# endif
