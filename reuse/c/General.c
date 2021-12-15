/* $Id: General.c,v 1.14 2008/09/12 14:13:00 grosch rel $ */

/*
 * $Log: General.c,v $
 * Revision 1.14  2008/09/12 14:13:00  grosch
 * improved support for 64 bit machines (added rIntType.h)
 * removed type casts to (void)
 *
 * Revision 1.13  2000/04/10 15:39:49  grosch
 * introduced ifdef HAVE_ARGS
 *
 * Revision 1.12  1999/11/30 14:55:44  grosch
 * optimized function Exp2
 *
 * Revision 1.11  1997/11/30 22:28:06  grosch
 * eliminate use of type cardinal
 *
 * Revision 1.10  1997/05/27 13:25:04  grosch
 * truncation of filenames to 8.3 format
 *
 * Revision 1.9  1995/03/20 15:37:30  grosch
 * truncate lines to at most 80 characters
 *
 * Revision 1.8  1994/12/04  19:29:55  grosch
 * added ANSI-C prototypes
 *
 * Revision 1.7  1993/10/28  13:34:32  grosch
 * improved storage allocation and alignment handling
 *
 * Revision 1.6  1993/08/18  15:01:05  grosch
 * rename System and Memory to rSystem and rMemory
 *
 * Revision 1.5  1992/05/05  13:19:05  grosch
 * added rcsid
 *
 * Revision 1.4  1992/01/31  16:31:44  grosch
 * adaption to ANSI C
 *
 * Revision 1.3  1991/11/21  14:28:16  grosch
 * new version of RCS on SPARC
 *
 * Revision 1.2  90/09/04  17:32:08  grosch
 * automatic determination of alignment
 * 
 * Revision 1.1  90/07/04  14:33:53  grosch
 * introduced conditional include
 * 
 * Revision 1.0  88/10/04  11:44:37  grosch
 * Initial revision
 * 
 */

/* Ich, Doktor Josef Grosch, Informatiker, Sept. 1987 */

static char rcsid [] =
   "$Id: General.c,v 1.14 2008/09/12 14:13:00 grosch rel $";

# include "General.h"

unsigned long Log2	/* Returns the logarithm to the base 2 of 'x'.	*/
# ifdef HAVE_ARGS
   (register unsigned long x)
# else
   (x) register unsigned long x;
# endif
   {
      register unsigned long y = 0;

# if rWORDSIZE > 32
      if (x >= 4294967296) { y += 32; x >>= 32; }
# endif
      if (x >=      65536) { y += 16; x >>= 16; }
      if (x >=        256) { y +=  8; x >>=  8; }
      if (x >=         16) { y +=  4; x >>=  4; }
      if (x >=          4) { y +=  2; x >>=  2; }
      if (x >=          2) { y +=  1;           }
      return y;
   }

unsigned long Exp2	/* Returns 2 to the power of 'x'.		*/
# ifdef HAVE_ARGS
   (register unsigned long x)
# else
   (x) register unsigned long x;
# endif
   {
      return 1 << x;
   }
