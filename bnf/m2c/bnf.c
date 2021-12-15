#include "SYSTEM_.h"

#ifndef DEFINITION_ArgCheck
#include "ArgCheck.h"
#endif

#ifndef DEFINITION_Errors
#include "Errors.h"
#endif

#ifndef DEFINITION_IO
#include "IO.h"
#endif

#ifndef DEFINITION_MakeBNF
#include "MakeBNF.h"
#endif

#ifndef DEFINITION_Parser
#include "Parser.h"
#endif

#ifndef DEFINITION_Path
#include "Path.h"
#endif

#ifndef DEFINITION_Scanner
#include "Scanner.h"
#endif

#ifndef DEFINITION_StringM
#include "StringM.h"
#endif

#ifndef DEFINITION_Idents
#include "Idents.h"
#endif

#ifndef DEFINITION_rSystem
#include "rSystem.h"
#endif

#ifndef DEFINITION_TokenTab
#include "TokenTab.h"
#endif

static CHAR Z141 [] = "ErrorTab";
static CARDINAL Z142;
static BOOLEAN Z143;
static INTEGER Z144;


void BEGIN_MODULE ARGS ((void))
{
BEGIN_ArgCheck ();
BEGIN_Errors ();
BEGIN_IO ();
BEGIN_MakeBNF ();
BEGIN_Parser ();
BEGIN_Path ();
BEGIN_Scanner ();
BEGIN_StringM ();
BEGIN_Idents ();
BEGIN_rSystem ();
BEGIN_TokenTab ();

Zp1PEAFi_13();
Zfb3DLQ_15();
(void) strncpy ((char *)ZblNKKO_58.A, (char *)Z141, sizeof (ZblNKKO_58.A));
ZmfFF_0(ZblNKKO_58.A, 256L);
ZblNKKO_54();
ZehCfg728_5();
Z143 = ZehCfg728_1;
if (Z143) {
ZqxDADwjx_25();
Zpky9FDA_8();
Z142 = ZmfDOBA_39();
Z143 = ZblNKKO_51.A[ZblNKKO_42] == 0;
}
if (Z143) {
Zjc6AcEI_0((ZDz6VQCC_4)ZfM_1);
Z144 = 0;
} else {
Z144 = 1;
}
ZblNKKO_56();
ZfM_34();
rExit(Z144);
}
