/* $Id: ErrorsDrv.c,v 1.6 1995/05/09 13:53:42 grosch rel $ */

/* $Log: ErrorsDrv.c,v $
 */

/* Ich, Doktor Josef Grosch, Informatiker, Aug. 1992 */

static char rcsid [] =
   "$Id: ErrorsDrv.c,v 1.6 1995/05/09 13:53:42 grosch rel $";

# include "ratc.h"
# include "config.h"
# include <stdio.h>
# include "Position.h"
# include "Errors.h"
# include "Sets.h"
# include "Idents.h"
# include "Global.h"

# if defined _MSC_VER
#  pragma warning (disable:4505 4514)
# endif

int	Integer		= 1;
short	Short		= 2;
long	Long		= 3;
unsigned long USLong	= 4294967295U;
float	Real		= (float) 5.0;
rbool	Boolean		= rfalse;
char	Character	= 'a';
char	String []	= "abc";
tIdent	Ident		;
# if HAVE_WCHAR_T
wchar_t	WCharacter	= L'b';
wchar_t	WString []	= L"def";
tWIdent	WIdent		;
# endif
tSet	Set		;
tPosition Pos		;

static void do_errors (void)
{
   tPosition Pos2;
   Pos2.Line = 7; Pos2.Column = 11; Pos2.FileName = gIdents.MakeIdent ("Pos2", 4);

   gErrors.MessageI ("Short	", xxError, Pos		, xxShort	,
		(char *) & Short	);
   gErrors.MessageI ("Integer	", xxError, NoPosition	, xxInteger	,
		(char *) & Integer	);
   gErrors.MessageI ("Long	", xxError, Pos		, xxLong	,
		(char *) & Long		);
   gErrors.MessageI ("USLong	", xxError, Pos		, xxUSLong	,
		(char *) & USLong	);
   gErrors.MessageI ("Real	", xxError, Pos		, xxReal	,
		(char *) & Real		);
   gErrors.MessageI ("Boolean	", xxError, Pos		, xxBoolean	,
		(char *) & Boolean	);
   gErrors.MessageI ("Character	", xxError, Pos		, xxCharacter	,
		(char *) & Character	);
# if HAVE_WCHAR_T
   gErrors.MessageI ("WCharacter ", xxError, Pos	, xxWCharacter	,
		(char *) & WCharacter	);
# endif
   gErrors.MessageI ("String	", xxError, Pos		, xxString	,
			   String	);
# if HAVE_WCHAR_T
   gErrors.MessageI ("WString	", xxError, Pos		, xxWString	,
		(char *) & WString	);
# endif
   gErrors.MessageI ("Ident	", xxError, Pos		, xxIdent	,
		(char *) & Ident	);
# if HAVE_WCHAR_T
   gErrors.MessageI ("WIdent	", xxError, Pos		, xxWIdent	,
		(char *) & WIdent	);
# endif
   gErrors.MessageI ("Set	", xxError, Pos		, xxSet		,
		(char *) & Set		);
   gErrors.MessageI ("Position	", xxError, Pos		, xxPosition	,
		(char *) & Pos		);
   gErrors.MessageI ("Position	", xxError, Pos2	, xxPosition	,
		(char *) & Pos2		);
}

static void Notify (tPosition Position, int ErrorClass,
		    const char * ErrorText, int InfoClass, const char * Info) {
  WritePosition (stdout, Position); fprintf (stdout, " (output of Notify)\n");
  ErrorClass; ErrorText; InfoClass; Info;
}

int main (void)
{
   Ident = gIdents.MakeIdent ("ghi", 3);
# if HAVE_WCHAR_T
   WIdent = gIdents.MakeIdent (L"jkl", 3);
# endif
   MakeSet (& Set, 10); Include (& Set, 5); Include (& Set, 6);
   Pos.Line = 8; Pos.Column = 15; Pos.FileName = gIdents.MakeIdent ("0815", 4);

   /* print messages immediately */
   printf ("print messages immediately\n\n");
   do_errors ();		  fprintf (stderr, "\n");

   /* store messages */
   gErrors.StoreMessages (rtrue);
   do_errors ();
   printf ("print stored messages to stderr\n\n");
   gErrors.WriteMessages (stderr); fprintf (stderr, "\n");
   printf ("print stored messages to stdout\n\n");
   gErrors.WriteMessages (stdout); fprintf (stdout, "\n");
   gErrors.StoreMessages (rtrue);
   printf ("print zero messages to stdout\n\n");
   gErrors.WriteMessages (stdout);

   /* notify about messages immediately */
   printf ("notify about messages immediately\n\n");
   gErrors.StoreMessages (rfalse);
   gErrors.PrintMessages (rfalse);
   gErrors.setNotify (Notify);
   do_errors ();	   fprintf (stdout, "\n");

   /* store messages and notify later*/
   printf ("notify about stored messages\n\n");
   gErrors.StoreMessages (rtrue);
   gErrors.PrintMessages (rfalse);
   gErrors.setNotify (Notify);
   do_errors ();
   gErrors.WriteMessages (stdout); fprintf (stdout, "\n");
   return 0;
}
