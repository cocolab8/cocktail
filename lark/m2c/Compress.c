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

#ifndef DEFINITION_Sets
#include "Sets.h"
#endif

#ifndef DEFINITION_IO
#include "IO.h"
#endif

#ifndef DEFINITION_Position
#include "Position.h"
#endif

#ifndef DEFINITION_Errors
#include "Errors.h"
#endif

#ifndef DEFINITION_Tree
#include "Tree.h"
#endif

#ifndef DEFINITION_Semantic
#include "Semantic.h"
#endif

#ifndef DEFINITION_LR1
#include "LR1.h"
#endif

#ifndef DEFINITION_Conflict
#include "Conflict.h"
#endif

#ifndef DEFINITION_LarkTime
#include "LarkTime.h"
#endif

#ifndef DEFINITION_Sort
#include "Sort.h"
#endif

#ifndef DEFINITION_Compress
#include "Compress.h"
#endif

CARDINAL ZggFGLABP_7, ZggFGLABP_8, ZggFGLABP_9, ZggFGLABP_10, ZggFGLABP_11, ZggFGLABP_12;
struct Compress_4 *ZggFGLABP_13;
struct Compress_5 *ZggFGLABP_14;
ZggFGLABP_4 ZggFGLABP_15;
LONGINT ZggFGLABP_16;
LONGINT ZggFGLABP_17;
LONGINT ZggFGLABP_18;
CARDINAL ZggFGLABP_19;
CARDINAL ZggFGLABP_20;
struct Compress_6 *ZggFGLABP_21;
struct Compress_7 *ZggFGLABP_22;
ZggFGLABP_4 ZggFGLABP_23;
LONGINT ZggFGLABP_24;
LONGINT ZggFGLABP_25;
LONGINT ZggFGLABP_26;
CARDINAL ZggFGLABP_27;
CARDINAL ZggFGLABP_28;
struct Compress_8 *ZggFGLABP_29;
LONGINT ZggFGLABP_30;
struct Compress_9 *ZggFGLABP_31;
LONGINT ZggFGLABP_32;
LONGINT ZggFGLABP_33;
ZggFGLABP_2 ZggFGLABP_34;

#define Z185	0
static ZggFGLABP_3 Z222;
static struct S_4 {
ZpmCQ_4 A[100000 + 1];
} *Z224;
static struct S_5 {
ZggFGLABP_5 A[1000000 + 1];
} *Z225;
static struct S_6 {
ZggFGLABP_5 A[1000000 + 1];
} *Z227;
static struct S_7 {
SHORTCARD A[1000000 + 1];
} *Z228;
static struct S_8 {
SHORTCARD A[1000000 + 1];
} *Z229;
static struct S_9 {
SHORTCARD A[1000000 + 1];
} *Z230;
static struct S_10 {
ZiS8_5 A[1000000 + 1];
} *Z231;
static BOOLEAN Z232 ARGS ((ZggFGLABP_4 Z233, CARDINAL Z235, CARDINAL Z236));
static void Z238 ARGS ((INTEGER Z239, INTEGER Z240));
static BOOLEAN Z242 ARGS ((INTEGER Z239, INTEGER Z240));
struct S_17 {
SHORTCARD A[100000 + 1];
};
static BOOLEAN Z280 ARGS ((INTEGER Z239, INTEGER Z240));
typedef struct S_1 {
SHORTCARD Y0, Y1;
} Y1_282;
typedef SHORTCARD Z284;
typedef struct S_2 *Z285;
typedef struct S_2 {
struct S_16 {
Z284 A[100000 - 1 + 1];
} *Y0;
LONGINT Y1;
CARDINAL Y2;
Z285 Y3;
} Z286;
struct S_13 {
Y1_282 A[1000000 + 1];
};
struct S_14 {
Z284 A[1000000 + 1];
};
struct S_15 {
Z285 A[1000000 + 1];
};
static BOOLEAN Z311 ARGS ((INTEGER Z239, INTEGER Z240));
typedef struct S_3 {
SHORTCARD Y0, Y1;
} Z282;
struct S_11 {
CARDINAL A[1000000 + 1];
};
struct S_12 {
Z282 A[1000000 + 1];
};

void ZggFGLABP_35
 ARGS ((void))
{
LONGINT Z187;
CARDINAL Z188;

Z188 = 0;
{
LONGINT B_1 = 1, B_2 = ZiS8_12;

if (B_1 <= B_2)
for (Z187 = B_1;; Z187 += 1) {
{
register ZiS8_7 *W_1 = &ZiS8_14->A[Z187];

if (W_1->Y4 != ZiS8_0) {
INC(Z188);
W_1->Y5 = Z188;
} else {
W_1->Y5 = 0;
}
}
if (Z187 >= B_2) break;
}
}
ZggFGLABP_11 = Z188;
}

void ZggFGLABP_36
 ARGS ((void))
{
CARDINAL Z193, Z188;

Z188 = ZggFGLABP_11;
{
LONGCARD B_3 = 1, B_4 = ZpmC89LG6_2;

if (B_3 <= B_4)
for (Z193 = B_3;; Z193 += 1) {
{
register Zq0A4_120 *W_2 = &Zq0A4_95->A[Z193]->U_1.V_18.Y17;

if (ZpmCQ_25((LONGCARD)W_2->Y14, &ZiS8_42)) {
INC(Z188);
W_2->Y15 = Z188;
} else {
W_2->Y15 = 0;
}
}
if (Z193 >= B_4) break;
}
}
ZggFGLABP_12 = Z188;
}

CARDINAL ZggFGLABP_37
# ifdef HAVE_ARGS
(CARDINAL Z198)
# else
(Z198)
CARDINAL Z198;
# endif
{
if (Z198 < Zq0A4_91) {
return Zq0A4_93->A[Z198]->U_1.V_6.Y5.Y4;
} else {
return ZpmC89LG6_3 + Zq0A4_93->A[Z198]->U_1.V_9.Y8.Y8 - Zq0A4_89 + 1;
}
}

ZiS8_5 ZggFGLABP_38
# ifdef HAVE_ARGS
(LONGINT Z203)
# else
(Z203)
LONGINT Z203;
# endif
{
if (Z203 <= ZiS8_12) {
return ZiS8_14->A[Z203].Y5;
} else if (Z203 <= ZiS8_12 + (LONGINT)ZpmC89LG6_2) {
return Zq0A4_95->A[Z203 - ZiS8_12]->U_1.V_18.Y17.Y15;
} else {
return ZggFGLABP_12 + (CARDINAL)Z203 - ZiS8_28;
}
}

CARDINAL ZggFGLABP_39
# ifdef HAVE_ARGS
(CARDINAL Z203)
# else
(Z203)
CARDINAL Z203;
# endif
{
if (ZpmCQ_25(ORD('6'), &Zq0A4_61)) {
return ZggFGLABP_38((LONGINT)Z203);
} else {
return ZiS8_14->A[Z203].Y5;
}
}

void ZggFGLABP_40
 ARGS ((void))
{
LONGINT Z187;
CARDINAL Z206, Z207, Z208;
ZpmCQ_4 Z209;
BOOLEAN Z210;

ZpmCQ_5(&Z209, Zq0A4_91);
{
LONGINT B_5 = 1, B_6 = ZiS8_12;

if (B_5 <= B_6)
for (Z187 = B_5;; Z187 += 1) {
{
register ZiS8_7 *W_3 = &ZiS8_14->A[Z187];

if (W_3->Y4 != ZiS8_0) {
Z206 = W_3->Y0;
for (;;) {
{
register ZiS8_8 *W_4 = &ZiS8_17->A[Z206];

{
register Zq0A4_120 *W_5 = &Zq0A4_95->A[W_4->Y0]->U_1.V_18.Y17;

if (W_4->Y1 == W_5->Y12) {
ZiS8_49((SHORTCARD)Z187, Z206, &Z209);
for (;;) {
if (ZpmCQ_26(Z209)) {
Z210 = FALSE;
goto EXIT_2;
}
Z207 = ZpmCQ_20(&Z209);
if (W_3->Y10->A[Z207 - W_3->Y7] > ZiS8_28) {
if (W_3->Y10->A[Z207 - W_3->Y7] > ZiS8_28 + ZpmC89LG6_2) {
ZggGECF6A_13->A[W_3->Y10->A[Z207 - W_3->Y7] - ZiS8_28 - ZpmC89LG6_2].Y4 = ZiS8_28 + W_5->Y14;
}
W_3->Y6 = Z207;
Z210 = TRUE;
goto EXIT_2;
}
} EXIT_2:;
if (Z210) {
goto EXIT_1;
}
INC(Z206);
} else {
Z207 = W_5->Y17->A[W_4->Y1 + 1];
if (Z207 < Zq0A4_91) {
W_3->Y6 = Z207;
goto EXIT_1;
}
Z206 = ZdaDDAD7_4((LONGINT)Z206, (LONGINT)(W_3->Y0 + W_3->Y2));
Z208 = W_3->Y0 + W_3->Y2 + W_3->Y3;
do {
INC(Z206);
if (Z206 > Z208) {
W_3->Y6 = 0;
goto EXIT_1;
}
} while (!(Zq0A4_95->A[ZiS8_17->A[Z206].Y0]->U_1.V_18.Y17.Y16->U_1.V_9.Y8.Y8 == Z207));
}
}
}
} EXIT_1:;
}
}
if (Z187 >= B_6) break;
}
}
ZpmCQ_7(&Z209);
}

static BOOLEAN Z232
# ifdef HAVE_ARGS
(ZggFGLABP_4 Z233, CARDINAL Z235, CARDINAL Z236)
# else
(Z233, Z235, Z236)
ZggFGLABP_4 Z233;
CARDINAL Z235, Z236;
# endif
{
ZiS8_5 Z237;

Z237 = Z185;
do {
{
register ZiS8_7 *W_6 = &ZiS8_14->A[Z235];

if (Z233->A[W_6->Y5] == Z236) {
return TRUE;
}
if (Z233->A[W_6->Y5] == Z237) {
return FALSE;
}
Z237 = Z235;
Z235 = Z233->A[W_6->Y5];
}
} while (!(Z235 == Z185));
return FALSE;
}

static void Z238
# ifdef HAVE_ARGS
(INTEGER Z239, INTEGER Z240)
# else
(Z239, Z240)
INTEGER Z239, Z240;
# endif
{
ZiS8_5 Z241;

Z241 = Z231->A[Z239];
Z231->A[Z239] = Z231->A[Z240];
Z231->A[Z240] = Z241;
}

static BOOLEAN Z242
# ifdef HAVE_ARGS
(INTEGER Z239, INTEGER Z240)
# else
(Z239, Z240)
INTEGER Z239, Z240;
# endif
{
ZiS8_5 Z236, Z235;

Z236 = Z231->A[Z239];
Z235 = Z231->A[Z240];
return ZiS8_14->A[Z235].Y4 == ZiS8_0 || ZiS8_14->A[Z236].Y4 != ZiS8_0 && Z228->A[Z236] >= Z228->A[Z235];
}

void ZggFGLABP_41
 ARGS ((void))
{
ZiS8_5 Z187, Z236, Z235;
SHORTCARD Z244, Z245;
CARDINAL Z207, Z246, Z247, Z248, Z249, Z250;
LONGINT Z251, Z252, Z253, Z254;
ZggFGLABP_5 Z255, Z256, Z257, Z258, Z259;

Z251 = ZiS8_12 + 1;
ZarQdhNDD_0((ADDRESS *)&Z224, &Z251, (LONGINT)sizeof (ZpmCQ_4));
Z252 = ZiS8_12 + 1;
ZarQdhNDD_0((ADDRESS *)&Z228, &Z252, (LONGINT)sizeof (SHORTCARD));
ZarQdhNDD_0((ADDRESS *)&Z225, &Z252, (LONGINT)sizeof (ZggFGLABP_5));
{
SHORTCARD B_7 = 1, B_8 = (CARDINAL)ZiS8_12;

if (B_7 <= B_8)
for (Z187 = B_7;; Z187 += 1) {
{
register ZiS8_7 *W_7 = &ZiS8_14->A[Z187];

if (W_7->Y4 != ZiS8_0) {
ZpmCQ_5(&Z224->A[Z187], Zq0A4_88);
Z255 = NIL;
{
LONGCARD B_9 = W_7->Y7, B_10 = (CARDINAL)ZdaDDAD7_3((LONGINT)W_7->Y8, (LONGINT)Zq0A4_88);

if (B_9 <= B_10)
for (Z207 = B_9;; Z207 += 1) {
if (W_7->Y10->A[Z207 - W_7->Y7] != Z185) {
ZpmCQ_13(&Z224->A[Z187], Z207);
Z256 = (ZggFGLABP_5)ZDtgCFKU_1((LONGINT)sizeof (ZggFGLABP_6));
INC(ZggFGLABP_7);
{
register ZggFGLABP_6 *W_8 = Z256;

W_8->Y1 = Z207;
W_8->Y2 = W_7->Y10->A[Z207 - W_7->Y7];
W_8->Y0 = Z255;
Z255 = Z256;
}
}
if (Z207 >= B_10) break;
}
}
Z225->A[Z187] = Z255;
Z228->A[Z187] = ZpmCQ_15(&Z224->A[Z187]);
}
}
if (Z187 >= B_8) break;
}
}
ZibDGtrGC_0((STRING)"CompDomain	", 11L);
Z254 = ZiS8_12 + 1;
ZarQdhNDD_0((ADDRESS *)&Z231, &Z254, (LONGINT)sizeof (ZiS8_5));
{
SHORTCARD B_11 = 0, B_12 = (CARDINAL)ZiS8_12;

if (B_11 <= B_12)
for (Z187 = B_11;; Z187 += 1) {
Z231->A[Z187] = Z187;
if (Z187 >= B_12) break;
}
}
ZpwKP_2(1L, ZiS8_12, (ZpwKP_0)Z242, (ZpwKP_1)Z238);
ZibDGtrGC_0((STRING)"CompSort	", 9L);
if (!ZpmCQ_25(ORD('u'), &Zq0A4_61)) {
ZggFGLABP_18 = ZggFGLABP_11 + 1;
ZarQdhNDD_0((ADDRESS *)&ZggFGLABP_15, &ZggFGLABP_18, (LONGINT)ZggFGLABP_34);
{
SHORTCARD B_13 = 0, B_14 = ZggFGLABP_11;

if (B_13 <= B_14)
for (Z187 = B_13;; Z187 += 1) {
ZggFGLABP_15->A[Z187] = Z185;
if (Z187 >= B_14) break;
}
}
Z248 = 1;
Z249 = Z228->A[Z231->A[1]];
Z246 = 1;
for (;;) {
if (Z246 > ZggFGLABP_11) {
goto EXIT_3;
}
Z236 = Z231->A[Z246];
Z250 = Z228->A[Z236];
if (Z250 == 1) {
goto EXIT_3;
}
if (Z250 < Z249) {
Z248 = Z246;
Z249 = Z250;
}
Z244 = 0;
Z247 = Z248;
for (;;) {
if (Z247 > ZggFGLABP_11) {
goto EXIT_4;
}
if (Z247 != Z246) {
Z235 = Z231->A[Z247];
if (Z228->A[Z235] < Z244) {
goto EXIT_4;
}
if (ZpmCQ_21(Z224->A[Z235], Z224->A[Z236])) {
Z245 = 0;
Z256 = Z225->A[Z236];
Z257 = Z225->A[Z235];
while (Z257 != NIL) {
{
register ZggFGLABP_6 *W_9 = Z257;

while (Z256->Y1 != W_9->Y1) {
Z256 = Z256->Y0;
}
if (Z256->Y2 == W_9->Y2) {
INC(Z245);
}
Z257 = W_9->Y0;
}
}
if (Z245 > 0 && Z245 > Z244) {
Z244 = Z245;
ZggFGLABP_15->A[ZiS8_14->A[Z236].Y5] = Z235;
if (Z228->A[Z235] == Z244) {
goto EXIT_4;
}
}
}
}
INC(Z247);
} EXIT_4:;
INC(Z246);
} EXIT_3:;
ZibDGtrGC_0((STRING)"CompRelation1	", 14L);
Z246 = 1;
for (;;) {
if (Z246 > ZggFGLABP_11) {
goto EXIT_5;
}
Z236 = Z231->A[Z246];
if (Z228->A[Z236] == 1) {
goto EXIT_5;
}
{
register ZiS8_7 *W_10 = &ZiS8_14->A[Z236];

if (Z236 == ZggFGLABP_15->A[ZiS8_14->A[ZggFGLABP_15->A[W_10->Y5]].Y5]) {
Z247 = Z246 + 1;
Z244 = 0;
for (;;) {
if (Z247 > ZggFGLABP_11) {
goto EXIT_6;
}
Z235 = Z231->A[Z247];
if (Z228->A[Z235] < Z244) {
goto EXIT_6;
}
if (!Z232(ZggFGLABP_15, (LONGCARD)Z235, (LONGCARD)Z236) && ZpmCQ_21(Z224->A[Z235], Z224->A[Z236])) {
Z245 = 0;
Z256 = Z225->A[Z236];
Z257 = Z225->A[Z235];
while (Z257 != NIL) {
{
register ZggFGLABP_6 *W_11 = Z257;

while (Z256->Y1 != W_11->Y1) {
Z256 = Z256->Y0;
}
if (Z256->Y2 == W_11->Y2) {
INC(Z245);
}
Z257 = W_11->Y0;
}
}
if (Z245 > 0 && Z245 > Z244) {
Z244 = Z245;
ZggFGLABP_15->A[W_10->Y5] = Z235;
if (Z228->A[Z235] == Z244) {
goto EXIT_6;
}
}
}
INC(Z247);
} EXIT_6:;
if (Z244 == 0) {
ZggFGLABP_15->A[W_10->Y5] = Z185;
}
}
}
INC(Z246);
} EXIT_5:;
ZibDGtrGC_0((STRING)"CompEliminate	", 14L);
{
LONGCARD B_15 = 1, B_16 = ZggFGLABP_11;

if (B_15 <= B_16)
for (Z247 = B_15;; Z247 += 1) {
Z236 = Z231->A[Z247];
Z235 = ZggFGLABP_15->A[ZiS8_14->A[Z236].Y5];
if (Z235 != Z185) {
{
register ZiS8_7 *W_12 = &ZiS8_14->A[Z236];

Z248 = 0;
Z257 = Z225->A[Z235];
while (Z257 != NIL) {
{
register ZggFGLABP_6 *W_13 = Z257;

if (W_12->Y10->A[W_13->Y1 - W_12->Y7] == W_13->Y2) {
W_12->Y10->A[W_13->Y1 - W_12->Y7] = Z185;
INC(Z248);
}
Z257 = W_13->Y0;
}
}
DEC1(Z228->A[Z236], Z248);
INC1(ZggFGLABP_9, Z248);
}
}
if (Z247 >= B_16) break;
}
}
ZiS8_14->A[0].Y5 = 0;
}
Z253 = ZiS8_12 + 1;
ZarQdhNDD_0((ADDRESS *)&Z230, &Z253, (LONGINT)sizeof (SHORTCARD));
{
LONGCARD B_17 = 1, B_18 = ZggFGLABP_11;

if (B_17 <= B_18)
for (Z247 = B_17;; Z247 += 1) {
Z187 = Z231->A[Z247];
ZpmCQ_7(&Z224->A[Z187]);
{
register ZiS8_7 *W_14 = &ZiS8_14->A[Z187];

Z248 = 0;
Z256 = Z225->A[Z187];
Z257 = NIL;
while (Z256 != NIL) {
{
register ZggFGLABP_6 *W_15 = Z256;

if (W_14->Y10->A[W_15->Y1 - W_14->Y7] != Z185) {
Z255 = Z256;
Z256 = W_15->Y0;
{
register ZggFGLABP_6 *W_16 = Z255;

W_16->Y1 = ZggFGLABP_37((LONGCARD)W_16->Y1);
W_16->Y2 = ZggFGLABP_38((LONGINT)W_16->Y2);
Z248 = ZdaDDAD7_4((LONGINT)Z248, (LONGINT)W_16->Y1);
if (Z257 == NIL || W_16->Y1 < Z257->Y1) {
W_16->Y0 = Z257;
Z257 = Z255;
} else {
Z258 = Z257;
do {
Z259 = Z258;
Z258 = Z258->Y0;
} while (!(Z258 == NIL || W_16->Y1 < Z258->Y1));
W_16->Y0 = Z258;
Z259->Y0 = Z255;
}
}
} else {
Z256 = W_15->Y0;
}
}
}
Z225->A[Z187] = Z257;
Z230->A[Z187] = Z248;
}
if (Z247 >= B_18) break;
}
}
}

void ZggFGLABP_42
 ARGS ((void))
{
ZiS8_5 Z187;
CARDINAL Z246, Z247, Z248, Z207;
LONGINT Z251, Z252, Z253, Z254;
ZggFGLABP_5 Z255, Z256, Z257, Z258, Z259;
struct S_17 *Z270;
LONGINT Z271;
SHORTCARD Z193, Z272, Z273;
ZpmCQ_4 Z274;

Z251 = ZiS8_12 + 1;
ZarQdhNDD_0((ADDRESS *)&Z224, &Z251, (LONGINT)sizeof (ZpmCQ_4));
Z252 = ZiS8_12 + 1;
ZarQdhNDD_0((ADDRESS *)&Z228, &Z252, (LONGINT)sizeof (SHORTCARD));
ZarQdhNDD_0((ADDRESS *)&Z225, &Z252, (LONGINT)sizeof (ZggFGLABP_5));
Z271 = ZpmC89LG6_2 + 1;
ZarQdhNDD_0((ADDRESS *)&Z270, &Z271, (LONGINT)sizeof (SHORTCARD));
Z253 = ZiS8_12 + 1;
ZarQdhNDD_0((ADDRESS *)&Z230, &Z253, (LONGINT)sizeof (SHORTCARD));
Z254 = ZiS8_12 + 1;
ZarQdhNDD_0((ADDRESS *)&Z231, &Z254, (LONGINT)sizeof (ZiS8_5));
ZggFGLABP_18 = ZggFGLABP_11 + 1;
ZarQdhNDD_0((ADDRESS *)&ZggFGLABP_15, &ZggFGLABP_18, (LONGINT)ZggFGLABP_34);
ZggFGLABP_30 = ZggFGLABP_11 + 1;
ZarQdhNDD_0((ADDRESS *)&ZggFGLABP_29, &ZggFGLABP_30, (LONGINT)sizeof (SHORTCARD));
ZggFGLABP_32 = 300;
ZarQdhNDD_0((ADDRESS *)&ZggFGLABP_31, &ZggFGLABP_32, (LONGINT)sizeof (ZpmCQ_4));
ZggFGLABP_33 = 0;
ZpmCQ_5(&Z274, Zq0A4_88);
{
SHORTCARD B_19 = 0, B_20 = ZggFGLABP_11;

if (B_19 <= B_20)
for (Z187 = B_19;; Z187 += 1) {
ZggFGLABP_15->A[Z187] = Z185;
if (Z187 >= B_20) break;
}
}
{
SHORTCARD B_21 = 0, B_22 = (CARDINAL)ZiS8_12;

if (B_21 <= B_22)
for (Z187 = B_21;; Z187 += 1) {
Z231->A[Z187] = Z187;
if (Z187 >= B_22) break;
}
}
ZiS8_14->A[0].Y5 = 0;
{
SHORTCARD B_23 = 1, B_24 = (CARDINAL)ZiS8_12;

if (B_23 <= B_24)
for (Z187 = B_23;; Z187 += 1) {
{
register ZiS8_7 *W_17 = &ZiS8_14->A[Z187];

if (W_17->Y4 != ZiS8_0) {
Z272 = 0;
{
LONGCARD B_25 = 1, B_26 = ZpmC89LG6_2;

if (B_25 <= B_26)
for (Z246 = B_25;; Z246 += 1) {
Z270->A[Z246] = 0;
if (Z246 >= B_26) break;
}
}
Z255 = NIL;
{
LONGCARD B_27 = W_17->Y7, B_28 = (CARDINAL)ZdaDDAD7_3((LONGINT)W_17->Y8, (LONGINT)Zq0A4_88);

if (B_27 <= B_28)
for (Z207 = B_27;; Z207 += 1) {
if (W_17->Y10->A[Z207 - W_17->Y7] != Z185) {
Z256 = (ZggFGLABP_5)ZDtgCFKU_1((LONGINT)sizeof (ZggFGLABP_6));
INC(ZggFGLABP_7);
{
register ZggFGLABP_6 *W_18 = Z256;

W_18->Y1 = Z207;
W_18->Y2 = W_17->Y10->A[Z207 - W_17->Y7];
W_18->Y0 = Z255;
Z255 = Z256;
if (ZiS8_28 < W_18->Y2 && W_18->Y2 <= ZiS8_28 + ZpmC89LG6_2) {
Z193 = W_18->Y2 - ZiS8_28;
INC(Z270->A[Z193]);
if (Z270->A[Z193] > Z272) {
Z272 = Z270->A[Z193];
Z273 = W_18->Y2;
}
}
}
}
if (Z207 >= B_28) break;
}
}
Z225->A[Z187] = Z255;
if (Z272 > 3) {
ZggFGLABP_15->A[W_17->Y5] = Z273;
ZpmCQ_32(&Z274);
while (Z255 != NIL) {
{
register ZggFGLABP_6 *W_19 = Z255;

if (W_17->Y10->A[W_19->Y1 - W_17->Y7] == Z273) {
W_17->Y10->A[W_19->Y1 - W_17->Y7] = Z185;
ZpmCQ_13(&Z274, (LONGCARD)W_19->Y1);
}
Z255 = W_19->Y0;
}
}
Z246 = 0;
for (;;) {
INC(Z246);
if (Z246 > (CARDINAL)ZggFGLABP_33) {
INC(ZggFGLABP_33);
if (ZggFGLABP_33 >= ZggFGLABP_32) {
ZarQdhNDD_2((ADDRESS *)&ZggFGLABP_31, &ZggFGLABP_32, (LONGINT)sizeof (ZpmCQ_4));
}
ZpmCQ_5(&ZggFGLABP_31->A[Z246], Zq0A4_88);
ZpmCQ_30(&ZggFGLABP_31->A[Z246], Z274);
goto EXIT_7;
}
if (ZpmCQ_23(&ZggFGLABP_31->A[Z246], &Z274)) {
goto EXIT_7;
}
} EXIT_7:;
ZggFGLABP_29->A[W_17->Y5] = Z246;
INC1(ZggFGLABP_9, Z272);
} else {
ZggFGLABP_29->A[W_17->Y5] = 0;
}
Z247 = 0;
Z248 = 0;
Z256 = Z225->A[Z187];
Z257 = NIL;
while (Z256 != NIL) {
{
register ZggFGLABP_6 *W_20 = Z256;

if (W_17->Y10->A[W_20->Y1 - W_17->Y7] != Z185) {
Z255 = Z256;
Z256 = W_20->Y0;
{
register ZggFGLABP_6 *W_21 = Z255;

W_21->Y1 = ZggFGLABP_37((LONGCARD)W_21->Y1);
W_21->Y2 = ZggFGLABP_38((LONGINT)W_21->Y2);
Z248 = ZdaDDAD7_4((LONGINT)Z248, (LONGINT)W_21->Y1);
if (Z257 == NIL || W_21->Y1 < Z257->Y1) {
W_21->Y0 = Z257;
Z257 = Z255;
} else {
Z258 = Z257;
do {
Z259 = Z258;
Z258 = Z258->Y0;
} while (!(Z258 == NIL || W_21->Y1 < Z258->Y1));
W_21->Y0 = Z258;
Z259->Y0 = Z255;
}
}
INC(Z247);
} else {
Z256 = W_20->Y0;
}
}
}
Z225->A[Z187] = Z257;
Z228->A[Z187] = Z247;
Z230->A[Z187] = Z248;
}
}
if (Z187 >= B_24) break;
}
}
ZpmCQ_7(&Z274);
ZpwKP_2(1L, ZiS8_12, (ZpwKP_0)Z242, (ZpwKP_1)Z238);
}

static BOOLEAN Z280
# ifdef HAVE_ARGS
(INTEGER Z239, INTEGER Z240)
# else
(Z239, Z240)
INTEGER Z239, Z240;
# endif
{
ZiS8_5 Z236, Z235;

Z236 = Z231->A[Z239];
Z235 = Z231->A[Z240];
return Z228->A[Z236] > Z228->A[Z235] || Z228->A[Z236] == Z228->A[Z235] && Z230->A[Z236] <= Z230->A[Z235];
}

void ZggFGLABP_44
 ARGS ((void))
{
CARDINAL Z289, Z240, Z291, Z292, Z293;
LONGINT Z187, Z252;
BOOLEAN Z210;
ZggFGLABP_5 Z256;
INTEGER Z246, Z247, Z248;
SHORTCARD Z294;
CARDINAL Z295;
struct S_13 *Z296;
LONGINT Z297;
INTEGER Z298;
struct S_14 *Z299;
LONGINT Z300;
struct S_15 *Z301;
LONGINT Z302;
Z285 Z303;

ZpwKP_2(1L, (LONGINT)ZggFGLABP_11, (ZpwKP_0)Z280, (ZpwKP_1)Z238);
Z252 = ZiS8_12 + 1;
ZarQdhNDD_3((ADDRESS *)&Z230, &Z252, (LONGINT)sizeof (SHORTCARD));
ZibDGtrGC_0((STRING)"CompSort	", 9L);
ZggFGLABP_17 = ZggFGLABP_11 + 1;
ZarQdhNDD_0((ADDRESS *)&ZggFGLABP_14, &ZggFGLABP_17, (LONGINT)sizeof (CARDINAL));
ZggFGLABP_16 = ZdaDDAD7_4(ZiS8_12 * 2, (LONGINT)(ZpmC89LG6_3 + 1));
if (ZpmCQ_25(ORD('u'), &Zq0A4_61)) {
ZggFGLABP_16 = ZggFGLABP_16 * 3;
}
ZarQdhNDD_0((ADDRESS *)&ZggFGLABP_13, &ZggFGLABP_16, (LONGINT)sizeof (ZggFGLABP_3));
ZggFGLABP_19 = ZggFGLABP_16 - 1;
ZggFGLABP_20 = 0;
{
LONGCARD B_29 = 0, B_30 = ZggFGLABP_19;

if (B_29 <= B_30)
for (Z240 = B_29;; Z240 += 1) {
ZggFGLABP_13->A[Z240] = Z222;
if (Z240 >= B_30) break;
}
}
Z297 = ZpmC89LG6_3 / 2 + 2;
ZarQdhNDD_0((ADDRESS *)&Z296, &Z297, (LONGINT)sizeof (Y1_282));
Z300 = Z297 * 2;
ZarQdhNDD_0((ADDRESS *)&Z299, &Z300, (LONGINT)sizeof (Z284));
Z302 = ZggFGLABP_11;
ZarQdhNDD_0((ADDRESS *)&Z301, &Z302, (LONGINT)sizeof (Z285));
{
LONGINT B_31 = 0, B_32 = Z302 - 1;

if (B_31 <= B_32)
for (Z246 = B_31;; Z246 += 1) {
Z301->A[Z246] = NIL;
if (Z246 >= B_32) break;
}
}
{
LONGCARD B_33 = 1, B_34 = ZggFGLABP_11;

if (B_33 <= B_34)
for (Z291 = B_33;; Z291 += 1) {
Z187 = Z231->A[Z291];
{
register ZiS8_7 *W_22 = &ZiS8_14->A[Z187];

Z256 = Z225->A[Z187];
if (Z256 != NIL) {
Z298 = 1;
Z296->A[1].Y0 = Z256->Y1;
Z292 = Z256->Y1;
Z256 = Z256->Y0;
while (Z256 != NIL) {
{
register ZggFGLABP_6 *W_23 = Z256;

if (W_23->Y1 > Z292 + 1) {
Z296->A[Z298].Y1 = Z292;
INC(Z298);
Z296->A[Z298].Y0 = W_23->Y1;
}
Z292 = W_23->Y1;
Z256 = W_23->Y0;
}
}
Z296->A[Z298].Y1 = Z292;
Z299->A[2] = Z296->A[1].Y1 - Z296->A[1].Y0;
Z295 = Z299->A[2];
{
LONGINT B_35 = 2, B_36 = Z298;

if (B_35 <= B_36)
for (Z247 = B_35;; Z247 += 1) {
Z299->A[Z247 + Z247 - 1] = Z296->A[Z247].Y0 - Z296->A[Z247 - 1].Y1;
Z299->A[Z247 + Z247] = Z296->A[Z247].Y1 - Z296->A[Z247].Y0;
Z294 = Z247;
INC1(Z295, (Z299->A[Z247 + Z247 - 1] + Z299->A[Z247 + Z247]) * Z294);
if (Z247 >= B_36) break;
}
}
Z295 = Z295 % ZggFGLABP_11;
Z210 = FALSE;
Z303 = Z301->A[Z295];
for (;;) {
if (Z303 == NIL) {
goto EXIT_8;
}
if (Z303->Y1 == Z298 * 2) {
Z210 = TRUE;
Z247 = 1;
for (;;) {
INC(Z247);
if (Z303->Y0->A[Z247 - 1] != Z299->A[Z247]) {
Z210 = FALSE;
goto EXIT_9;
}
if (Z247 == Z303->Y1) {
goto EXIT_9;
}
} EXIT_9:;
if (Z210) {
goto EXIT_8;
}
}
Z303 = Z303->Y3;
} EXIT_8:;
if (Z210) {
if (Z303->Y2 + Z303->Y0->A[2 - 1] < Z296->A[1].Y0) {
Z289 = 0;
} else {
Z289 = Z303->Y2 - Z296->A[1].Y0 + Z303->Y0->A[2 - 1] + 1;
}
} else {
Z289 = 0;
Z303 = (Z285)ZDtgCFKU_1((LONGINT)sizeof (Z286));
{
register Z286 *W_24 = Z303;

W_24->Y2 = 0;
W_24->Y3 = Z301->A[Z295];
W_24->Y1 = Z298 * 2;
ZarQdhNDD_0((ADDRESS *)&W_24->Y0, &W_24->Y1, (LONGINT)sizeof (Z284));
{
LONGINT B_37 = 1, B_38 = W_24->Y1;

if (B_37 <= B_38)
for (Z247 = B_37;; Z247 += 1) {
W_24->Y0->A[Z247 - 1] = Z299->A[Z247];
if (Z247 >= B_38) break;
}
}
}
Z301->A[Z295] = Z303;
}
for (;;) {
if (Z289 > ZggFGLABP_19 - ZpmC89LG6_3) {
ZarQdhNDD_2((ADDRESS *)&ZggFGLABP_13, &ZggFGLABP_16, (LONGINT)sizeof (ZggFGLABP_3));
{
LONGCARD B_39 = ZggFGLABP_19 + 1, B_40 = (CARDINAL)(ZggFGLABP_16 - 1);

if (B_39 <= B_40)
for (Z240 = B_39;; Z240 += 1) {
ZggFGLABP_13->A[Z240] = Z222;
if (Z240 >= B_40) break;
}
}
ZggFGLABP_19 = ZggFGLABP_16 - 1;
}
Z210 = TRUE;
Z246 = 1;
for (;;) {
Z247 = Z296->A[Z246].Y0;
Z248 = Z296->A[Z246].Y1;
for (;;) {
if (ZggFGLABP_13->A[Z289 + (CARDINAL)Z247].Y0 != Z185) {
do {
INC(Z247);
} while (!(ZggFGLABP_13->A[Z289 + (CARDINAL)Z247].Y0 == Z185));
Z210 = FALSE;
goto EXIT_12;
}
INC(Z247);
if (Z247 > Z248) {
goto EXIT_12;
}
} EXIT_12:;
if (!Z210 || Z246 == Z298) {
goto EXIT_11;
}
INC(Z246);
} EXIT_11:;
if (Z210) {
goto EXIT_10;
}
INC1(Z289, Z247);
DEC1(Z289, Z296->A[Z246].Y0);
} EXIT_10:;
ZggFGLABP_14->A[W_22->Y5] = Z289;
Z256 = Z225->A[Z187];
while (Z256 != NIL) {
{
register ZggFGLABP_6 *W_25 = Z256;

ZggFGLABP_13->A[Z289 + W_25->Y1].Y1 = W_25->Y2;
ZggFGLABP_13->A[Z289 + W_25->Y1].Y0 = W_22->Y5;
Z256 = W_25->Y0;
}
}
ZggFGLABP_20 = ZdaDDAD7_4((LONGINT)ZggFGLABP_20, (LONGINT)(Z289 + ZpmC89LG6_3));
Z303->Y2 = Z289 + Z296->A[1].Y0;
} else {
ZggFGLABP_14->A[W_22->Y5] = 0;
}
}
if (Z291 >= B_34) break;
}
}
ZarQdhNDD_3((ADDRESS *)&Z228, &Z252, (LONGINT)sizeof (SHORTCARD));
ZarQdhNDD_3((ADDRESS *)&Z225, &Z252, (LONGINT)sizeof (ZggFGLABP_5));
ZarQdhNDD_3((ADDRESS *)&Z296, &Z297, (LONGINT)sizeof (Y1_282));
ZarQdhNDD_3((ADDRESS *)&Z299, &Z300, (LONGINT)sizeof (Z284));
ZarQdhNDD_3((ADDRESS *)&Z301, &Z302, (LONGINT)sizeof (Z285));
}

static BOOLEAN Z311
# ifdef HAVE_ARGS
(INTEGER Z239, INTEGER Z240)
# else
(Z239, Z240)
INTEGER Z239, Z240;
# endif
{
return Z229->A[Z231->A[Z239]] >= Z229->A[Z231->A[Z240]];
}

void ZggFGLABP_43
 ARGS ((void))
{
ZiS8_5 Z187, Z236, Z235;
SHORTCARD Z244, Z245;
CARDINAL Z207, Z246, Z247, Z248, Z249, Z250;
LONGINT Z251, Z252;
ZggFGLABP_5 Z255, Z256, Z257;

Z251 = ZiS8_12 + 1;
Z252 = ZiS8_12 + 1;
ZarQdhNDD_0((ADDRESS *)&Z229, &Z252, (LONGINT)sizeof (SHORTCARD));
ZarQdhNDD_0((ADDRESS *)&Z227, &Z252, (LONGINT)sizeof (ZggFGLABP_5));
{
SHORTCARD B_41 = 1, B_42 = (CARDINAL)ZiS8_12;

if (B_41 <= B_42)
for (Z187 = B_41;; Z187 += 1) {
{
register ZiS8_7 *W_26 = &ZiS8_14->A[Z187];

if (W_26->Y4 != ZiS8_0) {
ZpmCQ_5(&Z224->A[Z187], ZpmC89LG6_1);
Z255 = NIL;
{
LONGCARD B_43 = (CARDINAL)ZdaDDAD7_4((LONGINT)W_26->Y7, (LONGINT)Zq0A4_89), B_44 = W_26->Y8;

if (B_43 <= B_44)
for (Z207 = B_43;; Z207 += 1) {
if (W_26->Y10->A[Z207 - W_26->Y7] != Z185) {
ZpmCQ_13(&Z224->A[Z187], Z207 - Zq0A4_89);
Z256 = (ZggFGLABP_5)ZDtgCFKU_1((LONGINT)sizeof (ZggFGLABP_6));
INC(ZggFGLABP_8);
{
register ZggFGLABP_6 *W_27 = Z256;

W_27->Y1 = Z207;
W_27->Y2 = W_26->Y10->A[Z207 - W_26->Y7];
W_27->Y0 = Z255;
Z255 = Z256;
}
}
if (Z207 >= B_44) break;
}
}
Z227->A[Z187] = Z255;
Z229->A[Z187] = ZpmCQ_15(&Z224->A[Z187]);
}
}
if (Z187 >= B_42) break;
}
}
ZibDGtrGC_0((STRING)"CompDomain	", 11L);
ZpwKP_2(1L, (LONGINT)ZggFGLABP_11, (ZpwKP_0)Z311, (ZpwKP_1)Z238);
ZibDGtrGC_0((STRING)"CompSort	", 9L);
if (!ZpmCQ_25(ORD('o'), &Zq0A4_61)) {
ZggFGLABP_26 = ZggFGLABP_11 + 1;
ZarQdhNDD_0((ADDRESS *)&ZggFGLABP_23, &ZggFGLABP_26, (LONGINT)ZggFGLABP_34);
{
SHORTCARD B_45 = 0, B_46 = ZggFGLABP_11;

if (B_45 <= B_46)
for (Z187 = B_45;; Z187 += 1) {
ZggFGLABP_23->A[Z187] = Z185;
if (Z187 >= B_46) break;
}
}
Z248 = 1;
Z249 = Z229->A[Z231->A[1]];
Z246 = 1;
for (;;) {
if (Z246 > ZggFGLABP_11) {
goto EXIT_13;
}
Z236 = Z231->A[Z246];
Z250 = Z229->A[Z236];
if (Z250 == 1) {
goto EXIT_13;
}
if (Z250 < Z249) {
Z248 = Z246;
Z249 = Z250;
}
Z244 = 0;
Z247 = Z248;
for (;;) {
if (Z247 > ZggFGLABP_11) {
goto EXIT_14;
}
if (Z247 != Z246) {
Z235 = Z231->A[Z247];
if (Z229->A[Z235] < Z244) {
goto EXIT_14;
}
if (ZpmCQ_21(Z224->A[Z235], Z224->A[Z236])) {
Z245 = 0;
Z256 = Z227->A[Z236];
Z257 = Z227->A[Z235];
while (Z257 != NIL) {
{
register ZggFGLABP_6 *W_28 = Z257;

while (Z256->Y1 != W_28->Y1) {
Z256 = Z256->Y0;
}
if (Z256->Y2 == W_28->Y2) {
INC(Z245);
}
Z257 = W_28->Y0;
}
}
if (Z245 > 0 && Z245 > Z244) {
Z244 = Z245;
ZggFGLABP_23->A[ZiS8_14->A[Z236].Y5] = Z235;
if (Z229->A[Z235] == Z244) {
goto EXIT_14;
}
}
}
}
INC(Z247);
} EXIT_14:;
INC(Z246);
} EXIT_13:;
ZibDGtrGC_0((STRING)"CompRelation1	", 14L);
Z246 = 1;
for (;;) {
if (Z246 > ZggFGLABP_11) {
goto EXIT_15;
}
Z236 = Z231->A[Z246];
if (Z229->A[Z236] == 1) {
goto EXIT_15;
}
{
register ZiS8_7 *W_29 = &ZiS8_14->A[Z236];

if (Z236 == ZggFGLABP_23->A[ZiS8_14->A[ZggFGLABP_23->A[W_29->Y5]].Y5]) {
Z247 = Z246 + 1;
Z244 = 0;
for (;;) {
if (Z247 > ZggFGLABP_11) {
goto EXIT_16;
}
Z235 = Z231->A[Z247];
if (Z229->A[Z235] < Z244) {
goto EXIT_16;
}
if (!Z232(ZggFGLABP_23, (LONGCARD)Z235, (LONGCARD)Z236) && ZpmCQ_21(Z224->A[Z235], Z224->A[Z236])) {
Z245 = 0;
Z256 = Z227->A[Z236];
Z257 = Z227->A[Z235];
while (Z257 != NIL) {
{
register ZggFGLABP_6 *W_30 = Z257;

while (Z256->Y1 != W_30->Y1) {
Z256 = Z256->Y0;
}
if (Z256->Y2 == W_30->Y2) {
INC(Z245);
}
Z257 = W_30->Y0;
}
}
if (Z245 > 0 && Z245 > Z244) {
Z244 = Z245;
ZggFGLABP_23->A[W_29->Y5] = Z235;
if (Z229->A[Z235] == Z244) {
goto EXIT_16;
}
}
}
INC(Z247);
} EXIT_16:;
if (Z244 == 0) {
ZggFGLABP_23->A[W_29->Y5] = Z185;
}
}
}
INC(Z246);
} EXIT_15:;
ZibDGtrGC_0((STRING)"CompEliminate	", 14L);
{
LONGCARD B_47 = 1, B_48 = ZggFGLABP_11;

if (B_47 <= B_48)
for (Z247 = B_47;; Z247 += 1) {
Z236 = Z231->A[Z247];
Z235 = ZggFGLABP_23->A[ZiS8_14->A[Z236].Y5];
if (Z235 != Z185) {
{
register ZiS8_7 *W_31 = &ZiS8_14->A[Z236];

Z248 = 0;
Z257 = Z227->A[Z235];
while (Z257 != NIL) {
{
register ZggFGLABP_6 *W_32 = Z257;

if (W_31->Y10->A[W_32->Y1 - W_31->Y7] == W_32->Y2) {
W_31->Y10->A[W_32->Y1 - W_31->Y7] = Z185;
INC(Z248);
}
Z257 = W_32->Y0;
}
}
DEC1(Z229->A[Z236], Z248);
INC1(ZggFGLABP_10, Z248);
}
}
if (Z247 >= B_48) break;
}
}
ZiS8_14->A[0].Y5 = 0;
}
{
LONGCARD B_49 = 1, B_50 = ZggFGLABP_11;

if (B_49 <= B_50)
for (Z247 = B_49;; Z247 += 1) {
Z187 = Z231->A[Z247];
ZpmCQ_7(&Z224->A[Z187]);
{
register ZiS8_7 *W_33 = &ZiS8_14->A[Z187];

Z256 = Z227->A[Z187];
Z257 = NIL;
while (Z256 != NIL) {
{
register ZggFGLABP_6 *W_34 = Z256;

if (W_33->Y10->A[W_34->Y1 - W_33->Y7] != Z185) {
Z255 = Z256;
Z256 = W_34->Y0;
{
register ZggFGLABP_6 *W_35 = Z255;

W_35->Y1 = ZggFGLABP_37((LONGCARD)W_35->Y1);
W_35->Y2 = ZggFGLABP_38((LONGINT)W_35->Y2);
W_35->Y0 = Z257;
Z257 = Z255;
}
} else {
Z256 = W_34->Y0;
}
}
}
Z227->A[Z187] = Z257;
}
if (Z247 >= B_50) break;
}
}
ZarQdhNDD_3((ADDRESS *)&Z224, &Z251, (LONGINT)sizeof (ZpmCQ_4));
}

void ZggFGLABP_45
 ARGS ((void))
{
CARDINAL Z289, Z240, Z246, Z247, Z291, Z248, Z318, Z320, Z293, Z298;
LONGINT Z187, Z252;
BOOLEAN Z210;
ZggFGLABP_5 Z256;
LONGINT Z321;
struct S_11 *Z322;
LONGINT Z297;
struct S_12 *Z296;
CARDINAL Z323;

Z323 = ZpmC89LG6_3 + ZpmC89LG6_1;
ZggFGLABP_25 = ZggFGLABP_11 + 1;
ZarQdhNDD_0((ADDRESS *)&ZggFGLABP_22, &ZggFGLABP_25, (LONGINT)sizeof (CARDINAL));
ZggFGLABP_24 = ZdaDDAD7_4((LONGINT)ZggFGLABP_12, (LONGINT)(Z323 + 1));
if (ZpmCQ_25(ORD('o'), &Zq0A4_61)) {
ZggFGLABP_24 = ZggFGLABP_24 * 5;
}
ZarQdhNDD_0((ADDRESS *)&ZggFGLABP_21, &ZggFGLABP_24, (LONGINT)sizeof (ZggFGLABP_3));
ZggFGLABP_27 = ZggFGLABP_24 - 1;
ZggFGLABP_28 = 0;
{
LONGCARD B_51 = ZpmC89LG6_3, B_52 = ZggFGLABP_27;

if (B_51 <= B_52)
for (Z240 = B_51;; Z240 += 1) {
ZggFGLABP_21->A[Z240] = Z222;
if (Z240 >= B_52) break;
}
}
Z321 = ZpmC89LG6_1 + 1;
ZarQdhNDD_0((ADDRESS *)&Z322, &Z321, (LONGINT)sizeof (CARDINAL));
{
LONGCARD B_53 = 0, B_54 = ZpmC89LG6_1;

if (B_53 <= B_54)
for (Z240 = B_53;; Z240 += 1) {
Z322->A[Z240] = 0;
if (Z240 >= B_54) break;
}
}
Z297 = ZpmC89LG6_1 / 2 + 1;
ZarQdhNDD_0((ADDRESS *)&Z296, &Z297, (LONGINT)sizeof (Z282));
ZpwKP_2(1L, (LONGINT)ZggFGLABP_11, (ZpwKP_0)Z311, (ZpwKP_1)Z238);
ZibDGtrGC_0((STRING)"CompSort	", 9L);
{
LONGCARD B_55 = 1, B_56 = ZggFGLABP_11;

if (B_55 <= B_56)
for (Z291 = B_55;; Z291 += 1) {
Z187 = Z231->A[Z291];
{
register ZiS8_7 *W_36 = &ZiS8_14->A[Z187];

Z256 = Z227->A[Z187];
if (Z256 != NIL) {
Z318 = Z256->Y1;
Z320 = Z318;
Z298 = 1;
Z296->A[1].Y0 = Z318;
Z256 = Z256->Y0;
while (Z256 != NIL) {
{
register ZggFGLABP_6 *W_37 = Z256;

if (W_37->Y1 > Z320 + 1) {
Z296->A[Z298].Y1 = Z320 - Z318;
INC(Z298);
Z318 = W_37->Y1;
Z296->A[Z298].Y0 = Z318;
}
Z320 = W_37->Y1;
Z256 = W_37->Y0;
}
}
Z296->A[Z298].Y1 = Z320 - Z318;
Z318 = Z296->A[1].Y0;
if (Z298 == 1) {
Z293 = Z296->A[1].Y1;
} else {
Z293 = Z296->A[2].Y0 - Z318;
}
if (Z322->A[Z293] <= Z318) {
Z289 = 0;
} else {
Z289 = Z322->A[Z293] - Z318;
}
while (ZggFGLABP_21->A[Z289 + Z318].Y0 != Z185 || ZggFGLABP_21->A[Z289 + Z318 + Z293].Y0 != Z185) {
INC(Z289);
if (Z289 > ZggFGLABP_27 - Z323) {
ZarQdhNDD_2((ADDRESS *)&ZggFGLABP_21, &ZggFGLABP_24, (LONGINT)sizeof (ZggFGLABP_3));
{
LONGCARD B_57 = ZggFGLABP_27 + 1, B_58 = (CARDINAL)(ZggFGLABP_24 - 1);

if (B_57 <= B_58)
for (Z240 = B_57;; Z240 += 1) {
ZggFGLABP_21->A[Z240] = Z222;
if (Z240 >= B_58) break;
}
}
ZggFGLABP_27 = ZggFGLABP_24 - 1;
}
}
Z322->A[Z293] = Z289 + Z318;
for (;;) {
if (Z289 > ZggFGLABP_27 - Z323) {
ZarQdhNDD_2((ADDRESS *)&ZggFGLABP_21, &ZggFGLABP_24, (LONGINT)sizeof (ZggFGLABP_3));
{
LONGCARD B_59 = ZggFGLABP_27 + 1, B_60 = (CARDINAL)(ZggFGLABP_24 - 1);

if (B_59 <= B_60)
for (Z240 = B_59;; Z240 += 1) {
ZggFGLABP_21->A[Z240] = Z222;
if (Z240 >= B_60) break;
}
}
ZggFGLABP_27 = ZggFGLABP_24 - 1;
}
Z246 = 1;
Z210 = TRUE;
for (;;) {
Z247 = Z296->A[Z246].Y0;
Z248 = Z247 + Z296->A[Z246].Y1;
for (;;) {
if (ZggFGLABP_21->A[Z289 + Z247].Y0 != Z185) {
do {
INC(Z247);
} while (!(ZggFGLABP_21->A[Z289 + Z247].Y0 == Z185));
Z210 = FALSE;
goto EXIT_19;
}
INC(Z247);
if (Z247 > Z248) {
goto EXIT_19;
}
} EXIT_19:;
if (!Z210 || Z246 == Z298) {
goto EXIT_18;
}
INC(Z246);
} EXIT_18:;
if (Z210) {
goto EXIT_17;
}
INC1(Z289, Z247 - Z296->A[Z246].Y0);
} EXIT_17:;
ZggFGLABP_22->A[W_36->Y5] = Z289;
Z256 = Z227->A[Z187];
while (Z256 != NIL) {
{
register ZggFGLABP_6 *W_38 = Z256;

ZggFGLABP_21->A[Z289 + W_38->Y1].Y1 = W_38->Y2;
ZggFGLABP_21->A[Z289 + W_38->Y1].Y0 = W_36->Y5;
Z256 = W_38->Y0;
}
}
ZggFGLABP_28 = ZdaDDAD7_4((LONGINT)ZggFGLABP_28, (LONGINT)(Z289 + Z323));
} else {
ZggFGLABP_22->A[W_36->Y5] = 0;
}
}
if (Z291 >= B_56) break;
}
}
Z252 = ZiS8_12 + 1;
ZarQdhNDD_3((ADDRESS *)&Z229, &Z252, (LONGINT)sizeof (SHORTCARD));
ZarQdhNDD_3((ADDRESS *)&Z227, &Z252, (LONGINT)sizeof (ZggFGLABP_5));
ZarQdhNDD_3((ADDRESS *)&Z322, &Z321, (LONGINT)sizeof (CARDINAL));
ZarQdhNDD_3((ADDRESS *)&Z296, &Z297, (LONGINT)sizeof (Z282));
ZarQdhNDD_3((ADDRESS *)&Z231, &Z252, (LONGINT)sizeof (ZiS8_5));
}

void BEGIN_Compress ARGS ((void))
{
  static BOOLEAN has_been_called = FALSE;
  if (has_been_called) return;
  has_been_called = TRUE;
BEGIN_Sets ();
BEGIN_LR1 ();
BEGIN_General ();
BEGIN_rMemory ();
BEGIN_DynArray ();
BEGIN_Sets ();
BEGIN_IO ();
BEGIN_Position ();
BEGIN_Errors ();
BEGIN_Tree ();
BEGIN_Semantic ();
BEGIN_LR1 ();
BEGIN_Conflict ();
BEGIN_LarkTime ();
BEGIN_Sort ();

ZggFGLABP_34 = sizeof (ZggFGLABP_2);
ZggFGLABP_15 = NIL;
ZggFGLABP_23 = NIL;
ZggFGLABP_7 = 0;
ZggFGLABP_8 = 0;
ZggFGLABP_9 = 0;
ZggFGLABP_10 = 0;
Z222.Y0 = Z185;
Z222.Y1 = Z185;
}
