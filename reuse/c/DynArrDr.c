/* $Id: DynArrDr.c,v 1.18 2008/10/02 09:26:04 grosch Exp $ */

/*
 * $Log: DynArrDr.c,v $
 * Revision 1.18  2008/10/02 09:26:04  grosch
 * added typecasts to (void *) at printf with %p
 *
 * Revision 1.17  2008/09/12 14:13:00  grosch
 * improved support for 64 bit machines (added rIntType.h)
 * removed type casts to (void)
 *
 * Revision 1.16  2006/11/16 15:52:09  grosch
 * calmed down MS VC++
 *
 * Revision 1.15  2006/07/17 16:31:46  grosch
 * made code work on 64 bit machines
 *
 * Revision 1.14  2000/04/10 15:34:44  grosch
 * cosmetic changes
 *
 * Revision 1.13  1997/11/30 22:26:48  grosch
 * eliminate use of type cardinal
 *
 * Revision 1.12  1997/05/27 13:25:04  grosch
 * truncation of filenames to 8.3 format
 *
 * Revision 1.11  1997/05/10 18:19:14  grosch
 * fixed problems with static arrays which are increased using ExtendArray
 *
 * Revision 1.10  1996/06/05 12:00:48  grosch
 * adaption to MS VC++
 *
 * Revision 1.9  1995/06/26  15:59:41  grosch
 * added functions ResizeArray and ShrinkArray
 *
 * Revision 1.8  1995/05/09  13:53:42  grosch
 * added void to argument list of functions without arguments
 *
 * Revision 1.7  1995/03/20  15:37:30  grosch
 * truncate lines to at most 80 characters
 *
 * Revision 1.6  1994/12/04  19:29:55  grosch
 * added ANSI-C prototypes
 *
 * Revision 1.5  1993/08/18  15:01:05  grosch
 * rename System and Memory to rSystem and rMemory
 *
 * Revision 1.4  1992/05/05  13:19:05  grosch
 * added rcsid
 *
 * Revision 1.3  1991/11/21  14:28:16  grosch
 * new version of RCS on SPARC
 *
 * Revision 1.2  90/09/20  09:12:21  grosch
 * calmed down lint
 * 
 * Revision 1.1  90/07/04  14:33:50  grosch
 * introduced conditional include
 * 
 * Revision 1.0  88/10/04  11:44:34  grosch
 * Initial revision
 * 
 */

/* Ich, Doktor Josef Grosch, Informatiker, Sept. 1987/April 2006 */

static char rcsid [] =
   "$Id: DynArrDr.c,v 1.18 2008/10/02 09:26:04 grosch Exp $";

# include <stdio.h>
# include "rMemory.h"
# include "DynArray.h"

static	unsigned long	i;
static	int		j;
static	unsigned long *	p;
static	unsigned int  *	pi;
static	unsigned short*	ps;
static	unsigned char *	pc;
static	unsigned long	s;
static	int		n = 19;
static	int		ni= 14;
static	int		ns= 14;
static	int		nc= 14;

int main ARGS ((void))
{
  InitrMemory ();

/* ------------------------------------------------------------ */

  printf ("\nlong\n\n");
  s = 1;

  MakeArray ((char * *) & p, & s, (unsigned long) sizeof (long));
  for (i = 0; i < s; i ++) {
    p [i] = i;
  }

  for (j = 1; j <= n; j ++) {
    ExtendArray ((char * *) & p, & s, (unsigned long) sizeof (long));

    for (i = s / 2; i < s; i ++) {
      p [i] = i;
    }

    for (i = 0; i < s; i ++) {
      if (p [i] != i) {
	printf ("Error j, i, p [i] = %5d%5ld%10lu\n", j, i, p [i]);
      }
    }

    printf ("p, j, size = %16p%5d%10ld ok\n", (void *) p, j, s);
  }
  printf ("Memory used = %10ld\n", MemoryUsed);

  for (j = n; j >= 1; j --) {
    ShrinkArray ((char * *) & p, & s, (unsigned long) sizeof (long));

    for (i = 0; i < s; i ++) {
      if (p [i] != i) {
	printf ("Error j, i, p [i] = %5d%5ld%10lu\n", j, i, p [i]);
      }
    }

    printf ("p, j, size = %16p%5d%10ld ok\n", (void *) p, j, s);
  }
  printf ("Memory used = %10ld\n", MemoryUsed);

/* ------------------------------------------------------------ */

  printf ("\nunsigned int\n\n");
  s = 1;

  MakeArray ((char * *) & pi, & s, (unsigned long) sizeof (unsigned int));
  for (i = 0; i < s; i ++) {
    pi [i] = (unsigned int) i;
  }

  for (j = 1; j <= ni; j ++) {
    ExtendArray ((char * *) & pi, & s, (unsigned long) sizeof (unsigned int));

    for (i = s / 2; i < s; i ++) {
      pi [i] = (unsigned int) i;
    }

    for (i = 0; i < s; i ++) {
      if (pi [i] != i) {
	printf ("Error j, i, pi [i] = %5d%5ld%10u\n", j, i, pi [i]);
      }
    }

    printf ("pi, j, size = %16p%5d%10ld ok\n", (void *) pi, j, s);
  }
  printf ("Memory used = %10ld\n", MemoryUsed);

  for (j = ni; j >= 1; j --) {
    ShrinkArray ((char * *) & pi, & s, (unsigned long) sizeof (unsigned int));

    for (i = 0; i < s; i ++) {
      if (pi [i] != i) {
	printf ("Error j, i, pi [i] = %5d%5ld%10u\n", j, i, pi [i]);
      }
    }

    printf ("pi, j, size = %16p%5d%10ld ok\n", (void *) pi, j, s);
  }
  printf ("Memory used = %10ld\n", MemoryUsed);

/* ------------------------------------------------------------ */

  printf ("\nunsigned short\n\n");
  s = 1;

  MakeArray ((char * *) & ps, & s, (unsigned long) sizeof (unsigned short));
  for (i = 0; i < s; i ++) {
    ps [i] = (unsigned short) i;
  }

  for (j = 1; j <= ns; j ++) {
    ExtendArray ((char * *) & ps, & s, (unsigned long) sizeof (unsigned short));

    for (i = s / 2; i < s; i ++) {
      ps [i] = (unsigned short) i;
    }

    for (i = 0; i < s; i ++) {
      if (ps [i] != i) {
	printf ("Error j, i, ps [i] = %5d%5ld%10hu\n", j, i, ps [i]);
      }
    }

    printf ("ps, j, size = %16p%5d%10ld ok\n", (void *) ps, j, s);
  }
  printf ("Memory used = %10ld\n", MemoryUsed);

  for (j = ns; j >= 1; j --) {
    ShrinkArray ((char * *) & ps, & s, (unsigned long) sizeof (unsigned short));

    for (i = 0; i < s; i ++) {
      if (ps [i] != i) {
	printf ("Error j, i, ps [i] = %5d%5ld%10hu\n", j, i, ps [i]);
      }
    }

    printf ("ps, j, size = %16p%5d%10ld ok\n", (void *) ps, j, s);
  }
  printf ("Memory used = %10ld\n", MemoryUsed);

/* ------------------------------------------------------------ */

  printf ("\nunsigned char\n\n");
  s = 1;

  MakeArray ((char * *) & pc, & s, (unsigned long) sizeof (unsigned char));
  for (i = 0; i < s; i ++) {
    pc [i] = (unsigned char) (i % 256);
  }

  for (j = 1; j <= nc; j ++) {
    ExtendArray ((char * *) & pc, & s, (unsigned long) sizeof (unsigned char));

    for (i = s / 2; i < s; i ++) {
      pc [i] = (unsigned char) (i % 256);
    }

    for (i = 0; i < s; i ++) {
      if (pc [i] != i % 256) {
	printf ("Error j, i, pc [i] = %5d%5ld%10d\n", j, i, (int) pc [i]);
      }
    }

    printf ("pc, j, size = %16p%5d%10ld ok\n", (void *) pc, j, s);
  }
  printf ("Memory used = %10ld\n", MemoryUsed);

  for (j = nc; j >= 1; j --) {
    ShrinkArray ((char * *) & pc, & s, (unsigned long) sizeof (unsigned char));

    for (i = 0; i < s; i ++) {
      if (pc [i] != i % 256) {
	printf ("Error j, i, pc [i] = %5d%5ld%10d\n", j, i, (int) pc [i]);
      }
    }

    printf ("pc, j, size = %16p%5d%10ld ok\n", (void *) pc, j, s);
  }
  printf ("Memory used = %10ld\n", MemoryUsed);

  return 0;
}
