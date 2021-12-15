# ifndef yyIdents
# define yyIdents

/* $Id: Idents.h,v 1.26 2008/09/12 14:13:00 grosch rel $ */

/*
 * $Log: Idents.h,v $
 * Revision 1.26  2008/09/12 14:13:00  grosch
 * improved support for 64 bit machines (added rIntType.h)
 * removed type casts to (void)
 *
 * Revision 1.25  2006/09/06 15:22:42  grosch
 * added missing function GetWLength
 *
 * Revision 1.24  2005/05/23 12:26:27  grosch
 * changed #include <config.h> to #include "config.h"
 *
 * Revision 1.23  2001/01/28 15:05:29  grosch
 * unified treatment of include file wchar.h
 *
 * Revision 1.22  2001/01/24 17:03:46  grosch
 * modified treatment of wchar.h for Solaris
 *
 * Revision 1.21  2000/09/04 13:34:15  grosch
 * changed # include "config.h" to <config.h>
 *
 * Revision 1.20  2000/08/22 11:43:41  grosch
 * added const to char *
 * added support for wide idents (wchar_t)
 *
 * Revision 1.19  2000/04/10 15:42:05  grosch
 * introduced ifdef HAVE_ARGS
 * cosmetic changes
 * renamed TablePtr into IdentTablePtr
 * added functions MakeIdent1 and GetLength
 *
 * Revision 1.18  1998/02/11 12:24:18  grosch
 * removed static arrays that are extended later
 * changed automatic initialization
 *
 * Revision 1.17  1997/11/30 22:29:41  grosch
 * eliminated use of type cardinal
 * added function GetCStr
 *
 * Revision 1.16  1997/05/27 13:25:04  grosch
 * truncation of filenames to 8.3 format
 *
 * Revision 1.15  1997/04/08 13:38:16  grosch
 * added prefix yy to all argument names
 *
 * Revision 1.14  1996/07/25  16:51:34  grosch
 * adaption to MS VC++
 *
 * Revision 1.13  1995/05/09  13:53:42  grosch
 * added void to argument list of functions without arguments
 *
 * Revision 1.12  1995/03/20  15:37:30  grosch
 * truncate lines to at most 80 characters
 *
 * Revision 1.11  1995/02/23  20:11:10  grosch
 * renamed Positions to Position, StringMem to StringM, Relations to Relation
 * output lines with at most 132 characters
 *
 * Revision 1.10  1994/12/04  19:29:55  grosch
 * added ANSI-C prototypes
 *
 * Revision 1.9  1994/06/13  09:36:11  grosch
 * cosmetic changes
 *
 * Revision 1.8  1992/08/07  14:36:51  grosch
 * added comments
 *
 * Revision 1.7  1992/02/18  12:52:30  grosch
 * changed tString from unsigned char * to char *
 *
 * Revision 1.6  1991/11/21  14:28:16  grosch
 * new version of RCS on SPARC
 *
 * Revision 1.5  91/09/18  15:18:47  grosch
 * added procedure GetStringRef
 *
 * Revision 1.4  91/07/17  17:23:08  grosch
 * introduced ARGS trick for ANSI compatibility
 *
 * Revision 1.3  91/01/21  12:13:21  grosch
 * some performance improvements
 *
 * Revision 1.2  90/07/04  14:33:56  grosch
 * introduced conditional include
 *
 * Revision 1.1  89/12/08  17:22:12  grosch
 * added variable NoIdent
 *
 * Revision 1.0  88/10/04  11:44:39  grosch
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
# include "StringM.h"

/* Identifier table: maps strings unambiguously to integers		*/
/*		     supports single byte and multi byte strings	*/

# define BeginIdents InitIdents

/* Support for single byte strings: char []				*/

typedef uint32_t	tIdent;

extern const tIdent NoIdent; /* An empty identifier (empty string)	*/

extern	tIdent	MakeIdent1	ARGS ((register const char * yystring));
			/* The string is mapped to a unique		*/
			/* identifier (an integer) which is returned.	*/
			/* The string has to be null-terminated and may	*/
			/* not contain null characters.			*/

extern	tIdent	MakeIdent	ARGS ((register const char * yystring,
				       register int yylength));
			/* The string (of length) is mapped to a unique	*/
			/* identifier (an integer) which is returned.	*/
			/* The string has not to be null-terminated and	*/
			/* may contain null characters.			*/

extern	void	GetString	ARGS ((tIdent yyident, char * yystring));
			/* Returns the string whose identifier is 'ident'. */

extern	tStringRef GetStringRef ARGS ((tIdent yyident));
			/* Returns a reference to the string identified	*/
			/* by 'ident'.					*/

extern	char *	GetCStr		ARGS ((tIdent yyident));
			/* Returns the address of the null-terminated	*/
			/* string identified by 'ident'.		*/

extern	int	GetLength	ARGS ((tIdent yyident));
			/* Returns the length of the string whose	*/
			/* identifier is 'ident'.			*/

extern	tIdent	MaxIdent	ARGS ((void));
			/* Returns the currently maximal identifier.	*/

extern	void	WriteIdent	ARGS ((FILE * yyfile, tIdent yyident));
			/* The string encoded by the identifier 'ident'	*/
			/* is printed on the file.			*/

# if HAVE_WCHAR_T

/* Support for multi byte strings: wchar_t []				*/

typedef uint32_t	tWIdent;

extern const tWIdent NoWIdent; /* An empty identifier (empty string)	*/

extern	tWIdent	MakeWIdent1	ARGS ((register const wchar_t * yystring));
			/* The string is mapped to a unique		*/
			/* identifier (an integer) which is returned.	*/
			/* The string has to be null-terminated and may	*/
			/* not contain null characters.			*/

extern	tWIdent	MakeWIdent	ARGS ((register const wchar_t * yystring,
				       register int yylength));
			/* The string (of length) is mapped to a unique	*/
			/* identifier (an integer) which is returned.	*/
			/* The string has not to be null-terminated and	*/
			/* may contain null characters.			*/

extern	void	GetWString	ARGS ((tWIdent yyident, wchar_t * yystring));
			/* Returns the string whose identifier is 'ident'. */

extern	tWStringRef GetWStringRef ARGS ((tWIdent yyident));
			/* Returns a reference to the string identified	*/
			/* by 'ident'.					*/

extern	wchar_t * GetWCStr	ARGS ((tWIdent yyident));
			/* Returns the address of the null-terminated	*/
			/* string identified by 'ident'.		*/

/* extern int	GetWLength	ARGS ((tWIdent yyident)); */
# define GetWLength(ident) GetLength(ident)
			/* Returns the length of the string whose	*/
			/* identifier is 'ident'.			*/

extern	void	WriteWIdent	ARGS ((FILE * yyfile, tWIdent yyident));
			/* The string encoded by the identifier 'ident'	*/
			/* is printed on the file.			*/

# endif

extern	void	WriteIdents	ARGS ((void));
			/* The contents of the identifier table is	*/
			/* printed on the standard output.		*/

extern	void	InitIdents	ARGS ((void));
			/* The identifier table is initialized.		*/

extern	void	CloseIdents	ARGS ((void));
			/* The identifier table is finalized.		*/

extern	void	WriteHashTable	ARGS ((void));

# endif
