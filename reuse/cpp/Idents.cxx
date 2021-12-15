/* $Id: Idents.c,v 1.15 1995/05/09 13:53:42 grosch rel $ */

/* $Log: Idents.c,v $
 */

/* Ich, Doktor Josef Grosch, Informatiker, June 1995/August 2000 */

static char rcsid [] =
   "$Id: Idents.c,v 1.15 1995/05/09 13:53:42 grosch rel $";

# include "Idents.h"
# include "rString.h"
# include "DynArray.h"
# include "Errors.h"
# include "Global.h"

# if defined _MSC_VER
#  pragma warning (disable:4505 4514)
# endif

static const long	InitialTableSize	= 1024;
static const long	InitHashTableSize	= 256;
static const tIdent	cNoIdent		= 0;

uint32_t Idents::Hash (const char * string, int length)
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
uint32_t Idents::Hash (const wchar_t * string, int length)
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
#  define w_hash(string, length)	Hash (string, length)
# endif

void Idents::Rehash (void)
{
   register unsigned long i;
   register tIdent j;
   unsigned long lHashTableSize = HashTableSize;
   ExtendArray ((char * *) & HashTablePtr, & HashTableSize,
      (unsigned long) sizeof (HashTableEntry));
# if HAVE_WCHAR_T
   ExtendArray ((char * *) & WHashTablePtr, & lHashTableSize,
      (unsigned long) sizeof (HashTableEntry));
# endif
   for (i = 0; i < HashTableSize; i ++)
# if HAVE_WCHAR_T
      WHashTablePtr [i] =
# endif
      HashTablePtr [i] = cNoIdent;

   for (j = 1; j < IdentCount; j ++) {
      register tIdentTableEntry * IdentTablePtrReg = & IdentTablePtr [j];
      int length = IdentTablePtrReg->Length;
# if HAVE_WCHAR_T
      if (IsElement (j, & WIdentSet)) {
	 wchar_t * string = StringMObj->StGetWCStr (IdentTablePtrReg->String);
	 register int32_t HashTableIndex = w_hash (string, length);
	 IdentTablePtrReg->Collision = WHashTablePtr [HashTableIndex];
	 WHashTablePtr [HashTableIndex] = j;
      } else
# endif
      {
	 char * string = StringMObj->StGetCStr (IdentTablePtrReg->String);
	 register int32_t HashTableIndex = hash (string, length);
	 IdentTablePtrReg->Collision = HashTablePtr [HashTableIndex];
	 HashTablePtr [HashTableIndex] = j;
      }
   }
}

tIdent Idents::MakeIdent (register const char * string)
{
   return MakeIdent (string, (int) strlen (string));
}

tIdent Idents::MakeIdent (register const char * string, register int length)
{
   register int32_t		HashTableIndex;
   register tIdent		CurIdent;
   register tIdentTableEntry *	IdentTablePtrReg;

   HashTableIndex = hash (string, length);
   CurIdent = HashTablePtr [HashTableIndex];		/* search */
   while (CurIdent != cNoIdent) {
      IdentTablePtrReg = & IdentTablePtr [CurIdent];
      if (IdentTablePtrReg->Length == length &&
	 StringMObj->IsEqualSt (IdentTablePtrReg->String, string))
	 return CurIdent;				/* found */
      CurIdent = IdentTablePtrReg->Collision;
   }

   if ((unsigned long) ++ IdentCount == IdentTableSize) {
							/* not found: enter */
      ExtendArray ((char * *) & IdentTablePtr, & IdentTableSize,
	 (unsigned long) sizeof (tIdentTableEntry));
# if HAVE_WCHAR_T
      ResizeSet (& WIdentSet, (int) IdentTableSize);
# endif
      Rehash ();
      HashTableIndex = hash (string, length);
   }
   IdentTablePtrReg = & IdentTablePtr [IdentCount];
   IdentTablePtrReg->String	= StringMObj->PutString (string, length);
   IdentTablePtrReg->Length	= length;
   IdentTablePtrReg->Collision	= HashTablePtr [HashTableIndex];
   HashTablePtr [HashTableIndex] = IdentCount;
   return IdentCount;
}

void Idents::GetString (tIdent ident, char * string)
{
   StringMObj->StGetString (IdentTablePtr [ident].String, string);
}

tStringRef Idents::GetStringRef (tIdent ident)
{
   return IdentTablePtr [ident].String;
}

char * Idents::GetCStr (tIdent ident)
{
   return (char *) IdentTablePtr [ident].String + sizeof (unsigned short);
}

int Idents::GetLength (tIdent ident)
{
   return StringMObj->StLength (IdentTablePtr [ident].String);
}

tIdent Idents::MaxIdent (void)
{
   return IdentCount;
}

void Idents::WriteIdent (FILE * file, tIdent ident)
{
   if (1 <= ident && ident <= IdentCount) {
      fputs (GetCStr (ident), file);
   } else {
      ErrorsObj->ErrorMessageI (xxIdentOutOfBounds, xxError, NoPosition,
	 xxIdent, (char *) & ident);
   }
}

# if HAVE_WCHAR_T

tWIdent Idents::MakeIdent (register const wchar_t * string)
{
   return MakeIdent (string, (int) wcslen (string));
}

tWIdent Idents::MakeIdent (register const wchar_t * string, register int length)
{
   register int32_t		HashTableIndex;
   register tWIdent		CurIdent;
   register tIdentTableEntry *	IdentTablePtrReg;

   HashTableIndex = w_hash (string, length);
   CurIdent = WHashTablePtr [HashTableIndex];		/* search */
   while (CurIdent != cNoIdent) {
      IdentTablePtrReg = & IdentTablePtr [CurIdent];
      if (IdentTablePtrReg->Length == length &&
	 StringMObj->IsEqualSt (IdentTablePtrReg->String, string))
	 return CurIdent;				/* found */
      CurIdent = IdentTablePtrReg->Collision;
   }

   if (++ IdentCount == (long) IdentTableSize) {	/* not found: enter */
      ExtendArray ((char * *) & IdentTablePtr, & IdentTableSize,
	 (unsigned long) sizeof (tIdentTableEntry));
      ResizeSet (& WIdentSet, (int) IdentTableSize);
      Rehash ();
      HashTableIndex = w_hash (string, length);
   }
   IdentTablePtrReg = & IdentTablePtr [IdentCount];
   IdentTablePtrReg->String	= StringMObj->PutString (string, length);
   IdentTablePtrReg->Length	= length;
   IdentTablePtrReg->Collision	= WHashTablePtr [HashTableIndex];
   WHashTablePtr [HashTableIndex] = IdentCount;
   Include (& WIdentSet, IdentCount);
   return IdentCount;
}

void Idents::GetString (tWIdent ident, wchar_t * string)
{
   StringMObj->StGetString (IdentTablePtr [ident].String, string);
}

wchar_t * Idents::GetWCStr (tWIdent ident)
{
   return ((wchar_t *) ((char *) IdentTablePtr [ident].String +
      sizeof (unsigned short)));
}

void Idents::WriteWIdent (FILE * file, tWIdent ident)
{
   if (1 <= ident && ident <= IdentCount) {
      fprintf (file, "%ls", GetWCStr (ident));
   } else {
      ErrorsObj->ErrorMessageI (xxIdentOutOfBounds, xxError, NoPosition,
	 xxIdent, (char *) & ident);
   }
}

# endif

void Idents::WriteIdents (void)
{
# ifndef _USRDLL
   for (tIdent i = 1; i <= IdentCount; i ++) {
# if HAVE_WCHAR_T
      if (IsElement (i, & WIdentSet))
	 printf ("%5u %ls\n", (unsigned int) i, GetWCStr (i));
      else
# endif
	 printf ("%5u %s\n", (unsigned int) i, GetCStr (i));
   }
# endif
}

void Idents::WriteHashTable (void)
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

void Idents::InitIdents (void)
{
   IdentTableSize = InitialTableSize;
   MakeArray ((char * *) & IdentTablePtr, & IdentTableSize,
      (unsigned long) sizeof (tIdentTableEntry));
   HashTableSize = InitHashTableSize;
   MakeArray ((char * *) & HashTablePtr, & HashTableSize,
      (unsigned long) sizeof (HashTableEntry));
# if HAVE_WCHAR_T
   MakeArray ((char * *) & WHashTablePtr, & HashTableSize,
      (unsigned long) sizeof (HashTableEntry));
   MakeSet (& WIdentSet, (int) IdentTableSize);
# endif
   for (unsigned long i = 0; i < HashTableSize; i ++)
# if HAVE_WCHAR_T
      WHashTablePtr [i] =
# endif
      HashTablePtr [i] = cNoIdent;
   IdentCount	= 0;
   NoIdent	= MakeIdent ("");
# if HAVE_WCHAR_T
   NoWIdent	= MakeIdent (L"");
# endif
}

Idents::Idents (void)
{
   StringMObj	= & gStringM;
   ErrorsObj	= & gErrors;
   InitIdents ();
}

Idents::~Idents (void)
{
   ReleaseArray ((char * *) & IdentTablePtr, & IdentTableSize,
      (unsigned long) sizeof (tIdentTableEntry));
   ReleaseArray ((char * *) & HashTablePtr, & HashTableSize,
      (unsigned long) sizeof (HashTableEntry));
# if HAVE_WCHAR_T
   ReleaseArray ((char * *) & WHashTablePtr, & HashTableSize,
      (unsigned long) sizeof (HashTableEntry));
   ReleaseSet (& WIdentSet);
# endif
}
