/* $Id: ParsDrv.cxx,v 1.4 1996/05/08 15:59:29 grosch rel $ */

$@ # include "$.h"
$@ # include "@.h"

int main (void)
{
$@    @ ParserObj;
$@    ParserObj.ScannerObj = new $;
   return ParserObj.Parse ();
}
