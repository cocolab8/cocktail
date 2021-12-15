# include <stdio.h>
# include "Position.h"
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

int main
# ifdef HAVE_ARGS
   (int argc, char * argv [])
# else
   (argc, argv) int argc; char * argv [];
# endif
{
   char * filename = NULL;
   int i;
   char buffer [buffer_size];
   FILE * f;

   for (i = 1; i < argc; i ++) {
      filename = argv [i];
   }

   if (filename == NULL) return -1;

   BeginFile (filename);
   do_scan ("scan byte stream from file  of byte");

   /* copy file of byte into array of byte */
   f = fopen (filename, "r");
   i = fread (buffer, 1, buffer_size, f);
   buffer [i] = '\0';
   fclose (f);

   BeginMemory (buffer);
   do_scan ("scan byte stream from array of byte");

   BeginMemoryN (buffer, i);
   do_scan ("scan byte stream from array of byte");

   return 0;
}
