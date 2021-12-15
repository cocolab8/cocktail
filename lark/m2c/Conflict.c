#include "SYSTEM_.h"

#ifndef DEFINITION_rMemory
#include "rMemory.h"
#endif

#ifndef DEFINITION_Strings
#include "Strings.h"
#endif

#ifndef DEFINITION_DynArray
#include "DynArray.h"
#endif

#ifndef DEFINITION_IO
#include "IO.h"
#endif

#ifndef DEFINITION_Idents
#include "Idents.h"
#endif

#ifndef DEFINITION_Semantic
#include "Semantic.h"
#endif

#ifndef DEFINITION_Position
#include "Position.h"
#endif

#ifndef DEFINITION_Explain
#include "Explain.h"
#endif

#ifndef DEFINITION_Errors
#include "Errors.h"
#endif

#ifndef DEFINITION_Sets
#include "Sets.h"
#endif

#ifndef DEFINITION_Tree
#include "Tree.h"
#endif

#ifndef DEFINITION_LR1
#include "LR1.h"
#endif

#ifndef DEFINITION_LRk
#include "LRk.h"
#endif

#ifndef DEFINITION_Delta
#include "Delta.h"
#endif

#ifndef DEFINITION_Strings
#include "Strings.h"
#endif

#ifndef DEFINITION_Tree
#include "Tree.h"
#endif

#ifndef DEFINITION_Errors
#include "Errors.h"
#endif

#ifndef DEFINITION_Conflict
#include "Conflict.h"
#endif

LONGINT ZggGECF6A_11;
LONGINT ZggGECF6A_12;
struct Conflict_2 *ZggGECF6A_13;
ZpmCQ_4 ZggGECF6A_14;
struct Conflict_3 ZggGECF6A_15;

static ZpmCQ_4 Z221;
static INTEGER Z222;
static LONGINT Z223;
static void Z224 ARGS ((CARDINAL Z225, ZpmCQ_4 *Z226));
struct S_1_RepairConflict;
static void Z250 ARGS ((CARDINAL Z225, ZpmCQ_4 *Z226, BOOLEAN Z252));
static void Z286 ARGS ((struct S_1_RepairConflict *link, ZpmCQ_4 Z230, CHAR Z287[], LONGCARD O_1, CARDINAL Z249));
static void Z290 ARGS ((CARDINAL Z231, CARDINAL Z232));
struct S_1_RepairConflict {
CARDINAL *Z225;
};
static SHORTINT Z301 ARGS ((CARDINAL Z232));
static void Z289 ARGS ((ZpmCQ_4 Z230, Zp1PEAFD_2 *Z288));

static void Z224
# ifdef HAVE_ARGS
(CARDINAL Z225, ZpmCQ_4 *Z226)
# else
(Z225, Z226)
CARDINAL Z225;
ZpmCQ_4 *Z226;
# endif
{
ZpmCQ_4 Z227, Z228, Z229, Z230;
CARDINAL Z231, Z232;

{
register ZiS8_7 *W_1 = &ZiS8_14->A[Z225];

ZpmCQ_32(Z226);
{
register ZiS8_8 *W_2 = &ZiS8_17->A[W_1->Y0];

if (W_1->Y2 == 0 && W_2->Y1 == Zq0A4_95->A[W_2->Y0]->U_1.V_18.Y17.Y12 && !ZpmCQ_25(ORD('r'), &Zq0A4_61)) {
return;
}
}
ZpmCQ_5(&Z227, Zq0A4_91);
ZpmCQ_5(&Z228, Zq0A4_91);
ZpmCQ_5(&Z229, Zq0A4_91);
ZpmCQ_5(&Z230, Zq0A4_91);
{
LONGCARD B_1 = W_1->Y0, B_2 = W_1->Y0 + W_1->Y2 + W_1->Y3;

if (B_1 <= B_2)
for (Z231 = B_1;; Z231 += 1) {
{
register ZiS8_8 *W_3 = &ZiS8_17->A[Z231];

{
register Zq0A4_120 *W_4 = &Zq0A4_95->A[W_3->Y0]->U_1.V_18.Y17;

if (W_3->Y1 < W_4->Y12) {
if (W_4->Y17->A[W_3->Y1 + 1] < Zq0A4_91) {
ZpmCQ_13(&Z227, (LONGCARD)W_4->Y17->A[W_3->Y1 + 1]);
}
} else if (W_3->Y1 == W_4->Y12) {
ZiS8_49((SHORTCARD)Z225, Z231, &Z229);
ZpmCQ_30(&Z230, Z229);
while (!ZpmCQ_26(Z230)) {
Z232 = ZpmCQ_20(&Z230);
if (W_1->Y10->A[Z232 - W_1->Y7] == 0) {
W_1->Y10->A[Z232 - W_1->Y7] = ZiS8_28 + W_3->Y0;
INC(ZiS8_31);
}
}
ZpmCQ_30(&Z230, Z228);
ZpmCQ_10(&Z230, Z229);
ZpmCQ_8(Z226, Z230);
ZpmCQ_8(&Z228, Z229);
}
}
}
if (Z231 >= B_2) break;
}
}
ZpmCQ_30(&Z230, Z228);
ZpmCQ_10(&Z230, Z227);
ZpmCQ_8(Z226, Z230);
}
ZpmCQ_7(&Z227);
ZpmCQ_7(&Z228);
ZpmCQ_7(&Z229);
ZpmCQ_7(&Z230);
}

void ZggGECF6A_16
 ARGS ((void))
{
LONGINT Z225;
ZpmCQ_4 Z226;

ZpmCQ_5(&Z226, Zq0A4_91);
ZpmCQ_5(&Z221, (LONGCARD)ZiS8_13);
ZggGECF6A_11 = 0;
ZggGECF6A_12 = 10;
ZarQdhNDD_0((ADDRESS *)&ZggGECF6A_13, &ZggGECF6A_12, (LONGINT)sizeof (ZggGECF6A_10));
ZpmCQ_5(&ZggGECF6A_14, ZpmC89LG6_2);
ZiS8_28 = (CARDINAL)ZiS8_12 + ZpmC89LG6_2;
while (ZiS8_34 != Zq0A4_2) {
{
register Zq0A4_135 *W_5 = &ZiS8_34->U_1.V_33.Y32;

ZiS8_14->A[W_5->Y2].Y10->A[0] = ZiS8_28 + W_5->Y3;
ZiS8_34 = W_5->Y1;
}
}
{
LONGINT B_3 = 1, B_4 = ZiS8_12;

if (B_3 <= B_4)
for (Z225 = B_3;; Z225 += 1) {
{
register ZiS8_7 *W_6 = &ZiS8_14->A[Z225];

if (W_6->Y4 == ZiS8_1 || W_6->Y4 == ZiS8_3) {
Z224((LONGCARD)Z225, &Z226);
if (!ZpmCQ_26(Z226)) {
ZpmCQ_13(&Z221, (LONGCARD)Z225);
Z250((LONGCARD)Z225, &Z226, FALSE);
}
if (!ZpmCQ_26(Z226)) {
ZiS8_33 = TRUE;
}
}
}
if (Z225 >= B_4) break;
}
}
ZpmCQ_7(&Z226);
}

void ZggGECF6A_17
 ARGS ((void))
{
LONGINT Z225;
ZpmCQ_4 Z226;

ZpmCQ_5(&Z226, Zq0A4_91);
while (!ZpmCQ_26(Z221)) {
Z225 = ZpmCQ_20(&Z221);
Z224((LONGCARD)Z225, &Z226);
Z250((LONGCARD)Z225, &Z226, TRUE);
}
ZpmCQ_7(&Z226);
ZpmCQ_7(&Z221);
}

static void Z286
# ifdef HAVE_ARGS
(struct S_1_RepairConflict *link, ZpmCQ_4 Z230, CHAR Z287[], LONGCARD O_1, CARDINAL Z249)
# else
(link, Z230, Z287, O_1, Z249)
struct S_1_RepairConflict *link;
ZpmCQ_4 Z230;
CHAR Z287[];
LONGCARD O_1;
CARDINAL Z249;
# endif
{
Zp1PEAFD_2 Z288;
OPEN_ARRAY_LOCALS

ALLOC_OPEN_ARRAYS (O_1 * sizeof (CHAR), 1)
COPY_OPEN_ARRAY (Z287, O_1, CHAR)
if (!ZpmCQ_26(Z230) && (Z249 == ZblNKKO_16 || !ZpmCQ_25(ORD('s'), &Zq0A4_61))) {
ZblNKKO_45(Z287, O_1, Z249, ZmtLFGGBG_1, (LONGCARD)ZblNKKO_24, ADR (*link->Z225));
Z289(Z230, &Z288);
ZblNKKO_45((STRING)"on lookahead", 12L, (LONGCARD)ZblNKKO_13, ZmtLFGGBG_1, (LONGCARD)ZblNKKO_30, ADR (Z288));
if (Z249 == ZblNKKO_16) {
INC(Zq0A4_68);
}
if (Z249 == ZblNKKO_17) {
INC(Zq0A4_67);
}
}
ZpmCQ_7(&Z230);
FREE_OPEN_ARRAYS
}

static void Z290
# ifdef HAVE_ARGS
(CARDINAL Z231, CARDINAL Z232)
# else
(Z231, Z232)
CARDINAL Z231, Z232;
# endif
{
if (ZiS8_26 <= ZiS8_25) {
ZarQdhNDD_2((ADDRESS *)&ZiS8_27, &ZiS8_26, (LONGINT)sizeof (ZiS8_11));
}
{
register ZiS8_11 *W_7 = &ZiS8_27->A[ZiS8_25];

{
register ZiS8_10 *W_8 = &ZiS8_24->A[Z232];

W_7->Y0 = Z231;
if (W_8->Y0 == -1) {
W_8->Y0 = ZiS8_25;
} else {
ZiS8_27->A[W_8->Y1].Y1 = ZiS8_25;
}
W_7->Y1 = -1;
W_8->Y1 = ZiS8_25;
INC(ZiS8_25);
}
}
}

static void Z250
# ifdef HAVE_ARGS
(CARDINAL Z225, ZpmCQ_4 *Z226, BOOLEAN Z252)
# else
(Z225, Z226, Z252)
CARDINAL Z225;
ZpmCQ_4 *Z226;
BOOLEAN Z252;
# endif
{
ZpmCQ_4 Z253, Z211, Z254, Z255, Z256, Z257, Z258, Z259, Z260, Z261, Z262, Z263;
CARDINAL Z264, Z265, Z266, Z267, Z268, Z269, Z231, Z232, Z270, Z271, Z222, Z272, Z273, Z274, Z275, Z276;
BOOLEAN Z277, Z278, Z279, Z280, Z281;
BITSET Z282;
SHORTINT Z283, Z284, Z285;
struct S_1_RepairConflict frame;

frame.Z225 = &Z225;
ZpmCQ_5(&Z211, Zq0A4_91);
ZpmCQ_5(&Z254, Zq0A4_91);
ZpmCQ_5(&Z255, Zq0A4_91);
ZpmCQ_5(&Z256, Zq0A4_91);
ZpmCQ_5(&Z257, Zq0A4_91);
ZpmCQ_5(&Z258, Zq0A4_91);
ZpmCQ_5(&Z259, Zq0A4_91);
ZpmCQ_5(&Z260, Zq0A4_91);
ZpmCQ_5(&Z261, Zq0A4_91);
ZpmCQ_5(&Z262, Zq0A4_91);
ZpmCQ_5(&Z263, Zq0A4_91);
ZpmCQ_5(&Z253, Zq0A4_91);
{
register ZiS8_7 *W_9 = &ZiS8_14->A[Z225];

Z282 = 0X0L;
ZiS8_25 = 0;
ZpmCQ_30(&Z263, *Z226);
while (!ZpmCQ_26(Z263)) {
Z232 = ZpmCQ_20(&Z263);
Z277 = TRUE;
Z278 = FALSE;
Z272 = 0;
Z273 = 0;
Z274 = 0;
Z275 = 0;
Z265 = 0;
Z268 = Zq0A4_45;
Z266 = 0;
Z269 = Zq0A4_45;
Z270 = 50000;
Z271 = 50000;
Z284 = 0;
ZiS8_24->A[Z232].Y0 = -1;
{
LONGCARD B_5 = W_9->Y0, B_6 = W_9->Y0 + W_9->Y2 + W_9->Y3;

if (B_5 <= B_6)
for (Z231 = B_5;; Z231 += 1) {
{
register ZiS8_8 *W_10 = &ZiS8_17->A[Z231];

{
register Zq0A4_120 *W_11 = &Zq0A4_95->A[W_10->Y0]->U_1.V_18.Y17;

if (W_10->Y1 < W_11->Y12) {
if (W_11->Y17->A[W_10->Y1 + 1] == Z232) {
INC(Z273);
Z290(Z231, Z232);
}
} else {
ZiS8_49((SHORTCARD)Z225, Z231, &Z253);
if (ZpmCQ_25(Z232, &Z253)) {
INC(Z272);
Z290(Z231, Z232);
if (W_11->Y9 == 0) {
Z277 = FALSE;
} else if (W_11->Y9 > Z265) {
Z265 = W_11->Y9;
Z268 = W_11->Y10;
}
if (W_11->Y14 < Z270) {
Z270 = W_11->Y14;
}
if (Zq0A4_155(Zq0A4_95->A[W_10->Y0], Zq0A4_19)) {
Z278 = TRUE;
} else {
if (W_11->Y14 < Z271) {
Z271 = W_11->Y14;
}
}
}
}
}
}
if (Z231 >= B_6) break;
}
}
{
register Zq0A4_108 *W_12 = &Zq0A4_93->A[Z232]->U_1.V_6.Y5;

if (Z273 > 0) {
if (W_12->Y5 == 0) {
Z277 = FALSE;
}
Z266 = W_12->Y5;
Z269 = W_12->Y6;
}
}
if (Z277) {
Z270 = 50000;
if (Z265 > Z266) {
Z264 = Z265;
Z267 = Z268;
} else {
Z264 = Z266;
Z267 = Z269;
}
Z283 = ZiS8_24->A[Z232].Y0;
while (Z283 >= 0) {
{
register ZiS8_11 *W_13 = &ZiS8_27->A[Z283];

{
register ZiS8_8 *W_14 = &ZiS8_17->A[W_13->Y0];

{
register Zq0A4_120 *W_15 = &Zq0A4_95->A[W_14->Y0]->U_1.V_18.Y17;

if (W_14->Y1 < W_15->Y12) {
if (Z266 == Z264 && (Z265 < Z264 || Z267 == Zq0A4_14)) {
INC(Z275);
}
} else {
if (W_15->Y9 == Z264 && (Z266 < Z264 || Z267 != Zq0A4_14)) {
INC(Z274);
if (!Z252) {
W_9->Y10->A[Z232 - W_9->Y7] = ZiS8_28 + W_15->Y14;
}
if (W_15->Y14 < Z270) {
Z270 = W_15->Y14;
}
}
}
}
}
Z283 = W_13->Y1;
}
}
if (Z275 > 0 && Z274 > 0 || Z274 > 1) {
if (Z278) {
Z277 = FALSE;
Z275 = 0;
Z274 = 0;
}
} else {
Z278 = FALSE;
}
}
if (!Z277 && ZiSr_0 > 1) {
if (!Z252) {
Z284 = ZiSr_13(Z225, Z232, *Z226, &Z276);
} else {
Z284 = 0;
for (;;) {
if (Z223 > ZggGECF6A_11) {
goto EXIT_1;
}
{
register ZggGECF6A_10 *W_16 = &ZggGECF6A_13->A[Z223];

if (W_16->Y1 > Z225 || W_16->Y1 == Z225 && W_16->Y6 > Z232) {
goto EXIT_1;
}
if (W_16->Y1 == Z225 && W_16->Y6 == Z232) {
Z284 = W_16->Y5;
goto EXIT_1;
}
}
INC(Z223);
} EXIT_1:;
}
if (Z284 != 0) {
Z278 = FALSE;
ZpmCQ_13(&Zq0A4_61, ORD('&'));
}
}
if (!Z277 && Z284 == 0) {
if (Z273 > 0) {
Z283 = ZiS8_24->A[Z232].Y0;
while (Z283 >= 0) {
{
register ZiS8_11 *W_17 = &ZiS8_27->A[Z283];

{
register ZiS8_8 *W_18 = &ZiS8_17->A[W_17->Y0];

{
register Zq0A4_120 *W_19 = &Zq0A4_95->A[W_18->Y0]->U_1.V_18.Y17;

if (W_18->Y1 < W_19->Y12) {
INC(Z275);
}
}
}
Z283 = W_17->Y1;
}
}
} else {
Z283 = ZiS8_24->A[Z232].Y0;
while (Z283 >= 0) {
{
register ZiS8_11 *W_20 = &ZiS8_27->A[Z283];

{
register ZiS8_8 *W_21 = &ZiS8_17->A[W_20->Y0];

{
register Zq0A4_120 *W_22 = &Zq0A4_95->A[W_21->Y0]->U_1.V_18.Y17;

if (W_21->Y1 == W_22->Y12) {
if (W_22->Y14 == Z270) {
if (!Z252) {
W_9->Y10->A[Z232 - W_9->Y7] = ZiS8_28 + Z270;
}
INC(Z274);
}
}
}
}
Z283 = W_20->Y1;
}
}
}
}
if (Z278) {
Z285 = Z301(Z232);
if (Z285 != 0) {
Z278 = FALSE;
}
if (Z285 > 0) {
W_9->Y10->A[Z232 - W_9->Y7] = ZiS8_28 + (SHORTCARD)Z285;
}
}
if ((Z278 || Z284 != 0) && !Z252) {
INC(ZggGECF6A_11);
if (ZggGECF6A_11 == ZggGECF6A_12) {
ZarQdhNDD_2((ADDRESS *)&ZggGECF6A_13, &ZggGECF6A_12, (LONGINT)sizeof (ZggGECF6A_10));
}
{
register ZggGECF6A_10 *W_23 = &ZggGECF6A_13->A[ZggGECF6A_11];

ZpmCQ_5(&W_23->Y0, ZpmC89LG6_2);
W_23->Y1 = Z225;
W_23->Y2 = W_9->Y10->A[Z232 - W_9->Y7];
if (W_23->Y2 == ZiS8_28 + Z270 && Z271 < 50000) {
W_23->Y2 = ZiS8_28 + Z271;
}
W_23->Y4 = W_23->Y2;
W_23->Y3 = ZiS8_28 + ZpmC89LG6_2 + (CARDINAL)ZggGECF6A_11;
W_23->Y5 = Z284;
W_23->Y6 = Z232;
W_23->Y7 = Z276;
W_9->Y10->A[Z232 - W_9->Y7] = W_23->Y3;
Z283 = ZiS8_24->A[Z232].Y0;
while (Z283 >= 0) {
{
register ZiS8_11 *W_24 = &ZiS8_27->A[Z283];

{
register ZiS8_8 *W_25 = &ZiS8_17->A[W_24->Y0];

{
register Zq0A4_120 *W_26 = &Zq0A4_95->A[W_25->Y0]->U_1.V_18.Y17;

if (W_25->Y1 == W_26->Y12) {
if (Z278 && Zq0A4_155(Zq0A4_95->A[W_25->Y0], Zq0A4_19)) {
ZpmCQ_13(&W_23->Y0, (LONGCARD)W_25->Y0);
Zq0A4_95->A[W_25->Y0]->U_1.V_19.Y18.Y21 = TRUE;
if (Zq0A4_95->A[W_25->Y0]->U_1.V_1.Y0 == Zq0A4_22) {
ZpmCQ_13(&Zq0A4_61, ORD(','));
}
} else if (Z284 != 0) {
ZpmCQ_13(&W_23->Y0, (LONGCARD)W_25->Y0);
}
}
}
}
Z283 = W_24->Y1;
}
}
Z222 = 0;
for (;;) {
INC(Z222);
if (Z222 == (CARDINAL)ZggGECF6A_11) {
Z280 = FALSE;
goto EXIT_2;
}
if (Z225 == ZggGECF6A_13->A[Z222].Y1 && W_23->Y2 == ZggGECF6A_13->A[Z222].Y2 && W_23->Y5 == ZggGECF6A_13->A[Z222].Y5 && ZpmCQ_23(&W_23->Y0, &ZggGECF6A_13->A[Z222].Y0)) {
Z280 = TRUE;
goto EXIT_2;
}
} EXIT_2:;
if (Z280) {
W_9->Y10->A[Z232 - W_9->Y7] = ZiS8_28 + ZpmC89LG6_2 + Z222;
ZpmCQ_7(&W_23->Y0);
DEC(ZggGECF6A_11);
} else {
ZpmCQ_8(&ZggGECF6A_14, W_23->Y0);
if (W_23->Y2 >= ZiS8_28) {
ZpmCQ_13(&ZggGECF6A_14, W_23->Y2 - ZiS8_28);
}
}
}
}
Z279 = TRUE;
if (Z275 > 0 && Z274 > 0) {
Z279 = FALSE;
ZpmCQ_13(&Z211, Z232);
INCL(Z282, ZggGECF6A_0);
}
if (Z274 > 1) {
Z279 = FALSE;
ZpmCQ_13(&Z254, Z232);
INCL(Z282, ZggGECF6A_1);
if (Z275 == 0) {
W_9->Y10->A[Z232 - W_9->Y7] = ZiS8_28 + Z270;
}
}
if (Z279) {
if (Z272 > 0 && Z273 > 0) {
if (Z277) {
ZpmCQ_13(&Z255, Z232);
INCL(Z282, ZggGECF6A_2);
} else if (Z278) {
ZpmCQ_13(&Z259, Z232);
INCL(Z282, ZggGECF6A_6);
} else if (Z284 != 0) {
ZpmCQ_13(&Z261, Z232);
INCL(Z282, ZggGECF6A_8);
} else {
ZpmCQ_13(&Z257, Z232);
INCL(Z282, ZggGECF6A_4);
}
}
if (Z272 > 1) {
if (Z277) {
ZpmCQ_13(&Z256, Z232);
INCL(Z282, ZggGECF6A_3);
} else if (Z278) {
ZpmCQ_13(&Z260, Z232);
INCL(Z282, ZggGECF6A_7);
} else if (Z284 != 0) {
ZpmCQ_13(&Z262, Z232);
INCL(Z282, ZggGECF6A_9);
} else {
ZpmCQ_13(&Z258, Z232);
INCL(Z282, ZggGECF6A_5);
}
}
}
}
}
if (Z252) {
if (ZpmCQ_25(ORD('D'), &Zq0A4_61)) {
ZaeBJF_5(Z225, Z282, *Z226);
Z281 = ZaeBJF_3(Z225, Z282, *Z226);
} else {
Z281 = TRUE;
}
ZpmCQ_32(&Z253);
if (ZpmCQ_25(ORD('v'), &Zq0A4_61)) {
ZpmCQ_30(&Z253, *Z226);
} else {
ZpmCQ_8(&Z253, Z211);
ZpmCQ_8(&Z253, Z254);
if (ZpmCQ_25(ORD('U'), &Zq0A4_61)) {
ZpmCQ_8(&Z253, Z255);
ZpmCQ_8(&Z253, Z256);
}
if (ZpmCQ_25(ORD('V'), &Zq0A4_61)) {
ZpmCQ_8(&Z253, Z257);
ZpmCQ_8(&Z253, Z258);
}
if (ZpmCQ_25(ORD('W'), &Zq0A4_61)) {
ZpmCQ_8(&Z253, Z261);
ZpmCQ_8(&Z253, Z262);
}
if (ZpmCQ_25(ORD('X'), &Zq0A4_61)) {
ZpmCQ_8(&Z253, Z259);
ZpmCQ_8(&Z253, Z260);
}
}
if (!ZpmCQ_26(Z253) && Z281) {
ZbrRF74A_1(Z225, Z282, Z253);
}
} else {
if ((Z282 & (SET_ELEM (ZggGECF6A_2) | SET_ELEM (ZggGECF6A_3))) != 0X0L) {
ZiS8_35 = ZiS8_4;
}
if (IN(ZggGECF6A_0, Z282)) {
INC(ZiS8_40);
}
if (IN(ZggGECF6A_1, Z282)) {
INC(ZiS8_41);
}
if (IN(ZggGECF6A_2, Z282)) {
INC(ZiS8_40);
}
if (IN(ZggGECF6A_3, Z282)) {
INC(ZiS8_41);
}
if (IN(ZggGECF6A_4, Z282)) {
INC(ZiS8_40);
}
if (IN(ZggGECF6A_5, Z282)) {
INC(ZiS8_41);
}
if (IN(ZggGECF6A_6, Z282)) {
INC(ZiS8_40);
}
if (IN(ZggGECF6A_7, Z282)) {
INC(ZiS8_41);
}
if (IN(ZggGECF6A_8, Z282)) {
INC(ZiS8_40);
}
if (IN(ZggGECF6A_9, Z282)) {
INC(ZiS8_41);
}
for (Z222 = ZggGECF6A_0; Z222 <= ZggGECF6A_9; Z222 += 1) {
if (IN(Z222, Z282)) {
INC(ZggGECF6A_15.A[Z222 - 1]);
}
}
ZpmCQ_9(Z226, Z255);
ZpmCQ_9(Z226, Z256);
Z286(&frame, Z255, (STRING)"shift reduce conflict explicitly repaired at state", 50L, (LONGCARD)ZblNKKO_20);
Z286(&frame, Z256, (STRING)"reduce reduce conflict explicitly repaired at state", 51L, (LONGCARD)ZblNKKO_20);
Z286(&frame, Z259, (STRING)"shift reduce conflict dynamically repaired at state", 51L, (LONGCARD)ZblNKKO_20);
Z286(&frame, Z260, (STRING)"reduce reduce conflict dynamically repaired at state", 52L, (LONGCARD)ZblNKKO_20);
Z286(&frame, Z261, (STRING)"shift reduce conflict solved using LALR(2) at state", 51L, (LONGCARD)ZblNKKO_19);
Z286(&frame, Z262, (STRING)"reduce reduce conflict solved using LALR(2) at state", 52L, (LONGCARD)ZblNKKO_19);
Z286(&frame, Z257, (STRING)"shift reduce conflict implicitly repaired at state", 50L, (LONGCARD)ZblNKKO_17);
Z286(&frame, Z258, (STRING)"reduce reduce conflict implicitly repaired at state", 51L, (LONGCARD)ZblNKKO_17);
Z286(&frame, Z211, (STRING)"shift reduce conflict at state", 30L, (LONGCARD)ZblNKKO_16);
Z286(&frame, Z254, (STRING)"reduce reduce conflict at state", 31L, (LONGCARD)ZblNKKO_16);
}
ZpmCQ_7(&Z263);
ZpmCQ_7(&Z253);
}

static SHORTINT Z301
# ifdef HAVE_ARGS
(CARDINAL Z232)
# else
(Z232)
CARDINAL Z232;
# endif
{
SHORTINT Z283;

Z283 = ZiS8_24->A[Z232].Y0;
while (Z283 >= 0) {
{
register ZiS8_11 *W_27 = &ZiS8_27->A[Z283];

{
register ZiS8_8 *W_28 = &ZiS8_17->A[W_27->Y0];

{
register Zq0A4_120 *W_29 = &Zq0A4_95->A[W_28->Y0]->U_1.V_18.Y17;

if (W_28->Y1 == W_29->Y12) {
switch (Zq0A4_95->A[W_28->Y0]->U_1.V_1.Y0) {
case Zq0A4_20:;
return 0;
break;
case Zq0A4_21:;
{
register Zq0A4_123 *W_30 = &Zq0A4_95->A[W_28->Y0]->U_1.V_21.Y20;

if (Z232 == W_30->Y25->U_1.V_6.Y5.Y10 && !W_30->Y22 || Z232 != W_30->Y25->U_1.V_6.Y5.Y10 && W_30->Y22) {
Zq0A4_95->A[W_28->Y0]->U_1.V_19.Y18.Y21 = TRUE;
return W_28->Y0;
}
}
break;
case Zq0A4_22:;
{
register Zq0A4_124 *W_31 = &Zq0A4_95->A[W_28->Y0]->U_1.V_22.Y21;

if (ZpmCQ_25(Z232, &W_31->Y25->U_1.V_9.Y8.Y10)) {
return 0;
} else if (W_31->Y22) {
Zq0A4_95->A[W_28->Y0]->U_1.V_19.Y18.Y21 = TRUE;
return W_28->Y0;
}
}
break;
default:
break;
}
}
}
}
Z283 = W_27->Y1;
}
}
return -1;
}

static void Z289
# ifdef HAVE_ARGS
(ZpmCQ_4 Z230, Zp1PEAFD_2 *Z288)
# else
(Z230, Z288)
ZpmCQ_4 Z230;
Zp1PEAFD_2 *Z288;
# endif
{
CARDINAL Z222;
Zp1PEAFD_2 Z322;
BOOLEAN Z323;

Zp1PEAFD_4(Z288);
{
LONGCARD B_7 = ZpmCQ_17(&Z230), B_8 = ZpmCQ_18(&Z230);

if (B_7 <= B_8)
for (Z222 = B_7;; Z222 += 1) {
if (ZpmCQ_25(Z222, &Z230)) {
if (Z222 < Zq0A4_91) {
Zfb3DLQ_3(Zq0A4_93->A[Z222]->U_1.V_6.Y5.Y2, &Z322);
Z323 = IN(Zq0A4_46, Zq0A4_93->A[Z222]->U_1.V_6.Y5.Y7);
} else {
Zfb3DLQ_3(Zq0A4_93->A[Z222]->U_1.V_9.Y8.Y2, &Z322);
Z323 = IN(Zq0A4_46, Zq0A4_93->A[Z222]->U_1.V_9.Y8.Y5);
}
if (Z323) {
Zp1PEAFD_11(&Z322, 2, (Zp1PEAFD_1)(Zp1PEAFD_7(&Z322) - 1), &Z322);
}
if (Zp1PEAFD_7(Z288) + Zp1PEAFD_7(&Z322) < Zp1PEAFD_0) {
Zp1PEAFD_5(Z288, &Z322);
Zp1PEAFD_6(Z288, ' ');
}
}
if (Z222 >= B_8) break;
}
}
}

void BEGIN_Conflict ARGS ((void))
{
  static BOOLEAN has_been_called = FALSE;
  if (has_been_called) return;
  has_been_called = TRUE;
BEGIN_Sets ();
BEGIN_LR1 ();
BEGIN_rMemory ();
BEGIN_Strings ();
BEGIN_DynArray ();
BEGIN_IO ();
BEGIN_Idents ();
BEGIN_Semantic ();
BEGIN_Position ();
BEGIN_Explain ();
BEGIN_Errors ();
BEGIN_Sets ();
BEGIN_Tree ();
BEGIN_LR1 ();
BEGIN_LRk ();
BEGIN_Delta ();
BEGIN_Strings ();
BEGIN_Tree ();
BEGIN_Errors ();

for (Z222 = ZggGECF6A_0; Z222 <= ZggGECF6A_9; Z222 += 1) {
ZggGECF6A_15.A[Z222 - 1] = 0;
}
Z223 = 1;
}
