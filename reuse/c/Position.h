/*
   Copyright (c) 1997 Dr. Josef Grosch, CoCoLab - Datenverarbeitung

   This file contains proprietary and confidential information and
   remains the property of CoCoLab. Use, disclosure, or reproduction
   is prohibited except as permitted by express written license agreement
   with CoCoLab.

   Phone : +49-7841-669144
   Fax   : +49-7841-669145
   E-mail: grosch@cocolab.de
*/

# ifndef yyPosition
# define yyPosition

/* Id: Position.h,v 1.11 2001/01/11 16:23:25 grosch rel $ */

/*
 * Log: Position.h,v $
 * Revision 1.11  2001/01/11 16:23:25  grosch
 * added #define HAVE_FILE_NAME
 *
 * Revision 1.10  2001/01/10 15:36:20  grosch
 * added #define NO_POSITION
 *
 * Revision 1.9  2000/09/04 13:37:29  grosch
 * added Copyright
 *
 * Revision 1.8  2000/04/10 15:58:24  grosch
 * introduced ifdef HAVE_ARGS
 *
 * Revision 1.7  1999/11/11 15:35:31  grosch
 * commented NO_FILE_NAME
 *
 * Revision 1.6  1998/04/07 14:53:14  grosch
 * added # define NO_FILE_NAME
 *
 * Revision 1.5  1998/04/04 10:14:35  grosch
 * extended type tPosition by new field FileName and
 * conditional compilation using the cpp variable NO_FILE_NAME
 * added function FormatPosition
 *
 * Revision 1.4  1997/05/27 13:25:04  grosch
 * truncation of filenames to 8.3 format
 *
 * Revision 1.3  1997/04/08 13:38:16  grosch
 * added prefix yy to all argument names
 *
 * Revision 1.2  1994/12/04  19:29:55  grosch
 * added ANSI-C prototypes
 *
 * Revision 1.1  1993/08/18  15:01:05  grosch
 * rename System and Memory to rSystem and rMemory
 *
 * Revision 1.0  1992/08/07  14:31:43  grosch
 * Initial revision
 *
 */

/* Ich, Doktor Josef Grosch, Informatiker, Juli 1992 */

# include <stdio.h>
# include "ratc.h"

/* # define NO_FILE_NAME */
/* # define HAVE_FILE_NAME */

# ifdef NO_FILE_NAME
   typedef struct { uint32_t	Line;
		    uint32_t	Column; } tPosition;
#  define NO_POSITION	{0, 0}
# else
#  include "Idents.h"
   typedef struct { uint32_t	Line;
		    uint32_t	Column;
		    tIdent	FileName; } tPosition;
#  define NO_POSITION	{0, 0, 1 /* NoIdent */}
#  ifndef HAVE_FILE_NAME
#   define HAVE_FILE_NAME
#  endif
# endif

extern tPosition NoPosition;
			/* A default position (0, 0, "").		*/

extern int	Compare		ARGS ((tPosition yyPosition1, tPosition yyPosition2));
			/* Returns -1 if Position1 < Position2.		*/
			/* Returns  0 if Position1 = Position2.		*/
			/* Returns  1 if Position1 > Position2.		*/

extern void	WritePosition	ARGS ((FILE * yyFile, tPosition yyPosition));
			/* The 'Position' is printed on the 'File'.	*/

extern void	ReadPosition	ARGS ((FILE * yyFile, tPosition * yyPosition));
			/* The 'Position' is read from the 'File'.	*/

extern char *	FormatPosition	ARGS ((char * yyString, tPosition yyPosition));
		/* The 'Position' is formatted and stored as a string.	*/
		/* If 'String' is NULL a static string is returned.	*/
		/* Otherwise 'String' is used and returned.		*/

# endif
