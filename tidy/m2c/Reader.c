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

#ifndef DEFINITION_ReaderSource
#include "ReaderSource.h"
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

struct Reader_2 *Zol0z3A_1;
Zfb3DLQ_0 Zol0z3A_2;
INTEGER Zol0z3A_4;
INTEGER Zol0z3A_5;
Zol0z3A_0 Zol0z3A_6;
PROC Zol0z3A_7;

static Zp1PEAFD_2 Z137;
static Zfb3DLQ_0 Z138, Z139;
static LONGINT Z140, Z141;
static ZqnGVQ_0 Z142;
static void Z143 ARGS ((CHAR Z144[], LONGCARD O_1));
#define Z149	8
#define Z150	0
#define Z151	16
#define Z152	(1024 * 8 + 256)
#define Z153	'\0'
#define Z154	((CHAR)'\377')
#define Z155	'\n'
#define Z156	((CHAR)'\177')
#define Z157	30
#define Z158	1203
#define Z159	21
#define Z160	22
#define Z161	0
#define Z162	1
#define Z163	3
#define Z164	5
#define Z165	7
typedef SHORTCARD Z166;
typedef Z166 Z167;
typedef Z166 Z168;
typedef struct S_1 {
Z167 Y0, Y1;
} Z169;
typedef Z169 *Z172;
typedef struct S_12 {
CHAR A[1000000 + 1];
} *Z173;
typedef CHAR Z174;
static struct S_2 {
LONGCARD A[Z157 + 1];
} Z175;
static struct S_3 {
Z167 A[Z157 + 1];
} Z176;
static struct S_4 {
Z169 A[Z158 + 1];
} Z177;
static struct S_5 {
Z167 A[Z157 + 1];
} Z178;
static struct S_6 {
CHAR A[Z154 + 1];
} Z179, Z180;
static struct S_7 {
Z167 A[1000000 + 1];
} *Z181;
static LONGINT Z182;
static Z167 Z183;
static Z167 Z184;
static CHAR Z185;
static BOOLEAN Z186;
static ZDz6VQCC_4 Z187;
static BOOLEAN Z189;
static Z173 Z190;
static INTEGER Z191;
static LONGINT Z192;
static INTEGER Z193;
static INTEGER Z194;
static INTEGER Z195;
static CARDINAL Z196;
static INTEGER Z197;
static SHORTCARD Z198;
static struct S_8 {
struct S_9 {
ZDz6VQCC_4 Y0;
BOOLEAN Y1;
Z173 Y2;
INTEGER Y3;
LONGINT Y4;
INTEGER Y5;
INTEGER Y6;
INTEGER Y7;
CARDINAL Y8;
INTEGER Y9;
} A[Z151 - 1 + 1];
} Z199;
#define Z210	16
static LONGINT Z211;
static struct S_10 {
Z167 A[100000 + 1];
} *Z212;
static LONGINT Z213;
static void Z214 ARGS ((Z167 Z215));
static void Z218 ARGS ((void));
static void Z246 ARGS ((void));
static void Z217 ARGS ((Z167 Z259));
static void Z260 ARGS ((void));
static void Z262 ARGS ((void));
static void Z263 ARGS ((INTEGER Z264));
static void Z235 ARGS ((void));
static void Z265 ARGS ((INTEGER Z266));
static void Z267 ARGS ((INTEGER Z266, INTEGER Z268));
static void Z234 ARGS ((INTEGER Z230));
static void Z269 ARGS ((CHAR Z270));
static void Z271 ARGS ((CHAR Z270));
static CHAR Z272 ARGS ((void));
static CARDINAL Z275;
static void Z276 ARGS ((LONGCARD Z277));
static void Z278 ARGS ((LONGCARD Z277));
static void Z279 ARGS ((LONGCARD Z277));
static void Z280 ARGS ((LONGCARD Z277));
static void Z281 ARGS ((void));
static void Z219 ARGS ((SHORTCARD Z285));
static void Z287 ARGS ((void));

static void Z143
# ifdef HAVE_ARGS
(CHAR Z144[], LONGCARD O_1)
# else
(Z144, O_1)
CHAR Z144[];
LONGCARD O_1;
# endif
{
OPEN_ARRAY_LOCALS

ALLOC_OPEN_ARRAYS (O_1 * sizeof (CHAR), 1)
COPY_OPEN_ARRAY (Z144, O_1, CHAR)
ZmtLFGGBG_3((ZDz6VQCC_4)ZfM_2, Zol0z3A_6.Y0);
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)": ", 2L);
ZfM_29((ZDz6VQCC_4)ZfM_2, Z144, O_1);
ZfM_33((ZDz6VQCC_4)ZfM_2);
FREE_OPEN_ARRAYS
}

static void Z214
# ifdef HAVE_ARGS
(Z167 Z215)
# else
(Z215)
Z167 Z215;
# endif
{
if (Z213 == Z211) {
ZarQdhNDD_2((ADDRESS *)&Z212, &Z211, (LONGINT)sizeof (Z167));
}
Z212->A[Z213] = Z183;
INC(Z213);
Z217(Z215);
}

static void Z218
 ARGS ((void))
{
Z184 = Z183;
if (Z213 > 0) {
DEC(Z213);
Z183 = Z212->A[Z213];
} else {
Z219(6);
}
}

INTEGER Zol0z3A_10
 ARGS ((void))
{
Z167 Z215;
Z172 Z221;
BOOLEAN Z222;
INTEGER Z223, Z224, Z225, Z226;

for (;;) {
Z215 = Z183;
Zol0z3A_4 = 0;
Zol0z3A_5 = Z193;
if (Z190->A[Z193 - 1] == Z155) {
INC(Z215);
}
for (;;) {
for (;;) {
Z221 = (Z172)(Z175.A[Z215] + ORD(Z190->A[Z193]) * sizeof (Z169));
if (Z221->Y0 != Z215) {
Z215 = Z176.A[Z215];
if (Z215 == Z150) {
goto EXIT_3;
}
} else {
Z215 = Z221->Y1;
INC(Zol0z3A_4);
Z181->A[Zol0z3A_4] = Z215;
INC(Z193);
}
} EXIT_3:;
for (;;) {
switch (Z181->A[Zol0z3A_4]) {
case 16:;
Zol0z3A_6.Y0.Y0 = Z196;
Zol0z3A_6.Y0.Y1 = Z193 - Z197 - Zol0z3A_4;
Z217(Z163);
Z222 = FALSE;
goto EXIT_4;
break;
case 14:;
Zol0z3A_6.Y0.Y0 = Z196;
Zol0z3A_6.Y0.Y1 = Z193 - Z197 - Zol0z3A_4;
Z217(Z165);
Zol0z3A_11(&Z137);
Z138 = Zfb3DLQ_2(&Z137);
if (Z138 > Zol0z3A_2) {
Z141 = Z138;
if (Z141 >= Z140) {
ZarQdhNDD_2((ADDRESS *)&Zol0z3A_1, &Z140, (LONGINT)sizeof (ZqnGVQ_0));
}
ZqnGVQ_1(&Z142);
Zol0z3A_2 = Z138;
} else {
Z142 = Zol0z3A_1->A[Z138 - 1];
}
Zp1PEAFD_4(&Z137);
Z222 = FALSE;
goto EXIT_4;
break;
case 15:;
case 24:;
case 27:;
Zol0z3A_6.Y0.Y0 = Z196;
Zol0z3A_6.Y0.Y1 = Z193 - Z197 - Zol0z3A_4;
Z222 = FALSE;
goto EXIT_4;
break;
case 11:;
Zol0z3A_6.Y0.Y0 = Z196;
Zol0z3A_6.Y0.Y1 = Z193 - Z197 - Zol0z3A_4;
Zol0z3A_1->A[Z138 - 1] = Z142;
Z217(Z164);
Z222 = FALSE;
goto EXIT_4;
break;
case 9:;
case 17:;
case 26:;
case 29:;
Zol0z3A_6.Y0.Y0 = Z196;
Zol0z3A_6.Y0.Y1 = Z193 - Z197 - Zol0z3A_4;
Zol0z3A_11(&Z137);
Z222 = FALSE;
goto EXIT_4;
break;
case 12:;
case 19:;
Zol0z3A_6.Y0.Y0 = Z196;
Zol0z3A_6.Y0.Y1 = Z193 - Z197 - Zol0z3A_4;
Z234(0L);
Z222 = FALSE;
goto EXIT_4;
break;
case 10:;
case 18:;
Zol0z3A_6.Y0.Y0 = Z196;
Zol0z3A_6.Y0.Y1 = Z193 - Z197 - Zol0z3A_4;
Z234(0L);
ZqnGVQ_2(&Z142, &Z137);
Zp1PEAFD_4(&Z137);
Z222 = FALSE;
goto EXIT_4;
break;
case 13:;
Zol0z3A_6.Y0.Y0 = Z196;
Zol0z3A_6.Y0.Y1 = Z193 - Z197 - Zol0z3A_4;
Zol0z3A_11(&Z137);
Z139 = Zfb3DLQ_2(&Z137);
if (Z139 != Z138) {
Z143((STRING)"ID mismatch", 11L);
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)"           ", 11L);
Zfb3DLQ_7((ZDz6VQCC_4)ZfM_2, Z138);
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)" # ", 3L);
Zfb3DLQ_7((ZDz6VQCC_4)ZfM_2, Z139);
ZfM_33((ZDz6VQCC_4)ZfM_2);
}
Z217(Z162);
Z222 = FALSE;
goto EXIT_4;
break;
case 30:;
Zol0z3A_6.Y0.Y0 = Z196;
Zol0z3A_6.Y0.Y1 = Z193 - Z197 - Zol0z3A_4;
Z222 = FALSE;
goto EXIT_4;
break;
case 28:;
while (Z190->A[Z193] == ' ') {
INC(Z193);
}
Z222 = FALSE;
goto EXIT_4;
break;
case 25:;
Z235();
Z222 = FALSE;
goto EXIT_4;
break;
case 23:;
Z234(0L);
Z222 = FALSE;
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
case 20:;
DEC(Z193);
DEC(Zol0z3A_4);
break;
case 22:;
INC(Z193);
Zol0z3A_4 = 1;
Zol0z3A_6.Y0.Y0 = Z196;
Zol0z3A_6.Y0.Y1 = Z193 - Z197 - Zol0z3A_4;
ZfM_24((ZDz6VQCC_4)ZfM_1, Z190->A[Z193 - 1]);
Z222 = FALSE;
goto EXIT_4;
break;
case Z150:;
Z222 = FALSE;
goto EXIT_4;
break;
case 21:;
DEC(Z193);
DEC(Zol0z3A_4);
if (Zol0z3A_4 == 0) {
Z215 = Z183;
if (Z190->A[Z193 - 1] == Z155) {
INC(Z215);
}
} else {
Z215 = Z181->A[Zol0z3A_4];
}
if (Z193 != Z191 + Z194) {
Z215 = Z178.A[Z215];
if (Z215 != Z150) {
INC(Z193);
INC(Zol0z3A_4);
Z181->A[Zol0z3A_4] = Z215;
Z222 = TRUE;
goto EXIT_4;
}
} else {
if (!Z189) {
Z224 = Z193 - Zol0z3A_4 - 1;
Z225 = ZdaDDAD7_1 - Zol0z3A_4 % ZdaDDAD7_1 - 1;
if (Z224 > Z225) {
{
LONGINT B_1 = 0, B_2 = Zol0z3A_4;

if (B_1 <= B_2)
for (Z223 = B_1;; Z223 += 1) {
Z190->A[Z225 + Z223] = Z190->A[Z224 + Z223];
if (Z223 >= B_2) break;
}
}
DEC1(Z197, Z224 - Z225);
DEC1(Zol0z3A_5, Z224 - Z225);
Z191 = Z225 + Zol0z3A_4 + 1;
} else {
Z191 = Z193;
}
Z226 = ZdaDDAD7_8(ZdaDDAD7_7((LONGCARD)(Z192 - 4 - ZdaDDAD7_1 - Zol0z3A_4)));
if (Z226 < Z192 / 8) {
ZarQdhNDD_2((ADDRESS *)&Z190, &Z192, (LONGINT)sizeof (CHAR));
if (Z190 == NIL) {
Z219(1);
}
Z226 = ZdaDDAD7_8(ZdaDDAD7_7((LONGCARD)(Z192 - 4 - ZdaDDAD7_1 - Zol0z3A_4)));
if (Z182 < Z192) {
ZarQdhNDD_2((ADDRESS *)&Z181, &Z182, (LONGINT)sizeof (Z167));
if (Z181 == NIL) {
Z219(1);
}
}
}
Z193 = Z191;
INC1(Z195, Z194);
Z194 = Zol0z3AzwNQF2_1(Z187, ADR (Z190->A[Z193]), (LONGCARD)Z226);
if (Z194 <= 0) {
Z194 = 0;
Z189 = TRUE;
}
Z190->A[Z191 + Z194] = Z156;
Z190->A[Z191 + Z194 + 1] = '\0';
Z222 = TRUE;
goto EXIT_4;
}
if (Zol0z3A_4 == 0) {
Zol0z3A_6.Y0.Y0 = Z196;
Zol0z3A_6.Y0.Y1 = Z193 - Z197 - Zol0z3A_4;
Zol0z3A_14();
if (Z198 == 0) {
}
if (Z198 == 0) {
return Zol0z3A_3;
}
Z222 = FALSE;
goto EXIT_4;
}
}
break;
default:
Z219(0);
break;
}
} EXIT_4:;
if (Z222) {
} else {
goto EXIT_2;
}
} EXIT_2:;
} EXIT_1:;
}

void Zol0z3A_9
# ifdef HAVE_ARGS
(CHAR Z245[], LONGCARD O_2)
# else
(Z245, O_2)
CHAR Z245[];
LONGCARD O_2;
# endif
{
OPEN_ARRAY_LOCALS

ALLOC_OPEN_ARRAYS (O_2 * sizeof (CHAR), 1)
COPY_OPEN_ARRAY (Z245, O_2, CHAR)
if (Z186 && Z194 == 0) {
Z198 = 0;
Z186 = FALSE;
}
Z246();
if (ORD(Z245[0]) == 0) {
Z187 = ZDz6VQCC_1;
} else {
Z187 = Zol0z3AzwNQF2_0(Z245, O_2);
}
if (Z187 < 0) {
Z219(5);
}
FREE_OPEN_ARRAYS
}

static void Z246
 ARGS ((void))
{
if (Z198 >= Z151) {
Z219(3);
}
INC(Z198);
{
register struct S_9 *W_1 = &Z199.A[Z198 - 1];

W_1->Y0 = Z187;
W_1->Y1 = Z189;
W_1->Y2 = Z190;
W_1->Y3 = Z191;
W_1->Y4 = Z192;
W_1->Y5 = Z193;
W_1->Y6 = Z194;
W_1->Y7 = Z195;
W_1->Y8 = Z196;
W_1->Y9 = Z197;
}
Z192 = Z152;
ZarQdhNDD_0((ADDRESS *)&Z190, &Z192, (LONGINT)sizeof (CHAR));
if (Z190 == NIL) {
Z219(1);
}
Z191 = ZdaDDAD7_1;
Z190->A[Z191 - 1] = Z155;
Z190->A[Z191] = Z156;
Z190->A[Z191 + 1] = '\0';
Z193 = Z191;
Z189 = FALSE;
Z194 = 0;
Z195 = 0;
Z196 = 1;
Z197 = Z191 - 1;
}

void Zol0z3A_14
 ARGS ((void))
{
if (Z198 == 0) {
Z219(4);
}
Zol0z3AzwNQF2_2(Z187);
ZarQdhNDD_3((ADDRESS *)&Z190, &Z192, (LONGINT)sizeof (CHAR));
{
register struct S_9 *W_2 = &Z199.A[Z198 - 1];

Z187 = W_2->Y0;
Z189 = W_2->Y1;
Z190 = W_2->Y2;
Z191 = W_2->Y3;
Z192 = W_2->Y4;
Z193 = W_2->Y5;
Z194 = W_2->Y6;
Z195 = W_2->Y7;
Z196 = W_2->Y8;
Z197 = W_2->Y9;
}
DEC(Z198);
Z186 = FALSE;
}

void Zol0z3A_11
# ifdef HAVE_ARGS
(Zp1PEAFD_2 *Z137)
# else
(Z137)
Zp1PEAFD_2 *Z137;
# endif
{
CARDINAL Z251, Z252;

Z252 = Z193 - Zol0z3A_4 - 1;
Z137->Y1 = ZdaDDAD7_3(Zol0z3A_4, (LONGINT)Zp1PEAFD_0);
{
LONGCARD B_3 = 1, B_4 = Z137->Y1;

if (B_3 <= B_4)
for (Z251 = B_3;; Z251 += 1) {
Z137->Y0.A[Z251] = Z190->A[Z252 + Z251];
if (Z251 >= B_4) break;
}
}
}

void Zol0z3A_12
# ifdef HAVE_ARGS
(Zp1PEAFD_2 *Z137)
# else
(Z137)
Zp1PEAFD_2 *Z137;
# endif
{
CARDINAL Z251, Z252;

Z252 = Z193 - Zol0z3A_4 - 1;
Z137->Y1 = ZdaDDAD7_3(Zol0z3A_4, (LONGINT)Zp1PEAFD_0);
{
LONGCARD B_5 = 1, B_6 = Z137->Y1;

if (B_5 <= B_6)
for (Z251 = B_5;; Z251 += 1) {
Z137->Y0.A[Z251] = Z179.A[Z190->A[Z252 + Z251]];
if (Z251 >= B_6) break;
}
}
}

void Zol0z3A_13
# ifdef HAVE_ARGS
(Zp1PEAFD_2 *Z137)
# else
(Z137)
Zp1PEAFD_2 *Z137;
# endif
{
CARDINAL Z251, Z252;

Z252 = Z193 - Zol0z3A_4 - 1;
Z137->Y1 = ZdaDDAD7_3(Zol0z3A_4, (LONGINT)Zp1PEAFD_0);
{
LONGCARD B_7 = 1, B_8 = Z137->Y1;

if (B_7 <= B_8)
for (Z251 = B_7;; Z251 += 1) {
Z137->Y0.A[Z251] = Z180.A[Z190->A[Z252 + Z251]];
if (Z251 >= B_8) break;
}
}
}

static void Z217
# ifdef HAVE_ARGS
(Z167 Z259)
# else
(Z259)
Z167 Z259;
# endif
{
Z184 = Z183;
Z183 = Z259;
}

static void Z260
 ARGS ((void))
{
Z167 Z261;

Z261 = Z183;
Z183 = Z184;
Z184 = Z261;
}

static void Z262
 ARGS ((void))
{
INTEGER Z251;

{
LONGINT B_9 = Z193 - Zol0z3A_4, B_10 = Z193 - 1;

if (B_9 <= B_10)
for (Z251 = B_9;; Z251 += 1) {
ZfM_24((ZDz6VQCC_4)ZfM_1, Z190->A[Z251]);
if (Z251 >= B_10) break;
}
}
}

static void Z263
# ifdef HAVE_ARGS
(INTEGER Z264)
# else
(Z264)
INTEGER Z264;
# endif
{
DEC1(Z193, Zol0z3A_4 - Z264);
Zol0z3A_4 = Z264;
}

static void Z235
 ARGS ((void))
{
DEC1(Z197, Z149 - 1 - (Z193 - Z197 - 2) % Z149);
}

static void Z265
# ifdef HAVE_ARGS
(INTEGER Z266)
# else
(Z266)
INTEGER Z266;
# endif
{
DEC1(Z197, Z149 - 1 - (Z193 - Z197 - Zol0z3A_4 + Z266 - 1) % Z149);
}

static void Z267
# ifdef HAVE_ARGS
(INTEGER Z266, INTEGER Z268)
# else
(Z266, Z268)
INTEGER Z266, Z268;
# endif
{
DEC1(Z197, Z149 - 1 - (Z193 - Z197 - Zol0z3A_4 + Z266 - 1) % Z149);
}

static void Z234
# ifdef HAVE_ARGS
(INTEGER Z230)
# else
(Z230)
INTEGER Z230;
# endif
{
INC(Z196);
Z197 = Z193 - 1 - Z230;
}

static void Z269
# ifdef HAVE_ARGS
(CHAR Z270)
# else
(Z270)
CHAR Z270;
# endif
{
ZfM_24((ZDz6VQCC_4)ZfM_1, Z270);
}

static void Z271
# ifdef HAVE_ARGS
(CHAR Z270)
# else
(Z270)
CHAR Z270;
# endif
{
DEC(Z193);
Z190->A[Z193] = Z270;
}

static CHAR Z272
 ARGS ((void))
{
if (Z193 == Z191 + Z194) {
if (!Z189) {
DEC1(Z197, Z194);
Z193 = 0;
Z191 = 0;
INC1(Z195, Z194);
Z194 = Zol0z3AzwNQF2_1(Z187, (ADDRESS)Z190, ZdaDDAD7_8(ZdaDDAD7_7((LONGCARD)Z192)));
if (Z194 <= 0) {
Z194 = 0;
Z189 = TRUE;
}
Z190->A[Z194] = Z156;
Z190->A[Z194 + 1] = '\0';
}
}
if (Z193 == Z191 + Z194) {
return '\0';
} else {
INC(Z193);
return Z190->A[Z193 - 1];
}
}

void Zol0z3A_8
 ARGS ((void))
{
Zfb3DLQ_15();
Z140 = 10;
Zol0z3A_2 = 0;
ZarQdhNDD_0((ADDRESS *)&Zol0z3A_1, &Z140, (LONGINT)sizeof (ZqnGVQ_0));
}

void Zol0z3A_15
 ARGS ((void))
{
}

static void Z276
# ifdef HAVE_ARGS
(LONGCARD Z277)
# else
(Z277)
LONGCARD Z277;
# endif
{
Z175.A[Z275] = (LONGCARD)ADR (Z177.A[Z277]);
INC(Z275);
}

static void Z278
# ifdef HAVE_ARGS
(LONGCARD Z277)
# else
(Z277)
LONGCARD Z277;
# endif
{
Z176.A[Z275] = Z277;
INC(Z275);
}

static void Z279
# ifdef HAVE_ARGS
(LONGCARD Z277)
# else
(Z277)
LONGCARD Z277;
# endif
{
Z178.A[Z275] = Z277;
INC(Z275);
}

static void Z280
# ifdef HAVE_ARGS
(LONGCARD Z277)
# else
(Z277)
LONGCARD Z277;
# endif
{
if (!ODD(Z275)) {
Z177.A[Z275 / 2].Y0 = Z277;
} else {
Z177.A[Z275 / 2].Y1 = Z277;
}
INC(Z275);
}

static void Z281
 ARGS ((void))
{
Zmfy8_1 Z282;

Z282 = Z276;
Z275 = 1;
Zmfy8_9(Z282, (STRING)"++ZP+ZR+[IVC[6+Z>+`IbBe?Z@kC+ZTX7++++++++++", 43L, 30L);
Z282 = Z278;
Z275 = 1;
Zmfy8_9(Z282, (STRING)".,9.80.2<+?+???????++++:+<:+4+", 30L, 30L);
Z282 = Z279;
Z275 = 1;
Zmfy8_9(Z282, (STRING)"::++++<<<+++++:+<++++++:+<:+<+", 30L, 30L);
Z282 = Z280;
Z275 = 0;
Zmfy8_9(Z282, (STRING)",:,:,:,:,:,:,:,:,:,C++,:,:=5,:,:,:,:,:,:,:,:,:,:,:,:,:,", 55L, 55L);
Zmfy8_9(Z282, (STRING)":,:,:,:,:,F,:,:,:,:,:,:,:,:,:,:-;,:,:,:,:,:,:,:,:,:,:,:", 55L, 55L);
Zmfy8_9(Z282, (STRING)",:,:,:,:,:,:,:,:,:,:,:,:,:,:,:,:,:,:,:,:,:,:,:,:,:,:,:,", 55L, 55L);
Zmfy8_9(Z282, (STRING)":,:,:,:,:,:,:,:,:,:,:,:,:,:,:,:,:,:,:,:,:,:,:,:,:,:,:,:", 55L, 55L);
Zmfy8_9(Z282, (STRING)",:,:,:,:,:,:,:,:,:,:,:,:,:,:,:,:,:36,:,:,:,:,:,:,:,:,:,", 55L, 55L);
Zmfy8_9(Z282, (STRING)":,:,:,:,:,:,:,:,:,:,:,:,:,:,:,:,:,:,:,:,:,:,:,:,:,:,:,:", 55L, 55L);
Zmfy8_9(Z282, (STRING)",:,:,:,:,:,:,:,:,:,:,:,:,:,:,:,:,:,:,:,:,:,:,:,:,:,:,:,", 55L, 55L);
Zmfy8_9(Z282, (STRING)":,:,:,:,:,:,:,:,:,:,:,:,:,:,:,:,:,:,:,:,:,:,:,:,:,:,:,:", 55L, 55L);
Zmfy8_9(Z282, (STRING)",:,:,:,:,:,:,:,:,:,:,:,:,:,:,:,:,:,:,:,:,:,:,:,:,:,:,:,", 55L, 55L);
Zmfy8_9(Z282, (STRING)":,:,:,:,:,:,:,:,:.D.B0D0B.I660I;;>7?@++++++++++++++4>++", 55L, 55L);
Zmfy8_9(Z282, (STRING)"++++++++.G++0G2<2<2<2<2<2<2<2<2<2E2=2<2<442<2<2<2<2<2<2", 55L, 55L);
Zmfy8_9(Z282, (STRING)"<2<2<2<2<2<2<2<2<2<2<2<2H2<2<2<2<2<2<2<2<2<2<2<2<2<2<2<", 55L, 55L);
Zmfy8_9(Z282, (STRING)"2<2<2<2<2<2<2<2<2<2<2<2<2<++2<2<2<2<2<2<2<2<2<2<2<2<2<2", 55L, 55L);
Zmfy8_9(Z282, (STRING)"<2<2<2<2<2<2<2<2<2<2<2<2<2<2<2<2<2<2<2<2<2<2<2<2<2<2<2<", 55L, 55L);
Zmfy8_9(Z282, (STRING)"2<2<2<2<2<2<2<2<2<2<2<2<2<2<2<2<2<2<2<2<2<2<2<2<++2<2<2", 55L, 55L);
Zmfy8_9(Z282, (STRING)"<2<2<2<2<2<2<2<2<2<2<2<2<2<2<2<2<2<2<2<2<2<2<2<2<2<2<2<", 55L, 55L);
Zmfy8_9(Z282, (STRING)"2<2<2<2<2<2<2<2<2<2<2<2<2<2<2<2<2<2<2<2<2<2<2<2<2<2<2<2", 55L, 55L);
Zmfy8_9(Z282, (STRING)"<2<2<2<2<2<2<2<2<2<2<2<2<2<2<2<2<2<2<2<2<2<2<2<2<2<2<2<", 55L, 55L);
Zmfy8_9(Z282, (STRING)"2<2<2<2<2<2<2<2<2<2<2<2<2<2<2<2<2<2<2<2<2<2<2<2<2<2<2<2", 55L, 55L);
Zmfy8_9(Z282, (STRING)"<2<2<2<2<2<2<2<2<2<2<2<2<2<2<2<88++88888888888888888888", 55L, 55L);
Zmfy8_9(Z282, (STRING)"++++++++++++++88888888888888888888888888888888888888888", 55L, 55L);
Zmfy8_9(Z282, (STRING)"88888888888++++++++88++88888888888888888888888888888888", 55L, 55L);
Zmfy8_9(Z282, (STRING)"8888888888888888888899++99999999999999999999+++++++++++", 55L, 55L);
Zmfy8_9(Z282, (STRING)"+++9999999999999999999999999999999999999999999999999999", 55L, 55L);
Zmfy8_9(Z282, (STRING)"++++++++99++9999999999999999999999999999999999999999999", 55L, 55L);
Zmfy8_9(Z282, (STRING)"999999999::::::::::::::::::::++::::++::::::::::::::::::", 55L, 55L);
Zmfy8_9(Z282, (STRING)":::::::::::::::::::::::::::::::::::::::::::::::::::::::", 55L, 55L);
Zmfy8_9(Z282, (STRING)":::::::::::::::::::::::::::::::::::::::::::::::::::::::", 55L, 55L);
Zmfy8_9(Z282, (STRING)":::::::::::::::::::::::::::::::::::::::::::::::::::::::", 55L, 55L);
Zmfy8_9(Z282, (STRING)":::::::::::::::::::::::::::::::::::::::::::++::::::::::", 55L, 55L);
Zmfy8_9(Z282, (STRING)":::::::::::::::::::::::::::::::::::::::::::::::::::::::", 55L, 55L);
Zmfy8_9(Z282, (STRING)":::::::::::::::::::::::::::::::::::::::::::::::::::::::", 55L, 55L);
Zmfy8_9(Z282, (STRING)":::::::::::::::::::::::::::::::::::::::::::::::::::::::", 55L, 55L);
Zmfy8_9(Z282, (STRING)":::::::::::::::::::::::::::::::::::::::::::::::::::::::", 55L, 55L);
Zmfy8_9(Z282, (STRING)"::::::::::::::::::::::::::<<<<<<<<<<<<<<<<<<<<++<<<<++<", 55L, 55L);
Zmfy8_9(Z282, (STRING)"<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<", 55L, 55L);
Zmfy8_9(Z282, (STRING)"<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<", 55L, 55L);
Zmfy8_9(Z282, (STRING)"<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<", 55L, 55L);
Zmfy8_9(Z282, (STRING)"<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<", 55L, 55L);
Zmfy8_9(Z282, (STRING)"<<<<<++<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<", 55L, 55L);
Zmfy8_9(Z282, (STRING)"<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<", 55L, 55L);
Zmfy8_9(Z282, (STRING)"<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<", 55L, 55L);
Zmfy8_9(Z282, (STRING)"<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<", 55L, 55L);
Zmfy8_9(Z282, (STRING)"<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<", 43L, 43L);
}

static void Z219
# ifdef HAVE_ARGS
(SHORTCARD Z285)
# else
(Z285)
SHORTCARD Z285;
# endif
{
ZmtLFGGBG_3((ZDz6VQCC_4)ZfM_2, Zol0z3A_6.Y0);
switch (Z285) {
case 0:;
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)": Reader: internal error", 24L);
break;
case 1:;
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)": Reader: out of memory", 23L);
break;
case 3:;
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)": Reader: too many nested include files", 39L);
break;
case 4:;
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)": Reader: file stack underflow (too many calls of CloseFile)", 60L);
break;
case 5:;
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)": Reader: cannot open input file", 32L);
break;
case 6:;
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)": Reader: start stack underflow (too many calls of yyPop)", 57L);
break;
}
ZfM_33((ZDz6VQCC_4)ZfM_2);
(*Zol0z3A_7)();
}

static void Z287
 ARGS ((void))
{
ZfM_34();
rExit(1L);
}

void BEGIN_Reader ARGS ((void))
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
BEGIN_ReaderSource ();
BEGIN_Position ();
BEGIN_Strings ();
BEGIN_Idents ();
BEGIN_Texts ();

Zol0z3A_7 = Z287;
Z186 = TRUE;
Z198 = 0;
Z246();
Z187 = ZDz6VQCC_1;
Z183 = Z162;
Z184 = Z162;
Z182 = Z152;
ZarQdhNDD_0((ADDRESS *)&Z181, &Z182, (LONGINT)sizeof (Z167));
Z181->A[0] = Z160;
Z211 = Z210;
ZarQdhNDD_0((ADDRESS *)&Z212, &Z211, (LONGINT)sizeof (Z167));
Z213 = 0;
Z281();
{
CHAR B_11 = Z153, B_12 = Z154;

if (B_11 <= B_12)
for (Z185 = B_11;; Z185 += 1) {
Z179.A[Z185] = Z185;
if (Z185 >= B_12) break;
}
}
Z180 = Z179;
for (Z185 = 'A'; Z185 <= 'Z'; Z185 += 1) {
Z179.A[Z185] = CHR(ORD(Z185) - ORD('A') + ORD('a'));
}
for (Z185 = 'a'; Z185 <= 'z'; Z185 += 1) {
Z180.A[Z185] = CHR(ORD(Z185) - ORD('a') + ORD('A'));
}
}
