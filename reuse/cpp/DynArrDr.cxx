/* $Id: DynArrDrv.c,v 1.9 1995/06/26 15:59:41 grosch rel $ */

/* $Log: DynArrDrv.c,v $
 */

/* Ich, Doktor Josef Grosch, Informatiker, April 1996/April 2006 */

static char rcsid [] =
   "$Id: DynArrDrv.c,v 1.9 1995/06/26 15:59:41 grosch rel $";

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

int main (void)
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

    printf ("p, j, size = %16p%5d%10ld ok\n", p, j, s);
  }
  printf ("Memory used = %10ld\n", MemoryUsed);

  for (j = n; j >= 1; j --) {
    ShrinkArray ((char * *) & p, & s, (unsigned long) sizeof (long));

    for (i = 0; i < s; i ++) {
      if (p [i] != i) {
	printf ("Error j, i, p [i] = %5d%5ld%10lu\n", j, i, p [i]);
      }
    }

    printf ("p, j, size = %16p%5d%10ld ok\n", p, j, s);
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

    printf ("pi, j, size = %16p%5d%10ld ok\n", pi, j, s);
  }
  printf ("Memory used = %10ld\n", MemoryUsed);

  for (j = ni; j >= 1; j --) {
    ShrinkArray ((char * *) & pi, & s, (unsigned long) sizeof (unsigned int));

    for (i = 0; i < s; i ++) {
      if (pi [i] != i) {
	printf ("Error j, i, pi [i] = %5d%5ld%10u\n", j, i, pi [i]);
      }
    }

    printf ("pi, j, size = %16p%5d%10ld ok\n", pi, j, s);
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

    printf ("ps, j, size = %16p%5d%10ld ok\n", ps, j, s);
  }
  printf ("Memory used = %10ld\n", MemoryUsed);

  for (j = ns; j >= 1; j --) {
    ShrinkArray ((char * *) & ps, & s, (unsigned long) sizeof (unsigned short));

    for (i = 0; i < s; i ++) {
      if (ps [i] != i) {
	printf ("Error j, i, ps [i] = %5d%5ld%10hu\n", j, i, ps [i]);
      }
    }

    printf ("ps, j, size = %16p%5d%10ld ok\n", ps, j, s);
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

    printf ("pc, j, size = %16p%5d%10ld ok\n", pc, j, s);
  }
  printf ("Memory used = %10ld\n", MemoryUsed);

  for (j = nc; j >= 1; j --) {
    ShrinkArray ((char * *) & pc, & s, (unsigned long) sizeof (unsigned char));

    for (i = 0; i < s; i ++) {
      if (pc [i] != i % 256) {
	printf ("Error j, i, pc [i] = %5d%5ld%10d\n", j, i, (int) pc [i]);
      }
    }

    printf ("pc, j, size = %16p%5d%10ld ok\n", pc, j, s);
  }
  printf ("Memory used = %10ld\n", MemoryUsed);

  return 0;
}
