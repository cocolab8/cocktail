/* $Id: StringBu.c,v 1.4 2008/10/09 21:03:13 grosch Exp $ */

/*
 * $Log: StringBu.c,v $
 * Revision 1.4  2008/10/09 21:03:13  grosch
 * removed superfluous semicolons (because of IBM's xlc)
 *
 * Revision 1.3  2000/09/04 14:28:37  grosch
 * removed type cardinal
 *
 * Revision 1.2  1997/05/27 21:46:44  grosch
 * truncation of filenames to 8.3 format
 *
 * Revision 1.1  1995/02/23 19:53:39  grosch
 * renamed Positions to Position, StringMem to StringM, Relations to Relation
 *
 * Revision 1.0  1993/08/17  16:15:46  grosch
 * Initial revision
 *
 */

# include "StringBu.h"
# include "DynArray.h"

# define InitialMemorySize	1024 * 16

static	char *	MemoryPtr;
static	unsigned long	MemorySize;
static	long	MemorySpaceLeft;
static	long	MemoryFreePtr;

void BufString (string)
   tString	string;
   {
      register	tString	stringReg1;
      register	tString	stringReg2	= string;
      register	short   lengthReg	= 0;
      register	long	NeededSpace;

      while (string[lengthReg++]);
      NeededSpace = lengthReg;
      while (MemorySpaceLeft < NeededSpace) {
	 long	OldMemorySize = MemorySize;

	 ExtendArray ((char * *) & MemoryPtr, & MemorySize, sizeof (char));
	 MemorySpaceLeft += MemorySize - OldMemorySize;
      }
      stringReg1 = & MemoryPtr [MemoryFreePtr];
      while (lengthReg -- > 0) {
	 * stringReg1 ++ = * stringReg2 ++;
      }
      MemorySpaceLeft -= NeededSpace;
      MemoryFreePtr   += NeededSpace;
   }


void WriteStringBuffer ()
   {
      long	StringPtr = 0;

      while (StringPtr < MemoryFreePtr) {
	 (void) printf ("%s", &MemoryPtr[StringPtr]);
	 while (MemoryPtr[StringPtr++]);
      }
   }

void InitStringBuffer ()
   {
      MemorySize	= InitialMemorySize;
      MakeArray ((char * *) & MemoryPtr, & MemorySize, sizeof (char));
      MemorySpaceLeft	= MemorySize;
      MemoryFreePtr 	= 0;
   }
