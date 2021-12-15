# ifndef yyGeneral
# define yyGeneral

/* $Id: General.h,v 1.7 1994/12/04 19:29:55 grosch rel $ */

/* $Log: General.h,v $
 */

/* Ich, Doktor Josef Grosch, Informatiker, June 1995 */

# include "ratc.h"

# if defined _MSC_VER
#  pragma warning (disable:4121)
# endif

typedef struct { char yychar; double yydouble; } yyForAlign;

# define yyMaxAlign	(sizeof (yyForAlign) - sizeof (double))

# define yyAlignedSize(size) ((size + yyMaxAlign - 1) & ~ (long) (yyMaxAlign - 1))

# define Min(a,b) (((a) <= (b)) ? (a) : (b))
			/* Returns the minimum of 'a' and 'b'.		*/
# define Max(a,b) (((a) >= (b)) ? (a) : (b))
			/* Returns the maximum of 'a' and 'b'.		*/

extern unsigned long	Log2 (register unsigned long yyx);
			/* Returns the logarithm to the base 2 of 'x'.	*/
extern unsigned long	Exp2 (register unsigned long yyx);
			/* Returns 2 to the power of 'x'.		*/

# endif
