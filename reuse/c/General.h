# ifndef yyGeneral
# define yyGeneral

/* $Id: General.h,v 1.13 2000/09/04 13:59:59 grosch rel $ */

/*
 * $Log: General.h,v $
 * Revision 1.13  2000/09/04 13:59:59  grosch
 * added parentheses to macro arguments
 *
 * Revision 1.12  2000/04/10 15:39:49  grosch
 * introduced ifdef HAVE_ARGS
 *
 * Revision 1.11  1997/11/30 22:28:06  grosch
 * eliminate use of type cardinal
 *
 * Revision 1.10  1997/05/27 13:25:04  grosch
 * truncation of filenames to 8.3 format
 *
 * Revision 1.9  1997/04/08 13:38:16  grosch
 * added prefix yy to all argument names
 *
 * Revision 1.8  1996/06/05  12:00:48  grosch
 * adaption to MS VC++
 *
 * Revision 1.7  1994/12/04  19:29:55  grosch
 * added ANSI-C prototypes
 *
 * Revision 1.6  1993/10/28  13:34:32  grosch
 * improved storage allocation and alignment handling
 *
 * Revision 1.5  1992/08/07  14:36:51  grosch
 * added comments
 *
 * Revision 1.4  1991/11/21  14:28:16  grosch
 * new version of RCS on SPARC
 *
 * Revision 1.3  91/07/17  17:23:06  grosch
 * introduced ARGS trick for ANSI compatibility
 * 
 * Revision 1.2  90/09/04  17:32:09  grosch
 * automatic determination of alignment
 * 
 * Revision 1.1  90/07/04  14:33:54  grosch
 * introduced conditional include
 * 
 * Revision 1.0  88/10/04  11:44:37  grosch
 * Initial revision
 * 
 */

/* Ich, Doktor Josef Grosch, Informatiker, Sept. 1987 */

# include "ratc.h"

# if defined _MSC_VER
# pragma warning (disable:4121)
# endif

typedef struct { char yychar; double yydouble; } yyForAlign;

# define yyMaxAlign	(sizeof (yyForAlign) - sizeof (double))

# define yyAlignedSize(size) ((size + yyMaxAlign - 1) & ~ (long) (yyMaxAlign - 1))

# define Min(a,b) (((a) <= (b)) ? (a) : (b))
			/* Returns the minimum of 'a' and 'b'.		*/
# define Max(a,b) (((a) >= (b)) ? (a) : (b))
			/* Returns the maximum of 'a' and 'b'.		*/

extern unsigned long	Log2 ARGS ((register unsigned long yyx));
			/* Returns the logarithm to the base 2 of 'x'.	*/
extern unsigned long	Exp2 ARGS ((register unsigned long yyx));
			/* Returns 2 to the power of 'x'.		*/

# endif
