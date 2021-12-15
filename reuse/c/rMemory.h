# ifndef yyrMemory
# define yyrMemory

/* $Id: rMemory.h,v 1.17 2000/09/04 13:46:52 grosch rel $ */

/*
 * $Log: rMemory.h,v $
 * Revision 1.17  2000/09/04 13:46:52  grosch
 * added const to char *
 *
 * Revision 1.16  2000/04/10 16:05:36  grosch
 * introduced ifdef HAVE_ARGS
 *
 * Revision 1.15  1998/04/04 10:11:01  grosch
 * renamed WriteMemory to WriterMemory
 *
 * Revision 1.14  1997/12/05 12:45:27  grosch
 * fixed silly bug at: # define Free rmFree
 *
 * Revision 1.13  1997/11/30 22:31:56  grosch
 * eliminated use of type cardinal
 * added function CloserMemory
 *
 * Revision 1.12  1997/05/27 13:25:04  grosch
 * truncation of filenames to 8.3 format
 *
 * Revision 1.11  1997/04/08 13:38:16  grosch
 * added prefix yy to all argument names
 *
 * Revision 1.10  1996/09/17  08:57:48  grosch
 * added procedure WriteMemory
 *
 * Revision 1.9  1996/08/06  13:26:45  grosch
 * adaptions to MS Visual C++ 1.52
 *
 * Revision 1.8  1995/05/09  13:53:42  grosch
 * added void to argument list of functions without arguments
 *
 * Revision 1.7  1994/12/04  19:29:55  grosch
 * added ANSI-C prototypes
 *
 * Revision 1.6  1993/08/18  15:01:05  grosch
 * rename System and Memory to rSystem and rMemory
 *
 * Revision 1.5  1992/08/07  14:36:51  grosch
 * added comments
 *
 * Revision 1.4  1991/11/21  14:28:16  grosch
 * new version of RCS on SPARC
 *
 * Revision 1.3  91/07/17  17:23:14  grosch
 * introduced ARGS trick for ANSI compatibility
 * 
 * Revision 1.2  90/12/14  15:55:53  grosch
 * introduced variable MemoryUsed
 * 
 * Revision 1.1  90/07/04  14:34:00  grosch
 * introduced conditional include
 * 
 * Revision 1.0  88/10/04  11:44:42  grosch
 * Initial revision
 * 
 */

/* Ich, Doktor Josef Grosch, Informatiker, Sept. 1987 */

# include "ratc.h"

/* avoid linker problems with MS VC++ */

# ifdef _MSC_VER
# define Free rmFree
# endif

# define BeginrMemory InitrMemory

extern unsigned long MemoryUsed	;
			/* Holds the total amount of memory managed by	*/
			/* this module.					*/

extern void	InitrMemory	ARGS ((void));
			/* The memory module is initialized.		*/

extern char *	Alloc		ARGS ((register unsigned long yyByteCount));
			/* Returns a pointer to dynamically allocated	*/
			/* space of size 'ByteCount' bytes.		*/

extern void	Free		ARGS ((unsigned long yyByteCount,
					const char * yya));
			/* The dynamically allocated space starting at	*/
			/* address 'a' of size 'ByteCount' bytes is	*/
			/* released.					*/

extern void	CloserMemory	ARGS ((void));
			/* All memory managed by this module is		*/
			/* released.					*/

extern void	WriterMemory	ARGS ((void));
			/* The internal data structure of this module   */
			/* is printed to stdout. Useful for debugging.  */

# endif
