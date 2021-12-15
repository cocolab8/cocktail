/* $Id: RelDrv.c,v 1.4 1995/05/09 13:53:42 grosch rel $ */

/* $Log: RelDrv.c,v $
 */

/* Ich, Doktor Josef Grosch, Informatiker, April 1996 */

static char rcsid [] =
   "$Id: RelDrv.c,v 1.4 1995/05/09 13:53:42 grosch rel $";

# include "ratc.h"
# include <stdio.h>
# include "Relation.h"
# include "Sets.h"

static tRelation r1, r2;
static int s;
static tSet s2;

int main (void)
{
  rMakeRelation (& r2, 10, 20);
  rInclude (& r2, 0, 9);
  rInclude (& r2, 9, 1);
  rInclude (& r2, 1, 8);
  rInclude (& r2, 8, 0);
  rWriteRelation (stdout, r2);
  printf ("\n");
  rClosure (& r2);
  rWriteRelation (stdout, r2);
  printf ("\n");
  rReleaseRelation (& r2);
  rMakeRelation (& r1, 10, 20);
  rInclude (& r1, 2, 3);
  rInclude (& r1, 3, 4);
  printf
     ("\nenter Size and Relation like below! (Size=0 terminates)\n%3d ", 4);
  rWriteRelation (stdout, r1);
  printf ("\n");
  rReleaseRelation (& r1);
  for (;;) {
    printf ("\n");
    fflush (stdout);
    scanf ("%d", & s);
    if (s == 0) break;
    MakeSet (& s2, s);
    rMakeRelation (& r2, s, s);
    rReadRelation (stdin, & r2);
    rWriteRelation (stdout, r2);
    printf ("\nReflexive	= %d\n", rIsReflexive (r2));
    printf ("Symmetric	= %d\n", rIsSymmetric (r2));
    printf ("Transitive	= %d\n", rIsTransitive (r2));
    printf ("Equivalence	= %d\n", rIsEquivalence (r2));
    printf ("HasReflexive	= %d\n", rHasReflexive (r2));
    printf ("Cyclic		= %d\n", rIsCyclic (r2));
    printf ("Card		= %d\n", rCard (& r2));
    rGetCyclics (r2, & s2);
    printf ("Cyclics		= ");
    WriteSet (stdout, & s2);
    printf ("\n");
    rClosure (& r2);
    rWriteRelation (stdout, r2);
    printf ("\nReflexive	= %d\n", rIsReflexive (r2));
    printf ("Symmetric	= %d\n", rIsSymmetric (r2));
    printf ("Transitive	= %d\n", rIsTransitive (r2));
    printf ("Equivalence	= %d\n", rIsEquivalence (r2));
    printf ("HasReflexive	= %d\n", rHasReflexive (r2));
    printf ("Cyclic		= %d\n", rIsCyclic (r2));
    printf ("Card		= %d\n", rCard (& r2));
    rGetCyclics (r2, & s2);
    printf ("Cyclics		= ");
    WriteSet (stdout, & s2);
    printf ("\n");
    rReleaseRelation (& r2);
    ReleaseSet (& s2);
  }
  return 0;
}
