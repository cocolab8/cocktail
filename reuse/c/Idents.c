/* Id: Idents.c,v 1.35 2006/09/06 15:23:09 grosch rel $ */

/*
 * Log: Idents.c,v $
 * Revision 1.35  2006/09/06 15:23:09  grosch
 * optimized function GetLength
 *
 * Revision 1.34  2006/07/18 08:49:44  grosch
 * fixed RCS tags
 *
 * Revision 1.33  2004/07/06 14:37:32  grosch
 * fixed bug: infinite loop at xxIdentOutOfBounds
 *
 * Revision 1.32  2002/10/10 19:47:03  grosch
 * fixed bug: NoWIdent has to remain in WHashTable during Rehash
 *
 * Revision 1.31  2001/01/28 15:05:29  grosch
 * unified treatment of include file wchar.h
 *
 * Revision 1.30  2001/01/24 17:03:46  grosch
 * modified treatment of wchar.h for Solaris
 *
 * Revision 1.29  2001/01/03 17:18:37  grosch
 * fixed bug in CreateTables if wchar_t is not available
 *
 * Revision 1.28  2000/12/28 13:42:23  grosch
 * made # include "wchar.h" conditional
 * added missing # ifdef HAVE_ARGS
 *
 * Revision 1.27  2000/09/04 13:33:19  grosch
 * added support for wide character strings
 * added improved hash function
 * made hashtables dynamic
 *
 * Revision 1.26  2000/08/22 11:43:10  grosch
 * added const to char *
 * added support for wide idents (wchar_t)
 * added call to ErrorMessage
 * revised initialization
 *
 * Revision 1.25  2000/04/10 15:42:05  grosch
 * introduced ifdef HAVE_ARGS
 * cosmetic changes
 * renamed TablePtr into IdentTablePtr
 * added functions MakeIdent1 and GetLength
 *
 * Revision 1.24  1999/11/11 15:31:54  grosch
 * made WriteIdent more robust
 *
 * Revision 1.23  1999/04/08 20:53:47  grosch
 * fixed bug in CloseIdents
 *
 * Revision 1.22  1998/02/12 12:04:37  grosch
 * bug fix: automatic initialization of NoIdent
 *
 * Revision 1.21  1998/02/11 12:24:18  grosch
 * removed static arrays that are extended later
 * changed automatic initialization
 *
 * Revision 1.20  1997/12/16 18:08:39  grosch
 * tribute to MS VC++ 5.0
 *
 * Revision 1.19  1997/11/30 22:29:41  grosch
 * eliminated use of type cardinal
 * added function GetCStr
 *
 * Revision 1.18  1997/05/27 13:25:04  grosch
 * truncation of filenames to 8.3 format
 *
 * Revision 1.17  1996/08/13 13:20:23  grosch
 * adaption to DLL's for Microsoft Visual C++
 *
 * Revision 1.16  1996/07/25  16:51:34  grosch
 * adaption to MS VC++
 *
 * Revision 1.15  1995/05/09  13:53:42  grosch
 * added void to argument list of functions without arguments
 *
 * Revision 1.14  1995/03/20  15:37:30  grosch
 * truncate lines to at most 80 characters
 *
 * Revision 1.13  1994/12/04  19:29:55  grosch
 * added ANSI-C prototypes
 *
 * Revision 1.12  1992/05/05  13:19:05  grosch
 * added rcsid
 *
 * Revision 1.11  1992/02/18  12:52:30  grosch
 * changed tString from unsigned char * to char *
 *
 * Revision 1.10  1992/01/31  16:31:44  grosch
 * adaption to ANSI C
 *
 * Revision 1.9  1992/01/30  13:13:54  grosch
 * redesign of StringMem: pointer instead of array index
 *
 * Revision 1.8  1992/01/14  15:24:35  grosch
 * introduced automatic initialization
 *
 * Revision 1.7  1991/11/21  14:28:16  grosch
 * new version of RCS on SPARC
 *
 * Revision 1.6  91/09/18  15:18:46  grosch
 * added procedure GetStringRef
 *
 * Revision 1.5  91/07/17  17:23:07  grosch
 * introduced ARGS trick for ANSI compatibility
 *
 * Revision 1.4  91/01/21  12:13:20  grosch
 * some performance improvements
 *
 * Revision 1.3  90/09/20  09:12:22  grosch
 * calmed down lint
 *
 * Revision 1.2  90/07/04  14:33:55  grosch
 * introduced conditional include
 *
 * Revision 1.1  89/06/06  10:28:25  grosch
 * added public variable NoIdent
 *
 * Revision 1.0  88/10/04  11:44:38  grosch
 * Initial revision
 *
 */

/* Ich, Doktor Josef Grosch, Informatiker, Sept. 1987/August 2000 */

static char rcsid [] =
   "Id: Idents.c,v 1.35 2006/09/06 15:23:09 grosch rel $";

# include "Idents.h"
# include "rString.h"
# include "DynArray.h"
# include "Sets.h"
# include "Errors.h"

# define		InitialTableSize 1024
# define		cNoIdent	0

const	tIdent		NoIdent		= 1;

typedef struct {
   tStringRef	String;
   int		Length;
   tIdent	Collision;
}			tIdentTableEntry;

static	struct { unsigned short length; char ch; } no_string = { 0, '\0' };

# if HAVE_WCHAR_T
static	struct {
	  uint32_t	dummy1;		/* align on 4 byte boundary	*/
	  uint16_t	dummy2;		/* align on 4 byte boundary + 2 */
	  unsigned short length;
	  wchar_t	ch;
	}		no_w_string	= { 0, 0, 0, L'\0' };
# else
#  define		no_w_string	no_string
#  define		NoWIdent	NoIdent
# endif

static	tIdentTableEntry InitTable [3]	= {
   {0, 0, 0},
   {& no_string.length, 0, cNoIdent},
   {& no_w_string.length, 0, cNoIdent}
};
static	tIdentTableEntry * IdentTablePtr = InitTable;
static	unsigned long	IdentTableSize	= 0;
static	tIdent		IdentCount	= 2;

# define		InitHashTableSize 256

typedef	tIdent		HashTableEntry	;

static	HashTableEntry	InitHashTable [1] = { 1 };
static	HashTableEntry	InitWHashTable [1] = { 2 };
static	HashTableEntry * HashTablePtr	= InitHashTable;
static	HashTableEntry * WHashTablePtr	= InitWHashTable;
static	unsigned long	HashTableSize	= 1;

static	tSet		WIdentSet	;

static uint32_t Hash
# ifdef HAVE_ARGS
   (const char * string, int length)
# else
   (string, length) const char * string; int length;
# endif
{
    register const char * p;
    register const char * lastp = string + length;
    register uint32_t h = 0;
    for (p = string; p < lastp; p ++) {
        register uint32_t g;
        h <<= 4;
        h += (uint32_t) * p;
        g = h & (uint32_t) 0xF0000000;
        if (g != 0) {
            h ^= (g >> 24);
            h &= 0x0FFFFFFF;
        }
    }
    return h % HashTableSize;
 /* return h & (HashTableSize - 1); */
}

# if HAVE_WCHAR_T
static uint32_t WHash
# ifdef HAVE_ARGS
   (const wchar_t * string, int length)
# else
   (string, length) const wchar_t * string; int length;
# endif
{
    register const wchar_t * p;
    register const wchar_t * lastp = string + length;
    register uint32_t h = 0;
    for (p = string; p < lastp; p ++) {
        register uint32_t g;
        h <<= 4;
        h += (uint32_t) * p;
        g = h & 0xF0000000;
        if (g != 0) {
            h ^= (g >> 24);
            h &= 0x0FFFFFFF;
        }
    }
    return h % HashTableSize;
 /* return h & (HashTableSize - 1); */
}
# endif

# ifdef SIMPLE_HASH
#  define hash(string, length) (length == 0 ? 0 : \
	((int) * string + (int) string [length - 1] * 11 + length * 26) & \
	(HashTableSize - 1))
#  define w_hash(string, length)	hash (string, length)
# else
#  define hash(string, length)		Hash (string, length)
#  define w_hash(string, length)	WHash (string, length)
# endif

static void CreateTables ARGS ((void))
   {
      register unsigned long i;
      IdentTableSize = InitialTableSize;
      MakeArray ((char * *) & IdentTablePtr, & IdentTableSize,
		  (unsigned long) sizeof (tIdentTableEntry));
      IdentTablePtr [NoIdent] = InitTable [NoIdent];
# if HAVE_WCHAR_T
      IdentTablePtr [NoWIdent] = InitTable [NoWIdent];
# else
      IdentTablePtr [2] = InitTable [NoWIdent];
# endif
      IdentCount = 3;

      HashTableSize = InitHashTableSize;
      MakeArray ((char * *) & HashTablePtr, & HashTableSize,
		  (unsigned long) sizeof (HashTableEntry));
      MakeArray ((char * *) & WHashTablePtr, & HashTableSize,
		  (unsigned long) sizeof (HashTableEntry));
      for (i = 1; i < HashTableSize; i ++)
	 HashTablePtr [i] = WHashTablePtr [i] = cNoIdent;
      HashTablePtr [0] = NoIdent;
      WHashTablePtr [0] = NoWIdent;

      MakeSet (& WIdentSet, (int) IdentTableSize);
# if HAVE_WCHAR_T
      Include (& WIdentSet, NoWIdent);
# else
      Include (& WIdentSet, 2);
# endif
   }

static void Rehash ARGS ((void))
   {
      register unsigned long i;
      register tIdent j;
      unsigned long lHashTableSize = HashTableSize;
      ExtendArray ((char * *) & HashTablePtr, & HashTableSize,
		  (unsigned long) sizeof (HashTableEntry));
      ExtendArray ((char * *) & WHashTablePtr, & lHashTableSize,
		  (unsigned long) sizeof (HashTableEntry));
      for (i = 0; i < HashTableSize; i ++)
	 HashTablePtr [i] = WHashTablePtr [i] = cNoIdent;

      for (j = 1; j < IdentCount; j ++) {
	 register tIdentTableEntry * IdentTablePtrReg = & IdentTablePtr [j];
	 int length = IdentTablePtrReg->Length;
# if HAVE_WCHAR_T
	 if (IsElement (j, & WIdentSet)) {
	    wchar_t * string = StGetWCStr (IdentTablePtrReg->String);
	    register int32_t HashTableIndex = w_hash (string, length);
	    IdentTablePtrReg->Collision = WHashTablePtr [HashTableIndex];
	    WHashTablePtr [HashTableIndex] = j;
	 }
# else
	 if (j == 2) {
	    IdentTablePtrReg->Collision = cNoIdent;
	    WHashTablePtr [0] = NoWIdent;
	 }
# endif
	 else {
	    char * string = StGetCStr (IdentTablePtrReg->String);
	    register int32_t HashTableIndex = hash (string, length);
	    IdentTablePtrReg->Collision = HashTablePtr [HashTableIndex];
	    HashTablePtr [HashTableIndex] = j;
	 }
      }
   }

tIdent MakeIdent1
# ifdef HAVE_ARGS
   (register const char * string)
# else
   (string) register char * string;
# endif
   {
      return MakeIdent (string, (int) strlen (string));
   }

tIdent MakeIdent
# ifdef HAVE_ARGS
   (register const char * string, register int length)
# else
   (string, length) register char * string; register int length;
# endif
   {
      register int32_t		HashTableIndex;
      register tIdent		CurIdent;
      register tIdentTableEntry * IdentTablePtrReg;

      HashTableIndex = hash (string, length);
      CurIdent = HashTablePtr [HashTableIndex];		/* search */
      while (CurIdent != cNoIdent) {
	 IdentTablePtrReg = & IdentTablePtr [CurIdent];
	 if (IdentTablePtrReg->Length == length &&
	    IsEqualSt (IdentTablePtrReg->String, string))
	    return CurIdent;				/* found */
	 CurIdent = IdentTablePtrReg->Collision;
      }

      if ((unsigned long) ++ IdentCount >= IdentTableSize) {
							/* not found: enter */
	 if (IdentTableSize == 0) {
	    CreateTables ();
	 } else {
	    ExtendArray ((char * *) & IdentTablePtr, & IdentTableSize,
			(unsigned long) sizeof (tIdentTableEntry));
	    ResizeSet (& WIdentSet, (int) IdentTableSize);
	    Rehash ();
	 }
	 HashTableIndex = hash (string, length);
      }
      IdentTablePtrReg = & IdentTablePtr [IdentCount];
      IdentTablePtrReg->String	  = PutString (string, length);
      IdentTablePtrReg->Length	  = length;
      IdentTablePtrReg->Collision = HashTablePtr [HashTableIndex];
      HashTablePtr [HashTableIndex] = IdentCount;
      return IdentCount;
   }

void GetString
# ifdef HAVE_ARGS
   (tIdent ident, char * string)
# else
   (ident, string) tIdent ident; char * string;
# endif
   {
      StGetString (IdentTablePtr [ident].String, string);
   }

tStringRef GetStringRef
# ifdef HAVE_ARGS
   (tIdent ident)
# else
   (ident) tIdent ident;
# endif
   {
      return IdentTablePtr [ident].String;
   }

char * GetCStr
# ifdef HAVE_ARGS
   (tIdent ident)
# else
   (ident) tIdent ident;
# endif
   {
      return StGetCStr (IdentTablePtr [ident].String);
   }

int GetLength
# ifdef HAVE_ARGS
   (tIdent ident)
# else
   (ident) tIdent ident;
# endif
   {
      return IdentTablePtr [ident].Length;
   }

tIdent MaxIdent ARGS ((void))
   {
      return IdentCount;
   }

void WriteIdent
# ifdef HAVE_ARGS
   (FILE * file, tIdent ident)
# else
   (file, ident) FILE * file; tIdent ident;
# endif
   {
      if (1 <= ident && ident <= IdentCount) {
	 fputs (GetCStr (ident), file);
      } else {
	 ErrorMessageI (xxIdentOutOfBounds, xxError, NoPosition, xxInteger,
	    (char *) & ident);
      }
   }

# if HAVE_WCHAR_T

const	tWIdent	NoWIdent = 2;

tWIdent MakeWIdent1
# ifdef HAVE_ARGS
   (register const wchar_t * string)
# else
   (string) register wchar_t * string;
# endif
   {
      return MakeWIdent (string, (int) wcslen (string));
   }

tWIdent MakeWIdent
# ifdef HAVE_ARGS
   (register const wchar_t * string, register int length)
# else
   (string, length) register wchar_t * string; register int length;
# endif
   {
      register int32_t		HashTableIndex;
      register tWIdent		CurIdent;
      register tIdentTableEntry * IdentTablePtrReg;

      HashTableIndex = w_hash (string, length);
      CurIdent = WHashTablePtr [HashTableIndex];	/* search */
      while (CurIdent != cNoIdent) {
	 IdentTablePtrReg = & IdentTablePtr [CurIdent];
	 if (IdentTablePtrReg->Length == length &&
	    WIsEqualSt (IdentTablePtrReg->String, string))
	    return CurIdent;				/* found */
	 CurIdent = IdentTablePtrReg->Collision;
      }

      if ((unsigned long) ++ IdentCount >= IdentTableSize) {
							/* not found: enter */
	 if (IdentTableSize == 0) {
	    CreateTables ();
	 } else {
	    ExtendArray ((char * *) & IdentTablePtr, & IdentTableSize,
			(unsigned long) sizeof (tIdentTableEntry));
	    ResizeSet (& WIdentSet, IdentTableSize);
	    Rehash ();
	 }
	 HashTableIndex = w_hash (string, length);
      }
      IdentTablePtrReg = & IdentTablePtr [IdentCount];
      IdentTablePtrReg->String	  = PutWString (string, length);
      IdentTablePtrReg->Length	  = length;
      IdentTablePtrReg->Collision = WHashTablePtr [HashTableIndex];
      WHashTablePtr [HashTableIndex] = IdentCount;
      Include (& WIdentSet, IdentCount);
      return IdentCount;
   }

void GetWString
# ifdef HAVE_ARGS
   (tWIdent ident, wchar_t * string)
# else
   (ident, string) tWIdent ident; wchar_t * string;
# endif
   {
      StGetWString (IdentTablePtr [ident].String, string);
   }

tWStringRef GetWStringRef
# ifdef HAVE_ARGS
   (tWIdent ident)
# else
   (ident) tWIdent ident;
# endif
   {
      return IdentTablePtr [ident].String;
   }

wchar_t * GetWCStr
# ifdef HAVE_ARGS
   (tWIdent ident)
# else
   (ident) tWIdent ident;
# endif
   {
      return StGetWCStr (IdentTablePtr [ident].String);
   }

void WriteWIdent
# ifdef HAVE_ARGS
   (FILE * file, tWIdent ident)
# else
   (file, ident) FILE * file; tWIdent ident;
# endif
   {
      if (1 <= ident && ident <= IdentCount) {
	 fprintf (file, "%ls", GetWCStr (ident));
      } else {
	 ErrorMessageI (xxIdentOutOfBounds, xxError, NoPosition, xxInteger,
	    (char *) & ident);
      }
   }

# endif

void WriteIdents ARGS ((void))
   {
# ifndef _USRDLL
      tIdent	i;

      for (i = 1; i <= IdentCount; i ++) {
# if HAVE_WCHAR_T
	 if (IsElement (i, & WIdentSet))
	    printf ("%5u %ls\n", (unsigned int) i, GetWCStr (i));
	 else
# endif
	    printf ("%5u %s\n", (unsigned int) i, GetCStr (i));
      }
# endif
   }

void WriteHashTable ARGS ((void))
   {
# ifndef _USRDLL
      tIdent		CurIdent;
      unsigned long	i, Count;

      for (i = 0; i < HashTableSize; i ++) {
	 printf ("%5ld", i);

	 Count = 0;
	 CurIdent = HashTablePtr [i];
	 while (CurIdent != cNoIdent) {
	    Count ++;
	    CurIdent = IdentTablePtr [CurIdent].Collision;
	 }
	 printf ("%5ld", Count);

	 CurIdent = HashTablePtr [i];
	 while (CurIdent != cNoIdent) {
	    fputc (' ', stdout);
	    WriteIdent (stdout, CurIdent);
	    CurIdent = IdentTablePtr [CurIdent].Collision;
	 }
	 fputc ('\n', stdout);
      }
      printf ("\nIdents = %5d\n", (unsigned int) IdentCount);
# endif
   }

void InitIdents ARGS ((void))
   {
      IdentTablePtr	= InitTable;
      IdentTableSize	= 0;
      IdentCount	= 2;
      HashTablePtr	= InitHashTable;
      WHashTablePtr	= InitWHashTable;
      HashTableSize	= 1;
      HashTablePtr [0]	= NoIdent;
      WHashTablePtr [0]	= NoWIdent;
   }

void CloseIdents ARGS ((void))
   {
      if (IdentTableSize > 0) {
	 ReleaseArray ((char * *) & IdentTablePtr, & IdentTableSize,
			(unsigned long) sizeof (tIdentTableEntry));
	 ReleaseArray ((char * *) & HashTablePtr, & HashTableSize,
			(unsigned long) sizeof (HashTableEntry));
	 ReleaseArray ((char * *) & WHashTablePtr, & HashTableSize,
			(unsigned long) sizeof (HashTableEntry));
	 ReleaseSet (& WIdentSet);
      }
      InitIdents ();
   }
