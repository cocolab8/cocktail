/* Id: ErrorsDr.c,v 1.14 2005/05/23 12:26:27 grosch Exp $ */

/*
 * Log: ErrorsDr.c,v $
 * Revision 1.14  2005/05/23 12:26:27  grosch
 * changed #include <config.h> to #include "config.h"
 *
 * Revision 1.13  2000/09/04 13:31:10  grosch
 * added support for wide character strings
 * moved message texts to Errors.c
 *
 * Revision 1.12  2000/04/10 15:39:21  grosch
 * cosmetic changes
 *
 * Revision 1.11  1998/04/04 10:18:27  grosch
 * extended type tPosition by new field FileName
 *
 * Revision 1.10  1997/05/27 13:25:04  grosch
 * truncation of filenames to 8.3 format
 *
 * Revision 1.9  1996/08/01 08:33:05  grosch
 * adaptions to MS Visual C++ 1.52
 *
 * Revision 1.8  1996/07/25  16:51:34  grosch
 * adaption to MS VC++
 *
 * Revision 1.7  1996/06/05  12:00:48  grosch
 * adaption to MS VC++
 *
 * Revision 1.6  1995/05/09  13:53:42  grosch
 * added void to argument list of functions without arguments
 *
 * Revision 1.5  1995/03/20  15:37:30  grosch
 * truncate lines to at most 80 characters
 *
 * Revision 1.4  1995/02/23  20:11:10  grosch
 * renamed Positions to Position, StringMem to StringM, Relations to Relation
 * output lines with at most 132 characters
 *
 * Revision 1.3  1994/12/04  19:29:55  grosch
 * added ANSI-C prototypes
 *
 * Revision 1.2  1994/04/05  09:00:35  grosch
 * added prefix 'r' to true and false for improved portability
 *
 * Revision 1.1  1994/01/29  22:13:50  grosch
 * renamed bool to rbool
 *
 * Revision 1.0  1992/08/07  14:31:41  grosch
 * Initial revision
 *
 */

/* Ich, Doktor Josef Grosch, Informatiker, Aug. 1992 */

static char rcsid [] =
   "Id: ErrorsDr.c,v 1.14 2005/05/23 12:26:27 grosch Exp $";

# include "config.h"
# include <stdio.h>
# include "Position.h"
# include "Errors.h"
# include "Sets.h"
# include "Idents.h"

# ifdef WITH_GETTEXT
#  include <locale.h>
#  include <libintl.h>

#  define PACKAGE	"Cocktail"
#  define LOCALEDIR	"/usr/share/locale"
# endif

int	Integer		= 1;
short	Short		= 2;
long	Long		= 3;
unsigned long USLong	= 4294967295U;
float	Real		= (float) 5.0;
rbool	Boolean		= rfalse;
char	Character	= 'a';
char	String [] 	= "abc";
tIdent	Ident		;
# if HAVE_WCHAR_T
wchar_t	WCharacter	= L'b';
wchar_t	WString [] 	= L"def";
tWIdent	WIdent		;
# endif
tSet	Set		;
tPosition Pos		;

static void do_errors ARGS ((void))
{
   tPosition Pos2;
   Pos2.Line = 7; Pos2.Column = 11; Pos2.FileName = MakeIdent ("Pos2", 4);

   MessageI ("Short	", xxError, Pos		, xxShort	,
		(char *) & Short	);
   MessageI ("Integer	", xxError, NoPosition	, xxInteger	,
		(char *) & Integer	);
   MessageI ("Long	", xxError, Pos		, xxLong	,
		(char *) & Long		);
   MessageI ("USLong	", xxError, Pos		, xxUSLong	,
		(char *) & USLong	);
   MessageI ("Real	", xxError, Pos		, xxReal	,
		(char *) & Real		);
   MessageI ("Boolean	", xxError, Pos		, xxBoolean	,
		(char *) & Boolean	);
   MessageI ("Character	", xxError, Pos		, xxCharacter	,
		(char *) & Character	);
# if HAVE_WCHAR_T
   MessageI ("WCharacter ", xxError, Pos	, xxWCharacter	,
		(char *) & WCharacter	);
# endif
   MessageI ("String	", xxError, Pos		, xxString	,
			   String	);
# if HAVE_WCHAR_T
   MessageI ("WString	", xxError, Pos		, xxWString	,
		(char *) & WString	);
# endif
   MessageI ("Ident	", xxError, Pos		, xxIdent	,
		(char *) & Ident	);
# if HAVE_WCHAR_T
   MessageI ("WIdent	", xxError, Pos		, xxWIdent	,
		(char *) & WIdent	);
# endif
   MessageI ("Set	", xxError, Pos		, xxSet		,
		(char *) & Set		);
   MessageI ("Position	", xxError, Pos		, xxPosition	,
		(char *) & Pos		);
   MessageI ("Position	", xxError, Pos2	, xxPosition	,
		(char *) & Pos2		);
}

static void Notify (tPosition Position, int ErrorClass,
			char * ErrorText, int InfoClass, const char * Info) {
  WritePosition (stdout, Position); fprintf (stdout, " (output of Notify)\n");
  ErrorClass; ErrorText; InfoClass; Info;
}

int main ARGS ((void))
{
# ifdef WITH_GETTEXT
   setlocale (LC_ALL, "");
   bindtextdomain (PACKAGE, LOCALEDIR);
   textdomain (PACKAGE);
# endif

   Ident = MakeIdent ("ghi", 3);
# if HAVE_WCHAR_T
   WIdent = MakeWIdent (L"jkl", 3);
# endif
   MakeSet (& Set, 10); Include (& Set, 5); Include (& Set, 6);
   Pos.Line = 8; Pos.Column = 15; Pos.FileName = MakeIdent ("0815", 4);

   /* print messages immediately */
   printf ("print messages immediately\n\n");
   do_errors ();	   fprintf (stderr, "\n");

   /* store messages */
   StoreMessages (rtrue);
   do_errors ();
   printf ("print stored messages to stderr\n\n");
   WriteMessages (stderr); fprintf (stderr, "\n");
   printf ("print stored messages to stdout\n\n");
   WriteMessages (stdout); fprintf (stdout, "\n");
   StoreMessages (rtrue);
   printf ("print zero messages to stdout\n\n");
   WriteMessages (stdout);

   /* notify about messages immediately */
   printf ("notify about messages immediately\n\n");
   StoreMessages (rfalse);
   PrintMessages (rfalse);
   setErrors_Notify (Notify);
   do_errors ();	   fprintf (stdout, "\n");

   /* store messages and notify later*/
   printf ("notify about stored messages\n\n");
   StoreMessages (rtrue);
   PrintMessages (rfalse);
   setErrors_Notify (Notify);
   do_errors ();
   WriteMessages (stdout); fprintf (stdout, "\n");
   return 0;
}
