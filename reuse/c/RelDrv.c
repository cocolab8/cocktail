/* $Id: RelDrv.c,v 1.7 2008/09/12 14:14:04 grosch rel $ */

/*
 * $Log: RelDrv.c,v $
 * Revision 1.7  2008/09/12 14:14:04  grosch
 * improved support for 64 bit machines (added rIntType.h)
 * removed type casts to (void)
 *
 * Revision 1.6  2000/04/10 15:59:07  grosch
 * cosmetic changes
 *
 * Revision 1.5  1997/05/27 13:25:04  grosch
 * truncation of filenames to 8.3 format
 *
 * Revision 1.4  1995/05/09 13:53:42  grosch
 * added void to argument list of functions without arguments
 *
 * Revision 1.3  1995/03/20  15:37:30  grosch
 * truncate lines to at most 80 characters
 *
 * Revision 1.2  1995/02/23  20:11:46  grosch
 * renamed Positions to Position, StringMem to StringM, Relations to Relation
 * output lines with at most 132 characters
 *
 * Revision 1.1  1994/12/04  19:29:55  grosch
 * added ANSI-C prototypes
 *
 * Revision 1.0  1994/07/21  21:10:49  grosch
 * Initial revision
 *
 */

/* Ich, Doktor Josef Grosch, Informatiker, Sept. 1987 */

static char rcsid [] =
   "$Id: RelDrv.c,v 1.7 2008/09/12 14:14:04 grosch rel $";

# include <stdio.h>
# include "Relation.h"
# include "Sets.h"

static tRelation r1, r2;
static int s;
static tSet s2;

int main ARGS ((void))
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
