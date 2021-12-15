/* $Id: DynArray.c,v 1.10 1995/06/26 15:59:41 grosch rel $ */

/* $Log: DynArray.c,v $
 */

/* Ich, Doktor Josef Grosch, Informatiker, June 1995/April 2006 */

static char rcsid [] =
   "$Id: DynArray.c,v 1.10 1995/06/26 15:59:41 grosch rel $";

# include "ratc.h"
# include "DynArray.h"
# include <stdio.h>
# include "General.h"
# include "rMemory.h"

static	unsigned long	MinSizeSmallBlock = Max (sizeof (long *), yyMaxAlign);

/* INVARIANT ElmtCount * AlignedSize (ElmtSize) % sizeof (long) == 0 */

static unsigned long AlignedSize (unsigned long ElmtSize)
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
   (char * * ArrayPtr, unsigned long * ElmtCount, unsigned long ElmtSize)
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
   (char * * ArrayPtr, unsigned long * OldElmtCount,
   unsigned long NewElmtCount, unsigned long ElmtSize)
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
	 register long * Source	= (long *) * ArrayPtr;
	 register long * Target	= (long *) NewPtr;
	 register long	 i	= * OldElmtCount * ElmtSize / sizeof (long);
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
   (char * * ArrayPtr, unsigned long * ElmtCount, unsigned long ElmtSize)
{
   ResizeArray (ArrayPtr, ElmtCount, * ElmtCount * 2, ElmtSize);
}

void ShrinkArray
   (char * * ArrayPtr, unsigned long * ElmtCount, unsigned long ElmtSize)
{
		char *	NewPtr	;
   unsigned	long	NewCount= (* ElmtCount) / 2;

   ElmtSize = AlignedSize (ElmtSize);
   NewPtr = Alloc (NewCount * ElmtSize);

   if (NewPtr != NULL) {
      register	long *	Source	= (long *) * ArrayPtr;
      register	long *	Target	= (long *) NewPtr;
      register	long	i	= NewCount * ElmtSize / sizeof (long);
      if (i) do {
	 * Target ++ = * Source ++;
      } while (-- i > 0);
   }

   Free (* ElmtCount * ElmtSize, * ArrayPtr);
   * ElmtCount = NewCount;
   * ArrayPtr = NewPtr;
}

void ReleaseArray
   (char * * ArrayPtr, unsigned long * ElmtCount, unsigned long ElmtSize)
{
   ElmtSize = AlignedSize (ElmtSize);
   Free (* ElmtCount * ElmtSize, * ArrayPtr);
}
