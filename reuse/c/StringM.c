/* $Id: StringM.c,v 1.45 2008/10/02 09:26:04 grosch Exp $ */

/*
 * $Log: StringM.c,v $
 * Revision 1.45  2008/10/02 09:26:04  grosch
 * added typecasts to (void *) at printf with %p
 *
 * Revision 1.44  2008/09/12 14:14:04  grosch
 * improved support for 64 bit machines (added rIntType.h)
 * removed type casts to (void)
 *
 * Revision 1.43  2007/10/12 09:14:20  grosch
 * fixed bug in function PutWString related to storage allocation and alignment
 *
 * Revision 1.42  2006/04/07 19:45:53  grosch
 * removed some const specifiers
 * added parentheses around macro parameters
 *
 * Revision 1.41  2001/12/04 16:41:05  grosch
 * fixed bug in function PutWString
 *
 * Revision 1.40  2001/06/20 08:49:37  grosch
 * made StGetString work for nul bytes again
 *
 * Revision 1.39  2001/01/28 15:05:29  grosch
 * unified treatment of include file wchar.h
 *
 * Revision 1.38  2001/01/24 17:03:46  grosch
 * modified treatment of wchar.h for Solaris
 *
 * Revision 1.37  2000/12/28 13:44:10  grosch
 * made # include "wchar.h" conditional
 *
 * Revision 1.36  2000/09/13 12:50:35  grosch
 * fixed bug in PutWString
 *
 * Revision 1.35  2000/09/04 13:39:34  grosch
 * added support for wide character strings
 *
 * Revision 1.34  2000/08/18 17:31:21  grosch
 * added const to char *
 *
 * Revision 1.33  2000/04/10 16:04:01  grosch
 * introduced ifdef HAVE_ARGS
 * renamed Size to BlockSize
 * added function PutString1
 *
 * Revision 1.31  1997/12/16 18:08:39  grosch
 * tribute to MS VC++ 5.0
 *
 * Revision 1.30  1997/12/05 12:44:46  grosch
 * added function CloseStringMemory
 *
 * Revision 1.29  1997/11/30 22:31:05  grosch
 * eliminated use of type cardinal
 * added function StGetCStr
 * added null character to strings
 *
 * Revision 1.28  1997/05/27 13:25:04  grosch
 * truncation of filenames to 8.3 format
 *
 * Revision 1.27  1997/05/06 10:16:44  grosch
 * fixed problem of adjusting Size when calling Free
 * disabled Free because of Speicherverschnitt
 *
 * Revision 1.26  1997/04/08 13:37:48  grosch
 * added prefix yy to MemorySize
 *
 * Revision 1.25  1996/08/14  10:37:24  grosch
 * adaption to DLL's for Microsoft Visual C++
 *
 * Revision 1.24  1996/06/05  12:00:48  grosch
 * adaption to MS VC++
 *
 * Revision 1.23  1995/05/09  13:53:42  grosch
 * added void to argument list of functions without arguments
 *
 * Revision 1.22  1995/03/20  15:37:30  grosch
 * truncate lines to at most 80 characters
 *
 * Revision 1.21  1995/02/23  20:11:46  grosch
 * renamed Positions to Position, StringMem to StringM, Relations to Relation
 * output lines with at most 132 characters
 *
 * Revision 1.20  1994/12/31  09:51:40  grosch
 * adaption to HP cc
 *
 * Revision 1.19  1994/12/04  19:29:55  grosch
 * added ANSI-C prototypes
 *
 * Revision 1.18  1994/11/07  12:39:10  grosch
 * fixed bug at freeing of rest of memory block
 *
 * Revision 1.17  1994/06/13  09:37:20  grosch
 * fix alignment for DEC Alpha
 *
 * Revision 1.16  1994/04/05  09:00:35  grosch
 * added prefix 'r' to true and false for improved portability
 *
 * Revision 1.15  1994/01/29  22:13:50  grosch
 * renamed bool to rbool
 *
 * Revision 1.14  1993/10/28  13:34:32  grosch
 * improved storage allocation and alignment handling
 *
 * Revision 1.13  1993/08/18  15:01:05  grosch
 * rename System and Memory to rSystem and rMemory
 *
 * Revision 1.12  1993/01/16  11:22:26  grosch
 * adaption to machines where int takes 2-bytes
 *
 * Revision 1.11  1992/05/05  13:19:05  grosch
 * added rcsid
 *
 * Revision 1.10  1992/02/18  12:52:30  grosch
 * changed tString from unsigned char * to char *
 *
 * Revision 1.9  1992/01/31  16:31:44  grosch
 * adaption to ANSI C
 *
 * Revision 1.8  1992/01/30  13:12:51  grosch
 * complete redesign: pointer instead of array index
 *
 * Revision 1.7  1992/01/14  15:24:35  grosch
 * introduced automatic initialization
 *
 * Revision 1.6  1991/11/21  14:28:16  grosch
 * new version of RCS on SPARC
 *
 * Revision 1.5  91/07/17  17:23:46  grosch
 * introduced ARGS trick for ANSI compatibility
 *
 * Revision 1.4  91/01/21  12:13:25  grosch
 * some performance improvements
 *
 * Revision 1.3  90/09/20  09:12:28  grosch
 * calmed down lint
 *
 * Revision 1.2  90/07/04  14:34:07  grosch
 * introduced conditional include
 *
 * Revision 1.1  89/08/23  16:04:27  grosch
 * bug fix in PutString: stringReg initialized later
 *
 * Revision 1.0  88/10/04  11:44:47  grosch
 * Initial revision
 *
 */

/* Ich, Doktor Josef Grosch, Informatiker, Sept. 1987/August 2000 */

static char rcsid [] =
   "$Id: StringM.c,v 1.45 2008/10/02 09:26:04 grosch Exp $";

# include "StringM.h"
# if HAVE_STDDEF_H
#  include <stddef.h>
# endif
# include "rString.h"
# include "General.h"
# include "rMemory.h"
# include "Errors.h"

# define yyMemorySize	1024 * 20

# ifdef _MSC_VER
#  pragma warning (disable:4127)
# endif

typedef struct sBlock {
   struct sBlock *	Next;
   tStringRef		Last;
   uint32_t		BlockSize;
   char			Memory [yyMemorySize];
} tBlock;

struct lBlock {
   struct lBlock *	Next;
   tStringRef		Last;
   uint32_t		BlockSize;
};

static	tBlock *	BlockList	= NULL;
static	uint32_t	MemorySpaceLeft	= 0;
static	tStringRef	MemoryFreePtr;

static	struct { unsigned short length; char ch; } no_string = { 0, '\0' };
	tStringRef	NoString	= & no_string.length;

# if HAVE_WCHAR_T
static	struct {
	  uint32_t	dummy1;		/* align on 4 byte boundary	*/
	  uint16_t	dummy2;		/* align on 4 byte boundary + 2 */
	  unsigned short length;
	  wchar_t	ch;
	} no_w_string	= { 0, 0, 0, L'\0' };

	tWStringRef	NoWString	= & no_w_string.length;
# endif

tStringRef PutString1
# ifdef HAVE_ARGS
   (register const char * string)
# else
   (string) register char * string;
# endif
   {
      return PutString (string, (int32_t) strlen (string));
   }

tStringRef PutString
# ifdef HAVE_ARGS
   (register const char * string, register uint32_t length)
# else
   (string, length) register char * string; register uint32_t length;
# endif
   {
      register char *	stringReg;
      register uint32_t	NeededSpace = (length + 4) & 0xfffffffe;
	       /* add 2 bytes for length and 1 byte for terminating null char */
	       /* align on 2 byte boundary */
      register tStringRef StartPtr;

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

void StGetString
# ifdef HAVE_ARGS
   (register tStringRef stringref, register char * string)
# else
   (stringref, string) register tStringRef stringref; register char * string;
# endif
   {
      memcpy (string, StGetCStr (stringref), StLength (stringref));
      string [StLength (stringref)] = '\0';
   }

rbool IsEqualSt
# ifdef HAVE_ARGS
   (tStringRef stringref, register const char * string)
# else
   (stringref, string) tStringRef stringref; register char * string;
# endif
   {
      register int32_t	length	  = LengthSt (stringref);
      register char *	stringReg = StGetCStr (stringref);

      while (length -- > 0)
	 if (* stringReg ++ != * string ++)
	    return rfalse;
      return rtrue;
   }

void WriteString
# ifdef HAVE_ARGS
   (FILE * file, tStringRef stringref)
# else
   (file, stringref) FILE * file; tStringRef stringref;
# endif
   {
      if (stringref) {
	 fputs (StGetCStr (stringref), file);
      } else {
	 ErrorMessage (xxStringUndefined, xxError, NoPosition);
      }
   }

# if HAVE_WCHAR_T

tWStringRef PutWString1
# ifdef HAVE_ARGS
   (register const wchar_t * string)
# else
   (string) register wchar_t * string;
# endif
   {
      return PutWString (string, (int32_t) wcslen (string));
   }

tWStringRef PutWString
# ifdef HAVE_ARGS
   (register const wchar_t * string, register uint32_t length)
# else
   (string, length) register wchar_t * string; register uint32_t length;
# endif
   {
      register tWStringRef	StartPtr;
      register wchar_t *	stringReg;
      uint32_t		    LengthInBytes = (length + 1) * sizeof (wchar_t) + 2;
      register uint32_t		NeededSpace = LengthInBytes;
			/* Add 2 bytes for length and sizeof (wchar_t) bytes
			 * for terminating null character. Alignment:
			 * if (sizeof (wchar_t) == 2) on 2 byte boundary
			 * if (sizeof (wchar_t) == 4) on 4 byte boundary + 2
			 */

      if (sizeof (wchar_t) == 4 && ((intptr_t) MemoryFreePtr & 0x00000002) == 0)
      {
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
      stringReg = (wchar_t *) ((char *) StartPtr + sizeof (unsigned short));
      while (length -- > 0) * stringReg ++ = * string ++;
      * stringReg = L'\0';
      MemorySpaceLeft -= NeededSpace;
      MemoryFreePtr   += NeededSpace >> 1;
      return StartPtr;
   }

void StGetWString
# ifdef HAVE_ARGS
   (register tWStringRef stringref, register wchar_t * string)
# else
   (stringref, string)
   register tWStringRef stringref; register wchar_t * string;
# endif
   {
# if defined _MSC_VER && _MSC_VER < 1400
      wcscpy (string, StGetWCStr (stringref));
# else
      wmemcpy (string, StGetWCStr (stringref), StLength (stringref));
      string [StLength (stringref)] = L'\0';
# endif
   }

rbool WIsEqualSt
# ifdef HAVE_ARGS
   (tWStringRef stringref, register const wchar_t * string)
# else
   (stringref, string) tWStringRef stringref; register wchar_t * string;
# endif
   {
      register long	length	   = LengthSt (stringref);
      register wchar_t * stringReg = StGetWCStr (stringref);

      while (length -- > 0)
	 if (* stringReg ++ != * string ++)
	    return rfalse;
      return rtrue;
   }

void WriteWString
# ifdef HAVE_ARGS
   (FILE * file, tWStringRef stringref)
# else
   (file, stringref) FILE * file; tWStringRef stringref;
# endif
   {
      if (stringref) {
	 fprintf (file, "%ls", StGetWCStr (stringref));
      } else {
	 ErrorMessage (xxStringUndefined, xxError, NoPosition);
      }
   }

# endif

void WriteStringMemory ARGS ((void))
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
	    printf ("%16p %s\n", (void *) StringPtr, StGetCStr (StringPtr));
	    if (length & 1) length ++;
	    StringPtr += length >> 1;
	 }
	 BlockPtr = BlockPtr->Next;
      }
      printf ("\n%5ld Bytes\n", (long) BlockSize);
# endif
   }

void InitStringMemory ARGS ((void))
   {
      BlockList		= NULL;
      MemorySpaceLeft	= 0;
   }

void CloseStringMemory ARGS ((void))
   {
      register tBlock * Next;
      while (BlockList) {
	 Next = BlockList->Next;
	 Free (BlockList->BlockSize + sizeof (struct lBlock), (char *) BlockList);
	 BlockList = Next;
      }
      InitStringMemory ();
   }
