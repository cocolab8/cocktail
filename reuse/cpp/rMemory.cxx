/* $Id: rMemory.c,v 1.20 1995/05/09 13:53:42 grosch rel $ */

/*
 * $Log: rMemory.c,v $
 */

/* Ich, Doktor Josef Grosch, Informatiker, Sept. 1987 */

static char rcsid [] =
   "$Id: rMemory.c,v 1.20 1995/05/09 13:53:42 grosch rel $";

# include "rMemory.h"
# include <stdio.h>
# include <stddef.h>
# include "ratc.h"
# include "rSystem.h"
# include "General.h"
# include "Errors.h"
# include "Global.h"

# define MaxSizeSmallBlock	63	/* 64 - 1	*/
# define MinSizeLargeBlockLog	6	/* Log2 64	*/
# define MaxSizeLargeBlockLog	1024	/* Log2 2**32 * 32 */
# define PoolSize		16384L
# define NIL			(tBlockPtr) NULL

# if defined _MSC_VER
#  pragma warning (disable:4505 4514 4706 4769)
# endif

	unsigned long	MemoryUsed = 0;

struct tMemoryBlock {
   struct tMemoryBlock * Successor;
   unsigned long	Size;
};
typedef struct tMemoryBlock * tBlockPtr;
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

# ifdef DEBUG_MEMORY

char * Alloc (register unsigned long ByteCount)
{
# define Alloc dbgAlloc
   char * Alloc (unsigned long);
   char * result = Alloc (ByteCount);
   printf ("Alloc	%8ld	%16p\n", ByteCount, result);
   return result;
}

void dbgFree (unsigned long ByteCount, const char * a);

void Free (unsigned long ByteCount, const char * a)
{
# ifdef _MSC_VER
#  undef Free
# endif
# define Free dbgFree
   printf ("Free	%8ld	%16p\n", ByteCount, a);
   Free (ByteCount, a);
}

# endif

static void FreeRest (unsigned long ByteCount, const char * a)
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

char * Alloc (register unsigned long ByteCount)

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
	    gErrors.ErrorMessageI (xxAllocOutOfMemory, xxFatal, NoPosition,
	       xxUSLong, (char *) & MemoryUsed);
	    Reuse_Exit ();
	    return (char *) 0;
	 }
      }
   }
}

void Free (unsigned long ByteCount, const char * a)

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
static rbool IsCorrupted (tBlockPtr Ptr)
{
   return (rbool) ((uintptr_t) Ptr % MinSizeSmallBlock != 0);
}
# endif

void WriterMemory (void)
{
# ifndef _USRDLL
   tBlockPtr		BlockPtr;
   unsigned long	i;
   int			j, Count;
   ptrdiff_t		MemoryFree = PoolEndPtr - PoolFreePtr;

   printf ("PoolFreePtr, PoolEndPtr = %16p %16p\n\n", PoolFreePtr, PoolEndPtr);
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
	    printf (" %16p", BlockPtr);
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
	    printf (" %16p", BlockPtr);
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

void InitrMemory (void)
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

void CloserMemory (void)
{
   while (BlockList) {
      tBlockPtr NextBlock = BlockList->Successor;
      rFree ((char *) BlockList);
      BlockList = NextBlock;
   }
   BeginrMemory ();
}
