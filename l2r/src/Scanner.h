# ifndef yyScanner
# define yyScanner

/* $Id: Scanner.h,v 2.18 2005/03/24 17:43:29 grosch rel $ */

# include "config.h"
# if HAVE_WCHAR_H
#  include <wchar.h>
# endif
# include "ratc.h"

/* line 41 "lex.rex" */

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

/* line 33 "Scanner.h" */

# define EofToken	0
# define xxMaxCharacter	255

# ifndef xxtChar
#  if xxMaxCharacter < 256
#   define xxtChar	char
#  else
#   define xxtChar	wchar_t
#  endif
# endif

# ifndef xxtusChar
#  if xxMaxCharacter < 256
#   define xxtusChar	unsigned char
#  else
#   define xxtusChar	wchar_t
#  endif
# endif

# ifdef lex_interface
#  define GetToken	yylex
#  define TokenLength	yyleng
# endif

extern xxtChar *	TokenPtr	;
extern int		TokenLength	;
extern tScanAttribute	Attribute	;
extern void		(* Scanner_Exit) ARGS ((void));

extern void	BeginScanner	ARGS ((void));
extern void	BeginFile	ARGS ((char * yyFileName));
# if HAVE_WCHAR_T
extern void	BeginFileW	ARGS ((wchar_t * yyFileName));
# endif
extern void	BeginMemory	ARGS ((void * yyInputPtr));
extern void	BeginMemoryN	ARGS ((void * yyInputPtr, int yyLength));
extern void	BeginGeneric	ARGS ((void * yyInputPtr));
extern int	GetToken	ARGS ((void));
extern int	GetWord 	ARGS ((xxtChar * yyWord));
extern int	GetLower	ARGS ((xxtChar * yyWord));
extern int	GetUpper	ARGS ((xxtChar * yyWord));
extern void	CloseFile	ARGS ((void));
extern void	CloseScanner	ARGS ((void));
extern void	ResetScanner	ARGS ((void));

# endif
