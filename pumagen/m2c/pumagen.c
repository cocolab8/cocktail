#include "SYSTEM_.h"

#ifndef DEFINITION_rSystem
#include "rSystem.h"
#endif

#ifndef DEFINITION_rMemory
#include "rMemory.h"
#endif

#ifndef DEFINITION_IO
#include "IO.h"
#endif

#ifndef DEFINITION_Strings
#include "Strings.h"
#endif

#ifndef DEFINITION_Idents
#include "Idents.h"
#endif

#ifndef DEFINITION_Sets
#include "Sets.h"
#endif

#ifndef DEFINITION_Errors
#include "Errors.h"
#endif

#ifndef DEFINITION_Scanner
#include "Scanner.h"
#endif

#ifndef DEFINITION_Parser
#include "Parser.h"
#endif

#ifndef DEFINITION_Tree
#include "Tree.h"
#endif

#ifndef DEFINITION_Semantic
#include "Semantic.h"
#endif

#ifndef DEFINITION_Order
#include "Order.h"
#endif

#ifndef DEFINITION_Dialog
#include "Dialog.h"
#endif

#ifndef DEFINITION_Puma0
#include "Puma0.h"
#endif

static Zp1PEAFD_2 Z208;
static struct S_1 {
CHAR A[255 + 1];
} Z209;
static SHORTCARD Z210;
static CHAR Z211;


void BEGIN_MODULE ARGS ((void))
{
BEGIN_rSystem ();
BEGIN_rMemory ();
BEGIN_IO ();
BEGIN_Strings ();
BEGIN_Idents ();
BEGIN_Sets ();
BEGIN_Errors ();
BEGIN_Scanner ();
BEGIN_Parser ();
BEGIN_Tree ();
BEGIN_Semantic ();
BEGIN_Order ();
BEGIN_Dialog ();
BEGIN_Puma0 ();

Zq0A4_175.A[0] = '\0';
Zpky9FDA_2 = GetArgCount() - 1;
Zpky9FDA_1 = 0;
for (;;) {
INC(Zpky9FDA_1);
if (Zpky9FDA_1 > Zpky9FDA_2) {
goto EXIT_1;
}
GetArgument(Zpky9FDA_1, Z209.A, 256L);
if (Z209.A[0] == '-') {
Z210 = 0;
for (;;) {
INC(Z210);
Z211 = Z209.A[Z210];
if (Z211 == '\0') {
goto EXIT_2;
} else if (Z211 == '?') {
ZpmCQ_13(&Zq0A4_171, ORD('h'));
ZpmCQ_13(&Zq0A4_171, ORD('H'));
} else {
ZpmCQ_13(&Zq0A4_171, ORD(Z211));
}
} EXIT_2:;
} else if (Z209.A[0] == '?') {
ZpmCQ_13(&Zq0A4_171, ORD('h'));
ZpmCQ_13(&Zq0A4_171, ORD('H'));
} else {
Z210 = 0;
do {
Z211 = Z209.A[Z210];
Zq0A4_175.A[Z210] = Z211;
INC(Z210);
} while (!(Z211 == '\0'));
goto EXIT_1;
}
} EXIT_1:;
if (ZpmCQ_25(ORD('h'), &Zq0A4_171)) {
ZpmCQ_14(&Zq0A4_171, ORD('h'));
Zq0A4_172 = ZfM_1;
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"usage: pumagen [-options] [<files>]", 35L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" Q browse internal data structure", 33L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" J start dialog system", 22L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" 8 report storage consumption", 29L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" h print help information", 25L);
ZfM_33(Zq0A4_172);
} else {
Zp1PEAFD_13((STRING)"int", 3L, &Z208);
Zq0A4_79 = Zfb3DLQ_2(&Z208);
if (Zq0A4_175.A[0] != '\0') {
Zpky9FDA_12(Zq0A4_175.A, 256L);
Zp1PEAFD_13(Zq0A4_175.A, 256L, &Z208);
Zpky9FDA_9.Y0.Y0 = Zfb3DLQ_2(&Z208);
} else {
Zpky9FDA_9.Y0.Y0 = Zfb3DLQ_1;
}
ZblNKKO_41((BOOLEAN)(!ZpmCQ_25(ORD('@'), &Zq0A4_171)));
Zq0A4_0 = ZmfDOBA_56();
ZpmC89LG6_6(Zq0A4_279);
if (Zq0A4_0 > 0) {
ZblNKKO_46((ZDz6VQCC_4)ZfM_2);
ZfM_34();
rExit(1L);
}
}
if (ZpmCQ_25(ORD('.'), &Zq0A4_171)) {
ZlvG3A_4(Zq0A4_279);
}
ZblNKKO_46((ZDz6VQCC_4)ZfM_2);
ZblNKKO_41((BOOLEAN)(!ZpmCQ_25(ORD('@'), &Zq0A4_171)));
if (ZpmCQ_25(ORD('Q'), &Zq0A4_171)) {
Zq0A4_356(Zq0A4_279);
}
if (ZpmCQ_25(ORD('J') - ORD('A'), &Zq0A4_171)) {
Zab47EG_0(Zq0A4_279);
}
if (Zq0A4_0 > 0) {
ZfM_34();
rExit(1L);
}
Zq0A4_172 = ZfM_20((STRING)"Tree3.h", 7L);
ZmzL8F_3(Zq0A4_279);
ZfM_21(Zq0A4_172);
Zq0A4_172 = ZfM_20((STRING)"Tree3.c", 7L);
ZmzL8F_4(Zq0A4_279);
ZfM_21(Zq0A4_172);
if (ZpmCQ_25(ORD('8'), &Zq0A4_171)) {
ZfM_33((ZDz6VQCC_4)ZfM_2);
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)"Memory", 6L);
ZfM_25((ZDz6VQCC_4)ZfM_2, (LONGINT)ZDtgCFKU_0, 8L);
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)"  Heap", 6L);
ZfM_25((ZDz6VQCC_4)ZfM_2, (LONGINT)Zq0A4_280, 8L);
ZfM_33((ZDz6VQCC_4)ZfM_2);
}
ZblNKKO_46((ZDz6VQCC_4)ZfM_2);
ZfM_34();
rExit(0L);
}
