/* $Id: General.c,v 1.9 1995/03/20 15:37:30 grosch rel $ */

/* $Log: General.c,v $
 */

/* Ich, Doktor Josef Grosch, Informatiker, June 1995 */

static char rcsid [] =
   "$Id: General.c,v 1.9 1995/03/20 15:37:30 grosch rel $";

# include "ratc.h"
# include "General.h"

unsigned long Log2	/* Returns the logarithm to the base 2 of 'x'.	*/
   (register unsigned long x)
{
   register unsigned long y = 0;

# if rWORDSIZE > 32
   if (x >= 4294967296) { y += 32; x >>= 32; }
# endif
   if (x >=      65536) { y += 16; x >>= 16; }
   if (x >=        256) { y +=  8; x >>=  8; }
   if (x >=         16) { y +=  4; x >>=  4; }
   if (x >=          4) { y +=  2; x >>=  2; }
   if (x >=     2     ) { y +=  1;           }
   return y;
}

unsigned long Exp2	/* Returns 2 to the power of 'x'.		*/
   (register unsigned long x)
{
   return 1 << x;
}
