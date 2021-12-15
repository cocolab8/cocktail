/* $Id: rMemory.c,v 1.42 2008/10/10 13:00:23 grosch Exp $ */

/*
 * $Log: rMemory.c,v $
 * Revision 1.42  2008/10/10 13:00:23  grosch
 * fixed function ResizeArray: do not free blocks smaller than MinSizeSmallBlock
 *
 * Revision 1.41  2008/10/02 09:26:04  grosch
 * added typecasts to (void *) at printf with %p
 *
 * Revision 1.40  2008/09/12 14:14:32  grosch
 * improved support for 64 bit machines (added rIntType.h)
 * removed type casts to (void)
 *
 * Revision 1.39  2007/10/12 09:18:33  grosch
 * improved function WriterMemory
 *
 * Revision 1.38  2006/11/15 15:04:42  grosch
 * fixed performance problem
 *
 * Revision 1.37  2005/05/23 12:26:27  grosch
 * changed #include <config.h> to #include "config.h"
 *
 * Revision 1.36  2004/07/06 13:40:57  grosch
 * improved debug output
 *
 * Revision 1.35  2002/02/13 21:16:10  grosch
 * made code for malloc and free work with C++
 *
 * Revision 1.34  2001/01/04 20:53:39  grosch
 * fixed format for long value
 *
 * Revision 1.33  2000/09/04 13:45:09  grosch
 * fixed bug: MinSizeSmallBlock has to be >= MaxAlign
 * moved message texts to Errors.c
 * added variant USE_MALLOC_FREE
 *
 * Revision 1.32  2000/04/10 16:05:19  grosch
 * cosmetic changes
 * introduced ifdef HAVE_ARGS
 * tribute to MSVC++ 1.52
 *
 * Revision 1.31  2000/02/18 14:17:35  grosch
 * added debugging output
 *
 * Revision 1.30  1999/12/10 21:47:10  grosch
 * improved rMemory to handle blocks larger 16 MB
 *
 * Revision 1.29  1999/06/16 15:18:33  grosch
 * satisfy AIX xlC_r -+
 *
 * Revision 1.28  1999/01/21 10:28:58  grosch
 * added exception handling to reuse library
 *
 * Revision 1.27  1998/11/11 15:50:36  grosch
 * made BeginrMemory work for alignment of 1
 *
 * Revision 1.26  1998/04/04 10:11:01  grosch
 * renamed WriteMemory to WriterMemory
 *
 * Revision 1.25  1997/12/16 18:08:39  grosch
 * tribute to MS VC++ 5.0
 *
 * Revision 1.24  1997/11/30 22:31:56  grosch
 * eliminated use of type cardinal
 * added function CloserMemory
 *
 * Revision 1.23  1997/05/27 13:25:04  grosch
 * truncation of filenames to 8.3 format
 *
 * Revision 1.22  1996/09/17 08:57:48  grosch
 * added procedure WriteMemory
 *
 * Revision 1.21  1996/06/05  12:00:48  grosch
 * adaption to MS VC++
 *
 * Revision 1.20  1995/05/09  13:53:42  grosch
 * added void to argument list of functions without arguments
 *
 * Revision 1.19  1995/03/20  15:37:30  grosch
 * truncate lines to at most 80 characters
 *
 * Revision 1.18  1994/12/31  09:51:40  grosch
 * adaption to HP cc
 *
 * Revision 1.17  1994/12/04  19:29:55  grosch
 * added ANSI-C prototypes
 *
 * Revision 1.16  1994/06/13  09:37:20  grosch
 * fix alignment for DEC Alpha
 *
 * Revision 1.15  1993/10/28  13:34:32  grosch
 * improved storage allocation and alignment handling
 *
 * Revision 1.14  1993/08/18  15:01:05  grosch
 * rename System and Memory to rSystem and rMemory
 *
 * Revision 1.13  1992/06/24  12:23:15  grosch
 * changed cNoMoreSpace from -1 to 0
 *
 * Revision 1.12  1992/05/05  13:19:05  grosch
 * added rcsid
 *
 * Revision 1.11  1992/01/31  16:31:44  grosch
 * adaption to ANSI C
 *
 * Revision 1.10  1992/01/30  13:16:06  grosch
 * redesign of interface to operating system
 *
 * Revision 1.9  1992/01/14  15:24:35  grosch
 * introduced automatic initialization
 *
 * Revision 1.8  1991/11/21  14:28:16  grosch
 * new version of RCS on SPARC
 *
 * Revision 1.7  91/01/21  12:13:22  grosch
 * some performance improvements
 *
 * Revision 1.6  90/12/14  15:55:52  grosch
 * introduced variable MemoryUsed
 *
 * Revision 1.5  90/09/14  11:20:46  grosch
 * removed superfluous declarations for automatic alignment
 *
 * Revision 1.4  90/09/04  17:32:10  grosch
 * automatic determination of alignment
 *
 * Revision 1.3  90/07/04  14:33:58  grosch
 * introduced conditional include
 *
 * Revision 1.2  89/12/08  20:16:43  grosch
 * added alignment for MIPS processor
 *
 * Revision 1.1  89/06/06  10:28:54  grosch
 * fixed lint problem at call of Free
 *
 * Revision 1.0  88/10/04  11:44:41  grosch
 * Initial revision
 *
 */

/* Ich, Doktor Josef Grosch, Informatiker, Sept. 1987 */

static char rcsid [] =
   "$Id: rMemory.c,v 1.42 2008/10/10 13:00:23 grosch Exp $";

# include "rMemory.h"
# include <stdio.h>
# include "config.h"
# if HAVE_STDLIB_H
#  include <stdlib.h>
# endif
# if HAVE_STDDEF_H
#  include <stddef.h>
# endif
# include "rSystem.h"
# include "General.h"
# include "Errors.h"

# define MaxSizeSmallBlock	63	/* 64 - 1	*/
# define MinSizeLargeBlockLog	6	/* Log2 64	*/
# define MaxSizeLargeBlockLog	1024	/* Log2 2**32 * 32 */
# define PoolSize		16384L
# define NIL			(tBlockPtr) NULL

# if defined _MSC_VER
#  pragma warning (disable:4706)	/* assignment in conditional expr */
# endif

	unsigned long	MemoryUsed = 0;

struct tBlock {
   struct tBlock *	Successor;
   unsigned long	Size;
};
typedef struct tBlock *	tBlockPtr;
typedef unsigned int	tSmallBlockRange;
typedef unsigned int	tLargeBlockRange;

static	unsigned long	MinSizeSmallBlock =
				Max (sizeof (tBlockPtr), yyMaxAlign);

static	tBlockPtr	SmallChain [MaxSizeSmallBlock    + 1] = { 0,
   NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL,
   NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL,
   NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL,
   NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL,
   NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL,
   NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL,
   NIL, NIL, NIL,
};
static	tBlockPtr	LargeChain [MaxSizeLargeBlockLog + 1] = { 0,
 NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL,
 NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL,
 NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL,
 NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL,
 NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL,
 NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL,
 NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL,
 NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL,
 NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL,
 NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL,
 NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL,
 NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL,
 NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL,
 NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL,
 NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL,
 NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL,
 NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL,
 NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL,
 NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL,
 NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL,
 NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL,
 NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL,
 NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL,
 NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL,
 NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL,
 NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL,
 NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL,
 NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL,
 NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL,
 NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL,
 NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL,
 NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL,
 NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL,
 NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL,
 NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL,
 NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL,
 NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL,
 NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL,
 NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL,
 NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL,
 NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL,
 NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL,
 NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL,
 NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL,
 NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL,
 NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL,
 NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL,
 NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL,
 NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL,
 NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL,
 NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL,
 NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL,
 NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL,
 NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL,
 NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL,
 NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL,
 NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL,
 NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL,
 NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL,
 NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL,
 NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL,
 NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL,
 NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL,
 NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL, NIL,
};
static	char *		PoolFreePtr = 0;
static	char *		PoolEndPtr  = 0;
static	tBlockPtr	BlockList   = NULL;

/* # define USE_MALLOC_FREE */

# ifdef USE_MALLOC_FREE

char * Alloc
# ifdef HAVE_ARGS
   (register unsigned long ByteCount)
# else
   (ByteCount) register unsigned long ByteCount;
# endif
{
# define Alloc hide_Alloc
   MemoryUsed += ByteCount;
   return (char *) malloc (ByteCount);
/*
   char * result = (char *) malloc (ByteCount);
   MemoryUsed += ByteCount;
   printf ("Alloc	%8ld	%08lx\n", ByteCount, result);
   return result;
*/
}

void Free
# ifdef HAVE_ARGS
   (unsigned long ByteCount, const char * a)
# else
   (ByteCount, a) unsigned long ByteCount; char * a;
# endif
{
# ifdef _MSC_VER
#  define rmFree hide_Free
# else
#  define Free hide_Free
# endif
/* printf ("Free	%8ld	%08lx\n", ByteCount, a); */
   MemoryUsed -= ByteCount;
   free ((void *) a);
}

void hide_Free (unsigned long ByteCount, const char * a);

# endif

# ifdef DEBUG_MEMORY

char * Alloc
# ifdef HAVE_ARGS
   (register unsigned long ByteCount)
# else
   (ByteCount) register unsigned long ByteCount;
# endif
{
# define Alloc dbgAlloc
   char * Alloc (unsigned long);
   char * result = Alloc (ByteCount);
   printf ("Alloc	%8ld	%08lx\n", ByteCount, result);
   return result;
}

void dbgFree (unsigned long ByteCount, const char * a);

void Free
# ifdef HAVE_ARGS
   (unsigned long ByteCount, const char * a)
# else
   (ByteCount, a) unsigned long ByteCount; char * a;
# endif
{
# define Free dbgFree
   printf ("Free	%8ld	%08lx\n", ByteCount, a);
   Free (ByteCount, a);
}

# endif

static void FreeRest
# ifdef HAVE_ARGS
   (ptrdiff_t ByteCount, const char * a)
# else
   (ByteCount, a) ptrdiff_t ByteCount; char * a;
# endif
{
   if (ByteCount < (ptrdiff_t) MinSizeSmallBlock) return;
   if (ByteCount <= MaxSizeSmallBlock) {
      Free (ByteCount, a);
   } else {
      unsigned int ld2	= (unsigned int) Log2 (ByteCount);
      unsigned int step	= 1 << (ld2 - 5);
      unsigned int plus	= step - 1;
      unsigned int rounded = ByteCount & ~ plus;
      Free (rounded, a);
      FreeRest (ByteCount - rounded, a + rounded);
   }
}

char * Alloc
# ifdef HAVE_ARGS
   (register unsigned long ByteCount)
# else
   (ByteCount) register unsigned long ByteCount;
# endif

/* Returns a pointer to dynamically allocated	*/
/* space of size 'ByteCount' bytes.		*/

{
   ByteCount = yyAlignedSize (ByteCount);

   if (ByteCount <= MaxSizeSmallBlock) {	/* handle small block */
      if (ByteCount < MinSizeSmallBlock) ByteCount = MinSizeSmallBlock;
      if (SmallChain [ByteCount]) {		/* obtain block from freelist */
	 register tBlockPtr CurrentBlock = SmallChain [ByteCount];
	 SmallChain [ByteCount] = CurrentBlock->Successor;
	 return (char *) CurrentBlock;
      } else {				/* obtain block from storage pool */
	 register ptrdiff_t	FreeBytes;
	 register char *	PrevFreePtr;
						/* release old pool */
	 if ((FreeBytes = PoolEndPtr - PoolFreePtr) < (ptrdiff_t) ByteCount) {
	    FreeRest (FreeBytes, PoolFreePtr);
	    PoolFreePtr = Alloc (PoolSize);	/* allocate new pool */
	    PoolEndPtr  = PoolFreePtr + PoolSize;
	 }
	 PrevFreePtr = PoolFreePtr;
	 PoolFreePtr += ByteCount;
	 return PrevFreePtr;
      }
   } else {					/* handle large block */

      /* 1. search in LargeChain for ByteCount */

      tLargeBlockRange ChainNumber, i;
      register tBlockPtr CurrentBlock;
      unsigned int ld2	= (unsigned int) Log2 (ByteCount);
      unsigned int step	= 1 << (ld2 - 5);
      unsigned int plus	= step - 1;
      ByteCount		= (ByteCount + plus) & ~ plus;
      ChainNumber	= (ld2 << 5) + ((ByteCount - (1 << ld2)) >> (ld2 - 5));
      CurrentBlock	= LargeChain [ChainNumber];

      if (CurrentBlock) {			/* obtain block from freelist */
	 LargeChain [ChainNumber] = CurrentBlock->Successor;
	 return (char *) CurrentBlock;
      }

      /* 2. search in greater LargeChains */

      for (i = ChainNumber + 1; i <= MaxSizeLargeBlockLog; i ++) {
	 if ((CurrentBlock = LargeChain [i])) {
	    LargeChain [i] = CurrentBlock->Successor;
	    FreeRest (CurrentBlock->Size - ByteCount,
	      (char *) CurrentBlock + ByteCount);
	    return (char *) CurrentBlock;
	 }
      }

      if (ByteCount < PoolSize) {	/* 3. obtain block from storage pool */
	 register ptrdiff_t	FreeBytes;
	 register char *	PrevFreePtr;
						/* release old pool */
	 if ((FreeBytes = PoolEndPtr - PoolFreePtr) < (ptrdiff_t) ByteCount) {
	    FreeRest (FreeBytes, PoolFreePtr);
	    PoolFreePtr = Alloc (PoolSize);	/* allocate new pool */
	    PoolEndPtr  = PoolFreePtr + PoolSize;
	 }
	 PrevFreePtr = PoolFreePtr;
	 PoolFreePtr += ByteCount;
	 return PrevFreePtr;
      } else {				/* 4. allocate individual block */
	 ByteCount += sizeof (double);
	 CurrentBlock = (tBlockPtr) rAlloc ((long) ByteCount);
	 if (CurrentBlock) {
	    CurrentBlock->Successor = BlockList;
	    BlockList = CurrentBlock;
	    MemoryUsed += ByteCount;
	    return (char *) CurrentBlock + sizeof (double);
	 } else {
	    ErrorMessageI (xxAllocOutOfMemory, xxFatal, NoPosition, xxUSLong,
	       (char *) & MemoryUsed);
	    Reuse_Exit ();
	    return (char *) 0;
	 }
      }
   }
}

void Free
# ifdef HAVE_ARGS
   (unsigned long ByteCount, const char * a)
# else
   (ByteCount, a) unsigned long ByteCount; char * a;
# endif

/* The dynamically allocated space starting at	*/
/* address 'a' of size 'ByteCount' bytes is	*/
/* released.					*/

{
   register tBlockPtr BlockPtr = (tBlockPtr) a;

   ByteCount = yyAlignedSize (ByteCount);

   if (ByteCount <= MaxSizeSmallBlock) {
      if (ByteCount < MinSizeSmallBlock) ByteCount = MinSizeSmallBlock;
      BlockPtr->Successor	= SmallChain [ByteCount];
      SmallChain [ByteCount]	= BlockPtr;
   } else {
      register tLargeBlockRange	ChainNumber;
      unsigned int ld2	= (unsigned int) Log2 (ByteCount);
      unsigned int step	= 1 << (ld2 - 5);
      unsigned int plus	= step - 1;
      ByteCount		= (ByteCount + plus) & ~ plus;
      ChainNumber	= (ld2 << 5) + ((ByteCount - (1 << ld2)) >> (ld2 - 5));

      BlockPtr->Successor	= LargeChain [ChainNumber];
      BlockPtr->Size		= ByteCount;
      LargeChain [ChainNumber]	= BlockPtr;
   }
}

# ifndef _USRDLL
static rbool IsCorrupted
# ifdef HAVE_ARGS
   (tBlockPtr Ptr)
# else
   (Ptr) tBlockPtr Ptr;
# endif
{
   return (rbool) ((uintptr_t) Ptr % MinSizeSmallBlock != 0);
}
# endif

void WriterMemory ARGS ((void))
{
# ifndef _USRDLL
   tBlockPtr		BlockPtr;
   unsigned long	i;
   int			j, Count;
   ptrdiff_t		MemoryFree = PoolEndPtr - PoolFreePtr;

   printf ("PoolFreePtr, PoolEndPtr = %16p %16p\n\n",
      (void *) PoolFreePtr, (void *) PoolEndPtr);
   printf ("SmallChain:\n");
   for (i = MinSizeSmallBlock; i <= MaxSizeSmallBlock; i ++) {
      Count = 0;
      BlockPtr = (tBlockPtr) SmallChain [i];
      if (BlockPtr) {
	 printf ("%2ld:", i);
	 for (;;) {
	    if (BlockPtr == NIL) break;
	    if (Count == 8) { printf ("\n    "); Count = 0; }
	    Count ++;
	    printf (" %16p", (void *) BlockPtr);
	    MemoryFree += i;
	    if (IsCorrupted (BlockPtr)) { printf (" <="); break; }
	    BlockPtr = BlockPtr->Successor;
	 }
	 printf ("\n");
      }
   }
   printf ("\nLargeChain:\n");
   for (j = MinSizeLargeBlockLog; j <= MaxSizeLargeBlockLog; j ++) {
      Count = 0;
      BlockPtr = (tBlockPtr) LargeChain [j];
      if (BlockPtr) {
	 printf ("%2d:", j);
	 for (;;) {
	    if (BlockPtr == NIL) break;
	    if (Count == 5) { printf ("\n    "); Count = 0; }
	    Count ++;
	    printf (" %16p", (void *) BlockPtr);
	    if (IsCorrupted (BlockPtr)) { printf (" <="); break; }
	    MemoryFree += BlockPtr->Size;
	    printf (" %6ld", BlockPtr->Size);
	    BlockPtr = BlockPtr->Successor;
	 }
	 printf ("\n");
      }
   }
   printf ("\nMemoryFree = %ld\n\n", (long) MemoryFree);
# endif
}

void InitrMemory ARGS ((void))
{
   register unsigned long i;

   for (i = MinSizeSmallBlock; i <= MaxSizeSmallBlock; i ++) {
      SmallChain [i] = NIL;
   }
   for (i = MinSizeLargeBlockLog; i <= MaxSizeLargeBlockLog; i ++) {
      LargeChain [i] = NIL;
   }
   MemoryUsed	= 0;
   PoolFreePtr	= 0;
   PoolEndPtr	= 0;
   BlockList	= NULL;
}

void CloserMemory ARGS ((void))
{
   while (BlockList) {
      tBlockPtr NextBlock = BlockList->Successor;
      rFree ((char *) BlockList);
      BlockList = NextBlock;
   }
   BeginrMemory ();
}
