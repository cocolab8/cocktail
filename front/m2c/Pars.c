#include "SYSTEM_.h"

#ifndef DEFINITION_WriteTok
#include "WriteTok.h"
#endif

#ifndef DEFINITION_Characte
#include "Characte.h"
#endif

#ifndef DEFINITION_Path
#include "Path.h"
#endif

#ifndef DEFINITION_Checks
#include "Checks.h"
#endif

#ifndef DEFINITION_Errors
#include "Errors.h"
#endif

#ifndef DEFINITION_Parser
#include "Parser.h"
#endif

#ifndef DEFINITION_Idents
#include "Idents.h"
#endif

#ifndef DEFINITION_Scanner
#include "Scanner.h"
#endif

#ifndef DEFINITION_StringM
#include "StringM.h"
#endif

#ifndef DEFINITION_TokenTab
#include "TokenTab.h"
#endif

static CARDINAL Z131;


void BEGIN_MODULE ARGS ((void))
{
BEGIN_WriteTok ();
BEGIN_Characte ();
BEGIN_Path ();
BEGIN_Checks ();
BEGIN_Errors ();
BEGIN_Parser ();
BEGIN_Idents ();
BEGIN_Scanner ();
BEGIN_StringM ();
BEGIN_TokenTab ();

Zp1PEAFi_13();
Zfb3DLQ_15();
ZblNKKO_54();
Zpky9FDA_8();
ZqxDADwjx_25();
Z131 = ZmfDOBA_39();
ZblNKKO_56();
}
