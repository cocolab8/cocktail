#include "SYSTEM_.h"

#ifndef DEFINITION_Scanner
#include "Scanner.h"
#endif

#ifndef DEFINITION_General
#include "General.h"
#endif

#ifndef DEFINITION_Pack
#include "Pack.h"
#endif

#ifndef DEFINITION_Strings
#include "Strings.h"
#endif

#ifndef DEFINITION_DynArray
#include "DynArray.h"
#endif

#ifndef DEFINITION_Sets
#include "Sets.h"
#endif

#ifndef DEFINITION_Errors
#include "Errors.h"
#endif

#ifndef DEFINITION_Position
#include "Position.h"
#endif

#ifndef DEFINITION_IO
#include "IO.h"
#endif

#ifndef DEFINITION_IO
#include "IO.h"
#endif

#ifndef DEFINITION_Errors
#include "Errors.h"
#endif

#ifndef DEFINITION_Tree0
#include "Tree0.h"
#endif

#ifndef DEFINITION_Scanner
#include "Scanner.h"
#endif

#ifndef DEFINITION_Tree
#include "Tree.h"
#endif

#ifndef DEFINITION_Sets
#include "Sets.h"
#endif

#ifndef DEFINITION_Strings
#include "Strings.h"
#endif

#ifndef DEFINITION_Lists
#include "Lists.h"
#endif

#ifndef DEFINITION_StringM
#include "StringM.h"
#endif

#ifndef DEFINITION_Idents
#include "Idents.h"
#endif

#ifndef DEFINITION_DefTable
#include "DefTable.h"
#endif

#ifndef DEFINITION_GenTabs
#include "GenTabs.h"
#endif

#ifndef DEFINITION_Dfa
#include "Dfa.h"
#endif

#ifndef DEFINITION_ScanGen
#include "ScanGen.h"
#endif

#ifndef DEFINITION_UniCode
#include "UniCode.h"
#endif

#ifndef DEFINITION_HugeSets
#include "HugeSets.h"
#endif

#ifndef DEFINITION_Parser
#include "Parser.h"
#endif

BOOLEAN ZmfDOBA_0, ZmfDOBA_1;
BOOLEAN ZmfDOBA_51;

typedef struct S_1 {
union {
struct {
Zpky9FDA_0 Y0;
} V_1;
struct {
Zq0A4J_17 Y1;
ZmtLFGGBG_0 Y2;
} V_2;
struct {
BOOLEAN Y3;
} V_3;
} U_1;
} Z244;
static SHORTCARD Z249;
static LONGCARD Z250;
static ZrxAagD3_3 Z251;
static BOOLEAN Z252;
static Zp1PEAFD_2 Z253;
static Zp1PEAFi_1 Z254;
static ZpmCQ_4 Z255, Z256, Z257, Z258;
static ZerF6mmCQ_4 Z259;
static Zq0A4J_17 Z260;
static Zq0A4_11 Z261;
static Zae5ojx8B_1 Z262;
static Zfb3DLQ_0 Z263, Z264;
static Zq0A4J_17 Z265, Z266;
static Zp1PEAFD_2 Z267;
static Zp1PEAFD_2 Z268;
static SHORTCARD Z269;
static Zq0A4J_17 Z270 ARGS ((Zq0A4J_17 Z155, ZrxAagD3_3 Z271, ZijFQQ_3 Z272));
static void Z274 ARGS ((Zfb3DLQ_0 Z275, ZmtLFGGBG_0 Z122));
static void Z276 ARGS ((CARDINAL *Z277, Zfb3DLQ_0 *Z278, ZmtLFGGBG_0 Z122));
static Zfb3DLQ_0 Z279 ARGS ((CHAR Z280[], LONGCARD O_1));
#define Z282	0
#define Z283	0
#define Z284	1
#define Z285	2
#define Z286	3
#define Z287	0
#define Z288	39
#define Z289	40
#define Z290	0
#define Z291	88
#define Z292	452
#define Z293	147
#define Z294	1
#define Z295	1
#define Z296	95
#define Z297	96
#define Z298	149
#define Z299	150
#define Z300	261
#define Z301	261
#define Z302	150
#define Z303	95
#define Z304	95
#define Z305	40
#define Z306	147
#define Z307	Z297
typedef SHORTCARD Z308;
typedef Z308 Z309;
typedef Z308 Z310;
typedef Z308 Z311;
typedef Z308 Z312;
typedef struct S_2 {
Z309 Y0, Y1;
} Z313;
typedef Z309 Z315;
typedef Z313 Z316;
typedef Z313 *Z317;
typedef Z315 *Z318;
typedef Z316 *Z319;
typedef struct S_23 {
Z309 A[1000000 + 1];
} *Z320;
typedef struct S_3 {
BITSET Y0;
BOOLEAN Y1, Y2;
} Z321;
static struct S_4 {
ADDRESS A[Z296 + 1];
} Z325;
static struct S_5 {
ADDRESS A[Z296 + 1];
} Z326;
static struct S_6 {
Z309 A[Z303 + 1];
} Z327;
static struct S_7 {
Z309 A[Z304 + 1];
} Z328;
static struct S_8 {
Z313 A[Z292 + 1];
} Z329;
static struct S_9 {
Z315 A[Z305 - (Z288 + 1) + 1];
} Z330;
static struct S_10 {
Z316 A[Z306 - (Z288 + 1) + 1];
} Z331;
static struct S_11 {
Z308 A[Z300 - Z299 + 1];
} Z332;
static struct S_12 {
Z312 A[Z300 - Z299 + 1];
} Z333;
static struct S_13 {
Z312 A[Z296 + 1];
} Z334;
static struct S_14 {
Z309 A[Z301 + 1 - (Z300 + 1) + 1];
} Z335;
static struct S_15 {
Z311 A[Z298 + 1 - Z297 + 1];
} Z336;
static struct S_16 {
SHORTCARD A[Z302 - Z298 - 1 + 1];
} Z337;
static Z321 Z338;
static void Z344 ARGS ((CHAR Z345[], LONGCARD O_4, CHAR Z346[], LONGCARD O_3));
static Z308 Z350;
static LONGINT Z351;
static LONGINT Z352;
static Z308 Z353;
static Z320 Z354;
static struct S_17 {
Z244 A[100000 + 1];
} *Z355;
struct S_1_yyParse;
static INTEGER Z361 ARGS ((Z309 Z357, Z312 Z364, CARDINAL Z365));
struct S_19 {
CHAR A[127 + 1];
};
static void Z377 ARGS ((struct S_1_yyParse *link));
static void Z379 ARGS ((void));
static void Z380 ARGS ((struct S_1_yyParse *link));
static void Z381 ARGS ((void));
struct S_1_yyParse {
Z309 *Z366;
Z312 *Z367;
BOOLEAN *Z375;
CARDINAL *Z358;
};
static Z312 Z383 ARGS ((Z312 Z445, LONGINT Z446, LONGINT Z447));
struct S_18 {
CHAR A[127 + 1];
};
static void Z459 ARGS ((LONGINT Z446, LONGINT Z447, ZpmCQ_4 *Z449));
static BOOLEAN Z470 ARGS ((Z312 Z445, LONGINT Z446, LONGINT Z447));
static void Z473 ARGS ((Z309 Z468, ZpmCQ_4 *Z449));
static void Z466 ARGS ((LONGINT Z446, LONGINT Z447, ZpmCQ_4 *Z450));
static Z309 Z314 ARGS ((Z309 Z468, Z312 Z474));
static CARDINAL Z478;
static void Z479 ARGS ((LONGCARD Z480));
static void Z481 ARGS ((LONGCARD Z480));
static void Z482 ARGS ((LONGCARD Z480));
static void Z483 ARGS ((LONGCARD Z480));
static void Z484 ARGS ((LONGCARD Z480));
static void Z485 ARGS ((LONGCARD Z480));
static void Z486 ARGS ((LONGCARD Z480));
static void Z487 ARGS ((LONGCARD Z480));
static void Z488 ARGS ((LONGCARD Z480));
static void Z489 ARGS ((LONGCARD Z480));
static void Z490 ARGS ((LONGCARD Z480));
static void Z491 ARGS ((LONGCARD Z480));
static void Z492 ARGS ((void));

static Zq0A4J_17 Z270
# ifdef HAVE_ARGS
(Zq0A4J_17 Z155, ZrxAagD3_3 Z271, ZijFQQ_3 Z272)
# else
(Z155, Z271, Z272)
Zq0A4J_17 Z155;
ZrxAagD3_3 Z271;
ZijFQQ_3 Z272;
# endif
{
ZpmCQ_4 Z258;
Zq0A4J_17 Z273;

ZpmCQ_5(&Z258, (LONGCARD)ZdaDwjxF_9);
ZpmCQ_30(&Z258, Z257);
Z273 = Zq0A4J_64(Z271);
INC(ZdaDwjxF_11);
Z273 = Zq0A4J_68(Z258, Z273, Z265, ZdaDwjxF_11, ZmtLFGGBG_1);
Z273 = Zq0A4J_61(Z265, Z273);
INC(ZdaDwjxF_10);
Z273 = Zq0A4J_67(Z273, Z272, Zfb3DLQ_1, 0L, Zpky9jaD_1, ZdaDwjxF_10);
return Zq0A4J_61(Z155, Z273);
}

static void Z274
# ifdef HAVE_ARGS
(Zfb3DLQ_0 Z275, ZmtLFGGBG_0 Z122)
# else
(Z275, Z122)
Zfb3DLQ_0 Z275;
ZmtLFGGBG_0 Z122;
# endif
{
if (Z275 != Zfb3DLQ_1) {
ZblNKKO_44((STRING)"name already defined", 20L, (LONGCARD)ZblNKKO_16, Z122);
INC(Zpky9FDA_1);
}
}

static void Z276
# ifdef HAVE_ARGS
(CARDINAL *Z277, Zfb3DLQ_0 *Z278, ZmtLFGGBG_0 Z122)
# else
(Z277, Z278, Z122)
CARDINAL *Z277;
Zfb3DLQ_0 *Z278;
ZmtLFGGBG_0 Z122;
# endif
{
if (*Z277 != 0) {
ZblNKKO_44((STRING)"code section already used", 25L, (LONGCARD)ZblNKKO_16, Z122);
INC(Zpky9FDA_1);
}
*Z277 = Z122.Y1;
*Z278 = Z122.Y0;
}

static Zfb3DLQ_0 Z279
# ifdef HAVE_ARGS
(CHAR Z280[], LONGCARD O_1)
# else
(Z280, O_1)
CHAR Z280[];
LONGCARD O_1;
# endif
{
Zp1PEAFD_2 Z281;
OPEN_ARRAY_LOCALS

ALLOC_OPEN_ARRAYS (O_1 * sizeof (CHAR), 1)
COPY_OPEN_ARRAY (Z280, O_1, CHAR)
Zp1PEAFD_13(Z280, O_1, &Z281);
{
SHORTCARD R_1 = Zfb3DLQ_2(&Z281);

FREE_OPEN_ARRAYS
return R_1;
}
}

static void Z344
# ifdef HAVE_ARGS
(CHAR Z345[], LONGCARD O_4, CHAR Z346[], LONGCARD O_3)
# else
(Z345, O_4, Z346, O_3)
CHAR Z345[];
LONGCARD O_4;
CHAR Z346[];
LONGCARD O_3;
# endif
{
CARDINAL Z269, Z347;
OPEN_ARRAY_LOCALS

ALLOC_OPEN_ARRAYS (O_4 * sizeof (CHAR), 1)
COPY_OPEN_ARRAY (Z345, O_4, CHAR)
if ((O_4 - 1) < (O_3 - 1)) {
Z347 = (O_4 - 1);
} else {
Z347 = (O_3 - 1);
}
{
LONGCARD B_1 = 0, B_2 = Z347;

if (B_1 <= B_2)
for (Z269 = B_1;; Z269 += 1) {
Z346[Z269] = Z345[Z269];
if (Z269 >= B_2) break;
}
}
if ((O_3 - 1) > Z347) {
Z346[Z347 + 1] = CHR(0);
}
FREE_OPEN_ARRAYS
}

void ZmfDOBA_56
# ifdef HAVE_ARGS
(CARDINAL Z340, CHAR Z341[], LONGCARD O_2)
# else
(Z340, Z341, O_2)
CARDINAL Z340;
CHAR Z341[];
LONGCARD O_2;
# endif
{
Zp1PEAFD_2 Z342, Z343;

switch (Z340) {
case 0:;
Z344((STRING)"_EOF_", 5L, Z341, O_2);
break;
case 1:;
Z344((STRING)"Ident", 5L, Z341, O_2);
break;
case 2:;
Z344((STRING)"Number", 6L, Z341, O_2);
break;
case 3:;
Z344((STRING)"String", 6L, Z341, O_2);
break;
case 4:;
Z344((STRING)"Char", 4L, Z341, O_2);
break;
case 5:;
Z344((STRING)"TargetCode", 10L, Z341, O_2);
break;
case 37:;
Z344((STRING)"SCANNER", 7L, Z341, O_2);
break;
case 39:;
Z344((STRING)"IMPORT", 6L, Z341, O_2);
break;
case 32:;
Z344((STRING)"EXPORT", 6L, Z341, O_2);
break;
case 6:;
Z344((STRING)"GLOBAL", 6L, Z341, O_2);
break;
case 31:;
Z344((STRING)"LOCAL", 5L, Z341, O_2);
break;
case 7:;
Z344((STRING)"BEGIN", 5L, Z341, O_2);
break;
case 8:;
Z344((STRING)"CLOSE", 5L, Z341, O_2);
break;
case 34:;
Z344((STRING)"EOF", 3L, Z341, O_2);
break;
case 36:;
Z344((STRING)"DEFAULT", 7L, Z341, O_2);
break;
case 38:;
Z344((STRING)"CHARACTER_SET", 13L, Z341, O_2);
break;
case 9:;
Z344((STRING)"DEFINE", 6L, Z341, O_2);
break;
case 10:;
Z344((STRING)"START", 5L, Z341, O_2);
break;
case 11:;
Z344((STRING)"RULES", 5L, Z341, O_2);
break;
case 12:;
Z344((STRING)".", 1L, Z341, O_2);
break;
case 13:;
Z344((STRING)",", 1L, Z341, O_2);
break;
case 14:;
Z344((STRING)"=", 1L, Z341, O_2);
break;
case 15:;
Z344((STRING)":", 1L, Z341, O_2);
break;
case 35:;
Z344((STRING)":-", 2L, Z341, O_2);
break;
case 33:;
Z344((STRING)"#", 1L, Z341, O_2);
break;
case 16:;
Z344((STRING)"/", 1L, Z341, O_2);
break;
case 17:;
Z344((STRING)"|", 1L, Z341, O_2);
break;
case 18:;
Z344((STRING)"+", 1L, Z341, O_2);
break;
case 19:;
Z344((STRING)"-", 1L, Z341, O_2);
break;
case 20:;
Z344((STRING)"*", 1L, Z341, O_2);
break;
case 21:;
Z344((STRING)"?", 1L, Z341, O_2);
break;
case 22:;
Z344((STRING)"(", 1L, Z341, O_2);
break;
case 23:;
Z344((STRING)")", 1L, Z341, O_2);
break;
case 24:;
Z344((STRING)"[", 1L, Z341, O_2);
break;
case 25:;
Z344((STRING)"]", 1L, Z341, O_2);
break;
case 26:;
Z344((STRING)"{", 1L, Z341, O_2);
break;
case 27:;
Z344((STRING)"}", 1L, Z341, O_2);
break;
case 28:;
Z344((STRING)"<", 1L, Z341, O_2);
break;
case 29:;
Z344((STRING)">", 1L, Z341, O_2);
break;
case 30:;
Z344((STRING)"RULE", 4L, Z341, O_2);
break;
default:
Zp1PEAFD_13((STRING)"unknown ", 8L, &Z342);
Zp1PEAFD_18((LONGINT)Z340, &Z343);
Zp1PEAFD_5(&Z342, &Z343);
Zp1PEAFD_14(&Z342, Z341, O_2);
break;
}
}

CARDINAL ZmfDOBA_53
 ARGS ((void))
{
return ZmfDOBA_54(Z294);
}

CARDINAL ZmfDOBA_54
# ifdef HAVE_ARGS
(SHORTCARD Z357)
# else
(Z357)
SHORTCARD Z357;
# endif
{
CARDINAL Z358;

ZmfDOBA_52();
Z351 = 100;
Z352 = 100;
ZarQdhNDD_0((ADDRESS *)&Z354, &Z351, (LONGINT)sizeof (Z309));
ZarQdhNDD_0((ADDRESS *)&Z355, &Z352, (LONGINT)sizeof (Z244));
Z353 = Z351 - 1;
Z350 = 0;
Z338.Y0 = SET_ELEM (Z283);
Z338.Y1 = TRUE;
Z338.Y2 = TRUE;
Z358 = Z361(Z357, (Z312)Zpky9FDA_14(), (LONGCARD)Z337.A[Z357 - 1]);
ZarQdhNDD_3((ADDRESS *)&Z354, &Z351, (LONGINT)sizeof (Z308));
ZarQdhNDD_3((ADDRESS *)&Z355, &Z352, (LONGINT)sizeof (Z244));
return Z358;
}

static void Z377
# ifdef HAVE_ARGS
(struct S_1_yyParse *link)
# else
(link)
struct S_1_yyParse *link;
# endif
{
*link->Z366 = Z335.A[(Z308)(*link->Z366) - 262];
INC(Z350);
Z355->A[Z350].U_1.V_1.Y0 = Zpky9FDA_10;
*link->Z367 = Zpky9FDA_14();
*link->Z375 = FALSE;
}

static void Z379
 ARGS ((void))
{
}

static void Z380
# ifdef HAVE_ARGS
(struct S_1_yyParse *link)
# else
(link)
struct S_1_yyParse *link;
# endif
{
INC(*link->Z358);
}

static void Z381
 ARGS ((void))
{
ZarQdhNDD_2((ADDRESS *)&Z354, &Z351, (LONGINT)sizeof (Z309));
ZarQdhNDD_2((ADDRESS *)&Z355, &Z352, (LONGINT)sizeof (Z244));
Z353 = Z351 - 1;
}

static INTEGER Z361
# ifdef HAVE_ARGS
(Z309 Z357, Z312 Z364, CARDINAL Z365)
# else
(Z357, Z364, Z365)
Z309 Z357;
Z312 Z364;
CARDINAL Z365;
# endif
{
Z309 Z366;
Z312 Z367;
Z312 Z368;
Z244 Z369;
Zpky9FDA_0 Z370;
Z312 Z371;
Z309 Z372;
Z317 Z373;
Z319 Z374;
BOOLEAN Z375;
CARDINAL Z358;
struct S_19 Z376;
struct S_1_yyParse frame;

frame.Z366 = &Z366;
frame.Z367 = &Z367;
frame.Z375 = &Z375;
frame.Z358 = &Z358;
Z366 = Z357;
Z367 = Z364;
Z358 = 0;
Z375 = FALSE;
for (;;) {
for (;;) {
if (Z350 >= Z353) {
Z381();
}
Z354->A[Z350] = Z366;
for (;;) {
Z373 = (Z317)(Z325.A[Z366] + Z367 * sizeof (Z313));
if (Z373->Y0 == Z366) {
Z366 = Z373->Y1;
goto EXIT_3;
}
Z366 = Z327.A[Z366];
if (Z366 == Z282) {
goto EXIT_3;
}
} EXIT_3:;
if (Z366 == Z282 || Z375 && Z366 >= Z299) {
if (Z366 == Z282 && !Z375) {
INC(Z358);
Z367 = Z383(Z367, Z351, (LONGINT)Z350);
Z375 = TRUE;
Z366 = Z354->A[Z350];
goto EXIT_2;
}
Z366 = Z354->A[Z350];
Z371 = Z334.A[Z366];
Z366 = Z314(Z366, Z371);
if (Z366 > Z300) {
Z366 = Z335.A[(Z308)Z366 - 262];
}
if (Z366 <= Z298) {
Zpky9FDA_2((LONGCARD)Z371, &Z370);
if (Z338.Y2) {
ZmfDOBA_56((LONGCARD)Z371, Z376.A, 128L);
ZblNKKO_43((LONGCARD)ZblNKKO_4, (LONGCARD)ZblNKKO_18, Zpky9FDA_10.Y0, (LONGCARD)ZblNKKO_32, ADR (Z376));
}
if (Z350 >= Z353) {
Z381();
}
INC(Z350);
Z355->A[Z350].U_1.V_1.Y0 = Z370;
if (Z366 >= Z307) {
Z354->A[Z350] = Z354->A[Z350 - 1];
Z366 = Z336.A[Z366 - 96];
} else {
Z354->A[Z350] = Z366;
}
}
if (Z366 <= Z296) {
goto EXIT_2;
}
}
if (Z366 >= Z307) {
if (Z366 <= Z298) {
INC(Z350);
Z355->A[Z350].U_1.V_1.Y0 = Zpky9FDA_10;
Z367 = Zpky9FDA_14();
Z375 = FALSE;
}
for (;;) {
switch (Z366) {
case 150:;
Z379();
return Z358;
break;
case 151:;
DEC1(Z350, 4);
Z368 = ZmfDOBA_3;
if (Z252) {
ZpmCQ_5(&Z258, 256L);
ZpmCQ_30(&Z258, Z256);
ZpmCQ_9(&Z258, Z255);
if (!ZpmCQ_26(Z258)) {
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)"Warning: multiply used codes:", 29L);
ZfM_33((ZDz6VQCC_4)ZfM_2);
Z249 = 0;
while (!ZpmCQ_26(Z258)) {
ZfM_25((ZDz6VQCC_4)ZfM_2, (LONGINT)ZpmCQ_20(&Z258), 5L);
INC(Z249);
if (Z249 == 15) {
ZfM_33((ZDz6VQCC_4)ZfM_2);
Z249 = 0;
}
}
ZfM_33((ZDz6VQCC_4)ZfM_2);
}
ZpmCQ_30(&Z258, Z255);
ZpmCQ_9(&Z258, Z256);
if (!ZpmCQ_26(Z258)) {
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)"Warning: unused codes:", 22L);
ZfM_33((ZDz6VQCC_4)ZfM_2);
Z249 = 0;
while (!ZpmCQ_26(Z258)) {
ZfM_25((ZDz6VQCC_4)ZfM_2, (LONGINT)ZpmCQ_20(&Z258), 5L);
INC(Z249);
if (Z249 == 15) {
ZfM_33((ZDz6VQCC_4)ZfM_2);
Z249 = 0;
}
}
ZfM_33((ZDz6VQCC_4)ZfM_2);
}
ZpmCQ_7(&Z258);
ZpmCQ_7(&Z255);
ZpmCQ_7(&Z256);
}
break;
case 152:;
Z368 = ZmfDOBA_4;
break;
case 153:;
DEC1(Z350, 2);
Z368 = ZmfDOBA_4;
break;
case 154:;
DEC1(Z350, 2);
Z368 = ZmfDOBA_4;
break;
case 155:;
DEC1(Z350, 2);
Z368 = ZmfDOBA_4;
break;
case 156:;
DEC1(Z350, 2);
Z368 = ZmfDOBA_4;
break;
case 157:;
DEC1(Z350, 2);
Z368 = ZmfDOBA_4;
break;
case 158:;
DEC1(Z350, 1);
Z368 = ZmfDOBA_5;
Z274(Zpky9jaD_37, Z355->A[Z350 + 1].U_1.V_1.Y0.Y0);
if (Zpky9jaD_38 == Zpky9jaD_58) {
Zp1PEAFD_13((STRING)"scanner", 7L, &Z253);
} else {
Zp1PEAFD_13((STRING)"Scanner", 7L, &Z253);
}
Zpky9jaD_37 = Zfb3DLQ_2(&Z253);
break;
case 159:;
DEC1(Z350, 2);
Z368 = ZmfDOBA_5;
if (Zpky9jaD_38 != Zpky9jaD_60 && Zpky9jaD_36 != Zfb3DLQ_1) {
ZblNKKO_44((STRING)"dotted scanner name only allowed when generating Java", 53L, (LONGCARD)ZblNKKO_16, Z355->A[Z350 + 1].U_1.V_1.Y0.Y0);
}
break;
case 160:;
case 96:;
DEC1(Z350, 3);
Z368 = ZmfDOBA_6;
Zfb3DLQ_3(Z355->A[Z350 + 1].U_1.V_1.Y0.U_1.V_1.Y1, &Z267);
Zp1PEAFD_6(&Z267, '.');
Zfb3DLQ_3(Z355->A[Z350 + 3].U_1.V_1.Y0.U_1.V_1.Y1, &Z268);
Zp1PEAFD_5(&Z267, &Z268);
Zpky9jaD_36 = Z355->A[Z350 + 1].U_1.V_1.Y0.U_1.V_1.Y1;
Zpky9jaD_37 = Z355->A[Z350 + 3].U_1.V_1.Y0.U_1.V_1.Y1;
Z369.U_1.V_1.Y0.U_1.V_1.Y1 = Zfb3DLQ_2(&Z267);
break;
case 161:;
case 97:;
DEC1(Z350, 1);
Z368 = ZmfDOBA_6;
Z274(Zpky9jaD_37, Z355->A[Z350 + 1].U_1.V_1.Y0.Y0);
Z369.U_1.V_1.Y0.U_1.V_1.Y1 = Z355->A[Z350 + 1].U_1.V_1.Y0.U_1.V_1.Y1;
Zpky9jaD_37 = Z355->A[Z350 + 1].U_1.V_1.Y0.U_1.V_1.Y1;
break;
case 162:;
case 98:;
DEC1(Z350, 4);
Z368 = ZmfDOBA_7;
Zpky9jaD_9 = Z355->A[Z350 + 4].U_1.V_1.Y0.U_1.V_5.Y5;
Z276(&Zpky9jaD_20, &Zpky9jaD_28, Z355->A[Z350 + 3].U_1.V_1.Y0.Y0);
break;
case 163:;
case 99:;
DEC1(Z350, 4);
Z368 = ZmfDOBA_7;
Zpky9jaD_10 = Z355->A[Z350 + 4].U_1.V_1.Y0.U_1.V_5.Y5;
Z276(&Zpky9jaD_21, &Zpky9jaD_29, Z355->A[Z350 + 3].U_1.V_1.Y0.Y0);
break;
case 164:;
case 100:;
DEC1(Z350, 4);
Z368 = ZmfDOBA_7;
Zpky9jaD_11 = Z355->A[Z350 + 4].U_1.V_1.Y0.U_1.V_5.Y5;
Z276(&Zpky9jaD_22, &Zpky9jaD_30, Z355->A[Z350 + 3].U_1.V_1.Y0.Y0);
break;
case 165:;
case 101:;
DEC1(Z350, 4);
Z368 = ZmfDOBA_7;
Zpky9jaD_12 = Z355->A[Z350 + 4].U_1.V_1.Y0.U_1.V_5.Y5;
Z276(&Zpky9jaD_23, &Zpky9jaD_31, Z355->A[Z350 + 3].U_1.V_1.Y0.Y0);
break;
case 166:;
case 102:;
DEC1(Z350, 4);
Z368 = ZmfDOBA_7;
Zpky9jaD_13 = Z355->A[Z350 + 4].U_1.V_1.Y0.U_1.V_5.Y5;
Z276(&Zpky9jaD_24, &Zpky9jaD_32, Z355->A[Z350 + 3].U_1.V_1.Y0.Y0);
break;
case 167:;
case 103:;
DEC1(Z350, 4);
Z368 = ZmfDOBA_7;
Zpky9jaD_14 = Z355->A[Z350 + 4].U_1.V_1.Y0.U_1.V_5.Y5;
Z276(&Zpky9jaD_25, &Zpky9jaD_33, Z355->A[Z350 + 3].U_1.V_1.Y0.Y0);
break;
case 168:;
case 104:;
DEC1(Z350, 4);
Z368 = ZmfDOBA_7;
Zpky9jaD_15 = Z355->A[Z350 + 4].U_1.V_1.Y0.U_1.V_5.Y5;
Z276(&Zpky9jaD_26, &Zpky9jaD_34, Z355->A[Z350 + 3].U_1.V_1.Y0.Y0);
break;
case 169:;
case 105:;
DEC1(Z350, 4);
Z368 = ZmfDOBA_7;
Zpky9jaD_16 = Z355->A[Z350 + 4].U_1.V_1.Y0.U_1.V_5.Y5;
Z276(&Zpky9jaD_27, &Zpky9jaD_35, Z355->A[Z350 + 3].U_1.V_1.Y0.Y0);
break;
case 170:;
case 106:;
DEC1(Z350, 6);
Z368 = ZmfDOBA_8;
break;
case 171:;
Z368 = ZmfDOBA_9;
break;
case 172:;
case 107:;
DEC1(Z350, 3);
Z368 = ZmfDOBA_9;
if (ZpmCQ_25(ORD(Z355->A[Z350 + 2].U_1.V_1.Y0.U_1.V_4.Y4), &Z255)) {
Z250 = ORD(Z355->A[Z350 + 2].U_1.V_1.Y0.U_1.V_4.Y4);
ZblNKKO_45((STRING)"character already defined", 25L, (LONGCARD)ZblNKKO_16, Z355->A[Z350 + 2].U_1.V_1.Y0.Y0, (LONGCARD)ZblNKKO_24, ADR (Z250));
INC(Zpky9FDA_1);
} else {
ZpmCQ_13(&Z255, ORD(Z355->A[Z350 + 2].U_1.V_1.Y0.U_1.V_4.Y4));
}
if (Z355->A[Z350 + 3].U_1.V_1.Y0.U_1.V_2.Y2 >= 256) {
ZblNKKO_45((STRING)"illegal code", 12L, (LONGCARD)ZblNKKO_16, Z355->A[Z350 + 3].U_1.V_1.Y0.Y0, (LONGCARD)ZblNKKO_24, ADR (Z355->A[Z350 + 3].U_1.V_1.Y0.U_1.V_2.Y2));
INC(Zpky9FDA_1);
} else if (ZpmCQ_25(Z355->A[Z350 + 3].U_1.V_1.Y0.U_1.V_2.Y2, &Z256)) {
ZblNKKO_45((STRING)"code already used", 17L, (LONGCARD)ZblNKKO_16, Z355->A[Z350 + 3].U_1.V_1.Y0.Y0, (LONGCARD)ZblNKKO_24, ADR (Z355->A[Z350 + 3].U_1.V_1.Y0.U_1.V_2.Y2));
INC(Zpky9FDA_1);
} else {
ZpmCQ_13(&Z256, Z355->A[Z350 + 3].U_1.V_1.Y0.U_1.V_2.Y2);
Zq0A4_29.A[CHR(Z355->A[Z350 + 2].U_1.V_1.Y0.U_1.V_4.Y4)] = CHR(Z355->A[Z350 + 3].U_1.V_1.Y0.U_1.V_2.Y2);
}
break;
case 173:;
case 108:;
DEC1(Z350, 1);
Z368 = ZmfDOBA_10;
Z369.U_1.V_1.Y0 = Z355->A[Z350 + 1].U_1.V_1.Y0;
if (Z355->A[Z350 + 1].U_1.V_1.Y0.U_1.V_4.Y4 >= 256) {
ZblNKKO_45((STRING)"illegal code", 12L, (LONGCARD)ZblNKKO_16, Z355->A[Z350 + 1].U_1.V_1.Y0.Y0, (LONGCARD)ZblNKKO_24, ADR (Z355->A[Z350 + 1].U_1.V_1.Y0.U_1.V_4.Y4));
INC(Zpky9FDA_1);
Z369.U_1.V_1.Y0.U_1.V_4.Y4 = Z355->A[Z350 + 1].U_1.V_1.Y0.U_1.V_4.Y4 % 256;
}
break;
case 174:;
case 109:;
DEC1(Z350, 1);
Z368 = ZmfDOBA_10;
if (Z355->A[Z350 + 1].U_1.V_1.Y0.U_1.V_2.Y2 >= 256) {
ZblNKKO_45((STRING)"illegal code", 12L, (LONGCARD)ZblNKKO_16, Z355->A[Z350 + 1].U_1.V_1.Y0.Y0, (LONGCARD)ZblNKKO_24, ADR (Z355->A[Z350 + 1].U_1.V_1.Y0.U_1.V_2.Y2));
INC(Zpky9FDA_1);
}
Z369.U_1.V_1.Y0.U_1.V_4.Y4 = Z355->A[Z350 + 1].U_1.V_1.Y0.U_1.V_2.Y2 % 256;
Z369.U_1.V_1.Y0.Y0 = Z355->A[Z350 + 1].U_1.V_1.Y0.Y0;
break;
case 175:;
DEC1(Z350, 2);
Z368 = ZmfDOBA_11;
break;
case 176:;
DEC1(Z350, 2);
Z368 = ZmfDOBA_12;
break;
case 177:;
DEC1(Z350, 3);
Z368 = ZmfDOBA_13;
Zq0A4J_37 = Z355->A[Z350 + 3].U_1.V_2.Y1;
if (ZmfDOBA_1) {
Zq0A4J_37 = Z270(Zq0A4J_37, (ZrxAagD3_3)Zaf1_2, Zpky9jaD_17);
Zq0A4J_37 = Z270(Zq0A4J_37, (ZrxAagD3_3)Zaf1_3, Zpky9jaD_18);
Zq0A4J_37 = Z270(Zq0A4J_37, (ZrxAagD3_3)Zaf1_4, Zpky9jaD_19);
}
break;
case 178:;
case 110:;
DEC1(Z350, 1);
Z368 = ZmfDOBA_14;
break;
case 179:;
case 111:;
DEC1(Z350, 1);
Z368 = ZmfDOBA_14;
break;
case 180:;
Z368 = ZmfDOBA_15;
break;
case 181:;
DEC1(Z350, 2);
Z368 = ZmfDOBA_15;
break;
case 182:;
Z368 = ZmfDOBA_16;
Z369.U_1.V_2.Y1 = Z265;
break;
case 183:;
DEC1(Z350, 2);
Z368 = ZmfDOBA_16;
Z369.U_1.V_2.Y1 = Zq0A4J_61(Z355->A[Z350 + 1].U_1.V_2.Y1, Z355->A[Z350 + 2].U_1.V_2.Y1);
break;
case 184:;
Z368 = ZmfDOBA_17;
break;
case 185:;
DEC1(Z350, 2);
Z368 = ZmfDOBA_17;
break;
case 186:;
DEC1(Z350, 3);
Z368 = ZmfDOBA_17;
break;
case 187:;
case 112:;
DEC1(Z350, 2);
Z368 = ZmfDOBA_17;
ZdaDwjxF_8 = ZdaDwjxF_9;
break;
case 188:;
case 113:;
DEC1(Z350, 1);
Z368 = ZmfDOBA_18;
Z262 = Zae5ojx8B_6(Z355->A[Z350 + 1].U_1.V_1.Y0.U_1.V_1.Y1, Zae5ojx8B_12);
if (Z262 == Zae5ojx8B_0) {
Zae5ojx8B_5(Z355->A[Z350 + 1].U_1.V_1.Y0.U_1.V_1.Y1, (LONGCARD)(ZdaDwjxF_9 + 1));
INC1(ZdaDwjxF_9, 2);
} else {
Zfb3DLQ_3(Z355->A[Z350 + 1].U_1.V_1.Y0.U_1.V_1.Y1, &Z253);
ZblNKKO_45((STRING)"identifier already defined", 26L, (LONGCARD)ZblNKKO_16, Z355->A[Z350 + 1].U_1.V_1.Y0.Y0, (LONGCARD)ZblNKKO_30, ADR (Z253));
INC(Zpky9FDA_1);
}
break;
case 189:;
DEC1(Z350, 1);
Z368 = ZmfDOBA_19;
ZpmCQ_5(&Z258, (LONGCARD)ZdaDwjxF_9);
ZpmCQ_13(&Z258, Z355->A[Z350 + 1].U_1.V_1.Y0.U_1.V_2.Y2);
ZpmCQ_13(&Z258, Z355->A[Z350 + 1].U_1.V_1.Y0.U_1.V_2.Y2 + 1);
break;
case 190:;
DEC1(Z350, 2);
Z368 = ZmfDOBA_19;
ZpmCQ_13(&Z258, Z355->A[Z350 + 2].U_1.V_1.Y0.U_1.V_2.Y2);
ZpmCQ_13(&Z258, Z355->A[Z350 + 2].U_1.V_1.Y0.U_1.V_2.Y2 + 1);
break;
case 191:;
DEC1(Z350, 3);
Z368 = ZmfDOBA_19;
ZpmCQ_13(&Z258, Z355->A[Z350 + 3].U_1.V_1.Y0.U_1.V_2.Y2);
ZpmCQ_13(&Z258, Z355->A[Z350 + 3].U_1.V_1.Y0.U_1.V_2.Y2 + 1);
break;
case 192:;
case 114:;
DEC1(Z350, 1);
Z368 = ZmfDOBA_20;
Z262 = Zae5ojx8B_6(Z355->A[Z350 + 1].U_1.V_1.Y0.U_1.V_1.Y1, Zae5ojx8B_12);
if (Z262 == Zae5ojx8B_0) {
if (Z355->A[Z350 + 1].U_1.V_1.Y0.U_1.V_1.Y1 != Zfb3DLQ_1) {
Zfb3DLQ_3(Z355->A[Z350 + 1].U_1.V_1.Y0.U_1.V_1.Y1, &Z253);
ZblNKKO_45((STRING)"identifier not defined", 22L, (LONGCARD)ZblNKKO_16, Z355->A[Z350 + 1].U_1.V_1.Y0.Y0, (LONGCARD)ZblNKKO_30, ADR (Z253));
INC(Zpky9FDA_1);
}
Z369.U_1.V_1.Y0.U_1.V_2.Y2 = 0;
} else {
Zae5ojx8B_9(Z262, &Z264, &Z369.U_1.V_1.Y0.U_1.V_2.Y2);
}
break;
case 193:;
case 115:;
DEC1(Z350, 4);
Z368 = ZmfDOBA_21;
Z262 = Zae5ojx8B_6(Z355->A[Z350 + 1].U_1.V_1.Y0.U_1.V_1.Y1, Zae5ojx8B_11);
if (Z262 == Zae5ojx8B_0) {
Zae5ojx8B_4(Z355->A[Z350 + 1].U_1.V_1.Y0.U_1.V_1.Y1, (Zq0A4_11)(ADDRESS)Z355->A[Z350 + 3].U_1.V_2.Y1);
} else {
Zfb3DLQ_3(Z355->A[Z350 + 1].U_1.V_1.Y0.U_1.V_1.Y1, &Z253);
ZblNKKO_45((STRING)"identifier already defined", 26L, (LONGCARD)ZblNKKO_16, Z355->A[Z350 + 1].U_1.V_1.Y0.Y0, (LONGCARD)ZblNKKO_30, ADR (Z253));
INC(Zpky9FDA_1);
}
break;
case 194:;
case 116:;
DEC1(Z350, 5);
Z368 = ZmfDOBA_22;
INC(ZdaDwjxF_10);
Z369.U_1.V_2.Y1 = Zq0A4J_67(Z355->A[Z350 + 1].U_1.V_2.Y1, Z355->A[Z350 + 5].U_1.V_1.Y0.U_1.V_5.Y5, Z355->A[Z350 + 4].U_1.V_1.Y0.Y0.Y0, Z355->A[Z350 + 4].U_1.V_1.Y0.Y0.Y1, Zpky9jaD_0, ZdaDwjxF_10);
break;
case 195:;
case 117:;
DEC1(Z350, 5);
Z368 = ZmfDOBA_22;
INC(ZdaDwjxF_10);
Z369.U_1.V_2.Y1 = Zq0A4J_67(Z355->A[Z350 + 1].U_1.V_2.Y1, Z355->A[Z350 + 5].U_1.V_1.Y0.U_1.V_5.Y5, Z355->A[Z350 + 4].U_1.V_1.Y0.Y0.Y0, Z355->A[Z350 + 4].U_1.V_1.Y0.Y0.Y1, Zpky9jaD_1, ZdaDwjxF_10);
break;
case 196:;
DEC1(Z350, 1);
Z368 = ZmfDOBA_23;
Z369.U_1.V_2.Y1 = Zq0A4J_61(Z265, Z355->A[Z350 + 1].U_1.V_2.Y1);
break;
case 197:;
DEC1(Z350, 3);
Z368 = ZmfDOBA_23;
Z369.U_1.V_2.Y1 = Zq0A4J_61(Z355->A[Z350 + 1].U_1.V_2.Y1, Z355->A[Z350 + 3].U_1.V_2.Y1);
break;
case 198:;
DEC1(Z350, 3);
Z368 = ZmfDOBA_24;
if (Z355->A[Z350 + 2].U_1.V_2.Y1 == Z265) {
Z260 = Z355->A[Z350 + 3].U_1.V_2.Y1;
} else {
if (Z355->A[Z350 + 3].U_1.V_2.Y1 == Z265) {
Z260 = Z355->A[Z350 + 2].U_1.V_2.Y1;
} else {
Z260 = Zq0A4J_62(Z355->A[Z350 + 2].U_1.V_2.Y1, Z355->A[Z350 + 3].U_1.V_2.Y1);
}
}
ZpmCQ_5(&Z258, (LONGCARD)ZdaDwjxF_9);
ZpmCQ_30(&Z258, Z257);
INC(ZdaDwjxF_11);
Z369.U_1.V_2.Y1 = Zq0A4J_68(Z258, Z355->A[Z350 + 1].U_1.V_2.Y1, Z260, ZdaDwjxF_11, Z355->A[Z350 + 1].U_1.V_2.Y2);
break;
case 199:;
DEC1(Z350, 4);
Z368 = ZmfDOBA_24;
if (Z355->A[Z350 + 3].U_1.V_2.Y1 == Z265) {
Z260 = Z355->A[Z350 + 4].U_1.V_2.Y1;
} else {
if (Z355->A[Z350 + 4].U_1.V_2.Y1 == Z265) {
Z260 = Z355->A[Z350 + 3].U_1.V_2.Y1;
} else {
Z260 = Zq0A4J_62(Z355->A[Z350 + 3].U_1.V_2.Y1, Z355->A[Z350 + 4].U_1.V_2.Y1);
}
}
ZdaDwjxF_14 = TRUE;
ZpmCQ_5(&Z258, (LONGCARD)ZdaDwjxF_9);
ZpmCQ_30(&Z258, Z257);
{
LONGCARD B_3 = 1, B_4 = ZdaDwjxF_9;

if (B_3 <= B_4)
for (Z250 = B_3, B_4 = FOR_LIMIT_UP (B_4, 2, MIN_LONGCARD);; Z250 += 2) {
ZpmCQ_14(&Z258, Z250);
if (Z250 >= B_4) break;
}
}
INC(ZdaDwjxF_11);
Z369.U_1.V_2.Y1 = Zq0A4J_68(Z258, Z355->A[Z350 + 2].U_1.V_2.Y1, Z260, ZdaDwjxF_11, Z355->A[Z350 + 2].U_1.V_2.Y2);
break;
case 200:;
DEC1(Z350, 5);
Z368 = ZmfDOBA_24;
if (Z355->A[Z350 + 4].U_1.V_2.Y1 == Z265) {
Z260 = Z355->A[Z350 + 5].U_1.V_2.Y1;
} else {
if (Z355->A[Z350 + 5].U_1.V_2.Y1 == Z265) {
Z260 = Z355->A[Z350 + 4].U_1.V_2.Y1;
} else {
Z260 = Zq0A4J_62(Z355->A[Z350 + 4].U_1.V_2.Y1, Z355->A[Z350 + 5].U_1.V_2.Y1);
}
}
if (Z355->A[Z350 + 2].U_1.V_3.Y3) {
{
LONGCARD B_5 = 1, B_6 = ZdaDwjxF_9;

if (B_5 <= B_6)
for (Z250 = B_5, B_6 = FOR_LIMIT_UP (B_6, 2, MIN_LONGCARD);; Z250 += 2) {
ZpmCQ_14(&Z258, Z250);
if (Z250 >= B_6) break;
}
}
}
INC(ZdaDwjxF_11);
Z369.U_1.V_2.Y1 = Zq0A4J_68(Z258, Z355->A[Z350 + 3].U_1.V_2.Y1, Z260, ZdaDwjxF_11, Z355->A[Z350 + 3].U_1.V_2.Y2);
break;
case 201:;
case 118:;
DEC1(Z350, 3);
Z368 = ZmfDOBA_25;
ZpmCQ_5(&Z258, (LONGCARD)ZdaDwjxF_9);
ZpmCQ_12(&Z258);
ZpmCQ_14(&Z258, 0L);
break;
case 202:;
case 119:;
DEC1(Z350, 3);
Z368 = ZmfDOBA_25;
break;
case 203:;
case 120:;
DEC1(Z350, 4);
Z368 = ZmfDOBA_25;
ZpmCQ_12(&Z258);
ZpmCQ_14(&Z258, 0L);
if (Z355->A[Z350 + 1].U_1.V_1.Y0.U_1.V_1.Y1 != Z263) {
ZblNKKO_44((STRING)"NOT expected", 12L, (LONGCARD)ZblNKKO_16, Z355->A[Z350 + 1].U_1.V_1.Y0.Y0);
INC(Zpky9FDA_1);
}
break;
case 204:;
case 121:;
DEC1(Z350, 4);
Z368 = ZmfDOBA_25;
ZpmCQ_12(&Z258);
ZpmCQ_14(&Z258, 0L);
break;
case 205:;
Z368 = ZmfDOBA_26;
Z369.U_1.V_3.Y3 = FALSE;
break;
case 206:;
case 122:;
DEC1(Z350, 1);
Z368 = ZmfDOBA_26;
Z369.U_1.V_3.Y3 = TRUE;
ZdaDwjxF_14 = TRUE;
break;
case 207:;
Z368 = ZmfDOBA_27;
Z369.U_1.V_2.Y1 = Z265;
break;
case 208:;
DEC1(Z350, 2);
Z368 = ZmfDOBA_27;
Z369.U_1.V_2.Y1 = Z355->A[Z350 + 2].U_1.V_2.Y1;
break;
case 209:;
Z368 = ZmfDOBA_28;
Z369.U_1.V_2.Y1 = Z265;
break;
case 210:;
case 123:;
DEC1(Z350, 1);
Z368 = ZmfDOBA_28;
Z369.U_1.V_2.Y1 = Z266;
break;
case 211:;
DEC1(Z350, 3);
Z368 = ZmfDOBA_29;
Z369.U_1.V_2.Y1 = Zq0A4J_63(Z355->A[Z350 + 1].U_1.V_2.Y1, Z355->A[Z350 + 3].U_1.V_2.Y1);
Z369.U_1.V_2.Y2 = Z355->A[Z350 + 1].U_1.V_2.Y2;
break;
case 212:;
DEC1(Z350, 1);
Z368 = ZmfDOBA_29;
Z369.U_1.V_2.Y1 = Z355->A[Z350 + 1].U_1.V_2.Y1;
Z369.U_1.V_2.Y2 = Z355->A[Z350 + 1].U_1.V_2.Y2;
break;
case 213:;
DEC1(Z350, 2);
Z368 = ZmfDOBA_30;
Z369.U_1.V_2.Y1 = Zq0A4J_62(Z355->A[Z350 + 1].U_1.V_2.Y1, Z355->A[Z350 + 2].U_1.V_2.Y1);
Z369.U_1.V_2.Y2 = Z355->A[Z350 + 1].U_1.V_2.Y2;
break;
case 214:;
DEC1(Z350, 1);
Z368 = ZmfDOBA_30;
Z369.U_1.V_2.Y1 = Z355->A[Z350 + 1].U_1.V_2.Y1;
Z369.U_1.V_2.Y2 = Z355->A[Z350 + 1].U_1.V_2.Y2;
break;
case 215:;
case 124:;
DEC1(Z350, 2);
Z368 = ZmfDOBA_31;
Z369.U_1.V_2.Y1 = Zq0A4J_59(Z355->A[Z350 + 1].U_1.V_2.Y1);
Z369.U_1.V_2.Y2 = Z355->A[Z350 + 1].U_1.V_2.Y2;
break;
case 216:;
case 125:;
DEC1(Z350, 2);
Z368 = ZmfDOBA_31;
Z369.U_1.V_2.Y1 = Zq0A4J_58(Zq0A4J_59(Z355->A[Z350 + 1].U_1.V_2.Y1));
Z369.U_1.V_2.Y2 = Z355->A[Z350 + 1].U_1.V_2.Y2;
break;
case 217:;
case 126:;
DEC1(Z350, 2);
Z368 = ZmfDOBA_31;
Z369.U_1.V_2.Y1 = Zq0A4J_58(Z355->A[Z350 + 1].U_1.V_2.Y1);
Z369.U_1.V_2.Y2 = Z355->A[Z350 + 1].U_1.V_2.Y2;
break;
case 218:;
case 127:;
DEC1(Z350, 4);
Z368 = ZmfDOBA_31;
Z369.U_1.V_2.Y1 = Z265;
{
LONGCARD B_7 = 1, B_8 = Z355->A[Z350 + 3].U_1.V_1.Y0.U_1.V_2.Y2;

if (B_7 <= B_8)
for (Z250 = B_7;; Z250 += 1) {
Z369.U_1.V_2.Y1 = Zq0A4J_62(Z355->A[Z350 + 1].U_1.V_2.Y1, Z369.U_1.V_2.Y1);
if (Z250 >= B_8) break;
}
}
Z369.U_1.V_2.Y2 = Z355->A[Z350 + 1].U_1.V_2.Y2;
break;
case 219:;
case 128:;
DEC1(Z350, 6);
Z368 = ZmfDOBA_31;
Z369.U_1.V_2.Y1 = Z265;
Z260 = Zq0A4J_58(Z355->A[Z350 + 1].U_1.V_2.Y1);
{
LONGCARD B_9 = Z355->A[Z350 + 3].U_1.V_1.Y0.U_1.V_2.Y2 + 1, B_10 = Z355->A[Z350 + 5].U_1.V_1.Y0.U_1.V_2.Y2;

if (B_9 <= B_10)
for (Z250 = B_9;; Z250 += 1) {
Z369.U_1.V_2.Y1 = Zq0A4J_62(Z260, Z369.U_1.V_2.Y1);
if (Z250 >= B_10) break;
}
}
{
LONGCARD B_11 = 1, B_12 = Z355->A[Z350 + 3].U_1.V_1.Y0.U_1.V_2.Y2;

if (B_11 <= B_12)
for (Z250 = B_11;; Z250 += 1) {
Z369.U_1.V_2.Y1 = Zq0A4J_62(Z355->A[Z350 + 1].U_1.V_2.Y1, Z369.U_1.V_2.Y1);
if (Z250 >= B_12) break;
}
}
Z369.U_1.V_2.Y2 = Z355->A[Z350 + 1].U_1.V_2.Y2;
break;
case 220:;
case 129:;
DEC1(Z350, 3);
Z368 = ZmfDOBA_31;
Z369.U_1.V_2.Y1 = Z355->A[Z350 + 2].U_1.V_2.Y1;
Z369.U_1.V_2.Y2 = Z355->A[Z350 + 1].U_1.V_1.Y0.Y0;
break;
case 221:;
DEC1(Z350, 1);
Z368 = ZmfDOBA_31;
Z369.U_1.V_2.Y1 = Zq0A4J_65(Z259);
Z369.U_1.V_2.Y2 = Z355->A[Z350 + 1].U_1.V_2.Y2;
break;
case 222:;
case 130:;
DEC1(Z350, 1);
Z368 = ZmfDOBA_31;
Z369.U_1.V_2.Y1 = Zq0A4J_64(Z355->A[Z350 + 1].U_1.V_1.Y0.U_1.V_4.Y4);
if (Z355->A[Z350 + 1].U_1.V_1.Y0.U_1.V_4.Y4 > Zaf1_7) {
ZblNKKO_45((STRING)"character out of bounds", 23L, (LONGCARD)ZblNKKO_17, Z355->A[Z350 + 1].U_1.V_1.Y0.Y0, (LONGCARD)ZblNKKO_29, ADR (Z355->A[Z350 + 1].U_1.V_1.Y0.U_1.V_4.Y4));
}
Z369.U_1.V_2.Y2 = Z355->A[Z350 + 1].U_1.V_1.Y0.Y0;
break;
case 223:;
DEC1(Z350, 1);
Z368 = ZmfDOBA_31;
Z262 = Zae5ojx8B_6(Z355->A[Z350 + 1].U_1.V_1.Y0.U_1.V_1.Y1, Zae5ojx8B_11);
if (Z262 == Zae5ojx8B_0) {
if (ZmfDOBA_0) {
Zfb3DLQ_3(Z355->A[Z350 + 1].U_1.V_1.Y0.U_1.V_1.Y1, &Z253);
ZblNKKO_45((STRING)"identifier not defined", 22L, (LONGCARD)ZblNKKO_16, Z355->A[Z350 + 1].U_1.V_1.Y0.Y0, (LONGCARD)ZblNKKO_30, ADR (Z253));
INC(Zpky9FDA_1);
}
Z254 = Zfb3DLQ_4(Z355->A[Z350 + 1].U_1.V_1.Y0.U_1.V_1.Y1);
Z369.U_1.V_2.Y1 = Zq0A4J_66(Z254);
} else {
Zae5ojx8B_8(Z262, &Z264, &Z261);
Z369.U_1.V_2.Y1 = (Zq0A4J_17)(ADDRESS)Z261;
}
Z369.U_1.V_2.Y2 = Z355->A[Z350 + 1].U_1.V_1.Y0.Y0;
break;
case 224:;
case 131:;
DEC1(Z350, 1);
Z368 = ZmfDOBA_31;
Z369.U_1.V_2.Y1 = Zq0A4J_66(Z355->A[Z350 + 1].U_1.V_1.Y0.U_1.V_3.Y3);
Z369.U_1.V_2.Y2 = Z355->A[Z350 + 1].U_1.V_1.Y0.Y0;
break;
case 225:;
case 132:;
DEC1(Z350, 1);
Z368 = ZmfDOBA_31;
Zp1PEAFD_18((LONGINT)Z355->A[Z350 + 1].U_1.V_1.Y0.U_1.V_2.Y2, &Z253);
Z369.U_1.V_2.Y1 = Zq0A4J_66(Zp1PEAFi_2(&Z253));
Z369.U_1.V_2.Y2 = Z355->A[Z350 + 1].U_1.V_1.Y0.Y0;
break;
case 226:;
case 133:;
DEC1(Z350, 1);
Z368 = ZmfDOBA_32;
Z369.U_1.V_1.Y0 = Z355->A[Z350 + 1].U_1.V_1.Y0;
break;
case 227:;
case 134:;
DEC1(Z350, 1);
Z368 = ZmfDOBA_32;
Z369.U_1.V_1.Y0 = Z355->A[Z350 + 1].U_1.V_1.Y0;
Z355->A[Z350 + 1].U_1.V_1.Y0.U_1.V_1.Y1 = Z279((STRING)"SCANNER", 7L);
break;
case 228:;
case 135:;
DEC1(Z350, 1);
Z368 = ZmfDOBA_32;
Z369.U_1.V_1.Y0 = Z355->A[Z350 + 1].U_1.V_1.Y0;
Z355->A[Z350 + 1].U_1.V_1.Y0.U_1.V_1.Y1 = Z279((STRING)"IMPORT", 6L);
break;
case 229:;
case 136:;
DEC1(Z350, 1);
Z368 = ZmfDOBA_32;
Z369.U_1.V_1.Y0 = Z355->A[Z350 + 1].U_1.V_1.Y0;
Z355->A[Z350 + 1].U_1.V_1.Y0.U_1.V_1.Y1 = Z279((STRING)"EXPORT", 6L);
break;
case 230:;
case 137:;
DEC1(Z350, 1);
Z368 = ZmfDOBA_32;
Z369.U_1.V_1.Y0 = Z355->A[Z350 + 1].U_1.V_1.Y0;
Z355->A[Z350 + 1].U_1.V_1.Y0.U_1.V_1.Y1 = Z279((STRING)"GLOBAL", 6L);
break;
case 231:;
case 138:;
DEC1(Z350, 1);
Z368 = ZmfDOBA_32;
Z369.U_1.V_1.Y0 = Z355->A[Z350 + 1].U_1.V_1.Y0;
Z355->A[Z350 + 1].U_1.V_1.Y0.U_1.V_1.Y1 = Z279((STRING)"LOCAL", 5L);
break;
case 232:;
case 139:;
DEC1(Z350, 1);
Z368 = ZmfDOBA_32;
Z369.U_1.V_1.Y0 = Z355->A[Z350 + 1].U_1.V_1.Y0;
Z355->A[Z350 + 1].U_1.V_1.Y0.U_1.V_1.Y1 = Z279((STRING)"BEGIN", 5L);
break;
case 233:;
case 140:;
DEC1(Z350, 1);
Z368 = ZmfDOBA_32;
Z369.U_1.V_1.Y0 = Z355->A[Z350 + 1].U_1.V_1.Y0;
Z355->A[Z350 + 1].U_1.V_1.Y0.U_1.V_1.Y1 = Z279((STRING)"CLOSE", 5L);
break;
case 234:;
case 141:;
DEC1(Z350, 1);
Z368 = ZmfDOBA_32;
Z369.U_1.V_1.Y0 = Z355->A[Z350 + 1].U_1.V_1.Y0;
Z355->A[Z350 + 1].U_1.V_1.Y0.U_1.V_1.Y1 = Z279((STRING)"EOF", 3L);
break;
case 235:;
case 142:;
DEC1(Z350, 1);
Z368 = ZmfDOBA_32;
Z369.U_1.V_1.Y0 = Z355->A[Z350 + 1].U_1.V_1.Y0;
Z355->A[Z350 + 1].U_1.V_1.Y0.U_1.V_1.Y1 = Z279((STRING)"DEFAULT", 7L);
break;
case 236:;
case 143:;
DEC1(Z350, 1);
Z368 = ZmfDOBA_32;
Z369.U_1.V_1.Y0 = Z355->A[Z350 + 1].U_1.V_1.Y0;
Z355->A[Z350 + 1].U_1.V_1.Y0.U_1.V_1.Y1 = Z279((STRING)"CHARACTER_SET", 13L);
break;
case 237:;
case 144:;
DEC1(Z350, 1);
Z368 = ZmfDOBA_32;
Z369.U_1.V_1.Y0 = Z355->A[Z350 + 1].U_1.V_1.Y0;
Z355->A[Z350 + 1].U_1.V_1.Y0.U_1.V_1.Y1 = Z279((STRING)"DEFINE", 6L);
break;
case 238:;
case 145:;
DEC1(Z350, 1);
Z368 = ZmfDOBA_32;
Z369.U_1.V_1.Y0 = Z355->A[Z350 + 1].U_1.V_1.Y0;
Z355->A[Z350 + 1].U_1.V_1.Y0.U_1.V_1.Y1 = Z279((STRING)"START", 5L);
break;
case 239:;
case 146:;
DEC1(Z350, 1);
Z368 = ZmfDOBA_32;
Z369.U_1.V_1.Y0 = Z355->A[Z350 + 1].U_1.V_1.Y0;
Z355->A[Z350 + 1].U_1.V_1.Y0.U_1.V_1.Y1 = Z279((STRING)"RULE", 4L);
break;
case 240:;
case 147:;
DEC1(Z350, 1);
Z368 = ZmfDOBA_32;
Z369.U_1.V_1.Y0 = Z355->A[Z350 + 1].U_1.V_1.Y0;
Z355->A[Z350 + 1].U_1.V_1.Y0.U_1.V_1.Y1 = Z279((STRING)"RULES", 5L);
break;
case 241:;
DEC1(Z350, 2);
Z368 = ZmfDOBA_33;
ZerF6mmCQ_11(&Z259);
Z369.U_1.V_2.Y2 = Z355->A[Z350 + 1].U_1.V_1.Y0.Y0;
break;
case 242:;
case 148:;
DEC1(Z350, 4);
Z368 = ZmfDOBA_33;
Z369.U_1.V_2.Y2 = Z355->A[Z350 + 2].U_1.V_1.Y0.Y0;
break;
case 243:;
Z368 = ZmfDOBA_34;
ZerF6mmCQ_6(&Z259);
break;
case 244:;
DEC1(Z350, 2);
Z368 = ZmfDOBA_34;
ZerF6mmCQ_12(&Z259, Z355->A[Z350 + 2].U_1.V_1.Y0.U_1.V_4.Y4);
if (Z355->A[Z350 + 2].U_1.V_1.Y0.U_1.V_4.Y4 > Zaf1_7) {
ZblNKKO_45((STRING)"character out of bounds", 23L, (LONGCARD)ZblNKKO_17, Z355->A[Z350 + 2].U_1.V_1.Y0.Y0, (LONGCARD)ZblNKKO_29, ADR (Z355->A[Z350 + 2].U_1.V_1.Y0.U_1.V_4.Y4));
}
break;
case 245:;
case 149:;
DEC1(Z350, 4);
Z368 = ZmfDOBA_34;
ZerF6mmCQ_13(&Z259, Z355->A[Z350 + 2].U_1.V_1.Y0.U_1.V_4.Y4, Z355->A[Z350 + 4].U_1.V_1.Y0.U_1.V_4.Y4);
if (Z355->A[Z350 + 2].U_1.V_1.Y0.U_1.V_4.Y4 > Zaf1_7) {
ZblNKKO_45((STRING)"character out of bounds", 23L, (LONGCARD)ZblNKKO_17, Z355->A[Z350 + 2].U_1.V_1.Y0.Y0, (LONGCARD)ZblNKKO_29, ADR (Z355->A[Z350 + 2].U_1.V_1.Y0.U_1.V_4.Y4));
}
if (Z355->A[Z350 + 4].U_1.V_1.Y0.U_1.V_4.Y4 > Zaf1_7) {
ZblNKKO_45((STRING)"character out of bounds", 23L, (LONGCARD)ZblNKKO_17, Z355->A[Z350 + 4].U_1.V_1.Y0.Y0, (LONGCARD)ZblNKKO_29, ADR (Z355->A[Z350 + 4].U_1.V_1.Y0.U_1.V_4.Y4));
}
break;
case 246:;
Z368 = ZmfDOBA_35;
Zpky9FDA_5();
break;
case 247:;
Z368 = ZmfDOBA_36;
Zpky9FDA_3();
break;
case 248:;
Z368 = ZmfDOBA_37;
Zpky9FDA_3();
break;
case 249:;
Z368 = ZmfDOBA_38;
Zpky9FDA_6();
break;
case 250:;
Z368 = ZmfDOBA_39;
ZpmCQ_5(&Z255, 256L);
ZpmCQ_5(&Z256, 256L);
if (Z252) {
ZblNKKO_44((STRING)"CHARACTER_SET already defined", 29L, (LONGCARD)ZblNKKO_16, Zpky9FDA_10.Y0);
INC(Zpky9FDA_1);
}
Z252 = TRUE;
if (Zpky9jaD_45) {
ZblNKKO_44((STRING)"CHARACTER_SET not compatible with options -k and -z", 51L, (LONGCARD)ZblNKKO_16, Zpky9FDA_10.Y0);
INC(Zpky9FDA_1);
}
break;
case 251:;
Z368 = ZmfDOBA_40;
Zpky9FDA_4();
break;
case 252:;
Z368 = ZmfDOBA_41;
Zpky9FDA_3();
break;
case 253:;
Z368 = ZmfDOBA_42;
Zpky9FDA_3();
break;
case 254:;
Z368 = ZmfDOBA_43;
Zpky9FDA_3();
break;
case 255:;
Z368 = ZmfDOBA_44;
Zpky9FDA_3();
break;
case 256:;
Z368 = ZmfDOBA_45;
Zpky9FDA_3();
break;
case 257:;
Z368 = ZmfDOBA_46;
Zpky9FDA_3();
break;
case 258:;
Z368 = ZmfDOBA_47;
Zpky9FDA_3();
break;
case 259:;
Z368 = ZmfDOBA_48;
Zpky9FDA_3();
break;
case 260:;
Z368 = ZmfDOBA_49;
ZdaDwjxF_9 = 0;
ZdaDwjxF_8 = 0;
ZdaDwjxF_10 = 0;
ZdaDwjxF_11 = 0;
ZdaDwjxF_14 = FALSE;
Z266 = Zq0A4J_64((ZrxAagD3_3)Zaf1_4);
Zpky9jaD_37 = Zfb3DLQ_1;
Zp1PEAFD_13((STRING)"ANY", 3L, &Z253);
ZerF6mmCQ_6(&Z259);
ZerF6mmCQ_11(&Z259);
ZerF6mmCQ_14(&Z259, (LONGCARD)Zaf1_4);
Zae5ojx8B_4(Zfb3DLQ_2(&Z253), (Zq0A4_11)(ADDRESS)Zq0A4J_65(Z259));
Zp1PEAFD_13((STRING)"STD", 3L, &Z253);
Zae5ojx8B_5(Zfb3DLQ_2(&Z253), (LONGCARD)(ZdaDwjxF_9 + 1));
INC1(ZdaDwjxF_9, 2);
break;
case 261:;
Z368 = ZmfDOBA_50;
if (ZdaDwjxF_8 == 0) {
ZdaDwjxF_8 = ZdaDwjxF_9;
}
ZpmCQ_5(&Z257, (LONGCARD)ZdaDwjxF_9);
{
SHORTCARD B_13 = 1, B_14 = ZdaDwjxF_8;

if (B_13 <= B_14)
for (Z269 = B_13;; Z269 += 1) {
ZpmCQ_13(&Z257, (LONGCARD)Z269);
if (Z269 >= B_14) break;
}
}
Zpky9jaD_49();
break;
}
Z366 = Z354->A[Z350];
for (;;) {
Z374 = (Z319)(Z326.A[Z366] + Z368 * sizeof (Z316));
if (Z374->Y0 == Z366) {
Z366 = Z374->Y1;
goto EXIT_5;
}
Z366 = Z328.A[Z366];
} EXIT_5:;
INC(Z350);
Z355->A[Z350] = Z369;
if (Z366 < Z307) {
goto EXIT_4;
}
} EXIT_4:;
} else {
INC(Z350);
Z355->A[Z350].U_1.V_1.Y0 = Zpky9FDA_10;
Z367 = Zpky9FDA_14();
Z375 = FALSE;
}
} EXIT_2:;
} EXIT_1:;
}

static Z312 Z383
# ifdef HAVE_ARGS
(Z312 Z445, LONGINT Z446, LONGINT Z447)
# else
(Z445, Z446, Z447)
Z312 Z445;
LONGINT Z446;
LONGINT Z447;
# endif
{
BOOLEAN Z448;
ZpmCQ_4 Z449;
ZpmCQ_4 Z450;
Z312 Z340;
struct S_18 Z451;
Zp1PEAFD_2 Z452;
Zp1PEAFD_2 Z453;
INTEGER Z454;

if (Z338.Y2) {
ZblNKKO_42((LONGCARD)ZblNKKO_1, (LONGCARD)ZblNKKO_16, Zpky9FDA_10.Y0);
ZmfDOBA_56((LONGCARD)Z445, Z451.A, 128L);
Zp1PEAFD_13(Z451.A, 128L, &Z452);
ZblNKKO_43((LONGCARD)ZblNKKO_9, (LONGCARD)ZblNKKO_20, Zpky9FDA_10.Y0, (LONGCARD)ZblNKKO_30, ADR (Z452));
ZpmCQ_5(&Z449, (LONGCARD)Z288);
Z459(Z446, Z447, &Z449);
Zp1PEAFD_4(&Z453);
{
Z312 B_15 = ZpmCQ_17(&Z449), B_16 = ZpmCQ_18(&Z449);

if (B_15 <= B_16)
for (Z340 = B_15;; Z340 += 1) {
if (ZpmCQ_25((LONGCARD)Z340, &Z449)) {
ZmfDOBA_56((LONGCARD)Z340, Z451.A, 128L);
Zp1PEAFD_13(Z451.A, 128L, &Z452);
if (Zp1PEAFD_7(&Z453) + Zp1PEAFD_7(&Z452) + 1 <= Zp1PEAFD_0) {
Zp1PEAFD_5(&Z453, &Z452);
Zp1PEAFD_6(&Z453, ' ');
}
}
if (Z340 >= B_16) break;
}
}
ZblNKKO_43((LONGCARD)ZblNKKO_2, (LONGCARD)ZblNKKO_20, Zpky9FDA_10.Y0, (LONGCARD)ZblNKKO_30, ADR (Z453));
ZpmCQ_7(&Z449);
}
ZpmCQ_5(&Z450, (LONGCARD)Z288);
Z466(Z446, Z447, &Z450);
Z448 = FALSE;
while (!ZpmCQ_25((LONGCARD)Z445, &Z450)) {
Z445 = Zpky9FDA_14();
Z448 = TRUE;
}
ZpmCQ_7(&Z450);
if (Z448 && Z338.Y2) {
ZblNKKO_42((LONGCARD)ZblNKKO_3, (LONGCARD)ZblNKKO_20, Zpky9FDA_10.Y0);
}
return Z445;
}

static void Z459
# ifdef HAVE_ARGS
(LONGINT Z446, LONGINT Z447, ZpmCQ_4 *Z449)
# else
(Z446, Z447, Z449)
LONGINT Z446;
LONGINT Z447;
ZpmCQ_4 *Z449;
# endif
{
Z312 Z445;
Z309 Z468;
Z309 Z469;

Z468 = Z354->A[Z447];
ZpmCQ_32(Z449);
for (Z445 = Z287; Z445 <= Z288; Z445 += 1) {
Z469 = Z314(Z468, Z445);
if (Z469 != Z282 && (Z469 <= Z302 || Z470(Z445, Z446, Z447))) {
ZpmCQ_13(Z449, (LONGCARD)Z445);
}
}
}

static BOOLEAN Z470
# ifdef HAVE_ARGS
(Z312 Z445, LONGINT Z446, LONGINT Z447)
# else
(Z445, Z446, Z447)
Z312 Z445;
LONGINT Z446;
LONGINT Z447;
# endif
{
LONGINT Z468;
Z312 Z471;
Z320 Z472;

ZarQdhNDD_0((ADDRESS *)&Z472, &Z446, (LONGINT)sizeof (Z309));
{
LONGINT B_17 = 0, B_18 = Z447;

if (B_17 <= B_18)
for (Z468 = B_17;; Z468 += 1) {
Z472->A[Z468] = Z354->A[Z468];
if (Z468 >= B_18) break;
}
}
Z468 = Z472->A[Z447];
for (;;) {
Z472->A[Z447] = Z468;
Z468 = Z314((Z309)Z468, Z445);
if (Z468 == Z282) {
ZarQdhNDD_3((ADDRESS *)&Z472, &Z446, (LONGINT)sizeof (Z309));
return FALSE;
}
do {
if (Z468 > Z300) {
Z468 = Z335.A[Z468 - 262];
}
if (Z468 <= Z302) {
ZarQdhNDD_3((ADDRESS *)&Z472, &Z446, (LONGINT)sizeof (Z309));
return TRUE;
} else {
DEC1(Z447, Z332.A[Z468 - 150]);
Z471 = Z333.A[Z468 - 150];
}
Z468 = Z314(Z472->A[Z447], Z471);
INC(Z447);
if (Z447 >= Z446) {
ZarQdhNDD_2((ADDRESS *)&Z472, &Z446, (LONGINT)sizeof (Z309));
}
} while (!(Z468 < Z307));
} EXIT_6:;
}

static void Z473
# ifdef HAVE_ARGS
(Z309 Z468, ZpmCQ_4 *Z449)
# else
(Z468, Z449)
Z309 Z468;
ZpmCQ_4 *Z449;
# endif
{
Z312 Z445;
Z309 Z469;

ZpmCQ_32(Z449);
for (Z445 = Z287; Z445 <= Z288; Z445 += 1) {
Z469 = Z314(Z468, Z445);
if (Z469 != Z282 && Z469 <= Z302) {
ZpmCQ_13(Z449, (LONGCARD)Z445);
}
}
}

static void Z466
# ifdef HAVE_ARGS
(LONGINT Z446, LONGINT Z447, ZpmCQ_4 *Z450)
# else
(Z446, Z447, Z450)
LONGINT Z446;
LONGINT Z447;
ZpmCQ_4 *Z450;
# endif
{
Z320 Z472;
LONGINT Z468;
Z312 Z471;
ZpmCQ_4 Z449;

ZarQdhNDD_0((ADDRESS *)&Z472, &Z446, (LONGINT)sizeof (Z309));
{
LONGINT B_19 = 0, B_20 = Z447;

if (B_19 <= B_20)
for (Z468 = B_19;; Z468 += 1) {
Z472->A[Z468] = Z354->A[Z468];
if (Z468 >= B_20) break;
}
}
ZpmCQ_5(&Z449, (LONGCARD)Z288);
ZpmCQ_32(Z450);
Z468 = Z472->A[Z447];
for (;;) {
if (Z447 >= Z446) {
ZarQdhNDD_2((ADDRESS *)&Z472, &Z446, (LONGINT)sizeof (Z309));
}
Z472->A[Z447] = Z468;
Z473((Z309)Z468, &Z449);
ZpmCQ_8(Z450, Z449);
Z468 = Z314((Z309)Z468, Z334.A[Z468]);
if (Z468 >= Z307) {
if (Z468 <= Z298) {
INC(Z447);
Z468 = Z336.A[Z468 - 96];
}
for (;;) {
if (Z468 > Z300) {
Z468 = Z335.A[Z468 - 262];
}
if (Z299 <= Z468 && Z468 <= Z302) {
ZarQdhNDD_3((ADDRESS *)&Z472, &Z446, (LONGINT)sizeof (Z309));
ZpmCQ_7(&Z449);
return;
} else if (Z468 < Z307) {
INC(Z447);
goto EXIT_8;
} else {
DEC1(Z447, Z332.A[Z468 - 150]);
Z471 = Z333.A[Z468 - 150];
}
Z468 = Z314(Z472->A[Z447], Z471);
INC(Z447);
if (Z468 < Z307) {
goto EXIT_8;
}
} EXIT_8:;
} else {
INC(Z447);
}
} EXIT_7:;
}

static Z309 Z314
# ifdef HAVE_ARGS
(Z309 Z468, Z312 Z474)
# else
(Z468, Z474)
Z309 Z468;
Z312 Z474;
# endif
{
Z317 Z475;
Z318 Z476;
Z319 Z477;

if (Z474 <= Z288) {
for (;;) {
Z475 = (Z317)(Z325.A[Z468] + Z474 * sizeof (Z313));
if (Z475->Y0 == Z468) {
return Z475->Y1;
}
Z468 = Z327.A[Z468];
if (Z468 == Z282) {
return Z282;
}
} EXIT_9:;
} else {
for (;;) {
Z477 = (Z319)(Z326.A[Z468] + Z474 * sizeof (Z316));
if (Z477->Y0 == Z468) {
return Z477->Y1;
}
Z468 = Z328.A[Z468];
} EXIT_10:;
}
}

static void Z479
# ifdef HAVE_ARGS
(LONGCARD Z480)
# else
(Z480)
LONGCARD Z480;
# endif
{
Z325.A[Z478] = ADR (Z329.A[Z480]);
INC(Z478);
}

static void Z481
# ifdef HAVE_ARGS
(LONGCARD Z480)
# else
(Z480)
LONGCARD Z480;
# endif
{
Z326.A[Z478] = ADR (Z331.A[Z480 + Z288 + 1 - 40]) - (Z288 + 1) * sizeof (Z316);
INC(Z478);
}

static void Z482
# ifdef HAVE_ARGS
(LONGCARD Z480)
# else
(Z480)
LONGCARD Z480;
# endif
{
Z327.A[Z478] = Z480;
INC(Z478);
}

static void Z483
# ifdef HAVE_ARGS
(LONGCARD Z480)
# else
(Z480)
LONGCARD Z480;
# endif
{
Z328.A[Z478] = Z480;
INC(Z478);
}

static void Z484
# ifdef HAVE_ARGS
(LONGCARD Z480)
# else
(Z480)
LONGCARD Z480;
# endif
{
if (!ODD(Z478)) {
Z329.A[Z478 / 2].Y0 = Z480;
} else {
Z329.A[Z478 / 2].Y1 = Z480;
}
INC(Z478);
}

static void Z485
# ifdef HAVE_ARGS
(LONGCARD Z480)
# else
(Z480)
LONGCARD Z480;
# endif
{
Z330.A[Z478 - 40] = Z480;
INC(Z478);
}

static void Z486
# ifdef HAVE_ARGS
(LONGCARD Z480)
# else
(Z480)
LONGCARD Z480;
# endif
{
if (!ODD(Z478)) {
Z331.A[Z478 / 2 - 40].Y0 = Z480;
} else {
Z331.A[Z478 / 2 - 40].Y1 = Z480;
}
INC(Z478);
}

static void Z487
# ifdef HAVE_ARGS
(LONGCARD Z480)
# else
(Z480)
LONGCARD Z480;
# endif
{
Z332.A[Z478 - 150] = Z480;
INC(Z478);
}

static void Z488
# ifdef HAVE_ARGS
(LONGCARD Z480)
# else
(Z480)
LONGCARD Z480;
# endif
{
Z333.A[Z478 - 150] = Z480;
INC(Z478);
}

static void Z489
# ifdef HAVE_ARGS
(LONGCARD Z480)
# else
(Z480)
LONGCARD Z480;
# endif
{
Z334.A[Z478] = Z480;
INC(Z478);
}

static void Z490
# ifdef HAVE_ARGS
(LONGCARD Z480)
# else
(Z480)
LONGCARD Z480;
# endif
{
Z335.A[Z478 - 262] = Z480;
INC(Z478);
}

static void Z491
# ifdef HAVE_ARGS
(LONGCARD Z480)
# else
(Z480)
LONGCARD Z480;
# endif
{
Z336.A[Z478 - 96] = Z480;
INC(Z478);
}

static void Z492
 ARGS ((void))
{
Zmfy8_1 Z493;

Z493 = Z479;
Z478 = 1;
Zmfy8_9(Z493, (STRING)"^,0]L^N[P[L\\-ZAZ6[F[DZPZN[EZ?\\:WG\\HZ?Z5Z4YIYEYAY>Y=\\TZM", 55L, 28L);
Zmfy8_9(Z493, (STRING)"Y?VRCY-XSX7Y4X9X2Y/Y3Y-EY@WM+Z6+D+;WM+Z1Z2RYA\\5+[0XJ[EVP", 56L, 33L);
Zmfy8_9(Z493, (STRING)"YGVOVAY1VBV5\\8YGV>+Y@ZBZH++\\TXJVQX4\\68\\7+[BZT+[PV?VPX0X,", 56L, 31L);
Zmfy8_9(Z493, (STRING)"+Y=W:", 5L, 3L);
Z493 = Z481;
Z478 = 1;
Zmfy8_9(Z493, (STRING)"++V<+V7OMT3LLKMV-S+-+++++++++SO2V5++++++++++V8+V/<V2/.0", 55L, 48L);
Zmfy8_9(Z493, (STRING)"++++V/+K+;+QE+6++J+C+V1HV,+V0V.,3F+++V8V4V7T++V.+++++R+", 55L, 46L);
Zmfy8_9(Z493, (STRING)"+", 1L, 1L);
Z493 = Z482;
Z478 = 1;
Zmfy8_9(Z493, (STRING)"+++++++++++++++++++++++++++T+++++++++++++++V?+VI+V?+VO+", 55L, 51L);
Zmfy8_9(Z493, (STRING)"+++VSV0V?++W/+V0V4+++++VS+V=V?++V?V?+V?++VF+VFVN++V=+++", 55L, 39L);
Zmfy8_9(Z493, (STRING)"++VN++", 6L, 5L);
Z493 = Z483;
Z478 = 1;
Zmfy8_9(Z493, (STRING)"+++++++++++++++++++++++++++++++++++++++++++V1+VI+V?+VO+", 55L, 51L);
Zmfy8_9(Z493, (STRING)"+++VDV0V1++++VO+++++++VD+V1++V1V1+V0+++++++++++++++++", 53L, 44L);
Z493 = Z484;
Z478 = 0;
Zmfy8_9(Z493, (STRING)"V/Y4V4Z/V4Z/V4Z/V4Z/-XCV4Z/V4Z/V4Z/V4Z/V4Z/V4Z/V4Z/V4Z/", 55L, 28L);
Zmfy8_9(Z493, (STRING)"VSWIV4Z/V4Z/V4Z/V4WSV4Z/V4WTV4X+V4Z/V4Z/V4VAJW7V4Z/TWHV2", 56L, 29L);
Zmfy8_9(Z493, (STRING)"WJV4Z/V4Z/V4Z/V4Z/V2V?V4Z/V4Z/V4Z/V4Z/V4Z/V4Z/V7Z;V7Z;V7", 56L, 28L);
Zmfy8_9(Z493, (STRING)"Z;V7Z;V0V0V7Z;V7Z;V7Z;V7Z;V7Z;V7Z;V0ZOV7Z;VDWIV7Z;V7Z;V7", 56L, 28L);
Zmfy8_9(Z493, (STRING)"Z;V7Z;V7Z;V7Z;V7Z;V7Z;VGWIV7Z;W0W5V7Z;VAVPVCWBV7Z;V7Z;V7", 56L, 28L);
Zmfy8_9(Z493, (STRING)"Z;V7Z;V7VDV7Z;V7Z;V7Z;V7Z;V7Z;V7Z;V@Z.V@Z.V@Z.V@Z.W1ZMV@", 56L, 28L);
Zmfy8_9(Z493, (STRING)"Z.V@Z.V@Z.V@Z.V@Z.V@Z.V@Z.V@Z.IWFV@Z.V@Z.V@Z.V>V?V@Z.W1", 55L, 28L);
Zmfy8_9(Z493, (STRING)"W6VPW0V@Z.V@Z.V>X.W6XBV@Z.VPX,W1ZMV@Z.V@Z.V@Z.V@Z.IWEV@", 55L, 28L);
Zmfy8_9(Z493, (STRING)"Z.V@Z.V@Z.V@Z.V@Z.V@Z.V,Y9V,Y9V,Y9V,Y9V,Y9<ZRV,Y9V,Y9V,", 55L, 28L);
Zmfy8_9(Z493, (STRING)"Y9V,Y9V,Y9V,Y9V3Z-V3Z-W3WLV3Z-V3Z-V3Z-W2WKV,Y9PW>VQW1V,", 55L, 28L);
Zmfy8_9(Z493, (STRING)"Y9V3Z-<ZRMW;V,Y9OW=V,Y9V3Z-V,Y9V,Y9V,Y9V,Y9V,Y9V3Z-V,Y9", 55L, 29L);
Zmfy8_9(Z493, (STRING)"V,Y9V,Y9V,Y9V<YPV<YPV<YPV<YPVQXAV<YPV<YPV<YPV<YPV<YPV<YP", 56L, 28L);
Zmfy8_9(Z493, (STRING)"VOZ,VOZ,LW:VOZ,VOZ,VOZ,KW9V<YPQW@VBZLV<YPVOZ,RW?NW<V<YP", 55L, 30L);
Zmfy8_9(Z493, (STRING)"SV-V<WQVOZ,V<YPV<YPV<YPVIV7V<YPVOZ,V<YPV<YPV<YPV<YPV?X2", 55L, 28L);
Zmfy8_9(Z493, (STRING)"V?X1V?X0V?X/VBZLV?X6V?X8V?X9V?X=V?X>V?X@VIV9VFVSV8VEW5X-", 56L, 28L);
Zmfy8_9(Z493, (STRING)"ERDQHZTV+V.CPVIV:V?V1V6WDBOV6WCVIV8V.Y.ANV.Y.V?X?V?X7V?", 55L, 33L);
Zmfy8_9(Z493, (STRING)"X5VFWNV?X::Y;V?X;V?X3V?X<V?X4:Y;:Y;:Y;:Y;:Y;:Y;V5VB:Y;V6", 56L, 32L);
Zmfy8_9(Z493, (STRING)"WA@M?L4[.V.Y.:Y;GY3GY3GY3GY3GY3GY3>KGT3[-VJZP:Y;:Y;:Y;G", 55L, 38L);
Zmfy8_9(Z493, (STRING)"WG:Y;VKZQ:Y;:Y;:Y;:Y;V;VI8[1V;VJ7[2GY3GY3GY3W-W3GY39Y7G", 55L, 34L);
Zmfy8_9(Z493, (STRING)"Y3GY3GY3GY39Y79Y79Y79Y79Y79Y70W8V=YRV;VKV=YRV=VM0XK0XK0", 55L, 34L);
Zmfy8_9(Z493, (STRING)"XK0XK0XK0XKW,W2W/YS6[0W/YS5[/W/V?V=YR9Y79Y79Y71[+9Y7V=YR", 56L, 33L);
Zmfy8_9(Z493, (STRING)"9Y79Y79Y79Y7W/YS0XK0XK0XK2[,0XKW/YS0XK0XK0XK0XK=XL=XL=XL", 56L, 36L);
Zmfy8_9(Z493, (STRING)"=XL=XL=XL=JFSV9VGVRWOVTWPVEWMFY2FY2FY2FY2FY2FY2;HVNYT++", 55L, 36L);
Zmfy8_9(Z493, (STRING)"VNYT++++=XL=XL=XL++=XL++=XL=XL=XL=XL++VNWRFY2FY2FY2++FY2", 56L, 40L);
Zmfy8_9(Z493, (STRING)"VNYTFY2FY2FY2FY2.XE.XE.XE.XE.XE.XE++++++++,[3,[3,[3,[3,", 55L, 39L);
Zmfy8_9(Z493, (STRING)"[3,[3++++++++++++++++.XE.XE.XE++.XE++.XE.XE.XE.XE,[3,[3", 55L, 43L);
Zmfy8_9(Z493, (STRING)",[3++,[3++,[3,[3,[3,[3/3/5/6/9/:/[4++++++++++++++++++++", 55L, 48L);
Zmfy8_9(Z493, (STRING)"++++++++++++++++/[4/4/2++/7++/8/0/ZS/1", 38L, 36L);
Z493 = Z485;
Z478 = Z288 + 1;
Z493 = Z486;
Z478 = (Z288 + 1) * 2;
Zmfy8_9(Z493, (STRING)"++,-++/XF++/XG/XH++++/XI/XJ++++<XD++++++++++++++++VIYHVI", 56L, 47L);
Zmfy8_9(Z493, (STRING)"V<V/Y:V/V;V/YGVIV=VLW.VOV@VOZ8VOZ6V1V>V1V3V0ZJVMW/V0V5/", 55L, 28L);
Zmfy8_9(Z493, (STRING)";<IV?VOV?V4VDVRVDY@V:VHV-V2HV+VGVT,./<V8VF4AV=VNGY<VNYI", 55L, 33L);
Zmfy8_9(Z493, (STRING)"V6VC:GV.V69F0=FY8V,V/./V<VLVBVQIV,W4YKVFYAW+YJVHW+VSYBW.", 56L, 33L);
Zmfy8_9(Z493, (STRING)"W4TY=VTYAVRYA2?1>5B6C7D8EVKW-VJW,3@++++++++++++++++++++", 55L, 45L);
Zmfy8_9(Z493, (STRING)"++++++++++++++++++++++++++++++", 30L, 30L);
Z493 = Z487;
Z478 = Z299;
Zmfy8_9(Z493, (STRING)"-/+-----,-.,////////1+.,,--.,,+-+-+-.-,,-.,/00,../0..//", 55L, 55L);
Zmfy8_9(Z493, (STRING)"+,+-+,.,-,---/1.,,,,,,,,,,,,,,,,,,,,-/+-/++++++++++++++", 55L, 55L);
Zmfy8_9(Z493, (STRING)"++", 2L, 2L);
Z493 = Z488;
Z478 = Z299;
Zmfy8_9(Z493, (STRING)"STV+V+V+V+V+V+V,V,V-V-V.V.V.V.V.V.V.V.V/V0V0V1V1V2V3V4V5", 56L, 29L);
Zmfy8_9(Z493, (STRING)"V5V6V6V7V7V8V8V8V8V9V:V:V:V;V<V=V=V>V>V?V?V?V@V@V@V@VAVA", 56L, 28L);
Zmfy8_9(Z493, (STRING)"VBVBVCVCVDVDVEVEVFVFVFVFVFVFVFVFVFVFVFVGVGVGVGVGVGVGVGVG", 56L, 28L);
Zmfy8_9(Z493, (STRING)"VGVGVGVGVGVGVHVHVIVIVIVJVKVLVMVNVOVPVQVRVSVTW+W,W-W.W/", 54L, 27L);
Z493 = Z489;
Z478 = 1;
Zmfy8_9(Z493, (STRING)"P+P6PEEEEEEEE,,Q6PEEEEEEEEPPE6,000000009,E+--+E-77,EF,?", 55L, 55L);
Zmfy8_9(Z493, (STRING)"E-N,8B-,-/-,LL,8-EE--87DFL,L8EE88-/008D/", 40L, 40L);
Z493 = Z490;
Z478 = Z300 + 1;
Zmfy8_9(Z493, (STRING)"", 1L, 0L);
Z493 = Z491;
Z478 = Z297;
Zmfy8_9(Z493, (STRING)"XMXNXOXPXQXRXSXTY+Y,Y-Y/Y0Y1Y5Y6Y>Y?YCYDYEYFYLYMYNYOYQZ+", 56L, 28L);
Zmfy8_9(Z493, (STRING)"Z0Z1Z2Z3Z4Z5Z7Z9Z:Z;Z<Z=Z>Z?Z@ZAZBZCZDZEZFZGZHZIZKZN", 52L, 26L);
}

void ZmfDOBA_52
 ARGS ((void))
{
Z265 = Zq0A4J_56();
Z252 = FALSE;
Zp1PEAFD_13((STRING)"NOT", 3L, &Z253);
Z263 = Zfb3DLQ_2(&Z253);
}

void ZmfDOBA_55
 ARGS ((void))
{
}

void BEGIN_Parser ARGS ((void))
{
  static BOOLEAN has_been_called = FALSE;
  if (has_been_called) return;
  has_been_called = TRUE;
BEGIN_Scanner ();
BEGIN_General ();
BEGIN_Pack ();
BEGIN_Strings ();
BEGIN_DynArray ();
BEGIN_Sets ();
BEGIN_Errors ();
BEGIN_Position ();
BEGIN_IO ();
BEGIN_IO ();
BEGIN_Errors ();
BEGIN_Tree0 ();
BEGIN_Scanner ();
BEGIN_Tree ();
BEGIN_Sets ();
BEGIN_Strings ();
BEGIN_Lists ();
BEGIN_StringM ();
BEGIN_Idents ();
BEGIN_DefTable ();
BEGIN_GenTabs ();
BEGIN_Dfa ();
BEGIN_ScanGen ();
BEGIN_UniCode ();
BEGIN_HugeSets ();

Z492();
ZmfDOBA_51 = FALSE;
Z337.A[1 - 1] = 292;
}
