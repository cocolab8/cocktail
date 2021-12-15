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

#ifndef DEFINITION_Strings
#include "Strings.h"
#endif

#ifndef DEFINITION_StringM
#include "StringM.h"
#endif

#ifndef DEFINITION_Idents
#include "Idents.h"
#endif

#ifndef DEFINITION_Texts
#include "Texts.h"
#endif

#ifndef DEFINITION_IO
#include "IO.h"
#endif

#ifndef DEFINITION_StdIO
#include "StdIO.h"
#endif

#ifndef DEFINITION_Errors
#include "Errors.h"
#endif

#ifndef DEFINITION_DefTable
#include "DefTable.h"
#endif

#ifndef DEFINITION_Parser
#include "Parser.h"
#endif

BOOLEAN ZmfDOBA_46;

#define Z150	10
#define Z151	11
#define Z152	12
#define Z153	3
#define Y1_154	7
typedef struct S_1 {
Zpky9FDA_0 Y0;
} Z155;
static Zp1PEAFD_2 Z158;
static Zfb3DLQ_0 Z159;
static Zae5ojx8B_1 Z160;
static BOOLEAN Z161;
static ZqnGVQ_0 Z162, Z163, Z164, Z165, Z166, Z167, Z168, Z169;
static void Z170 ARGS ((CHAR Z171, BOOLEAN Z172));
#define Z173	0
#define Z174	0
#define Z175	1
#define Z176	2
#define Z177	3
#define Z178	0
#define Z179	41
#define Z180	42
#define Z181	0
#define Z182	87
#define Z183	375
#define Z184	142
#define Z185	1
#define Z186	1
#define Z187	73
#define Z188	74
#define Z189	107
#define Z190	108
#define Z191	196
#define Z192	196
#define Z193	108
#define Z194	73
#define Z195	73
#define Z196	42
#define Z197	142
#define Z198	Z188
typedef SHORTCARD Z199;
typedef Z199 Z200;
typedef Z199 Z201;
typedef Z199 Z202;
typedef Z199 Z203;
typedef struct S_2 {
Z200 Y0, Y1;
} Z204;
typedef Z200 Z207;
typedef Z204 Z208;
typedef Z204 *Z209;
typedef Z207 *Z210;
typedef Z208 *Z211;
typedef struct S_23 {
Z200 A[1000000 + 1];
} *Z212;
typedef struct S_3 {
BITSET Y0;
BOOLEAN Y1, Y2;
} Z213;
static struct S_4 {
ADDRESS A[Z187 + 1];
} Z217;
static struct S_5 {
ADDRESS A[Z187 + 1];
} Z218;
static struct S_6 {
Z200 A[Z194 + 1];
} Z219;
static struct S_7 {
Z200 A[Z195 + 1];
} Z220;
static struct S_8 {
Z204 A[Z183 + 1];
} Z221;
static struct S_9 {
Z207 A[Z196 - (Z179 + 1) + 1];
} Z222;
static struct S_10 {
Z208 A[Z197 - (Z179 + 1) + 1];
} Z223;
static struct S_11 {
Z199 A[Z191 - Z190 + 1];
} Z224;
static struct S_12 {
Z203 A[Z191 - Z190 + 1];
} Z225;
static struct S_13 {
Z203 A[Z187 + 1];
} Z226;
static struct S_14 {
Z200 A[Z192 + 1 - (Z191 + 1) + 1];
} Z227;
static struct S_15 {
Z202 A[Z189 + 1 - Z188 + 1];
} Z228;
static struct S_16 {
SHORTCARD A[Z193 - Z189 - 1 + 1];
} Z229;
static Z213 Z230;
static void Z236 ARGS ((CHAR Z237[], LONGCARD O_3, CHAR Z238[], LONGCARD O_2));
static Z199 Z244;
static LONGINT Z245;
static LONGINT Z246;
static Z199 Z247;
static Z212 Z248;
static struct S_17 {
Z155 A[100000 + 1];
} *Z249;
struct S_1_yyParse;
static INTEGER Z255 ARGS ((Z200 Z251, Z203 Z258, CARDINAL Z259));
struct S_19 {
CHAR A[127 + 1];
};
static void Z271 ARGS ((struct S_1_yyParse *link));
static void Z273 ARGS ((void));
static void Z274 ARGS ((struct S_1_yyParse *link));
static void Z275 ARGS ((void));
struct S_1_yyParse {
Z200 *Z260;
Z203 *Z261;
BOOLEAN *Z269;
CARDINAL *Z252;
};
static Z203 Z277 ARGS ((Z203 Z330, LONGINT Z331, LONGINT Z332));
struct S_18 {
CHAR A[127 + 1];
};
static void Z346 ARGS ((LONGINT Z331, LONGINT Z332, ZpmCQ_4 *Z334));
static BOOLEAN Z360 ARGS ((Z203 Z330, LONGINT Z331, LONGINT Z332));
static void Z364 ARGS ((Z200 Z358, ZpmCQ_4 *Z334));
static void Z356 ARGS ((LONGINT Z331, LONGINT Z332, ZpmCQ_4 *Z336));
static Z200 Z206 ARGS ((Z200 Z358, Z203 Z366));
static CARDINAL Z370;
static void Z371 ARGS ((LONGCARD Z372));
static void Z373 ARGS ((LONGCARD Z372));
static void Z374 ARGS ((LONGCARD Z372));
static void Z375 ARGS ((LONGCARD Z372));
static void Z376 ARGS ((LONGCARD Z372));
static void Z377 ARGS ((LONGCARD Z372));
static void Z378 ARGS ((LONGCARD Z372));
static void Z379 ARGS ((LONGCARD Z372));
static void Z380 ARGS ((LONGCARD Z372));
static void Z381 ARGS ((LONGCARD Z372));
static void Z382 ARGS ((LONGCARD Z372));
static void Z383 ARGS ((LONGCARD Z372));
static void Z384 ARGS ((void));

static void Z170
# ifdef HAVE_ARGS
(CHAR Z171, BOOLEAN Z172)
# else
(Z171, Z172)
CHAR Z171;
BOOLEAN Z172;
# endif
{
if ('A' <= Z171 && Z171 <= 'Z' || 'a' <= Z171 && Z171 <= 'z' || '0' <= Z171 && Z171 <= '9') {
Zp1BbM_18(Z171);
} else {
switch (Z171) {
case '\n':;
Zp1BbM_23((STRING)"\\n", 2L);
break;
case '\t':;
Zp1BbM_23((STRING)"\\t", 2L);
break;
case ((CHAR)'\13'):;
Zp1BbM_23((STRING)"\\v", 2L);
break;
case '\b':;
Zp1BbM_23((STRING)"\\b", 2L);
break;
case '\r':;
Zp1BbM_23((STRING)"\\r", 2L);
break;
case '\f':;
Zp1BbM_23((STRING)"\\f", 2L);
break;
case '"':;
Zp1BbM_23((STRING)"\\\"", 2L);
break;
case ']':;
Zp1BbM_23((STRING)"\\]", 2L);
break;
case '.':;
Zp1BbM_23((STRING)"\\.", 2L);
break;
case '^':;
Zp1BbM_23((STRING)"\\^", 2L);
break;
case '-':;
Zp1BbM_23((STRING)"\\-", 2L);
break;
case '\\':;
Zp1BbM_23((STRING)"\\\\", 2L);
break;
default:
if (Z172) {
Zp1BbM_18(Z171);
} else {
Zp1BbM_18('"');
Zp1BbM_18(Z171);
Zp1BbM_18('"');
}
break;
}
}
}

static void Z236
# ifdef HAVE_ARGS
(CHAR Z237[], LONGCARD O_3, CHAR Z238[], LONGCARD O_2)
# else
(Z237, O_3, Z238, O_2)
CHAR Z237[];
LONGCARD O_3;
CHAR Z238[];
LONGCARD O_2;
# endif
{
CARDINAL Z239, Z240;
OPEN_ARRAY_LOCALS

ALLOC_OPEN_ARRAYS (O_3 * sizeof (CHAR), 1)
COPY_OPEN_ARRAY (Z237, O_3, CHAR)
if ((O_3 - 1) < (O_2 - 1)) {
Z240 = (O_3 - 1);
} else {
Z240 = (O_2 - 1);
}
{
LONGCARD B_1 = 0, B_2 = Z240;

if (B_1 <= B_2)
for (Z239 = B_1;; Z239 += 1) {
Z238[Z239] = Z237[Z239];
if (Z239 >= B_2) break;
}
}
if ((O_2 - 1) > Z240) {
Z238[Z240 + 1] = CHR(0);
}
FREE_OPEN_ARRAYS
}

void ZmfDOBA_51
# ifdef HAVE_ARGS
(CARDINAL Z232, CHAR Z233[], LONGCARD O_1)
# else
(Z232, Z233, O_1)
CARDINAL Z232;
CHAR Z233[];
LONGCARD O_1;
# endif
{
Zp1PEAFD_2 Z234, Z235;

switch (Z232) {
case 0:;
Z236((STRING)"_EOF_", 5L, Z233, O_1);
break;
case 1:;
Z236((STRING)"Ident", 5L, Z233, O_1);
break;
case 2:;
Z236((STRING)"Number", 6L, Z233, O_1);
break;
case 3:;
Z236((STRING)"String", 6L, Z233, O_1);
break;
case 4:;
Z236((STRING)"Char", 4L, Z233, O_1);
break;
case 5:;
Z236((STRING)"TargetCode", 10L, Z233, O_1);
break;
case 37:;
Z236((STRING)"SCANNER", 7L, Z233, O_1);
break;
case 39:;
Z236((STRING)"IMPORT", 6L, Z233, O_1);
break;
case 32:;
Z236((STRING)"EXPORT", 6L, Z233, O_1);
break;
case 6:;
Z236((STRING)"GLOBAL", 6L, Z233, O_1);
break;
case 31:;
Z236((STRING)"LOCAL", 5L, Z233, O_1);
break;
case 7:;
Z236((STRING)"BEGIN", 5L, Z233, O_1);
break;
case 8:;
Z236((STRING)"CLOSE", 5L, Z233, O_1);
break;
case 34:;
Z236((STRING)"EOF", 3L, Z233, O_1);
break;
case 36:;
Z236((STRING)"DEFAULT", 7L, Z233, O_1);
break;
case 38:;
Z236((STRING)"CHARACTER_SET", 13L, Z233, O_1);
break;
case 9:;
Z236((STRING)"DEFINE", 6L, Z233, O_1);
break;
case 10:;
Z236((STRING)"START", 5L, Z233, O_1);
break;
case 11:;
Z236((STRING)"RULES", 5L, Z233, O_1);
break;
case 30:;
Z236((STRING)"NOT", 3L, Z233, O_1);
break;
case 12:;
Z236((STRING)".", 1L, Z233, O_1);
break;
case 13:;
Z236((STRING)",", 1L, Z233, O_1);
break;
case 14:;
Z236((STRING)"=", 1L, Z233, O_1);
break;
case 15:;
Z236((STRING)":", 1L, Z233, O_1);
break;
case 35:;
Z236((STRING)":-", 2L, Z233, O_1);
break;
case 33:;
Z236((STRING)"#", 1L, Z233, O_1);
break;
case 16:;
Z236((STRING)"/", 1L, Z233, O_1);
break;
case 17:;
Z236((STRING)"|", 1L, Z233, O_1);
break;
case 18:;
Z236((STRING)"+", 1L, Z233, O_1);
break;
case 19:;
Z236((STRING)"-", 1L, Z233, O_1);
break;
case 20:;
Z236((STRING)"*", 1L, Z233, O_1);
break;
case 21:;
Z236((STRING)"?", 1L, Z233, O_1);
break;
case 22:;
Z236((STRING)"(", 1L, Z233, O_1);
break;
case 23:;
Z236((STRING)")", 1L, Z233, O_1);
break;
case 24:;
Z236((STRING)"[", 1L, Z233, O_1);
break;
case 25:;
Z236((STRING)"]", 1L, Z233, O_1);
break;
case 26:;
Z236((STRING)"{", 1L, Z233, O_1);
break;
case 27:;
Z236((STRING)"}", 1L, Z233, O_1);
break;
case 28:;
Z236((STRING)"<", 1L, Z233, O_1);
break;
case 29:;
Z236((STRING)">", 1L, Z233, O_1);
break;
default:
Zp1PEAFD_13((STRING)"unknown ", 8L, &Z234);
Zp1PEAFD_18((LONGINT)Z232, &Z235);
Zp1PEAFD_5(&Z234, &Z235);
Zp1PEAFD_14(&Z234, Z233, O_1);
break;
}
}

CARDINAL ZmfDOBA_48
 ARGS ((void))
{
return ZmfDOBA_49(Z185);
}

CARDINAL ZmfDOBA_49
# ifdef HAVE_ARGS
(SHORTCARD Z251)
# else
(Z251)
SHORTCARD Z251;
# endif
{
CARDINAL Z252;

ZmfDOBA_47();
Z245 = 100;
Z246 = 100;
ZarQdhNDD_0((ADDRESS *)&Z248, &Z245, (LONGINT)sizeof (Z200));
ZarQdhNDD_0((ADDRESS *)&Z249, &Z246, (LONGINT)sizeof (Z155));
Z247 = Z245 - 1;
Z244 = 0;
Z230.Y0 = SET_ELEM (Z174);
Z230.Y1 = TRUE;
Z230.Y2 = TRUE;
Z252 = Z255(Z251, (Z203)Zpky9FDA_9(), (LONGCARD)Z229.A[Z251 - 1]);
ZarQdhNDD_3((ADDRESS *)&Z248, &Z245, (LONGINT)sizeof (Z199));
ZarQdhNDD_3((ADDRESS *)&Z249, &Z246, (LONGINT)sizeof (Z155));
return Z252;
}

static void Z271
# ifdef HAVE_ARGS
(struct S_1_yyParse *link)
# else
(link)
struct S_1_yyParse *link;
# endif
{
*link->Z260 = Z227.A[(Z199)(*link->Z260) - 197];
INC(Z244);
Z249->A[Z244].Y0 = Zpky9FDA_5;
*link->Z261 = Zpky9FDA_9();
*link->Z269 = FALSE;
}

static void Z273
 ARGS ((void))
{
}

static void Z274
# ifdef HAVE_ARGS
(struct S_1_yyParse *link)
# else
(link)
struct S_1_yyParse *link;
# endif
{
INC(*link->Z252);
}

static void Z275
 ARGS ((void))
{
ZarQdhNDD_2((ADDRESS *)&Z248, &Z245, (LONGINT)sizeof (Z200));
ZarQdhNDD_2((ADDRESS *)&Z249, &Z246, (LONGINT)sizeof (Z155));
Z247 = Z245 - 1;
}

static INTEGER Z255
# ifdef HAVE_ARGS
(Z200 Z251, Z203 Z258, CARDINAL Z259)
# else
(Z251, Z258, Z259)
Z200 Z251;
Z203 Z258;
CARDINAL Z259;
# endif
{
Z200 Z260;
Z203 Z261;
Z203 Z262;
Z155 Z263;
Zpky9FDA_0 Z264;
Z203 Z265;
Z200 Z266;
Z209 Z267;
Z211 Z268;
BOOLEAN Z269;
CARDINAL Z252;
struct S_19 Z270;
struct S_1_yyParse frame;

frame.Z260 = &Z260;
frame.Z261 = &Z261;
frame.Z269 = &Z269;
frame.Z252 = &Z252;
Z260 = Z251;
Z261 = Z258;
Z252 = 0;
Z269 = FALSE;
for (;;) {
for (;;) {
if (Z244 >= Z247) {
Z275();
}
Z248->A[Z244] = Z260;
for (;;) {
Z267 = (Z209)(Z217.A[Z260] + Z261 * sizeof (Z204));
if (Z267->Y0 == Z260) {
Z260 = Z267->Y1;
goto EXIT_3;
}
Z260 = Z219.A[Z260];
if (Z260 == Z173) {
goto EXIT_3;
}
} EXIT_3:;
if (Z260 == Z173 || Z269 && Z260 >= Z190) {
if (Z260 == Z173 && !Z269) {
INC(Z252);
Z261 = Z277(Z261, Z245, (LONGINT)Z244);
Z269 = TRUE;
Z260 = Z248->A[Z244];
goto EXIT_2;
}
Z260 = Z248->A[Z244];
Z265 = Z226.A[Z260];
Z260 = Z206(Z260, Z265);
if (Z260 > Z191) {
Z260 = Z227.A[(Z199)Z260 - 197];
}
if (Z260 <= Z189) {
Zpky9FDA_1((LONGCARD)Z265, &Z264);
if (Z230.Y2) {
ZmfDOBA_51((LONGCARD)Z265, Z270.A, 128L);
ZblNKKO_31((LONGCARD)ZblNKKO_4, (LONGCARD)ZblNKKO_14, Zpky9FDA_5.Y0, (LONGCARD)ZblNKKO_25, ADR (Z270));
}
if (Z244 >= Z247) {
Z275();
}
INC(Z244);
Z249->A[Z244].Y0 = Z264;
if (Z260 >= Z198) {
Z248->A[Z244] = Z248->A[Z244 - 1];
Z260 = Z228.A[Z260 - 74];
} else {
Z248->A[Z244] = Z260;
}
}
if (Z260 <= Z187) {
goto EXIT_2;
}
}
if (Z260 >= Z198) {
if (Z260 <= Z189) {
INC(Z244);
Z249->A[Z244].Y0 = Zpky9FDA_5;
Z261 = Zpky9FDA_9();
Z269 = FALSE;
}
for (;;) {
switch (Z260) {
case 108:;
Z273();
return Z252;
break;
case 109:;
DEC1(Z244, 3);
Z262 = ZmfDOBA_1;
Zp1BbM_27();
Zp1BbM_23((STRING)"%%", 2L);
Zp1BbM_27();
Zp1BbM_27();
Zp1BbM_23((STRING)"void BeginScanner ()", 20L);
Zp1BbM_27();
Zp1BbM_23((STRING)"{", 1L);
Zp1BbM_27();
ZqnGVQ_5((ZDz6VQCC_4)ZfM_1, Z166);
Zp1BbM_23((STRING)"}", 1L);
Zp1BbM_27();
Zp1BbM_27();
Zp1BbM_23((STRING)"void CloseScanner ()", 20L);
Zp1BbM_27();
Zp1BbM_23((STRING)"{", 1L);
Zp1BbM_27();
ZqnGVQ_5((ZDz6VQCC_4)ZfM_1, Z167);
Zp1BbM_23((STRING)"}", 1L);
Zp1BbM_27();
break;
case 110:;
Z262 = ZmfDOBA_2;
break;
case 111:;
DEC1(Z244, 2);
Z262 = ZmfDOBA_2;
break;
case 112:;
DEC1(Z244, 2);
Z262 = ZmfDOBA_2;
break;
case 113:;
DEC1(Z244, 2);
Z262 = ZmfDOBA_2;
break;
case 114:;
DEC1(Z244, 2);
Z262 = ZmfDOBA_2;
break;
case 115:;
DEC1(Z244, 2);
Z262 = ZmfDOBA_2;
break;
case 116:;
DEC1(Z244, 1);
Z262 = ZmfDOBA_3;
break;
case 117:;
case 74:;
DEC1(Z244, 2);
Z262 = ZmfDOBA_3;
break;
case 118:;
case 75:;
DEC1(Z244, 2);
Z262 = ZmfDOBA_4;
Z162 = Z249->A[Z244 + 2].Y0.U_1.V_5.Y5;
break;
case 119:;
case 76:;
DEC1(Z244, 2);
Z262 = ZmfDOBA_4;
Z163 = Z249->A[Z244 + 2].Y0.U_1.V_5.Y5;
break;
case 120:;
case 77:;
DEC1(Z244, 2);
Z262 = ZmfDOBA_4;
Z164 = Z249->A[Z244 + 2].Y0.U_1.V_5.Y5;
break;
case 121:;
case 78:;
DEC1(Z244, 2);
Z262 = ZmfDOBA_4;
Z165 = Z249->A[Z244 + 2].Y0.U_1.V_5.Y5;
break;
case 122:;
case 79:;
DEC1(Z244, 2);
Z262 = ZmfDOBA_4;
Z166 = Z249->A[Z244 + 2].Y0.U_1.V_5.Y5;
break;
case 123:;
case 80:;
DEC1(Z244, 2);
Z262 = ZmfDOBA_4;
Z167 = Z249->A[Z244 + 2].Y0.U_1.V_5.Y5;
break;
case 124:;
case 81:;
DEC1(Z244, 2);
Z262 = ZmfDOBA_4;
Z168 = Z249->A[Z244 + 2].Y0.U_1.V_5.Y5;
break;
case 125:;
case 82:;
DEC1(Z244, 2);
Z262 = ZmfDOBA_4;
Z169 = Z249->A[Z244 + 2].Y0.U_1.V_5.Y5;
Zp1BbM_23((STRING)"/*** sorry - cannot translate EOF ***/", 38L);
Zp1BbM_27();
break;
case 126:;
case 83:;
DEC1(Z244, 4);
Z262 = ZmfDOBA_5;
break;
case 127:;
Z262 = ZmfDOBA_6;
break;
case 128:;
case 84:;
DEC1(Z244, 3);
Z262 = ZmfDOBA_6;
break;
case 129:;
case 85:;
DEC1(Z244, 1);
Z262 = ZmfDOBA_7;
break;
case 130:;
case 86:;
DEC1(Z244, 1);
Z262 = ZmfDOBA_7;
break;
case 131:;
DEC1(Z244, 2);
Z262 = ZmfDOBA_8;
break;
case 132:;
DEC1(Z244, 3);
Z262 = ZmfDOBA_9;
Zp1BbM_27();
Zp1BbM_27();
break;
case 133:;
DEC1(Z244, 3);
Z262 = ZmfDOBA_10;
Zp1BbM_23((STRING)"\" \"	;", 5L);
Zp1BbM_27();
Zp1BbM_23((STRING)"\\t	;", 4L);
Zp1BbM_27();
Zp1BbM_23((STRING)"\\n	;", 4L);
Zp1BbM_27();
Zp1BbM_23((STRING)".	{", 3L);
ZqnGVQ_5((ZDz6VQCC_4)ZfM_1, Z168);
Zp1BbM_23((STRING)"}", 1L);
Zp1BbM_27();
break;
case 134:;
Z262 = ZmfDOBA_11;
break;
case 135:;
DEC1(Z244, 2);
Z262 = ZmfDOBA_11;
break;
case 136:;
Z262 = ZmfDOBA_12;
break;
case 137:;
DEC1(Z244, 2);
Z262 = ZmfDOBA_12;
break;
case 138:;
Z262 = ZmfDOBA_13;
break;
case 139:;
DEC1(Z244, 2);
Z262 = ZmfDOBA_13;
break;
case 140:;
DEC1(Z244, 3);
Z262 = ZmfDOBA_13;
break;
case 141:;
case 87:;
DEC1(Z244, 1);
Z262 = ZmfDOBA_14;
Zp1BbM_18(' ');
Zfb3DLQ_7((ZDz6VQCC_4)ZfM_1, Z249->A[Z244 + 1].Y0.U_1.V_1.Y1);
break;
case 142:;
DEC1(Z244, 1);
Z262 = ZmfDOBA_15;
break;
case 143:;
DEC1(Z244, 3);
Z262 = ZmfDOBA_15;
break;
case 144:;
DEC1(Z244, 4);
Z262 = ZmfDOBA_15;
break;
case 145:;
case 88:;
DEC1(Z244, 1);
Z262 = ZmfDOBA_16;
Zfb3DLQ_7((ZDz6VQCC_4)ZfM_1, Z249->A[Z244 + 1].Y0.U_1.V_1.Y1);
break;
case 146:;
case 89:;
DEC1(Z244, 5);
Z262 = ZmfDOBA_17;
Zp1BbM_27();
break;
case 147:;
case 90:;
DEC1(Z244, 4);
Z262 = ZmfDOBA_18;
ZqnGVQ_5((ZDz6VQCC_4)ZfM_1, Z249->A[Z244 + 4].Y0.U_1.V_5.Y5);
Zp1BbM_18('}');
Zp1BbM_27();
break;
case 148:;
case 91:;
DEC1(Z244, 4);
Z262 = ZmfDOBA_18;
ZqnGVQ_5((ZDz6VQCC_4)ZfM_1, Z249->A[Z244 + 4].Y0.U_1.V_5.Y5);
Zp1BbM_18('}');
Zp1BbM_27();
break;
case 149:;
DEC1(Z244, 1);
Z262 = ZmfDOBA_19;
break;
case 150:;
DEC1(Z244, 4);
Z262 = ZmfDOBA_19;
break;
case 151:;
DEC1(Z244, 5);
Z262 = ZmfDOBA_20;
break;
case 152:;
Z262 = ZmfDOBA_21;
break;
case 153:;
case 92:;
DEC1(Z244, 4);
Z262 = ZmfDOBA_21;
Zp1BbM_18('>');
break;
case 154:;
case 93:;
DEC1(Z244, 4);
Z262 = ZmfDOBA_21;
Zp1BbM_23((STRING)"/*** sorry - cannot translate NOT ***/", 38L);
Zp1BbM_27();
break;
case 155:;
Z262 = ZmfDOBA_22;
break;
case 156:;
case 94:;
DEC1(Z244, 1);
Z262 = ZmfDOBA_22;
Zp1BbM_18('^');
break;
case 157:;
Z262 = ZmfDOBA_23;
break;
case 158:;
DEC1(Z244, 3);
Z262 = ZmfDOBA_23;
break;
case 159:;
Z262 = ZmfDOBA_24;
break;
case 160:;
case 95:;
DEC1(Z244, 1);
Z262 = ZmfDOBA_24;
Zp1BbM_18('$');
break;
case 161:;
DEC1(Z244, 4);
Z262 = ZmfDOBA_25;
break;
case 162:;
DEC1(Z244, 2);
Z262 = ZmfDOBA_25;
break;
case 163:;
case 96:;
DEC1(Z244, 2);
Z262 = ZmfDOBA_25;
Zp1BbM_18('+');
break;
case 164:;
case 97:;
DEC1(Z244, 2);
Z262 = ZmfDOBA_25;
Zp1BbM_18('*');
break;
case 165:;
case 98:;
DEC1(Z244, 2);
Z262 = ZmfDOBA_25;
Zp1BbM_18('?');
break;
case 166:;
case 99:;
DEC1(Z244, 4);
Z262 = ZmfDOBA_25;
Zp1BbM_18('{');
Zp1BbM_19((LONGINT)Z249->A[Z244 + 3].Y0.U_1.V_2.Y2, 0L);
Zp1BbM_18(',');
Zp1BbM_19((LONGINT)Z249->A[Z244 + 3].Y0.U_1.V_2.Y2, 0L);
Zp1BbM_18('}');
break;
case 167:;
case 100:;
DEC1(Z244, 6);
Z262 = ZmfDOBA_25;
Zp1BbM_18('{');
Zp1BbM_19((LONGINT)Z249->A[Z244 + 3].Y0.U_1.V_2.Y2, 0L);
Zp1BbM_18(',');
Zp1BbM_19((LONGINT)Z249->A[Z244 + 5].Y0.U_1.V_2.Y2, 0L);
Zp1BbM_18('}');
break;
case 168:;
case 101:;
DEC1(Z244, 4);
Z262 = ZmfDOBA_25;
Zp1BbM_18(')');
break;
case 169:;
DEC1(Z244, 2);
Z262 = ZmfDOBA_25;
break;
case 170:;
case 102:;
DEC1(Z244, 1);
Z262 = ZmfDOBA_25;
Z170(Z249->A[Z244 + 1].Y0.U_1.V_4.Y4, FALSE);
break;
case 171:;
case 103:;
DEC1(Z244, 1);
Z262 = ZmfDOBA_25;
Z160 = Zae5ojx8B_6(Z249->A[Z244 + 1].Y0.U_1.V_1.Y1);
if (Z160 != Zae5ojx8B_0) {
if (Zae5ojx8B_7(Z160) == Zae5ojx8B_9) {
Zp1BbM_18('{');
Zfb3DLQ_7((ZDz6VQCC_4)ZfM_1, Z249->A[Z244 + 1].Y0.U_1.V_1.Y1);
Zp1BbM_18('}');
} else {
Zfb3DLQ_3(Z249->A[Z244 + 1].Y0.U_1.V_1.Y1, &Z158);
ZblNKKO_31((LONGCARD)Z151, (LONGCARD)Z153, Z249->A[Z244 + 1].Y0.Y0, (LONGCARD)Y1_154, ADR (Z158));
}
} else {
if (Z249->A[Z244 + 1].Y0.U_1.V_1.Y1 == Z159) {
Zp1BbM_18('.');
} else {
Zfb3DLQ_7((ZDz6VQCC_4)ZfM_1, Z249->A[Z244 + 1].Y0.U_1.V_1.Y1);
}
}
break;
case 172:;
case 104:;
DEC1(Z244, 1);
Z262 = ZmfDOBA_25;
Zp1BbM_18('"');
Zp1PEAFi_6((ZDz6VQCC_4)ZfM_1, Z249->A[Z244 + 1].Y0.U_1.V_3.Y3);
Zp1BbM_18('"');
break;
case 173:;
case 105:;
DEC1(Z244, 1);
Z262 = ZmfDOBA_25;
Zp1BbM_19((LONGINT)Z249->A[Z244 + 1].Y0.U_1.V_2.Y2, 0L);
break;
case 174:;
Z262 = ZmfDOBA_26;
Z161 = FALSE;
break;
case 175:;
DEC1(Z244, 3);
Z262 = ZmfDOBA_27;
break;
case 176:;
case 106:;
DEC1(Z244, 4);
Z262 = ZmfDOBA_27;
Zp1BbM_18(']');
break;
case 177:;
Z262 = ZmfDOBA_28;
break;
case 178:;
DEC1(Z244, 2);
Z262 = ZmfDOBA_28;
break;
case 179:;
DEC1(Z244, 1);
Z262 = ZmfDOBA_29;
Z170(Z249->A[Z244 + 1].Y0.U_1.V_4.Y4, TRUE);
break;
case 180:;
case 107:;
DEC1(Z244, 4);
Z262 = ZmfDOBA_29;
Z170(Z249->A[Z244 + 4].Y0.U_1.V_4.Y4, TRUE);
break;
case 181:;
Z262 = ZmfDOBA_30;
Z170(Z249->A[Z244 - 1].Y0.U_1.V_4.Y4, TRUE);
Zp1BbM_18('-');
break;
case 182:;
Z262 = ZmfDOBA_31;
Z161 = !Z161;
break;
case 183:;
Z262 = ZmfDOBA_32;
Zp1BbM_18('[');
if (Z161) {
Zp1BbM_18('^');
}
break;
case 184:;
Z262 = ZmfDOBA_33;
Zp1BbM_18('|');
break;
case 185:;
Z262 = ZmfDOBA_34;
Zp1BbM_18('(');
break;
case 186:;
Z262 = ZmfDOBA_35;
Zp1BbM_18('/');
break;
case 187:;
Z262 = ZmfDOBA_36;
Zp1BbM_18('<');
break;
case 188:;
Z262 = ZmfDOBA_37;
Zp1BbM_23((STRING)"	|", 2L);
break;
case 189:;
Z262 = ZmfDOBA_38;
Zp1BbM_23((STRING)"	{", 2L);
break;
case 190:;
Z262 = ZmfDOBA_39;
Zp1BbM_23((STRING)"	{", 2L);
break;
case 191:;
Z262 = ZmfDOBA_40;
if (Zae5ojx8B_6(Z249->A[Z244 - 1].Y0.U_1.V_1.Y1) == Zae5ojx8B_0) {
Zae5ojx8B_4(Z249->A[Z244 - 1].Y0.U_1.V_1.Y1);
} else {
Zfb3DLQ_3(Z249->A[Z244 - 1].Y0.U_1.V_1.Y1, &Z158);
ZblNKKO_31((LONGCARD)Z152, (LONGCARD)Z153, Z249->A[Z244 - 1].Y0.Y0, (LONGCARD)Y1_154, ADR (Z158));
}
Zfb3DLQ_7((ZDz6VQCC_4)ZfM_1, Z249->A[Z244 - 1].Y0.U_1.V_1.Y1);
Zp1BbM_18('\t');
break;
case 192:;
Z262 = ZmfDOBA_41;
Zp1BbM_18(',');
break;
case 193:;
Z262 = ZmfDOBA_42;
Zp1BbM_18(',');
break;
case 194:;
Z262 = ZmfDOBA_43;
Zp1BbM_23((STRING)"%%", 2L);
Zp1BbM_27();
Zp1BbM_27();
Zp1BbM_23((STRING)"%{", 2L);
Zp1BbM_27();
ZqnGVQ_5((ZDz6VQCC_4)ZfM_1, Z165);
Zp1BbM_23((STRING)"%}", 2L);
Zp1BbM_27();
Zp1BbM_27();
break;
case 195:;
Z262 = ZmfDOBA_44;
Zp1BbM_27();
Zp1BbM_23((STRING)"%Start", 6L);
break;
case 196:;
Z262 = ZmfDOBA_45;
Zp1BbM_23((STRING)"%{", 2L);
Zp1BbM_27();
ZqnGVQ_5((ZDz6VQCC_4)ZfM_1, Z162);
ZqnGVQ_5((ZDz6VQCC_4)ZfM_1, Z163);
ZqnGVQ_5((ZDz6VQCC_4)ZfM_1, Z164);
Zp1BbM_23((STRING)"%}", 2L);
Zp1BbM_27();
Zp1BbM_27();
break;
}
Z260 = Z248->A[Z244];
for (;;) {
Z268 = (Z211)(Z218.A[Z260] + Z262 * sizeof (Z208));
if (Z268->Y0 == Z260) {
Z260 = Z268->Y1;
goto EXIT_5;
}
Z260 = Z220.A[Z260];
} EXIT_5:;
INC(Z244);
Z249->A[Z244] = Z263;
if (Z260 < Z198) {
goto EXIT_4;
}
} EXIT_4:;
} else {
INC(Z244);
Z249->A[Z244].Y0 = Zpky9FDA_5;
Z261 = Zpky9FDA_9();
Z269 = FALSE;
}
} EXIT_2:;
} EXIT_1:;
}

static Z203 Z277
# ifdef HAVE_ARGS
(Z203 Z330, LONGINT Z331, LONGINT Z332)
# else
(Z330, Z331, Z332)
Z203 Z330;
LONGINT Z331;
LONGINT Z332;
# endif
{
BOOLEAN Z333;
ZpmCQ_4 Z334;
ZpmCQ_4 Z336;
Z203 Z232;
struct S_18 Z337;
Zp1PEAFD_2 Z338;
Zp1PEAFD_2 Z339;
INTEGER Z340;

if (Z230.Y2) {
ZblNKKO_30((LONGCARD)ZblNKKO_1, (LONGCARD)ZblNKKO_12, Zpky9FDA_5.Y0);
ZmfDOBA_51((LONGCARD)Z330, Z337.A, 128L);
Zp1PEAFD_13(Z337.A, 128L, &Z338);
ZblNKKO_31((LONGCARD)ZblNKKO_8, (LONGCARD)ZblNKKO_16, Zpky9FDA_5.Y0, (LONGCARD)ZblNKKO_24, ADR (Z338));
ZpmCQ_5(&Z334, (LONGCARD)Z179);
Z346(Z331, Z332, &Z334);
Zp1PEAFD_4(&Z339);
{
Z203 B_3 = ZpmCQ_17(&Z334), B_4 = ZpmCQ_18(&Z334);

if (B_3 <= B_4)
for (Z232 = B_3;; Z232 += 1) {
if (ZpmCQ_25((LONGCARD)Z232, &Z334)) {
ZmfDOBA_51((LONGCARD)Z232, Z337.A, 128L);
Zp1PEAFD_13(Z337.A, 128L, &Z338);
if (Zp1PEAFD_7(&Z339) + Zp1PEAFD_7(&Z338) + 1 <= Zp1PEAFD_0) {
Zp1PEAFD_5(&Z339, &Z338);
Zp1PEAFD_6(&Z339, ' ');
}
}
if (Z232 >= B_4) break;
}
}
ZblNKKO_31((LONGCARD)ZblNKKO_2, (LONGCARD)ZblNKKO_16, Zpky9FDA_5.Y0, (LONGCARD)ZblNKKO_24, ADR (Z339));
ZpmCQ_7(&Z334);
}
ZpmCQ_5(&Z336, (LONGCARD)Z179);
Z356(Z331, Z332, &Z336);
Z333 = FALSE;
while (!ZpmCQ_25((LONGCARD)Z330, &Z336)) {
Z330 = Zpky9FDA_9();
Z333 = TRUE;
}
ZpmCQ_7(&Z336);
if (Z333 && Z230.Y2) {
ZblNKKO_30((LONGCARD)ZblNKKO_3, (LONGCARD)ZblNKKO_16, Zpky9FDA_5.Y0);
}
return Z330;
}

static void Z346
# ifdef HAVE_ARGS
(LONGINT Z331, LONGINT Z332, ZpmCQ_4 *Z334)
# else
(Z331, Z332, Z334)
LONGINT Z331;
LONGINT Z332;
ZpmCQ_4 *Z334;
# endif
{
Z203 Z330;
Z200 Z358;
Z200 Z359;

Z358 = Z248->A[Z332];
ZpmCQ_32(Z334);
for (Z330 = Z178; Z330 <= Z179; Z330 += 1) {
Z359 = Z206(Z358, Z330);
if (Z359 != Z173 && (Z359 <= Z193 || Z360(Z330, Z331, Z332))) {
ZpmCQ_13(Z334, (LONGCARD)Z330);
}
}
}

static BOOLEAN Z360
# ifdef HAVE_ARGS
(Z203 Z330, LONGINT Z331, LONGINT Z332)
# else
(Z330, Z331, Z332)
Z203 Z330;
LONGINT Z331;
LONGINT Z332;
# endif
{
LONGINT Z358;
Z203 Z362;
Z212 Z363;

ZarQdhNDD_0((ADDRESS *)&Z363, &Z331, (LONGINT)sizeof (Z200));
{
LONGINT B_5 = 0, B_6 = Z332;

if (B_5 <= B_6)
for (Z358 = B_5;; Z358 += 1) {
Z363->A[Z358] = Z248->A[Z358];
if (Z358 >= B_6) break;
}
}
Z358 = Z363->A[Z332];
for (;;) {
Z363->A[Z332] = Z358;
Z358 = Z206((Z200)Z358, Z330);
if (Z358 == Z173) {
ZarQdhNDD_3((ADDRESS *)&Z363, &Z331, (LONGINT)sizeof (Z200));
return FALSE;
}
do {
if (Z358 > Z191) {
Z358 = Z227.A[Z358 - 197];
}
if (Z358 <= Z193) {
ZarQdhNDD_3((ADDRESS *)&Z363, &Z331, (LONGINT)sizeof (Z200));
return TRUE;
} else {
DEC1(Z332, Z224.A[Z358 - 108]);
Z362 = Z225.A[Z358 - 108];
}
Z358 = Z206(Z363->A[Z332], Z362);
INC(Z332);
if (Z332 >= Z331) {
ZarQdhNDD_2((ADDRESS *)&Z363, &Z331, (LONGINT)sizeof (Z200));
}
} while (!(Z358 < Z198));
} EXIT_6:;
}

static void Z364
# ifdef HAVE_ARGS
(Z200 Z358, ZpmCQ_4 *Z334)
# else
(Z358, Z334)
Z200 Z358;
ZpmCQ_4 *Z334;
# endif
{
Z203 Z330;
Z200 Z359;

ZpmCQ_32(Z334);
for (Z330 = Z178; Z330 <= Z179; Z330 += 1) {
Z359 = Z206(Z358, Z330);
if (Z359 != Z173 && Z359 <= Z193) {
ZpmCQ_13(Z334, (LONGCARD)Z330);
}
}
}

static void Z356
# ifdef HAVE_ARGS
(LONGINT Z331, LONGINT Z332, ZpmCQ_4 *Z336)
# else
(Z331, Z332, Z336)
LONGINT Z331;
LONGINT Z332;
ZpmCQ_4 *Z336;
# endif
{
Z212 Z363;
LONGINT Z358;
Z203 Z362;
ZpmCQ_4 Z334;

ZarQdhNDD_0((ADDRESS *)&Z363, &Z331, (LONGINT)sizeof (Z200));
{
LONGINT B_7 = 0, B_8 = Z332;

if (B_7 <= B_8)
for (Z358 = B_7;; Z358 += 1) {
Z363->A[Z358] = Z248->A[Z358];
if (Z358 >= B_8) break;
}
}
ZpmCQ_5(&Z334, (LONGCARD)Z179);
ZpmCQ_32(Z336);
Z358 = Z363->A[Z332];
for (;;) {
if (Z332 >= Z331) {
ZarQdhNDD_2((ADDRESS *)&Z363, &Z331, (LONGINT)sizeof (Z200));
}
Z363->A[Z332] = Z358;
Z364((Z200)Z358, &Z334);
ZpmCQ_8(Z336, Z334);
Z358 = Z206((Z200)Z358, Z226.A[Z358]);
if (Z358 >= Z198) {
if (Z358 <= Z189) {
INC(Z332);
Z358 = Z228.A[Z358 - 74];
}
for (;;) {
if (Z358 > Z191) {
Z358 = Z227.A[Z358 - 197];
}
if (Z190 <= Z358 && Z358 <= Z193) {
ZarQdhNDD_3((ADDRESS *)&Z363, &Z331, (LONGINT)sizeof (Z200));
ZpmCQ_7(&Z334);
return;
} else if (Z358 < Z198) {
INC(Z332);
goto EXIT_8;
} else {
DEC1(Z332, Z224.A[Z358 - 108]);
Z362 = Z225.A[Z358 - 108];
}
Z358 = Z206(Z363->A[Z332], Z362);
INC(Z332);
if (Z358 < Z198) {
goto EXIT_8;
}
} EXIT_8:;
} else {
INC(Z332);
}
} EXIT_7:;
}

static Z200 Z206
# ifdef HAVE_ARGS
(Z200 Z358, Z203 Z366)
# else
(Z358, Z366)
Z200 Z358;
Z203 Z366;
# endif
{
Z209 Z367;
Z210 Z368;
Z211 Z369;

if (Z366 <= Z179) {
for (;;) {
Z367 = (Z209)(Z217.A[Z358] + Z366 * sizeof (Z204));
if (Z367->Y0 == Z358) {
return Z367->Y1;
}
Z358 = Z219.A[Z358];
if (Z358 == Z173) {
return Z173;
}
} EXIT_9:;
} else {
for (;;) {
Z369 = (Z211)(Z218.A[Z358] + Z366 * sizeof (Z208));
if (Z369->Y0 == Z358) {
return Z369->Y1;
}
Z358 = Z220.A[Z358];
} EXIT_10:;
}
}

static void Z371
# ifdef HAVE_ARGS
(LONGCARD Z372)
# else
(Z372)
LONGCARD Z372;
# endif
{
Z217.A[Z370] = ADR (Z221.A[Z372]);
INC(Z370);
}

static void Z373
# ifdef HAVE_ARGS
(LONGCARD Z372)
# else
(Z372)
LONGCARD Z372;
# endif
{
Z218.A[Z370] = ADR (Z223.A[Z372 + Z179 + 1 - 42]) - (Z179 + 1) * sizeof (Z208);
INC(Z370);
}

static void Z374
# ifdef HAVE_ARGS
(LONGCARD Z372)
# else
(Z372)
LONGCARD Z372;
# endif
{
Z219.A[Z370] = Z372;
INC(Z370);
}

static void Z375
# ifdef HAVE_ARGS
(LONGCARD Z372)
# else
(Z372)
LONGCARD Z372;
# endif
{
Z220.A[Z370] = Z372;
INC(Z370);
}

static void Z376
# ifdef HAVE_ARGS
(LONGCARD Z372)
# else
(Z372)
LONGCARD Z372;
# endif
{
if (!ODD(Z370)) {
Z221.A[Z370 / 2].Y0 = Z372;
} else {
Z221.A[Z370 / 2].Y1 = Z372;
}
INC(Z370);
}

static void Z377
# ifdef HAVE_ARGS
(LONGCARD Z372)
# else
(Z372)
LONGCARD Z372;
# endif
{
Z222.A[Z370 - 42] = Z372;
INC(Z370);
}

static void Z378
# ifdef HAVE_ARGS
(LONGCARD Z372)
# else
(Z372)
LONGCARD Z372;
# endif
{
if (!ODD(Z370)) {
Z223.A[Z370 / 2 - 42].Y0 = Z372;
} else {
Z223.A[Z370 / 2 - 42].Y1 = Z372;
}
INC(Z370);
}

static void Z379
# ifdef HAVE_ARGS
(LONGCARD Z372)
# else
(Z372)
LONGCARD Z372;
# endif
{
Z224.A[Z370 - 108] = Z372;
INC(Z370);
}

static void Z380
# ifdef HAVE_ARGS
(LONGCARD Z372)
# else
(Z372)
LONGCARD Z372;
# endif
{
Z225.A[Z370 - 108] = Z372;
INC(Z370);
}

static void Z381
# ifdef HAVE_ARGS
(LONGCARD Z372)
# else
(Z372)
LONGCARD Z372;
# endif
{
Z226.A[Z370] = Z372;
INC(Z370);
}

static void Z382
# ifdef HAVE_ARGS
(LONGCARD Z372)
# else
(Z372)
LONGCARD Z372;
# endif
{
Z227.A[Z370 - 197] = Z372;
INC(Z370);
}

static void Z383
# ifdef HAVE_ARGS
(LONGCARD Z372)
# else
(Z372)
LONGCARD Z372;
# endif
{
Z228.A[Z370 - 74] = Z372;
INC(Z370);
}

static void Z384
 ARGS ((void))
{
Zmfy8_1 Z385;

Z385 = Z371;
Z370 = 1;
Zmfy8_9(Z385, (STRING)"WC9X;W1XGXDX,W:WCXBW+W9XKV.+XD,V96YH+XGW:XPVEYMV,++XFV;", 55L, 31L);
Zmfy8_9(Z385, (STRING)"V.\\,\\4\\L/MRYRX5XF++Y+VH[22WBGXHZIXEWMZ8V4+X5+W9:9\\9Z4ZC", 55L, 33L);
Zmfy8_9(Z385, (STRING)"VMWKC\\SXEXI[9VSVR", 17L, 9L);
Z385 = Z373;
Z370 = 1;
Zmfy8_9(Z385, (STRING)"E++++++++++++QBIV0RV23V.+V2V,+-V8+2+M+D4+I3+6++0/8++FG8", 55L, 49L);
Zmfy8_9(Z385, (STRING)"I,++5+1+TJBV14E++KV3;+++/+", 26L, 24L);
Z385 = Z374;
Z370 = 1;
Zmfy8_9(Z385, (STRING)"++++++++++++++++++++++F++++V4VE+++++VE++++++VEVE++V7+++", 55L, 49L);
Zmfy8_9(Z385, (STRING)"V2+++VHVEVE+O+++++V/++++++VE++", 30L, 24L);
Z385 = Z375;
Z370 = 1;
Zmfy8_9(Z385, (STRING)"+++++++++++++++++++++++++++V4V8+++++V8++P+++HH++V8+++++", 55L, 51L);
Zmfy8_9(Z385, (STRING)"++V8+H+++++++V8+++H++V8++", 25L, 22L);
Z385 = Z376;
Z370 = 0;
Zmfy8_9(Z385, (STRING)"GX2:YF@W-<X,@W,<X,:YF:YF:YF:YF:YF:YF>X7:YF-WCV>W/V=YD>X7", 56L, 36L);
Zmfy8_9(Z385, (STRING)">X7>X7>X7>X7>X7OV0>X7VDW/V0Y9@VT<X,V2YCOV1:YF:YFV0Y9:YF", 55L, 34L);
Zmfy8_9(Z385, (STRING)"PW/:YF:YF:YF:YFQW/V2V=>X7>X7FW.>X79X3>X7>X7>X7>X79X39X3", 55L, 36L);
Zmfy8_9(Z385, (STRING)"9X39X39X39X3=AKRJY>KSV2W4=X0=X0=X0=X0=X0=X0V8V-V8W7DW+V8", 56L, 37L);
Zmfy8_9(Z385, (STRING)"W8V8W9V.V:V8W<V8V.9X39X3VBVF9X3KT9X39X39X39X3VJWBVIY8=X0", 56L, 33L);
Zmfy8_9(Z385, (STRING)"=X06VS=X0/VK=X0=X0=X0=X0/WK/WK/WK/WK/WK/WKV<Y47VR3VOBX1", 55L, 36L);
Zmfy8_9(Z385, (STRING)"BX1BX1BX1BX1BX1V1Y:BF4VP,WE,WE,WE,WE,WE,WEVCVG/WK/WKV6W2", 56L, 36L);
Zmfy8_9(Z385, (STRING)"/WKV<Y4/WK/WK/WK/WKBX1BX12VNBX1V1Y:BX1BX1BX1BX1,WE,WESY@", 56L, 36L);
Zmfy8_9(Z385, (STRING)",WEVCWA,WE,WE,WE,WE.2.4.5.9.:.YG5VQV:VB1VMV5W1TYA0VLVGY6", 56L, 38L);
Zmfy8_9(Z385, (STRING)"V:W:;?CX5CX5CX5CX5CX5AEV-Y;V-Y;V-Y;V-Y;.3.1VGVI.6VFW;.7", 55L, 36L);
Zmfy8_9(Z385, (STRING)"./.8.0CX5VGY68<CX5IPV-Y;V3W3CX5V-Y;CX5++CX5V-Y;++CX5?YE", 55L, 38L);
Zmfy8_9(Z385, (STRING)"?YE?YE?YE?YE++EYBEYBEYBEYB++RY?RY?RY?RY?++++++++?YE++++", 55L, 42L);
Zmfy8_9(Z385, (STRING)"?YE++EYB++?YEEYB?YERY??YEEYBRY??YE++V@XLRY?V@XLRY?V7XJR", 55L, 37L);
Zmfy8_9(Z385, (STRING)"Y?V7XJV7V?RY?V4XEV4XEV4XEV4XE++VAXNVAXNV@W6VAXNVAXNVAXN", 55L, 29L);
Zmfy8_9(Z385, (STRING)"V7XJVAXNV@XL++++VAXNV7XJV4XEVAXN++V4XEVAXN++++V4XE++V4XE", 56L, 34L);
Zmfy8_9(Z385, (STRING)"VAXNV4IV/XOV/XOV4JV/XOV/XOV/XO++V/XOVHXK++VHXKV/XOVHV-VH", 56L, 31L);
Zmfy8_9(Z385, (STRING)"W7V/XOVHW8VHW9V/XO++VHV.++++++V/XOVHXKLXHLXHLXHLXH++VHXK", 56L, 35L);
Zmfy8_9(Z385, (STRING)"++++MY<MY<MY<MY<++V?Y=V?Y=V?Y=V?Y=++LXH++++LXH++++++LXH", 55L, 40L);
Zmfy8_9(Z385, (STRING)"MY<LW5++MY<++V?Y=++MY<V?Y=++++++V?Y=VEW>VEW@VEW?VEW=NW0", 55L, 36L);
Zmfy8_9(Z385, (STRING)"++++++++NV-NW7++NW8NW9++++NV.++VEY1++++VEM++++++VEY1+++", 55L, 45L);
Zmfy8_9(Z385, (STRING)"+++++++++++++++++++++++++++", 27L, 27L);
Z385 = Z377;
Z370 = Z179 + 1;
Z385 = Z378;
Z370 = (Z179 + 1) * 2;
Zmfy8_9(Z385, (STRING)"++++++.WF.WG.WH++++.WI.WJ++++++++++QV3++++GX6GKGXBV4XCV4", 56L, 45L);
Zmfy8_9(Z385, (STRING)"LPV2PX;V8V/V8O,-,.V,V8V+V7V9VAHNV7V@VIVJ++++++SV5TV6;WD", 55L, 37L);
Zmfy8_9(Z385, (STRING)"VEVHEHMV,V?VE.;V-V9LV+RV49=V@XD?C@D<@V2V>CG=X4OY,V0V;V<", 55L, 37L);
Zmfy8_9(Z385, (STRING)"VCV1V<VCY5>BBX8V>X<V=VDVDX=:>V;Y2FX9JQV3V>+++++++++++++", 55L, 38L);
Zmfy8_9(Z385, (STRING)"+++++++++++++++++++++++++++++++++++++++++++++", 45L, 45L);
Z385 = Z379;
Z370 = Z190;
Zmfy8_9(Z385, (STRING)"-.+-----,---------/+.,,-..+-+-+-.,,./,0//,/0+//+,+.+,/-", 55L, 55L);
Zmfy8_9(Z385, (STRING)"---/1/-,,,,+./+-,/++++++++++++++++", 34L, 34L);
Z385 = Z380;
Z370 = Z190;
Zmfy8_9(Z385, (STRING)"V+V,V-V-V-V-V-V-V.V.V/V/V/V/V/V/V/V/V0V1V1V2V2V3V4V5V6V6", 56L, 28L);
Zmfy8_9(Z385, (STRING)"V7V7V8V8V8V9V:V:V:V;V<V=V=V>V>V?V@V@V@VAVAVBVBVCVCVDVDVD", 56L, 28L);
Zmfy8_9(Z385, (STRING)"VDVDVDVDVDVDVDVDVDVDVEVFVFVGVGVHVHVIVJVKVLVMVNVOVPVQVRVS", 56L, 28L);
Zmfy8_9(Z385, (STRING)"VTW+W,W-W.", 10L, 5L);
Z385 = Z381;
Z370 = 1;
Zmfy8_9(Z385, (STRING)"P+6P00000000E,,6-P,+F9P+-,,+-L,N,,7E,,,00--,-7>/LL,008B", 55L, 55L);
Zmfy8_9(Z385, (STRING)"-DE/,,,87-F,-D/8//", 18L, 18L);
Z385 = Z382;
Z370 = Z191 + 1;
Zmfy8_9(Z385, (STRING)"", 1L, 0L);
Z385 = Z383;
Z370 = Z188;
Zmfy8_9(Z385, (STRING)"WLWMWNWOWPWQWRWSWTX+X-X.X/X:X>X?X@XAXFXGXIXMXPXQXRXSXTY+", 56L, 28L);
Zmfy8_9(Z385, (STRING)"Y-Y.Y/Y0Y3Y7", 12L, 6L);
}

void ZmfDOBA_47
 ARGS ((void))
{
Zp1PEAFD_13((STRING)"ANY", 3L, &Z158);
Z159 = Zfb3DLQ_2(&Z158);
}

void ZmfDOBA_50
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
BEGIN_Strings ();
BEGIN_StringM ();
BEGIN_Idents ();
BEGIN_Texts ();
BEGIN_IO ();
BEGIN_StdIO ();
BEGIN_Errors ();
BEGIN_DefTable ();

Z384();
ZmfDOBA_46 = FALSE;
Z229.A[1 - 1] = 138;
}
