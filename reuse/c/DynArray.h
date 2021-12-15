# ifndef yyDynArray
# define yyDynArray

/* $Id: DynArray.h,v 1.12 2000/04/10 15:36:01 grosch rel $ */

/*
 * $Log: DynArray.h,v $
 * Revision 1.12  2000/04/10 15:36:01  grosch
 * introduced ifdef HAVE_ARGS
 *
 * Revision 1.11  1998/03/30 12:25:34  grosch
 * removed macros CreateArray ...
 *
 * Revision 1.10  1997/05/27 13:25:04  grosch
 * truncation of filenames to 8.3 format
 *
 * Revision 1.9  1997/05/10 18:19:14  grosch
 * fixed problems with static arrays which are increased using ExtendArray
 *
 * Revision 1.8  1997/04/08 13:38:16  grosch
 * added prefix yy to all argument names
 *
 * Revision 1.7  1995/06/26  15:59:41  grosch
 * added functions ResizeArray and ShrinkArray
 *
 * Revision 1.6  1995/03/20  15:37:30  grosch
 * truncate lines to at most 80 characters
 *
 * Revision 1.5  1994/12/04  19:29:55  grosch
 * added ANSI-C prototypes
 *
 * Revision 1.4  1992/08/07  14:36:51  grosch
 * added comments
 *
 * Revision 1.3  1991/11/21  14:28:16  grosch
 * new version of RCS on SPARC
 *
 * Revision 1.2  91/07/17  17:23:02  grosch
 * introduced ARGS trick for ANSI compatibility
 *
 * Revision 1.1  90/07/04  14:33:52  grosch
 * introduced conditional include
 *
 * Revision 1.0  88/10/04  11:44:36  grosch
 * Initial revision
 *
 */

/* Ich, Doktor Josef Grosch, Informatiker, Sept. 1987 */

# include "ratc.h"

extern void MakeArray    ARGS ((char * *	yyArrayPtr,
				unsigned long *	yyElmtCount,
				unsigned long	yyElmtSize));
			/* 'ArrayPtr' is set to the start address of a	*/
			/* memory space to hold an array of 'ElmtCount' */
			/* elements each of size 'ElmtSize' bytes.	*/

extern void ResizeArray  ARGS ((char * *	yyArrayPtr,
				unsigned long *	yyOldElmtCount,
				unsigned long	yyNewElmtCount,
				unsigned long	yyElmtSize));
			/* The memory space for the array is changed	*/
			/* to 'NewElmtCount' elements.			*/

extern void ExtendArray  ARGS ((char * *	yyArrayPtr,
				unsigned long *	yyElmtCount,
				unsigned long	yyElmtSize));
			/* The memory space for the array is increased	*/
			/* by doubling the number of elements.		*/

extern void ShrinkArray  ARGS ((char * *	yyArrayPtr,
				unsigned long *	yyElmtCount,
				unsigned long	yyElmtSize));
			/* The memory space for the array is reduced	*/
			/* by halving the number of elements.		*/

extern void ReleaseArray ARGS ((char * *	yyArrayPtr,
				unsigned long *	yyElmtCount,
				unsigned long	yyElmtSize));
			/* The memory space for the array is released.	*/

# endif
