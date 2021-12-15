/* $Id: DynArray.c,v 1.20 2008/10/10 13:00:23 grosch Exp $ */

/*
 * $Log: DynArray.c,v $
 * Revision 1.20  2008/10/10 13:00:23  grosch
 * fixed function ResizeArray: do not free blocks smaller than MinSizeSmallBlock
 *
 * Revision 1.19  2006/07/17 16:31:46  grosch
 * made code work on 64 bit machines
 *
 * Revision 1.18  2000/09/04 13:58:27  grosch
 * removed macro yyCheckPtr
 *
 * Revision 1.17  2000/04/10 15:36:01  grosch
 * introduced ifdef HAVE_ARGS
 *
 * Revision 1.16  1999/11/11 15:15:30  grosch
 * made it more robust in case of "out of memory"
 *
 * Revision 1.15  1997/05/27 13:25:04  grosch
 * truncation of filenames to 8.3 format
 *
 * Revision 1.14  1997/05/10 18:19:14  grosch
 * fixed problems with static arrays which are increased using ExtendArray
 *
 * Revision 1.13  1996/08/14 10:37:24  grosch
 * adaption to DLL's for Microsoft Visual C++
 *
 * Revision 1.12  1996/08/13  13:20:23  grosch
 * adaption to DLL's for Microsoft Visual C++
 *
 * Revision 1.11  1995/08/14  13:56:25  grosch
 * corrections because of purify
 *
 * Revision 1.10  1995/06/26  15:59:41  grosch
 * added functions ResizeArray and ShrinkArray
 *
 * Revision 1.9  1995/03/20  15:37:30  grosch
 * truncate lines to at most 80 characters
 *
 * Revision 1.8  1994/12/04  19:29:55  grosch
 * added ANSI-C prototypes
 *
 * Revision 1.7  1993/08/18  15:01:05  grosch
 * rename System and Memory to rSystem and rMemory
 *
 * Revision 1.6  1992/08/17  11:42:24  grosch
 * added error message if out of memory
 *
 * Revision 1.5  1992/05/05  13:19:05  grosch
 * added rcsid
 *
 * Revision 1.4  1991/11/21  14:28:16  grosch
 * new version of RCS on SPARC
 *
 * Revision 1.3  90/09/04  17:32:07  grosch
 * automatic determination of alignment
 * 
 * Revision 1.2  90/07/04  14:33:51  grosch
 * introduced conditional include
 * 
 * Revision 1.1  88/10/18  17:32:05  grosch
 * fixed bug: invariant must hold: ElmtCount * AlignedSize (ElmtSize) % 4 == 0
 * 
 * Revision 1.0  88/10/04  11:44:35  grosch
 * Initial revision
 * 
 */

/* Ich, Doktor Josef Grosch, Informatiker, Sept. 1987/April 2006 */

static char rcsid [] =
   "$Id: DynArray.c,v 1.20 2008/10/10 13:00:23 grosch Exp $";

# include "DynArray.h"
# include <stdio.h>
# include "General.h"
# include "rMemory.h"

static	unsigned long	MinSizeSmallBlock = Max (sizeof (long *), yyMaxAlign);

/* INVARIANT ElmtCount * AlignedSize (ElmtSize) % sizeof (long) == 0 */

static unsigned long AlignedSize
# ifdef HAVE_ARGS
   (unsigned long ElmtSize)
# else
   (ElmtSize) unsigned long ElmtSize;
# endif
   {
      register unsigned long Align;

      if (ElmtSize >= yyMaxAlign) {
	 Align = yyMaxAlign;
      } else {
	 Align = Exp2 (Log2 (ElmtSize + ElmtSize - 2));
      }
      return ElmtSize + Align - 1 - (ElmtSize - 1) % Align;
   }

void MakeArray
# ifdef HAVE_ARGS
   (char * * ArrayPtr, unsigned long * ElmtCount, unsigned long ElmtSize)
# else
   (ArrayPtr, ElmtCount, ElmtSize)
   char * *	ArrayPtr	;
   unsigned long * ElmtCount	;
   unsigned long ElmtSize	;
# endif
   {
      ElmtSize = AlignedSize (ElmtSize);
/* fails on 64 bit machines
      switch (ElmtSize % 4) {
      case 0: break;
      case 2: if (* ElmtCount & 1) (* ElmtCount) ++; break;
      case 1:
      case 3: * ElmtCount += sizeof (long) - 1 - (* ElmtCount - 1) %
			     sizeof (long); break;
      }
*/
      while (* ElmtCount * ElmtSize % sizeof (long) != 0) (* ElmtCount) ++;
      * ArrayPtr = Alloc (* ElmtCount * ElmtSize);
   }

void ResizeArray
# ifdef HAVE_ARGS
   (char * * ArrayPtr, unsigned long * OldElmtCount,
   unsigned long NewElmtCount, unsigned long ElmtSize)
# else
   (ArrayPtr, OldElmtCount, NewElmtCount, ElmtSize)
   char * *	ArrayPtr	;
   unsigned long * OldElmtCount	;

   unsigned long NewElmtCount	;
   unsigned long ElmtSize	;
# endif
   {
      ElmtSize = AlignedSize (ElmtSize);
/* fails on 64 bit machines
      switch (ElmtSize % 4) {
      case 0: break;
      case 2: if (NewElmtCount & 1) NewElmtCount ++; break;
      case 1:
      case 3: NewElmtCount += sizeof (long) - 1 - (NewElmtCount - 1) %
			      sizeof (long); break;
      }
*/
      while (NewElmtCount * ElmtSize % sizeof (long) != 0) NewElmtCount ++;
      if (NewElmtCount < * OldElmtCount) {
	 unsigned long ByteCount = AlignedSize (NewElmtCount * ElmtSize);
	 if (* OldElmtCount * ElmtSize - ByteCount >= MinSizeSmallBlock) {
	    Free (* OldElmtCount * ElmtSize - ByteCount, * ArrayPtr + ByteCount);
	    * OldElmtCount = NewElmtCount;
	 }
      } else if (NewElmtCount > * OldElmtCount) {
	 char * NewPtr = Alloc (NewElmtCount * ElmtSize);

	 if (NewPtr != NULL) {
	    register long * Source = (long *) * ArrayPtr;
	    register long * Target = (long *) NewPtr;
	    register long	 i = * OldElmtCount * ElmtSize / sizeof (long);
	    if (i) do {
	       * Target ++ = * Source ++;
	    } while (-- i > 0);
	 }

	 Free (* OldElmtCount * ElmtSize, * ArrayPtr);
	 * ArrayPtr = NewPtr;
	 * OldElmtCount = NewElmtCount;
      }
   }

void ExtendArray
# ifdef HAVE_ARGS
   (char * * ArrayPtr, unsigned long * ElmtCount, unsigned long ElmtSize)
# else
   (ArrayPtr, ElmtCount, ElmtSize)
   char * *	ArrayPtr	;
   unsigned long * ElmtCount	;
   unsigned long ElmtSize	;
# endif
   {
      ResizeArray (ArrayPtr, ElmtCount, * ElmtCount * 2, ElmtSize);
   }

void ShrinkArray
# ifdef HAVE_ARGS
   (char * * ArrayPtr, unsigned long * ElmtCount, unsigned long ElmtSize)
# else
   (ArrayPtr, ElmtCount, ElmtSize)
   char * *	ArrayPtr	;
   unsigned long * ElmtCount	;
   unsigned long ElmtSize	;
# endif
   {
		char *	NewPtr	;
      unsigned	long	NewCount = (* ElmtCount) / 2;

      ElmtSize = AlignedSize (ElmtSize);
      NewPtr = Alloc (NewCount * ElmtSize);

      if (NewPtr != NULL) {
	 register long * Source	= (long *) * ArrayPtr;
	 register long * Target	= (long *) NewPtr;
	 register long	 i	= NewCount * ElmtSize / sizeof (long);
	 if (i) do {
	    * Target ++ = * Source ++;
	 } while (-- i > 0);
      }

      Free (* ElmtCount * ElmtSize, * ArrayPtr);
      * ElmtCount = NewCount;
      * ArrayPtr = NewPtr;
   }

void ReleaseArray
# ifdef HAVE_ARGS
   (char * * ArrayPtr, unsigned long * ElmtCount, unsigned long ElmtSize)
# else
   (ArrayPtr, ElmtCount, ElmtSize)
   char * *	ArrayPtr	;
   unsigned long * ElmtCount	;
   unsigned long ElmtSize	;
# endif
   {
      ElmtSize = AlignedSize (ElmtSize);
      Free (* ElmtCount * ElmtSize, * ArrayPtr);
   }
