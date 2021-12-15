/* $Id: y2l.c,v 1.1 1997/05/27 21:46:12 grosch rel $ */

/*
 * $Log: y2l.c,v $
 * Revision 1.1  1997/05/27 21:46:12  grosch
 * truncation of filenames to 8.3 format
 *
 * Revision 1.0  1993/08/17 16:24:33  grosch
 * Initial revision
 *
 */

# include "Scanner.h"
# include "Parser.h"

extern char *strcpy(), *strcat();

main (argc, argv)
   int argc;
   char * argv [];
{
  while (++ argv, -- argc) if (argv [0][0] == '-') generate_actions = 0;
  InitStringMemory	();
  BeginScanner		();
  (void) Parser		();
  CloseParser		();
  process_names		();
  print_global		();
  print_tokens		();
  print_opers		();
  print_rules		();
  return 0;
}
