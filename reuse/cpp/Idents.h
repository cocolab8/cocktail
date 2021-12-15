# ifndef yyIdents
# define yyIdents

/* $Id: Idents.h,v 1.13 1995/05/09 13:53:42 grosch rel $ */

/* $Log: Idents.h,v $
 */

/* Ich, Doktor Josef Grosch, Informatiker, June 1995/August 2000 */

# include "config.h"
# if HAVE_WCHAR_H
#  include <wchar.h>
# endif
# include <stdio.h>
# include "ratc.h"
# include "StringM.h"
# include "Sets.h"

/* Identifier table: maps strings unambiguously to integers		*/
/*		     supports single byte and multi byte strings	*/

typedef	long	tIdent;
typedef long	tWIdent;

// the following typedef should be local to the class
// however, this does not work with gcc version 2.4.5
typedef struct {
      tStringRef String		;
      int	Length		;
      tIdent	Collision	;
   }			tIdentTableEntry;

class Idents {

public:
		Idents		(void);

		~Idents		(void);

/* Support for single byte strings: char []				*/

   tIdent	NoIdent; /* An empty identifier (empty string)		*/

   tIdent	MakeIdent	(register const char * yystring);
			/* The string is mapped to a unique		*/
			/* identifier (an integer) which is returned.	*/
			/* The string has to be null-terminated and may	*/
			/* not contain null characters.			*/

   tIdent	MakeIdent	(register const char * yystring,
				 register int yylength);
			/* The string (of length) is mapped to a unique	*/
			/* identifier (an integer) which is returned.	*/
			/* The string has not to be null-terminated and	*/
			/* may contain null characters.			*/

   void		GetString	(tIdent yyident, char * yystring);
			/* Returns the string whose identifier is 'ident'. */

   tStringRef	GetStringRef	(tIdent yyident);
			/* Returns a reference to the string identified	*/
			/* by 'ident'.					*/

// inline	does not work with egcs-2.91.66 (egcs-1.1.2 release)
   char *	GetCStr		(tIdent yyident);
//			{ return (char *) IdentTablePtr [yyident].String
//			      + sizeof (unsigned short); }
			/* Returns the address of the null-terminated	*/
			/* string identified by 'ident'.		*/

   int		GetLength	(tIdent yyident);
			/* Returns the length of the string whose	*/
			/* identifier is 'ident'.			*/

   tIdent	MaxIdent	(void);
			/* Returns the currently maximal identifier.	*/

   void		WriteIdent	(FILE * yyfile, tIdent yyident);
			/* The string encoded by the identifier 'ident'	*/
			/* is printed on the file.			*/

# if HAVE_WCHAR_T

/* Support for multi byte strings: wchar_t []				*/

   tWIdent	NoWIdent; /* An empty identifier (empty string)		*/

   tWIdent	MakeIdent	(register const wchar_t * yystring);
			/* The string is mapped to a unique		*/
			/* identifier (an integer) which is returned.	*/
			/* The string has to be null-terminated and may	*/
			/* not contain null characters.			*/

   tWIdent	MakeIdent	(register const wchar_t * yystring,
				 register int yylength);
			/* The string (of length) is mapped to a unique	*/
			/* identifier (an integer) which is returned.	*/
			/* The string has not to be null-terminated and	*/
			/* may contain null characters.			*/

   void		GetString	(tWIdent yyident, wchar_t * yystring);
			/* Returns the string whose identifier is 'ident'. */

// tWStringRef	GetStringRef	(tIdent yyident) = tStringRef GetStringRef ()

// inline	does not work with egcs-2.91.66 (egcs-1.1.2 release)
   wchar_t *	GetWCStr	(tWIdent yyident);
//			{ return ((wchar_t *) ((char *) IdentTablePtr
//			   [yyident].String + sizeof (unsigned short))); }
			/* Returns the address of the null-terminated	*/
			/* string identified by 'ident'.		*/

// int		GetWLength	(tIdent yyident) = GetLength ()

// tIdent	MaxWIdent	(void)		 = MaxIdent ()

   void		WriteWIdent	(FILE * yyfile, tWIdent yyident);
			/* The string encoded by the identifier 'ident'	*/
			/* is printed on the file.			*/

# endif

   void		WriteIdents	(void);
			/* The contents of the identifier table is	*/
			/* printed on the standard output.		*/

   void		InitIdents	(void);
			/* The identifier table is initialized.		*/

   void		WriteHashTable	(void);

   StringM *	StringMObj; /* String memory object for this Idents object. */
class Errors *	ErrorsObj;  /* Errors object for this Idents object.	*/

private:

   tIdentTableEntry *	IdentTablePtr	;
   unsigned long	IdentTableSize	;
   tIdent		IdentCount	;

typedef	tIdent		HashTableEntry	;

   HashTableEntry *	HashTablePtr	;
   unsigned long	HashTableSize	;
   uint32_t		Hash	(const char * string, int length);
# if HAVE_WCHAR_T
   HashTableEntry *	WHashTablePtr	;
   uint32_t		Hash	(const wchar_t * string, int length);
   tSet			WIdentSet	;
# endif
   void			Rehash	(void);
};

# endif
