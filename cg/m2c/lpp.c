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

#ifndef DEFINITION_Position
#include "Position.h"
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

#ifndef DEFINITION_GramMod
#include "GramMod.h"
#endif

#ifndef DEFINITION_GramC
#include "GramC.h"
#endif

#ifndef DEFINITION_GramYacc
#include "GramYacc.h"
#endif

#ifndef DEFINITION_GramAda
#include "GramAda.h"
#endif

#ifndef DEFINITION_GramJava
#include "GramJava.h"
#endif

static Zp1PEAFD_2 Z211, Z212, Z213;
static struct S_1 {
CHAR A[255 + 1];
} Z214, Z215;
static SHORTCARD Z216;
static CHAR Z217;
static BOOLEAN Z218;
static ZfM_3 Z219 ARGS ((Zp1PEAFD_2 Z220));
static void Z222 ARGS ((Zp1PEAFD_2 Z220, ZfM_3 Z187));


static ZfM_3 Z219
# ifdef HAVE_ARGS
(Zp1PEAFD_2 Z220)
# else
(Z220)
Zp1PEAFD_2 Z220;
# endif
{
Zp1PEAFD_2 Z213;
INTEGER Z221;

if (ZpmCQ_25(ORD('7'), &Zq0A4_171)) {
Zp1PEAFD_13((STRING)"yy", 2L, &Z213);
Zp1PEAFD_5(&Z213, &Z220);
Zp1PEAFD_6(&Z213, '\0');
Zp1PEAFD_14(&Z213, Z215.A, 256L);
} else {
Zp1PEAFD_6(&Z220, '\0');
Zp1PEAFD_14(&Z220, Z215.A, 256L);
}
Z221 = ZfM_20(Z215.A, 256L);
if (Z221 < 0) {
INC(Zq0A4_0);
ZblNKKO_45((STRING)"can not open file", 17L, (LONGCARD)ZblNKKO_14, ZmtLFGGBG_1, (LONGCARD)ZblNKKO_32, ADR (Z215));
}
return Z221;
}

static void Z222
# ifdef HAVE_ARGS
(Zp1PEAFD_2 Z220, ZfM_3 Z187)
# else
(Z220, Z187)
Zp1PEAFD_2 Z220;
ZfM_3 Z187;
# endif
{
Zp1PEAFD_2 Z213;

ZfM_21(Z187);
if (ZpmCQ_25(ORD('7'), &Zq0A4_171)) {
Zp1PEAFD_13((STRING)"gupd ", 5L, &Z213);
Zp1PEAFD_5(&Z213, &Z220);
Zp1PEAFD_13((STRING)" yy", 3L, &Z212);
Zp1PEAFD_5(&Z213, &Z212);
Zp1PEAFD_5(&Z213, &Z220);
Zp1PEAFD_6(&Z213, '\0');
Zp1PEAFD_14(&Z213, Z215.A, 256L);
Z216 = rSystem(Z215.A, 256L);
}
}

void BEGIN_MODULE ARGS ((void))
{
BEGIN_rSystem ();
BEGIN_rMemory ();
BEGIN_IO ();
BEGIN_Strings ();
BEGIN_Idents ();
BEGIN_Sets ();
BEGIN_Position ();
BEGIN_Errors ();
BEGIN_Scanner ();
BEGIN_Parser ();
BEGIN_Tree ();
BEGIN_Semantic ();
BEGIN_Order ();
BEGIN_Dialog ();
BEGIN_GramMod ();
BEGIN_GramC ();
BEGIN_GramYacc ();
BEGIN_GramAda ();
BEGIN_GramJava ();

Zp1PEAFD_4(&Z211);
Zq0A4_175.A[0] = '\0';
Zpky9FDA_2 = GetArgCount() - 1;
Z218 = FALSE;
Zpky9FDA_1 = 0;
for (;;) {
INC(Zpky9FDA_1);
if (Zpky9FDA_1 > Zpky9FDA_2) {
goto EXIT_1;
}
GetArgument(Zpky9FDA_1, Z214.A, 256L);
if (Z214.A[0] == '-') {
if (Z214.A[1] == 'l') {
Zp1PEAFD_4(&Z211);
Z216 = 2;
for (;;) {
Z217 = Z214.A[Z216];
if (Z217 == '\0') {
goto EXIT_2;
}
Zp1PEAFD_6(&Z211, Z217);
INC(Z216);
} EXIT_2:;
Zp1PEAFD_6(&Z211, DirectorySeparator());
} else {
Z216 = 0;
for (;;) {
INC(Z216);
Z217 = Z214.A[Z216];
if (Z217 == '\0') {
goto EXIT_3;
} else if (Z217 == '?') {
ZpmCQ_13(&Zq0A4_171, ORD('h'));
} else {
ZpmCQ_13(&Zq0A4_171, ORD(Z217));
}
} EXIT_3:;
Z218 = TRUE;
}
} else if (Z214.A[0] == '+') {
Z216 = 0;
for (;;) {
INC(Z216);
Z217 = Z214.A[Z216];
if (Z217 == '\0') {
goto EXIT_4;
} else {
ZpmCQ_13(&Zq0A4_171, ORD(Z217) - ORD('A'));
}
} EXIT_4:;
Z218 = TRUE;
} else if (Z214.A[0] == '?') {
ZpmCQ_13(&Zq0A4_171, ORD('h'));
Z218 = TRUE;
} else {
Z216 = 0;
do {
Z217 = Z214.A[Z216];
Zq0A4_175.A[Z216] = Z217;
INC(Z216);
} while (!(Z217 == '\0'));
goto EXIT_1;
}
} EXIT_1:;
if (!Z218) {
ZpmCQ_13(&Zq0A4_171, ORD('x'));
ZpmCQ_13(&Zq0A4_171, ORD('z'));
}
if (ZpmCQ_25(ORD('+'), &Zq0A4_171)) {
ZpmCQ_13(&Zq0A4_171, ORD('c'));
}
if (ZpmCQ_25(ORD('x'), &Zq0A4_171) || ZpmCQ_25(ORD('z'), &Zq0A4_171) || ZpmCQ_25(ORD('u'), &Zq0A4_171)) {
ZpmCQ_13(&Zq0A4_171, ORD('.'));
ZpmCQ_13(&Zq0A4_171, ORD('B'));
}
if (ZpmCQ_25(ORD('I') - ORD('A'), &Zq0A4_171)) {
ZpmCQ_13(&Zq0A4_171, ORD('v'));
}
if (ZpmCQ_25(ORD('h'), &Zq0A4_171)) {
ZpmCQ_14(&Zq0A4_171, ORD('h'));
Zq0A4_172 = ZfM_1;
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"usage: lpp [-options] [files]", 29L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" x generate scanner specification", 33L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" z generate parser  specification for lark", 42L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" u generate parser  specification for yacc", 42L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" v omit actions in the generated parser specifications", 54L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" j allow undefined node types; define implicitly as terminals", 61L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" c generate C   code (default: Modula-2)", 40L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" + generate C++ code", 20L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" - generate Ada code", 20L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" h print help information", 25L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" H print more options", 21L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" W suppress warnings", 20L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" B allow missing attribute computations in extended node types", 62L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" 1 print inserted copy rules", 28L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" 2 print inherited attribute computation rules", 46L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" 7 touch output files only if necessary", 39L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" 8 report storage consumption", 29L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" +I allow incomplete attribute computation rules", 48L);
ZfM_33(Zq0A4_172);
}
if (ZpmCQ_25(ORD('H'), &Zq0A4_171)) {
ZpmCQ_14(&Zq0A4_171, ORD('H'));
Zq0A4_172 = ZfM_1;
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"usage: lpp [-options] [-ldir] [files]", 37L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"options for evaluator module", 28L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" V print visit sequences", 24L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" M print summary of all node types (rules) from source", 54L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" P print dependency relations DP", 32L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" S print dependency relations SNC", 33L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" N print dependency relations DNC", 33L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" O print dependency relations OAG", 33L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" G print attribute instances sorted by declaration order", 56L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" E print attribute instances sorted by evaluation order", 55L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" C print dependencies introduced for total order", 48L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" J start dialog system", 22L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" Q browse internal data structure with text browser", 51L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"+G browse internal data structure with graphical browser", 56L);
ZfM_33(Zq0A4_172);
}
if (!ZpmCQ_26(Zq0A4_171)) {
if (ZpmCQ_25(ORD('c'), &Zq0A4_171) || ZpmCQ_25(ORD('J'), &Zq0A4_171)) {
Zp1PEAFD_13((STRING)"int", 3L, &Z212);
} else {
Zp1PEAFD_13((STRING)"INTEGER", 7L, &Z212);
}
Zq0A4_79 = Zfb3DLQ_2(&Z212);
Zpky9FDA_9.Y0 = ZmtLFGGBG_1;
if (Zq0A4_175.A[0] != '\0') {
Zpky9FDA_12(Zq0A4_175.A, 256L);
Zp1PEAFD_13(Zq0A4_175.A, 256L, &Z212);
} else {
Zp1PEAFD_13((STRING)"-", 1L, &Z212);
}
Zpky9FDA_9.Y0.Y0 = Zfb3DLQ_2(&Z212);
ZblNKKO_41((BOOLEAN)(!ZpmCQ_25(ORD('@'), &Zq0A4_171)));
INC1(Zq0A4_0, ZmfDOBA_56());
ZpmC89LG6_6(Zq0A4_279);
if (Zq0A4_0 > 0) {
ZblNKKO_46((ZDz6VQCC_4)ZfM_2);
ZfM_34();
rExit(1L);
}
}
if (ZpmCQ_25(ORD('x'), &Zq0A4_171)) {
if (Zq0A4_279->U_1.V_32.Y31.Y2 == Zfb3DLQ_1) {
Zp1PEAFD_13((STRING)"Scanner", 7L, &Z213);
} else {
Zq0A4_197(Zq0A4_279->U_1.V_32.Y31.Y2, &Z213);
}
Zp1PEAFD_13((STRING)".rpp", 4L, &Z212);
Zp1PEAFD_5(&Z213, &Z212);
Zq0A4_172 = Z219(Z213);
Zq0A4_173.Y0 = Zfb3DLQ_2(&Z213);
Zq0A4_173.Y1 = 1;
Zq0A4_174 = ZmtLFGGBG_1;
if (ZpmCQ_25(ORD('c'), &Zq0A4_171)) {
ZdnD8e_4(Zq0A4_279);
} else if (ZpmCQ_25(ORD('-'), &Zq0A4_171)) {
ZdnD8cZz_4(Zq0A4_279);
} else if (ZpmCQ_25(ORD('J'), &Zq0A4_171)) {
ZdnD8lgAA_4(Zq0A4_279);
} else {
ZdnD8oqD_4(Zq0A4_279);
}
Z222(Z213, Zq0A4_172);
}
if (ZpmCQ_25(ORD('z'), &Zq0A4_171)) {
Zq0A4_197(Zq0A4_279->U_1.V_32.Y31.Y3, &Zq0A4_90);
Zp1PEAFD_3(&Z213, &Zq0A4_90);
Zp1PEAFD_13((STRING)".lrk", 4L, &Z212);
Zp1PEAFD_5(&Z213, &Z212);
Zq0A4_172 = Z219(Z213);
Zq0A4_173.Y0 = Zfb3DLQ_2(&Z213);
Zq0A4_173.Y1 = 1;
Zq0A4_174 = ZmtLFGGBG_1;
if (ZpmCQ_25(ORD('c'), &Zq0A4_171)) {
ZdnD8e_3(Zq0A4_279);
} else if (ZpmCQ_25(ORD('-'), &Zq0A4_171)) {
ZdnD8cZz_3(Zq0A4_279);
} else if (ZpmCQ_25(ORD('J'), &Zq0A4_171)) {
ZdnD8lgAA_3(Zq0A4_279);
} else {
ZdnD8oqD_3(Zq0A4_279);
}
Z222(Z213, Zq0A4_172);
} else if (ZpmCQ_25(ORD('u'), &Zq0A4_171)) {
Zq0A4_197(Zq0A4_279->U_1.V_32.Y31.Y3, &Zq0A4_90);
Zp1PEAFD_3(&Z213, &Zq0A4_90);
Zp1PEAFD_13((STRING)".y", 2L, &Z212);
Zp1PEAFD_5(&Z213, &Z212);
Zq0A4_172 = Z219(Z213);
Zq0A4_173.Y0 = Zfb3DLQ_2(&Z213);
Zq0A4_173.Y1 = 1;
Zq0A4_174 = ZmtLFGGBG_1;
ZdnD80oy0_3(Zq0A4_279);
Z222(Z213, Zq0A4_172);
}
if (ZpmCQ_25(ORD('.'), &Zq0A4_171)) {
ZlvG3A_4(Zq0A4_279);
}
ZblNKKO_46((ZDz6VQCC_4)ZfM_2);
if (ZpmCQ_25(ORD('Q'), &Zq0A4_171)) {
Zq0A4_356(Zq0A4_279);
}
if (ZpmCQ_25(ORD('J') - ORD('A'), &Zq0A4_171)) {
Zab47EG_0(Zq0A4_279);
}
if (ZpmCQ_25(ORD('8'), &Zq0A4_171)) {
ZfM_33((ZDz6VQCC_4)ZfM_2);
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)"Memory", 6L);
ZfM_25((ZDz6VQCC_4)ZfM_2, (LONGINT)ZDtgCFKU_0, 8L);
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)"  Heap", 6L);
ZfM_25((ZDz6VQCC_4)ZfM_2, (LONGINT)Zq0A4_280, 8L);
ZfM_33((ZDz6VQCC_4)ZfM_2);
}
ZfM_34();
rExit(0L);
}
