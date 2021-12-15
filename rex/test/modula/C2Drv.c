# include <stdio.h>
# include "Position.h"
# include "Source.h"
# include "Scanner.h"

# define buffer_size 20000

static void do_scan
# ifdef HAVE_ARGS
   (char * Text)
# else
   (Text) char * Text;
# endif
{
   int Token, Count = 0;
   (void) printf ("%s\t: ", Text);
   do {
      Token = GetToken ();
      Count ++;
   } while (Token != EofToken);
   (void) printf ("%d\n", Count);
}

static void do_it
# ifdef HAVE_ARGS
   (void * buffer, int length, char * Text)
# else
   (buffer, length, Text) void * buffer; int length; char * Text;
# endif
{
   BeginMemory (buffer);
   do_scan (Text);
   BeginMemoryN (buffer, length);
   do_scan (Text);
}

int main
# ifdef HAVE_ARGS
   (int argc, char * argv [])
# else
   (argc, argv) int argc; char * argv [];
# endif
{
   char * filename = NULL;
   int i;
   FILE * f;

   for (i = 1; i < argc; i ++) {
      filename = argv [i];
   }

   if (filename == NULL) return -1;

   BeginFile (filename);
   SetEncoding (CODE_BYTE, ENDIAN_NONE);
   do_scan ("scan byte    stream from file\t");

   BeginFile ("in.ucs2");
   SetEncoding (CODE_UCS2, ENDIAN_BIG);
   do_scan ("scan UCS2    stream from file\t");

   BeginFile ("in.ucs2be");
   SetEncoding (CODE_UCS2, ENDIAN_BIG);
   do_scan ("scan UCS2-BE stream from file\t");

   BeginFile ("in.ucs2le");
   SetEncoding (CODE_UCS2, ENDIAN_LITTLE);
   do_scan ("scan UCS2-LE stream from file\t");

   BeginFile ("in.ucs4");
   SetEncoding (CODE_UCS4, ENDIAN_BIG);
   do_scan ("scan UCS4    stream from file\t");

   BeginFile ("in.utf8");
   SetEncoding (CODE_UTF8, ENDIAN_NONE);
   do_scan ("scan UTF8    stream from file\t");

   BeginFile ("in.utf16");
   SetEncoding (CODE_UTF16, ENDIAN_BIG);
   do_scan ("scan UTF16   stream from file\t");

{  /* copy file of byte into array of byte */
   char buffer [buffer_size];
   f = fopen (filename, "r");
   i = fread (buffer, 1, buffer_size, f);
   buffer [i] = '\0';
   fclose (f);
   SetEncoding (CODE_BYTE, ENDIAN_NONE);
   do_it (buffer, i, "scan byte    stream from array of byte");
}
{  /* copy file of UCS2 into array of UCS2 */
   short buffer [buffer_size];
   f = fopen ("in.ucs2", "r");
   i = fread (buffer, 2, buffer_size, f);
   buffer [i] = '\0';
   fclose (f);
   SetEncoding (CODE_UCS2, ENDIAN_BIG);
   do_it (buffer, i, "scan UCS2    stream from array of UCS2");
}
{  /* copy file of UCS2 into array of UCS2 */
   short buffer [buffer_size];
   f = fopen ("in.ucs2be", "r");
   i = fread (buffer, 2, buffer_size, f);
   buffer [i] = '\0';
   fclose (f);
   SetEncoding (CODE_UCS2, ENDIAN_BIG);
   do_it (buffer, i, "scan UCS2-BE stream from array of UCS2");
}
{  /* copy file of UCS2 into array of UCS2 */
   short buffer [buffer_size];
   f = fopen ("in.ucs2le", "r");
   i = fread (buffer, 2, buffer_size, f);
   buffer [i] = '\0';
   fclose (f);
   SetEncoding (CODE_UCS2, ENDIAN_LITTLE);
   do_it (buffer, i, "scan UCS2-LE stream from array of UCS2");
}
{  /* copy file of UCS4 into array of UCS4 */
   long buffer [buffer_size];
   f = fopen ("in.ucs4", "r");
   i = fread (buffer, 4, buffer_size, f);
   buffer [i] = '\0';
   fclose (f);
   SetEncoding (CODE_UCS4, ENDIAN_BIG);
   do_it (buffer, i, "scan UCS4    stream from array of UCS4");
}
{  /* copy file of UTF8 into array of UTF8 */
   char buffer [buffer_size];
   f = fopen ("in.utf8", "r");
   i = fread (buffer, 1, buffer_size, f);
   buffer [i] = '\0';
   fclose (f);
   SetEncoding (CODE_UTF8, ENDIAN_NONE);
   do_it (buffer, i, "scan UTF8    stream from array of UTF8");
}
{  /* copy file of UTF16 into array of UTF16 */
   short buffer [buffer_size];
   f = fopen ("in.utf16", "r");
   i = fread (buffer, 2, buffer_size, f);
   buffer [i] = '\0';
   fclose (f);
   SetEncoding (CODE_UTF16, ENDIAN_BIG);
   do_it (buffer, i, "scan UTF16   stream from array of UTF16");
}

   SetEncoding (CODE_BYTE, ENDIAN_NONE);
   BeginFile (filename);
   do_scan ("scan byte    stream from file\t");

   return 0;
}
