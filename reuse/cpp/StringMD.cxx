static char rcsid [] =
   "$Id: StrMemDrv.c,v 1.8 1995/05/09 13:53:42 grosch rel $";

# include <stdio.h>
# include "rString.h"
# include "rMemory.h"
# include "Global.h"

# if defined _MSC_VER
#  pragma warning (disable:4505 4514)
# endif

static void loop (void)
{
   char string [256];
   tStringRef stringref;

   printf ("enter strings, one per line, - terminates\n");
   do {
      scanf ("%s", string);
      stringref = gStringM.PutString (string, strlen (string));
      gStringM.WriteString (stdout, stringref);
      printf ("\n");
   } while (string [0] != '-' || string [1] != '\0');
   printf ("\n");
   gStringM.WriteStringMemory ();
   printf ("Memory used %ld\n", MemoryUsed);
}

int main (void)
{
   loop ();
   gStringM.InitStringMemory ();
   loop ();
   return 0;
}
