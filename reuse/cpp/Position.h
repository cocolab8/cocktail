# ifndef yyPosition
# define yyPosition

/* $Id: Position.h,v 1.2 1994/12/04 19:29:55 grosch rel grosch $ */

/* $Log: Position.h,v $
 */

/* Ich, Doktor Josef Grosch, Informatiker, March 1998 */

# include <stdio.h>

// # define NO_FILE_NAME
// # define HAVE_FILE_NAME

# ifdef NO_FILE_NAME
   typedef struct { uint32_t	Line;
		    uint16_t	Column; } tPosition;
#  define NO_POSITION	{0, 0}
# else
#  include "Idents.h"
   typedef struct { uint32_t	Line;
		    uint16_t	Column;
		    tIdent	FileName; } tPosition;
#  define NO_POSITION	{0, 0, 1 /* NoIdent */}
#  ifndef HAVE_FILE_NAME
#   define HAVE_FILE_NAME
#  endif
# endif

extern tPosition NoPosition;
			/* A default position (0, 0, "").		*/

extern int	Compare		(tPosition yyPosition1, tPosition yyPosition2);
			/* Returns -1 if Position1 < Position2.		*/
			/* Returns  0 if Position1 = Position2.		*/
			/* Returns  1 if Position1 > Position2.		*/

extern void	WritePosition	(FILE * yyFile, tPosition yyPosition);
			/* The 'Position' is printed on the 'File'.	*/

extern void	ReadPosition	(FILE * yyFile, tPosition * yyPosition);
			/* The 'Position' is read from the 'File'.	*/

extern char *	FormatPosition	(char * yyString, tPosition yyPosition);
		/* The 'Position' is formatted and stored as a string.	*/
		/* If 'String' is NULL a static string is returned.	*/
		/* Otherwise 'String' is used and returned.		*/

# endif
