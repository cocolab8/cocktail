#include "SYSTEM_.h"

#ifndef DEFINITION_Parser
#include "Parser.h"
#endif

#ifndef DEFINITION_IO
#include "IO.h"
#endif



void BEGIN_MODULE ARGS ((void))
{
BEGIN_Parser ();
BEGIN_IO ();

if (ZmfDOBA_42() == 0) {
}
ZmfDOBA_44();
ZfM_34();
}
