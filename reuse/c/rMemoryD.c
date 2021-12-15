/* $Id: rMemoryD.c,v 1.17 2008/10/02 09:26:04 grosch Exp $ */

/*
 * $Log: rMemoryD.c,v $
 * Revision 1.17  2008/10/02 09:26:04  grosch
 * added typecasts to (void *) at printf with %p
 *
 * Revision 1.16  2008/09/12 14:14:32  grosch
 * improved support for 64 bit machines (added rIntType.h)
 * removed type casts to (void)
 *
 * Revision 1.15  2000/04/10 16:05:59  grosch
 * cosmetic changes
 *
 * Revision 1.14  1999/12/10 21:47:59  grosch
 * improved rMemoryD to force swapping by touching memory pages
 *
 * Revision 1.13  1997/11/30 22:31:56  grosch
 * eliminated use of type cardinal
 * added function CloserMemory
 *
 * Revision 1.12  1997/05/27 13:25:04  grosch
 * truncation of filenames to 8.3 format
 *
 * Revision 1.11  1996/06/05 12:00:48  grosch
 * adaption to MS VC++
 *
 * Revision 1.10  1995/05/09  13:53:42  grosch
 * added void to argument list of functions without arguments
 *
 * Revision 1.9  1995/03/20  15:37:30  grosch
 * truncate lines to at most 80 characters
 *
 * Revision 1.8  1994/12/04  19:29:55  grosch
 * added ANSI-C prototypes
 *
 * Revision 1.7  1993/08/20  08:13:11  grosch
 * renamed modules System and Memory to rSystem and rMemory
 *
 * Revision 1.6  1992/05/05  13:19:05  grosch
 * added rcsid
 *
 * Revision 1.5  1991/11/21  14:28:16  grosch
 * new version of RCS on SPARC
 *
 * Revision 1.4  91/01/21  12:13:23  grosch
 * some performance improvements
 * 
 * Revision 1.3  90/09/20  09:12:24  grosch
 * calmed down lint
 * 
 * Revision 1.2  90/09/04  17:32:12  grosch
 * automatic determination of alignment
 * 
 * Revision 1.1  90/07/04  14:34:01  grosch
 * introduced conditional include
 * 
 * Revision 1.0  88/10/04  11:44:43  grosch
 * Initial revision
 * 
 */

/* Ich, Doktor Josef Grosch, Informatiker, Sept. 1987 */

static char rcsid [] =
   "$Id: rMemoryD.c,v 1.17 2008/10/02 09:26:04 grosch Exp $";

# include <stdio.h>
# include "rMemory.h"

static	char		* p1, * p2, * p3, * p4;
static	unsigned long	i;
static	unsigned long	small, best, notbest, large;

static char * AllocPrint
# ifdef HAVE_ARGS
   (unsigned long n)
# else
   (n) unsigned long n;
# endif
   {
      register char * a = Alloc (n);
      printf ("Alloc:  n = %10lu, ADR = %16p\n", n, (void *) a);
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

int main ARGS ((void))
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
