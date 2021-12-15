#include "SYSTEM_.h"

#ifndef DEFINITION_General
#include "General.h"
#endif

#ifndef DEFINITION_rMemory
#include "rMemory.h"
#endif

#ifndef DEFINITION_DynArray
#include "DynArray.h"
#endif

#ifndef DEFINITION_Errors
#include "Errors.h"
#endif

#ifndef DEFINITION_Strings
#include "Strings.h"
#endif

#ifndef DEFINITION_StringM
#include "StringM.h"
#endif

#ifndef DEFINITION_Times
#include "Times.h"
#endif

#ifndef DEFINITION_Sets
#include "Sets.h"
#endif

#ifndef DEFINITION_Relation
#include "Relation.h"
#endif

#ifndef DEFINITION_IO
#include "IO.h"
#endif

#ifndef DEFINITION_Layout
#include "Layout.h"
#endif

#ifndef DEFINITION_DefTable
#include "DefTable.h"
#endif

#ifndef DEFINITION_Tree
#include "Tree.h"
#endif

#ifndef DEFINITION_Nfa
#include "Nfa.h"
#endif

#ifndef DEFINITION_Dfa
#include "Dfa.h"
#endif

#ifndef DEFINITION_Traces
#include "Traces.h"
#endif

#ifndef DEFINITION_ScanTabs
#include "ScanTabs.h"
#endif

#ifndef DEFINITION_ScanGen
#include "ScanGen.h"
#endif

#ifndef DEFINITION_Classes
#include "Classes.h"
#endif

#ifndef DEFINITION_UniCode
#include "UniCode.h"
#endif

#ifndef DEFINITION_Strings
#include "Strings.h"
#endif

#ifndef DEFINITION_WStrings
#include "WStrings.h"
#endif

#ifndef DEFINITION_Idents
#include "Idents.h"
#endif

#ifndef DEFINITION_Errors
#include "Errors.h"
#endif

#ifndef DEFINITION_Relation
#include "Relation.h"
#endif

#ifndef DEFINITION_HugeSets
#include "HugeSets.h"
#endif

#ifndef DEFINITION_GenTabs
#include "GenTabs.h"
#endif

Zq0A4_11 ZdaDwjxF_6;
SHORTCARD ZdaDwjxF_7, ZdaDwjxF_8, ZdaDwjxF_9, ZdaDwjxF_10, ZdaDwjxF_11, ZdaDwjxF_12;
BOOLEAN ZdaDwjxF_13, ZdaDwjxF_14;
SHORTCARD ZdaDwjxF_15, ZdaDwjxF_16;
ZdaDwjxF_4 *ZdaDwjxF_17;
LONGINT ZdaDwjxF_18;
ZdaDwjxF_5 *ZdaDwjxF_19;
LONGINT ZdaDwjxF_20;

typedef struct S_1 *Z277;
typedef struct S_1 {
Z277 Y0;
ZpmCQ_4 Y1;
Zaf1_6 Y2;
} Z278;
typedef struct S_2 {
Z277 A[100000 + 1];
} Z282;
typedef struct S_3 {
Z277 A[100000 + 1];
} Z283;
typedef struct S_4 {
Zaf1_6 A[100000 + 1];
} Z284;
static Z282 *Z285;
static LONGINT Z286;
static Z283 *Z287;
static LONGINT Z288;
static Z284 *Z289;
static LONGINT Z290;
static Zaf1_6 Z291;
static ZpmCQ_4 Z292, Z293;
static INTEGER Z294;
static BOOLEAN Z295;
static BOOLEAN Z296;
static BOOLEAN Z297;
static void Z298 ARGS ((void));
static SHORTINT Z342 ARGS ((Zq0A4_11 Z346));
static void Z335 ARGS ((Zq0A4_11 Z346, Zki1_2 *Z352, ZpmCQ_4 *Z353, BOOLEAN *Z354));
static Zki1_2 Z338;
static SHORTCARD Z327;
static void Z340 ARGS ((CARDINAL Z310));
static void Z341 ARGS ((CARDINAL Z310));
static Zaf1_6 Z361 ARGS ((ZpmCQ_4 Z346));
static void Z364 ARGS ((void));
#define Z365	64
struct S_5 {
ZpmCQ_4 A[Zgd7EPBB_0 + 1];
};
static Zaf1_6 Z375;
static void Z376 ARGS ((CARDINAL Z310));
static void Z377 ARGS ((void));
static void Z382 ARGS ((void));
static void Z387 ARGS ((Zq0A4_11 Z346, Ztf1PEAFD_3 *Z351));
struct S_1_AddConstantRE;
static void Z388 ARGS ((Zaf1_6 Z385, Ztf1PEAFD_3 Z351, SHORTCARD Z327, ZpmCQ_4 Z339));
static Ztf1PEAFD_1 Z203 ARGS ((struct S_1_AddConstantRE *link));
struct S_1_AddConstantRE {
Ztf1PEAFD_3 *Z351;
SHORTCARD *Z393;
SHORTCARD *Z394;
BOOLEAN *Z395;
};
static void Z397 ARGS ((void));
static void Z401 ARGS ((void));
static void Z403 ARGS ((void));
static void Z410 ARGS ((CHAR Z411, ZrxAagD3_3 Z359));
static void Z408 ARGS ((SHORTCARD Z385, Zfb3DLQ_0 Z405, BOOLEAN Z412));
static ZolB7FGBG_3 Z420;
static void Z421 ARGS ((INTEGER Z422, INTEGER Z423));
static void Z424 ARGS ((void));
static void Z425 ARGS ((void));
static void Z426 ARGS ((void));

static void Z298
 ARGS ((void))
{
Zki1_2 Z299, Z300;
ZpmCQ_4 Z301, Z302;
BOOLEAN Z303, Z304;
Zq0A4_11 Z305;
Zq0A4_11 Z306;
Zq0A4_11 Z307;
Zq0A4_11 Z308;
SHORTCARD Z309;
Zki1_1 Z310;
SHORTINT Z311;

Zki1_5();
{
LONGCARD B_1 = 1, B_2 = ZdaDwjxF_9;

if (B_1 <= B_2)
for (Z310 = B_1;; Z310 += 1) {
if (Zki1_6((LONGCARD)Zki1_0) != Z310) {
exit (1);
}
if (Z310 >= B_2) break;
}
}
ZpmCQ_5(&Z301, (LONGCARD)ZdaDwjxF_12);
ZpmCQ_5(&Z302, (LONGCARD)ZdaDwjxF_12);
Z305 = ZdaDwjxF_6;
while (Z305 != Zq0A4_0) {
Z306 = Z305->U_1.V_3.Y2.Y2;
Z309 = Z306->U_1.V_7.Y6.Y6;
ZdaDwjxF_19->A[Z309].Y0 = Z306->U_1.V_7.Y6.Y2;
ZdaDwjxF_19->A[Z309].Y1 = Z306->U_1.V_7.Y6.Y3;
ZdaDwjxF_19->A[Z309].Y2 = Z306->U_1.V_7.Y6.Y4;
ZdaDwjxF_19->A[Z309].Y3 = Z306->U_1.V_7.Y6.Y5;
Z307 = Z306->U_1.V_7.Y6.Y1;
while (Z307 != Zq0A4_0) {
Z308 = Z307->U_1.V_3.Y2.Y2;
Z327 = Z308->U_1.V_8.Y7.Y5;
{
register ZdaDwjxF_2 *W_1 = &ZdaDwjxF_17->A[Z327];

W_1->Y1 = Z309;
W_1->Y2 = ZdaDwjxF_0;
W_1->Y0 = Z308->U_1.V_8.Y7.Y6;
}
if (!Z308->U_1.V_8.Y7.Y4) {
Z335(Z308->U_1.V_8.Y7.Y2, &Z299, &Z301, &Z303);
Z335(Z308->U_1.V_8.Y7.Y3, &Z300, &Z302, &Z304);
Z338 = Z299;
ZpmCQ_33(Z308->U_1.V_8.Y7.Y1, (ZpmCQ_1)Z340);
if (Z304) {
ZpmCQ_33(Z301, (ZpmCQ_1)Z341);
}
Z338 = Z300;
ZpmCQ_33(Z301, (ZpmCQ_1)Z340);
ZpmCQ_33(Z302, (ZpmCQ_1)Z341);
Z311 = Z342(Z308->U_1.V_8.Y7.Y3);
if (Z311 != ZdaDwjxF_1) {
ZdaDwjxF_17->A[Z327].Y2 = Z311;
} else {
Z311 = Z342(Z308->U_1.V_8.Y7.Y2);
if (Z311 != ZdaDwjxF_1) {
ZdaDwjxF_17->A[Z327].Y2 = -Z311;
} else {
ZdaDwjxF_17->A[Z327].Y2 = ZdaDwjxF_1;
ZpmCQ_5(&ZdaDwjxF_17->A[Z327].Y3, (LONGCARD)ZdaDwjxF_12);
ZpmCQ_30(&ZdaDwjxF_17->A[Z327].Y3, Z301);
}
}
}
Z307 = Z307->U_1.V_3.Y2.Y1;
}
Z305 = Z305->U_1.V_3.Y2.Y1;
}
Z295 = TRUE;
ZpmCQ_7(&Z301);
ZpmCQ_7(&Z302);
}

static SHORTINT Z342
# ifdef HAVE_ARGS
(Zq0A4_11 Z346)
# else
(Z346)
Zq0A4_11 Z346;
# endif
{
SHORTINT Z347, Z348;

if (Z346 == Zq0A4_0) {
return ZdaDwjxF_0;
}
switch (Z346->U_1.V_1.Y0.Y0) {
case Zq0A4_4:;
Z347 = Z342(Z346->U_1.V_3.Y2.Y1);
Z348 = Z342(Z346->U_1.V_3.Y2.Y2);
if (Z347 == Z348) {
return Z347;
} else {
return ZdaDwjxF_1;
}
break;
case Zq0A4_5:;
Z347 = Z342(Z346->U_1.V_3.Y2.Y1);
Z348 = Z342(Z346->U_1.V_3.Y2.Y2);
if (Z347 != ZdaDwjxF_1 && Z348 != ZdaDwjxF_1) {
return Z347 + Z348;
} else {
return ZdaDwjxF_1;
}
break;
case Zq0A4_6:;
case Zq0A4_7:;
return ZdaDwjxF_1;
break;
case Zq0A4_8:;
case Zq0A4_9:;
return 1;
break;
case Zq0A4_10:;
return Zp1PEAFi_4(Z346->U_1.V_6.Y5.Y1);
break;
}
}

static void Z335
# ifdef HAVE_ARGS
(Zq0A4_11 Z346, Zki1_2 *Z352, ZpmCQ_4 *Z353, BOOLEAN *Z354)
# else
(Z346, Z352, Z353, Z354)
Zq0A4_11 Z346;
Zki1_2 *Z352;
ZpmCQ_4 *Z353;
BOOLEAN *Z354;
# endif
{
Zki1_2 Z299, Z300;
ZpmCQ_4 Z301, Z302;
BOOLEAN Z303, Z304;
Zki1_1 Z310;
Ztf1PEAFD_3 Z355;
INTEGER Z356;

if (Z346 == Zq0A4_0) {
*Z352 = Zki1_0;
ZpmCQ_32(Z353);
*Z354 = TRUE;
return;
}
switch (Z346->U_1.V_1.Y0.Y0) {
case Zq0A4_4:;
ZpmCQ_5(&Z301, (LONGCARD)ZdaDwjxF_12);
ZpmCQ_5(&Z302, (LONGCARD)ZdaDwjxF_12);
Z335(Z346->U_1.V_3.Y2.Y1, &Z299, &Z301, &Z303);
Z335(Z346->U_1.V_3.Y2.Y2, &Z300, &Z302, &Z304);
*Z352 = Zki1_17(Z299, Z300);
ZpmCQ_30(Z353, Z301);
ZpmCQ_8(Z353, Z302);
*Z354 = Z303 || Z304;
ZpmCQ_7(&Z301);
ZpmCQ_7(&Z302);
break;
case Zq0A4_5:;
ZpmCQ_5(&Z301, (LONGCARD)ZdaDwjxF_12);
ZpmCQ_5(&Z302, (LONGCARD)ZdaDwjxF_12);
Z335(Z346->U_1.V_3.Y2.Y1, &Z299, &Z301, &Z303);
Z335(Z346->U_1.V_3.Y2.Y2, &Z300, &Z302, &Z304);
Z338 = Z300;
ZpmCQ_33(Z301, (ZpmCQ_1)Z340);
if (Z303) {
*Z352 = Zki1_17(Z299, Z300);
} else {
*Z352 = Z299;
}
if (Z304) {
ZpmCQ_30(Z353, Z301);
ZpmCQ_8(Z353, Z302);
} else {
ZpmCQ_30(Z353, Z302);
}
*Z354 = Z303 && Z304;
ZpmCQ_7(&Z301);
ZpmCQ_7(&Z302);
break;
case Zq0A4_6:;
ZpmCQ_5(&Z301, (LONGCARD)ZdaDwjxF_12);
Z335(Z346->U_1.V_2.Y1.Y1, &Z299, &Z301, &Z303);
Z338 = Z299;
ZpmCQ_33(Z301, (ZpmCQ_1)Z340);
*Z352 = Z299;
ZpmCQ_30(Z353, Z301);
*Z354 = Z303;
ZpmCQ_7(&Z301);
break;
case Zq0A4_7:;
ZpmCQ_5(&Z301, (LONGCARD)ZdaDwjxF_12);
Z335(Z346->U_1.V_2.Y1.Y1, &Z299, &Z301, &Z303);
*Z352 = Z299;
ZpmCQ_30(Z353, Z301);
*Z354 = TRUE;
ZpmCQ_7(&Z301);
break;
case Zq0A4_8:;
Z310 = Zki1_6((LONGCARD)Zki1_0);
*Z352 = Zki1_13((Zgd7EPBB_1)Z346->U_1.V_4.Y3.Y1, Z310);
ZpmCQ_31(Z353, Z310);
*Z354 = FALSE;
break;
case Zq0A4_9:;
ZpmCQ_5(&Z301, Zgd7EPBB_4);
ZpmCQ_30(&Z301, Z346->U_1.V_5.Y4.Y1);
Z310 = Zki1_6((LONGCARD)Zki1_0);
*Z352 = Zki1_0;
while (!ZpmCQ_26(Z301)) {
*Z352 = Zki1_14(Zki1_13(ZpmCQ_20(&Z301), Z310), *Z352);
}
ZpmCQ_31(Z353, Z310);
*Z354 = FALSE;
ZpmCQ_7(&Z301);
break;
case Zq0A4_10:;
Zp1PEAFi_9(Z346->U_1.V_6.Y5.Y1, &Z355);
Z356 = Ztf1PEAFD_9(&Z355);
if (Z356 > 0) {
Z310 = Zki1_6((LONGCARD)Zki1_0);
*Z352 = Zki1_13((Zgd7EPBB_1)Ztf1PEAFD_14(&Z355, (Ztf1PEAFD_2)Z356), Z310);
ZpmCQ_31(Z353, Z310);
for (Z356 = (INTEGER)(Ztf1PEAFD_9(&Z355) - 1); Z356 >= 1; Z356 += -1) {
Z310 = Zki1_6(*Z352);
*Z352 = Zki1_13((Zgd7EPBB_1)Ztf1PEAFD_14(&Z355, (Ztf1PEAFD_2)Z356), Z310);
}
*Z354 = FALSE;
} else {
*Z352 = Zki1_0;
ZpmCQ_32(Z353);
*Z354 = TRUE;
}
break;
}
}

static void Z340
# ifdef HAVE_ARGS
(CARDINAL Z310)
# else
(Z310)
CARDINAL Z310;
# endif
{
Zki1_9(Z310, Zki1_17(Zki1_10(Z310), Zki1_18(Z338)));
}

static void Z341
# ifdef HAVE_ARGS
(CARDINAL Z310)
# else
(Z310)
CARDINAL Z310;
# endif
{
Zki1_7(Z310, Z327);
}

static Zaf1_6 Z361
# ifdef HAVE_ARGS
(ZpmCQ_4 Z346)
# else
(Z346)
ZpmCQ_4 Z346;
# endif
{
Zaf1_6 Z281;
CARDINAL Z362;
Z277 Z363;

Z362 = ZpmCQ_18(&Z346) % (CARDINAL)Zki1_3;
Z363 = Z287->A[Z362];
while (Z363 != NIL) {
if (ZpmCQ_23(&Z363->Y1, &Z346)) {
return Z363->Y2;
}
Z363 = Z363->Y0;
}
Z281 = Zaf1_16();
if (Z281 == (LONGCARD)Z286) {
ZarQdhNDD_2((ADDRESS *)&Z285, &Z286, (LONGINT)sizeof (Z277));
}
Z285->A[Z281] = (Z277)ZDtgCFKU_1((LONGINT)sizeof (Z278));
ZpmCQ_5(&Z285->A[Z281]->Y1, Zki1_3);
ZpmCQ_30(&Z285->A[Z281]->Y1, Z346);
Z285->A[Z281]->Y2 = Z281;
Z285->A[Z281]->Y0 = Z287->A[Z362];
Z287->A[Z362] = Z285->A[Z281];
INC(Z291);
if (Z291 == (LONGCARD)Z290) {
ZarQdhNDD_2((ADDRESS *)&Z289, &Z290, (LONGINT)sizeof (Zaf1_6));
}
Z289->A[Z291] = Z281;
return Z281;
}

static void Z364
 ARGS ((void))
{
Zaf1_6 Z281;
Zki1_1 Z310;
ZpmCQ_4 Z366;
struct S_5 Z367;
Zki1_2 Z368;
Zgd7EPBB_1 Z359;
ZpmCQ_4 Z369;
SHORTCARD Z370;
ZpmCQ_4 Z371;

Z290 = Z365;
ZarQdhNDD_0((ADDRESS *)&Z289, &Z290, (LONGINT)sizeof (Zaf1_6));
Z291 = 0;
Z286 = ZdaDwjxF_12;
ZarQdhNDD_0((ADDRESS *)&Z285, &Z286, (LONGINT)sizeof (Z277));
Z288 = Zki1_3;
ZarQdhNDD_0((ADDRESS *)&Z287, &Z288, (LONGINT)sizeof (Z277));
{
LONGCARD B_3 = 0, B_4 = Zki1_3 - 1;

if (B_3 <= B_4)
for (Z310 = B_3;; Z310 += 1) {
Z287->A[Z310] = NIL;
if (Z310 >= B_4) break;
}
}
ZpmCQ_5(&Z366, Zki1_3);
{
Zgd7EPBB_1 B_5 = Zaf1_1, B_6 = Zgd7EPBB_4;

if (B_5 <= B_6)
for (Z359 = B_5;; Z359 += 1) {
ZpmCQ_5(&Z367.A[Z359], Zki1_3);
if (Z359 >= B_6) break;
}
}
ZpmCQ_5(&Z369, Zgd7EPBB_4);
ZpmCQ_5(&Z371, (LONGCARD)ZdaDwjxF_12);
{
LONGCARD B_7 = 1, B_8 = ZdaDwjxF_9;

if (B_7 <= B_8)
for (Z310 = B_7;; Z310 += 1) {
ZpmCQ_31(&Z366, Z310);
Z281 = Z361(Z366);
if (Z281 != Z310) {
exit (1);
}
if (Z310 >= B_8) break;
}
}
while (Z291 > 0) {
Z281 = Z289->A[Z291];
DEC(Z291);
ZpmCQ_30(&Z366, Z285->A[Z281]->Y1);
ZpmCQ_32(&Z369);
{
LONGCARD B_9 = 1, B_10 = Zki1_3;

if (B_9 <= B_10)
for (Z310 = B_9;; Z310 += 1) {
if (ZpmCQ_25(Z310, &Z366)) {
Z368 = Zki1_10(Z310);
while (!Zki1_11(Z368)) {
Z359 = Zki1_15(Z368);
ZpmCQ_13(&Z367.A[Z359], Zki1_16(Z368));
ZpmCQ_13(&Z369, ORD(Z359));
Z368 = Zki1_12(Z368);
}
}
if (Z310 >= B_10) break;
}
}
while (!ZpmCQ_26(Z369)) {
Z359 = ZpmCQ_20(&Z369);
Zaf1_24(Z281, Z359, Z361(Z367.A[Z359]));
ZpmCQ_32(&Z367.A[Z359]);
}
}
INC1(ZdaDwjxF_7, Zaf1_8 + 3);
{
SHORTCARD B_11 = 1, B_12 = ZdaDwjxF_11 - 2;

if (B_11 <= B_12)
for (Z370 = B_11;; Z370 += 1) {
if (ZdaDwjxF_17->A[Z370].Y2 == ZdaDwjxF_1) {
ZpmCQ_5(&ZdaDwjxF_17->A[Z370].Y4, (LONGCARD)ZdaDwjxF_7);
{
SHORTCARD B_13 = 1, B_14 = Zaf1_8;

if (B_13 <= B_14)
for (Z281 = B_13;; Z281 += 1) {
ZpmCQ_30(&Z371, ZdaDwjxF_17->A[Z370].Y3);
ZpmCQ_10(&Z371, Z285->A[Z281]->Y1);
if (!ZpmCQ_26(Z371)) {
ZpmCQ_13(&ZdaDwjxF_17->A[Z370].Y4, (LONGCARD)Z281);
}
if (Z281 >= B_14) break;
}
}
ZpmCQ_7(&ZdaDwjxF_17->A[Z370].Y3);
}
if (Z370 >= B_12) break;
}
}
Z295 = FALSE;
Z296 = TRUE;
{
SHORTCARD B_15 = 1, B_16 = Zaf1_8;

if (B_15 <= B_16)
for (Z281 = B_15;; Z281 += 1) {
Z375 = Z281;
ZpmCQ_32(&Z293);
ZpmCQ_33(Z285->A[Z281]->Y1, (ZpmCQ_1)Z376);
ZpmCQ_14(&Z293, (LONGCARD)Zpky9wjxF_0);
Zaf1_20(Z281, Z293);
if (Z281 >= B_16) break;
}
}
{
SHORTCARD B_17 = 1, B_18 = Zaf1_8;

if (B_17 <= B_18)
for (Z281 = B_17;; Z281 += 1) {
ZpmCQ_7(&Z285->A[Z281]->Y1);
ZDtgCFKU_2((LONGINT)sizeof (Z278), (ADDRESS)Z285->A[Z281]);
if (Z281 >= B_18) break;
}
}
ZpmCQ_7(&Z366);
{
Zgd7EPBB_1 B_19 = Zaf1_1, B_20 = Zgd7EPBB_4;

if (B_19 <= B_20)
for (Z359 = B_19;; Z359 += 1) {
ZpmCQ_7(&Z367.A[Z359]);
if (Z359 >= B_20) break;
}
}
ZpmCQ_7(&Z369);
ZpmCQ_7(&Z371);
ZarQdhNDD_3((ADDRESS *)&Z289, &Z290, (LONGINT)sizeof (Zaf1_6));
ZarQdhNDD_3((ADDRESS *)&Z285, &Z286, (LONGINT)sizeof (Z277));
ZarQdhNDD_3((ADDRESS *)&Z287, &Z288, (LONGINT)sizeof (Z277));
Zki1_20();
}

static void Z376
# ifdef HAVE_ARGS
(CARDINAL Z310)
# else
(Z310)
CARDINAL Z310;
# endif
{
ZpmCQ_13(&Z293, (LONGCARD)Zki1_8(Z310));
}

static void Z377
 ARGS ((void))
{
Zaf1_6 Z281, Z378;
BOOLEAN Z379;
Zgd7EPBB_1 Z359, Z380;
ZpmCQ_4 Z381;

Z294 = 0;
ZpmCQ_5(&Z381, (LONGCARD)Zaf1_8);
{
SHORTCARD B_21 = 1, B_22 = Zaf1_8;

if (B_21 <= B_22)
for (Z281 = B_21;; Z281 += 1) {
ZpmCQ_13(&Z381, (LONGCARD)Zaf1_17(Z281));
if (Z281 >= B_22) break;
}
}
{
SHORTCARD B_23 = 1, B_24 = Zaf1_8;

if (B_23 <= B_24)
for (Z281 = B_23;; Z281 += 1) {
Zaf1_19(Z281, &Z293);
Z378 = Zaf1_17(Z281);
if (!ZpmCQ_26(Z293) && (Z378 == Zaf1_0 || Z378 == Zaf1_10) && !ZpmCQ_25((LONGCARD)Z281, &Z381)) {
Z379 = TRUE;
Z359 = Zaf1_26(Z281);
Z380 = Zaf1_27(Z281);
if (Z359 <= Z380) {
for (;;) {
if (Z359 != Zgd7EPBB_23((ZrxAagD3_3)Zaf1_5) && Zaf1_23(Z281, Z359) != Zaf1_0) {
Z379 = FALSE;
goto EXIT_1;
}
if (Z359 == Z380) {
goto EXIT_1;
}
INC(Z359);
} EXIT_1:;
}
if (Z379) {
Zaf1_24(Z281, Zgd7EPBB_23((ZrxAagD3_3)Zaf1_5), Zaf1_0);
Zaf1_18(Z281, Zaf1_0);
INC(Z294);
}
}
if (Z281 >= B_24) break;
}
}
ZpmCQ_7(&Z381);
}

static void Z382
 ARGS ((void))
{
Zq0A4_11 Z305;
Zq0A4_11 Z306;
Zq0A4_11 Z307;
Zq0A4_11 Z308;
Ztf1PEAFD_3 Z383, Z384;
Zaf1_6 Z385;
SHORTCARD Z327;
INTEGER Z386;

Zq0Dy2B_0();
ZpmCQ_5(&Z292, (LONGCARD)ZdaDwjxF_9);
Z305 = ZdaDwjxF_6;
while (Z305 != Zq0A4_0) {
Z306 = Z305->U_1.V_3.Y2.Y2;
Z307 = Z306->U_1.V_7.Y6.Y1;
while (Z307 != Zq0A4_0) {
Z308 = Z307->U_1.V_3.Y2.Y2;
if (Z308->U_1.V_8.Y7.Y4) {
Z327 = Z308->U_1.V_8.Y7.Y5;
ZdaDwjxF_17->A[Z327].Y2 = Z342(Z308->U_1.V_8.Y7.Y3);
Z387(Z308->U_1.V_8.Y7.Y2, &Z383);
Z387(Z308->U_1.V_8.Y7.Y3, &Z384);
Ztf1PEAFD_7(&Z383, &Z384);
Z386 = Ztf1PEAFD_9(&Z383);
if (Z386 > 0) {
Zq0Dy2B_1(Z386);
{
SHORTCARD B_25 = 1, B_26 = ZdaDwjxF_9;

if (B_25 <= B_26)
for (Z385 = B_25;; Z385 += 1) {
if (ZpmCQ_25((LONGCARD)Z385, &Z308->U_1.V_8.Y7.Y1)) {
Z388(Z385, Z383, Z327, Z308->U_1.V_8.Y7.Y1);
}
if (Z385 >= B_26) break;
}
}
}
}
Z307 = Z307->U_1.V_3.Y2.Y1;
}
Z305 = Z305->U_1.V_3.Y2.Y1;
}
ZpmCQ_7(&Z292);
Zq0Dy2B_4();
}

static void Z387
# ifdef HAVE_ARGS
(Zq0A4_11 Z346, Ztf1PEAFD_3 *Z351)
# else
(Z346, Z351)
Zq0A4_11 Z346;
Ztf1PEAFD_3 *Z351;
# endif
{
Ztf1PEAFD_3 Z384;

if (Z346 == Zq0A4_0) {
Ztf1PEAFD_6(Z351);
} else {
switch (Z346->U_1.V_1.Y0.Y0) {
case Zq0A4_5:;
Z387(Z346->U_1.V_3.Y2.Y1, Z351);
Z387(Z346->U_1.V_3.Y2.Y2, &Z384);
Ztf1PEAFD_7(Z351, &Z384);
break;
case Zq0A4_8:;
Ztf1PEAFD_6(Z351);
Ztf1PEAFD_8(Z351, Z346->U_1.V_4.Y3.Y1);
break;
case Zq0A4_10:;
Zp1PEAFi_9(Z346->U_1.V_6.Y5.Y1, Z351);
break;
}
}
}

static Ztf1PEAFD_1 Z203
# ifdef HAVE_ARGS
(struct S_1_AddConstantRE *link)
# else
(link)
struct S_1_AddConstantRE *link;
# endif
{
if (*link->Z393 == *link->Z394) {
*link->Z395 = TRUE;
return Zaf1_1;
} else {
INC(*link->Z393);
return Ztf1PEAFD_14(link->Z351, *link->Z393);
}
}

static void Z388
# ifdef HAVE_ARGS
(Zaf1_6 Z385, Ztf1PEAFD_3 Z351, SHORTCARD Z327, ZpmCQ_4 Z339)
# else
(Z385, Z351, Z327, Z339)
Zaf1_6 Z385;
Ztf1PEAFD_3 Z351;
SHORTCARD Z327;
ZpmCQ_4 Z339;
# endif
{
Zgd7EPBB_1 Z359;
Zaf1_6 Z389, Z390, Z391, Z392;
SHORTCARD Z393;
SHORTCARD Z394;
BOOLEAN Z395;
struct S_1_AddConstantRE frame;

frame.Z351 = &Z351;
frame.Z393 = &Z393;
frame.Z394 = &Z394;
frame.Z395 = &Z395;
Z394 = Ztf1PEAFD_9(&Z351);
Z393 = 0;
Z395 = FALSE;
Z389 = Z385;
Z359 = Z203(&frame);
Z392 = Z389;
for (;;) {
if (Z395) {
goto EXIT_2;
}
Z390 = Zaf1_23(Z389, Z359);
if (Z390 == Zaf1_0) {
goto EXIT_2;
}
if (Z390 <= Zaf1_13 && ZpmCQ_25((LONGCARD)Z390, &Zaf1_11)) {
goto EXIT_2;
}
Zaf1_21(Z390, &Z292);
if (!ZpmCQ_21(Z292, Z339)) {
goto EXIT_2;
}
Z389 = Z390;
Z391 = Zq0Dy2B_3(Z393, Z389);
if (Z391 != Zaf1_0) {
Zaf1_24(Z392, Z359, Z391);
} else {
Zq0Dy2B_2(Z393, Z389, Z389);
Z391 = Z389;
}
Zaf1_21(Z391, &Z292);
ZpmCQ_13(&Z292, (LONGCARD)Z385);
Zaf1_22(Z391, Z292);
Z392 = Z391;
Z359 = Z203(&frame);
} EXIT_2:;
for (;;) {
if (Z395) {
goto EXIT_3;
}
Z390 = Zaf1_23(Z389, Z359);
if (Z390 != Zaf1_0) {
Z389 = Z390;
Z391 = Zq0Dy2B_3(Z393, Z389);
if (Z391 == Zaf1_0) {
Z391 = Zaf1_16();
Zaf1_19(Z389, &Z293);
Zaf1_20(Z391, Z293);
Zaf1_18(Z391, Z389);
Zq0Dy2B_2(Z393, Z389, Z391);
}
Zaf1_24(Z392, Z359, Z391);
Zaf1_21(Z391, &Z292);
ZpmCQ_13(&Z292, (LONGCARD)Z385);
Zaf1_22(Z391, Z292);
Z392 = Z391;
Z359 = Z203(&frame);
} else {
if (Zaf1_17(Z389) == Zaf1_0) {
goto EXIT_3;
}
Z389 = Zaf1_17(Z389);
}
} EXIT_3:;
for (;;) {
if (Z395) {
goto EXIT_4;
}
Z391 = Zq0Dy2B_3(Z393, Zaf1_0);
if (Z391 == Zaf1_0) {
Z391 = Zaf1_16();
Zaf1_18(Z391, Zaf1_10);
Zq0Dy2B_2(Z393, Zaf1_0, Z391);
}
Zaf1_24(Z392, Z359, Z391);
Zaf1_21(Z391, &Z292);
ZpmCQ_13(&Z292, (LONGCARD)Z385);
Zaf1_22(Z391, Z292);
Z392 = Z391;
Z359 = Z203(&frame);
} EXIT_4:;
Zaf1_19(Z392, &Z293);
ZpmCQ_13(&Z293, (LONGCARD)Z327);
Zaf1_20(Z392, Z293);
}

static void Z397
 ARGS ((void))
{
SHORTCARD Z370;
Zaf1_6 Z398;
Zaf1_6 Z399;
Zaf1_6 Z400;

if (Zaf1_8 > ZdaDwjxF_7) {
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)"internal Error: StateCount > NodeCount", 38L);
ZfM_33((ZDz6VQCC_4)ZfM_2);
}
{
SHORTCARD B_27 = 0, B_28 = ZdaDwjxF_11 - 2;

if (B_27 <= B_28)
for (Z370 = B_27;; Z370 += 1) {
if (ZdaDwjxF_17->A[Z370].Y2 == ZdaDwjxF_1) {
Z400 = ZpmCQ_18(&ZdaDwjxF_17->A[Z370].Y4);
{
SHORTCARD B_29 = 1, B_30 = Z400;

if (B_29 <= B_30)
for (Z398 = B_29;; Z398 += 1) {
if (ZpmCQ_25((LONGCARD)Z398, &ZdaDwjxF_17->A[Z370].Y4)) {
{
SHORTCARD B_31 = 1, B_32 = Zaf1_8;

if (B_31 <= B_32)
for (Z399 = B_31;; Z399 += 1) {
if (Z398 == Zaf1_17(Z399)) {
ZpmCQ_13(&ZdaDwjxF_17->A[Z370].Y4, (LONGCARD)Z399);
}
if (Z399 >= B_32) break;
}
}
}
if (Z398 >= B_30) break;
}
}
}
if (Z370 >= B_28) break;
}
}
}

static void Z401
 ARGS ((void))
{
SHORTCARD Z370;
Zaf1_6 Z389;

{
SHORTCARD B_33 = 0, B_34 = ZdaDwjxF_11;

if (B_33 <= B_34)
for (Z370 = B_33;; Z370 += 1) {
ZpmCQ_5(&ZdaDwjxF_17->A[Z370].Y5, (LONGCARD)Zaf1_8);
if (Z370 >= B_34) break;
}
}
{
SHORTCARD B_35 = 1, B_36 = Zaf1_8;

if (B_35 <= B_36)
for (Z389 = B_35;; Z389 += 1) {
Zaf1_19(Z389, &Z293);
if (ZpmCQ_26(Z293)) {
ZpmCQ_13(&ZdaDwjxF_17->A[0].Y5, (LONGCARD)Z389);
} else {
Z370 = ZpmCQ_17(&Z293);
ZpmCQ_13(&ZdaDwjxF_17->A[Z370].Y5, (LONGCARD)Z389);
}
if (Z389 >= B_36) break;
}
}
Z297 = TRUE;
}

static void Z403
 ARGS ((void))
{
Zae5ojx8B_1 Z404;
Zfb3DLQ_0 Z405;
LONGCARD Z385;

{
LONGINT B_37 = 1, B_38 = Zae5ojx8B_3;

if (B_37 <= B_38)
for (Z404 = B_37;; Z404 += 1) {
if (Zae5ojx8B_7(Z404) == Zae5ojx8B_12) {
Zae5ojx8B_9(Z404, &Z405, &Z385);
Z408((SHORTCARD)Z385, Z405, FALSE);
if (ZdaDwjxF_14) {
Z408((SHORTCARD)(Z385 + 1), Z405, TRUE);
}
}
if (Z404 >= B_38) break;
}
}
}

static void Z410
# ifdef HAVE_ARGS
(CHAR Z411, ZrxAagD3_3 Z359)
# else
(Z411, Z359)
CHAR Z411;
ZrxAagD3_3 Z359;
# endif
{
ZfM_24((ZDz6VQCC_4)ZfM_2, Z411);
if (Z359 > ORD(MAX_CHAR)) {
ZrxAagD3_4((ZDz6VQCC_4)ZfM_2, Z359);
} else if (ORD('!') <= Z359 && Z359 <= ORD('~')) {
ZfM_24((ZDz6VQCC_4)ZfM_2, '\'');
ZfM_24((ZDz6VQCC_4)ZfM_2, CHR(Z359));
ZfM_24((ZDz6VQCC_4)ZfM_2, '\'');
} else {
ZfM_24((ZDz6VQCC_4)ZfM_2, '\\');
ZfM_25((ZDz6VQCC_4)ZfM_2, (LONGINT)ORD(Z359), 0L);
}
}

static void Z408
# ifdef HAVE_ARGS
(SHORTCARD Z385, Zfb3DLQ_0 Z405, BOOLEAN Z412)
# else
(Z385, Z405, Z412)
SHORTCARD Z385;
Zfb3DLQ_0 Z405;
BOOLEAN Z412;
# endif
{
ZrxAagD3_3 Z413, Z414, Z359;
Zaf1_6 Z281;
ZerF6mmCQ_4 Z415;
ZpmCQ_4 Z416;
Zp1PEAFD_2 Z351;
INTEGER Z417;
LONGCARD Z418, Z419;

ZerF6mmCQ_6(&Z415);
ZpmCQ_5(&Z416, (LONGCARD)ZdaDwjxF_11);
ZerF6mmCQ_8(&Z415, Zgd7EPBB_6);
{
ZrxAagD3_3 B_39 = Zaf1_1, B_40 = Zgd7EPBB_4;

if (B_39 <= B_40)
for (Z359 = B_39;; Z359 += 1) {
if (Z359 != Zgd7EPBB_23((ZrxAagD3_3)Zaf1_5)) {
Z281 = Zaf1_23(Z385, Z359);
} else {
Z281 = Zaf1_28(Z385);
}
if (Z281 == Zaf1_0) {
if ((INTEGER)Z359 <= Zgd7EPBB_18) {
ZerF6mmCQ_8(&Z415, Zgd7EPBB_16->A[Z359]);
} else {
ZerF6mmCQ_12(&Z415, Zgd7EPBB_24(Z359));
}
} else {
Zaf1_19(Z281, &Z416);
if (ZpmCQ_26(Z416)) {
if ((INTEGER)Z359 <= Zgd7EPBB_18) {
ZerF6mmCQ_8(&Z415, Zgd7EPBB_16->A[Z359]);
} else {
ZerF6mmCQ_12(&Z415, Zgd7EPBB_24(Z359));
}
}
}
if (Z359 >= B_40) break;
}
}
if (!ZerF6mmCQ_25(Z415)) {
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)"Warning: in start state ", 24L);
Zfb3DLQ_3(Z405, &Z351);
Zp1PEAFD_21((ZDz6VQCC_4)ZfM_2, &Z351);
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)" the default action may be triggered by", 39L);
if (Z412) {
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)" (left justified)", 17L);
}
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)":", 1L);
ZfM_33((ZDz6VQCC_4)ZfM_2);
ZerF6mmCQ_20(&Z415, &Z418, &Z419);
Z413 = Z418;
Z414 = Z419;
Z417 = 0;
while (!ZerF6mmCQ_25(Z415)) {
ZerF6mmCQ_20(&Z415, &Z418, &Z419);
if (Z418 == Z414 + 1) {
Z414 = Z419;
} else {
if (Z413 == Z414) {
Z410(' ', Z414);
INC(Z417);
} else {
Z410(' ', Z413);
Z410('-', Z414);
INC1(Z417, 2);
}
if (Z417 >= 10) {
ZfM_33((ZDz6VQCC_4)ZfM_2);
Z417 = 0;
}
Z413 = Z418;
Z414 = Z419;
}
}
if (Z413 == Z414) {
Z410(' ', Z414);
} else {
Z410(' ', Z413);
Z410('-', Z414);
}
ZfM_33((ZDz6VQCC_4)ZfM_2);
}
ZpmCQ_7(&Z416);
ZerF6mmCQ_7(&Z415);
}

static void Z421
# ifdef HAVE_ARGS
(INTEGER Z422, INTEGER Z423)
# else
(Z422, Z423)
INTEGER Z422, Z423;
# endif
{
if (ZdaDwjxF_17->A[Z423].Y0.Y1 == 0) {
ZblNKKO_44((STRING)"pattern is ambiguous wrt. to a predefined rule", 46L, (LONGCARD)ZblNKKO_20, ZdaDwjxF_17->A[Z422].Y0);
} else {
ZblNKKO_45((STRING)"pattern is ambiguous wrt. to pattern at", 39L, (LONGCARD)ZblNKKO_20, ZdaDwjxF_17->A[Z422].Y0, (LONGCARD)ZblNKKO_36, ADR (ZdaDwjxF_17->A[Z423].Y0));
}
}

static void Z424
 ARGS ((void))
{
Zaf1_6 Z389;
SHORTCARD Z370;

ZolB7FGBG_4(&Z420, (LONGINT)ZdaDwjxF_11, (LONGINT)ZdaDwjxF_11);
{
SHORTCARD B_41 = 1, B_42 = Zaf1_8;

if (B_41 <= B_42)
for (Z389 = B_41;; Z389 += 1) {
Zaf1_19(Z389, &Z293);
if (ZpmCQ_15(&Z293) > 1) {
Z370 = ZpmCQ_20(&Z293);
while (!ZpmCQ_26(Z293)) {
ZolB7FGBG_6(&Z420, (LONGINT)Z370, (LONGINT)ZpmCQ_20(&Z293));
}
}
if (Z389 >= B_42) break;
}
}
ZolB7FGBG_40(Z420, (ZolB7FGBG_1)Z421);
ZolB7FGBG_5(&Z420);
}

static void Z425
 ARGS ((void))
{
SHORTCARD Z370;

{
SHORTCARD B_43 = 0, B_44 = ZdaDwjxF_11 - 2;

if (B_43 <= B_44)
for (Z370 = B_43;; Z370 += 1) {
if (ZdaDwjxF_17->A[Z370].Y2 != ZdaDwjxF_0) {
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)"Pattern, ContextLng", 19L);
ZfM_25((ZDz6VQCC_4)ZfM_1, (LONGINT)Z370, 5L);
ZfM_25((ZDz6VQCC_4)ZfM_1, (LONGINT)ZdaDwjxF_17->A[Z370].Y2, 5L);
if (ZdaDwjxF_17->A[Z370].Y2 == ZdaDwjxF_1) {
if (Z295) {
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)" NContext ", 10L);
ZpmCQ_35((ZDz6VQCC_4)ZfM_1, ZdaDwjxF_17->A[Z370].Y3);
}
if (Z296) {
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)" DContext ", 10L);
ZpmCQ_35((ZDz6VQCC_4)ZfM_1, ZdaDwjxF_17->A[Z370].Y4);
}
}
if (Z297) {
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)" Finals ", 8L);
ZpmCQ_35((ZDz6VQCC_4)ZfM_1, ZdaDwjxF_17->A[Z370].Y5);
}
ZfM_33((ZDz6VQCC_4)ZfM_1);
}
if (Z370 >= B_44) break;
}
}
}

static void Z426
 ARGS ((void))
{
ZfM_33((ZDz6VQCC_4)ZfM_1);
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)"Start States    ", 16L);
ZfM_25((ZDz6VQCC_4)ZfM_1, (LONGINT)ZdaDwjxF_9, 6L);
ZfM_33((ZDz6VQCC_4)ZfM_1);
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)"Incl Start State", 16L);
ZfM_25((ZDz6VQCC_4)ZfM_1, (LONGINT)ZdaDwjxF_8, 6L);
ZfM_33((ZDz6VQCC_4)ZfM_1);
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)"Definitions     ", 16L);
ZfM_25((ZDz6VQCC_4)ZfM_1, Zae5ojx8B_3, 6L);
ZfM_33((ZDz6VQCC_4)ZfM_1);
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)"Rules           ", 16L);
ZfM_25((ZDz6VQCC_4)ZfM_1, (LONGINT)ZdaDwjxF_10, 6L);
ZfM_33((ZDz6VQCC_4)ZfM_1);
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)"Patterns        ", 16L);
ZfM_25((ZDz6VQCC_4)ZfM_1, (LONGINT)ZdaDwjxF_11, 6L);
ZfM_33((ZDz6VQCC_4)ZfM_1);
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)"Classes         ", 16L);
ZfM_25((ZDz6VQCC_4)ZfM_1, Zgd7EPBB_18, 6L);
ZfM_33((ZDz6VQCC_4)ZfM_1);
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)"LastClass       ", 16L);
ZfM_25((ZDz6VQCC_4)ZfM_1, (LONGINT)Zgd7EPBB_4, 6L);
ZfM_33((ZDz6VQCC_4)ZfM_1);
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)"Transitions     ", 16L);
ZfM_25((ZDz6VQCC_4)ZfM_1, (LONGINT)Zki1_4, 6L);
ZfM_33((ZDz6VQCC_4)ZfM_1);
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)"Leafs           ", 16L);
ZfM_25((ZDz6VQCC_4)ZfM_1, (LONGINT)ZdaDwjxF_12, 6L);
ZfM_33((ZDz6VQCC_4)ZfM_1);
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)"NFA States      ", 16L);
ZfM_25((ZDz6VQCC_4)ZfM_1, (LONGINT)Zki1_3, 6L);
ZfM_33((ZDz6VQCC_4)ZfM_1);
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)"Minimize Savings", 16L);
ZfM_25((ZDz6VQCC_4)ZfM_1, Zaf1_14, 6L);
ZfM_33((ZDz6VQCC_4)ZfM_1);
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)"Ambiguous States", 16L);
ZfM_25((ZDz6VQCC_4)ZfM_1, (LONGINT)Zaf1_13, 6L);
ZfM_33((ZDz6VQCC_4)ZfM_1);
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)"Nodes           ", 16L);
ZfM_25((ZDz6VQCC_4)ZfM_1, (LONGINT)ZdaDwjxF_7, 6L);
ZfM_33((ZDz6VQCC_4)ZfM_1);
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)"DFA States      ", 16L);
ZfM_25((ZDz6VQCC_4)ZfM_1, (LONGINT)Zaf1_8, 6L);
ZfM_33((ZDz6VQCC_4)ZfM_1);
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)"Sentinel Savings", 16L);
ZfM_25((ZDz6VQCC_4)ZfM_1, Z294, 6L);
ZfM_33((ZDz6VQCC_4)ZfM_1);
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)"Default Savings ", 16L);
ZfM_25((ZDz6VQCC_4)ZfM_1, Zaf1_15, 6L);
ZfM_33((ZDz6VQCC_4)ZfM_1);
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)"Table Entries   ", 16L);
ZfM_25((ZDz6VQCC_4)ZfM_1, (LONGINT)Zpky9wjxF_41, 6L);
ZfM_33((ZDz6VQCC_4)ZfM_1);
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)"Table Size      ", 16L);
ZfM_25((ZDz6VQCC_4)ZfM_1, (LONGINT)Zpky9wjxF_40, 6L);
ZfM_33((ZDz6VQCC_4)ZfM_1);
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)"Memory used   ", 14L);
ZfM_25((ZDz6VQCC_4)ZfM_1, (LONGINT)ZDtgCFKU_0, 8L);
ZfM_33((ZDz6VQCC_4)ZfM_1);
}

void ZdaDwjxF_21
# ifdef HAVE_ARGS
(SHORTCARD Z430, BOOLEAN Z431, BOOLEAN Z432, SHORTCARD Z433)
# else
(Z430, Z431, Z432, Z433)
SHORTCARD Z430;
BOOLEAN Z431, Z432;
SHORTCARD Z433;
# endif
{
SHORTCARD Z356;

if (Z430 >= 2) {
ZqrGCB_2((STRING)"Start		", 7L);
}
Z295 = FALSE;
Z296 = FALSE;
Z297 = FALSE;
INC(ZdaDwjxF_10);
INC(ZdaDwjxF_11);
ZdaDwjxF_15 = ZdaDwjxF_11;
INC(ZdaDwjxF_10);
INC(ZdaDwjxF_11);
ZdaDwjxF_16 = ZdaDwjxF_11;
ZdaDwjxF_20 = ZdaDwjxF_10 + 1;
ZarQdhNDD_0((ADDRESS *)&ZdaDwjxF_19, &ZdaDwjxF_20, (LONGINT)sizeof (ZdaDwjxF_3));
ZdaDwjxF_18 = ZdaDwjxF_11 + 1;
ZarQdhNDD_0((ADDRESS *)&ZdaDwjxF_17, &ZdaDwjxF_18, (LONGINT)sizeof (ZdaDwjxF_2));
ZdaDwjxF_17->A[0].Y2 = ZdaDwjxF_0;
ZpmCQ_5(&Z293, (LONGCARD)ZdaDwjxF_11);
Z298();
if (Z430 >= 15) {
Zki1_19();
Z425();
}
if (Z430 >= 2) {
ZqrGCB_2((STRING)"ComputeNfa	", 11L);
}
Z364();
if (Z430 >= 14) {
Zaf1_36();
Z425();
}
if (Z430 >= 2) {
ZqrGCB_2((STRING)"ComputeDfa	", 11L);
}
Zaf1_29();
if (Z430 >= 13) {
Zaf1_36();
Z425();
}
if (Z430 >= 2) {
ZqrGCB_2((STRING)"MinimizeDfa	", 12L);
}
Zaf1_10 = Zaf1_16();
Zaf1_30();
if (Z430 >= 2) {
ZqrGCB_2((STRING)"ComputeSuccGraph", 16L);
}
Zaf1_31();
if (Z430 >= 2) {
ZqrGCB_2((STRING)"ComputeAmbiguous", 16L);
}
Zaf1_32();
if (Z430 >= 12) {
ZpmCQ_35((ZDz6VQCC_4)ZfM_1, Zaf1_11);
ZfM_33((ZDz6VQCC_4)ZfM_1);
ZpmCQ_35((ZDz6VQCC_4)ZfM_1, Zaf1_12);
ZfM_33((ZDz6VQCC_4)ZfM_1);
}
if (Z430 >= 2) {
ZqrGCB_2((STRING)"ComputeCyclicSta", 16L);
}
Zaf1_33();
if (Z430 >= 11) {
Zaf1_36();
Z425();
}
if (Z430 >= 2) {
ZqrGCB_2((STRING)"ComputeStartSets", 16L);
}
Zaf1_9 = Zaf1_16();
ZpmCQ_31(&Z293, (LONGCARD)ZdaDwjxF_15);
Zaf1_20(Zaf1_9, Z293);
ZpmCQ_31(&Z293, (LONGCARD)ZdaDwjxF_16);
Zaf1_20(Zaf1_16(), Z293);
Z382();
if (Z430 >= 10) {
Zaf1_36();
Z425();
}
if (Z430 >= 2) {
ZqrGCB_2((STRING)"AddConstantREs	", 15L);
}
Z397();
if (Z430 >= 9) {
Zaf1_36();
Z425();
}
if (Z430 >= 2) {
ZqrGCB_2((STRING)"UpdateContext	", 14L);
}
Zaf1_34();
if (Z430 >= 8) {
Zaf1_36();
Z425();
}
if (Z430 >= 2) {
ZqrGCB_2((STRING)"SaveEobTransitio", 16L);
}
Z377();
if (Z430 >= 7) {
Zaf1_36();
Z425();
}
if (Z430 >= 2) {
ZqrGCB_2((STRING)"SaveSentinels	", 14L);
}
if (Z433 > 0) {
Z356 = 1;
while (Z356 <= Zaf1_13) {
Zaf1_35(Z356, (SHORTCARD)ZdaDDAD7_3((LONGINT)Zaf1_13, (LONGINT)(Z356 + Z433 - 1)));
if (Z430 >= 2) {
ZqrGCB_2((STRING)"ComputeDefaults	", 16L);
}
INC1(Z356, Z433);
}
}
if (Z430 >= 6) {
Zaf1_36();
Z425();
}
Z401();
if (Z430 >= 5) {
Z425();
}
if (Z430 >= 2) {
ZqrGCB_2((STRING)"InvertMapping	", 14L);
}
Zpky9wjxF_42(Z431);
if (Z430 >= 2) {
ZqrGCB_2((STRING)"MakeTables	", 11L);
}
Zpky9wjxF_43((SHORTINT)Z433);
if (Z430 >= 4) {
Zpky9wjxF_45();
}
if (Z430 >= 2) {
ZqrGCB_2((STRING)"CompressTables	", 15L);
}
switch (Zpky9jaD_38) {
case Zpky9jaD_55:;
break;
case Zpky9jaD_56:;
break;
case Zpky9jaD_57:;
break;
case Zpky9jaD_58:;
Zpky9wjxF_44(Z431);
break;
case Zpky9jaD_59:;
break;
case Zpky9jaD_60:;
break;
}
if (Z430 >= 2) {
ZqrGCB_2((STRING)"PutTables	", 10L);
}
if (Z430 >= 3) {
Zpky9wjxF_46();
}
if (Z432) {
Z403();
if (Z430 >= 2) {
ZqrGCB_2((STRING)"CheckTables	", 12L);
}
}
if (ZdaDwjxF_13) {
Z424();
if (Z430 >= 2) {
ZqrGCB_2((STRING)"CheckAmbiguous	", 15L);
}
}
if (Z430 >= 1) {
Z426();
}
}

void BEGIN_GenTabs ARGS ((void))
{
  static BOOLEAN has_been_called = FALSE;
  if (has_been_called) return;
  has_been_called = TRUE;
BEGIN_Tree ();
BEGIN_Texts ();
BEGIN_Sets ();
BEGIN_Position ();
BEGIN_Idents ();
BEGIN_General ();
BEGIN_rMemory ();
BEGIN_DynArray ();
BEGIN_Errors ();
BEGIN_Strings ();
BEGIN_StringM ();
BEGIN_Times ();
BEGIN_Sets ();
BEGIN_Relation ();
BEGIN_IO ();
BEGIN_Layout ();
BEGIN_DefTable ();
BEGIN_Tree ();
BEGIN_Nfa ();
BEGIN_Dfa ();
BEGIN_Traces ();
BEGIN_ScanTabs ();
BEGIN_ScanGen ();
BEGIN_Classes ();
BEGIN_UniCode ();
BEGIN_Strings ();
BEGIN_WStrings ();
BEGIN_Idents ();
BEGIN_Errors ();
BEGIN_Relation ();
BEGIN_HugeSets ();

}
