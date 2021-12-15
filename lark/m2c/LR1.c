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

#ifndef DEFINITION_IO
#include "IO.h"
#endif

#ifndef DEFINITION_Strings
#include "Strings.h"
#endif

#ifndef DEFINITION_Idents
#include "Idents.h"
#endif

#ifndef DEFINITION_Relation
#include "Relation.h"
#endif

#ifndef DEFINITION_Position
#include "Position.h"
#endif

#ifndef DEFINITION_Errors
#include "Errors.h"
#endif

#ifndef DEFINITION_Conflict
#include "Conflict.h"
#endif

#ifndef DEFINITION_Compress
#include "Compress.h"
#endif

#ifndef DEFINITION_Sets
#include "Sets.h"
#endif

#ifndef DEFINITION_Tree
#include "Tree.h"
#endif

#ifndef DEFINITION_Semantic
#include "Semantic.h"
#endif

#ifndef DEFINITION_Strings
#include "Strings.h"
#endif

#ifndef DEFINITION_Errors
#include "Errors.h"
#endif

#ifndef DEFINITION_Relation
#include "Relation.h"
#endif

#ifndef DEFINITION_Tree
#include "Tree.h"
#endif

#ifndef DEFINITION_LR1
#include "LR1.h"
#endif

LONGINT ZiS8_12;
LONGINT ZiS8_13;
struct LR1_8 *ZiS8_14;
LONGINT ZiS8_15;
LONGINT ZiS8_16;
struct LR1_9 *ZiS8_17;
LONGINT ZiS8_18;
LONGINT ZiS8_19;
struct LR1_10 *ZiS8_20;
LONGINT ZiS8_21;
struct LR1_11 *ZiS8_22;
LONGINT ZiS8_23;
struct LR1_12 *ZiS8_24;
LONGINT ZiS8_25;
LONGINT ZiS8_26;
struct LR1_13 *ZiS8_27;
CARDINAL ZiS8_28, ZiS8_29, ZiS8_30;
LONGINT ZiS8_31, ZiS8_32;
BOOLEAN ZiS8_33;
Zq0A4_35 ZiS8_34;
SHORTCARD ZiS8_35, ZiS8_36, ZiS8_37, ZiS8_38, ZiS8_39, ZiS8_40, ZiS8_41;
ZpmCQ_4 ZiS8_42, ZiS8_43;

#define Z259	MAX_SHORTCARD
static CARDINAL Z260, Z261;
static LONGINT Z262;
static ZolB7FGBG_3 Z263;
static ZpmCQ_4 Z264, Z265, Z266, Z267;
static struct S_1 {
ZiS8_5 A[1000000 + 1];
} *Z268;
static struct S_2 {
CARDINAL A[1000000 + 1];
} *Z270;
static LONGINT Z271;
static CARDINAL Z272;
static BOOLEAN Z273 ARGS ((ZiS8_5 Z274));
static ZiS8_5 Z283 ARGS ((ZiS8_5 Z274));
static ZiS8_5 Z285 ARGS ((ZiS8_5 Z274));
static void Z330 ARGS ((ZiS8_5 Z274));
static void Z331 ARGS ((CARDINAL Z328));
struct S_1_Closure;
static void Z316 ARGS ((ZiS8_5 Z274));
static void Z351 ARGS ((struct S_1_Closure *link, SHORTCARD Z328));
struct S_1_Closure {
ZiS8_5 *Z274;
SHORTCARD *Z224;
SHORTCARD *Z345;
SHORTCARD *Z346;
SHORTCARD *Z347;
SHORTCARD *Z348;
SHORTCARD *Z349;
};
static void Z292 ARGS ((CARDINAL Z274, CARDINAL Z275, ZpmCQ_4 *Z364));
static void Z374 ARGS ((ZiS8_5 Z274, CARDINAL Z275, ZpmCQ_4 *Z364));
static ZpmCQ_4 Z377;
static void Z381 ARGS ((ZiS8_5 Z274, CARDINAL Z275));
static CARDINAL Z389 ARGS ((ZiS8_5 Z274));
static void Z385 ARGS ((ZiS8_5 Z274));
static void Z386 ARGS ((ZiS8_5 Z274, CARDINAL Z275));
static void Z416 ARGS ((ZfM_3 Z412, ZiS8_9 Z366));
static void Z418 ARGS ((CHAR Z419[], LONGCARD O_1, INTEGER Z420));
static void Z332 ARGS ((ADDRESS Z423, ZiS8_5 Z274));

static BOOLEAN Z273
# ifdef HAVE_ARGS
(ZiS8_5 Z274)
# else
(Z274)
ZiS8_5 Z274;
# endif
{
CARDINAL Z275, Z276;

{
register ZiS8_7 *W_1 = &ZiS8_14->A[Z274];

if (W_1->Y2 != ZiS8_14->A[ZiS8_12].Y2) {
return FALSE;
}
Z276 = ZiS8_14->A[ZiS8_12].Y0;
{
LONGCARD B_1 = 0, B_2 = W_1->Y2;

if (B_1 <= B_2)
for (Z275 = B_1;; Z275 += 1) {
{
register ZiS8_8 *W_2 = &ZiS8_17->A[Z276 + Z275];

if (ZiS8_17->A[W_1->Y0 + Z275].Y0 != W_2->Y0 || ZiS8_17->A[W_1->Y0 + Z275].Y1 != W_2->Y1) {
return FALSE;
}
}
if (Z275 >= B_2) break;
}
}
}
return TRUE;
}

static ZiS8_5 Z283
# ifdef HAVE_ARGS
(ZiS8_5 Z274)
# else
(Z274)
ZiS8_5 Z274;
# endif
{
CARDINAL Z275, Z276;

Z276 = ZiS8_14->A[ZiS8_12].Y0;
while (Z274 != 0) {
{
register ZiS8_7 *W_3 = &ZiS8_14->A[Z274];

if (W_3->Y2 == ZiS8_14->A[ZiS8_12].Y2) {
Z275 = 0;
for (;;) {
{
register ZiS8_8 *W_4 = &ZiS8_17->A[Z276 + Z275];

if (ZiS8_17->A[W_3->Y0 + Z275].Y0 != W_4->Y0 || ZiS8_17->A[W_3->Y0 + Z275].Y1 != W_4->Y1) {
goto EXIT_1;
}
}
if (Z275 == W_3->Y2) {
return Z274;
}
INC(Z275);
} EXIT_1:;
}
Z274 = W_3->Y9;
}
}
return ZiS8_12;
}

static ZiS8_5 Z285
# ifdef HAVE_ARGS
(ZiS8_5 Z274)
# else
(Z274)
ZiS8_5 Z274;
# endif
{
CARDINAL Z275;

while (Z274 != 0) {
{
register ZiS8_7 *W_5 = &ZiS8_14->A[Z274];

if (W_5->Y4 == ZiS8_14->A[ZiS8_12].Y4 && Z273(Z274)) {
Z275 = 0;
if (Z274 > ZiS8_29) {
for (;;) {
if (!ZpmCQ_23(ZiS8_20->A[W_5->Y1 + Z275].Y0, ZiS8_20->A[ZiS8_14->A[ZiS8_12].Y1 + Z275].Y0)) {
goto EXIT_2;
}
if (Z275 == W_5->Y2) {
return Z274;
}
INC(Z275);
} EXIT_2:;
} else {
for (;;) {
{
register ZiS8_9 *W_6 = &ZiS8_20->A[W_5->Y1 + Z275];

if (W_6->Y0 == NIL) {
W_6->Y0 = (Zq0A4_57)ZiS8_48();
Z292((LONGCARD)Z274, W_5->Y0 + Z275, W_6->Y0);
}
if (!ZpmCQ_23(W_6->Y0, ZiS8_20->A[ZiS8_14->A[ZiS8_12].Y1 + Z275].Y0)) {
goto EXIT_3;
}
}
if (Z275 == W_5->Y2) {
return Z274;
}
INC(Z275);
} EXIT_3:;
}
}
Z274 = W_5->Y9;
}
}
return ZiS8_12;
}

void ZiS8_44
 ARGS ((void))
{
CARDINAL Z294, Z275, Z295;

ZiS8_16 = ZpmC89LG6_2 * 24;
ZiS8_13 = ZiS8_16 / 10;
ZiS8_19 = ZiS8_16 / 3;
ZiS8_21 = Zq0A4_90 + 1;
Z271 = 64;
Z272 = 0;
ZarQdhNDD_0((ADDRESS *)&ZiS8_14, &ZiS8_13, (LONGINT)sizeof (ZiS8_7));
ZarQdhNDD_0((ADDRESS *)&ZiS8_17, &ZiS8_16, (LONGINT)sizeof (ZiS8_8));
ZarQdhNDD_0((ADDRESS *)&ZiS8_20, &ZiS8_19, (LONGINT)sizeof (ZiS8_9));
ZarQdhNDD_0((ADDRESS *)&ZiS8_22, &ZiS8_21, (LONGINT)sizeof (LONGINT));
ZarQdhNDD_0((ADDRESS *)&Z268, &Z271, (LONGINT)sizeof (ZiS8_5));
ZarQdhNDD_0((ADDRESS *)&Z270, &Z271, (LONGINT)sizeof (CARDINAL));
{
LONGCARD B_3 = 0, B_4 = Zq0A4_90;

if (B_3 <= B_4)
for (Z295 = B_3;; Z295 += 1) {
ZiS8_22->A[Z295] = 0;
if (Z295 >= B_4) break;
}
}
ZpmCQ_5(&ZiS8_43, (LONGCARD)ZiS8_13);
ZpmCQ_5(&Z264, Zq0A4_90);
ZpmCQ_5(&Z265, Zq0A4_90);
ZpmCQ_5(&Z266, Zq0A4_91);
{
register ZiS8_7 *W_7 = &ZiS8_14->A[0];

W_7->Y0 = 0;
W_7->Y1 = 0;
W_7->Y2 = 0;
W_7->Y3 = 0;
W_7->Y4 = 0;
W_7->Y5 = 0;
W_7->Y6 = 0;
W_7->Y7 = 0;
W_7->Y8 = 0;
W_7->Y9 = 0;
W_7->Y10 = NIL;
}
ZiS8_12 = 0;
ZiS8_15 = 0;
ZiS8_18 = 0;
ZolB7FGBG_4(&Z263, (LONGINT)Zq0A4_90, (LONGINT)ZpmC89LG6_4);
{
LONGCARD B_5 = 1, B_6 = ZpmC89LG6_4;

if (B_5 <= B_6)
for (Z294 = B_5;; Z294 += 1) {
INC(ZiS8_15);
{
register ZiS8_8 *W_8 = &ZiS8_17->A[ZiS8_15];

W_8->Y0 = Z294;
W_8->Y1 = 0;
}
INC(ZiS8_18);
{
register ZiS8_9 *W_9 = &ZiS8_20->A[ZiS8_18];

if (Z294 <= ZpmC89LG6_5) {
W_9->Y0 = NIL;
W_9->Y4 = 0;
} else {
W_9->Y0 = (Zq0A4_57)ZiS8_48();
ZpmCQ_5(W_9->Y0, Zq0A4_91);
ZpmCQ_12(W_9->Y0);
ZpmCQ_14(W_9->Y0, Zq0A4_91);
W_9->Y4 = Z259;
}
W_9->Y3 = 0;
Z262 = 4;
ZarQdhNDD_0((ADDRESS *)&W_9->Y1, &Z262, (LONGINT)sizeof (ZiS8_5));
W_9->Y2 = Z262;
}
INC(ZiS8_12);
ZpmCQ_13(&ZiS8_43, (LONGCARD)ZiS8_12);
{
register ZiS8_7 *W_10 = &ZiS8_14->A[ZiS8_12];

W_10->Y0 = ZiS8_15;
W_10->Y1 = ZiS8_18;
W_10->Y10 = NIL;
W_10->Y2 = 0;
W_10->Y9 = 0;
W_10->Y6 = 0;
Z316((SHORTCARD)ZiS8_12);
{
LONGCARD B_7 = W_10->Y0, B_8 = W_10->Y0 + W_10->Y2 + W_10->Y3;

if (B_7 <= B_8)
for (Z275 = B_7;; Z275 += 1) {
{
register ZiS8_8 *W_11 = &ZiS8_17->A[Z275];

{
register Zq0A4_120 *W_12 = &Zq0A4_95->A[W_11->Y0]->U_1.V_18.Y17;

if (W_12->Y12 > 0) {
ZolB7FGBG_6(&Z263, (LONGINT)W_12->Y17->A[1], ZiS8_12);
}
}
}
if (Z275 >= B_8) break;
}
}
}
if (Z294 >= B_6) break;
}
}
ZiS8_29 = ZiS8_12;
ZiS8_30 = ZiS8_12;
ZiS8_23 = Zq0A4_90 + 1;
ZarQdhNDD_0((ADDRESS *)&ZiS8_24, &ZiS8_23, (LONGINT)sizeof (ZiS8_10));
ZiS8_26 = ZpmC89LG6_1;
ZarQdhNDD_0((ADDRESS *)&ZiS8_27, &ZiS8_26, (LONGINT)sizeof (ZiS8_11));
}

void ZiS8_45
 ARGS ((void))
{
LONGINT Z326, Z327;
SHORTCARD Z328, Z329;
ZiS8_5 Z274;
CARDINAL Z275;

while (!ZpmCQ_26(ZiS8_43)) {
Z274 = ZpmCQ_20(&ZiS8_43);
Z329 = ZiS8_14->A[Z274].Y7;
Z330(Z274);
while (!ZpmCQ_26(Z264)) {
Z328 = ZpmCQ_20(&Z264);
Z326 = ZiS8_15;
Z331((LONGCARD)Z328);
if (ZiS8_12 >= MAX_SHORTCARD) {
ZblNKKO_45((STRING)"too many states", 15L, (LONGCARD)ZblNKKO_14, ZmtLFGGBG_1, (LONGCARD)ZblNKKO_24, ADR (ZiS8_12));
}
INC(ZiS8_12);
if (ZiS8_12 == ZiS8_13) {
ZarQdhNDD_2((ADDRESS *)&ZiS8_14, &ZiS8_13, (LONGINT)sizeof (ZiS8_7));
Z332((ADDRESS)ZiS8_14, (SHORTCARD)ZiS8_12);
ZpmCQ_6(&ZiS8_43, (LONGCARD)ZiS8_13);
}
{
register ZiS8_7 *W_13 = &ZiS8_14->A[ZiS8_12];

W_13->Y0 = Z326 + 1;
W_13->Y2 = ZiS8_15 - Z326 - 1;
Z327 = Z283(ZiS8_22->A[Z328]);
ZiS8_14->A[Z274].Y10->A[Z328 - Z329] = Z327;
INC(ZiS8_31);
if (Z327 == ZiS8_12) {
ZpmCQ_13(&ZiS8_43, (LONGCARD)ZiS8_12);
W_13->Y1 = ZiS8_18 + 1;
W_13->Y10 = NIL;
W_13->Y9 = ZiS8_22->A[Z328];
ZiS8_22->A[Z328] = ZiS8_12;
W_13->Y6 = 0;
Z316((SHORTCARD)ZiS8_12);
INC1(ZiS8_18, W_13->Y2 + 1);
if (ZiS8_18 >= ZiS8_19) {
ZarQdhNDD_2((ADDRESS *)&ZiS8_20, &ZiS8_19, (LONGINT)sizeof (ZiS8_9));
Z332((ADDRESS)ZiS8_20, (SHORTCARD)ZiS8_12);
}
{
LONGCARD B_9 = W_13->Y0, B_10 = W_13->Y0 + W_13->Y2;

if (B_9 <= B_10)
for (Z275 = B_9;; Z275 += 1) {
{
register ZiS8_9 *W_14 = &ZiS8_20->A[Z275 - W_13->Y0 + W_13->Y1];

W_14->Y0 = NIL;
W_14->Y3 = 0;
Z262 = 4;
ZarQdhNDD_0((ADDRESS *)&W_14->Y1, &Z262, (LONGINT)sizeof (ZiS8_5));
W_14->Y2 = Z262;
W_14->Y4 = 0;
}
if (Z275 >= B_10) break;
}
}
} else {
ZiS8_15 = Z326;
DEC(ZiS8_12);
}
}
}
}
ZiS8_29 = ZiS8_12;
ZiS8_30 = ZiS8_12;
}

static void Z330
# ifdef HAVE_ARGS
(ZiS8_5 Z274)
# else
(Z274)
ZiS8_5 Z274;
# endif
{
LONGINT Z334;
CARDINAL Z275;
SHORTCARD Z328;
SHORTINT Z335, Z336;

{
register ZiS8_7 *W_15 = &ZiS8_14->A[Z274];

ZiS8_25 = 0;
Z334 = W_15->Y2 + W_15->Y3 + 1;
while (ZiS8_26 < Z334) {
ZarQdhNDD_2((ADDRESS *)&ZiS8_27, &ZiS8_26, (LONGINT)sizeof (ZiS8_11));
Z332((ADDRESS)ZiS8_27, Z274);
}
ZpmCQ_32(&Z264);
{
LONGCARD B_11 = W_15->Y0, B_12 = W_15->Y0 + W_15->Y2 + W_15->Y3;

if (B_11 <= B_12)
for (Z275 = B_11;; Z275 += 1) {
{
register ZiS8_8 *W_16 = &ZiS8_17->A[Z275];

{
register Zq0A4_120 *W_17 = &Zq0A4_95->A[W_16->Y0]->U_1.V_18.Y17;

if (W_16->Y1 < W_17->Y12) {
Z328 = W_17->Y17->A[W_16->Y1 + 1];
if (Z328 > 0) {
{
register ZiS8_11 *W_18 = &ZiS8_27->A[ZiS8_25];

{
register ZiS8_10 *W_19 = &ZiS8_24->A[Z328];

W_18->Y0 = Z275;
if (ZpmCQ_25((LONGCARD)Z328, &Z264)) {
if (W_16->Y2 < W_19->Y2) {
Z336 = W_19->Y0;
Z335 = W_19->Y0;
for (;;) {
{
register ZiS8_11 *W_20 = &ZiS8_27->A[Z335];

if (ZiS8_17->A[W_20->Y0].Y2 > W_16->Y2) {
goto EXIT_4;
}
Z336 = Z335;
Z335 = W_20->Y1;
}
} EXIT_4:;
if (Z335 == W_19->Y0) {
W_18->Y1 = W_19->Y0;
W_19->Y0 = ZiS8_25;
} else {
W_18->Y1 = Z335;
ZiS8_27->A[Z336].Y1 = ZiS8_25;
}
} else {
ZiS8_27->A[W_19->Y1].Y1 = ZiS8_25;
W_19->Y1 = ZiS8_25;
W_18->Y1 = -1;
W_19->Y2 = W_16->Y2;
}
} else {
ZpmCQ_13(&Z264, (LONGCARD)Z328);
W_19->Y0 = ZiS8_25;
W_19->Y1 = ZiS8_25;
W_18->Y1 = -1;
W_19->Y2 = W_16->Y2;
}
INC(ZiS8_25);
}
}
} else {
ZiS8_34 = Zq0A4_186(ZiS8_34, Z274, W_17->Y14);
}
}
}
}
if (Z275 >= B_12) break;
}
}
}
}

static void Z331
# ifdef HAVE_ARGS
(CARDINAL Z328)
# else
(Z328)
CARDINAL Z328;
# endif
{
SHORTINT Z275;

Z275 = ZiS8_24->A[Z328].Y0;
while (Z275 >= 0) {
{
register ZiS8_11 *W_21 = &ZiS8_27->A[Z275];

{
register ZiS8_8 *W_22 = &ZiS8_17->A[W_21->Y0];

{
register Zq0A4_120 *W_23 = &Zq0A4_95->A[W_22->Y0]->U_1.V_18.Y17;

if (W_22->Y1 < W_23->Y12 && W_23->Y17->A[W_22->Y1 + 1] == Z328) {
INC(ZiS8_15);
if (ZiS8_15 == ZiS8_16) {
ZarQdhNDD_2((ADDRESS *)&ZiS8_17, &ZiS8_16, (LONGINT)sizeof (ZiS8_8));
Z332((ADDRESS)ZiS8_17, 0);
}
{
register ZiS8_8 *W_24 = &ZiS8_17->A[ZiS8_15];

W_24->Y0 = ZiS8_17->A[W_21->Y0].Y0;
W_24->Y1 = ZiS8_17->A[W_21->Y0].Y1 + 1;
}
}
}
}
Z275 = W_21->Y1;
}
}
}

static void Z351
# ifdef HAVE_ARGS
(struct S_1_Closure *link, SHORTCARD Z328)
# else
(link, Z328)
struct S_1_Closure *link;
SHORTCARD Z328;
# endif
{
Zq0A4_35 Z352;

ZpmCQ_13(&Z265, (LONGCARD)Z328);
Z352 = Zq0A4_93->A[Z328]->U_1.V_9.Y8.Y4;
while (Zq0A4_155(Z352, Zq0A4_18)) {
INC(ZiS8_15);
if (ZiS8_15 == ZiS8_16) {
ZarQdhNDD_2((ADDRESS *)&ZiS8_17, &ZiS8_16, (LONGINT)sizeof (ZiS8_8));
Z332((ADDRESS)ZiS8_17, *link->Z274);
}
{
register ZiS8_8 *W_25 = &ZiS8_17->A[ZiS8_15];

{
register Zq0A4_120 *W_26 = &Z352->U_1.V_18.Y17;

W_25->Y0 = W_26->Y14;
W_25->Y1 = 0;
W_25->Y2 = *link->Z347;
if (W_25->Y1 < W_26->Y12) {
Z328 = W_26->Y17->A[W_25->Y1 + 1];
INC(*link->Z348);
*link->Z345 = ZdaDDAD7_3((LONGINT)(*link->Z345), (LONGINT)Z328);
*link->Z346 = ZdaDDAD7_4((LONGINT)(*link->Z346), (LONGINT)Z328);
if (Z328 > Zq0A4_91 && !ZpmCQ_25((LONGCARD)Z328, &Z265)) {
Z351(link, Z328);
}
} else {
INC(*link->Z349);
}
INC(*link->Z224);
Z352 = W_26->Y1;
}
}
}
}

static void Z316
# ifdef HAVE_ARGS
(ZiS8_5 Z274)
# else
(Z274)
ZiS8_5 Z274;
# endif
{
CARDINAL Z275, Z295;
SHORTCARD Z224, Z328, Z345, Z346, Z347;
SHORTCARD Z348, Z349;
LONGINT Z350;
struct S_1_Closure frame;

frame.Z274 = &Z274;
frame.Z224 = &Z224;
frame.Z345 = &Z345;
frame.Z346 = &Z346;
frame.Z347 = &Z347;
frame.Z348 = &Z348;
frame.Z349 = &Z349;
Z224 = 0;
Z345 = Zq0A4_90;
Z346 = 0;
Z348 = 0;
Z349 = 0;
{
register ZiS8_7 *W_27 = &ZiS8_14->A[Z274];

ZpmCQ_32(&Z265);
Z347 = 0;
{
LONGCARD B_13 = W_27->Y0, B_14 = W_27->Y0 + W_27->Y2;

if (B_13 <= B_14)
for (Z275 = B_13;; Z275 += 1) {
{
register ZiS8_8 *W_28 = &ZiS8_17->A[Z275];

{
register Zq0A4_120 *W_29 = &Zq0A4_95->A[W_28->Y0]->U_1.V_18.Y17;

INC(Z347);
W_28->Y2 = Z347;
if (W_28->Y1 < W_29->Y12) {
Z328 = W_29->Y17->A[W_28->Y1 + 1];
if (Z328 > Zq0A4_91 && !ZpmCQ_25((LONGCARD)Z328, &Z265)) {
Z351(&frame, Z328);
}
INC(Z348);
Z345 = ZdaDDAD7_3((LONGINT)Z345, (LONGINT)Z328);
Z346 = ZdaDDAD7_4((LONGINT)Z346, (LONGINT)Z328);
} else {
INC(Z349);
}
}
}
if (Z275 >= B_14) break;
}
}
W_27->Y3 = Z224;
if (Z348 == 0) {
W_27->Y4 = ZiS8_1;
if (W_27->Y2 == 0 && !ZpmCQ_25(ORD('r'), &Zq0A4_61)) {
W_27->Y7 = Zq0A4_88;
W_27->Y8 = 0;
} else {
W_27->Y7 = 0;
W_27->Y8 = Zq0A4_88;
}
} else if (Z349 == 0) {
W_27->Y4 = ZiS8_2;
W_27->Y7 = Z345;
W_27->Y8 = Z346;
} else {
W_27->Y4 = ZiS8_3;
W_27->Y7 = 0;
W_27->Y8 = ZdaDDAD7_4((LONGINT)Z346, (LONGINT)Zq0A4_88);
}
if (W_27->Y8 >= W_27->Y7) {
Z350 = W_27->Y8 - W_27->Y7 + 1;
ZarQdhNDD_0((ADDRESS *)&W_27->Y10, &Z350, (LONGINT)sizeof (ZiS8_5));
Z332((ADDRESS)W_27->Y10, Z274);
{
LONGCARD B_15 = 0, B_16 = W_27->Y8 - W_27->Y7;

if (B_15 <= B_16)
for (Z295 = B_15;; Z295 += 1) {
W_27->Y10->A[Z295] = 0;
if (Z295 >= B_16) break;
}
}
INC1(ZiS8_32, Z350);
}
}
}

void ZiS8_47
 ARGS ((void))
{
LONGINT Z275;

{
LONGINT B_17 = 1, B_18 = ZiS8_18;

if (B_17 <= B_18)
for (Z275 = B_17;; Z275 += 1) {
ZiS8_20->A[Z275].Y3 = 0;
if (Z275 >= B_18) break;
}
}
}

void ZiS8_46
 ARGS ((void))
{
LONGINT Z274, Z327, Z361;
CARDINAL Z275, Z362, Z295;

{
LONGINT B_19 = 1, B_20 = ZiS8_12;

if (B_19 <= B_20)
for (Z274 = B_19;; Z274 += 1) {
{
register ZiS8_7 *W_30 = &ZiS8_14->A[Z274];

if (W_30->Y4 != ZiS8_0) {
{
LONGCARD B_21 = W_30->Y0, B_22 = W_30->Y0 + W_30->Y2 + W_30->Y3;

if (B_21 <= B_22)
for (Z275 = B_21;; Z275 += 1) {
{
register ZiS8_8 *W_31 = &ZiS8_17->A[Z275];

if (W_31->Y1 == 0) {
{
register Zq0A4_120 *W_32 = &Zq0A4_95->A[W_31->Y0]->U_1.V_18.Y17;

Z327 = Z274;
{
LONGCARD B_23 = 1, B_24 = W_32->Y12;

if (B_23 <= B_24)
for (Z295 = B_23;; Z295 += 1) {
{
register ZiS8_7 *W_33 = &ZiS8_14->A[Z327];

Z327 = W_33->Y10->A[W_32->Y17->A[Z295] - W_33->Y7];
}
if (Z327 > 0) {
{
register ZiS8_7 *W_34 = &ZiS8_14->A[Z327];

Z362 = W_34->Y0;
Z361 = W_34->Y1;
for (;;) {
{
register ZiS8_8 *W_35 = &ZiS8_17->A[Z362];

if (ZiS8_17->A[Z275].Y0 == W_35->Y0 && W_35->Y1 == Z295) {
{
register ZiS8_9 *W_36 = &ZiS8_20->A[Z361];

INC(W_36->Y3);
if (W_36->Y3 > W_36->Y2) {
Z262 = W_36->Y2;
ZarQdhNDD_2((ADDRESS *)&W_36->Y1, &Z262, (LONGINT)sizeof (ZiS8_5));
Z332((ADDRESS)W_36->Y1, (SHORTCARD)Z274);
W_36->Y2 = Z262;
}
W_36->Y1->A[W_36->Y3 - 1] = Z274;
goto EXIT_5;
}
}
}
INC(Z362);
INC(Z361);
} EXIT_5:;
INC(Z261);
}
}
if (Z295 >= B_24) break;
}
}
}
}
}
if (Z275 >= B_22) break;
}
}
}
}
if (Z274 >= B_20) break;
}
}
{
LONGINT B_25 = 1, B_26 = ZiS8_18;

if (B_25 <= B_26)
for (Z361 = B_25;; Z361 += 1) {
{
register ZiS8_9 *W_37 = &ZiS8_20->A[Z361];

if (W_37->Y1 != NIL) {
Z262 = W_37->Y2;
ZarQdhNDD_1((ADDRESS *)&W_37->Y1, &Z262, (LONGINT)W_37->Y3, (LONGINT)sizeof (ZiS8_5));
W_37->Y2 = Z262;
}
}
if (Z361 >= B_26) break;
}
}
}

static void Z292
# ifdef HAVE_ARGS
(CARDINAL Z274, CARDINAL Z275, ZpmCQ_4 *Z364)
# else
(Z274, Z275, Z364)
CARDINAL Z274;
CARDINAL Z275;
ZpmCQ_4 *Z364;
# endif
{
ZiS8_5 Z365;
LONGINT Z327, Z334;
CARDINAL Z362, Z366;
SHORTCARD Y3_109, Z367, Z368, Z369;

INC(Z272);
if (Z272 >= (CARDINAL)Z271) {
Z334 = Z271;
ZarQdhNDD_2((ADDRESS *)&Z268, &Z334, (LONGINT)sizeof (ZiS8_5));
Z332((ADDRESS)Z268, (SHORTCARD)Z334);
ZarQdhNDD_2((ADDRESS *)&Z270, &Z271, (LONGINT)sizeof (CARDINAL));
Z332((ADDRESS)Z270, (SHORTCARD)Z271);
}
Z270->A[Z272] = Z275;
Z268->A[Z272] = Z274;
Z368 = Z272;
INC(Z260);
ZpmCQ_5(Z364, Zq0A4_91);
if (ZpmCQ_16(Z364) == 0) {
ZblNKKO_45((STRING)"out of memory for state", 23L, (LONGCARD)ZblNKKO_14, ZmtLFGGBG_1, (LONGCARD)ZblNKKO_24, ADR (Z274));
}
{
register ZiS8_7 *W_38 = &ZiS8_14->A[Z274];

{
register ZiS8_8 *W_39 = &ZiS8_17->A[Z275];

{
register Zq0A4_120 *W_40 = &Zq0A4_95->A[W_39->Y0]->U_1.V_18.Y17;

Y3_109 = W_40->Y16->U_1.V_9.Y8.Y8 - Zq0A4_89;
{
register ZiS8_9 *W_41 = &ZiS8_20->A[Z275 - W_38->Y0 + W_38->Y1];

W_41->Y4 = Z368;
{
SHORTCARD B_27 = 1, B_28 = W_41->Y3;

if (B_27 <= B_28)
for (Z365 = B_27;; Z365 += 1) {
Z327 = W_41->Y1->A[Z365 - 1];
{
register ZiS8_7 *W_42 = &ZiS8_14->A[Z327];

{
LONGCARD B_29 = W_42->Y0, B_30 = W_42->Y0 + W_42->Y2;

if (B_29 <= B_30)
for (Z362 = B_29;; Z362 += 1) {
{
register ZiS8_8 *W_43 = &ZiS8_17->A[Z362];

{
register Zq0A4_120 *W_44 = &Zq0A4_95->A[W_43->Y0]->U_1.V_18.Y17;

if (W_43->Y1 < W_44->Y12) {
Z367 = W_44->Y17->A[W_43->Y1 + 1];
if (Z367 > Zq0A4_91 && ZolB7FGBG_9((LONGINT)(Z367 - Zq0A4_89), (LONGINT)Y3_109, Zq0A4_96)) {
{
register Zq0A4_111 *W_45 = &Zq0A4_93->A[Z367]->U_1.V_9.Y8;

if (ZpmCQ_25(Zq0A4_91, W_45->Y11->A[Y3_109 - W_45->Y9])) {
ZpmCQ_8(Z364, *W_45->Y11->A[Y3_109 - W_45->Y9]);
ZpmCQ_14(Z364, Zq0A4_91);
ZpmCQ_32(&Z266);
ZiS8_57(W_43->Y0, (SHORTCARD)(W_43->Y1 + 2), &Z266);
if (ZpmCQ_25(Zq0A4_91, &Z266)) {
ZpmCQ_14(&Z266, Zq0A4_91);
ZpmCQ_8(Z364, Z266);
{
register ZiS8_9 *W_46 = &ZiS8_20->A[Z362 - W_42->Y0 + W_42->Y1];

if (W_46->Y4 == 0) {
W_46->Y0 = (Zq0A4_57)ZiS8_48();
Z292((LONGCARD)Z327, Z362, W_46->Y0);
}
Z369 = W_46->Y4;
ZpmCQ_8(Z364, *W_46->Y0);
}
W_41->Y4 = ZdaDDAD7_3((LONGINT)W_41->Y4, (LONGINT)Z369);
} else {
ZpmCQ_8(Z364, Z266);
}
} else {
ZpmCQ_8(Z364, *W_45->Y11->A[Y3_109 - W_45->Y9]);
}
}
}
}
}
}
if (Z362 >= B_30) break;
}
}
}
if (Z365 >= B_28) break;
}
}
if (W_41->Y4 == Z368) {
for (;;) {
Z362 = Z270->A[Z272];
Z327 = Z268->A[Z272];
DEC(Z272);
{
register ZiS8_7 *W_47 = &ZiS8_14->A[Z327];

Z366 = Z362 - W_47->Y0 + W_47->Y1;
ZiS8_20->A[Z366].Y4 = Z259;
}
if (Z362 == Z275) {
goto EXIT_6;
}
ZpmCQ_30(ZiS8_20->A[Z366].Y0, *W_41->Y0);
} EXIT_6:;
}
}
}
}
}
}

static void Z374
# ifdef HAVE_ARGS
(ZiS8_5 Z274, CARDINAL Z275, ZpmCQ_4 *Z364)
# else
(Z274, Z275, Z364)
ZiS8_5 Z274;
CARDINAL Z275;
ZpmCQ_4 *Z364;
# endif
{
CARDINAL Z362;
SHORTCARD Y2_109, Z367;

{
register ZiS8_7 *W_48 = &ZiS8_14->A[Z274];

{
register ZiS8_8 *W_49 = &ZiS8_17->A[Z275];

{
register Zq0A4_120 *W_50 = &Zq0A4_95->A[W_49->Y0]->U_1.V_18.Y17;

Y2_109 = W_50->Y16->U_1.V_9.Y8.Y8 - Zq0A4_89;
{
LONGCARD B_31 = W_48->Y0, B_32 = W_48->Y0 + W_48->Y2;

if (B_31 <= B_32)
for (Z362 = B_31;; Z362 += 1) {
{
register ZiS8_8 *W_51 = &ZiS8_17->A[Z362];

{
register Zq0A4_120 *W_52 = &Zq0A4_95->A[W_51->Y0]->U_1.V_18.Y17;

if (W_51->Y1 < W_52->Y12) {
Z367 = W_52->Y17->A[W_51->Y1 + 1];
if (Z367 > Zq0A4_91 && ZolB7FGBG_9((LONGINT)(Z367 - Zq0A4_89), (LONGINT)Y2_109, Zq0A4_96)) {
{
register Zq0A4_111 *W_53 = &Zq0A4_93->A[Z367]->U_1.V_9.Y8;

if (ZpmCQ_25(Zq0A4_91, W_53->Y11->A[Y2_109 - W_53->Y9])) {
ZpmCQ_8(Z364, *W_53->Y11->A[Y2_109 - W_53->Y9]);
ZpmCQ_14(Z364, Zq0A4_91);
ZpmCQ_32(&Z266);
ZiS8_57(W_51->Y0, (SHORTCARD)(W_51->Y1 + 2), &Z266);
if (ZpmCQ_25(Zq0A4_91, &Z266)) {
ZpmCQ_14(&Z266, Zq0A4_91);
ZpmCQ_8(Z364, Z266);
{
register ZiS8_9 *W_54 = &ZiS8_20->A[Z362 - W_48->Y0 + W_48->Y1];

if (W_54->Y0 == NIL) {
W_54->Y0 = (Zq0A4_57)ZiS8_48();
Z292((LONGCARD)Z274, Z362, W_54->Y0);
}
ZpmCQ_8(Z364, *W_54->Y0);
}
} else {
ZpmCQ_8(Z364, Z266);
}
} else {
ZpmCQ_8(Z364, *W_53->Y11->A[Y2_109 - W_53->Y9]);
}
}
}
}
}
}
if (Z362 >= B_32) break;
}
}
}
}
}
}

void ZiS8_49
# ifdef HAVE_ARGS
(ZiS8_5 Z274, CARDINAL Z275, ZpmCQ_4 *Z364)
# else
(Z274, Z275, Z364)
ZiS8_5 Z274;
CARDINAL Z275;
ZpmCQ_4 *Z364;
# endif
{
{
register ZiS8_8 *W_55 = &ZiS8_17->A[Z275];

if (W_55->Y1 == 0) {
ZpmCQ_32(Z364);
Z374(Z274, Z275, Z364);
} else {
{
register ZiS8_7 *W_56 = &ZiS8_14->A[Z274];

{
register ZiS8_9 *W_57 = &ZiS8_20->A[Z275 - W_56->Y0 + W_56->Y1];

if (W_57->Y0 == NIL) {
W_57->Y0 = (Zq0A4_57)ZiS8_48();
Z292((LONGCARD)Z274, Z275, W_57->Y0);
}
ZpmCQ_30(Z364, *W_57->Y0);
}
}
}
}
}

void ZiS8_57
# ifdef HAVE_ARGS
(SHORTCARD Z229, SHORTCARD Z282, ZpmCQ_4 *Z266)
# else
(Z229, Z282, Z266)
SHORTCARD Z229, Z282;
ZpmCQ_4 *Z266;
# endif
{
SHORTCARD Z376, Z328;

{
register Zq0A4_120 *W_58 = &Zq0A4_95->A[Z229]->U_1.V_18.Y17;

{
SHORTCARD B_33 = Z282, B_34 = W_58->Y12;

if (B_33 <= B_34)
for (Z376 = B_33;; Z376 += 1) {
Z328 = W_58->Y17->A[Z376];
if (Z328 < Zq0A4_91) {
ZpmCQ_13(Z266, (LONGCARD)Z328);
return;
} else {
ZpmCQ_8(Z266, Zq0A4_93->A[Z328]->U_1.V_9.Y8.Y10);
if (!ZpmCQ_25(Zq0A4_91, Z266)) {
return;
}
ZpmCQ_14(Z266, Zq0A4_91);
}
if (Z376 >= B_34) break;
}
}
ZpmCQ_13(Z266, Zq0A4_91);
}
}

void ZiS8_51
 ARGS ((void))
{
LONGINT Z274;
CARDINAL Z275;
ZpmCQ_4 Z379, Z380;

ZolB7FGBG_5(&Z263);
ZpmCQ_5(&Z267, (LONGCARD)ZiS8_15);
ZpmCQ_5(&Z379, Zq0A4_91);
ZpmCQ_5(&Z380, Zq0A4_91);
ZpmCQ_5(&Z377, Zq0A4_91);
ZolB7FGBG_4(&Z263, (LONGINT)Zq0A4_90, ZiS8_12);
{
LONGINT B_35 = 1, B_36 = ZiS8_12;

if (B_35 <= B_36)
for (Z274 = B_35;; Z274 += 1) {
{
register ZiS8_7 *W_59 = &ZiS8_14->A[Z274];

if (W_59->Y4 == ZiS8_3 || W_59->Y4 == ZiS8_1) {
{
register ZiS8_8 *W_60 = &ZiS8_17->A[W_59->Y0];

if (W_59->Y2 == 0 && W_60->Y1 == Zq0A4_95->A[W_60->Y0]->U_1.V_18.Y17.Y12) {
} else {
ZpmCQ_32(&Z377);
ZpmCQ_32(&Z380);
{
LONGCARD B_37 = W_59->Y0, B_38 = W_59->Y0 + W_59->Y2 + W_59->Y3;

if (B_37 <= B_38)
for (Z275 = B_37;; Z275 += 1) {
{
register ZiS8_8 *W_61 = &ZiS8_17->A[Z275];

{
register Zq0A4_120 *W_62 = &Zq0A4_95->A[W_61->Y0]->U_1.V_18.Y17;

if (W_61->Y1 == W_62->Y12) {
ZiS8_49((SHORTCARD)Z274, Z275, &Z379);
ZpmCQ_30(&Z266, Z380);
ZpmCQ_10(&Z266, Z379);
ZpmCQ_8(&Z377, Z266);
ZpmCQ_8(&Z380, Z379);
}
}
}
if (Z275 >= B_38) break;
}
}
if (!ZpmCQ_26(Z377)) {
{
LONGCARD B_39 = W_59->Y0, B_40 = W_59->Y0 + W_59->Y2;

if (B_39 <= B_40)
for (Z275 = B_39;; Z275 += 1) {
{
register ZiS8_8 *W_63 = &ZiS8_17->A[Z275];

{
register Zq0A4_120 *W_64 = &Zq0A4_95->A[W_63->Y0]->U_1.V_18.Y17;

if (W_63->Y1 == W_64->Y12) {
ZiS8_49((SHORTCARD)Z274, Z275, &Z379);
ZpmCQ_10(&Z379, Z377);
if (!ZpmCQ_26(Z379)) {
ZpmCQ_32(&Z267);
Z381((SHORTCARD)Z274, Z275);
}
}
}
}
if (Z275 >= B_40) break;
}
}
}
}
}
}
}
if (Z274 >= B_36) break;
}
}
if (ZpmCQ_25(ORD('L'), &Zq0A4_61)) {
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)"LaneTrace ", 10L);
ZolB7FGBG_42((ZDz6VQCC_4)ZfM_1, Z263);
ZfM_33((ZDz6VQCC_4)ZfM_1);
}
ZpmCQ_7(&Z267);
ZpmCQ_7(&Z379);
ZpmCQ_7(&Z380);
ZpmCQ_7(&Z377);
}

static void Z381
# ifdef HAVE_ARGS
(ZiS8_5 Z274, CARDINAL Z275)
# else
(Z274, Z275)
ZiS8_5 Z274;
CARDINAL Z275;
# endif
{
ZiS8_5 Z365;
LONGINT Z327;
CARDINAL Z362, Z295;
SHORTCARD Y1_109, Z367;
ZpmCQ_4 Z364;

if (ZpmCQ_25(Z275, &Z267)) {
return;
}
ZpmCQ_13(&Z267, Z275);
ZpmCQ_5(&Z364, Zq0A4_91);
{
register ZiS8_7 *W_65 = &ZiS8_14->A[Z274];

{
register ZiS8_8 *W_66 = &ZiS8_17->A[Z275];

{
register Zq0A4_120 *W_67 = &Zq0A4_95->A[W_66->Y0]->U_1.V_18.Y17;

Y1_109 = W_67->Y16->U_1.V_9.Y8.Y8 - Zq0A4_89;
{
register ZiS8_9 *W_68 = &ZiS8_20->A[Z275 - W_65->Y0 + W_65->Y1];

{
SHORTCARD B_41 = 1, B_42 = W_68->Y3;

if (B_41 <= B_42)
for (Z365 = B_41;; Z365 += 1) {
Z327 = W_68->Y1->A[Z365 - 1];
{
register ZiS8_7 *W_69 = &ZiS8_14->A[Z327];

{
LONGCARD B_43 = W_69->Y0, B_44 = W_69->Y0 + W_69->Y2;

if (B_43 <= B_44)
for (Z362 = B_43;; Z362 += 1) {
{
register ZiS8_8 *W_70 = &ZiS8_17->A[Z362];

{
register Zq0A4_120 *W_71 = &Zq0A4_95->A[W_70->Y0]->U_1.V_18.Y17;

if (W_70->Y1 < W_71->Y12) {
Z367 = W_71->Y17->A[W_70->Y1 + 1];
if (Z367 > Zq0A4_91 && ZolB7FGBG_9((LONGINT)(Z367 - Zq0A4_89), (LONGINT)Y1_109, Zq0A4_96)) {
ZpmCQ_32(&Z364);
{
register Zq0A4_111 *W_72 = &Zq0A4_93->A[Z367]->U_1.V_9.Y8;

if (ZpmCQ_25(Zq0A4_91, W_72->Y11->A[Y1_109 - W_72->Y9])) {
ZpmCQ_8(&Z364, *W_72->Y11->A[Y1_109 - W_72->Y9]);
ZpmCQ_14(&Z364, Zq0A4_91);
ZpmCQ_32(&Z266);
ZiS8_57(W_70->Y0, (SHORTCARD)(W_70->Y1 + 2), &Z266);
if (ZpmCQ_25(Zq0A4_91, &Z266)) {
ZpmCQ_14(&Z266, Zq0A4_91);
ZpmCQ_8(&Z364, Z266);
Z381((SHORTCARD)Z327, Z362);
} else {
ZpmCQ_8(&Z364, Z266);
}
} else {
ZpmCQ_8(&Z364, *W_72->Y11->A[Y1_109 - W_72->Y9]);
}
}
ZpmCQ_10(&Z364, Z377);
if (!ZpmCQ_26(Z364)) {
ZpmCQ_13(&ZiS8_43, (LONGCARD)Z327);
}
}
}
}
}
if (Z362 >= B_44) break;
}
}
if (ZpmCQ_25((LONGCARD)Z327, &ZiS8_43)) {
{
LONGCARD B_45 = 1, B_46 = W_66->Y1;

if (B_45 <= B_46)
for (Z295 = B_45;; Z295 += 1) {
ZolB7FGBG_6(&Z263, (LONGINT)W_67->Y17->A[Z295], Z327);
{
register ZiS8_7 *W_73 = &ZiS8_14->A[Z327];

Z327 = W_73->Y10->A[W_67->Y17->A[Z295] - W_73->Y7];
}
if (Z295 >= B_46) break;
}
}
}
}
if (Z365 >= B_42) break;
}
}
}
}
}
}
ZpmCQ_7(&Z364);
}

void ZiS8_52
 ARGS ((void))
{
LONGINT Z326, Z327;
ZiS8_5 Z274;
CARDINAL Z275, Z362;
SHORTCARD Z328, Z329;
ZpmCQ_4 Z383;
BOOLEAN Z384;

Z384 = ZpmCQ_25(ORD('|'), &Zq0A4_61) || !ZpmCQ_25(ORD('1'), &Zq0A4_61);
ZpmCQ_5(&Z383, ZiS8_29);
while (!ZpmCQ_26(ZiS8_43)) {
Z274 = ZpmCQ_20(&ZiS8_43);
{
register ZiS8_7 *W_74 = &ZiS8_14->A[Z274];

if (Z274 <= ZiS8_29) {
ZpmCQ_13(&Z383, (LONGCARD)Z274);
{
LONGCARD B_47 = W_74->Y0, B_48 = W_74->Y0 + W_74->Y2;

if (B_47 <= B_48)
for (Z275 = B_47;; Z275 += 1) {
{
register ZiS8_9 *W_75 = &ZiS8_20->A[Z275 - W_74->Y0 + W_74->Y1];

if (W_75->Y0 == NIL) {
W_75->Y0 = (Zq0A4_57)ZiS8_48();
Z292((LONGCARD)Z274, Z275, W_75->Y0);
}
}
if (Z275 >= B_48) break;
}
}
}
Z329 = W_74->Y7;
}
Z330(Z274);
while (!ZpmCQ_26(Z264)) {
Z328 = ZpmCQ_20(&Z264);
if (Z274 > ZiS8_29 || ZolB7FGBG_9((LONGINT)Z328, (LONGINT)Z274, Z263)) {
Z326 = ZiS8_15;
Z331((LONGCARD)Z328);
if (ZiS8_12 >= MAX_SHORTCARD) {
ZblNKKO_45((STRING)"too many states", 15L, (LONGCARD)ZblNKKO_14, ZmtLFGGBG_1, (LONGCARD)ZblNKKO_24, ADR (ZiS8_12));
}
INC(ZiS8_12);
if (ZiS8_12 == ZiS8_13) {
ZarQdhNDD_2((ADDRESS *)&ZiS8_14, &ZiS8_13, (LONGINT)sizeof (ZiS8_7));
Z332((ADDRESS)ZiS8_14, (SHORTCARD)ZiS8_12);
ZpmCQ_6(&ZiS8_43, (LONGCARD)ZiS8_13);
}
{
register ZiS8_7 *W_76 = &ZiS8_14->A[ZiS8_12];

W_76->Y0 = Z326 + 1;
W_76->Y2 = ZiS8_15 - Z326 - 1;
W_76->Y1 = ZiS8_18 + 1;
W_76->Y10 = NIL;
W_76->Y6 = 0;
Z316((SHORTCARD)ZiS8_12);
INC1(ZiS8_18, W_76->Y2 + 1);
if (ZiS8_18 >= ZiS8_19) {
ZarQdhNDD_2((ADDRESS *)&ZiS8_20, &ZiS8_19, (LONGINT)sizeof (ZiS8_9));
Z332((ADDRESS)ZiS8_20, (SHORTCARD)ZiS8_12);
}
{
LONGCARD B_49 = W_76->Y0, B_50 = W_76->Y0 + W_76->Y2;

if (B_49 <= B_50)
for (Z275 = B_49;; Z275 += 1) {
Z362 = ZiS8_14->A[Z274].Y0;
{
register ZiS8_8 *W_77 = &ZiS8_17->A[Z275];

for (;;) {
if (ZiS8_17->A[Z362].Y0 == W_77->Y0 && ZiS8_17->A[Z362].Y1 == W_77->Y1 - 1) {
goto EXIT_7;
}
INC(Z362);
} EXIT_7:;
}
{
register ZiS8_9 *W_78 = &ZiS8_20->A[Z275 - W_76->Y0 + W_76->Y1];

if (Z384) {
W_78->Y3 = 0;
Z262 = 4;
ZarQdhNDD_0((ADDRESS *)&W_78->Y1, &Z262, (LONGINT)sizeof (ZiS8_5));
Z332((ADDRESS)W_78->Y1, (SHORTCARD)ZiS8_12);
W_78->Y2 = Z262;
} else {
W_78->Y1 = NIL;
}
W_78->Y0 = (Zq0A4_57)ZiS8_48();
ZpmCQ_5(W_78->Y0, Zq0A4_91);
if (ZpmCQ_16(W_78->Y0) == 0) {
ZblNKKO_45((STRING)"out of memory for state", 23L, (LONGCARD)ZblNKKO_14, ZmtLFGGBG_1, (LONGCARD)ZblNKKO_24, ADR (ZiS8_12));
}
INC(Z260);
ZiS8_49(Z274, Z362, W_78->Y0);
}
if (Z275 >= B_50) break;
}
}
Z327 = Z285(ZiS8_22->A[Z328]);
{
register ZiS8_7 *W_79 = &ZiS8_14->A[Z274];

if (W_79->Y10->A[Z328 - Z329] == 0) {
INC(ZiS8_31);
}
W_79->Y10->A[Z328 - Z329] = Z327;
}
if (Z327 == ZiS8_12) {
ZpmCQ_13(&ZiS8_43, (LONGCARD)Z327);
W_76->Y9 = ZiS8_22->A[Z328];
ZiS8_22->A[Z328] = ZiS8_12;
} else {
if ((CARDINAL)Z327 <= ZiS8_29 && !ZpmCQ_25((LONGCARD)Z327, &Z383)) {
ZpmCQ_13(&ZiS8_43, (LONGCARD)Z327);
}
if (W_76->Y10 != NIL) {
Z385((SHORTCARD)ZiS8_12);
}
{
LONGCARD B_51 = W_76->Y0, B_52 = W_76->Y0 + W_76->Y2;

if (B_51 <= B_52)
for (Z275 = B_51;; Z275 += 1) {
Z386((SHORTCARD)ZiS8_12, Z275);
if (Z275 >= B_52) break;
}
}
ZiS8_15 = Z326;
DEC1(ZiS8_18, W_76->Y2 + 1);
DEC(ZiS8_12);
}
}
}
}
}
ZiS8_30 = ZiS8_12;
ZpmCQ_7(&Z383);
ZolB7FGBG_5(&Z263);
ZarQdhNDD_1((ADDRESS *)&ZiS8_14, &ZiS8_13, ZiS8_12 + 1, (LONGINT)sizeof (ZiS8_7));
ZarQdhNDD_1((ADDRESS *)&ZiS8_17, &ZiS8_16, ZiS8_15 + 1, (LONGINT)sizeof (ZiS8_8));
ZarQdhNDD_1((ADDRESS *)&ZiS8_20, &ZiS8_19, ZiS8_18 + 1, (LONGINT)sizeof (ZiS8_9));
ZarQdhNDD_3((ADDRESS *)&ZiS8_22, &ZiS8_21, (LONGINT)sizeof (LONGINT));
ZpmCQ_7(&ZiS8_43);
ZpmCQ_7(&Z264);
ZpmCQ_7(&Z265);
}

void ZiS8_53
 ARGS ((void))
{
ZpmCQ_4 Z304, Z388;
LONGINT Z274, Z327;
CARDINAL Z275, Z295;

ZpmCQ_5(&Z304, (LONGCARD)ZiS8_12);
ZpmCQ_5(&Z388, (LONGCARD)ZiS8_12);
{
LONGCARD B_53 = 1, B_54 = ZpmC89LG6_4;

if (B_53 <= B_54)
for (Z295 = B_53;; Z295 += 1) {
ZpmCQ_13(&Z304, Z295);
if (Z295 >= B_54) break;
}
}
while (!ZpmCQ_26(Z304)) {
Z274 = ZpmCQ_20(&Z304);
{
register ZiS8_7 *W_80 = &ZiS8_14->A[Z274];

ZpmCQ_13(&Z388, (LONGCARD)Z274);
if (W_80->Y10 != NIL) {
{
LONGCARD B_55 = 0, B_56 = W_80->Y8 - W_80->Y7;

if (B_55 <= B_56)
for (Z295 = B_55;; Z295 += 1) {
Z327 = W_80->Y10->A[Z295];
if (Z327 != 0 && Z327 <= ZiS8_12 && !ZpmCQ_25((LONGCARD)Z327, &Z388)) {
ZpmCQ_13(&Z304, (LONGCARD)Z327);
}
if (Z295 >= B_56) break;
}
}
}
}
}
ZpmCQ_12(&Z388);
ZpmCQ_14(&Z388, 0L);
while (!ZpmCQ_26(Z388)) {
Z274 = ZpmCQ_20(&Z388);
{
register ZiS8_7 *W_81 = &ZiS8_14->A[Z274];

W_81->Y4 = ZiS8_0;
if (W_81->Y10 != NIL) {
Z385((SHORTCARD)Z274);
}
{
LONGCARD B_57 = W_81->Y0, B_58 = W_81->Y0 + W_81->Y2;

if (B_57 <= B_58)
for (Z275 = B_57;; Z275 += 1) {
Z386((SHORTCARD)Z274, Z275);
if (Z275 >= B_58) break;
}
}
}
}
ZpmCQ_7(&Z304);
ZpmCQ_7(&Z388);
}

static CARDINAL Z389
# ifdef HAVE_ARGS
(ZiS8_5 Z274)
# else
(Z274)
ZiS8_5 Z274;
# endif
{
CARDINAL Z295, Z390, Z391;

{
register ZiS8_7 *W_82 = &ZiS8_14->A[Z274];

if (W_82->Y2 == 0) {
return ZiS8_17->A[W_82->Y0].Y0;
}
Z390 = 0;
{
LONGCARD B_59 = 0, B_60 = W_82->Y8 - W_82->Y7;

if (B_59 <= B_60)
for (Z295 = B_59;; Z295 += 1) {
Z391 = W_82->Y10->A[Z295];
if (Z391 != 0) {
if (Z391 <= ZiS8_28 || Z391 > ZiS8_28 + ZpmC89LG6_2) {
return 0;
} else if (Z390 == 0) {
Z390 = Z391;
} else if (Z391 != Z390) {
return 0;
}
}
if (Z295 >= B_60) break;
}
}
return Z390 - ZiS8_28;
}
}

void ZiS8_54
 ARGS ((void))
{
LONGINT Z274, Z327;
CARDINAL Z275, Z328, Z352;

ZpmCQ_5(&ZiS8_42, ZpmC89LG6_2);
if (ZpmCQ_25(ORD('r'), &Zq0A4_61)) {
return;
}
{
LONGINT B_61 = 1, B_62 = ZiS8_12;

if (B_61 <= B_62)
for (Z274 = B_61;; Z274 += 1) {
{
register ZiS8_7 *W_83 = &ZiS8_14->A[Z274];

if (W_83->Y4 != ZiS8_0) {
{
LONGCARD B_63 = W_83->Y0, B_64 = W_83->Y0 + W_83->Y2 + W_83->Y3;

if (B_63 <= B_64)
for (Z275 = B_63;; Z275 += 1) {
{
register ZiS8_8 *W_84 = &ZiS8_17->A[Z275];

{
register Zq0A4_120 *W_85 = &Zq0A4_95->A[W_84->Y0]->U_1.V_18.Y17;

if (W_84->Y1 == W_85->Y12 - 1) {
Z328 = W_85->Y17->A[W_84->Y1 + 1];
if (0 < Z328) {
Z327 = W_83->Y10->A[Z328 - W_83->Y7];
if (Z327 <= ZiS8_12) {
Z352 = Z389((SHORTCARD)Z327);
if (Z352 > 0) {
if (Z328 < Zq0A4_91) {
W_83->Y10->A[Z328 - W_83->Y7] = (CARDINAL)ZiS8_12 + Z352;
ZpmCQ_13(&ZiS8_42, Z352);
} else {
W_83->Y10->A[Z328 - W_83->Y7] = ZiS8_28 + Z352;
}
}
}
}
}
}
}
if (Z275 >= B_64) break;
}
}
}
}
if (Z274 >= B_62) break;
}
}
}

void ZiS8_55
 ARGS ((void))
{
ZpmCQ_4 Z304, Z388, Z266;
LONGINT Z274, Z327, Z350;
CARDINAL Z295, Z396, Z328;

ZpmCQ_5(&Z304, (LONGCARD)ZiS8_12);
ZpmCQ_5(&Z388, (LONGCARD)ZiS8_12);
ZpmCQ_5(&Z266, Zq0A4_91);
{
LONGCARD B_65 = 1, B_66 = ZpmC89LG6_4;

if (B_65 <= B_66)
for (Z295 = B_65;; Z295 += 1) {
ZpmCQ_13(&Z304, Z295);
if (Z295 >= B_66) break;
}
}
{
LONGCARD B_67 = 1, B_68 = (CARDINAL)ZggGECF6A_11;

if (B_67 <= B_68)
for (Z295 = B_67;; Z295 += 1) {
Z274 = ZggGECF6A_13->A[Z295].Y2;
if (Z274 <= ZiS8_12) {
ZpmCQ_13(&Z304, (LONGCARD)Z274);
{
register ZiS8_7 *W_86 = &ZiS8_14->A[Z274];

if (W_86->Y10 == NIL) {
ZiS8_49((SHORTCARD)Z274, W_86->Y0, &Z266);
W_86->Y7 = ZpmCQ_17(&Z266);
W_86->Y8 = ZpmCQ_18(&Z266);
Z350 = W_86->Y8 - W_86->Y7 + 1;
ZarQdhNDD_0((ADDRESS *)&W_86->Y10, &Z350, (LONGINT)sizeof (ZiS8_5));
Z332((ADDRESS)W_86->Y10, (SHORTCARD)Z274);
{
LONGCARD B_69 = 0, B_70 = W_86->Y8 - W_86->Y7;

if (B_69 <= B_70)
for (Z396 = B_69;; Z396 += 1) {
W_86->Y10->A[Z396] = 0;
if (Z396 >= B_70) break;
}
}
INC1(ZiS8_32, Z350);
while (!ZpmCQ_26(Z266)) {
Z328 = ZpmCQ_20(&Z266);
W_86->Y10->A[Z328 - W_86->Y7] = ZiS8_28 + ZiS8_17->A[W_86->Y0].Y0;
INC(ZiS8_31);
}
}
}
}
if (Z295 >= B_68) break;
}
}
ZpmCQ_7(&Z266);
while (!ZpmCQ_26(Z304)) {
Z274 = ZpmCQ_20(&Z304);
{
register ZiS8_7 *W_87 = &ZiS8_14->A[Z274];

ZpmCQ_13(&Z388, (LONGCARD)Z274);
if (W_87->Y10 != NIL) {
{
LONGCARD B_71 = 0, B_72 = W_87->Y8 - W_87->Y7;

if (B_71 <= B_72)
for (Z295 = B_71;; Z295 += 1) {
Z327 = W_87->Y10->A[Z295];
if (Z327 != 0 && Z327 <= ZiS8_12 && !ZpmCQ_25((LONGCARD)Z327, &Z388)) {
ZpmCQ_13(&Z304, (LONGCARD)Z327);
}
if (Z295 >= B_72) break;
}
}
}
}
}
{
LONGINT B_73 = 1, B_74 = ZiS8_12;

if (B_73 <= B_74)
for (Z274 = B_73;; Z274 += 1) {
{
register ZiS8_7 *W_88 = &ZiS8_14->A[Z274];

if (ZpmCQ_25((LONGCARD)Z274, &Z388)) {
switch (W_88->Y4) {
case ZiS8_1:;
INC(ZiS8_36);
break;
case ZiS8_2:;
INC(ZiS8_37);
break;
case ZiS8_3:;
INC(ZiS8_38);
break;
}
} else {
W_88->Y4 = ZiS8_0;
INC(ZiS8_39);
}
}
if (Z274 >= B_74) break;
}
}
ZpmCQ_7(&Z304);
ZpmCQ_7(&Z388);
}

static void Z385
# ifdef HAVE_ARGS
(ZiS8_5 Z274)
# else
(Z274)
ZiS8_5 Z274;
# endif
{
LONGINT Z350;

{
register ZiS8_7 *W_89 = &ZiS8_14->A[Z274];

Z350 = W_89->Y8 - W_89->Y7 + 1;
ZarQdhNDD_3((ADDRESS *)&W_89->Y10, &Z350, (LONGINT)sizeof (ZiS8_5));
DEC1(ZiS8_32, Z350);
W_89->Y10 = NIL;
}
}

static void Z386
# ifdef HAVE_ARGS
(ZiS8_5 Z274, CARDINAL Z275)
# else
(Z274, Z275)
ZiS8_5 Z274;
CARDINAL Z275;
# endif
{
{
register ZiS8_7 *W_90 = &ZiS8_14->A[Z274];

{
register ZiS8_9 *W_91 = &ZiS8_20->A[Z275 - W_90->Y0 + W_90->Y1];

if (W_91->Y0 != NIL) {
ZpmCQ_7(W_91->Y0);
ZDtgCFKU_2((LONGINT)sizeof (ZpmCQ_4), (ADDRESS)W_91->Y0);
DEC(Z260);
W_91->Y0 = NIL;
W_91->Y4 = 0;
}
}
}
}

void ZiS8_56
 ARGS ((void))
{
CARDINAL Z403;

if (Zq0A4_68 > 0) {
Z403 = ZblNKKO_16;
} else if (Zq0A4_67 > 0) {
Z403 = ZblNKKO_17;
} else {
Z403 = ZblNKKO_20;
}
if (ZiS8_33) {
if (ZpmCQ_25(ORD('0'), &Zq0A4_61)) {
ZblNKKO_44((STRING)"grammar is not LALR(1)", 22L, Z403, ZmtLFGGBG_1);
} else {
ZblNKKO_44((STRING)"grammar is not LR(1)", 20L, Z403, ZmtLFGGBG_1);
}
} else if (Z260 == 0) {
ZblNKKO_44((STRING)"grammar is LR(0)", 16L, Z403, ZmtLFGGBG_1);
} else if (ZiS8_29 == (CARDINAL)ZiS8_12) {
if (ZiS8_35 == ZiS8_4) {
ZblNKKO_44((STRING)"grammar is LALR(1) after explicit repair", 40L, Z403, ZmtLFGGBG_1);
} else {
ZblNKKO_44((STRING)"grammar is LALR(1)", 18L, Z403, ZmtLFGGBG_1);
}
} else if (ZiS8_29 < ZiS8_30 && ZiS8_30 == (CARDINAL)ZiS8_12) {
if (ZiS8_35 == ZiS8_4) {
ZblNKKO_44((STRING)"grammar is LR(1) after explicit repair", 38L, Z403, ZmtLFGGBG_1);
} else {
ZblNKKO_44((STRING)"grammar is LR(1)", 16L, Z403, ZmtLFGGBG_1);
}
} else if (ZiS8_30 < (CARDINAL)ZiS8_12) {
if (ZiS8_35 == ZiS8_4) {
ZblNKKO_44((STRING)"grammar is LR(1) after explicit repair", 38L, Z403, ZmtLFGGBG_1);
} else {
ZblNKKO_44((STRING)"grammar is LR(1)", 16L, Z403, ZmtLFGGBG_1);
}
} else {
ZblNKKO_44((STRING)"grammar is not LR(1)", 20L, Z403, ZmtLFGGBG_1);
}
}

void ZiS8_61
 ARGS ((void))
{
if (ZiS8_40 + ZiS8_41 > 0) {
ZfM_33((ZDz6VQCC_4)ZfM_2);
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)" conflict repair   explicit implicit  LALR(2)  dynamic unsolved    total", 72L);
ZfM_33((ZDz6VQCC_4)ZfM_2);
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)"------------------------------------------------------------------------", 72L);
ZfM_33((ZDz6VQCC_4)ZfM_2);
if (ZiS8_40 > 0) {
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)" shift-reduce     ", 18L);
ZfM_25((ZDz6VQCC_4)ZfM_2, (LONGINT)ZggGECF6A_15.A[ZggGECF6A_2 - 1], 9L);
ZfM_25((ZDz6VQCC_4)ZfM_2, (LONGINT)ZggGECF6A_15.A[ZggGECF6A_4 - 1], 9L);
ZfM_25((ZDz6VQCC_4)ZfM_2, (LONGINT)ZggGECF6A_15.A[ZggGECF6A_8 - 1], 9L);
ZfM_25((ZDz6VQCC_4)ZfM_2, (LONGINT)ZggGECF6A_15.A[ZggGECF6A_6 - 1], 9L);
ZfM_25((ZDz6VQCC_4)ZfM_2, (LONGINT)ZggGECF6A_15.A[ZggGECF6A_0 - 1], 9L);
ZfM_25((ZDz6VQCC_4)ZfM_2, (LONGINT)ZiS8_40, 9L);
ZfM_33((ZDz6VQCC_4)ZfM_2);
}
if (ZiS8_41 > 0) {
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)"reduce-reduce     ", 18L);
ZfM_25((ZDz6VQCC_4)ZfM_2, (LONGINT)ZggGECF6A_15.A[ZggGECF6A_3 - 1], 9L);
ZfM_25((ZDz6VQCC_4)ZfM_2, (LONGINT)ZggGECF6A_15.A[ZggGECF6A_5 - 1], 9L);
ZfM_25((ZDz6VQCC_4)ZfM_2, (LONGINT)ZggGECF6A_15.A[ZggGECF6A_9 - 1], 9L);
ZfM_25((ZDz6VQCC_4)ZfM_2, (LONGINT)ZggGECF6A_15.A[ZggGECF6A_7 - 1], 9L);
ZfM_25((ZDz6VQCC_4)ZfM_2, (LONGINT)ZggGECF6A_15.A[ZggGECF6A_1 - 1], 9L);
ZfM_25((ZDz6VQCC_4)ZfM_2, (LONGINT)ZiS8_41, 9L);
ZfM_33((ZDz6VQCC_4)ZfM_2);
}
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)"------------------------------------------------------------------------", 72L);
ZfM_33((ZDz6VQCC_4)ZfM_2);
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)" total            ", 18L);
ZfM_25((ZDz6VQCC_4)ZfM_2, (LONGINT)(ZggGECF6A_15.A[ZggGECF6A_2 - 1] + ZggGECF6A_15.A[ZggGECF6A_3 - 1]), 9L);
ZfM_25((ZDz6VQCC_4)ZfM_2, (LONGINT)(ZggGECF6A_15.A[ZggGECF6A_4 - 1] + ZggGECF6A_15.A[ZggGECF6A_5 - 1]), 9L);
ZfM_25((ZDz6VQCC_4)ZfM_2, (LONGINT)(ZggGECF6A_15.A[ZggGECF6A_8 - 1] + ZggGECF6A_15.A[ZggGECF6A_9 - 1]), 9L);
ZfM_25((ZDz6VQCC_4)ZfM_2, (LONGINT)(ZggGECF6A_15.A[ZggGECF6A_6 - 1] + ZggGECF6A_15.A[ZggGECF6A_7 - 1]), 9L);
ZfM_25((ZDz6VQCC_4)ZfM_2, (LONGINT)(ZggGECF6A_15.A[ZggGECF6A_0 - 1] + ZggGECF6A_15.A[ZggGECF6A_1 - 1]), 9L);
ZfM_25((ZDz6VQCC_4)ZfM_2, (LONGINT)(ZiS8_40 + ZiS8_41), 9L);
ZfM_33((ZDz6VQCC_4)ZfM_2);
}
}

void ZiS8_58
 ARGS ((void))
{
LONGINT Z274;

ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)"Automaton (States and Situations)", 33L);
ZfM_33((ZDz6VQCC_4)ZfM_1);
ZfM_33((ZDz6VQCC_4)ZfM_1);
{
LONGINT B_75 = 1, B_76 = ZiS8_12;

if (B_75 <= B_76)
for (Z274 = B_75;; Z274 += 1) {
if (ZiS8_14->A[Z274].Y4 != ZiS8_0 || ZpmCQ_25(ORD('A'), &Zq0A4_61)) {
ZiS8_59((ZDz6VQCC_4)ZfM_1, (SHORTCARD)Z274);
ZfM_33((ZDz6VQCC_4)ZfM_1);
}
if (Z274 >= B_76) break;
}
}
ZfM_22((ZDz6VQCC_4)ZfM_1);
}

void ZiS8_59
# ifdef HAVE_ARGS
(ZfM_3 Z412, ZiS8_5 Z274)
# else
(Z412, Z274)
ZfM_3 Z412;
ZiS8_5 Z274;
# endif
{
CARDINAL Z327, Z275, Z295, Z396, Z391;

{
register ZiS8_7 *W_92 = &ZiS8_14->A[Z274];

ZfM_25(Z412, (LONGINT)W_92->Y5, 0L);
ZfM_29(Z412, (STRING)", intern: ", 10L);
ZfM_25(Z412, (LONGINT)Z274, 0L);
if (ZpmCQ_25(ORD('A'), &Zq0A4_61)) {
if (W_92->Y4 != ZiS8_0) {
if (ZggFGLABP_15 != NIL) {
ZfM_29(Z412, (STRING)", TDefault: ", 12L);
if (!ZpmCQ_25(ORD('6'), &Zq0A4_61)) {
ZfM_25(Z412, (LONGINT)ZggFGLABP_15->A[W_92->Y5], 0L);
} else if (ZggFGLABP_15->A[W_92->Y5] > ZiS8_28) {
ZfM_29(Z412, (STRING)" r ", 3L);
ZfM_25(Z412, (LONGINT)(ZggFGLABP_15->A[W_92->Y5] - ZiS8_28), 0L);
} else {
ZfM_29(Z412, (STRING)" e", 2L);
}
}
if (ZggFGLABP_23 != NIL) {
ZfM_29(Z412, (STRING)", NDefault: ", 12L);
ZfM_25(Z412, (LONGINT)ZggFGLABP_23->A[W_92->Y5], 0L);
}
ZfM_29(Z412, (STRING)", Cont: ", 8L);
Zfb3DLQ_7(Z412, Zq0A4_93->A[W_92->Y6]->U_1.V_6.Y5.Y2);
}
switch (W_92->Y4) {
case ZiS8_0:;
ZfM_29(Z412, (STRING)", Invalid", 9L);
break;
case ZiS8_1:;
ZfM_29(Z412, (STRING)", Reduce", 8L);
break;
case ZiS8_2:;
ZfM_29(Z412, (STRING)", Read", 6L);
break;
case ZiS8_3:;
ZfM_29(Z412, (STRING)", ReadReduce", 12L);
break;
default:
break;
}
}
if (W_92->Y10 != NIL) {
Z396 = 0;
ZfM_29(Z412, (STRING)", Actions:", 10L);
ZfM_33(Z412);
ZfM_29(Z412, (STRING)"    ", 4L);
{
LONGCARD B_77 = W_92->Y7, B_78 = W_92->Y8;

if (B_77 <= B_78)
for (Z295 = B_77;; Z295 += 1) {
Z327 = Z274;
for (;;) {
{
register ZiS8_7 *W_93 = &ZiS8_14->A[Z327];

if (Z295 < W_93->Y7 || W_93->Y8 < Z295) {
Z391 = 0;
goto EXIT_8;
}
Z391 = W_93->Y10->A[Z295 - W_93->Y7];
if (Z391 != 0) {
goto EXIT_8;
}
if (Z295 < Zq0A4_91) {
if (ZggFGLABP_15 == NIL) {
goto EXIT_8;
}
if (!ZpmCQ_25(ORD('6'), &Zq0A4_61)) {
Z327 = ZggFGLABP_15->A[W_93->Y5];
} else if (ZggFGLABP_15->A[W_93->Y5] != 0 && ZpmCQ_25(Z295, &ZggFGLABP_31->A[ZggFGLABP_29->A[W_93->Y5]])) {
Z391 = ZggFGLABP_15->A[W_93->Y5];
goto EXIT_8;
} else {
Z391 = 0;
goto EXIT_8;
}
} else {
if (ZggFGLABP_23 == NIL) {
goto EXIT_8;
}
Z327 = ZggFGLABP_23->A[W_93->Y5];
}
if (Z327 == 0) {
goto EXIT_8;
}
}
} EXIT_8:;
if (Z391 != 0) {
if (Z295 < Zq0A4_91) {
Zfb3DLQ_7(Z412, Zq0A4_93->A[Z295]->U_1.V_6.Y5.Y2);
} else {
Zfb3DLQ_7(Z412, Zq0A4_93->A[Z295]->U_1.V_9.Y8.Y2);
}
if (Z391 <= (CARDINAL)ZiS8_12) {
ZfM_29(Z412, (STRING)" s ", 3L);
if (ZiS8_14->A[Z391].Y5 == 0) {
ZfM_25(Z412, (LONGINT)Z391, 0L);
} else {
ZfM_25(Z412, (LONGINT)ZiS8_14->A[Z391].Y5, 0L);
}
} else if (Z391 <= ZiS8_28) {
ZfM_29(Z412, (STRING)" sr ", 4L);
ZfM_25(Z412, (LONGINT)(Z391 - (CARDINAL)ZiS8_12), 0L);
} else if (Z391 <= ZiS8_28 + ZpmC89LG6_2) {
ZfM_29(Z412, (STRING)" r ", 3L);
ZfM_25(Z412, (LONGINT)(Z391 - ZiS8_28), 0L);
} else {
ZfM_29(Z412, (STRING)" d ", 3L);
ZfM_25(Z412, (LONGINT)(Z391 - ZiS8_28 - ZpmC89LG6_2), 0L);
}
ZfM_29(Z412, (STRING)", ", 2L);
if (Z396 == 5) {
Z396 = 0;
ZfM_33(Z412);
ZfM_29(Z412, (STRING)"    ", 4L);
}
INC(Z396);
}
if (Z295 >= B_78) break;
}
}
}
ZfM_33(Z412);
{
LONGCARD B_79 = 0, B_80 = W_92->Y2 + W_92->Y3;

if (B_79 <= B_80)
for (Z275 = B_79;; Z275 += 1) {
ZiS8_60(Z412, W_92->Y0 + Z275, W_92->Y1 + Z275);
if (Z275 >= B_80) break;
}
}
}
}

void ZiS8_60
# ifdef HAVE_ARGS
(ZfM_3 Z412, CARDINAL Z275, CARDINAL Z361)
# else
(Z412, Z275, Z361)
ZfM_3 Z412;
CARDINAL Z275, Z361;
# endif
{
CARDINAL Z295;
Zq0A4_35 Z328;

{
register ZiS8_8 *W_94 = &ZiS8_17->A[Z275];

{
register Zq0A4_120 *W_95 = &Zq0A4_95->A[W_94->Y0]->U_1.V_18.Y17;

ZfM_25(Z412, (LONGINT)Z275, 4L);
ZfM_25(Z412, (LONGINT)W_94->Y2, 3L);
ZfM_29(Z412, (STRING)" ", 1L);
Zfb3DLQ_7(Z412, W_95->Y16->U_1.V_9.Y8.Y2);
ZfM_29(Z412, (STRING)": ", 2L);
if (W_94->Y1 == 0) {
ZfM_29(Z412, (STRING)".", 1L);
} else {
ZfM_29(Z412, (STRING)" ", 1L);
}
{
LONGCARD B_81 = 1, B_82 = W_95->Y12;

if (B_81 <= B_82)
for (Z295 = B_81;; Z295 += 1) {
Z328 = Zq0A4_93->A[W_95->Y17->A[Z295]];
if (Z328->U_1.V_1.Y0 == Zq0A4_6) {
Zfb3DLQ_7(Z412, Z328->U_1.V_6.Y5.Y2);
} else {
Zfb3DLQ_7(Z412, Z328->U_1.V_9.Y8.Y2);
}
if (Z295 == W_94->Y1) {
ZfM_29(Z412, (STRING)".", 1L);
} else {
ZfM_29(Z412, (STRING)" ", 1L);
}
if (Z295 >= B_82) break;
}
}
{
register ZiS8_9 *W_96 = &ZiS8_20->A[Z361];

if (W_94->Y1 > 0) {
if (ZpmCQ_25(ORD('A'), &Zq0A4_61)) {
Z416(Z412, ZiS8_20->A[Z361]);
}
if (W_96->Y0 != NIL) {
ZfM_29(Z412, (STRING)" ", 1L);
ZpmC89LG6_7(Z412, *W_96->Y0);
}
}
}
ZfM_33(Z412);
}
}
}

static void Z416
# ifdef HAVE_ARGS
(ZfM_3 Z412, ZiS8_9 Z366)
# else
(Z412, Z366)
ZfM_3 Z412;
ZiS8_9 Z366;
# endif
{
ZiS8_5 Z295, Z396;

{
register ZiS8_9 *W_97 = &Z366;

if (W_97->Y1 != NIL) {
Z396 = 0;
ZfM_29(Z412, (STRING)" {", 2L);
for (Z295 = W_97->Y3; Z295 >= 1; Z295 += -1) {
ZfM_25(Z412, (LONGINT)W_97->Y1->A[Z295 - 1], 0L);
ZfM_29(Z412, (STRING)", ", 2L);
INC(Z396);
if (Z396 == 15) {
Z396 = 0;
ZfM_33(Z412);
ZfM_29(Z412, (STRING)"	", 1L);
}
}
ZfM_29(Z412, (STRING)"}", 1L);
}
}
}

void ZiS8_50
 ARGS ((void))
{
CARDINAL Z274, Z275;

{
LONGCARD B_83 = 1, B_84 = ZiS8_30;

if (B_83 <= B_84)
for (Z274 = B_83;; Z274 += 1) {
{
register ZiS8_7 *W_98 = &ZiS8_14->A[Z274];

if (W_98->Y4 != ZiS8_0) {
{
LONGCARD B_85 = W_98->Y0, B_86 = W_98->Y0 + W_98->Y2;

if (B_85 <= B_86)
for (Z275 = B_85;; Z275 += 1) {
{
register ZiS8_8 *W_99 = &ZiS8_17->A[Z275];

if (W_99->Y0 > ZpmC89LG6_4) {
Z386((SHORTCARD)Z274, Z275);
}
}
if (Z275 >= B_86) break;
}
}
}
}
if (Z274 >= B_84) break;
}
}
}

static void Z418
# ifdef HAVE_ARGS
(CHAR Z419[], LONGCARD O_1, INTEGER Z420)
# else
(Z419, O_1, Z420)
CHAR Z419[];
LONGCARD O_1;
INTEGER Z420;
# endif
{
OPEN_ARRAY_LOCALS

ALLOC_OPEN_ARRAYS (O_1 * sizeof (CHAR), 1)
COPY_OPEN_ARRAY (Z419, O_1, CHAR)
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)"          ", 10L);
ZfM_29((ZDz6VQCC_4)ZfM_1, Z419, O_1);
ZfM_25((ZDz6VQCC_4)ZfM_1, Z420, 8L);
ZfM_33((ZDz6VQCC_4)ZfM_1);
FREE_OPEN_ARRAYS
}

void ZiS8_62
 ARGS ((void))
{
ZfM_33((ZDz6VQCC_4)ZfM_1);
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)"Parser statistics for grammar \"", 31L);
if (Zq0A4_65.A[0] != '\0') {
ZfM_29((ZDz6VQCC_4)ZfM_1, Zq0A4_65.A, 256L);
} else {
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)"standard input", 14L);
}
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)"\"", 1L);
ZfM_33((ZDz6VQCC_4)ZfM_1);
ZfM_33((ZDz6VQCC_4)ZfM_1);
Z418((STRING)"Terminals          ", 19L, (LONGINT)ZpmC89LG6_0);
Z418((STRING)"Nonterminals       ", 19L, (LONGINT)ZpmC89LG6_1);
Z418((STRING)"Symbols            ", 19L, (LONGINT)Zq0A4_90);
Z418((STRING)"Rules              ", 19L, (LONGINT)ZpmC89LG6_2);
Z418((STRING)"LR(0)      States  ", 19L, (LONGINT)ZiS8_29);
Z418((STRING)"LR(1)      States  ", 19L, (LONGINT)(ZiS8_30 - ZiS8_29));
Z418((STRING)"Invalid    States  ", 19L, (LONGINT)ZiS8_39);
Z418((STRING)"Total      States  ", 19L, ZiS8_12);
Z418((STRING)"Items              ", 19L, ZiS8_15);
if (ZpmCQ_25(ORD('T'), &Zq0A4_61)) {
Z418((STRING)"Kernel     Items   ", 19L, ZiS8_18);
Z418((STRING)"Table      Elmts   ", 19L, ZiS8_31);
Z418((STRING)"Pred       Elmts   ", 19L, (LONGINT)Z261);
Z418((STRING)"Path       Elmts   ", 19L, ZolB7FGBG_34(&Zq0A4_96));
Z418((STRING)"Invalid    States  ", 19L, (LONGINT)ZiS8_39);
Z418((STRING)"Reduce     States  ", 19L, (LONGINT)ZiS8_36);
Z418((STRING)"Read       States  ", 19L, (LONGINT)ZiS8_37);
Z418((STRING)"ReadReduce States  ", 19L, (LONGINT)ZiS8_38);
Z418((STRING)"Dynamic    States  ", 19L, ZggGECF6A_11);
Z418((STRING)"Lookahead  Sets    ", 19L, (LONGINT)Z260);
Z418((STRING)"shift reduce       ", 19L, (LONGINT)ZiS8_40);
Z418((STRING)"reduce reduce      ", 19L, (LONGINT)ZiS8_41);
Z418((STRING)"State      Space   ", 19L, ZiS8_13 * sizeof (ZiS8_7));
Z418((STRING)"Item       Space   ", 19L, ZiS8_16 * sizeof (ZiS8_8));
Z418((STRING)"Kernel     Space   ", 19L, ZiS8_19 * sizeof (ZiS8_9));
Z418((STRING)"Lookahead  Space   ", 19L, (LONGINT)(Z260 * (sizeof (ZpmCQ_4) + (Zq0A4_91 + 32) / 32 * sizeof (BITSET))));
Z418((STRING)"Table      Space   ", 19L, ZiS8_32 * sizeof (ZiS8_5));
Z418((STRING)"Pred       Space   ", 19L, (LONGINT)(Z261 * sizeof (ZiS8_5)));
Z418((STRING)"Path       Space   ", 19L, (LONGINT)((CARDINAL)ZpmC89LG6_6 + (CARDINAL)ZolB7FGBG_34(&Zq0A4_96) * (sizeof (ZpmCQ_4) + (Zq0A4_91 + 32) / 32 * sizeof (BITSET))));
Z418((STRING)"TEntrys            ", 19L, (LONGINT)ZggFGLABP_7);
Z418((STRING)"TTable     Max     ", 19L, (LONGINT)ZggFGLABP_20);
Z418((STRING)"TComb      Size    ", 19L, ZggFGLABP_16);
Z418((STRING)"TBase      Size    ", 19L, ZggFGLABP_17);
Z418((STRING)"TDefault   Size    ", 19L, ZggFGLABP_18);
Z418((STRING)"TDefault   Savings ", 19L, (LONGINT)ZggFGLABP_9);
Z418((STRING)"NEntrys            ", 19L, (LONGINT)ZggFGLABP_8);
Z418((STRING)"NTable     Max     ", 19L, (LONGINT)ZggFGLABP_28);
Z418((STRING)"NComb      Size    ", 19L, ZggFGLABP_24);
Z418((STRING)"NBase      Size    ", 19L, ZggFGLABP_25);
Z418((STRING)"NDefault   Size    ", 19L, ZggFGLABP_26);
Z418((STRING)"NDefault   Savings ", 19L, (LONGINT)ZggFGLABP_10);
Z418((STRING)"TEntry     Space   ", 19L, (LONGINT)(ZggFGLABP_7 * sizeof (ZggFGLABP_6)));
Z418((STRING)"TComb      Space   ", 19L, ZggFGLABP_16 * sizeof (ZggFGLABP_3));
Z418((STRING)"TBase      Space   ", 19L, ZggFGLABP_17 * sizeof (ZggFGLABP_2));
Z418((STRING)"TDefault   Space   ", 19L, ZggFGLABP_18 * sizeof (ZggFGLABP_2));
Z418((STRING)"NEntry     Space   ", 19L, (LONGINT)(ZggFGLABP_8 * sizeof (ZggFGLABP_6)));
Z418((STRING)"NComb      Space   ", 19L, ZggFGLABP_24 * sizeof (ZggFGLABP_3));
Z418((STRING)"NBase      Space   ", 19L, ZggFGLABP_25 * sizeof (ZggFGLABP_2));
Z418((STRING)"NDefault   Space   ", 19L, ZggFGLABP_26 * sizeof (ZggFGLABP_2));
Z418((STRING)"Tree       Space   ", 19L, (LONGINT)Zq0A4_138);
}
Z418((STRING)"Memory             ", 19L, (LONGINT)ZDtgCFKU_0);
ZfM_22((ZDz6VQCC_4)ZfM_1);
}

ADDRESS ZiS8_48
 ARGS ((void))
{
ADDRESS Z423;

Z423 = ZDtgCFKU_1((LONGINT)sizeof (ZpmCQ_4));
if (Z423 == NIL) {
ZblNKKO_44((STRING)"out of memory", 13L, (LONGCARD)ZblNKKO_14, ZmtLFGGBG_1);
}
return Z423;
}

static void Z332
# ifdef HAVE_ARGS
(ADDRESS Z423, ZiS8_5 Z274)
# else
(Z423, Z274)
ADDRESS Z423;
ZiS8_5 Z274;
# endif
{
if (Z423 == NIL) {
ZblNKKO_45((STRING)"out of memory for state", 23L, (LONGCARD)ZblNKKO_14, ZmtLFGGBG_1, (LONGCARD)ZblNKKO_23, ADR (Z274));
}
}

void BEGIN_LR1 ARGS ((void))
{
  static BOOLEAN has_been_called = FALSE;
  if (has_been_called) return;
  has_been_called = TRUE;
BEGIN_IO ();
BEGIN_Strings ();
BEGIN_Sets ();
BEGIN_Tree ();
BEGIN_General ();
BEGIN_rMemory ();
BEGIN_DynArray ();
BEGIN_IO ();
BEGIN_Strings ();
BEGIN_Idents ();
BEGIN_Relation ();
BEGIN_Position ();
BEGIN_Errors ();
BEGIN_Conflict ();
BEGIN_Compress ();
BEGIN_Sets ();
BEGIN_Tree ();
BEGIN_Semantic ();
BEGIN_Strings ();
BEGIN_Errors ();
BEGIN_Relation ();
BEGIN_Tree ();

ZiS8_32 = 0;
ZiS8_31 = 0;
Z261 = 0;
ZiS8_39 = 0;
ZiS8_36 = 0;
ZiS8_37 = 0;
ZiS8_38 = 0;
Z260 = 0;
ZiS8_40 = 0;
ZiS8_41 = 0;
ZiS8_35 = 0;
ZiS8_34 = Zq0A4_2;
ZiS8_33 = FALSE;
}
