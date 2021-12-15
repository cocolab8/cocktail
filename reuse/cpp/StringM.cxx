/* $Id: StringM.c,v 1.23 1995/05/09 13:53:42 grosch rel $ */

/* $Log: StringM.c,v $
 */

/* Ich, Doktor Josef Grosch, Informatiker, June 1995/August 2000 */

static char rcsid [] =
   "$Id: StringM.c,v 1.23 1995/05/09 13:53:42 grosch rel $";

# include "StringM.h"
# include <stddef.h>
# include "rString.h"
# include "General.h"
# include "rMemory.h"
# include "Position.h"
# include "Errors.h"
# include "Global.h"

# ifdef _MSC_VER
#  pragma warning (disable:4127 4505 4514 4769)
# endif

struct lBlock {
   struct lBlock *	Next;
   tStringRef		Last;
   uint32_t		BlockSize;
};

tStringRef StringM::PutString (register const char * string)
{
   return PutString (string, (int32_t) strlen (string));
}

tStringRef StringM::PutString (register const char * string,
			       register uint32_t length)
{
   register char *	stringReg;
   register uint32_t	NeededSpace	= (length + 4) & 0xfffffffe;
	       /* add 2 bytes for length and 1 byte for terminating null char */
	       /* align on 2 byte boundary */
   register tStringRef	StartPtr;

   if (MemorySpaceLeft < NeededSpace) {
      tBlock * BlockPtr;
      if (BlockList) {
      /* this would produce 'Speicherverschnitt'
	 char * FreePtr = (char *) yyAlignedSize ((long) MemoryFreePtr);
	 long Rest = MemorySpaceLeft - (FreePtr - (char *) MemoryFreePtr);
	 if (Rest >= (long) sizeof (char *)) {
	    Free ((unsigned long) Rest, FreePtr);
	    BlockList->BlockSize -= Rest;
	 }
      */
	 BlockList->Last = MemoryFreePtr;
      }
      MemorySpaceLeft = Max (NeededSpace, yyMemorySize);
      BlockPtr = (tBlock *) Alloc (MemorySpaceLeft + sizeof (struct lBlock));
      BlockPtr->BlockSize = MemorySpaceLeft;
      BlockPtr->Next = BlockList;
      BlockList = BlockPtr;
      MemoryFreePtr = (tStringRef) BlockPtr->Memory;
   }
   StartPtr = MemoryFreePtr;
   * StartPtr = (unsigned short) length;
   stringReg = (char *) MemoryFreePtr + sizeof (unsigned short);
   while (length -- > 0) * stringReg ++ = * string ++;
   * stringReg = '\0';
   MemorySpaceLeft -= NeededSpace;
   MemoryFreePtr   += NeededSpace >> 1;
   return StartPtr;
}

void StringM::StGetString (register tStringRef stringref,
			   register char * string)
{
   memcpy (string, StGetCStr (stringref), StLength (stringref));
   string [StLength (stringref)] = '\0';
}

rbool StringM::IsEqualSt (tStringRef stringref, register const char * string)
{
   register int32_t	length	  = LengthSt (stringref);
   register char *	stringReg = StGetCStr (stringref);

   while (length -- > 0)
      if (* stringReg ++ != * string ++)
	 return rfalse;
   return rtrue;
}

void StringM::WriteString (FILE * file, tStringRef stringref)
{
   if (stringref) {
      fputs (StGetCStr (stringref), file);
   } else {
      ErrorsObj->ErrorMessage (xxStringUndefined, xxError, NoPosition);
   }
}

# if HAVE_WCHAR_T

tWStringRef StringM::PutString (register const wchar_t * string)
{
   return PutString (string, (int32_t) wcslen (string));
}

tWStringRef StringM::PutString (register const wchar_t * string,
				register uint32_t length)
{
   register tWStringRef		StartPtr;
   register wchar_t *		stringReg;
   uint32_t		    LengthInBytes = (length + 1) * sizeof (wchar_t) + 2;
   register uint32_t		NeededSpace = LengthInBytes;
			/* Add 2 bytes for length and sizeof (wchar_t) bytes
			 * for terminating null character. Alignment:
			 * if (sizeof (wchar_t) == 2) on 2 byte boundary
			 * if (sizeof (wchar_t) == 4) on 4 byte boundary + 2
			 */

   if (sizeof (wchar_t) == 4 && ((intptr_t) MemoryFreePtr & 0x00000002) == 0) {
      NeededSpace += 2;
   }
   if (MemorySpaceLeft < NeededSpace) {
      tBlock * BlockPtr;
      if (BlockList) BlockList->Last = MemoryFreePtr;
      NeededSpace = LengthInBytes + 2;
      MemorySpaceLeft = Max (NeededSpace, yyMemorySize);
      BlockPtr = (tBlock *) Alloc (MemorySpaceLeft + sizeof (struct lBlock));
      BlockPtr->BlockSize = MemorySpaceLeft;
      BlockPtr->Next = BlockList;
      BlockList = BlockPtr;
      MemoryFreePtr = (tStringRef) BlockPtr->Memory;
   }
   StartPtr = MemoryFreePtr;
   if (sizeof (wchar_t) == 4 && ((intptr_t) StartPtr & 0x00000002) == 0) {
      StartPtr ++;
   }
   * StartPtr = (unsigned short) length;
   stringReg = (wchar_t *) ((char*) StartPtr + sizeof (unsigned short));
   while (length -- > 0) * stringReg ++ = * string ++;
   * stringReg = L'\0';
   MemorySpaceLeft -= NeededSpace;
   MemoryFreePtr   += NeededSpace >> 1;
   return StartPtr;
}

void StringM::StGetString (register tWStringRef stringref,
			   register wchar_t * string)
{
# if defined _MSC_VER && _MSC_VER < 1400
   wcscpy (string, StGetWCStr (stringref));
# else
   wmemcpy (string, StGetWCStr (stringref), StLength (stringref));
   string [StLength (stringref)] = L'\0';
# endif
}

rbool StringM::IsEqualSt (tWStringRef stringref,
			  register const wchar_t * string)
{
   register long	length	  = LengthSt (stringref);
   register wchar_t *	stringReg = StGetWCStr (stringref);

   while (length -- > 0)
      if (* stringReg ++ != * string ++)
	 return rfalse;
   return rtrue;
}

void StringM::WriteWString (FILE * file, tWStringRef stringref)
{
   if (stringref) {
      fprintf (file, "%ls", StGetWCStr (stringref));
   } else {
      ErrorsObj->ErrorMessage (xxStringUndefined, xxError, NoPosition);
   }
}

# endif
void StringM::WriteStringMemory (void)
{
# ifndef _USRDLL
   tBlock *	BlockPtr = BlockList;
   ptrdiff_t	BlockSize = 0;

   if (BlockPtr) BlockPtr->Last = MemoryFreePtr;
   while (BlockPtr) {
      tStringRef StringPtr = (tStringRef) BlockPtr->Memory;
      BlockSize += (char *) BlockPtr->Last - (char *) StringPtr;

      while (StringPtr < BlockPtr->Last) {
	 long length = LengthSt (StringPtr) + 3;
	 printf ("%16p %s\n", StringPtr, StGetCStr (StringPtr));
	 if (length & 1) length ++;
	 StringPtr += length >> 1;
      }
      BlockPtr = BlockPtr->Next;
   }
   printf ("\n%5ld Bytes\n", (long) BlockSize);
# endif
}

void StringM::InitStringMemory (void)
{
   FreeStringMemory ();
}

void StringM::FreeStringMemory (void)
{
   while (BlockList) {
      register tBlock * Next = BlockList->Next;
      Free (BlockList->BlockSize + sizeof (struct lBlock), (char *) BlockList);
      BlockList = Next;
   }
   MemorySpaceLeft = 0;
}

StringM::StringM (void)
{
   ErrorsObj		= & gErrors;
   BlockList		= NULL;
   MemorySpaceLeft	= 0;
   NoString		= PutString ("");
# if HAVE_WCHAR_T
   NoWString		= PutString (L"");
# endif
}

StringM::~StringM (void)
{
   FreeStringMemory ();
}
