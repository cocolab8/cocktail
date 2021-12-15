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

/* Id: Position.c,v 1.15 2001/02/06 09:58:31 grosch rel $ */

/*
 * Log: Position.c,v $
 * Revision 1.15  2001/02/06 09:58:31  grosch
 * made WritePosition more robust in case FileName is undefined
 *
 * Revision 1.14  2001/01/10 15:36:20  grosch
 * added #define NO_POSITION
 *
 * Revision 1.13  2000/09/04 13:37:29  grosch
 * added Copyright
 *
 * Revision 1.12  2000/04/10 15:58:24  grosch
 * introduced ifdef HAVE_ARGS
 *
 * Revision 1.11  1999/11/11 15:35:03  grosch
 * added missing #include for strlen
 *
 * Revision 1.10  1998/06/25 10:46:56  grosch
 * updated IO formats to new type tPosition
 *
 * Revision 1.9  1998/04/21 21:57:31  grosch
 * bug fix: typing error in head of procedure FormatPosition
 *
 * Revision 1.8  1998/04/04 10:14:35  grosch
 * extended type tPosition by new field FileName and
 * conditional compilation using the cpp variable NO_FILE_NAME
 * added function FormatPosition
 *
 * Revision 1.7  1997/05/27 13:25:04  grosch
 * truncation of filenames to 8.3 format
 *
 * Revision 1.6  1996/08/13 13:20:23  grosch
 * adaption to DLL's for Microsoft Visual C++
 *
 * Revision 1.5  1995/03/20  15:37:30  grosch
 * truncate lines to at most 80 characters
 *
 * Revision 1.4  1995/02/23  20:11:10  grosch
 * renamed Positions to Position, StringMem to StringM, Relations to Relation
 * output lines with at most 132 characters
 *
 * Revision 1.3  1993/08/18  15:01:05  grosch
 * rename System and Memory to rSystem and rMemory
 *
 * Revision 1.2  1992/08/13  13:47:33  grosch
 * increase format in WritePosition
 *
 * Revision 1.1  1992/08/13  12:29:12  grosch
 * fix bugs with ANSI C
 *
 * Revision 1.0  1992/08/07  14:31:42  grosch
 * Initial revision
 *
 */

/* Ich, Doktor Josef Grosch, Informatiker, Juli 1992 */

static char rcsid [] =
   "Id: Position.c,v 1.15 2001/02/06 09:58:31 grosch rel $";

# include "Position.h"
# include <stdio.h>
# include "rString.h"

tPosition NoPosition = NO_POSITION;

int Compare
# ifdef HAVE_ARGS
   (tPosition Position1, tPosition Position2)
# else
   (Position1, Position2) tPosition Position1, Position2;
# endif
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

void WritePosition
# ifdef HAVE_ARGS
   (FILE * File, tPosition Position)
# else
   (File, Position) FILE * File; tPosition Position;
# endif
{
# ifdef NO_FILE_NAME
   fprintf (File, "%4u,%3u", (unsigned int) Position.Line, Position.Column);
# else
   fprintf (File, "\"%s\":%4u,%3u",
      Position.FileName > 0 ? GetCStr (Position.FileName) : "",
      (unsigned int) Position.Line, Position.Column);
# endif
}

void ReadPosition
# ifdef HAVE_ARGS
   (FILE * File, tPosition * Position)
# else
   (File, Position) FILE * File; tPosition * Position;
# endif
{
   unsigned int line;
# ifdef _USRDLL
   fgetc (File);		/* dummy */
   Position->Line	= 0;
   Position->Column	= 0;
# elif defined NO_FILE_NAME
   fscanf (File, "%4u,%3u", & line, & Position->Column);
   Position->Line = line;
# else
   char Buffer [512];
   int n = fscanf (File, "\"%[^:]:%u,%u", Buffer, & line, & Position->Column);
   Position->Line = line;
   if (n == 3)
      Position->FileName = MakeIdent (Buffer, (int) strlen (Buffer) - 1);
   else {
      fscanf (File, "%[^\n]", Buffer);
      * Position = NoPosition;
   }
# endif
}

char * FormatPosition
# ifdef HAVE_ARGS
   (char * String, tPosition Position)
# else
   (String, Position) char * String; tPosition Position;
# endif
{
   static char StaticString [512];
   if (! String) String = StaticString;
# ifdef NO_FILE_NAME
   sprintf (String, "%4u,%3u", (unsigned int) Position.Line, Position.Column);
# else
   sprintf (String, "\"%s\":%4u,%3u",
      Position.FileName > 0 ? GetCStr (Position.FileName) : "",
      (unsigned int) Position.Line, Position.Column);
# endif
   return String;
}
