static char rcsid [] =
   "$Id: rTime.c,v 1.9 1995/05/09 13:53:42 grosch rel grosch $";

# include "rTime.h"
# include <stdio.h>
# include "rSystem.h"

static long old = 0;

long StepTime (void)
{
   long now = rTime ();
   long result = now - old;
   old = now;
   return result;
}

void WriteStepTime (char * string)
{
# ifndef _USRDLL
   printf ("%s %5ld\n", string, StepTime ());
# else
   string;	/* Dummy */
# endif
}
