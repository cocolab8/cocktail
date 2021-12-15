/* $Id: ScanDrv.c,v 2.9 1998/06/24 15:52:15 grosch rel $ */

# include <stdio.h>
# include "Position.h"
$@ # include "@.h"

# define WordSize 2048

int main ARGS ((void))
{
   int Token, Count = 0;
   char Word [WordSize];

$@    $_BeginScanner ();
   do {
$@       Token = $_GetToken ();
      Count ++;
# ifdef Debug
$@       if (Token != $_EofToken) {
$@ 	 if ($_TokenLength < WordSize) {
$@ 	    (void) $_GetWord (Word);
	 } else {
$@ 	    strncpy (Word, $_TokenPtr, WordSize - 1);
	    Word [WordSize - 1] = '\0';
	 }
      } else {
	 Word [0] = '\0';
      }
$@       WritePosition (stdout, $_Attribute.Position);
      (void) printf ("%5d %s\n", Token, Word);
# endif
$@    } while (Token != $_EofToken);
$@    $_CloseScanner ();
   (void) printf ("%d\n", Count);
   return 0;
}
