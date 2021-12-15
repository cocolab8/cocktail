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

#ifndef DEFINITION_Scanner
#include "Scanner.h"
#endif

#ifndef DEFINITION_Strings
#include "Strings.h"
#endif

#ifndef DEFINITION_StringM
#include "StringM.h"
#endif

#ifndef DEFINITION_Pointers
#include "Pointers.h"
#endif

#ifndef DEFINITION_IO
#include "IO.h"
#endif

#ifndef DEFINITION_StdIO
#include "StdIO.h"
#endif

#ifndef DEFINITION_Idents
#include "Idents.h"
#endif

#ifndef DEFINITION_Lists
#include "Lists.h"
#endif

#ifndef DEFINITION_Parser
#include "Parser.h"
#endif

BOOLEAN ZmfDOBA_40;

typedef struct S_1 {
Zpky9FDA_1 Y0;
} Z156;
static Zp1PEAFD_2 Z158;
static INTEGER Z159;
static Zfb3DLQ_0 Z160;
static BOOLEAN Z161;
static BOOLEAN Z162;
static Zfb3DLQ_0 Z163;
static void Z164 ARGS ((Zfb3DLQ_0 Z165));
static void Z166 ARGS ((ZijFQQ_3 Z167));
#define Z168	0
#define Z169	0
#define Z170	1
#define Z171	2
#define Z172	3
#define Z173	0
#define Z174	35
#define Z175	36
#define Z176	0
#define Z177	75
#define Z178	547
#define Z179	128
#define Z180	1
#define Z181	1
#define Z182	69
#define Z183	70
#define Z184	100
#define Z185	101
#define Z186	188
#define Z187	188
#define Z188	101
#define Z189	69
#define Z190	69
#define Z191	36
#define Z192	128
#define Z193	Z183
typedef SHORTCARD Z194;
typedef Z194 Z195;
typedef Z194 Z196;
typedef Z194 Z197;
typedef Z194 Z198;
typedef struct S_2 {
Z195 Y0, Y1;
} Z199;
typedef Z195 Z202;
typedef Z199 Z203;
typedef Z199 *Z204;
typedef Z202 *Z205;
typedef Z203 *Z206;
typedef struct S_23 {
Z195 A[1000000 + 1];
} *Z207;
typedef struct S_3 {
BITSET Y0;
BOOLEAN Y1, Y2;
} Z208;
static struct S_4 {
ADDRESS A[Z182 + 1];
} Z212;
static struct S_5 {
ADDRESS A[Z182 + 1];
} Z213;
static struct S_6 {
Z195 A[Z189 + 1];
} Z214;
static struct S_7 {
Z195 A[Z190 + 1];
} Z215;
static struct S_8 {
Z199 A[Z178 + 1];
} Z216;
static struct S_9 {
Z202 A[Z191 - (Z174 + 1) + 1];
} Z217;
static struct S_10 {
Z203 A[Z192 - (Z174 + 1) + 1];
} Z218;
static struct S_11 {
Z194 A[Z186 - Z185 + 1];
} Z219;
static struct S_12 {
Z198 A[Z186 - Z185 + 1];
} Z220;
static struct S_13 {
Z198 A[Z182 + 1];
} Z221;
static struct S_14 {
Z195 A[Z187 + 1 - (Z186 + 1) + 1];
} Z222;
static struct S_15 {
Z197 A[Z184 + 1 - Z183 + 1];
} Z223;
static struct S_16 {
SHORTCARD A[Z188 - Z184 - 1 + 1];
} Z224;
static Z208 Z225;
static void Z231 ARGS ((CHAR Z232[], LONGCARD O_3, CHAR Z233[], LONGCARD O_2));
static Z194 Z239;
static LONGINT Z240;
static LONGINT Z241;
static Z194 Z242;
static Z207 Z243;
static struct S_17 {
Z156 A[100000 + 1];
} *Z244;
struct S_1_yyParse;
static INTEGER Z250 ARGS ((Z195 Z246, Z198 Z252, CARDINAL Z253));
struct S_19 {
CHAR A[127 + 1];
};
static void Z265 ARGS ((struct S_1_yyParse *link));
static void Z266 ARGS ((void));
static void Z267 ARGS ((struct S_1_yyParse *link));
static void Z268 ARGS ((void));
struct S_1_yyParse {
Z195 *Z254;
Z198 *Z255;
BOOLEAN *Z263;
CARDINAL *Z247;
};
static Z198 Z270 ARGS ((Z198 Z316, LONGINT Z317, LONGINT Z318));
struct S_18 {
CHAR A[127 + 1];
};
static void Z333 ARGS ((LONGINT Z317, LONGINT Z318, ZpmCQ_4 *Z320));
static BOOLEAN Z345 ARGS ((Z198 Z316, LONGINT Z317, LONGINT Z318));
static void Z349 ARGS ((Z195 Z343, ZpmCQ_4 *Z320));
static void Z341 ARGS ((LONGINT Z317, LONGINT Z318, ZpmCQ_4 *Z322));
static Z195 Z201 ARGS ((Z195 Z343, Z198 Z351));
static CARDINAL Z355;
static void Z356 ARGS ((LONGCARD Z357));
static void Z358 ARGS ((LONGCARD Z357));
static void Z359 ARGS ((LONGCARD Z357));
static void Z360 ARGS ((LONGCARD Z357));
static void Z361 ARGS ((LONGCARD Z357));
static void Z362 ARGS ((LONGCARD Z357));
static void Z363 ARGS ((LONGCARD Z357));
static void Z364 ARGS ((LONGCARD Z357));
static void Z365 ARGS ((LONGCARD Z357));
static void Z366 ARGS ((LONGCARD Z357));
static void Z367 ARGS ((LONGCARD Z357));
static void Z368 ARGS ((LONGCARD Z357));
static void Z369 ARGS ((void));

static void Z164
# ifdef HAVE_ARGS
(Zfb3DLQ_0 Z165)
# else
(Z165)
Zfb3DLQ_0 Z165;
# endif
{
if (Z165 <= Z163) {
Zp1BbM_18('\\');
}
Zfb3DLQ_7((ZDz6VQCC_4)ZfM_1, Z165);
}

static void Z166
# ifdef HAVE_ARGS
(ZijFQQ_3 Z167)
# else
(Z167)
ZijFQQ_3 Z167;
# endif
{
if (!ZijFQQ_12(Z167)) {
Zp1PEAFi_6((ZDz6VQCC_4)ZfM_1, (Zp1PEAFi_1)PTRINT(ZijFQQ_8(Z167)));
ZijFQQ_9(&Z167);
}
while (!ZijFQQ_12(Z167)) {
Zp1BbM_27();
Zp1PEAFi_6((ZDz6VQCC_4)ZfM_1, (Zp1PEAFi_1)PTRINT(ZijFQQ_8(Z167)));
ZijFQQ_9(&Z167);
}
}

static void Z231
# ifdef HAVE_ARGS
(CHAR Z232[], LONGCARD O_3, CHAR Z233[], LONGCARD O_2)
# else
(Z232, O_3, Z233, O_2)
CHAR Z232[];
LONGCARD O_3;
CHAR Z233[];
LONGCARD O_2;
# endif
{
CARDINAL Z234, Z235;
OPEN_ARRAY_LOCALS

ALLOC_OPEN_ARRAYS (O_3 * sizeof (CHAR), 1)
COPY_OPEN_ARRAY (Z232, O_3, CHAR)
if ((O_3 - 1) < (O_2 - 1)) {
Z235 = (O_3 - 1);
} else {
Z235 = (O_2 - 1);
}
{
LONGCARD B_1 = 0, B_2 = Z235;

if (B_1 <= B_2)
for (Z234 = B_1;; Z234 += 1) {
Z233[Z234] = Z232[Z234];
if (Z234 >= B_2) break;
}
}
if ((O_2 - 1) > Z235) {
Z233[Z235 + 1] = CHR(0);
}
FREE_OPEN_ARRAYS
}

void ZmfDOBA_45
# ifdef HAVE_ARGS
(CARDINAL Z227, CHAR Z228[], LONGCARD O_1)
# else
(Z227, Z228, O_1)
CARDINAL Z227;
CHAR Z228[];
LONGCARD O_1;
# endif
{
Zp1PEAFD_2 Z229, Z230;

switch (Z227) {
case 0:;
Z231((STRING)"_EOF_", 5L, Z228, O_1);
break;
case 1:;
Z231((STRING)"=", 1L, Z228, O_1);
break;
case 2:;
Z231((STRING)":", 1L, Z228, O_1);
break;
case 3:;
Z231((STRING)".", 1L, Z228, O_1);
break;
case 4:;
Z231((STRING)"|", 1L, Z228, O_1);
break;
case 5:;
Z231((STRING)"*", 1L, Z228, O_1);
break;
case 6:;
Z231((STRING)"+", 1L, Z228, O_1);
break;
case 7:;
Z231((STRING)"||", 2L, Z228, O_1);
break;
case 8:;
Z231((STRING)"(", 1L, Z228, O_1);
break;
case 9:;
Z231((STRING)")", 1L, Z228, O_1);
break;
case 10:;
Z231((STRING)"[", 1L, Z228, O_1);
break;
case 11:;
Z231((STRING)"]", 1L, Z228, O_1);
break;
case 12:;
Z231((STRING)"EXPORT", 6L, Z228, O_1);
break;
case 13:;
Z231((STRING)"GLOBAL", 6L, Z228, O_1);
break;
case 14:;
Z231((STRING)"LOCAL", 5L, Z228, O_1);
break;
case 15:;
Z231((STRING)"BEGIN", 5L, Z228, O_1);
break;
case 16:;
Z231((STRING)"CLOSE", 5L, Z228, O_1);
break;
case 17:;
Z231((STRING)"TOKEN", 5L, Z228, O_1);
break;
case 18:;
Z231((STRING)"OPER", 4L, Z228, O_1);
break;
case 19:;
Z231((STRING)"NONE", 4L, Z228, O_1);
break;
case 20:;
Z231((STRING)"LEFT", 4L, Z228, O_1);
break;
case 21:;
Z231((STRING)"RIGHT", 5L, Z228, O_1);
break;
case 22:;
Z231((STRING)"RULE", 4L, Z228, O_1);
break;
case 23:;
Z231((STRING)"PREC", 4L, Z228, O_1);
break;
case 24:;
Z231((STRING)"Comment", 7L, Z228, O_1);
break;
case 25:;
Z231((STRING)"Number", 6L, Z228, O_1);
break;
case 26:;
Z231((STRING)"Action", 6L, Z228, O_1);
break;
case 27:;
Z231((STRING)"Identifier", 10L, Z228, O_1);
break;
case 28:;
Z231((STRING)"String", 6L, Z228, O_1);
break;
case 29:;
Z231((STRING)"SCANNER", 7L, Z228, O_1);
break;
case 30:;
Z231((STRING)"PARSER", 6L, Z228, O_1);
break;
case 31:;
Z231((STRING)"START", 5L, Z228, O_1);
break;
case 32:;
Z231((STRING)",", 1L, Z228, O_1);
break;
case 33:;
Z231((STRING)"?", 1L, Z228, O_1);
break;
case 34:;
Z231((STRING)"-", 1L, Z228, O_1);
break;
case 35:;
Z231((STRING)"IMPORT", 6L, Z228, O_1);
break;
default:
Zp1PEAFD_13((STRING)"unknown ", 8L, &Z229);
Zp1PEAFD_18((LONGINT)Z227, &Z230);
Zp1PEAFD_5(&Z229, &Z230);
Zp1PEAFD_14(&Z229, Z228, O_1);
break;
}
}

CARDINAL ZmfDOBA_42
 ARGS ((void))
{
return ZmfDOBA_43(Z180);
}

CARDINAL ZmfDOBA_43
# ifdef HAVE_ARGS
(SHORTCARD Z246)
# else
(Z246)
SHORTCARD Z246;
# endif
{
CARDINAL Z247;

ZmfDOBA_41();
Z240 = 100;
Z241 = 100;
ZarQdhNDD_0((ADDRESS *)&Z243, &Z240, (LONGINT)sizeof (Z195));
ZarQdhNDD_0((ADDRESS *)&Z244, &Z241, (LONGINT)sizeof (Z156));
Z242 = Z240 - 1;
Z239 = 0;
Z225.Y0 = SET_ELEM (Z169);
Z225.Y1 = TRUE;
Z225.Y2 = TRUE;
Z247 = Z250(Z246, (Z198)Zpky9FDA_10(), (LONGCARD)Z224.A[Z246 - 1]);
ZarQdhNDD_3((ADDRESS *)&Z243, &Z240, (LONGINT)sizeof (Z194));
ZarQdhNDD_3((ADDRESS *)&Z244, &Z241, (LONGINT)sizeof (Z156));
return Z247;
}

static void Z265
# ifdef HAVE_ARGS
(struct S_1_yyParse *link)
# else
(link)
struct S_1_yyParse *link;
# endif
{
*link->Z254 = Z222.A[(Z194)(*link->Z254) - 189];
INC(Z239);
Z244->A[Z239].Y0 = Zpky9FDA_6;
*link->Z255 = Zpky9FDA_10();
*link->Z263 = FALSE;
}

static void Z266
 ARGS ((void))
{
}

static void Z267
# ifdef HAVE_ARGS
(struct S_1_yyParse *link)
# else
(link)
struct S_1_yyParse *link;
# endif
{
INC(*link->Z247);
}

static void Z268
 ARGS ((void))
{
ZarQdhNDD_2((ADDRESS *)&Z243, &Z240, (LONGINT)sizeof (Z195));
ZarQdhNDD_2((ADDRESS *)&Z244, &Z241, (LONGINT)sizeof (Z156));
Z242 = Z240 - 1;
}

static INTEGER Z250
# ifdef HAVE_ARGS
(Z195 Z246, Z198 Z252, CARDINAL Z253)
# else
(Z246, Z252, Z253)
Z195 Z246;
Z198 Z252;
CARDINAL Z253;
# endif
{
Z195 Z254;
Z198 Z255;
Z198 Z256;
Z156 Z257;
Zpky9FDA_1 Z258;
Z198 Z259;
Z195 Z260;
Z204 Z261;
Z206 Z262;
BOOLEAN Z263;
CARDINAL Z247;
struct S_19 Z264;
struct S_1_yyParse frame;

frame.Z254 = &Z254;
frame.Z255 = &Z255;
frame.Z263 = &Z263;
frame.Z247 = &Z247;
Z254 = Z246;
Z255 = Z252;
Z247 = 0;
Z263 = FALSE;
for (;;) {
for (;;) {
if (Z239 >= Z242) {
Z268();
}
Z243->A[Z239] = Z254;
for (;;) {
Z261 = (Z204)(Z212.A[Z254] + Z255 * sizeof (Z199));
if (Z261->Y0 == Z254) {
Z254 = Z261->Y1;
goto EXIT_3;
}
Z254 = Z214.A[Z254];
if (Z254 == Z168) {
goto EXIT_3;
}
} EXIT_3:;
if (Z254 == Z168 || Z263 && Z254 >= Z185) {
if (Z254 == Z168 && !Z263) {
INC(Z247);
Z255 = Z270(Z255, Z240, (LONGINT)Z239);
Z263 = TRUE;
Z254 = Z243->A[Z239];
goto EXIT_2;
}
Z254 = Z243->A[Z239];
Z259 = Z221.A[Z254];
Z254 = Z201(Z254, Z259);
if (Z254 > Z186) {
Z254 = Z222.A[(Z194)Z254 - 189];
}
if (Z254 <= Z184) {
Zpky9FDA_2((LONGINT)Z259, &Z258);
if (Z225.Y2) {
ZmfDOBA_45((LONGCARD)Z259, Z264.A, 128L);
ZblNKKO_45((LONGCARD)ZblNKKO_4, (LONGCARD)ZblNKKO_18, Zpky9FDA_6.Y0, (LONGCARD)ZblNKKO_32, ADR (Z264));
}
if (Z239 >= Z242) {
Z268();
}
INC(Z239);
Z244->A[Z239].Y0 = Z258;
if (Z254 >= Z193) {
Z243->A[Z239] = Z243->A[Z239 - 1];
Z254 = Z223.A[Z254 - 70];
} else {
Z243->A[Z239] = Z254;
}
}
if (Z254 <= Z182) {
goto EXIT_2;
}
}
if (Z254 >= Z193) {
if (Z254 <= Z184) {
INC(Z239);
Z244->A[Z239].Y0 = Zpky9FDA_6;
Z255 = Zpky9FDA_10();
Z263 = FALSE;
}
for (;;) {
switch (Z254) {
case 101:;
Z266();
return Z247;
break;
case 102:;
DEC1(Z239, 2);
Z256 = ZmfDOBA_1;
Zp1BbM_27();
Zp1BbM_23((STRING)"> . ", 4L);
Zp1BbM_27();
break;
case 103:;
Z256 = ZmfDOBA_2;
break;
case 104:;
case 70:;
DEC1(Z239, 2);
Z256 = ZmfDOBA_2;
Zp1BbM_27();
Zp1BbM_23((STRING)"/*", 2L);
Z166(Z244->A[Z239 + 2].Y0.U_1.V_1.Y2);
Zp1BbM_23((STRING)"*/", 2L);
Zp1BbM_27();
Zp1BbM_27();
break;
case 105:;
DEC1(Z239, 2);
Z256 = ZmfDOBA_2;
break;
case 106:;
DEC1(Z239, 2);
Z256 = ZmfDOBA_2;
break;
case 107:;
DEC1(Z239, 2);
Z256 = ZmfDOBA_2;
break;
case 108:;
DEC1(Z239, 2);
Z256 = ZmfDOBA_2;
break;
case 109:;
DEC1(Z239, 2);
Z256 = ZmfDOBA_2;
break;
case 110:;
DEC1(Z239, 2);
Z256 = ZmfDOBA_2;
break;
case 111:;
DEC1(Z239, 1);
Z256 = ZmfDOBA_3;
break;
case 112:;
DEC1(Z239, 2);
Z256 = ZmfDOBA_3;
break;
case 113:;
DEC1(Z239, 1);
Z256 = ZmfDOBA_4;
break;
case 114:;
DEC1(Z239, 2);
Z256 = ZmfDOBA_4;
break;
case 115:;
case 71:;
DEC1(Z239, 3);
Z256 = ZmfDOBA_5;
break;
case 116:;
case 72:;
DEC1(Z239, 1);
Z256 = ZmfDOBA_5;
break;
case 117:;
case 73:;
DEC1(Z239, 3);
Z256 = ZmfDOBA_6;
break;
case 118:;
case 74:;
DEC1(Z239, 3);
Z256 = ZmfDOBA_6;
break;
case 119:;
case 75:;
DEC1(Z239, 3);
Z256 = ZmfDOBA_6;
break;
case 120:;
case 76:;
DEC1(Z239, 3);
Z256 = ZmfDOBA_6;
break;
case 121:;
case 77:;
DEC1(Z239, 3);
Z256 = ZmfDOBA_6;
break;
case 122:;
case 78:;
DEC1(Z239, 3);
Z256 = ZmfDOBA_6;
break;
case 123:;
DEC1(Z239, 2);
Z256 = ZmfDOBA_7;
break;
case 124:;
Z256 = ZmfDOBA_8;
break;
case 125:;
DEC1(Z239, 4);
Z256 = ZmfDOBA_8;
break;
case 126:;
DEC1(Z239, 4);
Z256 = ZmfDOBA_8;
break;
case 127:;
case 79:;
DEC1(Z239, 2);
Z256 = ZmfDOBA_8;
break;
case 128:;
Z256 = ZmfDOBA_9;
break;
case 129:;
case 80:;
DEC1(Z239, 1);
Z256 = ZmfDOBA_9;
break;
case 130:;
case 81:;
DEC1(Z239, 2);
Z256 = ZmfDOBA_9;
break;
case 131:;
Z256 = ZmfDOBA_10;
break;
case 132:;
DEC1(Z239, 2);
Z256 = ZmfDOBA_10;
break;
case 133:;
case 82:;
DEC1(Z239, 4);
Z256 = ZmfDOBA_10;
break;
case 134:;
DEC1(Z239, 2);
Z256 = ZmfDOBA_11;
break;
case 135:;
case 83:;
DEC1(Z239, 4);
Z256 = ZmfDOBA_11;
break;
case 136:;
DEC1(Z239, 3);
Z256 = ZmfDOBA_12;
break;
case 137:;
Z256 = ZmfDOBA_13;
Zp1BbM_27();
Zp1BbM_23((STRING)"PREC", 4L);
Zp1BbM_27();
Z162 = TRUE;
break;
case 138:;
Z256 = ZmfDOBA_14;
break;
case 139:;
DEC1(Z239, 2);
Z256 = ZmfDOBA_14;
break;
case 140:;
case 84:;
DEC1(Z239, 2);
Z256 = ZmfDOBA_14;
break;
case 141:;
DEC1(Z239, 2);
Z256 = ZmfDOBA_15;
Zp1BbM_27();
break;
case 142:;
case 85:;
DEC1(Z239, 1);
Z256 = ZmfDOBA_16;
Zp1BbM_23((STRING)"  LEFT	", 7L);
break;
case 143:;
case 86:;
DEC1(Z239, 1);
Z256 = ZmfDOBA_16;
Zp1BbM_23((STRING)"  RIGHT	", 8L);
break;
case 144:;
case 87:;
DEC1(Z239, 1);
Z256 = ZmfDOBA_16;
Zp1BbM_23((STRING)"  NONE	", 7L);
break;
case 145:;
Z256 = ZmfDOBA_17;
break;
case 146:;
DEC1(Z239, 2);
Z256 = ZmfDOBA_17;
break;
case 147:;
case 88:;
DEC1(Z239, 1);
Z256 = ZmfDOBA_18;
if (Z162) {
Zp1BbM_23((STRING)" ", 1L);
Z164(Z244->A[Z239 + 1].Y0.U_1.V_4.Y5);
}
break;
case 148:;
case 89:;
DEC1(Z239, 1);
Z256 = ZmfDOBA_18;
if (Z162) {
Zp1BbM_23((STRING)" ", 1L);
Z164(Z244->A[Z239 + 1].Y0.U_1.V_4.Y5);
}
break;
case 149:;
DEC1(Z239, 3);
Z256 = ZmfDOBA_19;
Zp1BbM_27();
break;
case 150:;
Z256 = ZmfDOBA_20;
Zp1BbM_27();
Zp1BbM_23((STRING)"START", 5L);
break;
case 151:;
Z256 = ZmfDOBA_21;
break;
case 152:;
DEC1(Z239, 3);
Z256 = ZmfDOBA_21;
Zp1BbM_23((STRING)" ", 1L);
Z164(Z244->A[Z239 + 2].Y0.U_1.V_4.Y5);
break;
case 153:;
Z256 = ZmfDOBA_22;
break;
case 154:;
case 90:;
DEC1(Z239, 1);
Z256 = ZmfDOBA_22;
break;
case 155:;
DEC1(Z239, 4);
Z256 = ZmfDOBA_23;
break;
case 156:;
Z256 = ZmfDOBA_24;
break;
case 157:;
DEC1(Z239, 2);
Z256 = ZmfDOBA_24;
break;
case 158:;
Z256 = ZmfDOBA_25;
Zp1BbM_27();
Zp1BbM_23((STRING)"RULE", 4L);
Zp1BbM_27();
Zp1BbM_27();
Z162 = TRUE;
break;
case 159:;
DEC1(Z239, 7);
Z256 = ZmfDOBA_26;
break;
case 160:;
Z256 = ZmfDOBA_27;
Zp1BbM_23((STRING)" .", 2L);
break;
case 161:;
Z256 = ZmfDOBA_28;
if (Z244->A[Z239 + 0].Y0.U_1.V_4.Y5 != Z160) {
Z160 = Z244->A[Z239 + 0].Y0.U_1.V_4.Y5;
if (!Z161) {
Zp1BbM_27();
Zp1BbM_23((STRING)"> .", 3L);
Zp1BbM_27();
}
Z161 = FALSE;
Z164(Z244->A[Z239 + 0].Y0.U_1.V_4.Y5);
Zfb3DLQ_3(Z244->A[Z239 + 0].Y0.U_1.V_4.Y5, &Z158);
if (Zp1PEAFD_7(&Z158) <= 7) {
Zp1BbM_23((STRING)"	= <", 4L);
} else {
Zp1BbM_23((STRING)" = <", 4L);
}
Zp1BbM_27();
Z159 = 1;
} else {
INC(Z159);
Zp1BbM_27();
}
Zp1BbM_23((STRING)"	=", 2L);
break;
case 162:;
DEC1(Z239, 5);
Z256 = ZmfDOBA_29;
break;
case 163:;
DEC1(Z239, 1);
Z256 = ZmfDOBA_29;
break;
case 164:;
Z256 = ZmfDOBA_30;
Zp1BbM_27();
Zp1BbM_23((STRING)"	=", 2L);
INC(Z159);
break;
case 165:;
Z256 = ZmfDOBA_31;
Zp1BbM_23((STRING)" .", 2L);
break;
case 166:;
DEC1(Z239, 2);
Z256 = ZmfDOBA_32;
break;
case 167:;
Z256 = ZmfDOBA_32;
break;
case 168:;
DEC1(Z239, 1);
Z256 = ZmfDOBA_33;
break;
case 169:;
case 91:;
DEC1(Z239, 2);
Z256 = ZmfDOBA_33;
break;
case 170:;
case 92:;
DEC1(Z239, 2);
Z256 = ZmfDOBA_33;
break;
case 171:;
DEC1(Z239, 3);
Z256 = ZmfDOBA_33;
break;
case 172:;
case 93:;
DEC1(Z239, 3);
Z256 = ZmfDOBA_34;
break;
case 173:;
case 94:;
DEC1(Z239, 3);
Z256 = ZmfDOBA_34;
break;
case 174:;
case 95:;
DEC1(Z239, 1);
Z256 = ZmfDOBA_34;
Zp1BbM_23((STRING)" ", 1L);
Z164(Z244->A[Z239 + 1].Y0.U_1.V_4.Y5);
break;
case 175:;
case 96:;
DEC1(Z239, 1);
Z256 = ZmfDOBA_34;
Zp1BbM_23((STRING)" ", 1L);
Z164(Z244->A[Z239 + 1].Y0.U_1.V_4.Y5);
break;
case 176:;
case 97:;
DEC1(Z239, 1);
Z256 = ZmfDOBA_34;
Zp1BbM_23((STRING)" ", 1L);
Z166(Z244->A[Z239 + 1].Y0.U_1.V_3.Y4);
break;
case 177:;
DEC1(Z239, 3);
Z256 = ZmfDOBA_34;
break;
case 178:;
case 98:;
DEC1(Z239, 2);
Z256 = ZmfDOBA_34;
Zp1BbM_23((STRING)" ? ", 3L);
Z166(Z244->A[Z239 + 2].Y0.U_1.V_3.Y4);
break;
case 179:;
case 99:;
DEC1(Z239, 3);
Z256 = ZmfDOBA_34;
Zp1BbM_23((STRING)" ? - ", 5L);
Z166(Z244->A[Z239 + 2].Y0.U_1.V_3.Y4);
break;
case 180:;
DEC1(Z239, 3);
Z256 = ZmfDOBA_34;
break;
case 181:;
DEC1(Z239, 4);
Z256 = ZmfDOBA_34;
break;
case 182:;
Z256 = ZmfDOBA_35;
Zp1BbM_23((STRING)" ? -", 4L);
break;
case 183:;
Z256 = ZmfDOBA_36;
Zp1BbM_23((STRING)" ?", 2L);
break;
case 184:;
Z256 = ZmfDOBA_37;
Zp1BbM_23((STRING)" PREC", 5L);
break;
case 185:;
DEC1(Z239, 3);
Z256 = ZmfDOBA_38;
break;
case 186:;
DEC1(Z239, 1);
Z256 = ZmfDOBA_38;
break;
case 187:;
Z256 = ZmfDOBA_39;
break;
case 188:;
case 100:;
DEC1(Z239, 2);
Z256 = ZmfDOBA_39;
if (!Z161) {
Z161 = TRUE;
Zp1BbM_27();
Zp1BbM_23((STRING)"> .", 3L);
Zp1BbM_27();
}
Zp1BbM_27();
Zp1BbM_23((STRING)"/*", 2L);
Z166(Z244->A[Z239 + 2].Y0.U_1.V_1.Y2);
Zp1BbM_23((STRING)"*/", 2L);
Zp1BbM_27();
Zp1BbM_27();
break;
}
Z254 = Z243->A[Z239];
for (;;) {
Z262 = (Z206)(Z213.A[Z254] + Z256 * sizeof (Z203));
if (Z262->Y0 == Z254) {
Z254 = Z262->Y1;
goto EXIT_5;
}
Z254 = Z215.A[Z254];
} EXIT_5:;
INC(Z239);
Z244->A[Z239] = Z257;
if (Z254 < Z193) {
goto EXIT_4;
}
} EXIT_4:;
} else {
INC(Z239);
Z244->A[Z239].Y0 = Zpky9FDA_6;
Z255 = Zpky9FDA_10();
Z263 = FALSE;
}
} EXIT_2:;
} EXIT_1:;
}

static Z198 Z270
# ifdef HAVE_ARGS
(Z198 Z316, LONGINT Z317, LONGINT Z318)
# else
(Z316, Z317, Z318)
Z198 Z316;
LONGINT Z317;
LONGINT Z318;
# endif
{
BOOLEAN Z319;
ZpmCQ_4 Z320;
ZpmCQ_4 Z322;
Z198 Z227;
struct S_18 Z323;
Zp1PEAFD_2 Z324;
Zp1PEAFD_2 Z325;
INTEGER Z326;

if (Z225.Y2) {
ZblNKKO_44((LONGCARD)ZblNKKO_1, (LONGCARD)ZblNKKO_16, Zpky9FDA_6.Y0);
ZmfDOBA_45((LONGCARD)Z316, Z323.A, 128L);
Zp1PEAFD_13(Z323.A, 128L, &Z324);
ZblNKKO_45((LONGCARD)ZblNKKO_9, (LONGCARD)ZblNKKO_20, Zpky9FDA_6.Y0, (LONGCARD)ZblNKKO_30, ADR (Z324));
ZpmCQ_5(&Z320, (LONGCARD)Z174);
Z333(Z317, Z318, &Z320);
Zp1PEAFD_4(&Z325);
{
Z198 B_3 = ZpmCQ_17(&Z320), B_4 = ZpmCQ_18(&Z320);

if (B_3 <= B_4)
for (Z227 = B_3;; Z227 += 1) {
if (ZpmCQ_25((LONGCARD)Z227, &Z320)) {
ZmfDOBA_45((LONGCARD)Z227, Z323.A, 128L);
Zp1PEAFD_13(Z323.A, 128L, &Z324);
if (Zp1PEAFD_7(&Z325) + Zp1PEAFD_7(&Z324) + 1 <= Zp1PEAFD_0) {
Zp1PEAFD_5(&Z325, &Z324);
Zp1PEAFD_6(&Z325, ' ');
}
}
if (Z227 >= B_4) break;
}
}
ZblNKKO_45((LONGCARD)ZblNKKO_2, (LONGCARD)ZblNKKO_20, Zpky9FDA_6.Y0, (LONGCARD)ZblNKKO_30, ADR (Z325));
ZpmCQ_7(&Z320);
}
ZpmCQ_5(&Z322, (LONGCARD)Z174);
Z341(Z317, Z318, &Z322);
Z319 = FALSE;
while (!ZpmCQ_25((LONGCARD)Z316, &Z322)) {
Z316 = Zpky9FDA_10();
Z319 = TRUE;
}
ZpmCQ_7(&Z322);
if (Z319 && Z225.Y2) {
ZblNKKO_44((LONGCARD)ZblNKKO_3, (LONGCARD)ZblNKKO_20, Zpky9FDA_6.Y0);
}
return Z316;
}

static void Z333
# ifdef HAVE_ARGS
(LONGINT Z317, LONGINT Z318, ZpmCQ_4 *Z320)
# else
(Z317, Z318, Z320)
LONGINT Z317;
LONGINT Z318;
ZpmCQ_4 *Z320;
# endif
{
Z198 Z316;
Z195 Z343;
Z195 Z344;

Z343 = Z243->A[Z318];
ZpmCQ_32(Z320);
for (Z316 = Z173; Z316 <= Z174; Z316 += 1) {
Z344 = Z201(Z343, Z316);
if (Z344 != Z168 && (Z344 <= Z188 || Z345(Z316, Z317, Z318))) {
ZpmCQ_13(Z320, (LONGCARD)Z316);
}
}
}

static BOOLEAN Z345
# ifdef HAVE_ARGS
(Z198 Z316, LONGINT Z317, LONGINT Z318)
# else
(Z316, Z317, Z318)
Z198 Z316;
LONGINT Z317;
LONGINT Z318;
# endif
{
LONGINT Z343;
Z198 Z347;
Z207 Z348;

ZarQdhNDD_0((ADDRESS *)&Z348, &Z317, (LONGINT)sizeof (Z195));
{
LONGINT B_5 = 0, B_6 = Z318;

if (B_5 <= B_6)
for (Z343 = B_5;; Z343 += 1) {
Z348->A[Z343] = Z243->A[Z343];
if (Z343 >= B_6) break;
}
}
Z343 = Z348->A[Z318];
for (;;) {
Z348->A[Z318] = Z343;
Z343 = Z201((Z195)Z343, Z316);
if (Z343 == Z168) {
ZarQdhNDD_3((ADDRESS *)&Z348, &Z317, (LONGINT)sizeof (Z195));
return FALSE;
}
do {
if (Z343 > Z186) {
Z343 = Z222.A[Z343 - 189];
}
if (Z343 <= Z188) {
ZarQdhNDD_3((ADDRESS *)&Z348, &Z317, (LONGINT)sizeof (Z195));
return TRUE;
} else {
DEC1(Z318, Z219.A[Z343 - 101]);
Z347 = Z220.A[Z343 - 101];
}
Z343 = Z201(Z348->A[Z318], Z347);
INC(Z318);
if (Z318 >= Z317) {
ZarQdhNDD_2((ADDRESS *)&Z348, &Z317, (LONGINT)sizeof (Z195));
}
} while (!(Z343 < Z193));
} EXIT_6:;
}

static void Z349
# ifdef HAVE_ARGS
(Z195 Z343, ZpmCQ_4 *Z320)
# else
(Z343, Z320)
Z195 Z343;
ZpmCQ_4 *Z320;
# endif
{
Z198 Z316;
Z195 Z344;

ZpmCQ_32(Z320);
for (Z316 = Z173; Z316 <= Z174; Z316 += 1) {
Z344 = Z201(Z343, Z316);
if (Z344 != Z168 && Z344 <= Z188) {
ZpmCQ_13(Z320, (LONGCARD)Z316);
}
}
}

static void Z341
# ifdef HAVE_ARGS
(LONGINT Z317, LONGINT Z318, ZpmCQ_4 *Z322)
# else
(Z317, Z318, Z322)
LONGINT Z317;
LONGINT Z318;
ZpmCQ_4 *Z322;
# endif
{
Z207 Z348;
LONGINT Z343;
Z198 Z347;
ZpmCQ_4 Z320;

ZarQdhNDD_0((ADDRESS *)&Z348, &Z317, (LONGINT)sizeof (Z195));
{
LONGINT B_7 = 0, B_8 = Z318;

if (B_7 <= B_8)
for (Z343 = B_7;; Z343 += 1) {
Z348->A[Z343] = Z243->A[Z343];
if (Z343 >= B_8) break;
}
}
ZpmCQ_5(&Z320, (LONGCARD)Z174);
ZpmCQ_32(Z322);
Z343 = Z348->A[Z318];
for (;;) {
if (Z318 >= Z317) {
ZarQdhNDD_2((ADDRESS *)&Z348, &Z317, (LONGINT)sizeof (Z195));
}
Z348->A[Z318] = Z343;
Z349((Z195)Z343, &Z320);
ZpmCQ_8(Z322, Z320);
Z343 = Z201((Z195)Z343, Z221.A[Z343]);
if (Z343 >= Z193) {
if (Z343 <= Z184) {
INC(Z318);
Z343 = Z223.A[Z343 - 70];
}
for (;;) {
if (Z343 > Z186) {
Z343 = Z222.A[Z343 - 189];
}
if (Z185 <= Z343 && Z343 <= Z188) {
ZarQdhNDD_3((ADDRESS *)&Z348, &Z317, (LONGINT)sizeof (Z195));
ZpmCQ_7(&Z320);
return;
} else if (Z343 < Z193) {
INC(Z318);
goto EXIT_8;
} else {
DEC1(Z318, Z219.A[Z343 - 101]);
Z347 = Z220.A[Z343 - 101];
}
Z343 = Z201(Z348->A[Z318], Z347);
INC(Z318);
if (Z343 < Z193) {
goto EXIT_8;
}
} EXIT_8:;
} else {
INC(Z318);
}
} EXIT_7:;
}

static Z195 Z201
# ifdef HAVE_ARGS
(Z195 Z343, Z198 Z351)
# else
(Z343, Z351)
Z195 Z343;
Z198 Z351;
# endif
{
Z204 Z352;
Z205 Z353;
Z206 Z354;

if (Z351 <= Z174) {
for (;;) {
Z352 = (Z204)(Z212.A[Z343] + Z351 * sizeof (Z199));
if (Z352->Y0 == Z343) {
return Z352->Y1;
}
Z343 = Z214.A[Z343];
if (Z343 == Z168) {
return Z168;
}
} EXIT_9:;
} else {
for (;;) {
Z354 = (Z206)(Z213.A[Z343] + Z351 * sizeof (Z203));
if (Z354->Y0 == Z343) {
return Z354->Y1;
}
Z343 = Z215.A[Z343];
} EXIT_10:;
}
}

static void Z356
# ifdef HAVE_ARGS
(LONGCARD Z357)
# else
(Z357)
LONGCARD Z357;
# endif
{
Z212.A[Z355] = ADR (Z216.A[Z357]);
INC(Z355);
}

static void Z358
# ifdef HAVE_ARGS
(LONGCARD Z357)
# else
(Z357)
LONGCARD Z357;
# endif
{
Z213.A[Z355] = ADR (Z218.A[Z357 + Z174 + 1 - 36]) - (Z174 + 1) * sizeof (Z203);
INC(Z355);
}

static void Z359
# ifdef HAVE_ARGS
(LONGCARD Z357)
# else
(Z357)
LONGCARD Z357;
# endif
{
Z214.A[Z355] = Z357;
INC(Z355);
}

static void Z360
# ifdef HAVE_ARGS
(LONGCARD Z357)
# else
(Z357)
LONGCARD Z357;
# endif
{
Z215.A[Z355] = Z357;
INC(Z355);
}

static void Z361
# ifdef HAVE_ARGS
(LONGCARD Z357)
# else
(Z357)
LONGCARD Z357;
# endif
{
if (!ODD(Z355)) {
Z216.A[Z355 / 2].Y0 = Z357;
} else {
Z216.A[Z355 / 2].Y1 = Z357;
}
INC(Z355);
}

static void Z362
# ifdef HAVE_ARGS
(LONGCARD Z357)
# else
(Z357)
LONGCARD Z357;
# endif
{
Z217.A[Z355 - 36] = Z357;
INC(Z355);
}

static void Z363
# ifdef HAVE_ARGS
(LONGCARD Z357)
# else
(Z357)
LONGCARD Z357;
# endif
{
if (!ODD(Z355)) {
Z218.A[Z355 / 2 - 36].Y0 = Z357;
} else {
Z218.A[Z355 / 2 - 36].Y1 = Z357;
}
INC(Z355);
}

static void Z364
# ifdef HAVE_ARGS
(LONGCARD Z357)
# else
(Z357)
LONGCARD Z357;
# endif
{
Z219.A[Z355 - 101] = Z357;
INC(Z355);
}

static void Z365
# ifdef HAVE_ARGS
(LONGCARD Z357)
# else
(Z357)
LONGCARD Z357;
# endif
{
Z220.A[Z355 - 101] = Z357;
INC(Z355);
}

static void Z366
# ifdef HAVE_ARGS
(LONGCARD Z357)
# else
(Z357)
LONGCARD Z357;
# endif
{
Z221.A[Z355] = Z357;
INC(Z355);
}

static void Z367
# ifdef HAVE_ARGS
(LONGCARD Z357)
# else
(Z357)
LONGCARD Z357;
# endif
{
Z222.A[Z355 - 189] = Z357;
INC(Z355);
}

static void Z368
# ifdef HAVE_ARGS
(LONGCARD Z357)
# else
(Z357)
LONGCARD Z357;
# endif
{
Z223.A[Z355 - 70] = Z357;
INC(Z355);
}

static void Z369
 ARGS ((void))
{
Zmfy8_1 Z370;

Z370 = Z356;
Z355 = 1;
Zmfy8_9(Z370, (STRING)"a3+`E+++++Z1YCB\\,^Q]3V9WLW?W>WN>_?WO+`-\\E^9W6CX=YDX;]KW1", 56L, 33L);
Zmfy8_9(Z370, (STRING)"Y++ZEZIZ/V1,W7VI+XAVI+WHX;VOV0B/2[@+VDVS+1+VHS^QVQIYBX=", 55L, 34L);
Zmfy8_9(Z370, (STRING)"W3-", 3L, 2L);
Z370 = Z358;
Z355 = 1;
Zmfy8_9(Z370, (STRING)"+++LN@GCNKLRV-EH+++++KLF++F+V,+V.+++2OV->+LV0++++++,/O?", 55L, 50L);
Zmfy8_9(Z370, (STRING)"+L+++++V0FRK+@-V6AC+1", 21L, 19L);
Z370 = Z359;
Z355 = 1;
Zmfy8_9(Z370, (STRING)"+++:::::++++7++????+VB+VCD++?++VE++++++++@++++++VFV@V@+", 55L, 49L);
Zmfy8_9(Z370, (STRING)"+++VA++++VB+VB+++V0++++V@", 25L, 20L);
Z370 = Z360;
Z355 = 1;
Zmfy8_9(Z370, (STRING)"+++++++++++++++++++++++++++++++++++++++++++++VFV1V6++++", 55L, 52L);
Zmfy8_9(Z370, (STRING)"+++++++++++V1++++V6", 19L, 17L);
Z370 = Z361;
Z355 = 0;
Zmfy8_9(Z370, (STRING)"-W<++V,V/SXNV8VAVFXTVFXTV5XPV5XRV8Y=V6XTV8Y=NX>NX>NX>NX>", 56L, 32L);
Zmfy8_9(Z370, (STRING)"NX>NX>NX>NX>NX>NX>NX>6XKNX>GLV4V>NX>NX>NX>NX>NX>V<W:V<Y9", 56L, 36L);
Zmfy8_9(Z370, (STRING)"V<Y9NX>GX-GX-GX-GX-GX-GX-GX-?W;V?VD?VOGX-6XKGX-GVQ6XKGX-", 56L, 36L);
Zmfy8_9(Z370, (STRING)"GX-GX-GX-GX-GX-VBW/VBW0GX-RX:RX:RX:RX:RX:RX:RX:RX:RX:RX:", 56L, 36L);
Zmfy8_9(Z370, (STRING)"RX:V>XMRX:V3W9V3Y:V3Y:V9W5RX:RX:RX::Y>V3V<:Y>RX:V+X3V+X3", 56L, 32L);
Zmfy8_9(Z370, (STRING)"V+X3V+X3V+X3V+X3V+X3VAXTVEXLV:W4V+X3V>XMV+X3V.VTV>XMV+X3", 56L, 28L);
Zmfy8_9(Z370, (STRING)"V+X3V+X3V+X3V+X3V+V.V2Y;V2Y;V+X3TX1TX1TX1TX1TX1TX1TX1LVR", 56L, 32L);
Zmfy8_9(Z370, (STRING)"VEW;V0XTTX1VEXLTX1FVJV0XTTX1TX1TX1TX1TX1TV-=VM<VLTX1AX7", 55L, 34L);
Zmfy8_9(Z370, (STRING)"AX7AX7AX7AX7AX7AX7AX7AX7AX7AX7;VKAX7>VNV1XTVDXQVDXQAX7A", 55L, 35L);
Zmfy8_9(Z370, (STRING)"X7AX7VDXQV1XTVDXQAX7HX5HX5HX5HX5HX5HX5HX5HW.HW,HW-HX5VD", 55L, 34L);
Zmfy8_9(Z370, (STRING)"XQHW+JVHVDXQVDXQVDXQHX5HX5HX5V-VSVDXQ++HX5MX0MX0MX0MX0M", 55L, 34L);
Zmfy8_9(Z370, (STRING)"X0MX0MX0++++++MX0VCY>MX0IXI++MX0MX0MX0MX0MX0MQ++++MX05X6", 56L, 41L);
Zmfy8_9(Z370, (STRING)"5X65X65X65X65X65X65X65X65X65X6VCY>5X6++VCY>++IXI5X65X65", 55L, 37L);
Zmfy8_9(Z370, (STRING)"X6++++++5X64WS4WS4WS4WS4WS4WS4WS++OXH++4WSQT4WS++QV+4WS", 55L, 41L);
Zmfy8_9(Z370, (STRING)"4WS4WS4WS4WS++++++4WSPXFPXFPXFPXFPXFPXFPXF++++++PXFOSPXF", 56L, 42L);
Zmfy8_9(Z370, (STRING)"++++PXF++PXFPXFPXFPW1++++PXFV7Y+V7Y+V7W2V7W3V7V@V7Y+V7Y+", 56L, 36L);
Zmfy8_9(Z370, (STRING)"V7Y+V7Y+++++++++++++++++++++++V7Y+++++V7Y+V7Y+V7Y++++++", 55L, 43L);
Zmfy8_9(Z370, (STRING)"+++V7Y+7WF7WF7WF7WF7WF7WF7WF++++++7WF++7WF++++7VIDJ7WF7", 55L, 42L);
Zmfy8_9(Z370, (STRING)"WF7WF++++++7WF++DWIDWIDWIDWIDWIDWIDWI++++++DWI++DWI++++", 55L, 43L);
Zmfy8_9(Z370, (STRING)"++++DWIDWIDWI++++++DWI9XC9XC9XC9XC9XC9XC9XC++++++9XC++9", 55L, 43L);
Zmfy8_9(Z370, (STRING)"XC++++9XC++9XC9XC9XC++++++9XCKXBKXBKXBKXBKXBKXBKXB+++++", 55L, 42L);
Zmfy8_9(Z370, (STRING)"+KXB++KXB++++KP++KXBKXBKXB++++++KXBEXDEXDEXDEXDEXDEXDEXD", 56L, 43L);
Zmfy8_9(Z370, (STRING)"++++++EXD++EXD++++EXD++EXDEXDEXDV@V0++V@V1EXD8WH8WH8WH8", 55L, 41L);
Zmfy8_9(Z370, (STRING)"WH8WH8WH8WH++++++8WHV@V28WH++V@W8V@W6V@W78WH8WH8WH++V@V3", 56L, 37L);
Zmfy8_9(Z370, (STRING)"++8WH@WR@WR@WR@WR@WR@WR@WR++++++@WR++@VP++++++++@WR@WR@", 55L, 43L);
Zmfy8_9(Z370, (STRING)"WR++++++@WRCWGCWGCWGCWGCWGCWGCWG++++++CWG++CWG++++++++C", 55L, 44L);
Zmfy8_9(Z370, (STRING)"WGCWGCWG++++++CWG./.0.1.2.3.4.5++++++.6++.VG++++++++.7.", 55L, 50L);
Zmfy8_9(Z370, (STRING)"8.9++++++.:,W>,W>,W>,W>,W>,W>,W>++++++,W>++,W>++++++++,", 55L, 46L);
Zmfy8_9(Z370, (STRING)"W>,W>,W>++++++,W>", 17L, 13L);
Z370 = Z362;
Z355 = Z174 + 1;
Z370 = Z363;
Z355 = (Z174 + 1) * 2;
Zmfy8_9(Z370, (STRING)"++,-,..W@.WA++.WB.WC++++++++.WD++++HX8HNMWTMX+.WE++++++", 55L, 46L);
Zmfy8_9(Z370, (STRING)".W=++++++++++V/V4++++V6XSV6V6V6V7VFXOV1V8++VFV5V0V9VAY<", 55L, 36L);
Zmfy8_9(Z370, (STRING)"PXEV1V:4@7C5A9EAHEK8D@GRX?GMNRVDVFV@Y.V3V=V=Y76BV>VC1=VC", 56L, 41L);
Zmfy8_9(Z370, (STRING)"VEV<VB3?V5V?V;Y4BI2>:FIOOXJVBY8/;V2V;0<SV,+++++++++++++", 55L, 42L);
Zmfy8_9(Z370, (STRING)"+++++++++++++++++++++", 21L, 21L);
Z370 = Z364;
Z355 = Z185;
Zmfy8_9(Z370, (STRING)"--+-------,-,-.,......-+//-+,-+-/-/.++---,,,+-,,.++.+,/", 55L, 55L);
Zmfy8_9(Z370, (STRING)"+-+2++0,++-+,--...,,,.-../+++.,+-", 33L, 33L);
Z370 = Z365;
Z355 = Z185;
Zmfy8_9(Z370, (STRING)"OPQQQQQQQQRRSSTTV+V+V+V+V+V+V,V-V-V-V-V.V.V.V/V/V/V0V0V1", 56L, 36L);
Zmfy8_9(Z370, (STRING)"V2V3V3V3V4V5V5V5V6V6V7V7V8V9V:V:V;V;V<V=V=V>V?V@VAVBVBVC", 56L, 28L);
Zmfy8_9(Z370, (STRING)"VDVEVEVFVFVFVFVGVGVGVGVGVGVGVGVGVGVHVIVJVKVKVLVL", 48L, 24L);
Z370 = Z366;
Z355 = 1;
Zmfy8_9(Z370, (STRING)"7+ACCCCC77+777CEEEEE77+777E77+F7D77+7D7-77-GD.//FE....4", 55L, 55L);
Zmfy8_9(Z370, (STRING)"46GEG+/E/G+.+.", 14L, 14L);
Z370 = Z367;
Z355 = Z186 + 1;
Zmfy8_9(Z370, (STRING)"", 1L, 0L);
Z370 = Z368;
Z355 = Z183;
Zmfy8_9(Z370, (STRING)"W?WJWKWLWMWNWOWPWQX,X.X/X2X4X9X;X<X=X@XAXGY,Y-Y/Y0Y1Y2Y3", 56L, 28L);
Zmfy8_9(Z370, (STRING)"Y5Y6Y?", 6L, 3L);
}

void ZmfDOBA_41
 ARGS ((void))
{
Z160 = Zfb3DLQ_1;
Z159 = 0;
Z161 = TRUE;
Z162 = FALSE;
Zp1PEAFD_13((STRING)"BEGIN", 5L, &Z158);
Z163 = Zfb3DLQ_2(&Z158);
Zp1PEAFD_13((STRING)"CLOSE", 5L, &Z158);
Z163 = Zfb3DLQ_2(&Z158);
Zp1PEAFD_13((STRING)"DECLARE", 7L, &Z158);
Z163 = Zfb3DLQ_2(&Z158);
Zp1PEAFD_13((STRING)"DEMAND", 6L, &Z158);
Z163 = Zfb3DLQ_2(&Z158);
Zp1PEAFD_13((STRING)"END", 3L, &Z158);
Z163 = Zfb3DLQ_2(&Z158);
Zp1PEAFD_13((STRING)"EVAL", 4L, &Z158);
Z163 = Zfb3DLQ_2(&Z158);
Zp1PEAFD_13((STRING)"EXPORT", 6L, &Z158);
Z163 = Zfb3DLQ_2(&Z158);
Zp1PEAFD_13((STRING)"FOR", 3L, &Z158);
Z163 = Zfb3DLQ_2(&Z158);
Zp1PEAFD_13((STRING)"FUNCTION", 8L, &Z158);
Z163 = Zfb3DLQ_2(&Z158);
Zp1PEAFD_13((STRING)"GLOBAL", 6L, &Z158);
Z163 = Zfb3DLQ_2(&Z158);
Zp1PEAFD_13((STRING)"IGNORE", 6L, &Z158);
Z163 = Zfb3DLQ_2(&Z158);
Zp1PEAFD_13((STRING)"IMPORT", 6L, &Z158);
Z163 = Zfb3DLQ_2(&Z158);
Zp1PEAFD_13((STRING)"IN", 2L, &Z158);
Z163 = Zfb3DLQ_2(&Z158);
Zp1PEAFD_13((STRING)"INH", 3L, &Z158);
Z163 = Zfb3DLQ_2(&Z158);
Zp1PEAFD_13((STRING)"INHERITED", 9L, &Z158);
Z163 = Zfb3DLQ_2(&Z158);
Zp1PEAFD_13((STRING)"INPUT", 5L, &Z158);
Z163 = Zfb3DLQ_2(&Z158);
Zp1PEAFD_13((STRING)"LEFT", 4L, &Z158);
Z163 = Zfb3DLQ_2(&Z158);
Zp1PEAFD_13((STRING)"LOCAL", 5L, &Z158);
Z163 = Zfb3DLQ_2(&Z158);
Zp1PEAFD_13((STRING)"MODULE", 6L, &Z158);
Z163 = Zfb3DLQ_2(&Z158);
Zp1PEAFD_13((STRING)"NONE", 4L, &Z158);
Z163 = Zfb3DLQ_2(&Z158);
Zp1PEAFD_13((STRING)"OUT", 3L, &Z158);
Z163 = Zfb3DLQ_2(&Z158);
Zp1PEAFD_13((STRING)"OUTPUT", 6L, &Z158);
Z163 = Zfb3DLQ_2(&Z158);
Zp1PEAFD_13((STRING)"PARSER", 6L, &Z158);
Z163 = Zfb3DLQ_2(&Z158);
Zp1PEAFD_13((STRING)"PREC", 4L, &Z158);
Z163 = Zfb3DLQ_2(&Z158);
Zp1PEAFD_13((STRING)"PROPERTY", 8L, &Z158);
Z163 = Zfb3DLQ_2(&Z158);
Zp1PEAFD_13((STRING)"REV", 3L, &Z158);
Z163 = Zfb3DLQ_2(&Z158);
Zp1PEAFD_13((STRING)"REVERSE", 7L, &Z158);
Z163 = Zfb3DLQ_2(&Z158);
Zp1PEAFD_13((STRING)"RIGHT", 5L, &Z158);
Z163 = Zfb3DLQ_2(&Z158);
Zp1PEAFD_13((STRING)"RULE", 4L, &Z158);
Z163 = Zfb3DLQ_2(&Z158);
Zp1PEAFD_13((STRING)"SCANNER", 7L, &Z158);
Z163 = Zfb3DLQ_2(&Z158);
Zp1PEAFD_13((STRING)"SELECT", 6L, &Z158);
Z163 = Zfb3DLQ_2(&Z158);
Zp1PEAFD_13((STRING)"STACK", 5L, &Z158);
Z163 = Zfb3DLQ_2(&Z158);
Zp1PEAFD_13((STRING)"START", 5L, &Z158);
Z163 = Zfb3DLQ_2(&Z158);
Zp1PEAFD_13((STRING)"SUBUNIT", 7L, &Z158);
Z163 = Zfb3DLQ_2(&Z158);
Zp1PEAFD_13((STRING)"SYN", 3L, &Z158);
Z163 = Zfb3DLQ_2(&Z158);
Zp1PEAFD_13((STRING)"SYNTHESIZED", 11L, &Z158);
Z163 = Zfb3DLQ_2(&Z158);
Zp1PEAFD_13((STRING)"THREAD", 6L, &Z158);
Z163 = Zfb3DLQ_2(&Z158);
Zp1PEAFD_13((STRING)"TREE", 4L, &Z158);
Z163 = Zfb3DLQ_2(&Z158);
Zp1PEAFD_13((STRING)"VIEW", 4L, &Z158);
Z163 = Zfb3DLQ_2(&Z158);
Zp1PEAFD_13((STRING)"VIRTUAL", 7L, &Z158);
Z163 = Zfb3DLQ_2(&Z158);
Zp1PEAFD_13((STRING)"VOID", 4L, &Z158);
Z163 = Zfb3DLQ_2(&Z158);
Z163 = Zfb3DLQ_6();
}

void ZmfDOBA_44
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
BEGIN_Scanner ();
BEGIN_Strings ();
BEGIN_StringM ();
BEGIN_Pointers ();
BEGIN_IO ();
BEGIN_StdIO ();
BEGIN_Idents ();
BEGIN_Lists ();

Z369();
ZmfDOBA_40 = FALSE;
Z224.A[1 - 1] = 132;
}
