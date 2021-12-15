/* $Id: StringBu.h,v 1.2 2001/01/10 15:57:50 grosch rel $ */

/*
 * $Log: StringBu.h,v $
 * Revision 1.2  2001/01/10 15:57:50  grosch
 * introduced ifdef HAVE_ARGS
 *
 * Revision 1.1  1997/05/27 21:46:44  grosch
 * truncation of filenames to 8.3 format
 *
 * Revision 1.0  1993/08/17 16:15:47  grosch
 * Initial revision
 *
 */

# include "ratc.h"

extern	void	BufString		ARGS ((tString string));
   /* stores string 's' in the string buffer		*/

extern	void	WriteStringBuffer	ARGS ((void));
   /* the contents of the string buffer is printed	*/
   /* on the terminal					*/

extern	void	InitStringBuffer	ARGS ((void));
