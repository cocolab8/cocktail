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

#ifndef DEFINITION_Actions
#include "Actions.h"
#endif

#ifndef DEFINITION_Errors
#include "Errors.h"
#endif

#ifndef DEFINITION_Lists
#include "Lists.h"
#endif

#ifndef DEFINITION_Oper
#include "Oper.h"
#endif

#ifndef DEFINITION_Scanner
#include "Scanner.h"
#endif

#ifndef DEFINITION_Position
#include "Position.h"
#endif

#ifndef DEFINITION_Strings
#include "Strings.h"
#endif

#ifndef DEFINITION_StringM
#include "StringM.h"
#endif

#ifndef DEFINITION_Idents
#include "Idents.h"
#endif

#ifndef DEFINITION_Pointers
#include "Pointers.h"
#endif

#ifndef DEFINITION_TokenTab
#include "TokenTab.h"
#endif

#ifndef DEFINITION_Tokens
#include "Tokens.h"
#endif

#ifndef DEFINITION_Rules
#include "Rules.h"
#endif

#ifndef DEFINITION_WriteTok
#include "WriteTok.h"
#endif

#ifndef DEFINITION_Sets
#include "Sets.h"
#endif

#ifndef DEFINITION_Parser
#include "Parser.h"
#endif

ZpmCQ_4 ZmfDOBA_0;
BOOLEAN ZmfDOBA_37;

#define Z188	'\n'
#define Z189	9
typedef struct S_1 {
Zpky9FDA_1 Y0;
} Z190;
static Zp1PEAFD_2 Z192, Z193;
static ADDRESS Z194;
#define Z195	0
#define Z196	0
#define Z197	1
#define Z198	2
#define Z199	3
#define Z200	0
#define Z201	32
#define Z202	33
#define Z203	0
#define Z204	68
#define Z205	232
#define Z206	144
#define Z207	1
#define Z208	1
#define Z209	67
#define Z210	68
#define Z211	84
#define Z212	85
#define Z213	154
#define Z214	154
#define Z215	85
#define Z216	67
#define Z217	67
#define Z218	33
#define Z219	144
#define Z220	Z210
typedef SHORTCARD Z221;
typedef Z221 Z222;
typedef Z221 Z223;
typedef Z221 Z224;
typedef Z221 Z225;
typedef struct S_2 {
Z222 Y0, Y1;
} Z226;
typedef Z222 Z229;
typedef Z226 Z230;
typedef Z226 *Z231;
typedef Z229 *Z232;
typedef Z230 *Z233;
typedef struct S_23 {
Z222 A[1000000 + 1];
} *Z234;
typedef struct S_3 {
BITSET Y0;
BOOLEAN Y1, Y2;
} Z235;
static struct S_4 {
ADDRESS A[Z209 + 1];
} Z239;
static struct S_5 {
ADDRESS A[Z209 + 1];
} Z240;
static struct S_6 {
Z222 A[Z216 + 1];
} Z241;
static struct S_7 {
Z222 A[Z217 + 1];
} Z242;
static struct S_8 {
Z226 A[Z205 + 1];
} Z243;
static struct S_9 {
Z229 A[Z218 - (Z201 + 1) + 1];
} Z244;
static struct S_10 {
Z230 A[Z219 - (Z201 + 1) + 1];
} Z245;
static struct S_11 {
Z221 A[Z213 - Z212 + 1];
} Z246;
static struct S_12 {
Z225 A[Z213 - Z212 + 1];
} Z247;
static struct S_13 {
Z225 A[Z209 + 1];
} Z248;
static struct S_14 {
Z222 A[Z214 + 1 - (Z213 + 1) + 1];
} Z249;
static struct S_15 {
Z224 A[Z211 + 1 - Z210 + 1];
} Z250;
static struct S_16 {
SHORTCARD A[Z215 - Z211 - 1 + 1];
} Z251;
static Z235 Z252;
static void Z258 ARGS ((CHAR Z259[], LONGCARD O_3, CHAR Z260[], LONGCARD O_2));
static Z221 Z266;
static LONGINT Z267;
static LONGINT Z268;
static Z221 Z269;
static Z234 Z270;
static struct S_17 {
Z190 A[100000 + 1];
} *Z271;
struct S_1_yyParse;
static INTEGER Z277 ARGS ((Z222 Z273, Z225 Z279, CARDINAL Z280));
struct S_19 {
CHAR A[127 + 1];
};
static void Z293 ARGS ((struct S_1_yyParse *link));
static void Z294 ARGS ((void));
static void Z295 ARGS ((struct S_1_yyParse *link));
static void Z296 ARGS ((void));
struct S_1_yyParse {
Z222 *Z282;
Z225 *Z283;
BOOLEAN *Z291;
CARDINAL *Z274;
};
static Z225 Z298 ARGS ((Z225 Z164, LONGINT Z372, LONGINT Z373));
struct S_18 {
CHAR A[127 + 1];
};
static void Z387 ARGS ((LONGINT Z372, LONGINT Z373, ZpmCQ_4 *Z375));
static BOOLEAN Z399 ARGS ((Z225 Z164, LONGINT Z372, LONGINT Z373));
static void Z402 ARGS ((Z222 Z397, ZpmCQ_4 *Z375));
static void Z395 ARGS ((LONGINT Z372, LONGINT Z373, ZpmCQ_4 *Z377));
static Z222 Z228 ARGS ((Z222 Z397, Z225 Z342));
static CARDINAL Z407;
static void Z408 ARGS ((LONGCARD Z409));
static void Z410 ARGS ((LONGCARD Z409));
static void Z411 ARGS ((LONGCARD Z409));
static void Z412 ARGS ((LONGCARD Z409));
static void Z413 ARGS ((LONGCARD Z409));
static void Z414 ARGS ((LONGCARD Z409));
static void Z415 ARGS ((LONGCARD Z409));
static void Z416 ARGS ((LONGCARD Z409));
static void Z417 ARGS ((LONGCARD Z409));
static void Z418 ARGS ((LONGCARD Z409));
static void Z419 ARGS ((LONGCARD Z409));
static void Z420 ARGS ((LONGCARD Z409));
static void Z421 ARGS ((void));

static void Z258
# ifdef HAVE_ARGS
(CHAR Z259[], LONGCARD O_3, CHAR Z260[], LONGCARD O_2)
# else
(Z259, O_3, Z260, O_2)
CHAR Z259[];
LONGCARD O_3;
CHAR Z260[];
LONGCARD O_2;
# endif
{
CARDINAL Z261, Z262;
OPEN_ARRAY_LOCALS

ALLOC_OPEN_ARRAYS (O_3 * sizeof (CHAR), 1)
COPY_OPEN_ARRAY (Z259, O_3, CHAR)
if ((O_3 - 1) < (O_2 - 1)) {
Z262 = (O_3 - 1);
} else {
Z262 = (O_2 - 1);
}
{
LONGCARD B_1 = 0, B_2 = Z262;

if (B_1 <= B_2)
for (Z261 = B_1;; Z261 += 1) {
Z260[Z261] = Z259[Z261];
if (Z261 >= B_2) break;
}
}
if ((O_2 - 1) > Z262) {
Z260[Z262 + 1] = CHR(0);
}
FREE_OPEN_ARRAYS
}

void ZmfDOBA_42
# ifdef HAVE_ARGS
(CARDINAL Z254, CHAR Z255[], LONGCARD O_1)
# else
(Z254, Z255, O_1)
CARDINAL Z254;
CHAR Z255[];
LONGCARD O_1;
# endif
{
Zp1PEAFD_2 Z256, Z257;

switch (Z254) {
case 0:;
Z258((STRING)"_EOF_", 5L, Z255, O_1);
break;
case 1:;
Z258((STRING)"=", 1L, Z255, O_1);
break;
case 2:;
Z258((STRING)":", 1L, Z255, O_1);
break;
case 3:;
Z258((STRING)".", 1L, Z255, O_1);
break;
case 4:;
Z258((STRING)"|", 1L, Z255, O_1);
break;
case 5:;
Z258((STRING)"*", 1L, Z255, O_1);
break;
case 6:;
Z258((STRING)"+", 1L, Z255, O_1);
break;
case 7:;
Z258((STRING)"||", 2L, Z255, O_1);
break;
case 8:;
Z258((STRING)"(", 1L, Z255, O_1);
break;
case 9:;
Z258((STRING)")", 1L, Z255, O_1);
break;
case 10:;
Z258((STRING)"[", 1L, Z255, O_1);
break;
case 11:;
Z258((STRING)"]", 1L, Z255, O_1);
break;
case 12:;
Z258((STRING)"EXPORT", 6L, Z255, O_1);
break;
case 13:;
Z258((STRING)"GLOBAL", 6L, Z255, O_1);
break;
case 14:;
Z258((STRING)"LOCAL", 5L, Z255, O_1);
break;
case 15:;
Z258((STRING)"BEGIN", 5L, Z255, O_1);
break;
case 16:;
Z258((STRING)"CLOSE", 5L, Z255, O_1);
break;
case 17:;
Z258((STRING)"TOKEN", 5L, Z255, O_1);
break;
case 18:;
Z258((STRING)"OPER", 4L, Z255, O_1);
break;
case 19:;
Z258((STRING)"NONE", 4L, Z255, O_1);
break;
case 20:;
Z258((STRING)"LEFT", 4L, Z255, O_1);
break;
case 21:;
Z258((STRING)"RIGHT", 5L, Z255, O_1);
break;
case 22:;
Z258((STRING)"RULE", 4L, Z255, O_1);
break;
case 23:;
Z258((STRING)"PREC", 4L, Z255, O_1);
break;
case 24:;
Z258((STRING)"Comment", 7L, Z255, O_1);
break;
case 25:;
Z258((STRING)"Number", 6L, Z255, O_1);
break;
case 26:;
Z258((STRING)"Action", 6L, Z255, O_1);
break;
case 27:;
Z258((STRING)"Identifier", 10L, Z255, O_1);
break;
case 28:;
Z258((STRING)"String", 6L, Z255, O_1);
break;
case 29:;
Z258((STRING)"SCANNER", 7L, Z255, O_1);
break;
case 30:;
Z258((STRING)"PARSER", 6L, Z255, O_1);
break;
case 31:;
Z258((STRING)"START", 5L, Z255, O_1);
break;
case 32:;
Z258((STRING)",", 1L, Z255, O_1);
break;
default:
Zp1PEAFD_13((STRING)"unknown ", 8L, &Z256);
Zp1PEAFD_18((LONGINT)Z254, &Z257);
Zp1PEAFD_5(&Z256, &Z257);
Zp1PEAFD_14(&Z256, Z255, O_1);
break;
}
}

CARDINAL ZmfDOBA_39
 ARGS ((void))
{
return ZmfDOBA_40(Z207);
}

CARDINAL ZmfDOBA_40
# ifdef HAVE_ARGS
(SHORTCARD Z273)
# else
(Z273)
SHORTCARD Z273;
# endif
{
CARDINAL Z274;

ZmfDOBA_38();
Z267 = 100;
Z268 = 100;
ZarQdhNDD_0((ADDRESS *)&Z270, &Z267, (LONGINT)sizeof (Z222));
ZarQdhNDD_0((ADDRESS *)&Z271, &Z268, (LONGINT)sizeof (Z190));
Z269 = Z267 - 1;
Z266 = 0;
Z252.Y0 = SET_ELEM (Z196);
Z252.Y1 = TRUE;
Z252.Y2 = TRUE;
Z274 = Z277(Z273, (Z225)Zpky9FDA_10(), (LONGCARD)Z251.A[Z273 - 1]);
ZarQdhNDD_3((ADDRESS *)&Z270, &Z267, (LONGINT)sizeof (Z221));
ZarQdhNDD_3((ADDRESS *)&Z271, &Z268, (LONGINT)sizeof (Z190));
return Z274;
}

static void Z293
# ifdef HAVE_ARGS
(struct S_1_yyParse *link)
# else
(link)
struct S_1_yyParse *link;
# endif
{
*link->Z282 = Z249.A[(Z221)(*link->Z282) - 155];
INC(Z266);
Z271->A[Z266].Y0 = Zpky9FDA_6;
*link->Z283 = Zpky9FDA_10();
*link->Z291 = FALSE;
}

static void Z294
 ARGS ((void))
{
}

static void Z295
# ifdef HAVE_ARGS
(struct S_1_yyParse *link)
# else
(link)
struct S_1_yyParse *link;
# endif
{
INC(*link->Z274);
}

static void Z296
 ARGS ((void))
{
ZarQdhNDD_2((ADDRESS *)&Z270, &Z267, (LONGINT)sizeof (Z222));
ZarQdhNDD_2((ADDRESS *)&Z271, &Z268, (LONGINT)sizeof (Z190));
Z269 = Z267 - 1;
}

static INTEGER Z277
# ifdef HAVE_ARGS
(Z222 Z273, Z225 Z279, CARDINAL Z280)
# else
(Z273, Z279, Z280)
Z222 Z273;
Z225 Z279;
CARDINAL Z280;
# endif
{
ZeYAGBGK_0 Z281;
Z222 Z282;
Z225 Z283;
Z225 Z284;
Z190 Z285;
Zpky9FDA_1 Z286;
Z225 Z287;
Z222 Z288;
Z231 Z289;
Z233 Z290;
BOOLEAN Z291;
CARDINAL Z274;
struct S_19 Z292;
struct S_1_yyParse frame;

frame.Z282 = &Z282;
frame.Z283 = &Z283;
frame.Z291 = &Z291;
frame.Z274 = &Z274;
Z282 = Z273;
Z283 = Z279;
Z274 = 0;
Z291 = FALSE;
for (;;) {
for (;;) {
if (Z266 >= Z269) {
Z296();
}
Z270->A[Z266] = Z282;
for (;;) {
Z289 = (Z231)(Z239.A[Z282] + Z283 * sizeof (Z226));
if (Z289->Y0 == Z282) {
Z282 = Z289->Y1;
goto EXIT_3;
}
Z282 = Z241.A[Z282];
if (Z282 == Z195) {
goto EXIT_3;
}
} EXIT_3:;
if (Z282 == Z195 || Z291 && Z282 >= Z212) {
if (Z282 == Z195 && !Z291) {
INC(Z274);
Z283 = Z298(Z283, Z267, (LONGINT)Z266);
Z291 = TRUE;
Z282 = Z270->A[Z266];
goto EXIT_2;
}
Z282 = Z270->A[Z266];
Z287 = Z248.A[Z282];
Z282 = Z228(Z282, Z287);
if (Z282 > Z213) {
Z282 = Z249.A[(Z221)Z282 - 155];
}
if (Z282 <= Z211) {
Zpky9FDA_2((LONGINT)Z287, &Z286);
if (Z252.Y2) {
ZmfDOBA_42((LONGCARD)Z287, Z292.A, 128L);
ZblNKKO_53((LONGCARD)ZblNKKO_4, (LONGCARD)ZblNKKO_15, Zpky9FDA_6.Y0, (LONGCARD)ZblNKKO_26, ADR (Z292));
}
if (Z266 >= Z269) {
Z296();
}
INC(Z266);
Z271->A[Z266].Y0 = Z286;
if (Z282 >= Z220) {
Z270->A[Z266] = Z270->A[Z266 - 1];
Z282 = Z250.A[Z282 - 68];
} else {
Z270->A[Z266] = Z282;
}
}
if (Z282 <= Z209) {
goto EXIT_2;
}
}
if (Z282 >= Z220) {
if (Z282 <= Z211) {
INC(Z266);
Z271->A[Z266].Y0 = Zpky9FDA_6;
Z283 = Zpky9FDA_10();
Z291 = FALSE;
}
for (;;) {
switch (Z282) {
case 85:;
Z294();
return Z274;
break;
case 86:;
DEC1(Z266, 9);
Z284 = ZmfDOBA_2;
ZqxDADK_0(Z271->A[Z266 + 1].Y0.U_1.V_1.Y2, Z271->A[Z266 + 1].Y0.Y0);
break;
case 87:;
Z284 = ZmfDOBA_3;
ZeYAGBGK_10();
break;
case 88:;
Z284 = ZmfDOBA_4;
ZeYAGBGK_1 = Zfb3DLQ_1;
break;
case 89:;
DEC1(Z266, 1);
Z284 = ZmfDOBA_4;
if (Zt3EGCnxD_1 == Zt3EGCnxD_6) {
Zp1PEAFD_13((STRING)"scanner", 7L, &Z192);
} else {
Zp1PEAFD_13((STRING)"Scanner", 7L, &Z192);
}
ZeYAGBGK_1 = Zfb3DLQ_2(&Z192);
break;
case 90:;
case 68:;
DEC1(Z266, 2);
Z284 = ZmfDOBA_4;
ZeYAGBGK_1 = Z271->A[Z266 + 2].Y0.U_1.V_4.Y5;
break;
case 91:;
Z284 = ZmfDOBA_5;
ZeYAGBGK_2 = Zfb3DLQ_1;
break;
case 92:;
DEC1(Z266, 1);
Z284 = ZmfDOBA_5;
if (Zt3EGCnxD_1 == Zt3EGCnxD_6) {
Zp1PEAFD_13((STRING)"parser", 6L, &Z192);
} else {
Zp1PEAFD_13((STRING)"Parser", 6L, &Z192);
}
ZeYAGBGK_2 = Zfb3DLQ_2(&Z192);
break;
case 93:;
case 69:;
DEC1(Z266, 2);
Z284 = ZmfDOBA_5;
ZeYAGBGK_2 = Z271->A[Z266 + 2].Y0.U_1.V_4.Y5;
break;
case 94:;
DEC1(Z266, 5);
Z284 = ZmfDOBA_6;
ZeYAGBGK_3(ZeYAGBGK_11, Z271->A[Z266 + 2].Y0.Y0, Z271->A[Z266 + 4].Y0.U_1.V_1.Y2, Z271->A[Z266 + 4].Y0.Y0);
break;
case 95:;
DEC1(Z266, 5);
Z284 = ZmfDOBA_6;
ZeYAGBGK_3(ZeYAGBGK_12, Z271->A[Z266 + 2].Y0.Y0, Z271->A[Z266 + 4].Y0.U_1.V_1.Y2, Z271->A[Z266 + 4].Y0.Y0);
break;
case 96:;
DEC1(Z266, 5);
Z284 = ZmfDOBA_6;
ZeYAGBGK_3(ZeYAGBGK_13, Z271->A[Z266 + 2].Y0.Y0, Z271->A[Z266 + 4].Y0.U_1.V_1.Y2, Z271->A[Z266 + 4].Y0.Y0);
break;
case 97:;
DEC1(Z266, 5);
Z284 = ZmfDOBA_6;
ZeYAGBGK_3(ZeYAGBGK_14, Z271->A[Z266 + 2].Y0.Y0, Z271->A[Z266 + 4].Y0.U_1.V_1.Y2, Z271->A[Z266 + 4].Y0.Y0);
break;
case 98:;
DEC1(Z266, 5);
Z284 = ZmfDOBA_6;
ZeYAGBGK_3(ZeYAGBGK_15, Z271->A[Z266 + 2].Y0.Y0, Z271->A[Z266 + 4].Y0.U_1.V_1.Y2, Z271->A[Z266 + 4].Y0.Y0);
break;
case 99:;
Z284 = ZmfDOBA_6;
break;
case 100:;
Z284 = ZmfDOBA_7;
Z281 = ZeYAGBGK_15;
break;
case 101:;
Z284 = ZmfDOBA_8;
Z281 = ZeYAGBGK_14;
break;
case 102:;
Z284 = ZmfDOBA_9;
Z281 = ZeYAGBGK_13;
break;
case 103:;
Z284 = ZmfDOBA_10;
Z281 = ZeYAGBGK_12;
break;
case 104:;
Z284 = ZmfDOBA_11;
Z281 = ZeYAGBGK_11;
break;
case 105:;
DEC1(Z266, 2);
Z284 = ZmfDOBA_12;
ZeYAGBGK_5(Z281, Z271->A[Z266 + 1].Y0.U_1.V_3.Y4, Z271->A[Z266 + 1].Y0.Y0, Z271->A[Z266 + 2].Y0.U_1.V_1.Y2, Z271->A[Z266 + 2].Y0.Y0);
break;
case 106:;
Z284 = ZmfDOBA_12;
break;
case 107:;
DEC1(Z266, 3);
Z284 = ZmfDOBA_13;
ZqxDADK_3();
ZqxDADK_1(Z271->A[Z266 + 1].Y0.Y0, Z271->A[Z266 + 2].Y0.U_1.V_1.Y2, Z271->A[Z266 + 2].Y0.Y0);
break;
case 108:;
DEC1(Z266, 2);
Z284 = ZmfDOBA_14;
break;
case 109:;
DEC1(Z266, 1);
Z284 = ZmfDOBA_14;
break;
case 110:;
DEC1(Z266, 3);
Z284 = ZmfDOBA_15;
ZqxDADK_2(Z271->A[Z266 + 1].Y0.U_1.V_4.Y5, Z271->A[Z266 + 1].Y0.Y0, Z271->A[Z266 + 2].Y0.U_1.V_5.Y6, Z271->A[Z266 + 2].Y0.Y0, (ZqxDADwjx_11)Z271->A[Z266 + 2].Y0.U_1.V_5.Y8, Z271->A[Z266 + 2].Y0.U_1.V_5.Y7, Z271->A[Z266 + 3].Y0.U_1.V_1.Y2, Z271->A[Z266 + 3].Y0.Y0);
break;
case 111:;
case 70:;
DEC1(Z266, 2);
Z284 = ZmfDOBA_16;
Z285.Y0.Y1 = Zpky9FDA_21;
if (Z271->A[Z266 + 2].Y0.U_1.V_2.Y3 > 1000) {
ZblNKKO_53((LONGCARD)Z189, (LONGCARD)ZblNKKO_42, Z271->A[Z266 + 2].Y0.Y0, (LONGCARD)ZblNKKO_29, ADR (Z271->A[Z266 + 2].Y0.U_1.V_2.Y3));
Z285.Y0.U_1.V_5.Y6 = FALSE;
Z285.Y0.U_1.V_5.Y8 = 0;
Z285.Y0.U_1.V_5.Y7 = ZmtLFGGBG_1;
} else {
Z285.Y0.U_1.V_5.Y6 = TRUE;
Z285.Y0.U_1.V_5.Y8 = Z271->A[Z266 + 2].Y0.U_1.V_2.Y3;
Z285.Y0.U_1.V_5.Y7 = Z271->A[Z266 + 2].Y0.Y0;
}
break;
case 112:;
Z284 = ZmfDOBA_16;
Z285.Y0.Y1 = Zpky9FDA_21;
Z285.Y0.U_1.V_5.Y6 = FALSE;
Z285.Y0.U_1.V_5.Y8 = 0;
Z285.Y0.U_1.V_5.Y7 = ZmtLFGGBG_1;
break;
case 113:;
DEC1(Z266, 3);
Z284 = ZmfDOBA_17;
ZltFA_4(Z271->A[Z266 + 1].Y0.Y0, Z271->A[Z266 + 2].Y0.U_1.V_1.Y2, Z271->A[Z266 + 2].Y0.Y0);
break;
case 114:;
Z284 = ZmfDOBA_17;
break;
case 115:;
DEC1(Z266, 2);
Z284 = ZmfDOBA_18;
break;
case 116:;
Z284 = ZmfDOBA_18;
break;
case 117:;
DEC1(Z266, 3);
Z284 = ZmfDOBA_19;
ZltFA_2(Z271->A[Z266 + 3].Y0.U_1.V_1.Y2, Z271->A[Z266 + 3].Y0.Y0);
break;
case 118:;
case 71:;
DEC1(Z266, 1);
Z284 = ZmfDOBA_20;
ZltFA_1(ZltFA_9, Z271->A[Z266 + 1].Y0.Y0);
break;
case 119:;
case 72:;
DEC1(Z266, 1);
Z284 = ZmfDOBA_20;
ZltFA_1(ZltFA_10, Z271->A[Z266 + 1].Y0.Y0);
break;
case 120:;
case 73:;
DEC1(Z266, 1);
Z284 = ZmfDOBA_20;
ZltFA_1(ZltFA_11, Z271->A[Z266 + 1].Y0.Y0);
break;
case 121:;
DEC1(Z266, 2);
Z284 = ZmfDOBA_21;
break;
case 122:;
DEC1(Z266, 1);
Z284 = ZmfDOBA_21;
break;
case 123:;
DEC1(Z266, 1);
Z284 = ZmfDOBA_22;
ZltFA_3(Z271->A[Z266 + 1].Y0.U_1.V_4.Y5, Z271->A[Z266 + 1].Y0.Y0);
break;
case 124:;
case 74:;
DEC1(Z266, 1);
Z284 = ZmfDOBA_23;
Z285.Y0.Y1 = Zpky9FDA_20;
Z285.Y0.U_1.V_4.Y5 = Z271->A[Z266 + 1].Y0.U_1.V_4.Y5;
Z285.Y0.Y0 = Z271->A[Z266 + 1].Y0.Y0;
break;
case 125:;
case 75:;
DEC1(Z266, 1);
Z284 = ZmfDOBA_23;
Z285.Y0.Y1 = Zpky9FDA_20;
Z285.Y0.U_1.V_4.Y5 = Z271->A[Z266 + 1].Y0.U_1.V_4.Y5;
Z285.Y0.Y0 = Z271->A[Z266 + 1].Y0.Y0;
break;
case 126:;
Z284 = ZmfDOBA_24;
break;
case 127:;
DEC1(Z266, 2);
Z284 = ZmfDOBA_24;
break;
case 128:;
Z284 = ZmfDOBA_25;
break;
case 129:;
DEC1(Z266, 3);
Z284 = ZmfDOBA_25;
while (ZpmCQ_16(&ZmfDOBA_0) < Z271->A[Z266 + 2].Y0.U_1.V_4.Y5) {
ZpmCQ_6(&ZmfDOBA_0, 2 * ZpmCQ_16(&ZmfDOBA_0));
}
ZpmCQ_13(&ZmfDOBA_0, (LONGCARD)Z271->A[Z266 + 2].Y0.U_1.V_4.Y5);
break;
case 130:;
Z284 = ZmfDOBA_26;
break;
case 131:;
case 76:;
DEC1(Z266, 1);
Z284 = ZmfDOBA_26;
break;
case 132:;
DEC1(Z266, 3);
Z284 = ZmfDOBA_27;
Zo1KBB_18(Z271->A[Z266 + 1].Y0.Y0, Z271->A[Z266 + 2].Y0.U_1.V_1.Y2, Z271->A[Z266 + 2].Y0.Y0);
break;
case 133:;
Z284 = ZmfDOBA_28;
break;
case 134:;
DEC1(Z266, 2);
Z284 = ZmfDOBA_28;
break;
case 135:;
DEC1(Z266, 5);
Z284 = ZmfDOBA_29;
Zo1KBB_17(Z271->A[Z266 + 1].Y0.U_1.V_4.Y5, Z271->A[Z266 + 1].Y0.Y0, Z271->A[Z266 + 2].Y0.Y0, Z271->A[Z266 + 3].Y0.U_1.V_6.Y9, Z271->A[Z266 + 5].Y0.U_1.V_1.Y2, Z271->A[Z266 + 5].Y0.Y0, Z271->A[Z266 + 4].Y0.Y0, Z271->A[Z266 + 3].Y0.U_1.V_6.Y10, Z271->A[Z266 + 3].Y0.Y0, Z271->A[Z266 + 3].Y0.U_1.V_6.U_1.V_1.Y11, Z271->A[Z266 + 3].Y0.U_1.V_6.U_1.V_1.Y12);
break;
case 136:;
DEC1(Z266, 2);
Z284 = ZmfDOBA_30;
Z285.Y0.Y1 = Zpky9FDA_22;
Z285.Y0.U_1.V_6.Y10 = TRUE;
Z285.Y0.Y0 = Z271->A[Z266 + 1].Y0.Y0;
Z285.Y0.U_1.V_6.U_1.V_1.Y11 = Z271->A[Z266 + 2].Y0.U_1.V_4.Y5;
Z285.Y0.U_1.V_6.U_1.V_1.Y12 = Z271->A[Z266 + 2].Y0.Y0;
break;
case 137:;
Z284 = ZmfDOBA_30;
Z285.Y0.Y1 = Zpky9FDA_22;
Z285.Y0.U_1.V_6.Y10 = FALSE;
Z285.Y0.U_1.V_6.U_1.V_1.Y12 = ZmtLFGGBG_1;
Z285.Y0.U_1.V_6.U_1.V_1.Y11 = 0;
break;
case 138:;
DEC1(Z266, 4);
Z284 = ZmfDOBA_31;
Z285.Y0 = Z271->A[Z266 + 4].Y0;
Z285.Y0.Y1 = Zpky9FDA_23;
Z285.Y0.U_1.V_6.Y9 = Zo1KBB_14(Z271->A[Z266 + 3].Y0.Y0, Z271->A[Z266 + 1].Y0.U_1.V_6.Y9, Z271->A[Z266 + 4].Y0.U_1.V_6.Y9, Z271->A[Z266 + 2].Y0.U_1.V_6.Y10, Z271->A[Z266 + 2].Y0.Y0, Z271->A[Z266 + 2].Y0.U_1.V_6.U_1.V_1.Y11, Z271->A[Z266 + 2].Y0.U_1.V_6.U_1.V_1.Y12);
break;
case 139:;
DEC1(Z266, 2);
Z284 = ZmfDOBA_31;
Z285.Y0 = Z271->A[Z266 + 2].Y0;
Z285.Y0.Y1 = Zpky9FDA_23;
if (Z271->A[Z266 + 1].Y0.Y1 == Zpky9FDA_24) {
Z285.Y0.U_1.V_6.Y9 = Zo1KBB_8;
} else {
Z285.Y0.U_1.V_6.Y9 = Z271->A[Z266 + 1].Y0.U_1.V_6.Y9;
}
break;
case 140:;
DEC1(Z266, 2);
Z284 = ZmfDOBA_32;
if (Z271->A[Z266 + 2].Y0.Y1 != Zpky9FDA_24) {
Z285.Y0.Y1 = Zpky9FDA_23;
Z285.Y0.U_1.V_6.Y9 = Zo1KBB_13(Zo1KBB_36, ZmtLFGGBG_1, Z271->A[Z266 + 1].Y0.U_1.V_6.Y9, Z271->A[Z266 + 2].Y0.U_1.V_6.Y9);
} else {
Z285.Y0 = Z271->A[Z266 + 1].Y0;
}
break;
case 141:;
Z284 = ZmfDOBA_32;
Z285.Y0.Y1 = Zpky9FDA_24;
Z285.Y0.U_1.V_6.Y9 = Zo1KBB_8;
break;
case 142:;
DEC1(Z266, 1);
Z284 = ZmfDOBA_33;
Z285.Y0.Y1 = Zpky9FDA_23;
Z285.Y0.U_1.V_6.Y9 = Z271->A[Z266 + 1].Y0.U_1.V_6.Y9;
break;
case 143:;
case 77:;
DEC1(Z266, 2);
Z284 = ZmfDOBA_33;
Z285.Y0.Y1 = Zpky9FDA_23;
Z285.Y0.U_1.V_6.Y9 = Zo1KBB_11(Zo1KBB_33, Z271->A[Z266 + 2].Y0.Y0, Z271->A[Z266 + 1].Y0.U_1.V_6.Y9);
break;
case 144:;
case 78:;
DEC1(Z266, 2);
Z284 = ZmfDOBA_33;
Z285.Y0.Y1 = Zpky9FDA_23;
Z285.Y0.U_1.V_6.Y9 = Zo1KBB_11(Zo1KBB_32, Z271->A[Z266 + 2].Y0.Y0, Z271->A[Z266 + 1].Y0.U_1.V_6.Y9);
break;
case 145:;
DEC1(Z266, 3);
Z284 = ZmfDOBA_33;
Z285.Y0.Y1 = Zpky9FDA_23;
Z285.Y0.U_1.V_6.Y9 = Zo1KBB_13(Zo1KBB_37, Z271->A[Z266 + 2].Y0.Y0, Z271->A[Z266 + 1].Y0.U_1.V_6.Y9, Z271->A[Z266 + 3].Y0.U_1.V_6.Y9);
break;
case 146:;
case 79:;
DEC1(Z266, 3);
Z284 = ZmfDOBA_34;
Z285.Y0.Y1 = Zpky9FDA_23;
Z285.Y0.U_1.V_6.Y9 = Zo1KBB_12(Zo1KBB_34, Z271->A[Z266 + 1].Y0.Y0, Z271->A[Z266 + 3].Y0.Y0, Z271->A[Z266 + 2].Y0.U_1.V_6.Y9);
break;
case 147:;
case 80:;
DEC1(Z266, 3);
Z284 = ZmfDOBA_34;
Z285.Y0.Y1 = Zpky9FDA_23;
Z285.Y0.U_1.V_6.Y9 = Zo1KBB_12(Zo1KBB_35, Z271->A[Z266 + 1].Y0.Y0, Z271->A[Z266 + 3].Y0.Y0, Z271->A[Z266 + 2].Y0.U_1.V_6.Y9);
break;
case 148:;
case 81:;
DEC1(Z266, 1);
Z284 = ZmfDOBA_34;
Z285.Y0.Y1 = Zpky9FDA_23;
Z285.Y0.U_1.V_6.Y9 = Zo1KBB_9(Z271->A[Z266 + 1].Y0.U_1.V_4.Y5, Z271->A[Z266 + 1].Y0.Y0);
break;
case 149:;
case 82:;
DEC1(Z266, 1);
Z284 = ZmfDOBA_34;
Z285.Y0.Y1 = Zpky9FDA_23;
Z285.Y0.U_1.V_6.Y9 = Zo1KBB_9(Z271->A[Z266 + 1].Y0.U_1.V_4.Y5, Z271->A[Z266 + 1].Y0.Y0);
break;
case 150:;
case 83:;
DEC1(Z266, 1);
Z284 = ZmfDOBA_34;
Z285.Y0.Y1 = Zpky9FDA_23;
Z285.Y0.U_1.V_6.Y9 = Zo1KBB_10(Z271->A[Z266 + 1].Y0.U_1.V_3.Y4, Z271->A[Z266 + 1].Y0.Y0);
break;
case 151:;
DEC1(Z266, 3);
Z284 = ZmfDOBA_35;
Z285.Y0.Y1 = Zpky9FDA_23;
Z285.Y0.U_1.V_6.Y9 = Zo1KBB_13(Zo1KBB_38, Z271->A[Z266 + 2].Y0.Y0, Z271->A[Z266 + 1].Y0.U_1.V_6.Y9, Z271->A[Z266 + 3].Y0.U_1.V_6.Y9);
break;
case 152:;
DEC1(Z266, 1);
Z284 = ZmfDOBA_35;
Z285.Y0.Y1 = Zpky9FDA_23;
if (Z271->A[Z266 + 1].Y0.Y1 == Zpky9FDA_24) {
Z285.Y0.U_1.V_6.Y9 = Zo1KBB_8;
} else {
Z285.Y0.U_1.V_6.Y9 = Z271->A[Z266 + 1].Y0.U_1.V_6.Y9;
}
break;
case 153:;
case 84:;
DEC1(Z266, 2);
Z284 = ZmfDOBA_36;
Z285.Y0.Y1 = Zpky9FDA_17;
if (ZijFQQ_12(Z271->A[Z266 + 1].Y0.U_1.V_1.Y2)) {
Z285.Y0.Y0 = Z271->A[Z266 + 2].Y0.Y0;
Z285.Y0.U_1.V_1.Y2 = Z271->A[Z266 + 2].Y0.U_1.V_1.Y2;
} else {
ZijFQQ_7(&Z271->A[Z266 + 1].Y0.U_1.V_1.Y2, Z194);
while (!ZijFQQ_12(Z271->A[Z266 + 2].Y0.U_1.V_1.Y2)) {
ZijFQQ_7(&Z271->A[Z266 + 1].Y0.U_1.V_1.Y2, ZijFQQ_8(Z271->A[Z266 + 2].Y0.U_1.V_1.Y2));
ZijFQQ_9(&Z271->A[Z266 + 2].Y0.U_1.V_1.Y2);
}
Z285.Y0.Y0 = Z271->A[Z266 + 1].Y0.Y0;
Z285.Y0.U_1.V_1.Y2 = Z271->A[Z266 + 1].Y0.U_1.V_1.Y2;
}
break;
case 154:;
Z284 = ZmfDOBA_36;
Z285.Y0.Y1 = Zpky9FDA_17;
Z285.Y0.Y0 = ZmtLFGGBG_1;
ZijFQQ_5(&Z285.Y0.U_1.V_1.Y2);
break;
}
Z282 = Z270->A[Z266];
for (;;) {
Z290 = (Z233)(Z240.A[Z282] + Z284 * sizeof (Z230));
if (Z290->Y0 == Z282) {
Z282 = Z290->Y1;
goto EXIT_5;
}
Z282 = Z242.A[Z282];
} EXIT_5:;
INC(Z266);
Z271->A[Z266] = Z285;
if (Z282 < Z220) {
goto EXIT_4;
}
} EXIT_4:;
} else {
INC(Z266);
Z271->A[Z266].Y0 = Zpky9FDA_6;
Z283 = Zpky9FDA_10();
Z291 = FALSE;
}
} EXIT_2:;
} EXIT_1:;
}

static Z225 Z298
# ifdef HAVE_ARGS
(Z225 Z164, LONGINT Z372, LONGINT Z373)
# else
(Z164, Z372, Z373)
Z225 Z164;
LONGINT Z372;
LONGINT Z373;
# endif
{
BOOLEAN Z374;
ZpmCQ_4 Z375;
ZpmCQ_4 Z377;
Z225 Z254;
struct S_18 Z378;
Zp1PEAFD_2 Z379;
Zp1PEAFD_2 Z380;
INTEGER Z381;

if (Z252.Y2) {
ZblNKKO_52((LONGCARD)ZblNKKO_1, (LONGCARD)ZblNKKO_13, Zpky9FDA_6.Y0);
ZmfDOBA_42((LONGCARD)Z164, Z378.A, 128L);
Zp1PEAFD_13(Z378.A, 128L, &Z379);
ZblNKKO_53((LONGCARD)ZblNKKO_9, (LONGCARD)ZblNKKO_17, Zpky9FDA_6.Y0, (LONGCARD)ZblNKKO_25, ADR (Z379));
ZpmCQ_5(&Z375, (LONGCARD)Z201);
Z387(Z372, Z373, &Z375);
Zp1PEAFD_4(&Z380);
{
Z225 B_3 = ZpmCQ_17(&Z375), B_4 = ZpmCQ_18(&Z375);

if (B_3 <= B_4)
for (Z254 = B_3;; Z254 += 1) {
if (ZpmCQ_25((LONGCARD)Z254, &Z375)) {
ZmfDOBA_42((LONGCARD)Z254, Z378.A, 128L);
Zp1PEAFD_13(Z378.A, 128L, &Z379);
if (Zp1PEAFD_7(&Z380) + Zp1PEAFD_7(&Z379) + 1 <= Zp1PEAFD_0) {
Zp1PEAFD_5(&Z380, &Z379);
Zp1PEAFD_6(&Z380, ' ');
}
}
if (Z254 >= B_4) break;
}
}
ZblNKKO_53((LONGCARD)ZblNKKO_2, (LONGCARD)ZblNKKO_17, Zpky9FDA_6.Y0, (LONGCARD)ZblNKKO_25, ADR (Z380));
ZpmCQ_7(&Z375);
}
ZpmCQ_5(&Z377, (LONGCARD)Z201);
Z395(Z372, Z373, &Z377);
Z374 = FALSE;
while (!ZpmCQ_25((LONGCARD)Z164, &Z377)) {
Z164 = Zpky9FDA_10();
Z374 = TRUE;
}
ZpmCQ_7(&Z377);
if (Z374 && Z252.Y2) {
ZblNKKO_52((LONGCARD)ZblNKKO_3, (LONGCARD)ZblNKKO_17, Zpky9FDA_6.Y0);
}
return Z164;
}

static void Z387
# ifdef HAVE_ARGS
(LONGINT Z372, LONGINT Z373, ZpmCQ_4 *Z375)
# else
(Z372, Z373, Z375)
LONGINT Z372;
LONGINT Z373;
ZpmCQ_4 *Z375;
# endif
{
Z225 Z164;
Z222 Z397;
Z222 Z398;

Z397 = Z270->A[Z373];
ZpmCQ_32(Z375);
for (Z164 = Z200; Z164 <= Z201; Z164 += 1) {
Z398 = Z228(Z397, Z164);
if (Z398 != Z195 && (Z398 <= Z215 || Z399(Z164, Z372, Z373))) {
ZpmCQ_13(Z375, (LONGCARD)Z164);
}
}
}

static BOOLEAN Z399
# ifdef HAVE_ARGS
(Z225 Z164, LONGINT Z372, LONGINT Z373)
# else
(Z164, Z372, Z373)
Z225 Z164;
LONGINT Z372;
LONGINT Z373;
# endif
{
LONGINT Z397;
Z225 Z400;
Z234 Z401;

ZarQdhNDD_0((ADDRESS *)&Z401, &Z372, (LONGINT)sizeof (Z222));
{
LONGINT B_5 = 0, B_6 = Z373;

if (B_5 <= B_6)
for (Z397 = B_5;; Z397 += 1) {
Z401->A[Z397] = Z270->A[Z397];
if (Z397 >= B_6) break;
}
}
Z397 = Z401->A[Z373];
for (;;) {
Z401->A[Z373] = Z397;
Z397 = Z228((Z222)Z397, Z164);
if (Z397 == Z195) {
ZarQdhNDD_3((ADDRESS *)&Z401, &Z372, (LONGINT)sizeof (Z222));
return FALSE;
}
do {
if (Z397 > Z213) {
Z397 = Z249.A[Z397 - 155];
}
if (Z397 <= Z215) {
ZarQdhNDD_3((ADDRESS *)&Z401, &Z372, (LONGINT)sizeof (Z222));
return TRUE;
} else {
DEC1(Z373, Z246.A[Z397 - 85]);
Z400 = Z247.A[Z397 - 85];
}
Z397 = Z228(Z401->A[Z373], Z400);
INC(Z373);
if (Z373 >= Z372) {
ZarQdhNDD_2((ADDRESS *)&Z401, &Z372, (LONGINT)sizeof (Z222));
}
} while (!(Z397 < Z220));
} EXIT_6:;
}

static void Z402
# ifdef HAVE_ARGS
(Z222 Z397, ZpmCQ_4 *Z375)
# else
(Z397, Z375)
Z222 Z397;
ZpmCQ_4 *Z375;
# endif
{
Z225 Z164;
Z222 Z398;

ZpmCQ_32(Z375);
for (Z164 = Z200; Z164 <= Z201; Z164 += 1) {
Z398 = Z228(Z397, Z164);
if (Z398 != Z195 && Z398 <= Z215) {
ZpmCQ_13(Z375, (LONGCARD)Z164);
}
}
}

static void Z395
# ifdef HAVE_ARGS
(LONGINT Z372, LONGINT Z373, ZpmCQ_4 *Z377)
# else
(Z372, Z373, Z377)
LONGINT Z372;
LONGINT Z373;
ZpmCQ_4 *Z377;
# endif
{
Z234 Z401;
LONGINT Z397;
Z225 Z400;
ZpmCQ_4 Z375;

ZarQdhNDD_0((ADDRESS *)&Z401, &Z372, (LONGINT)sizeof (Z222));
{
LONGINT B_7 = 0, B_8 = Z373;

if (B_7 <= B_8)
for (Z397 = B_7;; Z397 += 1) {
Z401->A[Z397] = Z270->A[Z397];
if (Z397 >= B_8) break;
}
}
ZpmCQ_5(&Z375, (LONGCARD)Z201);
ZpmCQ_32(Z377);
Z397 = Z401->A[Z373];
for (;;) {
if (Z373 >= Z372) {
ZarQdhNDD_2((ADDRESS *)&Z401, &Z372, (LONGINT)sizeof (Z222));
}
Z401->A[Z373] = Z397;
Z402((Z222)Z397, &Z375);
ZpmCQ_8(Z377, Z375);
Z397 = Z228((Z222)Z397, Z248.A[Z397]);
if (Z397 >= Z220) {
if (Z397 <= Z211) {
INC(Z373);
Z397 = Z250.A[Z397 - 68];
}
for (;;) {
if (Z397 > Z213) {
Z397 = Z249.A[Z397 - 155];
}
if (Z212 <= Z397 && Z397 <= Z215) {
ZarQdhNDD_3((ADDRESS *)&Z401, &Z372, (LONGINT)sizeof (Z222));
ZpmCQ_7(&Z375);
return;
} else if (Z397 < Z220) {
INC(Z373);
goto EXIT_8;
} else {
DEC1(Z373, Z246.A[Z397 - 85]);
Z400 = Z247.A[Z397 - 85];
}
Z397 = Z228(Z401->A[Z373], Z400);
INC(Z373);
if (Z397 < Z220) {
goto EXIT_8;
}
} EXIT_8:;
} else {
INC(Z373);
}
} EXIT_7:;
}

static Z222 Z228
# ifdef HAVE_ARGS
(Z222 Z397, Z225 Z342)
# else
(Z397, Z342)
Z222 Z397;
Z225 Z342;
# endif
{
Z231 Z404;
Z232 Z405;
Z233 Z406;

if (Z342 <= Z201) {
for (;;) {
Z404 = (Z231)(Z239.A[Z397] + Z342 * sizeof (Z226));
if (Z404->Y0 == Z397) {
return Z404->Y1;
}
Z397 = Z241.A[Z397];
if (Z397 == Z195) {
return Z195;
}
} EXIT_9:;
} else {
for (;;) {
Z406 = (Z233)(Z240.A[Z397] + Z342 * sizeof (Z230));
if (Z406->Y0 == Z397) {
return Z406->Y1;
}
Z397 = Z242.A[Z397];
} EXIT_10:;
}
}

static void Z408
# ifdef HAVE_ARGS
(LONGCARD Z409)
# else
(Z409)
LONGCARD Z409;
# endif
{
Z239.A[Z407] = ADR (Z243.A[Z409]);
INC(Z407);
}

static void Z410
# ifdef HAVE_ARGS
(LONGCARD Z409)
# else
(Z409)
LONGCARD Z409;
# endif
{
Z240.A[Z407] = ADR (Z245.A[Z409 + Z201 + 1 - 33]) - (Z201 + 1) * sizeof (Z230);
INC(Z407);
}

static void Z411
# ifdef HAVE_ARGS
(LONGCARD Z409)
# else
(Z409)
LONGCARD Z409;
# endif
{
Z241.A[Z407] = Z409;
INC(Z407);
}

static void Z412
# ifdef HAVE_ARGS
(LONGCARD Z409)
# else
(Z409)
LONGCARD Z409;
# endif
{
Z242.A[Z407] = Z409;
INC(Z407);
}

static void Z413
# ifdef HAVE_ARGS
(LONGCARD Z409)
# else
(Z409)
LONGCARD Z409;
# endif
{
if (!ODD(Z407)) {
Z243.A[Z407 / 2].Y0 = Z409;
} else {
Z243.A[Z407 / 2].Y1 = Z409;
}
INC(Z407);
}

static void Z414
# ifdef HAVE_ARGS
(LONGCARD Z409)
# else
(Z409)
LONGCARD Z409;
# endif
{
Z244.A[Z407 - 33] = Z409;
INC(Z407);
}

static void Z415
# ifdef HAVE_ARGS
(LONGCARD Z409)
# else
(Z409)
LONGCARD Z409;
# endif
{
if (!ODD(Z407)) {
Z245.A[Z407 / 2 - 33].Y0 = Z409;
} else {
Z245.A[Z407 / 2 - 33].Y1 = Z409;
}
INC(Z407);
}

static void Z416
# ifdef HAVE_ARGS
(LONGCARD Z409)
# else
(Z409)
LONGCARD Z409;
# endif
{
Z246.A[Z407 - 85] = Z409;
INC(Z407);
}

static void Z417
# ifdef HAVE_ARGS
(LONGCARD Z409)
# else
(Z409)
LONGCARD Z409;
# endif
{
Z247.A[Z407 - 85] = Z409;
INC(Z407);
}

static void Z418
# ifdef HAVE_ARGS
(LONGCARD Z409)
# else
(Z409)
LONGCARD Z409;
# endif
{
Z248.A[Z407] = Z409;
INC(Z407);
}

static void Z419
# ifdef HAVE_ARGS
(LONGCARD Z409)
# else
(Z409)
LONGCARD Z409;
# endif
{
Z249.A[Z407 - 155] = Z409;
INC(Z407);
}

static void Z420
# ifdef HAVE_ARGS
(LONGCARD Z409)
# else
(Z409)
LONGCARD Z409;
# endif
{
Z250.A[Z407 - 68] = Z409;
INC(Z407);
}

static void Z421
 ARGS ((void))
{
Zmfy8_1 Z422;

Z422 = Z408;
Z407 = 1;
Zmfy8_9(Z422, (STRING)"YJ+VEV?WPWGXCXIX-?TV0E0Y6YAWP++++W1XNYFWA++++YBX/W3Y@W1", 55L, 34L);
Zmfy8_9(Z422, (STRING)"W.W@YCY1V@YH+W4X-+XHYDCY+YB++@XB7W10+YDQQV.+4V=V8YKW3", 53L, 33L);
Z422 = Z410;
Z407 = 1;
Zmfy8_9(Z422, (STRING)"3+V<+V9+V5V3TV?V3V>V:VDKV5V6V/V.V-RLAV<V.VIVJVLVM+PJV5V@", 56L, 34L);
Zmfy8_9(Z422, (STRING)"E+N<<+S++V,HV/Q+V2+556+M+++++JV@+D<+?", 37L, 33L);
Z422 = Z411;
Z407 = 1;
Zmfy8_9(Z422, (STRING)"N+V++++++++++++++N<<<<R++V+DDDDR+Q++++:+++V>+ABA++K++VD", 55L, 51L);
Zmfy8_9(Z422, (STRING)"VAVA++VD+++++R++V5V0VA", 22L, 16L);
Z422 = Z412;
Z407 = 1;
Zmfy8_9(Z422, (STRING)"+++++++++++++++++++++I+++++++++Q++++++++++++R+++++V9V6V9", 56L, 53L);
Zmfy8_9(Z422, (STRING)"+++++++++++V6+V4", 16L, 14L);
Z422 = Z413;
Z407 = 0;
Zmfy8_9(Z422, (STRING)"-W,++V3V4V:X;V:X;V:VNV:VOV:VAV:X;V:X;V:X;V:X;V@X8V@VDV9", 55L, 29L);
Zmfy8_9(Z422, (STRING)"X:V7V>V9X:9W;9W;9W;9W;9W;9W;V:X;V0X2V5X:V:X;V:X;V:X;9W;", 55L, 31L);
Zmfy8_9(Z422, (STRING)"V5X:9W;5W?5W?5W?5W?5W?5W?8W<8W<8W<8W<8W<8W<5W?V>XG5W?V<", 55L, 35L);
Zmfy8_9(Z422, (STRING)"VQV0W+V=VP8W<V0X28W<6W>6W>6W>6W>6W>6W>7W=7W=7W=7W=7W=7W=", 56L, 35L);
Zmfy8_9(Z422, (STRING)"6W>VBX:6W>VAV5V>XGVAV67W=V>XG7W=/W0/W0/W0/W0/W0/W0.W/.W/", 56L, 34L);
Zmfy8_9(Z422, (STRING)".W/.W/.W/.W/VAVTVAVRVAVS/VERVKRVL/W0V8X6V8X6VDX:VDX:./.", 55L, 33L);
Zmfy8_9(Z422, (STRING)"W/NXGNXGNXGNXGNXGNXGV+W@V+W@V+W@V+W@V+W@V+W@NXGMTV8V?AW+", 56L, 33L);
Zmfy8_9(Z422, (STRING)"VDX:KW+V+W+DWADWADWADWADWADWA1W31W31W31W31W31W3OVGJODN0", 55L, 37L);
Zmfy8_9(Z422, (STRING)"W20W20W20W20W20W21VF45464748494:V,WE<XGJWG++V,WE01JWGV6", 55L, 40L);
Zmfy8_9(Z422, (STRING)"X:JWGV,WEV,WEJWGJWGV,WEV6X:JWG2W.2W.2W.2W.2W.2W.3W:3W:3", 55L, 34L);
Zmfy8_9(Z422, (STRING)"W:3W:3W:3W:V.WQV.WQV.WQV.WQ++V.WQBXGBXGBXGBXG++BXGV.WQV1", 56L, 34L);
Zmfy8_9(Z422, (STRING)"WLV1WLV1WLV1WLV2X1BXGQVJQVHQVIQWKV;VB++V1WLVCX4++V;XE:XG", 56L, 33L);
Zmfy8_9(Z422, (STRING)"V;XEQWK:XG:XG;BIWBPXGLX-;WIIWBPXGV/X/LX-CX+V2V3SX,V/X/;", 55L, 35L);
Zmfy8_9(Z422, (STRING)"WIIWBPXGSV/V/VMCLVCX4,XG,XG++++++", 33L, 23L);
Z422 = Z414;
Z407 = Z201 + 1;
Z422 = Z415;
Z407 = (Z201 + 1) * 2;
Zmfy8_9(Z422, (STRING)"++++++++++++++++++,-++++++++IWC++++++++++++++IJ++++++++", 55L, 54L);
Zmfy8_9(Z422, (STRING)"++++++++V9X9V9V9V9V:QWJQQQRRV-RV.RWRV4V7V4V8V6V;,.V5V<V6", 56L, 37L);
Zmfy8_9(Z422, (STRING)"V=AIAWDKWHV.WPVDX7VBXDJP4;2334DW5BKVAX>6=02NV+.0V8V@8?V0", 56L, 40L);
Zmfy8_9(Z422, (STRING)"V2V>VC:A;C7>PV,V/X.5<9@@HTV0LSV2X3V-V1?G>F=ECMEW6FW7V?X5", 56L, 41L);
Zmfy8_9(Z422, (STRING)"GW8HW9<DMW-++++++++++++++++++++++++++++++++++++++++++++", 55L, 52L);
Zmfy8_9(Z422, (STRING)"", 1L, 0L);
Z422 = Z416;
Z407 = Z212;
Zmfy8_9(Z422, (STRING)"-4++,-+,-00000++++++-+.-,.-+.+-+.,,,-,,,,+-+.+,.+-0-+/-", 55L, 55L);
Zmfy8_9(Z422, (STRING)"-+,--...,,,.,-+", 15L, 15L);
Z422 = Z417;
Z407 = Z212;
Zmfy8_9(Z422, (STRING)"LMNOOOPPPQQQQQQRSTV+V,V-V-V.V/V/V0V1V1V2V2V3V3V4V5V5V5V6", 56L, 37L);
Zmfy8_9(Z422, (STRING)"V6V7V8V8V9V9V:V:V;V;V<V=V=V>V?V?V@V@VAVAVBVBVBVBVCVCVCVC", 56L, 28L);
Zmfy8_9(Z422, (STRING)"VCVDVDVEVE", 10L, 5L);
Z422 = Z418;
Z407 = 1;
Zmfy8_9(Z422, (STRING)"7+777777<77777CA77777G>A77777==AAA7D=AGA+7=>>A+>+-.//..", 55L, 55L);
Zmfy8_9(Z422, (STRING)"..446+G.E/+.", 12L, 12L);
Z422 = Z419;
Z407 = Z213 + 1;
Zmfy8_9(Z422, (STRING)"", 1L, 0L);
Z422 = Z420;
Z407 = Z210;
Zmfy8_9(Z422, (STRING)"W1W4WFWMWNWOWSWTX0X<X=X?X@XAXBXCXF", 34L, 17L);
}

void ZmfDOBA_38
 ARGS ((void))
{
Zp1PEAFD_4(&Z193);
Zp1PEAFD_6(&Z193, Z188);
Z194 = INTPTR((LONGCARD)Zp1PEAFi_2(&Z193));
ZpmCQ_5(&ZmfDOBA_0, 256L);
}

void ZmfDOBA_41
 ARGS ((void))
{
}

void BEGIN_Parser ARGS ((void))
{
  static BOOLEAN has_been_called = FALSE;
  if (has_been_called) return;
  has_been_called = TRUE;
BEGIN_Sets ();
BEGIN_Scanner ();
BEGIN_General ();
BEGIN_Pack ();
BEGIN_Strings ();
BEGIN_DynArray ();
BEGIN_Sets ();
BEGIN_Errors ();
BEGIN_Position ();
BEGIN_IO ();
BEGIN_Actions ();
BEGIN_Errors ();
BEGIN_Lists ();
BEGIN_Oper ();
BEGIN_Scanner ();
BEGIN_Position ();
BEGIN_Strings ();
BEGIN_StringM ();
BEGIN_Idents ();
BEGIN_Pointers ();
BEGIN_TokenTab ();
BEGIN_Tokens ();
BEGIN_Rules ();
BEGIN_WriteTok ();
BEGIN_Sets ();

Z421();
ZmfDOBA_37 = FALSE;
Z251.A[1 - 1] = 92;
}
