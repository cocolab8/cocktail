$@ # ifndef yy@
$@ # define yy@

/* $Id: Scanner.hh,v 1.23 2005/03/24 17:43:29 grosch rel $ */

# include "config.h"
# if HAVE_WCHAR_H
#  include <wchar.h>
# endif
# include "Errors.h"

$- user import declarations
$E[ user export declarations
# include "Position.h"
$@ typedef struct { tPosition Position; } $_tScanAttribute;
$]
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

# define rbool		char

$@ # ifndef @_BASE_CLASS
$@ # define @_BASE_CLASS
# endif

typedef unsigned short	yyStateRange	;

typedef struct {
      int		yySourceFile	;
      rbool		yyEof		;
$@       $_xxtusChar *	yyChBufferPtr	;
$@       $_xxtusChar *	yyChBufferStart	;
      unsigned long	yyChBufferSize	;
$@       $_xxtusChar *	yyChBufferIndex	;
      long		yyBytesRead	;
      long		yyFileOffset	;
      unsigned int	yyLineCount	;
$@       $_xxtusChar *	yyLineStart	;
$@       }			$_yytFileStack	;

$@ class @ @_BASE_CLASS {

public:
# define		EofToken	0
$@    $_xxtChar *		TokenPtr	;
   int			TokenLength	;
$@    $_tScanAttribute	Attribute	;
   void			(* Exit)	(void);

$@ 			@		(void);
   void			BeginFile	(char * yyFileName);
# if HAVE_WCHAR_T
   void			BeginFileW	(wchar_t * yyFileName);
# endif
   void			BeginMemory	(void * yyInputPtr);
   void			BeginMemoryN	(void * yyInputPtr, int yyLength);
   void			BeginGeneric	(void * yyInputPtr);
   int			GetToken	(void);
$@    int			GetWord		($_xxtChar * yyWord);
$@    int			GetLower	($_xxtChar * yyWord);
$@    int			GetUpper	($_xxtChar * yyWord);
   void			CloseFile	(void);
$@ 			~@	(void);
$@    void			ErrorAttribute	(int Token, $_tScanAttribute * Attribute);
   Errors *		ErrorsObj	;

protected:
   yyStateRange *	yyStateStack	;
   unsigned long	yyStateStackSize;
   yyStateRange		yyStartState	;
   yyStateRange		yyPreviousStart	;

   int			yySourceFile	;
   rbool		yyEof		;
$@    $_xxtusChar *	yyChBufferPtr	;
$@    $_xxtusChar *	yyChBufferStart	;
   unsigned long	yyChBufferSize	;
$@    $_xxtusChar *	yyChBufferIndex	;
   long			yyBytesRead	;
   long			yyFileOffset	;
   unsigned int		yyLineCount	;
$@    $_xxtusChar *	yyLineStart	;

   unsigned long	yyFileStackSize	;
$@    $_yytFileStack *	yyFileStack	;
$@    $_yytFileStack *	yyFileStackPtr	;

// # if defined xxyyPush | defined xxyyPop
   yyStateRange *	yyStStStackPtr	;
   unsigned long	yyStStStackSize	;
   unsigned int		yyStStStackIdx	;
// # endif

   inline void		yyStart		(yyStateRange yyState);
   inline void		yyPrevious	(void);
   inline void		yyEcho		(void);
   inline void		yyLess		(int);
   inline void		yyTab1		(int);
   inline void		yyEol		(int Column);
$@    inline void		unput		($_xxtChar);

   void			yyPush		(yyStateRange yyState);
   void			yyPop		(void);
$@    $_xxtChar		input		(void);
   void			yyInitialize	(void);
   void			yyResetScanner	(void);
   void			yyErrorMessage	(int yyErrorCode);
};

# endif
