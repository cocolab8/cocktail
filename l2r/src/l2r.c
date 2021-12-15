/* $Id: l2r.c,v 1.2 1997/05/27 21:46:44 grosch rel $ */

/*
 * $Log: l2r.c,v $
 * Revision 1.2  1997/05/27 21:46:44  grosch
 * truncation of filenames to 8.3 format
 *
 * Revision 1.1  1995/02/23 19:54:01  grosch
 * renamed Positions to Position, StringMem to StringM, Relations to Relation
 *
 * Revision 1.0  1993/08/17  16:15:48  grosch
 * Initial revision
 *
 */

# include <stdio.h>
# include "Scanner.h"
# include "Parser.h"
# include "StringBu.h"

main ()
{
  InitStringMemory	();
  InitStringBuffer	();
  BeginScanner		();
  (void) Parser		();		/* parse input and copy GLOBAL section */
  CloseParser 		();
  (void) printf		("}\n");	/* close GLOBAL section */
  print_local		();
  print_macrodefs	();
  print_startconds	();
  WriteStringBuffer	();
  return 0;
}
