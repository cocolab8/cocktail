/* $Id: SetsDrv.c,v 1.12 1995/05/09 13:53:42 grosch rel $ */

/* $Log: SetsDrv.c,v $
 */

/* Ich, Doktor Josef Grosch, Informatiker, April 1996 */

static char rcsid [] =
   "$Id: SetsDrv.c,v 1.12 1995/05/09 13:53:42 grosch rel $";

# include "ratc.h"
# include <stdio.h>
# include "Sets.h"

# define max		1000

static	tSet		s, t, u	;
static	long		i	;
static	FILE *		f	;

int main (void)
{
   MakeSet (& s, max);
   MakeSet (& t, max);
   MakeSet (& u, max);

   for (i = 2; i <= max; i ++) { Include (& t, (short) i); }

   AssignEmpty (& s);
   AssignElmt (& s, 1);
   Assign (& u, & t);
   Union (& s, & t);

   AssignEmpty (& t);
   for (i = 0; i <= max; i += 2) { Include (& t, (short) i); }
   Difference (& s, & t);

   for (i = 0; i <= max; i += 3 ) { Exclude (& s, (short) i); }
   for (i = 0; i <= max; i += 5 ) { Exclude (& s, (short) i); }
   for (i = 0; i <= max; i += 7 ) { Exclude (& s, (short) i); }
   for (i = 0; i <= max; i += 11) { Exclude (& s, (short) i); }
   for (i = 0; i <= max; i += 13) { Exclude (& s, (short) i); }
   for (i = 0; i <= max; i += 17) { Exclude (& s, (short) i); }
   for (i = 0; i <= max; i += 19) { Exclude (& s, (short) i); }
   for (i = 0; i <= max; i += 23) { Exclude (& s, (short) i); }
   for (i = 0; i <= max; i += 29) { Exclude (& s, (short) i); }

   f = fopen ("t", "w");
   WriteSet (f, & s);
   fprintf (f, "\n");
   fclose (f);

   f = fopen ("t", "r");
   ReadSet (f, & t);
   fclose (f);

   WriteSet (stdout, & t);
   printf ("\n%5d%5d%5d\n", Size (& t), Minimum (& t), Maximum (& t));
   ReleaseSet (& s);
   ReleaseSet (& t);
   ReleaseSet (& u);

   MakeSet	(& s, 10);
   Include	(& s, 3);
   Include	(& s, 7);
   printf ("\nenter Size and Set like below! (Size=0 terminates)\n10 ");
   WriteSet	(stdout, & s);
   printf ("\n");
   ReleaseSet	(& s);

   for (;;) {
      printf ("\n");
      scanf ("%ld", & i);
      if (i == 0) break;
      MakeSet	(& s, (short) i);
      ReadSet	(stdin, & s);
      WriteSet	(stdout, & s);
      printf (" Card = %d\n", Card (& s));
      Complement(& s);
      WriteSet	(stdout, & s);
      printf (" Card = %d\n", Card (& s));
      ReleaseSet(& s);
   }
   return 0;
}
