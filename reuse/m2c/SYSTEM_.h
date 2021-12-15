/* $Id: SYSTEM_.h,v 1.8 2021/12/09 11:02:47 grosch Exp $ */

/************************************************************************/
/*									*/
/*	If the library function alloca is available and the C programs	*/
/*	are compiled with the flag -DStackAlloc, then the memory space	*/
/*	for open array value parameters will be allocated in the stack	*/
/*	frame of the corresponding procedure. This temporary space	*/
/*	will be freed automatically when the procedure returns.		*/
/*	Otherwise, malloc and free will be used to allocate and		*/
/*	deallocate memory space for open array value parameters.	*/
/*									*/
/*	By default open array value parameters are copied using the	*/
/*	library function memcpy. This can be switched to bcopy by	*/
/*	compiling with the flag -DBCOPY on systems without memcpy.	*/
/*									*/
/************************************************************************/

# if defined __STDC__ | defined __cplusplus | defined _MSC_VER
#  define HAVE_ARGS
#  define ARGS(parameters) parameters
# else
#  define ARGS(parameters) ()
# endif

# define __MTC

/*
 *	Definition of standard constants
 */

#ifdef FALSE
#undef FALSE
#endif
#ifdef TRUE
#undef TRUE
#endif

#define FALSE		((BOOLEAN) 0)
#define TRUE		((BOOLEAN) 1)

#define NIL		0L

/*
 *	Definition of basic types
 */

# if defined _MSC_VER && _MSC_VER >= 1930
#  include <inttypes.h>
# elif defined _MSC_VER && _MSC_VER >= 1100
#  define int8_t   __int8
#  define int16_t  __int16
#  define int32_t  __int32
#  define int64_t  __int64
#  define uint8_t  unsigned __int8
#  define uint16_t unsigned __int16
#  define uint32_t unsigned __int32
#  define uint64_t unsigned __int64
#  define intptr_t int32_t
#  define uintptr_t uint32_t
#  define _INTPTR_T_DEFINED
#  define _UINTPTR_T_DEFINED
# else
#  include <inttypes.h>
# endif

typedef int16_t		SHORTINT;
typedef int32_t		INTEGER;
typedef int32_t		LONGINT;
typedef uint16_t	SHORTCARD;
typedef uint32_t	CARDINAL;
typedef uint32_t	LONGCARD;

typedef unsigned char	BOOLEAN;

typedef unsigned char	CHAR;

typedef float		REAL;
typedef double		LONGREAL;

/*
 *	Definition of standard types
 */

typedef uint32_t	BITSET;

typedef void		(* PROC) ARGS ((void));

typedef unsigned char	WORD;
typedef WORD		BYTE;
typedef unsigned short  SHORTWORD;
typedef char *		ADDRESS;

/*
 *	Definition of standard functions
 */

#define ABS(x)		((x) < 0 ? -(x) : (x))
#define ABSSC(x)	((SHORTCARD) (x))
#define ABSLC(x)	((LONGCARD) (x))
#define ABSSI(x)	((SHORTINT) ABSLI ((LONGINT) (x)))

extern LONGINT ABSLI ARGS ((LONGINT x));

#define ABSR(x)		((REAL) ABSLR (x))

extern LONGREAL ABSLR ARGS ((LONGREAL x));

extern CHAR CAP ARGS ((CHAR ch));

#define CHR(x)		((CHAR) (x))
#define FLOAT(x)	((REAL) (x))
#define ORD(x)		((CARDINAL) (x))
#define TRUNC(x)	((CARDINAL) (x))
#define VAL(T,x)	((T) (x))

#define MIN_SHORTINT	(-32768)
#define MAX_SHORTINT	32767
#define MIN_SHORTCARD	0
#define MAX_SHORTCARD	65535
#define MIN_LONGINT	0X80000000
#define MAX_LONGINT	2147483647L
#define MIN_LONGCARD	((LONGCARD) 0L)
#define MAX_LONGCARD	((LONGCARD) 0XFFFFFFFF)

#define MIN_BOOLEAN	FALSE
#define MAX_BOOLEAN	TRUE

#define MIN_CHAR	((CHAR) '\0')
#define MAX_CHAR	((CHAR) '\377')

#define MIN_REAL	((REAL) 1.40129846432481707e-45)
#define MAX_REAL	((REAL) 3.40282346638528860e+38)
#define MIN_LONGREAL	4.94065645841246544e-324
#define MAX_LONGREAL	1.79769313486231470e+308

#define ODD(x)		((BOOLEAN) ((x) & 1))

/*
 *	Definition of standard procedures
 */

#define INC(x)		(x) ++
#define INC1(x,n)	x += n
#define DEC(x)		(x) --
#define DEC1(x,n)	x -= n

#define EXCL(s,i)	s &= ~(1L << (i))
#define INCL(s,i)	s |= 1L << (i)

#define ADR(x)		((ADDRESS) &(x))
#define ADR1(x)		((ADDRESS) (x))

/*
 *	Definition of (some) set operators
 */

#define SYSTEM_MaxSet           (sizeof (BITSET) * 8 - 1)

#define SET_ELEM(el)		(1L << (el))
#define SET_cRNG(lo,hi)		((lo) <= (hi) ? (2UL << (hi)) - (1UL << (lo)) : 0UL)
#define SET_RANGE(lo,hi)	SET_RANGE1 ((CARDINAL) (lo), (CARDINAL) (hi))

extern BITSET SET_RANGE1 ARGS ((CARDINAL lo, CARDINAL hi));

#define SET_DIFF(s1,s2)		((s1) & ~(s2))
#define IN(x,s)			((BOOLEAN) ((s) >> (x) & 1L))
#define SET_IS_SUBSET1(s1,s2)	((BOOLEAN) !((s1) & ~(s2)))
#define SET_IS_SUBSET2(s1,s2)	((BOOLEAN) !((s2) & ~(s1)))

/*
 *	Definition of compiler constants
 */

#define SYSTEM_ALIGN		8
#define SYSTEM_MASK             (~(SYSTEM_ALIGN - 1))

/*
 *	Definition of compiler types
 */

typedef ADDRESS		OPAQUE;
typedef CHAR		*STRING;

/*
 *	Definition of compiler variables
 */

extern int	  SYSTEM_argc;
extern char	**SYSTEM_argv;
extern char	**SYSTEM_envp;

/*
 *	Definition of compiler macros and functions
 */

#ifdef StackAlloc

#define OPEN_ARRAY_LOCALS	char *FREE_POINTER;
#define ALLOC_OPEN_ARRAYS(size, arrays) \
	FREE_POINTER = alloca ((int) ((size) + (arrays) * (SYSTEM_ALIGN - 1)));
#define FREE_OPEN_ARRAYS

#else

#define OPEN_ARRAY_LOCALS	char *BLOCK_POINTER, *FREE_POINTER;
#define ALLOC_OPEN_ARRAYS(size, arrays)	\
	BLOCK_POINTER = FREE_POINTER = \
		malloc ((unsigned) ((size) + (arrays) * (SYSTEM_ALIGN - 1)));
#define FREE_OPEN_ARRAYS	free (BLOCK_POINTER);

#endif

# ifdef BCOPY
#define COPY_OPEN_ARRAY(array, elems, type) \
	{ int ARRAY_SIZE = elems * sizeof (type); \
	  bcopy ((char *) array, FREE_POINTER, ARRAY_SIZE); \
	  array = FREE_POINTER; \
	  FREE_POINTER += (ARRAY_SIZE + (SYSTEM_ALIGN - 1)) & SYSTEM_MASK; \
	}
# else
#define COPY_OPEN_ARRAY(array, elems, type) \
	{ int ARRAY_SIZE = elems * sizeof (type); \
	  array = (type *) memcpy (FREE_POINTER, (char *) array, ARRAY_SIZE); \
	  FREE_POINTER += (ARRAY_SIZE + (SYSTEM_ALIGN - 1)) & SYSTEM_MASK; \
	}
# endif

#define FOR_LIMIT_UP(last, step, min) \
	((last) < (min) + ((step) - 1) ? (min) : (last) - ((step) - 1))

#define FOR_LIMIT_DOWN(last, step, max) \
	((last) > (max) + ((step) + 1) ? (max) : (last) - ((step) + 1))

extern void CaseError ARGS ((char file [], int line));
extern void ReturnError ARGS ((char file [], int line));

/*
 *	Definition of library functions
 */

#ifdef StackAlloc
extern char *alloca ();
#else
/* #include "malloc.h" */
/* extern char *malloc (); */
/* extern void free (); */
#endif

# ifndef BCOPY
/* extern char *memcpy (); */
# endif
/* extern char *strncpy (); */
/* extern void exit (); */

/* for malloc, free, exit */
# include <stdlib.h>
/* for memcpy, strncpy */
# include <string.h>
