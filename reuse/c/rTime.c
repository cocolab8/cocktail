static char rcsid [] =
   "$Id: rTime.c,v 1.15 2008/09/12 14:14:32 grosch rel $";

# include "rTime.h"
# include <stdio.h>
# include "rSystem.h"

static long old = 0;

long StepTime ARGS ((void))
{
   long now = rTime ();
   long result = now - old;
   old = now;
   return result;
}

void WriteStepTime
# ifdef HAVE_ARGS
   (char * string)
# else
   (string) char * string;
# endif
{
# ifndef _USRDLL
   printf ("%s %5ld\n", string, StepTime ());
# else
   string;	/* Dummy */
# endif
}
