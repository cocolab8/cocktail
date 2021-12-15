#include "SYSTEM_.h"

#ifndef DEFINITION_Pack
#include "Pack.h"
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

#ifndef DEFINITION_Strings
#include "Strings.h"
#endif

#ifndef DEFINITION_Idents
#include "Idents.h"
#endif

#ifndef DEFINITION_Strings
#include "Strings.h"
#endif

#ifndef DEFINITION_Errors
#include "Errors.h"
#endif

#ifndef DEFINITION_Scanner
#include "Scanner.h"
#endif

#ifndef DEFINITION_Tree
#include "Tree.h"
#endif

#ifndef DEFINITION_Parser
#include "Parser.h"
#endif

ZmfDOBA_0 ZmfDOBA_1;

static Zfb3DLQ_0 Z166;
static Zfb3DLQ_0 Z167 ARGS ((CHAR Z168[], LONGCARD O_1));
#define Z170	0
typedef struct S_1 *Z171;
typedef struct S_1 {
Z171 Y0;
SHORTCARD Y1;
} Z172;
typedef struct S_2 {
BITSET A[0 + 1];
} Z175;
static SHORTCARD Z176;
static INTEGER Z177;
static BOOLEAN Z178;
static struct S_3 {
Z175 A[64 + 1];
} Z179;
static struct S_4 {
BITSET A[31 + 1];
} Z180;
static void Z184 ARGS ((CHAR Z185[], LONGCARD O_4, CHAR Z186[], LONGCARD O_3));
static BOOLEAN Z194 ARGS ((Z175 *Z195, SHORTCARD Z196));
static void Z197 ARGS ((Z175 *Z195, SHORTCARD Z196));
static void Z198 ARGS ((Z175 *Z195, SHORTCARD Z196));
static void Z199 ARGS ((void));
struct S_8 {
CHAR A[255 + 1];
};
static void Z209 ARGS ((SHORTCARD Z174, Z171 Z173));
static void Z211 ARGS ((SHORTCARD Z212, SHORTCARD Z174, Z171 Z173));
struct S_7 {
CHAR A[255 + 1];
};
static void Z193 ARGS ((SHORTCARD Z219, SHORTCARD Z174, Z171 Z173));
struct S_6 {
CHAR A[255 + 1];
};
static void Z222 ARGS ((SHORTCARD Z219, SHORTCARD Z174, Z171 Z173, Zpky9FDA_0 *Z223));
struct S_5 {
CHAR A[255 + 1];
};
static void Z210 ARGS ((SHORTCARD Z174, Z171 Z173));
static CARDINAL Z229, Z230, Z231;
static void Z232 ARGS ((CARDINAL Z233));
static void Z234 ARGS ((CARDINAL Z233));
static void Z189 ARGS ((void));
static void Z191 ARGS ((ZmfDOBA_0 *Z239, Z171 Z241));
static void Z248 ARGS ((ZmfDOBA_0 *Z253, Z171 Z241));
static void Z249 ARGS ((ZmfDOBA_0 *Z259, Z171 Z241));
static void Z270 ARGS ((ZmfDOBA_0 *Z271, Z171 Z241));
static void Z273 ARGS ((ZmfDOBA_0 *Z274, Z171 Z241));
static void Z250 ARGS ((ZmfDOBA_0 *Z278, Z171 Z241));
static void Z281 ARGS ((ZmfDOBA_0 *Z282, Z171 Z241));
static void Z251 ARGS ((ZmfDOBA_0 *Z291, Z171 Z241));
static void Z252 ARGS ((ZmfDOBA_0 *Z296, Z171 Z241));
static void Z299 ARGS ((ZmfDOBA_0 *Z300, Z171 Z241));
static void Z306 ARGS ((ZmfDOBA_0 *Z308, Z171 Z241));
static void Z307 ARGS ((ZmfDOBA_0 *Z309, Z171 Z241));
static void Z312 ARGS ((ZmfDOBA_0 *Z315, Z171 Z241));
static void Z320 ARGS ((ZmfDOBA_0 *Z321, Z171 Z241));
static void Z319 ARGS ((ZmfDOBA_0 *Z323, Z171 Z241));
static void Z329 ARGS ((ZmfDOBA_0 *Z330, Z171 Z241));
static void Z333 ARGS ((ZmfDOBA_0 *Z337, Z171 Z241));
static void Z340 ARGS ((ZmfDOBA_0 *Z341, Z171 Z241));
static void Z288 ARGS ((ZmfDOBA_0 *Z342, Z171 Z241));
static void Z305 ARGS ((ZmfDOBA_0 *Z345, Z171 Z241));
static void Z344 ARGS ((ZmfDOBA_0 *Z346, Z171 Z241));
static void Z289 ARGS ((ZmfDOBA_0 *Z347, Z171 Z241));

static Zfb3DLQ_0 Z167
# ifdef HAVE_ARGS
(CHAR Z168[], LONGCARD O_1)
# else
(Z168, O_1)
CHAR Z168[];
LONGCARD O_1;
# endif
{
Zp1PEAFD_2 Z169;

Zp1PEAFD_13(Z168, O_1, &Z169);
return Zfb3DLQ_2(&Z169);
}

static void Z184
# ifdef HAVE_ARGS
(CHAR Z185[], LONGCARD O_4, CHAR Z186[], LONGCARD O_3)
# else
(Z185, O_4, Z186, O_3)
CHAR Z185[];
LONGCARD O_4;
CHAR Z186[];
LONGCARD O_3;
# endif
{
CARDINAL Z187, Z188;
OPEN_ARRAY_LOCALS

ALLOC_OPEN_ARRAYS (O_4 * sizeof (CHAR), 1)
COPY_OPEN_ARRAY (Z185, O_4, CHAR)
if ((O_4 - 1) < (O_3 - 1)) {
Z188 = (O_4 - 1);
} else {
Z188 = (O_3 - 1);
}
{
LONGCARD B_1 = 0, B_2 = Z188;

if (B_1 <= B_2)
for (Z187 = B_1;; Z187 += 1) {
Z186[Z187] = Z185[Z187];
if (Z187 >= B_2) break;
}
}
if ((O_3 - 1) > Z188) {
Z186[Z188 + 1] = CHR(0);
}
FREE_OPEN_ARRAYS
}

void ZmfDOBA_4
# ifdef HAVE_ARGS
(CARDINAL Z182, CHAR Z183[], LONGCARD O_2)
# else
(Z182, Z183, O_2)
CARDINAL Z182;
CHAR Z183[];
LONGCARD O_2;
# endif
{
switch (Z182) {
case 0:;
Z184((STRING)"_EOF_", 5L, Z183, O_2);
break;
case 1:;
Z184((STRING)"=", 1L, Z183, O_2);
break;
case 2:;
Z184((STRING)":", 1L, Z183, O_2);
break;
case 3:;
Z184((STRING)".", 1L, Z183, O_2);
break;
case 4:;
Z184((STRING)"|", 1L, Z183, O_2);
break;
case 5:;
Z184((STRING)"*", 1L, Z183, O_2);
break;
case 6:;
Z184((STRING)"+", 1L, Z183, O_2);
break;
case 7:;
Z184((STRING)"||", 2L, Z183, O_2);
break;
case 8:;
Z184((STRING)"(", 1L, Z183, O_2);
break;
case 9:;
Z184((STRING)")", 1L, Z183, O_2);
break;
case 10:;
Z184((STRING)"[", 1L, Z183, O_2);
break;
case 11:;
Z184((STRING)"]", 1L, Z183, O_2);
break;
case 12:;
Z184((STRING)"EXPORT", 6L, Z183, O_2);
break;
case 13:;
Z184((STRING)"GLOBAL", 6L, Z183, O_2);
break;
case 14:;
Z184((STRING)"LOCAL", 5L, Z183, O_2);
break;
case 15:;
Z184((STRING)"BEGIN", 5L, Z183, O_2);
break;
case 16:;
Z184((STRING)"CLOSE", 5L, Z183, O_2);
break;
case 17:;
Z184((STRING)"TOKEN", 5L, Z183, O_2);
break;
case 18:;
Z184((STRING)"OPER", 4L, Z183, O_2);
break;
case 19:;
Z184((STRING)"NONE", 4L, Z183, O_2);
break;
case 20:;
Z184((STRING)"LEFT", 4L, Z183, O_2);
break;
case 21:;
Z184((STRING)"RIGHT", 5L, Z183, O_2);
break;
case 22:;
Z184((STRING)"RULE", 4L, Z183, O_2);
break;
case 23:;
Z184((STRING)"PREC", 4L, Z183, O_2);
break;
case 24:;
Z184((STRING)"Number", 6L, Z183, O_2);
break;
case 25:;
Z184((STRING)"CodeLine", 8L, Z183, O_2);
break;
case 26:;
Z184((STRING)"LastCodeLine", 12L, Z183, O_2);
break;
case 27:;
Z184((STRING)"Identifier", 10L, Z183, O_2);
break;
case 28:;
Z184((STRING)"String", 6L, Z183, O_2);
break;
case 29:;
Z184((STRING)"SCANNER", 7L, Z183, O_2);
break;
case 30:;
Z184((STRING)"PARSER", 6L, Z183, O_2);
break;
case 31:;
Z184((STRING)",", 1L, Z183, O_2);
break;
}
}

INTEGER ZmfDOBA_2
 ARGS ((void))
{
Z177 = 0;
Z189();
Z176 = Zpky9FDA_14();
Z178 = FALSE;
Z191(&ZmfDOBA_1, (Z171)NIL);
if (Z176 != Z170) {
Z193(Z170, 0, (Z171)NIL);
}
return Z177;
}

static BOOLEAN Z194
# ifdef HAVE_ARGS
(Z175 *Z195, SHORTCARD Z196)
# else
(Z195, Z196)
Z175 *Z195;
SHORTCARD Z196;
# endif
{
return IN(Z196 % 32, Z195->A[Z196 / 32]);
}

static void Z197
# ifdef HAVE_ARGS
(Z175 *Z195, SHORTCARD Z196)
# else
(Z195, Z196)
Z175 *Z195;
SHORTCARD Z196;
# endif
{
INCL(Z195->A[Z196 / 32], Z196 % 32);
}

static void Z198
# ifdef HAVE_ARGS
(Z175 *Z195, SHORTCARD Z196)
# else
(Z195, Z196)
Z175 *Z195;
SHORTCARD Z196;
# endif
{
EXCL(Z195->A[Z196 / 32], Z196 % 32);
}

static void Z199
 ARGS ((void))
{
struct S_8 Z200;
Zp1PEAFD_2 Z201;
Zp1PEAFD_2 Z202;

INC(Z177);
ZblNKKO_44((LONGCARD)ZblNKKO_1, (LONGCARD)ZblNKKO_16, Zpky9FDA_10.Y0);
ZmfDOBA_4((LONGCARD)Z176, Z200.A, 256L);
Zp1PEAFD_13(Z200.A, 256L, &Z201);
ZblNKKO_45((LONGCARD)ZblNKKO_9, (LONGCARD)ZblNKKO_20, Zpky9FDA_10.Y0, (LONGCARD)ZblNKKO_30, ADR (Z201));
}

static void Z209
# ifdef HAVE_ARGS
(SHORTCARD Z174, Z171 Z173)
# else
(Z174, Z173)
SHORTCARD Z174;
Z171 Z173;
# endif
{
if (!Z178) {
Z199();
Z210(Z174, Z173);
}
}

static void Z211
# ifdef HAVE_ARGS
(SHORTCARD Z212, SHORTCARD Z174, Z171 Z173)
# else
(Z212, Z174, Z173)
SHORTCARD Z212;
SHORTCARD Z174;
Z171 Z173;
# endif
{
SHORTCARD Z182;
struct S_7 Z200;
Zp1PEAFD_2 Z201;
Zp1PEAFD_2 Z202;

if (!Z178) {
Z199();
Zp1PEAFD_4(&Z202);
for (Z182 = 0; Z182 <= 31; Z182 += 1) {
if (Z194(&Z179.A[Z212], Z182)) {
ZmfDOBA_4((LONGCARD)Z182, Z200.A, 256L);
Zp1PEAFD_13(Z200.A, 256L, &Z201);
if (Zp1PEAFD_7(&Z202) + Zp1PEAFD_7(&Z201) + 1 <= Zp1PEAFD_0) {
Zp1PEAFD_5(&Z202, &Z201);
Zp1PEAFD_6(&Z202, ' ');
}
}
}
ZblNKKO_45((LONGCARD)ZblNKKO_2, (LONGCARD)ZblNKKO_20, Zpky9FDA_10.Y0, (LONGCARD)ZblNKKO_30, ADR (Z202));
Z210(Z174, Z173);
}
}

static void Z193
# ifdef HAVE_ARGS
(SHORTCARD Z219, SHORTCARD Z174, Z171 Z173)
# else
(Z219, Z174, Z173)
SHORTCARD Z219;
SHORTCARD Z174;
Z171 Z173;
# endif
{
struct S_6 Z200;
Zp1PEAFD_2 Z201;

if (!Z178) {
Z199();
ZmfDOBA_4((LONGCARD)Z219, Z200.A, 256L);
Zp1PEAFD_13(Z200.A, 256L, &Z201);
ZblNKKO_45((LONGCARD)ZblNKKO_2, (LONGCARD)ZblNKKO_20, Zpky9FDA_10.Y0, (LONGCARD)ZblNKKO_30, ADR (Z201));
Z210(Z174, Z173);
}
if (Z176 != Z219) {
ZmfDOBA_4((LONGCARD)Z219, Z200.A, 256L);
ZblNKKO_45((LONGCARD)ZblNKKO_4, (LONGCARD)ZblNKKO_18, Zpky9FDA_10.Y0, (LONGCARD)ZblNKKO_32, ADR (Z200));
} else {
if (Z176 != Z170) {
Z176 = Zpky9FDA_14();
}
Z178 = FALSE;
}
}

static void Z222
# ifdef HAVE_ARGS
(SHORTCARD Z219, SHORTCARD Z174, Z171 Z173, Zpky9FDA_0 *Z223)
# else
(Z219, Z174, Z173, Z223)
SHORTCARD Z219;
SHORTCARD Z174;
Z171 Z173;
Zpky9FDA_0 *Z223;
# endif
{
struct S_5 Z200;
Zp1PEAFD_2 Z201;

if (!Z178) {
Z199();
ZmfDOBA_4((LONGCARD)Z219, Z200.A, 256L);
Zp1PEAFD_13(Z200.A, 256L, &Z201);
ZblNKKO_45((LONGCARD)ZblNKKO_2, (LONGCARD)ZblNKKO_20, Zpky9FDA_10.Y0, (LONGCARD)ZblNKKO_30, ADR (Z201));
Z210(Z174, Z173);
}
if (Z176 != Z219) {
ZmfDOBA_4((LONGCARD)Z219, Z200.A, 256L);
ZblNKKO_45((LONGCARD)ZblNKKO_4, (LONGCARD)ZblNKKO_18, Zpky9FDA_10.Y0, (LONGCARD)ZblNKKO_32, ADR (Z200));
Zpky9FDA_6((LONGINT)Z219, Z223);
} else {
*Z223 = Zpky9FDA_10;
if (Z176 != Z170) {
Z176 = Zpky9FDA_14();
}
Z178 = FALSE;
}
}

static void Z210
# ifdef HAVE_ARGS
(SHORTCARD Z174, Z171 Z173)
# else
(Z174, Z173)
SHORTCARD Z174;
Z171 Z173;
# endif
{
Z175 Z226;
BOOLEAN Z227;

Z226 = Z179.A[Z174];
INCL(Z226.A[0], Z170);
while (Z173 != NIL) {
Z226.A[0] = Z226.A[0] | Z179.A[Z173->Y1].A[0];
Z173 = Z173->Y0;
}
Z227 = FALSE;
while (!Z194(&Z226, Z176)) {
Z176 = Zpky9FDA_14();
Z227 = TRUE;
}
if (Z227) {
ZblNKKO_44((LONGCARD)ZblNKKO_3, (LONGCARD)ZblNKKO_20, Zpky9FDA_10.Y0);
}
Z178 = TRUE;
}

static void Z232
# ifdef HAVE_ARGS
(CARDINAL Z233)
# else
(Z233)
CARDINAL Z233;
# endif
{
CARDINAL Z187;

if (Z229 > Z230) {
Z229 = 0;
INC(Z231);
}
if (Z229 == 0) {
Z230 = Z233;
for (Z187 = 0; Z187 <= 31; Z187 += 1) {
Z198(&Z179.A[Z231], (SHORTCARD)Z187);
}
} else {
Z197(&Z179.A[Z231], (SHORTCARD)Z233);
}
INC(Z229);
}

static void Z234
# ifdef HAVE_ARGS
(CARDINAL Z233)
# else
(Z233)
CARDINAL Z233;
# endif
{
if (Z229 > Z230) {
Z229 = 0;
INC(Z231);
}
if (Z229 == 0) {
Z230 = Z233;
Z180.A[Z231] = 0X0L;
} else {
INCL(Z180.A[Z231], Z233);
}
INC(Z229);
}

static void Z189
 ARGS ((void))
{
Zmfy8_1 Z235;

Zpky9FDA_12();
Z231 = 0;
Z230 = 0;
Z229 = 0;
Z235 = Z232;
Zmfy8_9(Z235, (STRING)"+3789:;<=A.<=A-=A,A-HI.FHI-FI,I,F0789:;.7DE.8DE.9DE.:DE", 55L, 55L);
Zmfy8_9(Z235, (STRING)".;DE-DE,E9789:;<>?@BFGHI,,:,789:;<>?@BFGHI.,CJ-CJ,J-GJ,", 55L, 55L);
Zmfy8_9(Z235, (STRING)"G,=/=>?@.>?@.?FG.@FG.>FG0>?@FG-FG878:;<=>?@AFHIB-./3578", 55L, 55L);
Zmfy8_9(Z235, (STRING)"9:;<=>?@ABDEFGHI@./3578:;<=>?@ABDEFGHI,.,9,/?/3578:;<=>", 55L, 55L);
Zmfy8_9(Z235, (STRING)"?@ABDEFGHI>3578:;<=>?@ABDEFGHI,B.BFG.012,0,1>23578:;<=>", 55L, 55L);
Zmfy8_9(Z235, (STRING)"?@ADEFGHI?/35678:;<=>?@ADEFGHI,6?/34578:;<=>?@ADEFGHI,4", 55L, 55L);
Zmfy8_9(Z235, (STRING)"=3578:;<=>?@ADEFGHI>/3578:;<=>?@ADEFGHI8789:;<>?@BFHI,:", 55L, 55L);
Zmfy8_9(Z235, (STRING)",;,7,8,?,>,@,H,<578:;<>?@HI", 27L, 27L);
Z231 = 0;
Z230 = 0;
Z229 = 0;
Z235 = Z234;
Zmfy8_9(Z235, (STRING)"+++-67.679+++,5-89,5-892+,-.0452+,-.0450+,-.02+,-.0452+", 55L, 55L);
Zmfy8_9(Z235, (STRING)",-.0451+,.045//0451.013451.013451.013450/0345..06+,5,50", 55L, 55L);
Zmfy8_9(Z235, (STRING)".0245/.025/.0450+.045+", 22L, 22L);
}

void ZmfDOBA_3
 ARGS ((void))
{
Zpky9FDA_19();
}

static void Z191
# ifdef HAVE_ARGS
(ZmfDOBA_0 *Z239, Z171 Z241)
# else
(Z239, Z241)
ZmfDOBA_0 *Z239;
Z171 Z241;
# endif
{
ZmfDOBA_0 Z242;
ZmfDOBA_0 Z243;
ZmfDOBA_0 Z244;
ZmfDOBA_0 Z245;
ZmfDOBA_0 Z246;
Z172 Z247;

Z247.Y0 = Z241;
Z247.Y1 = 1;
Z248(&Z242, (Z171)ADR (Z247));
Z247.Y1 = 2;
Z249(&Z243, (Z171)ADR (Z247));
Z247.Y1 = 3;
Z250(&Z244, (Z171)ADR (Z247));
Z247.Y1 = 4;
Z251(&Z245, (Z171)ADR (Z247));
Z247.Y1 = 0;
Z252(&Z246, (Z171)ADR (Z247));
Zq0A4_96 = Zq0A4_114(Z243, Z244, Z246);
}

static void Z248
# ifdef HAVE_ARGS
(ZmfDOBA_0 *Z253, Z171 Z241)
# else
(Z253, Z241)
ZmfDOBA_0 *Z253;
Z171 Z241;
# endif
{
Zpky9FDA_0 Z254, Z255;
Zpky9FDA_0 Z256;
Zpky9FDA_0 Z257;

for (;;) {
if (Z176 == 29) {
Z256 = Zpky9FDA_10;
Z176 = Zpky9FDA_14();
Z178 = FALSE;
Zq0A4_1 = Z167((STRING)"Scanner", 7L);
for (;;) {
if (Z176 == 27) {
Z254 = Zpky9FDA_10;
Z176 = Zpky9FDA_14();
Z178 = FALSE;
Zq0A4_1 = Z254.U_1.V_2.Y2;
goto EXIT_2;
} else if (IN(0, Z180.A[Z176]) || Z178) {
goto EXIT_2;
}
Z211(7, 7, Z241);
} EXIT_2:;
goto EXIT_1;
} else if (IN(0, Z180.A[Z176]) || Z178) {
goto EXIT_1;
}
Z211(5, 5, Z241);
} EXIT_1:;
for (;;) {
if (Z176 == 30) {
Z257 = Zpky9FDA_10;
Z176 = Zpky9FDA_14();
Z178 = FALSE;
for (;;) {
if (Z176 == 27) {
Z255 = Zpky9FDA_10;
Z176 = Zpky9FDA_14();
Z178 = FALSE;
Zq0A4_2 = Z255.U_1.V_2.Y2;
goto EXIT_4;
} else if (IN(1, Z180.A[Z176]) || Z178) {
goto EXIT_4;
}
Z211(9, 9, Z241);
} EXIT_4:;
goto EXIT_3;
} else if (IN(1, Z180.A[Z176]) || Z178) {
goto EXIT_3;
}
Z211(8, 8, Z241);
} EXIT_3:;
}

static void Z249
# ifdef HAVE_ARGS
(ZmfDOBA_0 *Z259, Z171 Z241)
# else
(Z259, Z241)
ZmfDOBA_0 *Z259;
Z171 Z241;
# endif
{
Zpky9FDA_0 Z260;
Zpky9FDA_0 Z261;
Zpky9FDA_0 Z262;
Zpky9FDA_0 Z263;
Zpky9FDA_0 Z264;
ZmfDOBA_0 Z265, Z266, Z267, Z268, Z269;
Z172 Z247;

Z247.Y0 = Z241;
*Z259 = Zq0A4_116();
for (;;) {
if (IN(2, Z180.A[Z176])) {
for (;;) {
switch (Z176) {
case 12:;
Z260 = Zpky9FDA_10;
Z176 = Zpky9FDA_14();
Z178 = FALSE;
Z247.Y1 = 0;
Z270(&Z265, (Z171)ADR (Z247));
*Z259 = Zq0A4_117(*Z259, Zq0A4_119(Z265));
goto EXIT_6;
break;
case 13:;
Z261 = Zpky9FDA_10;
Z176 = Zpky9FDA_14();
Z178 = FALSE;
Z247.Y1 = 0;
Z270(&Z266, (Z171)ADR (Z247));
*Z259 = Zq0A4_117(*Z259, Zq0A4_120(Z266));
goto EXIT_6;
break;
case 14:;
Z262 = Zpky9FDA_10;
Z176 = Zpky9FDA_14();
Z178 = FALSE;
Z247.Y1 = 0;
Z270(&Z267, (Z171)ADR (Z247));
*Z259 = Zq0A4_117(*Z259, Zq0A4_121(Z267));
goto EXIT_6;
break;
case 15:;
Z263 = Zpky9FDA_10;
Z176 = Zpky9FDA_14();
Z178 = FALSE;
Z247.Y1 = 0;
Z270(&Z268, (Z171)ADR (Z247));
*Z259 = Zq0A4_117(*Z259, Zq0A4_122(Z268));
goto EXIT_6;
break;
case 16:;
Z264 = Zpky9FDA_10;
Z176 = Zpky9FDA_14();
Z178 = FALSE;
Z247.Y1 = 0;
Z270(&Z269, (Z171)ADR (Z247));
*Z259 = Zq0A4_117(*Z259, Zq0A4_123(Z269));
goto EXIT_6;
break;
default:
if (Z178) {
if (Z176 != 12) {
Z222(12, 11, Z241, &Z260);
} else {
Z260 = Zpky9FDA_10;
Z176 = Zpky9FDA_14();
Z178 = FALSE;
}
Z247.Y1 = 0;
Z270(&Z265, (Z171)ADR (Z247));
*Z259 = Zq0A4_117(*Z259, Zq0A4_119(Z265));
goto EXIT_6;
}
Z211(10, 10, Z241);
break;
}
} EXIT_6:;
} else if (Z176 == 17 || Z178) {
goto EXIT_5;
} else {
Z211(10, 10, Z241);
}
} EXIT_5:;
*Z259 = Zq0A4_150(*Z259);
}

static void Z270
# ifdef HAVE_ARGS
(ZmfDOBA_0 *Z271, Z171 Z241)
# else
(Z271, Z241)
ZmfDOBA_0 *Z271;
Z171 Z241;
# endif
{
ZmfDOBA_0 Z272;
Z172 Z247;

Z247.Y0 = Z241;
for (;;) {
switch (Z176) {
case 25:;
case 26:;
Z247.Y1 = 0;
Z273(&Z272, (Z171)ADR (Z247));
*Z271 = Z272;
goto EXIT_7;
break;
case 12:;
case 13:;
case 14:;
case 15:;
case 16:;
case 17:;
*Z271 = Zq0A4_125();
goto EXIT_7;
break;
default:
if (Z178) {
*Z271 = Zq0A4_125();
goto EXIT_7;
}
Z209(16, Z241);
break;
}
} EXIT_7:;
}

static void Z273
# ifdef HAVE_ARGS
(ZmfDOBA_0 *Z274, Z171 Z241)
# else
(Z274, Z241)
ZmfDOBA_0 *Z274;
Z171 Z241;
# endif
{
Zpky9FDA_0 Z275;
Zpky9FDA_0 Z276;

*Z274 = Zq0A4_125();
for (;;) {
if (Z176 == 25) {
Z275 = Zpky9FDA_10;
Z176 = Zpky9FDA_14();
Z178 = FALSE;
*Z274 = Zq0A4_126(*Z274, Zq0A4_127(Z275.Y0, Z275.U_1.V_3.Y3));
} else if (Z176 == 26 || Z178) {
goto EXIT_8;
} else {
Z211(16, 16, Z241);
}
} EXIT_8:;
if (Z176 != 26) {
Z222(26, 17, Z241, &Z276);
} else {
Z276 = Zpky9FDA_10;
Z176 = Zpky9FDA_14();
Z178 = FALSE;
}
*Z274 = Zq0A4_126(*Z274, Zq0A4_127(Z276.Y0, Z276.U_1.V_3.Y3));
*Z274 = Zq0A4_150(*Z274);
}

static void Z250
# ifdef HAVE_ARGS
(ZmfDOBA_0 *Z278, Z171 Z241)
# else
(Z278, Z241)
ZmfDOBA_0 *Z278;
Z171 Z241;
# endif
{
Zpky9FDA_0 Z279;
ZmfDOBA_0 Z280;
Z172 Z247;

Z247.Y0 = Z241;
if (Z176 != 17) {
Z222(17, 18, Z241, &Z279);
} else {
Z279 = Zpky9FDA_10;
Z176 = Zpky9FDA_14();
Z178 = FALSE;
}
*Z278 = Zq0A4_129();
for (;;) {
if (IN(3, Z180.A[Z176])) {
Z247.Y1 = 0;
Z281(&Z280, (Z171)ADR (Z247));
*Z278 = Zq0A4_130(*Z278, Z280);
} else if (IN(4, Z180.A[Z176]) || Z178) {
goto EXIT_9;
} else {
Z211(18, 18, Z241);
}
} EXIT_9:;
*Z278 = Zq0A4_150(*Z278);
}

static void Z281
# ifdef HAVE_ARGS
(ZmfDOBA_0 *Z282, Z171 Z241)
# else
(Z282, Z241)
ZmfDOBA_0 *Z282;
Z171 Z241;
# endif
{
Zpky9FDA_0 Z283;
Zpky9FDA_0 Z284, Z285;
ZmfDOBA_0 Z286;
ZmfDOBA_0 Z287;
Z172 Z247;

Z247.Y0 = Z241;
for (;;) {
switch (Z176) {
case 12:;
case 13:;
case 14:;
case 15:;
case 16:;
case 17:;
case 19:;
case 20:;
case 21:;
case 23:;
case 27:;
case 29:;
case 30:;
Z247.Y1 = 19;
Z288(&Z286, (Z171)ADR (Z247));
*Z282 = Z286;
goto EXIT_10;
break;
case 28:;
Z247.Y1 = 19;
Z289(&Z287, (Z171)ADR (Z247));
*Z282 = Z287;
goto EXIT_10;
break;
default:
if (Z178) {
Z247.Y1 = 19;
Z288(&Z286, (Z171)ADR (Z247));
*Z282 = Z286;
goto EXIT_10;
}
Z211(20, 20, Z241);
break;
}
} EXIT_10:;
for (;;) {
switch (Z176) {
case 1:;
Z176 = Zpky9FDA_14();
Z178 = FALSE;
for (;;) {
switch (Z176) {
case 24:;
Z283 = Zpky9FDA_10;
Z176 = Zpky9FDA_14();
Z178 = FALSE;
Z166 = (*Z282)->U_1.V_21.Y20.Y2;
for (;;) {
if (Z176 == 31) {
Z176 = Zpky9FDA_14();
Z178 = FALSE;
if (Z176 != 28) {
Z222(28, 25, Z241, &Z284);
} else {
Z284 = Zpky9FDA_10;
Z176 = Zpky9FDA_14();
Z178 = FALSE;
}
Z166 = Z284.U_1.V_2.Y2;
goto EXIT_13;
} else if (IN(5, Z180.A[Z176]) || Z178) {
goto EXIT_13;
}
Z211(23, 23, Z241);
} EXIT_13:;
*Z282 = Zq0A4_131(*Z282, Z166, Z283.Y0, Z283.U_1.V_1.Y1);
goto EXIT_12;
break;
case 31:;
Z176 = Zpky9FDA_14();
Z178 = FALSE;
if (Z176 != 28) {
Z222(28, 25, Z241, &Z285);
} else {
Z285 = Zpky9FDA_10;
Z176 = Zpky9FDA_14();
Z178 = FALSE;
}
*Z282 = Zq0A4_131(*Z282, Z285.U_1.V_2.Y2, Zpky9FDA_10.Y0, (LONGINT)Zpky9FDA_1);
goto EXIT_12;
break;
case 12:;
case 13:;
case 14:;
case 15:;
case 16:;
case 17:;
case 18:;
case 19:;
case 20:;
case 21:;
case 22:;
case 23:;
case 27:;
case 28:;
case 29:;
case 30:;
*Z282 = Zq0A4_131(*Z282, (*Z282)->U_1.V_21.Y20.Y2, Zpky9FDA_10.Y0, (LONGINT)Zpky9FDA_1);
goto EXIT_12;
break;
default:
if (Z178) {
*Z282 = Zq0A4_131(*Z282, (*Z282)->U_1.V_21.Y20.Y2, Zpky9FDA_10.Y0, (LONGINT)Zpky9FDA_1);
goto EXIT_12;
}
Z209(22, Z241);
break;
}
} EXIT_12:;
goto EXIT_11;
break;
case 12:;
case 13:;
case 14:;
case 15:;
case 16:;
case 17:;
case 18:;
case 19:;
case 20:;
case 21:;
case 22:;
case 23:;
case 27:;
case 28:;
case 29:;
case 30:;
*Z282 = Zq0A4_131(*Z282, (*Z282)->U_1.V_21.Y20.Y2, Zpky9FDA_10.Y0, (LONGINT)Zpky9FDA_1);
goto EXIT_11;
break;
default:
if (Z178) {
*Z282 = Zq0A4_131(*Z282, (*Z282)->U_1.V_21.Y20.Y2, Zpky9FDA_10.Y0, (LONGINT)Zpky9FDA_1);
goto EXIT_11;
}
Z209(19, Z241);
break;
}
} EXIT_11:;
}

static void Z251
# ifdef HAVE_ARGS
(ZmfDOBA_0 *Z291, Z171 Z241)
# else
(Z291, Z241)
ZmfDOBA_0 *Z291;
Z171 Z241;
# endif
{
Zpky9FDA_0 Z292;
Zpky9FDA_0 Z293;
Zpky9FDA_0 Z294;
Zpky9FDA_0 Z295;
Zpky9FDA_0 Z254;
Zpky9FDA_0 Z284;

for (;;) {
if (Z176 == 18) {
Z292 = Zpky9FDA_10;
Z176 = Zpky9FDA_14();
Z178 = FALSE;
for (;;) {
if (IN(6, Z180.A[Z176])) {
for (;;) {
switch (Z176) {
case 20:;
Z294 = Zpky9FDA_10;
Z176 = Zpky9FDA_14();
Z178 = FALSE;
goto EXIT_16;
break;
case 21:;
Z295 = Zpky9FDA_10;
Z176 = Zpky9FDA_14();
Z178 = FALSE;
goto EXIT_16;
break;
case 19:;
Z293 = Zpky9FDA_10;
Z176 = Zpky9FDA_14();
Z178 = FALSE;
goto EXIT_16;
break;
default:
if (Z178) {
if (Z176 != 20) {
Z222(20, 29, Z241, &Z294);
} else {
Z294 = Zpky9FDA_10;
Z176 = Zpky9FDA_14();
Z178 = FALSE;
}
goto EXIT_16;
}
Z211(32, 32, Z241);
break;
}
} EXIT_16:;
for (;;) {
for (;;) {
switch (Z176) {
case 27:;
Z254 = Zpky9FDA_10;
Z176 = Zpky9FDA_14();
Z178 = FALSE;
goto EXIT_18;
break;
case 28:;
Z284 = Zpky9FDA_10;
Z176 = Zpky9FDA_14();
Z178 = FALSE;
goto EXIT_18;
break;
default:
if (Z178) {
if (Z176 != 27) {
Z222(27, 9, Z241, &Z254);
} else {
Z254 = Zpky9FDA_10;
Z176 = Zpky9FDA_14();
Z178 = FALSE;
}
goto EXIT_18;
}
Z211(33, 33, Z241);
break;
}
} EXIT_18:;
if (!IN(7, Z180.A[Z176])) {
if (IN(8, Z180.A[Z176])) {
goto EXIT_17;
}
Z211(33, 33, Z241);
if (!IN(7, Z180.A[Z176])) {
goto EXIT_17;
}
}
} EXIT_17:;
} else if (Z176 == 22 || Z178) {
goto EXIT_15;
} else {
Z211(28, 28, Z241);
}
} EXIT_15:;
ZblNKKO_46((STRING)"OPER part ignored", 17L, (LONGCARD)ZblNKKO_17, Z292.Y0);
goto EXIT_14;
} else if (Z176 == 22 || Z178) {
goto EXIT_14;
}
Z211(26, 26, Z241);
} EXIT_14:;
}

static void Z252
# ifdef HAVE_ARGS
(ZmfDOBA_0 *Z296, Z171 Z241)
# else
(Z296, Z241)
ZmfDOBA_0 *Z296;
Z171 Z241;
# endif
{
Zpky9FDA_0 Z297;
ZmfDOBA_0 Z298;
Z172 Z247;

Z247.Y0 = Z241;
if (Z176 != 22) {
Z222(22, 34, Z241, &Z297);
} else {
Z297 = Zpky9FDA_10;
Z176 = Zpky9FDA_14();
Z178 = FALSE;
}
*Z296 = Zq0A4_134();
for (;;) {
if (IN(9, Z180.A[Z176])) {
Z247.Y1 = 0;
Z299(&Z298, (Z171)ADR (Z247));
*Z296 = Zq0A4_135(*Z296, Z298);
} else if (Z176 == 0 || Z178) {
goto EXIT_19;
} else {
Z211(34, 34, Z241);
}
} EXIT_19:;
*Z296 = Zq0A4_150(*Z296);
}

static void Z299
# ifdef HAVE_ARGS
(ZmfDOBA_0 *Z300, Z171 Z241)
# else
(Z300, Z241)
ZmfDOBA_0 *Z300;
Z171 Z241;
# endif
{
Zpky9FDA_0 Z301;
ZmfDOBA_0 Z302;
ZmfDOBA_0 Z303;
ZmfDOBA_0 Z304;
Z172 Z247;

Z247.Y0 = Z241;
Z247.Y1 = 35;
Z305(&Z302, (Z171)ADR (Z247));
if (Z176 != 2) {
Z222(2, 35, Z241, &Z301);
} else {
Z301 = Zpky9FDA_10;
Z176 = Zpky9FDA_14();
Z178 = FALSE;
}
Z247.Y1 = 36;
Z306(&Z303, (Z171)ADR (Z247));
Z247.Y1 = 37;
Z307(&Z304, (Z171)ADR (Z247));
if (Z176 != 3) {
Z193(3, 37, Z241);
} else {
Z176 = Zpky9FDA_14();
Z178 = FALSE;
}
*Z300 = Zq0A4_136(Z301.Y0, Z302, Z303, Z304);
}

static void Z306
# ifdef HAVE_ARGS
(ZmfDOBA_0 *Z308, Z171 Z241)
# else
(Z308, Z241)
ZmfDOBA_0 *Z308;
Z171 Z241;
# endif
{
Zpky9FDA_0 Z262;
ZmfDOBA_0 Z272;
Z172 Z247;

Z247.Y0 = Z241;
for (;;) {
switch (Z176) {
case 14:;
Z262 = Zpky9FDA_10;
Z176 = Zpky9FDA_14();
Z178 = FALSE;
Z247.Y1 = 0;
Z273(&Z272, (Z171)ADR (Z247));
*Z308 = Z272;
goto EXIT_20;
break;
case 3:;
case 4:;
case 8:;
case 10:;
case 12:;
case 13:;
case 15:;
case 16:;
case 17:;
case 18:;
case 19:;
case 20:;
case 21:;
case 22:;
case 23:;
case 25:;
case 26:;
case 27:;
case 28:;
case 29:;
case 30:;
*Z308 = Zq0A4_125();
goto EXIT_20;
break;
default:
if (Z178) {
*Z308 = Zq0A4_125();
goto EXIT_20;
}
Z209(38, Z241);
break;
}
} EXIT_20:;
}

static void Z307
# ifdef HAVE_ARGS
(ZmfDOBA_0 *Z309, Z171 Z241)
# else
(Z309, Z241)
ZmfDOBA_0 *Z309;
Z171 Z241;
# endif
{
ZmfDOBA_0 Z310, Z311;
Z172 Z247;

Z247.Y0 = Z241;
Z247.Y1 = 39;
Z312(&Z310, (Z171)ADR (Z247));
*Z309 = Z310;
for (;;) {
if (Z176 == 4) {
*Z309 = Zq0A4_146(Z310->U_1.V_26.Y25.Y1, Zq0A4_145(Zpky9FDA_10.Y0), Z310);
for (;;) {
Z176 = Zpky9FDA_14();
Z178 = FALSE;
Z247.Y1 = 0;
Z312(&Z311, (Z171)ADR (Z247));
*Z309 = Zq0A4_146(Z311->U_1.V_26.Y25.Y1, *Z309, Z311);
if (!(Z176 == 4)) {
if (Z176 == 3) {
goto EXIT_22;
}
Z211(39, 39, Z241);
if (!(Z176 == 4)) {
goto EXIT_22;
}
}
} EXIT_22:;
*Z309 = Zq0A4_150(*Z309);
goto EXIT_21;
} else if (Z176 == 3 || Z178) {
goto EXIT_21;
}
Z211(39, 39, Z241);
} EXIT_21:;
}

static void Z312
# ifdef HAVE_ARGS
(ZmfDOBA_0 *Z315, Z171 Z241)
# else
(Z315, Z241)
ZmfDOBA_0 *Z315;
Z171 Z241;
# endif
{
ZmfDOBA_0 Z316, Z317;
ZmfDOBA_0 Z318;
Z172 Z247;

Z247.Y0 = Z241;
for (;;) {
switch (Z176) {
case 3:;
case 4:;
case 23:;
*Z315 = Zq0A4_148(Zpky9FDA_10.Y0);
goto EXIT_23;
break;
case 8:;
case 10:;
case 12:;
case 13:;
case 15:;
case 16:;
case 17:;
case 18:;
case 19:;
case 20:;
case 21:;
case 22:;
case 25:;
case 26:;
case 27:;
case 28:;
case 29:;
case 30:;
Z247.Y1 = 41;
Z319(&Z316, (Z171)ADR (Z247));
*Z315 = Z316;
for (;;) {
if (IN(10, Z180.A[Z176])) {
*Z315 = Zq0A4_149(Z316->U_1.V_26.Y25.Y1, Zq0A4_148(Zpky9FDA_10.Y0), Z316);
for (;;) {
Z247.Y1 = 42;
Z319(&Z317, (Z171)ADR (Z247));
*Z315 = Zq0A4_149(Z317->U_1.V_26.Y25.Y1, *Z315, Z317);
if (!IN(10, Z180.A[Z176])) {
if (IN(11, Z180.A[Z176])) {
goto EXIT_25;
}
Z211(41, 41, Z241);
if (!IN(10, Z180.A[Z176])) {
goto EXIT_25;
}
}
} EXIT_25:;
*Z315 = Zq0A4_150(*Z315);
goto EXIT_24;
} else if (IN(11, Z180.A[Z176]) || Z178) {
goto EXIT_24;
}
Z211(41, 41, Z241);
} EXIT_24:;
goto EXIT_23;
break;
default:
if (Z178) {
*Z315 = Zq0A4_148(Zpky9FDA_10.Y0);
goto EXIT_23;
}
Z211(41, 41, Z241);
break;
}
} EXIT_23:;
Z247.Y1 = 0;
Z320(&Z318, (Z171)ADR (Z247));
}

static void Z320
# ifdef HAVE_ARGS
(ZmfDOBA_0 *Z321, Z171 Z241)
# else
(Z321, Z241)
ZmfDOBA_0 *Z321;
Z171 Z241;
# endif
{
Zpky9FDA_0 Z322;
Zpky9FDA_0 Z254;
Zpky9FDA_0 Z284;

for (;;) {
if (Z176 == 23) {
Z322 = Zpky9FDA_10;
Z176 = Zpky9FDA_14();
Z178 = FALSE;
for (;;) {
switch (Z176) {
case 27:;
Z254 = Zpky9FDA_10;
Z176 = Zpky9FDA_14();
Z178 = FALSE;
goto EXIT_27;
break;
case 28:;
Z284 = Zpky9FDA_10;
Z176 = Zpky9FDA_14();
Z178 = FALSE;
goto EXIT_27;
break;
default:
if (Z178) {
if (Z176 != 27) {
Z222(27, 9, Z241, &Z254);
} else {
Z254 = Zpky9FDA_10;
Z176 = Zpky9FDA_14();
Z178 = FALSE;
}
goto EXIT_27;
}
Z211(33, 33, Z241);
break;
}
} EXIT_27:;
ZblNKKO_46((STRING)"PREC part ignored", 17L, (LONGCARD)ZblNKKO_17, Z322.Y0);
goto EXIT_26;
} else if (IN(12, Z180.A[Z176]) || Z178) {
goto EXIT_26;
}
Z211(42, 42, Z241);
} EXIT_26:;
}

static void Z319
# ifdef HAVE_ARGS
(ZmfDOBA_0 *Z323, Z171 Z241)
# else
(Z323, Z241)
ZmfDOBA_0 *Z323;
Z171 Z241;
# endif
{
Zpky9FDA_0 Z324;
Zpky9FDA_0 Z325;
Zpky9FDA_0 Z326;
ZmfDOBA_0 Z327, Z328;
Z172 Z247;

Z247.Y0 = Z241;
Z247.Y1 = 44;
Z329(&Z327, (Z171)ADR (Z247));
for (;;) {
switch (Z176) {
case 5:;
Z324 = Zpky9FDA_10;
Z176 = Zpky9FDA_14();
Z178 = FALSE;
*Z323 = Zq0A4_139(Z324.Y0, Z327);
goto EXIT_28;
break;
case 6:;
Z325 = Zpky9FDA_10;
Z176 = Zpky9FDA_14();
Z178 = FALSE;
*Z323 = Zq0A4_140(Z325.Y0, Z327);
goto EXIT_28;
break;
case 7:;
Z326 = Zpky9FDA_10;
Z176 = Zpky9FDA_14();
Z178 = FALSE;
Z247.Y1 = 0;
Z329(&Z328, (Z171)ADR (Z247));
*Z323 = Zq0A4_141(Z326.Y0, Z327, Z328);
goto EXIT_28;
break;
case 3:;
case 4:;
case 8:;
case 9:;
case 10:;
case 11:;
case 12:;
case 13:;
case 15:;
case 16:;
case 17:;
case 18:;
case 19:;
case 20:;
case 21:;
case 22:;
case 23:;
case 25:;
case 26:;
case 27:;
case 28:;
case 29:;
case 30:;
*Z323 = Z327;
goto EXIT_28;
break;
default:
if (Z178) {
*Z323 = Z327;
goto EXIT_28;
}
Z209(44, Z241);
break;
}
} EXIT_28:;
}

static void Z329
# ifdef HAVE_ARGS
(ZmfDOBA_0 *Z330, Z171 Z241)
# else
(Z330, Z241)
ZmfDOBA_0 *Z330;
Z171 Z241;
# endif
{
Zpky9FDA_0 Z331;
ZmfDOBA_0 Z272;
ZmfDOBA_0 Z287;
ZmfDOBA_0 Z302;
ZmfDOBA_0 Z332;
Z172 Z247;

Z247.Y0 = Z241;
for (;;) {
switch (Z176) {
case 10:;
Z331 = Zpky9FDA_10;
Z176 = Zpky9FDA_14();
Z178 = FALSE;
Z247.Y1 = 49;
Z333(&Z332, (Z171)ADR (Z247));
if (Z176 != 11) {
Z193(11, 49, Z241);
} else {
Z176 = Zpky9FDA_14();
Z178 = FALSE;
}
*Z330 = Zq0A4_138(Z331.Y0, Z332);
goto EXIT_29;
break;
case 8:;
Z176 = Zpky9FDA_14();
Z178 = FALSE;
Z247.Y1 = 51;
Z333(&Z332, (Z171)ADR (Z247));
if (Z176 != 9) {
Z193(9, 51, Z241);
} else {
Z176 = Zpky9FDA_14();
Z178 = FALSE;
}
*Z330 = Z332;
goto EXIT_29;
break;
case 12:;
case 13:;
case 15:;
case 16:;
case 17:;
case 18:;
case 19:;
case 20:;
case 21:;
case 22:;
case 27:;
case 29:;
case 30:;
Z247.Y1 = 0;
Z305(&Z302, (Z171)ADR (Z247));
*Z330 = Zq0A4_143(Z302->U_1.V_21.Y20.Y1, Z302);
goto EXIT_29;
break;
case 28:;
Z247.Y1 = 0;
Z289(&Z287, (Z171)ADR (Z247));
*Z330 = Zq0A4_143(Z287->U_1.V_21.Y20.Y1, Z287);
goto EXIT_29;
break;
case 25:;
case 26:;
Z247.Y1 = 0;
Z273(&Z272, (Z171)ADR (Z247));
*Z330 = Zq0A4_142(Z272->U_1.V_15.Y14.Y2->U_1.V_16.Y15.Y1, Z272);
goto EXIT_29;
break;
default:
if (Z178) {
Z247.Y1 = 0;
Z305(&Z302, (Z171)ADR (Z247));
*Z330 = Zq0A4_143(Z302->U_1.V_21.Y20.Y1, Z302);
goto EXIT_29;
}
Z211(52, 52, Z241);
break;
}
} EXIT_29:;
}

static void Z333
# ifdef HAVE_ARGS
(ZmfDOBA_0 *Z337, Z171 Z241)
# else
(Z337, Z241)
ZmfDOBA_0 *Z337;
Z171 Z241;
# endif
{
ZmfDOBA_0 Z338, Z339;
Z172 Z247;

Z247.Y0 = Z241;
Z247.Y1 = 39;
Z340(&Z338, (Z171)ADR (Z247));
*Z337 = Z338;
for (;;) {
if (Z176 == 4) {
*Z337 = Zq0A4_146(Z338->U_1.V_26.Y25.Y1, Zq0A4_145(Zpky9FDA_10.Y0), Z338);
for (;;) {
Z176 = Zpky9FDA_14();
Z178 = FALSE;
Z247.Y1 = 0;
Z340(&Z339, (Z171)ADR (Z247));
*Z337 = Zq0A4_146(Z339->U_1.V_26.Y25.Y1, *Z337, Z339);
if (!(Z176 == 4)) {
if (IN(13, Z180.A[Z176])) {
goto EXIT_31;
}
Z211(39, 39, Z241);
if (!(Z176 == 4)) {
goto EXIT_31;
}
}
} EXIT_31:;
*Z337 = Zq0A4_150(*Z337);
goto EXIT_30;
} else if (IN(13, Z180.A[Z176]) || Z178) {
goto EXIT_30;
}
Z211(39, 39, Z241);
} EXIT_30:;
}

static void Z340
# ifdef HAVE_ARGS
(ZmfDOBA_0 *Z341, Z171 Z241)
# else
(Z341, Z241)
ZmfDOBA_0 *Z341;
Z171 Z241;
# endif
{
ZmfDOBA_0 Z316, Z317;
Z172 Z247;

Z247.Y0 = Z241;
for (;;) {
switch (Z176) {
case 4:;
case 9:;
case 11:;
*Z341 = Zq0A4_148(Zpky9FDA_10.Y0);
goto EXIT_32;
break;
case 8:;
case 10:;
case 12:;
case 13:;
case 15:;
case 16:;
case 17:;
case 18:;
case 19:;
case 20:;
case 21:;
case 22:;
case 25:;
case 26:;
case 27:;
case 28:;
case 29:;
case 30:;
Z247.Y1 = 52;
Z319(&Z316, (Z171)ADR (Z247));
*Z341 = Z316;
for (;;) {
if (IN(10, Z180.A[Z176])) {
*Z341 = Zq0A4_149(Z316->U_1.V_26.Y25.Y1, Zq0A4_148(Zpky9FDA_10.Y0), Z316);
for (;;) {
Z247.Y1 = 0;
Z319(&Z317, (Z171)ADR (Z247));
*Z341 = Zq0A4_149(Z317->U_1.V_26.Y25.Y1, *Z341, Z317);
if (!IN(10, Z180.A[Z176])) {
if (IN(14, Z180.A[Z176])) {
goto EXIT_34;
}
Z211(52, 52, Z241);
if (!IN(10, Z180.A[Z176])) {
goto EXIT_34;
}
}
} EXIT_34:;
*Z341 = Zq0A4_150(*Z341);
goto EXIT_33;
} else if (IN(14, Z180.A[Z176]) || Z178) {
goto EXIT_33;
}
Z211(52, 52, Z241);
} EXIT_33:;
goto EXIT_32;
break;
default:
if (Z178) {
*Z341 = Zq0A4_148(Zpky9FDA_10.Y0);
goto EXIT_32;
}
Z209(52, Z241);
break;
}
} EXIT_32:;
}

static void Z288
# ifdef HAVE_ARGS
(ZmfDOBA_0 *Z342, Z171 Z241)
# else
(Z342, Z241)
ZmfDOBA_0 *Z342;
Z171 Z241;
# endif
{
Zpky9FDA_0 Z262;
Zpky9FDA_0 Z322;
Zpky9FDA_0 Z254;
ZmfDOBA_0 Z343;
Z172 Z247;

Z247.Y0 = Z241;
for (;;) {
switch (Z176) {
case 27:;
Z254 = Zpky9FDA_10;
Z176 = Zpky9FDA_14();
Z178 = FALSE;
*Z342 = Zq0A4_132(Z254.Y0, Z254.U_1.V_2.Y2, FALSE);
goto EXIT_35;
break;
case 12:;
case 13:;
case 15:;
case 16:;
case 17:;
case 19:;
case 20:;
case 21:;
case 29:;
case 30:;
Z247.Y1 = 0;
Z344(&Z343, (Z171)ADR (Z247));
*Z342 = Z343;
goto EXIT_35;
break;
case 14:;
Z262 = Zpky9FDA_10;
Z176 = Zpky9FDA_14();
Z178 = FALSE;
*Z342 = Zq0A4_132(Z262.Y0, Z167((STRING)"LOCAL", 5L), FALSE);
goto EXIT_35;
break;
case 23:;
Z322 = Zpky9FDA_10;
Z176 = Zpky9FDA_14();
Z178 = FALSE;
*Z342 = Zq0A4_132(Z322.Y0, Z167((STRING)"PREC", 4L), FALSE);
goto EXIT_35;
break;
default:
if (Z178) {
if (Z176 != 27) {
Z222(27, 9, Z241, &Z254);
} else {
Z254 = Zpky9FDA_10;
Z176 = Zpky9FDA_14();
Z178 = FALSE;
}
*Z342 = Zq0A4_132(Z254.Y0, Z254.U_1.V_2.Y2, FALSE);
goto EXIT_35;
}
Z211(54, 54, Z241);
break;
}
} EXIT_35:;
}

static void Z305
# ifdef HAVE_ARGS
(ZmfDOBA_0 *Z345, Z171 Z241)
# else
(Z345, Z241)
ZmfDOBA_0 *Z345;
Z171 Z241;
# endif
{
Zpky9FDA_0 Z292;
Zpky9FDA_0 Z297;
Zpky9FDA_0 Z254;
ZmfDOBA_0 Z343;
Z172 Z247;

Z247.Y0 = Z241;
for (;;) {
switch (Z176) {
case 27:;
Z254 = Zpky9FDA_10;
Z176 = Zpky9FDA_14();
Z178 = FALSE;
*Z345 = Zq0A4_132(Z254.Y0, Z254.U_1.V_2.Y2, FALSE);
goto EXIT_36;
break;
case 12:;
case 13:;
case 15:;
case 16:;
case 17:;
case 19:;
case 20:;
case 21:;
case 29:;
case 30:;
Z247.Y1 = 0;
Z344(&Z343, (Z171)ADR (Z247));
*Z345 = Z343;
goto EXIT_36;
break;
case 18:;
Z292 = Zpky9FDA_10;
Z176 = Zpky9FDA_14();
Z178 = FALSE;
*Z345 = Zq0A4_132(Z292.Y0, Z167((STRING)"OPER", 4L), FALSE);
goto EXIT_36;
break;
case 22:;
Z297 = Zpky9FDA_10;
Z176 = Zpky9FDA_14();
Z178 = FALSE;
*Z345 = Zq0A4_132(Z297.Y0, Z167((STRING)"RULE", 4L), FALSE);
goto EXIT_36;
break;
default:
if (Z178) {
if (Z176 != 27) {
Z222(27, 9, Z241, &Z254);
} else {
Z254 = Zpky9FDA_10;
Z176 = Zpky9FDA_14();
Z178 = FALSE;
}
*Z345 = Zq0A4_132(Z254.Y0, Z254.U_1.V_2.Y2, FALSE);
goto EXIT_36;
}
Z211(34, 34, Z241);
break;
}
} EXIT_36:;
}

static void Z344
# ifdef HAVE_ARGS
(ZmfDOBA_0 *Z346, Z171 Z241)
# else
(Z346, Z241)
ZmfDOBA_0 *Z346;
Z171 Z241;
# endif
{
Zpky9FDA_0 Z260;
Zpky9FDA_0 Z261;
Zpky9FDA_0 Z263;
Zpky9FDA_0 Z264;
Zpky9FDA_0 Z279;
Zpky9FDA_0 Z293;
Zpky9FDA_0 Z294;
Zpky9FDA_0 Z295;
Zpky9FDA_0 Z256;
Zpky9FDA_0 Z257;

for (;;) {
switch (Z176) {
case 15:;
Z263 = Zpky9FDA_10;
Z176 = Zpky9FDA_14();
Z178 = FALSE;
*Z346 = Zq0A4_132(Z263.Y0, Z167((STRING)"BEGIN", 5L), FALSE);
goto EXIT_37;
break;
case 16:;
Z264 = Zpky9FDA_10;
Z176 = Zpky9FDA_14();
Z178 = FALSE;
*Z346 = Zq0A4_132(Z264.Y0, Z167((STRING)"CLOSE", 5L), FALSE);
goto EXIT_37;
break;
case 12:;
Z260 = Zpky9FDA_10;
Z176 = Zpky9FDA_14();
Z178 = FALSE;
*Z346 = Zq0A4_132(Z260.Y0, Z167((STRING)"EXPORT", 6L), FALSE);
goto EXIT_37;
break;
case 13:;
Z261 = Zpky9FDA_10;
Z176 = Zpky9FDA_14();
Z178 = FALSE;
*Z346 = Zq0A4_132(Z261.Y0, Z167((STRING)"GLOBAL", 6L), FALSE);
goto EXIT_37;
break;
case 20:;
Z294 = Zpky9FDA_10;
Z176 = Zpky9FDA_14();
Z178 = FALSE;
*Z346 = Zq0A4_132(Z294.Y0, Z167((STRING)"LEFT", 4L), FALSE);
goto EXIT_37;
break;
case 19:;
Z293 = Zpky9FDA_10;
Z176 = Zpky9FDA_14();
Z178 = FALSE;
*Z346 = Zq0A4_132(Z293.Y0, Z167((STRING)"NONE", 4L), FALSE);
goto EXIT_37;
break;
case 30:;
Z257 = Zpky9FDA_10;
Z176 = Zpky9FDA_14();
Z178 = FALSE;
*Z346 = Zq0A4_132(Z257.Y0, Z167((STRING)"PARSER", 6L), FALSE);
goto EXIT_37;
break;
case 21:;
Z295 = Zpky9FDA_10;
Z176 = Zpky9FDA_14();
Z178 = FALSE;
*Z346 = Zq0A4_132(Z295.Y0, Z167((STRING)"RIGHT", 5L), FALSE);
goto EXIT_37;
break;
case 29:;
Z256 = Zpky9FDA_10;
Z176 = Zpky9FDA_14();
Z178 = FALSE;
*Z346 = Zq0A4_132(Z256.Y0, Z167((STRING)"SCANNER", 7L), FALSE);
goto EXIT_37;
break;
case 17:;
Z279 = Zpky9FDA_10;
Z176 = Zpky9FDA_14();
Z178 = FALSE;
*Z346 = Zq0A4_132(Z279.Y0, Z167((STRING)"TOKEN", 5L), FALSE);
goto EXIT_37;
break;
default:
if (Z178) {
if (Z176 != 15) {
Z222(15, 55, Z241, &Z263);
} else {
Z263 = Zpky9FDA_10;
Z176 = Zpky9FDA_14();
Z178 = FALSE;
}
*Z346 = Zq0A4_132(Z263.Y0, Z167((STRING)"BEGIN", 5L), FALSE);
goto EXIT_37;
}
Z211(64, 64, Z241);
break;
}
} EXIT_37:;
}

static void Z289
# ifdef HAVE_ARGS
(ZmfDOBA_0 *Z347, Z171 Z241)
# else
(Z347, Z241)
ZmfDOBA_0 *Z347;
Z171 Z241;
# endif
{
Zpky9FDA_0 Z284;

if (Z176 != 28) {
Z222(28, 25, Z241, &Z284);
} else {
Z284 = Zpky9FDA_10;
Z176 = Zpky9FDA_14();
Z178 = FALSE;
}
*Z347 = Zq0A4_132(Z284.Y0, Z284.U_1.V_2.Y2, TRUE);
}

void BEGIN_Parser ARGS ((void))
{
  static BOOLEAN has_been_called = FALSE;
  if (has_been_called) return;
  has_been_called = TRUE;
BEGIN_Tree ();
BEGIN_Pack ();
BEGIN_Position ();
BEGIN_Errors ();
BEGIN_Scanner ();
BEGIN_Strings ();
BEGIN_Idents ();
BEGIN_Strings ();
BEGIN_Errors ();
BEGIN_Scanner ();
BEGIN_Tree ();

}
