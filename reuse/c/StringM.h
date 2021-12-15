# ifndef yyStringM
# define yyStringM

/* $Id: StringM.h,v 1.25 2008/09/12 14:14:04 grosch rel $ */

/*
 * $Log: StringM.h,v $
 * Revision 1.25  2008/09/12 14:14:04  grosch
 * improved support for 64 bit machines (added rIntType.h)
 * removed type casts to (void)
 *
 * Revision 1.24  2006/04/07 19:45:53  grosch
 * removed some const specifiers
 * added parentheses around macro parameters
 *
 * Revision 1.23  2005/05/23 12:26:27  grosch
 * changed #include <config.h> to #include "config.h"
 *
 * Revision 1.22  2001/01/28 15:05:29  grosch
 * unified treatment of include file wchar.h
 *
 * Revision 1.21  2001/01/24 17:03:46  grosch
 * modified treatment of wchar.h for Solaris
 *
 * Revision 1.20  2000/09/04 13:39:34  grosch
 * added support for wide character strings
 *
 * Revision 1.19  2000/08/18 17:31:21  grosch
 * added const to char *
 *
 * Revision 1.18  2000/04/10 16:04:01  grosch
 * introduced ifdef HAVE_ARGS
 * renamed Size to BlockSize
 * added function PutString1
 *
 * Revision 1.17  2000/02/18 14:17:00  grosch
 * added modules rString and rSrcMem
 *
 * Revision 1.16  1998/04/04 10:12:11  grosch
 * cosmetic changes
 *
 * Revision 1.15  1997/12/05 12:44:46  grosch
 * added function CloseStringMemory
 *
 * Revision 1.14  1997/11/30 22:31:05  grosch
 * eliminated use of type cardinal
 * added function StGetCStr
 * added null character to strings
 *
 * Revision 1.13  1997/05/27 13:25:04  grosch
 * truncation of filenames to 8.3 format
 *
 * Revision 1.12  1997/04/08 13:38:16  grosch
 * added prefix yy to all argument names
 *
 * Revision 1.11  1995/05/09  13:53:42  grosch
 * added void to argument list of functions without arguments
 *
 * Revision 1.10  1995/03/20  15:37:30  grosch
 * truncate lines to at most 80 characters
 *
 * Revision 1.9  1994/12/04  19:29:55  grosch
 * added ANSI-C prototypes
 *
 * Revision 1.8  1994/04/05  09:00:35  grosch
 * added prefix 'r' to true and false for improved portability
 *
 * Revision 1.7  1994/01/29  22:13:50  grosch
 * renamed bool to rbool
 *
 * Revision 1.6  1992/08/07  14:36:51  grosch
 * added comments
 *
 * Revision 1.5  1992/02/18  12:52:30  grosch
 * changed tString from unsigned char * to char *
 *
 * Revision 1.4  1992/01/30  13:12:51  grosch
 * complete redesign: pointer instead of array index
 *
 * Revision 1.3  1991/11/21  14:28:16  grosch
 * new version of RCS on SPARC
 *
 * Revision 1.2  91/07/17  17:23:48  grosch
 * introduced ARGS trick for ANSI compatibility
 *
 * Revision 1.1  90/07/04  14:34:08  grosch
 * introduced conditional include
 *
 * Revision 1.0  88/10/04  11:44:47  grosch
 * Initial revision
 *
 */

/* Ich, Doktor Josef Grosch, Informatiker, Sept. 1987/August 2000 */

# include "config.h"
# if HAVE_WCHAR_H
#  include <wchar.h>
# endif
# include <stdio.h>
# include "ratc.h"

/* String memory: stores strings of variable length			*/
/*		  supports single byte and multi byte strings		*/
/*                maximal string length is 65535			*/

# define BeginStringMemory InitStringMemory

/* Support for single byte strings: char []				*/

typedef unsigned short * tStringRef;

extern	tStringRef	 NoString;  /* An empty string			*/

extern	tStringRef PutString1	ARGS ((register const char * yys));
			/* Stores string 's' in the string memory and	*/
			/* returns a handle to the stored string.	*/
			/* The string has to be null-terminated and may	*/
			/* not contain null characters.			*/

extern	tStringRef PutString	ARGS ((register const char * yys,
				       register uint32_t yylength));
			/* Stores string 's' of length 'length' in the	*/
			/* string memory and returns a handle to it.	*/
			/* The string has not to be null-terminated and	*/
			/* may contain null characters.			*/

extern	void	StGetString	ARGS ((register tStringRef yyr,
				       register char * yys));
			/* Returns the string 's' from the string	*/
			/* memory having the handle 'r'.		*/

/* extern unsigned short LengthSt ARGS ((register tStringRef yyr)); */
# define LengthSt(stringref) (* (stringref))
# define StLength(stringref) (* (stringref))
			/* Returns the length of the string having	*/
			/* the handle 'r'.				*/

/* extern char * StGetCStr	ARGS ((register tStringRef yyr)); */
# define StGetCStr(stringref) ((char *) (stringref) + sizeof (unsigned short))
			/* Returns the address of the null-terminated	*/
			/* string having the handle 'r'.		*/

extern	rbool	IsEqualSt	ARGS ((tStringRef yyr,
				       register const char * yys));
			/* Compares the string having the handle 'r'	*/
			/* and the C string 's'.			*/
			/* Returns rtrue if both are equal.		*/
			/* Works only, if both strings have the same	*/
			/* length. This has to be checked before.	*/

extern	void	WriteString	ARGS ((FILE * yyf, tStringRef yyr));
			/* The string having the handle 'r' is printed	*/
			/* on the file 'f'.				*/

# if HAVE_WCHAR_T

/* Support for multi byte strings: wchar_t []				*/

typedef unsigned short * tWStringRef;

extern	tWStringRef	 NoWString; /* An empty wide character string	*/

extern	tWStringRef PutWString1	ARGS ((register const wchar_t * yys));
			/* Stores string 's' in the string memory and	*/
			/* returns a handle to the stored string.	*/
			/* The string has to be null-terminated and may	*/
			/* not contain null characters.			*/

extern	tWStringRef PutWString	ARGS ((register const wchar_t * yys,
				       register uint32_t yylength));
			/* Stores string 's' of length 'length' in the	*/
			/* string memory and returns a handle to it.	*/
			/* The string has not to be null-terminated and	*/
			/* may contain null characters.			*/

extern	void	StGetWString	ARGS ((register tWStringRef yyr,
				       register wchar_t * yys));
			/* Returns the string 's' from the string	*/
			/* memory having the handle 'r'.		*/

/* extern wchar_t * StGetWCStr	ARGS ((register tWStringRef yyr)); */
# define StGetWCStr(stringref) \
		((wchar_t *) ((char *) (stringref) + sizeof (unsigned short)))
			/* Returns the address of the null-terminated	*/
			/* string having the handle 'r'.		*/

extern	rbool	WIsEqualSt	ARGS ((tWStringRef yyr,
				       register const wchar_t * yys));
			/* Compares the string having the handle 'r'	*/
			/* and the C string 's'.			*/
			/* Returns rtrue if both are equal.		*/
			/* Works only, if both strings have the same	*/
			/* length. This has to be checked before.	*/

extern	void	WriteWString	ARGS ((FILE * yyf, tWStringRef yyr));
			/* The string having the handle 'r' is printed	*/
			/* on the file 'f'.				*/

# endif

extern	void	WriteStringMemory ARGS ((void));
			/* The contents of the string memory is printed	*/
			/* on standard output.				*/

extern	void	InitStringMemory ARGS ((void));
			/* The string memory is initialized.		*/

extern	void	CloseStringMemory ARGS ((void));
			/* The string memory is finalized.		*/

# endif
