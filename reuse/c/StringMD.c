static char rcsid [] =
   "$Id: StringMD.c,v 1.14 2008/09/12 14:14:04 grosch rel $";

# include <stdio.h>
# include "rString.h"
# include "StringM.h"

static void loop ARGS ((void))
{
   char string [256];
   tStringRef stringref;

   printf ("enter strings, one per line, - terminates\n");
   do {
      scanf ("%s", string);
      stringref = PutString1 (string);
      WriteString (stdout, stringref);
      printf ("\n");
   } while (string [0] != '-' || string [1] != '\0');
   printf ("\n");
   WriteStringMemory ();
}

int main ARGS ((void))
{
   loop ();
   CloseStringMemory ();
   BeginStringMemory ();
   loop ();
   CloseStringMemory ();
   return 0;
}
