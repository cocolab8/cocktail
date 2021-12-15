#include "SYSTEM_.h"

#ifndef DEFINITION_Checks
#include "Checks.h"
#endif

#ifndef DEFINITION_rSystem
#include "rSystem.h"
#endif

#ifndef DEFINITION_General
#include "General.h"
#endif

#ifndef DEFINITION_Pack
#include "Pack.h"
#endif

#ifndef DEFINITION_Position
#include "Position.h"
#endif

#ifndef DEFINITION_IO
#include "IO.h"
#endif

#ifndef DEFINITION_DynArray
#include "DynArray.h"
#endif

#ifndef DEFINITION_Strings
#include "Strings.h"
#endif

#ifndef DEFINITION_WriterSource
#include "WriterSource.h"
#endif

#ifndef DEFINITION_Position
#include "Position.h"
#endif

#ifndef DEFINITION_Strings
#include "Strings.h"
#endif

#ifndef DEFINITION_Idents
#include "Idents.h"
#endif

#ifndef DEFINITION_Texts
#include "Texts.h"
#endif

#ifndef DEFINITION_Reader
#include "Reader.h"
#endif

#ifndef DEFINITION_Writer
#include "Writer.h"
#endif

INTEGER Zt3EGCA_2;
INTEGER Zt3EGCA_3;
Zt3EGCA_0 Zt3EGCA_4;
PROC Zt3EGCA_5;

static Zp1PEAFD_2 Z137;
static Zfb3DLQ_0 Z138;
static void Z139 ARGS ((CHAR Z140[], LONGCARD O_1));
#define Z145	8
#define Z146	0
#define Z147	16
#define Z148	(1024 * 8 + 256)
#define Z149	'\0'
#define Z150	((CHAR)'\377')
#define Z151	'\n'
#define Z152	((CHAR)'\177')
#define Z153	39
#define Z154	1389
#define Z155	26
#define Z156	27
#define Z157	0
#define Z158	1
#define Z159	3
#define Z160	5
#define Z161	7
typedef SHORTCARD Z162;
typedef Z162 Z163;
typedef Z162 Z164;
typedef struct S_1 {
Z163 Y0, Y1;
} Z165;
typedef Z165 *Z168;
typedef struct S_12 {
CHAR A[1000000 + 1];
} *Z169;
typedef CHAR Z170;
static struct S_2 {
LONGCARD A[Z153 + 1];
} Z171;
static struct S_3 {
Z163 A[Z153 + 1];
} Z172;
static struct S_4 {
Z165 A[Z154 + 1];
} Z173;
static struct S_5 {
Z163 A[Z153 + 1];
} Z174;
static struct S_6 {
CHAR A[Z150 + 1];
} Z175, Z176;
static struct S_7 {
Z163 A[1000000 + 1];
} *Z177;
static LONGINT Z178;
static Z163 Z179;
static Z163 Z180;
static CHAR Z181;
static BOOLEAN Z182;
static ZDz6VQCC_4 Z183;
static BOOLEAN Z185;
static Z169 Z186;
static INTEGER Z187;
static LONGINT Z188;
static INTEGER Z189;
static INTEGER Z190;
static INTEGER Z191;
static CARDINAL Z192;
static INTEGER Z193;
static SHORTCARD Z194;
static struct S_8 {
struct S_9 {
ZDz6VQCC_4 Y0;
BOOLEAN Y1;
Z169 Y2;
INTEGER Y3;
LONGINT Y4;
INTEGER Y5;
INTEGER Y6;
INTEGER Y7;
CARDINAL Y8;
INTEGER Y9;
} A[Z147 - 1 + 1];
} Z195;
#define Z206	16
static LONGINT Z207;
static struct S_10 {
Z163 A[100000 + 1];
} *Z208;
static LONGINT Z209;
static void Z210 ARGS ((Z163 Z211));
static void Z214 ARGS ((void));
static void Z241 ARGS ((void));
static void Z213 ARGS ((Z163 Z254));
static void Z255 ARGS ((void));
static void Z230 ARGS ((void));
static void Z257 ARGS ((INTEGER Z258));
static void Z231 ARGS ((void));
static void Z259 ARGS ((INTEGER Z260));
static void Z261 ARGS ((INTEGER Z260, INTEGER Z262));
static void Z229 ARGS ((INTEGER Z226));
static void Z263 ARGS ((CHAR Z264));
static void Z265 ARGS ((CHAR Z264));
static CHAR Z266 ARGS ((void));
static CARDINAL Z269;
static void Z270 ARGS ((LONGCARD Z271));
static void Z272 ARGS ((LONGCARD Z271));
static void Z273 ARGS ((LONGCARD Z271));
static void Z274 ARGS ((LONGCARD Z271));
static void Z275 ARGS ((void));
static void Z215 ARGS ((SHORTCARD Z279));
static void Z281 ARGS ((void));

static void Z139
# ifdef HAVE_ARGS
(CHAR Z140[], LONGCARD O_1)
# else
(Z140, O_1)
CHAR Z140[];
LONGCARD O_1;
# endif
{
OPEN_ARRAY_LOCALS

ALLOC_OPEN_ARRAYS (O_1 * sizeof (CHAR), 1)
COPY_OPEN_ARRAY (Z140, O_1, CHAR)
ZmtLFGGBG_3((ZDz6VQCC_4)ZfM_2, Zt3EGCA_4.Y0);
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)": ", 2L);
ZfM_29((ZDz6VQCC_4)ZfM_2, Z140, O_1);
ZfM_33((ZDz6VQCC_4)ZfM_2);
FREE_OPEN_ARRAYS
}

static void Z210
# ifdef HAVE_ARGS
(Z163 Z211)
# else
(Z211)
Z163 Z211;
# endif
{
if (Z209 == Z207) {
ZarQdhNDD_2((ADDRESS *)&Z208, &Z207, (LONGINT)sizeof (Z163));
}
Z208->A[Z209] = Z179;
INC(Z209);
Z213(Z211);
}

static void Z214
 ARGS ((void))
{
Z180 = Z179;
if (Z209 > 0) {
DEC(Z209);
Z179 = Z208->A[Z209];
} else {
Z215(6);
}
}

INTEGER Zt3EGCA_8
 ARGS ((void))
{
Z163 Z211;
Z168 Z217;
BOOLEAN Z218;
INTEGER Z219, Z220, Z221, Z222;

for (;;) {
Z211 = Z179;
Zt3EGCA_2 = 0;
Zt3EGCA_3 = Z189;
if (Z186->A[Z189 - 1] == Z151) {
INC(Z211);
}
for (;;) {
for (;;) {
Z217 = (Z168)(Z171.A[Z211] + ORD(Z186->A[Z189]) * sizeof (Z165));
if (Z217->Y0 != Z211) {
Z211 = Z172.A[Z211];
if (Z211 == Z146) {
goto EXIT_3;
}
} else {
Z211 = Z217->Y1;
INC(Zt3EGCA_2);
Z177->A[Zt3EGCA_2] = Z211;
INC(Z189);
}
} EXIT_3:;
for (;;) {
switch (Z177->A[Zt3EGCA_2]) {
case 16:;
Z213(Z161);
Z218 = FALSE;
goto EXIT_4;
break;
case 17:;
Z213(Z159);
Z218 = FALSE;
goto EXIT_4;
break;
case 13:;
Zt3EGCA_4.Y0.Y0 = Z192;
Zt3EGCA_4.Y0.Y1 = Z189 - Z193 - Zt3EGCA_2;
Z213(Z158);
Zt3EGCA_9(&Z137);
Z138 = Zfb3DLQ_2(&Z137);
if (Z138 <= Zol0z3A_2) {
ZqnGVQ_5((ZDz6VQCC_4)ZfM_1, Zol0z3A_1->A[Z138 - 1]);
}
Z218 = FALSE;
goto EXIT_4;
break;
case 18:;
Z229(0L);
Z218 = FALSE;
goto EXIT_4;
break;
case 14:;
case 21:;
case 29:;
case 33:;
Z230();
Z218 = FALSE;
goto EXIT_4;
break;
case 20:;
for (;;) {
switch (Z177->A[Zt3EGCA_2]) {
case 15:;
case 22:;
goto EXIT_5;
break;
default:
DEC(Z189);
DEC(Zt3EGCA_2);
break;
}
} EXIT_5:;
Z229(0L);
Z218 = FALSE;
goto EXIT_4;
break;
case 15:;
case 22:;
Z229(0L);
Z230();
Z218 = FALSE;
goto EXIT_4;
break;
case 10:;
Z213(Z160);
Z218 = FALSE;
goto EXIT_4;
break;
case 9:;
case 32:;
case 36:;
Z218 = FALSE;
goto EXIT_4;
break;
case 12:;
Z218 = FALSE;
goto EXIT_4;
break;
case 11:;
case 31:;
case 35:;
case 38:;
Z218 = FALSE;
goto EXIT_4;
break;
case 39:;
Z229(0L);
Z213(Z158);
Z218 = FALSE;
goto EXIT_4;
break;
case 37:;
Zt3EGCA_4.Y0.Y0 = Z192;
Zt3EGCA_4.Y0.Y1 = Z189 - Z193 - Zt3EGCA_2;
Z218 = FALSE;
goto EXIT_4;
break;
case 34:;
while (Z186->A[Z189] == ' ') {
INC(Z189);
}
Z218 = FALSE;
goto EXIT_4;
break;
case 30:;
Z231();
Z218 = FALSE;
goto EXIT_4;
break;
case 28:;
Z229(0L);
Z218 = FALSE;
goto EXIT_4;
break;
case 1:;
case 2:;
case 3:;
case 4:;
case 5:;
case 6:;
case 7:;
case 8:;
case 19:;
case 23:;
case 24:;
case 25:;
DEC(Z189);
DEC(Zt3EGCA_2);
break;
case 27:;
INC(Z189);
Zt3EGCA_2 = 1;
Zt3EGCA_4.Y0.Y0 = Z192;
Zt3EGCA_4.Y0.Y1 = Z189 - Z193 - Zt3EGCA_2;
ZfM_24((ZDz6VQCC_4)ZfM_1, Z186->A[Z189 - 1]);
Z218 = FALSE;
goto EXIT_4;
break;
case Z146:;
Z218 = FALSE;
goto EXIT_4;
break;
case 26:;
DEC(Z189);
DEC(Zt3EGCA_2);
if (Zt3EGCA_2 == 0) {
Z211 = Z179;
if (Z186->A[Z189 - 1] == Z151) {
INC(Z211);
}
} else {
Z211 = Z177->A[Zt3EGCA_2];
}
if (Z189 != Z187 + Z190) {
Z211 = Z174.A[Z211];
if (Z211 != Z146) {
INC(Z189);
INC(Zt3EGCA_2);
Z177->A[Zt3EGCA_2] = Z211;
Z218 = TRUE;
goto EXIT_4;
}
} else {
if (!Z185) {
Z220 = Z189 - Zt3EGCA_2 - 1;
Z221 = ZdaDDAD7_1 - Zt3EGCA_2 % ZdaDDAD7_1 - 1;
if (Z220 > Z221) {
{
LONGINT B_1 = 0, B_2 = Zt3EGCA_2;

if (B_1 <= B_2)
for (Z219 = B_1;; Z219 += 1) {
Z186->A[Z221 + Z219] = Z186->A[Z220 + Z219];
if (Z219 >= B_2) break;
}
}
DEC1(Z193, Z220 - Z221);
DEC1(Zt3EGCA_3, Z220 - Z221);
Z187 = Z221 + Zt3EGCA_2 + 1;
} else {
Z187 = Z189;
}
Z222 = ZdaDDAD7_8(ZdaDDAD7_7((LONGCARD)(Z188 - 4 - ZdaDDAD7_1 - Zt3EGCA_2)));
if (Z222 < Z188 / 8) {
ZarQdhNDD_2((ADDRESS *)&Z186, &Z188, (LONGINT)sizeof (CHAR));
if (Z186 == NIL) {
Z215(1);
}
Z222 = ZdaDDAD7_8(ZdaDDAD7_7((LONGCARD)(Z188 - 4 - ZdaDDAD7_1 - Zt3EGCA_2)));
if (Z178 < Z188) {
ZarQdhNDD_2((ADDRESS *)&Z177, &Z178, (LONGINT)sizeof (Z163));
if (Z177 == NIL) {
Z215(1);
}
}
}
Z189 = Z187;
INC1(Z191, Z190);
Z190 = Zt3EGCAzwNQF2_1(Z183, ADR (Z186->A[Z189]), (LONGCARD)Z222);
if (Z190 <= 0) {
Z190 = 0;
Z185 = TRUE;
}
Z186->A[Z187 + Z190] = Z152;
Z186->A[Z187 + Z190 + 1] = '\0';
Z218 = TRUE;
goto EXIT_4;
}
if (Zt3EGCA_2 == 0) {
Zt3EGCA_4.Y0.Y0 = Z192;
Zt3EGCA_4.Y0.Y1 = Z189 - Z193 - Zt3EGCA_2;
Zt3EGCA_12();
if (Z194 == 0) {
}
if (Z194 == 0) {
return Zt3EGCA_1;
}
Z218 = FALSE;
goto EXIT_4;
}
}
break;
default:
Z215(0);
break;
}
} EXIT_4:;
if (Z218) {
} else {
goto EXIT_2;
}
} EXIT_2:;
} EXIT_1:;
}

void Zt3EGCA_7
# ifdef HAVE_ARGS
(CHAR Z240[], LONGCARD O_2)
# else
(Z240, O_2)
CHAR Z240[];
LONGCARD O_2;
# endif
{
OPEN_ARRAY_LOCALS

ALLOC_OPEN_ARRAYS (O_2 * sizeof (CHAR), 1)
COPY_OPEN_ARRAY (Z240, O_2, CHAR)
if (Z182 && Z190 == 0) {
Z194 = 0;
Z182 = FALSE;
}
Z241();
if (ORD(Z240[0]) == 0) {
Z183 = ZDz6VQCC_1;
} else {
Z183 = Zt3EGCAzwNQF2_0(Z240, O_2);
}
if (Z183 < 0) {
Z215(5);
}
FREE_OPEN_ARRAYS
}

static void Z241
 ARGS ((void))
{
if (Z194 >= Z147) {
Z215(3);
}
INC(Z194);
{
register struct S_9 *W_1 = &Z195.A[Z194 - 1];

W_1->Y0 = Z183;
W_1->Y1 = Z185;
W_1->Y2 = Z186;
W_1->Y3 = Z187;
W_1->Y4 = Z188;
W_1->Y5 = Z189;
W_1->Y6 = Z190;
W_1->Y7 = Z191;
W_1->Y8 = Z192;
W_1->Y9 = Z193;
}
Z188 = Z148;
ZarQdhNDD_0((ADDRESS *)&Z186, &Z188, (LONGINT)sizeof (CHAR));
if (Z186 == NIL) {
Z215(1);
}
Z187 = ZdaDDAD7_1;
Z186->A[Z187 - 1] = Z151;
Z186->A[Z187] = Z152;
Z186->A[Z187 + 1] = '\0';
Z189 = Z187;
Z185 = FALSE;
Z190 = 0;
Z191 = 0;
Z192 = 1;
Z193 = Z187 - 1;
}

void Zt3EGCA_12
 ARGS ((void))
{
if (Z194 == 0) {
Z215(4);
}
Zt3EGCAzwNQF2_2(Z183);
ZarQdhNDD_3((ADDRESS *)&Z186, &Z188, (LONGINT)sizeof (CHAR));
{
register struct S_9 *W_2 = &Z195.A[Z194 - 1];

Z183 = W_2->Y0;
Z185 = W_2->Y1;
Z186 = W_2->Y2;
Z187 = W_2->Y3;
Z188 = W_2->Y4;
Z189 = W_2->Y5;
Z190 = W_2->Y6;
Z191 = W_2->Y7;
Z192 = W_2->Y8;
Z193 = W_2->Y9;
}
DEC(Z194);
Z182 = FALSE;
}

void Zt3EGCA_9
# ifdef HAVE_ARGS
(Zp1PEAFD_2 *Z137)
# else
(Z137)
Zp1PEAFD_2 *Z137;
# endif
{
CARDINAL Z246, Z247;

Z247 = Z189 - Zt3EGCA_2 - 1;
Z137->Y1 = ZdaDDAD7_3(Zt3EGCA_2, (LONGINT)Zp1PEAFD_0);
{
LONGCARD B_3 = 1, B_4 = Z137->Y1;

if (B_3 <= B_4)
for (Z246 = B_3;; Z246 += 1) {
Z137->Y0.A[Z246] = Z186->A[Z247 + Z246];
if (Z246 >= B_4) break;
}
}
}

void Zt3EGCA_10
# ifdef HAVE_ARGS
(Zp1PEAFD_2 *Z137)
# else
(Z137)
Zp1PEAFD_2 *Z137;
# endif
{
CARDINAL Z246, Z247;

Z247 = Z189 - Zt3EGCA_2 - 1;
Z137->Y1 = ZdaDDAD7_3(Zt3EGCA_2, (LONGINT)Zp1PEAFD_0);
{
LONGCARD B_5 = 1, B_6 = Z137->Y1;

if (B_5 <= B_6)
for (Z246 = B_5;; Z246 += 1) {
Z137->Y0.A[Z246] = Z175.A[Z186->A[Z247 + Z246]];
if (Z246 >= B_6) break;
}
}
}

void Zt3EGCA_11
# ifdef HAVE_ARGS
(Zp1PEAFD_2 *Z137)
# else
(Z137)
Zp1PEAFD_2 *Z137;
# endif
{
CARDINAL Z246, Z247;

Z247 = Z189 - Zt3EGCA_2 - 1;
Z137->Y1 = ZdaDDAD7_3(Zt3EGCA_2, (LONGINT)Zp1PEAFD_0);
{
LONGCARD B_7 = 1, B_8 = Z137->Y1;

if (B_7 <= B_8)
for (Z246 = B_7;; Z246 += 1) {
Z137->Y0.A[Z246] = Z176.A[Z186->A[Z247 + Z246]];
if (Z246 >= B_8) break;
}
}
}

static void Z213
# ifdef HAVE_ARGS
(Z163 Z254)
# else
(Z254)
Z163 Z254;
# endif
{
Z180 = Z179;
Z179 = Z254;
}

static void Z255
 ARGS ((void))
{
Z163 Z256;

Z256 = Z179;
Z179 = Z180;
Z180 = Z256;
}

static void Z230
 ARGS ((void))
{
INTEGER Z246;

{
LONGINT B_9 = Z189 - Zt3EGCA_2, B_10 = Z189 - 1;

if (B_9 <= B_10)
for (Z246 = B_9;; Z246 += 1) {
ZfM_24((ZDz6VQCC_4)ZfM_1, Z186->A[Z246]);
if (Z246 >= B_10) break;
}
}
}

static void Z257
# ifdef HAVE_ARGS
(INTEGER Z258)
# else
(Z258)
INTEGER Z258;
# endif
{
DEC1(Z189, Zt3EGCA_2 - Z258);
Zt3EGCA_2 = Z258;
}

static void Z231
 ARGS ((void))
{
DEC1(Z193, Z145 - 1 - (Z189 - Z193 - 2) % Z145);
}

static void Z259
# ifdef HAVE_ARGS
(INTEGER Z260)
# else
(Z260)
INTEGER Z260;
# endif
{
DEC1(Z193, Z145 - 1 - (Z189 - Z193 - Zt3EGCA_2 + Z260 - 1) % Z145);
}

static void Z261
# ifdef HAVE_ARGS
(INTEGER Z260, INTEGER Z262)
# else
(Z260, Z262)
INTEGER Z260, Z262;
# endif
{
DEC1(Z193, Z145 - 1 - (Z189 - Z193 - Zt3EGCA_2 + Z260 - 1) % Z145);
}

static void Z229
# ifdef HAVE_ARGS
(INTEGER Z226)
# else
(Z226)
INTEGER Z226;
# endif
{
INC(Z192);
Z193 = Z189 - 1 - Z226;
}

static void Z263
# ifdef HAVE_ARGS
(CHAR Z264)
# else
(Z264)
CHAR Z264;
# endif
{
ZfM_24((ZDz6VQCC_4)ZfM_1, Z264);
}

static void Z265
# ifdef HAVE_ARGS
(CHAR Z264)
# else
(Z264)
CHAR Z264;
# endif
{
DEC(Z189);
Z186->A[Z189] = Z264;
}

static CHAR Z266
 ARGS ((void))
{
if (Z189 == Z187 + Z190) {
if (!Z185) {
DEC1(Z193, Z190);
Z189 = 0;
Z187 = 0;
INC1(Z191, Z190);
Z190 = Zt3EGCAzwNQF2_1(Z183, (ADDRESS)Z186, ZdaDDAD7_8(ZdaDDAD7_7((LONGCARD)Z188)));
if (Z190 <= 0) {
Z190 = 0;
Z185 = TRUE;
}
Z186->A[Z190] = Z152;
Z186->A[Z190 + 1] = '\0';
}
}
if (Z189 == Z187 + Z190) {
return '\0';
} else {
INC(Z189);
return Z186->A[Z189 - 1];
}
}

void Zt3EGCA_6
 ARGS ((void))
{
}

void Zt3EGCA_13
 ARGS ((void))
{
}

static void Z270
# ifdef HAVE_ARGS
(LONGCARD Z271)
# else
(Z271)
LONGCARD Z271;
# endif
{
Z171.A[Z269] = (LONGCARD)ADR (Z173.A[Z271]);
INC(Z269);
}

static void Z272
# ifdef HAVE_ARGS
(LONGCARD Z271)
# else
(Z271)
LONGCARD Z271;
# endif
{
Z172.A[Z269] = Z271;
INC(Z269);
}

static void Z273
# ifdef HAVE_ARGS
(LONGCARD Z271)
# else
(Z271)
LONGCARD Z271;
# endif
{
Z174.A[Z269] = Z271;
INC(Z269);
}

static void Z274
# ifdef HAVE_ARGS
(LONGCARD Z271)
# else
(Z271)
LONGCARD Z271;
# endif
{
if (!ODD(Z269)) {
Z173.A[Z269 / 2].Y0 = Z271;
} else {
Z173.A[Z269 / 2].Y1 = Z271;
}
INC(Z269);
}

static void Z275
 ARGS ((void))
{
Zmfy8_1 Z276;

Z276 = Z270;
Z269 = 1;
Zmfy8_9(Z276, (STRING)"++ZP+[G+aKVCgOZ;+[GlOoB+Z<Z>+ZR+p+ZS[-[.X8+++++++++++++", 55L, 38L);
Zmfy8_9(Z276, (STRING)"+", 1L, 1L);
Z276 = Z272;
Z269 = 1;
Zmfy8_9(Z276, (STRING)".,8.70.2DDDDD@BDD+C+DBDD+++D@+649+64+6G", 39L, 39L);
Z276 = Z273;
Z269 = 1;
Zmfy8_9(Z276, (STRING)"@@++66444++++@++++++@+++++++@++4@++4+++", 39L, 39L);
Z276 = Z274;
Z269 = 0;
Zmfy8_9(Z276, (STRING)",@,@,@,@,@,@,@,@,@,H,A,@,@:B,@,@,@,@,@,@,@,@,@,@,@,@,@,", 55L, 55L);
Zmfy8_9(Z276, (STRING)"@,@,@,@,@,L,@,@,@,@,@,@,@,@,@,@-;,@,@,@,@,@,@,@,@,@,@,@", 55L, 55L);
Zmfy8_9(Z276, (STRING)",@,@,@,@,@,@,@,@-<,@,@,@,@,@,@,@,@,@,@,@,@,@,@,@,@,@,@,", 55L, 55L);
Zmfy8_9(Z276, (STRING)"@,@,@,@,@,@,@,@,@,@,@,@,@,@,@,@,@,@,@,@,@,@,@,@,@,@,@,@", 55L, 55L);
Zmfy8_9(Z276, (STRING)",@,@,@,@,@,@,@,@,@,@,@,@,@,@,@,@,@35,@,@,@,@,@,@,@,@,@,", 55L, 55L);
Zmfy8_9(Z276, (STRING)"@,@,@,@,@,@,@,@,@,@,@,@,@,@,@,@,@,@,@,@,@,@,@,@,@,@,@,@", 55L, 55L);
Zmfy8_9(Z276, (STRING)",@,@,@,@,@,@,@,@,@,@,@,@,@,@,@,@,@,@,@,@,@,@,@,@,@,@,@,", 55L, 55L);
Zmfy8_9(Z276, (STRING)"@,@,@,@,@,@,@,@,@,@,@,@,@,@,@,@,@,@,@,@,@,@,@,@,@,@,@,@", 55L, 55L);
Zmfy8_9(Z276, (STRING)",@,@,@,@,@,@,@,@,@,@,@,@,@,@,@,@,@,@,@,@,@,@,@,@,@,@,@,", 55L, 55L);
Zmfy8_9(Z276, (STRING)"@,@,@,@,@,@,@,@,@.I.G55;;.P<<>CA:B>C?DE++++++++++++++++", 55L, 55L);
Zmfy8_9(Z276, (STRING)"++++++++.M0606060606060606060J0R06060Q06060606060606060", 55L, 55L);
Zmfy8_9(Z276, (STRING)"60606060606060606060N0606060606060606060606060677067777", 55L, 55L);
Zmfy8_9(Z276, (STRING)"7777777777777777060606060606067777777777777777777777777", 55L, 55L);
Zmfy8_9(Z276, (STRING)"7777777777777777777777777770606060677067777777777777777", 55L, 55L);
Zmfy8_9(Z276, (STRING)"77777777777777777777777777777777777706060606++060606060", 55L, 55L);
Zmfy8_9(Z276, (STRING)"6060606060606060606060606060606060606060606060606060606", 55L, 55L);
Zmfy8_9(Z276, (STRING)"0606060606060606060606060606060606060606060606060606060", 55L, 55L);
Zmfy8_9(Z276, (STRING)"6060606060606060606060606060606060606060606060606060606", 55L, 55L);
Zmfy8_9(Z276, (STRING)"0606060606060606060606060606060606060606060606060606060", 55L, 55L);
Zmfy8_9(Z276, (STRING)"6060606060606060606060606062424242424242424242K++2424++", 55L, 55L);
Zmfy8_9(Z276, (STRING)"2424242424242424242424242424242424242O24242424242424242", 55L, 55L);
Zmfy8_9(Z276, (STRING)"424242424242424242424242424242424242424++24242424242424", 55L, 55L);
Zmfy8_9(Z276, (STRING)"2424242424242424242424242424242424242424242424242424242", 55L, 55L);
Zmfy8_9(Z276, (STRING)"4242424242424242424242424242424242424242424242424242424", 55L, 55L);
Zmfy8_9(Z276, (STRING)"242424++24242424242424242424242424242424242424242424242", 55L, 55L);
Zmfy8_9(Z276, (STRING)"4242424242424242424242424242424242424242424242424242424", 55L, 55L);
Zmfy8_9(Z276, (STRING)"2424242424242424242424242424242424242424242424242424242", 55L, 55L);
Zmfy8_9(Z276, (STRING)"4242424242424242424242424242424242424242424242424242424", 55L, 55L);
Zmfy8_9(Z276, (STRING)"2424242424242424242424242424242424242424242444444444444", 55L, 55L);
Zmfy8_9(Z276, (STRING)"444444444++4444++44444444444444444444444444444444444444", 55L, 55L);
Zmfy8_9(Z276, (STRING)"4444444444444444444444444444444444444444444444444444444", 55L, 55L);
Zmfy8_9(Z276, (STRING)"4444444444444444444444444444444444444444444444444444444", 55L, 55L);
Zmfy8_9(Z276, (STRING)"4444444444444444444444444444444444444444444444444444444", 55L, 55L);
Zmfy8_9(Z276, (STRING)"44444444444444444444444++444444444444444444444444444444", 55L, 55L);
Zmfy8_9(Z276, (STRING)"4444444444444444444444444444444444444444444444444444444", 55L, 55L);
Zmfy8_9(Z276, (STRING)"4444444444444444444444444444444444444444444444444444444", 55L, 55L);
Zmfy8_9(Z276, (STRING)"4444444444444444444444444444444444444444444444444444444", 55L, 55L);
Zmfy8_9(Z276, (STRING)"4444444444444444444444444444444444444444444444444444444", 55L, 55L);
Zmfy8_9(Z276, (STRING)"44444488++88888888888888888888++++++++++++++88888888888", 55L, 55L);
Zmfy8_9(Z276, (STRING)"88888888888888888888888888888888888888888++++++++88++88", 55L, 55L);
Zmfy8_9(Z276, (STRING)"888888888888888888888888888888888888888888888888889=+++", 55L, 55L);
Zmfy8_9(Z276, (STRING)"+++++++++++++@@@@@@@@@@@@@@@@@@@@++@@@@99@@@@@@@@@@@@@@", 55L, 55L);
Zmfy8_9(Z276, (STRING)"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@", 55L, 55L);
Zmfy8_9(Z276, (STRING)"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@", 55L, 55L);
Zmfy8_9(Z276, (STRING)"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@", 55L, 55L);
Zmfy8_9(Z276, (STRING)"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@++@@@@@@", 55L, 55L);
Zmfy8_9(Z276, (STRING)"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@", 55L, 55L);
Zmfy8_9(Z276, (STRING)"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@", 55L, 55L);
Zmfy8_9(Z276, (STRING)"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@", 55L, 55L);
Zmfy8_9(Z276, (STRING)"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@", 55L, 55L);
Zmfy8_9(Z276, (STRING)"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@", 30L, 30L);
}

static void Z215
# ifdef HAVE_ARGS
(SHORTCARD Z279)
# else
(Z279)
SHORTCARD Z279;
# endif
{
ZmtLFGGBG_3((ZDz6VQCC_4)ZfM_2, Zt3EGCA_4.Y0);
switch (Z279) {
case 0:;
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)": Writer: internal error", 24L);
break;
case 1:;
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)": Writer: out of memory", 23L);
break;
case 3:;
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)": Writer: too many nested include files", 39L);
break;
case 4:;
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)": Writer: file stack underflow (too many calls of CloseFile)", 60L);
break;
case 5:;
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)": Writer: cannot open input file", 32L);
break;
case 6:;
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)": Writer: start stack underflow (too many calls of yyPop)", 57L);
break;
}
ZfM_33((ZDz6VQCC_4)ZfM_2);
(*Zt3EGCA_5)();
}

static void Z281
 ARGS ((void))
{
ZfM_34();
rExit(1L);
}

void BEGIN_Writer ARGS ((void))
{
  static BOOLEAN has_been_called = FALSE;
  if (has_been_called) return;
  has_been_called = TRUE;
BEGIN_Strings ();
BEGIN_Position ();
BEGIN_Texts ();
BEGIN_Idents ();
BEGIN_Checks ();
BEGIN_rSystem ();
BEGIN_General ();
BEGIN_Pack ();
BEGIN_Position ();
BEGIN_IO ();
BEGIN_DynArray ();
BEGIN_Strings ();
BEGIN_WriterSource ();
BEGIN_Position ();
BEGIN_Strings ();
BEGIN_Idents ();
BEGIN_Texts ();
BEGIN_Reader ();

Zt3EGCA_5 = Z281;
Z182 = TRUE;
Z194 = 0;
Z241();
Z183 = ZDz6VQCC_1;
Z179 = Z158;
Z180 = Z158;
Z178 = Z148;
ZarQdhNDD_0((ADDRESS *)&Z177, &Z178, (LONGINT)sizeof (Z163));
Z177->A[0] = Z156;
Z207 = Z206;
ZarQdhNDD_0((ADDRESS *)&Z208, &Z207, (LONGINT)sizeof (Z163));
Z209 = 0;
Z275();
{
CHAR B_11 = Z149, B_12 = Z150;

if (B_11 <= B_12)
for (Z181 = B_11;; Z181 += 1) {
Z175.A[Z181] = Z181;
if (Z181 >= B_12) break;
}
}
Z176 = Z175;
for (Z181 = 'A'; Z181 <= 'Z'; Z181 += 1) {
Z175.A[Z181] = CHR(ORD(Z181) - ORD('A') + ORD('a'));
}
for (Z181 = 'a'; Z181 <= 'z'; Z181 += 1) {
Z176.A[Z181] = CHR(ORD(Z181) - ORD('a') + ORD('A'));
}
}
