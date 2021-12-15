#include "SYSTEM_.h"

#ifndef DEFINITION_Scanner
#include "Scanner.h"
#endif

#ifndef DEFINITION_IO
#include "IO.h"
#endif

#ifndef DEFINITION_rSystem
#include "rSystem.h"
#endif

static INTEGER Z124;


void BEGIN_MODULE ARGS ((void))
{
BEGIN_Scanner ();
BEGIN_IO ();
BEGIN_rSystem ();

Zpky9FDA_6();
do {
Z124 = Zpky9FDA_8();
} while (!(Z124 == Zpky9FDA_1));
Zpky9FDA_13();
ZfM_34();
rExit(0L);
}
