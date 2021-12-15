# ifndef yyStringM
# define yyStringM

/* $Id: StringM.h,v 1.11 1995/05/09 13:53:42 grosch rel $ */

/* $Log: StringM.h,v $
 */

/* Ich, Doktor Josef Grosch, Informatiker, June 1995/August 2000 */

# include "config.h"
# if HAVE_WCHAR_H
#  include <wchar.h>
# endif
# include <stdio.h>
# include "ratc.h"

/* String memory: stores strings of variable length			*/
/*		  supports single byte and multi byte strings		*/
/*                maximal string length is 65535			*/

typedef unsigned short * tStringRef;
typedef unsigned short * tWStringRef;

class StringM {

public:
		StringM		(void);

		~StringM	(void);

/* Support for single byte strings: char []				*/

   tStringRef	NoString	; /* An empty string			*/

   tStringRef	PutString	(register const char * yys);
			/* Stores string 's' in the string memory and	*/
			/* returns a handle to the stored string.	*/
			/* The string has to be null-terminated and may	*/
			/* not contain null characters.			*/

   tStringRef	PutString	(register const char * yys,
				 register uint32_t yylength);
			/* Stores string 's' of length 'length' in the	*/
			/* string memory and returns a handle to it.	*/
			/* The string has not to be null-terminated and	*/
			/* may contain null characters.			*/

   void		StGetString	(register tStringRef yyr, register char * yys);
			/* Returns the string 's' from the string	*/
			/* memory having the handle 'r'.		*/

inline
   unsigned short LengthSt	(register tStringRef yyr) { return * yyr; }
inline
   unsigned short StLength	(register tStringRef yyr) { return * yyr; }
			/* Returns the length of the string having	*/
			/* the handle 'r'.				*/

inline
   char *	StGetCStr	(tStringRef yyr)
			{ return (char *) yyr + sizeof (unsigned short); }
			/* Returns the address of the null-terminated	*/
			/* string having the handle 'r'.		*/

   rbool	IsEqualSt	(tStringRef yyr, register const char * yys);
			/* Compares the string having the handle 'r'	*/
			/* and the C string 's'.			*/
			/* Returns rtrue if both are equal.		*/
			/* Works only, if both strings have the same	*/
			/* length. This has to be checked before.	*/

   void		WriteString	(FILE * yyf, tStringRef yyr);
			/* The string having the handle 'r' is printed	*/
			/* on the file 'f'.				*/

# if HAVE_WCHAR_T

/* Support for multi byte strings: wchar_t []				*/

   tWStringRef	NoWString	; /* An empty wide character string	*/

   tWStringRef	PutString	(register const wchar_t * yys);
			/* Stores string 's' in the string memory and	*/
			/* returns a handle to the stored string.	*/
			/* The string has to be null-terminated and may	*/
			/* not contain null characters.			*/

   tWStringRef	PutString	(register const wchar_t * yys,
				 register uint32_t yylength);
			/* Stores string 's' of length 'length' in the	*/
			/* string memory and returns a handle to it.	*/
			/* The string has not to be null-terminated and	*/
			/* may contain null characters.			*/

   void		StGetString	(register tWStringRef yyr,
				 register wchar_t * yys);
			/* Returns the string 's' from the string	*/
			/* memory having the handle 'r'.		*/

// unsigned short WLengthSt	(tStringRef yyr) = LengthSt
// unsigned short StWLength	(tStringRef yyr) = StLength

inline
   wchar_t * StGetWCStr		(register tWStringRef yyr)
			{ return ((wchar_t *)
			   ((char *) yyr + sizeof (unsigned short))); }
			/* Returns the address of the null-terminated	*/
			/* string having the handle 'r'.		*/

   rbool	IsEqualSt	(tWStringRef yyr, register const wchar_t * yys);
			/* Compares the string having the handle 'r'	*/
			/* and the C string 's'.			*/
			/* Returns rtrue if both are equal.		*/
			/* Works only, if both strings have the same	*/
			/* length. This has to be checked before.	*/

   void		WriteWString	(FILE * yyf, tWStringRef yyr);
			/* The string having the handle 'r' is printed	*/
			/* on the file 'f'.				*/

# endif

   void		WriteStringMemory (void);
			/* The contents of the string memory is printed	*/
			/* on standard output.				*/

   void		InitStringMemory (void);
			/* The string memory is initialized.		*/

class Errors *	ErrorsObj; /* Errors object for this String memory object. */

private:

// static const unsigned long yyMemorySize = 1024 * 20;
# define yyMemorySize 1024 * 20

typedef struct sBlock {
      struct sBlock *	Next;
      tStringRef	Last;
      uint32_t		BlockSize;
      char		Memory [yyMemorySize];
   }		tBlock		;

   tBlock *	BlockList	;
   uint32_t	MemorySpaceLeft	;
   tStringRef	MemoryFreePtr	;
   void		FreeStringMemory (void);
};

# endif
