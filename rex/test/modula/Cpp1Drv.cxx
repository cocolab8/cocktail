# include <stdio.h>
# include "Position.h"
# include "Scanner.h"

# define buffer_size 20000

static Scanner Scanner;

static void do_scan (char * Text)
{
   int Token, Count = 0;
   (void) printf ("%s\t: ", Text);
   do {
      Token = Scanner.GetToken ();
      Count ++;
   } while (Token != EofToken);
   (void) printf ("%d\n", Count);
}

int main (int argc, char * argv [])
{
   char * filename = NULL;
   int i;
   char buffer [buffer_size];
   FILE * f;

   for (i = 1; i < argc; i ++) {
      filename = argv [i];
   }

   if (filename == NULL) return -1;

   Scanner.BeginFile (filename);
   do_scan ("scan byte stream from file  of byte");

   /* copy file of byte into array of byte */
   f = fopen (filename, "r");
   i = fread (buffer, 1, buffer_size, f);
   buffer [i] = '\0';
   fclose (f);

   Scanner.BeginMemory (buffer);
   do_scan ("scan byte stream from array of byte");

   Scanner.BeginMemoryN (buffer, i);
   do_scan ("scan byte stream from array of byte");

   return 0;
}
