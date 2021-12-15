/* $Id: ScanDrv.cxx,v 1.9 2000/05/25 08:58:02 grosch rel $ */

# include <stdio.h>
# include "Position.h"
$@ # include "@.h"

# define WordSize 2048

int main (void)
{
   int Token, Count = 0;
$@    @ Scanner;

   do {
      Token = Scanner.GetToken ();
      Count ++;
# ifdef Debug
      char Word [WordSize];
      if (Token != EofToken) {
	 if (Scanner.TokenLength < WordSize) {
	    (void) Scanner.GetWord (Word);
	 } else {
	    strncpy (Word, Scanner.TokenPtr, WordSize - 1);
	    Word [WordSize - 1] = '\0';
	 }
      } else {
	 Word [0] = '\0';
      }
      WritePosition (stdout, Scanner.Attribute.Position);
      (void) printf ("%5d %s\n", Token, Word);
# endif
   } while (Token != EofToken);
   (void) printf ("%d\n", Count);
   return 0;
}
