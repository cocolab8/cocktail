/* $Id: rMemoryDrv.c,v 1.10 1995/05/09 13:53:42 grosch rel $ */

/* $Log: rMemoryDrv.c,v $
 */

/* Ich, Doktor Josef Grosch, Informatiker, Sept. 1987 */

static char rcsid [] =
   "$Id: rMemoryDrv.c,v 1.10 1995/05/09 13:53:42 grosch rel $";

# include "ratc.h"
# include "rMemory.h"
# include <stdio.h>

static	char		* p1, * p2, * p3, * p4;
static	unsigned long	i;
static	unsigned long	small, best, notbest, large;

static char * AllocPrint (unsigned long n)
   {
      register char * a = Alloc (n);
      printf ("Alloc:  n = %10lu, ADR = %16p\n", n, a);
      if (a) {
	 register unsigned long i;
	 for (i = 0; i < n; i += 1024) {
	    register char b;
	    a [i] = 'x';
	    b = a [i];
	 }
      }
      return a;
   }

int main (void)
{
   BeginrMemory ();

   for (i = 0; i <= 63; i ++) {
      p1 = AllocPrint (i);
      p2 = AllocPrint (i);
      Free (i, p1);
      Free (i, p2);
      p3 = AllocPrint (i);
      p4 = AllocPrint (i);

      if (p3 != p2) {
	 printf ("Alloc/Free small not inverse %10ld\n", i);
      }

      if (p4 != p1) {
	 printf ("Alloc/Free small not inverse %10ld\n", i);
      }
   }

   small	= 80;
   best		= 96;
   notbest	= 112;
   large	= 128;

   for (i = 7; i <= 32; i ++) {
      printf ("        i = ");
      printf ("%10ld\n", i);

      p1 = AllocPrint (small);
      p2 = AllocPrint (best);
      p3 = AllocPrint (notbest);
      p4 = AllocPrint (large);

      if (p1 == NULL || p2 == NULL || p3 == NULL || p4 == NULL) break;

      Free (large	, p4);
      Free (notbest	, p3);
      Free (best	, p2);
      Free (small	, p1);

      p1 = AllocPrint (best);
      if (p1 != p2) {
	 printf ("Alloc/Free large not inverse %10ld\n", i);
      }

      p1 = AllocPrint (best);
      if (p1 != p3) {
	 printf ("Alloc/Free large not inverse %10ld\n", i);
      }

      p1 = AllocPrint (best);
      if (p1 != p4) {
	 printf ("Alloc/Free large not inverse %10ld\n", i);
      }

      small   += small;
      best    += best;
      notbest += notbest;
      large   += large;
   }
   printf ("\nMemory used: %10ld\n", MemoryUsed);
   CloserMemory ();
   printf ("\nMemory used: %10ld\n", MemoryUsed);
   return 0;
}
