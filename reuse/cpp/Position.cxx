/* $Id: Position.cxx,v 1.5 1995/03/20 15:37:30 grosch rel grosch $ */

/* $Log: Position.cxx,v $
 */

/* Ich, Doktor Josef Grosch, Informatiker, March 1998 */

static char rcsid [] =
   "$Id: Position.cxx,v 1.5 1995/03/20 15:37:30 grosch rel grosch $";

# include "Position.h"
# include "rString.h"
# ifndef NO_FILE_NAME
#  include "Global.h"
# endif

# if defined _MSC_VER
#  pragma warning (disable:4505 4514)
# endif

tPosition NoPosition = NO_POSITION;

int Compare (tPosition Position1, tPosition Position2)
{
# ifndef NO_FILE_NAME
   if (Position1.FileName < Position2.FileName) return -1;
   if (Position1.FileName > Position2.FileName) return  1;
# endif
   if (Position1.Line     < Position2.Line    ) return -1;
   if (Position1.Line     > Position2.Line    ) return  1;
   if (Position1.Column   < Position2.Column  ) return -1;
   if (Position1.Column   > Position2.Column  ) return  1;
   return 0;
}

void WritePosition (FILE * File, tPosition Position)
{
# ifdef NO_FILE_NAME
   fprintf (File, "%4u,%3hu", (unsigned int) Position.Line, Position.Column);
# else
   fprintf (File, "\"%s\":%4u,%3hu",
      Position.FileName > 0 ? gIdents.GetCStr (Position.FileName) : "",
      (unsigned int) Position.Line, Position.Column);
# endif
}

void ReadPosition (FILE * File, tPosition * Position)
{
   unsigned int line;
# ifdef _USRDLL
   fgetc (File);		/* dummy */
   Position->Line	= 0;
   Position->Column	= 0;
# elif defined NO_FILE_NAME
   fscanf (File, "%4u,%3hu", & line, & Position->Column);
   Position->Line = line;
# else
   char Buffer [512];
   int n = fscanf (File, "\"%[^:]:%u,%hu", Buffer, & line, & Position->Column);
   Position->Line = line;
   if (n == 3)
      Position->FileName = gIdents.MakeIdent (Buffer, (int) strlen (Buffer) - 1);
   else {
      fscanf (File, "%[^\n]", Buffer);
      * Position = NoPosition;
   }
# endif
}

char * FormatPosition (char * String, tPosition Position)
{
   static char StaticString [512];
   if (! String) String = StaticString;
# ifdef NO_FILE_NAME
   sprintf (String, "%4u,%3hu", (unsigned int) Position.Line, Position.Column);
# else
   sprintf (String, "\"%s\":%4u,%3hu",
      Position.FileName > 0 ? gIdents.GetCStr (Position.FileName) : "",
      (unsigned int) Position.Line, Position.Column);
# endif
   return String;
}
