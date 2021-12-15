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

#ifndef DEFINITION_StdIO
#include "StdIO.h"
#endif

#ifndef DEFINITION_Idents
#include "Idents.h"
#endif

#ifndef DEFINITION_Position
#include "Position.h"
#endif

#ifndef DEFINITION_Errors
#include "Errors.h"
#endif

#ifndef DEFINITION_Relation
#include "Relation.h"
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

#ifndef DEFINITION_LR1
#include "LR1.h"
#endif

#ifndef DEFINITION_Tree
#include "Tree.h"
#endif

#ifndef DEFINITION_LRk
#include "LRk.h"
#endif

SHORTCARD ZiSr_7;
struct LRk_11 *ZiSr_8;
LONGINT ZiSr_9;
struct LRk_12 *ZiSr_10;
LONGINT ZiSr_11;
LONGINT ZiSr_12;

#define Z201	MAX_SHORTCARD
typedef struct S_1 {
struct S_17 {
Zq0A4_57 A[ZiSr_0 - 2 + 1];
} *Y0;
struct S_16 {
SHORTCARD A[ZiSr_0 - 2 + 1];
} *Y1;
BITSET Y2;
ZiSr_3 Y3;
struct S_15 {
SHORTCARD A[ZiSr_0 - 2 + 1];
} *Y4;
} Z202;
static LONGINT Z210;
static LONGINT Z211;
static BOOLEAN Z212;
static struct S_2 {
Z202 A[100000 + 1];
} *Z213;
static LONGINT Z214;
static struct S_3 {
CARDINAL A[100000 + 1];
} *Z215;
static LONGINT Z216;
static LONGINT Z217;
static ZpmCQ_4 Z218, Z219, Z220, Z221, Z222, Z223;
static struct S_4 {
struct S_5 {
ZiS8_5 A[1000000 + 1];
} *A[ZiSr_0 - 2 + 1];
} Z224;
static struct S_6 {
struct S_7 {
CARDINAL A[1000000 + 1];
} *A[ZiSr_0 - 2 + 1];
} Z225;
static struct S_8 {
LONGINT A[ZiSr_0 - 2 + 1];
} Z226;
static struct S_9 {
SHORTCARD A[ZiSr_0 - 2 + 1];
} Z227;
static struct S_10 {
struct S_11 {
SHORTCARD A[1000000 + 1];
} *A[ZiSr_0 - 2 + 1];
} Z228;
static struct S_12 {
SHORTCARD A[ZiSr_0 - 2 + 1];
} Z229;
static struct S_13 {
ZpmCQ_4 A[ZiSr_0 - 1 + 1];
} Z230;
static CARDINAL Z231;
static LONGINT Z232;
static BOOLEAN Z233, Z234;
static ZpmCQ_4 Z235;
static CARDINAL Z236, Z237, Z238, Z239, Z240, Z241, Z242, Z243, Z244, Z245, Z246, Z247, Z248, Z249, Z250, Z251, Z252, Z253;
static void Z254 ARGS ((CARDINAL Z255, CARDINAL Z256, CARDINAL Z136, CARDINAL Z257, ZpmCQ_4 *Z258));
static void Z270 ARGS ((Zq0A4_35 Z287, CARDINAL Z136, CARDINAL Z257, CARDINAL Z288, BITSET *Z289, ZpmCQ_4 *Z258));
static void Z292 ARGS ((CARDINAL Z290, CARDINAL Z257));
struct S_3_CompLookConstr;
static void Z298 ARGS ((CARDINAL Z255, CARDINAL Z256, CARDINAL Z136, CARDINAL Z257, ZiSr_3 *Z299));
static void Y4_303 ARGS ((struct S_3_CompLookConstr *link, ZiSr_3 *Z299, CARDINAL Z257));
struct S_3_CompLookConstr {
CARDINAL *Z255;
CARDINAL *Z256;
};
struct S_2_CompLookRuleConstr;
static void Z308 ARGS ((Zq0A4_35 Z287, CARDINAL Z136, CARDINAL Z257, ZiSr_3 *Z299));
static void Y1_303 ARGS ((struct S_2_CompLookRuleConstr *link, ZiSr_3 *Z299, CARDINAL Z257));
struct S_2_CompLookRuleConstr {
Zq0A4_35 *Z287;
CARDINAL *Z136;
};
struct S_1_CompLookNontermConstr;
static void Z318 ARGS ((CARDINAL Z290, CARDINAL Z257));
static void Z303 ARGS ((struct S_1_CompLookNontermConstr *link, ZiSr_3 *Z299, CARDINAL Z257));
struct S_1_CompLookNontermConstr {
Zq0A4_35 *Z287;
CARDINAL *Z136;
CARDINAL *Z263;
};
static void Z332 ARGS ((void));
static void Z343 ARGS ((ZfM_3 Z344, CARDINAL Z256));
static void Z348 ARGS ((ZfM_3 Z344, Zq0A4_35 Z287));
static void Z350 ARGS ((ZiSr_3 Z299));
static void Z351 ARGS ((ZiSr_3 Z299, CARDINAL Z352));
static void Z312 ARGS ((ZiSr_1 *Z207));
static void Z309 ARGS ((ZiSr_3 *Z299));
static void Z317 ARGS ((ZiSr_3 *Z299));
static void Z320 ARGS ((ZiSr_3 *Z299));
static void Z337 ARGS ((ZiSr_3 *Z299));
static void Z319 ARGS ((ZiSr_3 *Z358, ZiSr_3 Z359, CARDINAL Z257));
static void Z315 ARGS ((ZiSr_3 *Z358, ZiSr_3 Z359, CARDINAL Z257));
static void Z338 ARGS ((ZiSr_3 Z358, ZiSr_3 Z359, CARDINAL Z257));
static void Z313 ARGS ((ZiSr_3 *Z299));
static void Z311 ARGS ((ZiSr_3 *Z299));
static CARDINAL Z314 ARGS ((ZiSr_3 Z299));
static void Z364 ARGS ((void));
static void Z275 ARGS ((ADDRESS Z367, ZiS8_5 Z255));
static CARDINAL Z335 ARGS ((CARDINAL Z372));
static void Z373 ARGS ((CHAR Z374[], LONGCARD O_1, INTEGER Z375));
static void Z366 ARGS ((void));
static void Z376 ARGS ((ZiSr_3 Z299));
static void Z377 ARGS ((void));

static void Z254
# ifdef HAVE_ARGS
(CARDINAL Z255, CARDINAL Z256, CARDINAL Z136, CARDINAL Z257, ZpmCQ_4 *Z258)
# else
(Z255, Z256, Z136, Z257, Z258)
CARDINAL Z255, Z256, Z136, Z257;
ZpmCQ_4 *Z258;
# endif
{
LONGINT Z259, Z260;
CARDINAL Z261, Y5_109, Z262, Z263;
SHORTCARD Z264, Z265, Z266;
ZiS8_5 Z267;
BITSET Z206;
BOOLEAN Z268;

{
register ZiS8_7 *W_1 = &ZiS8_14->A[Z255];

{
register ZiS8_8 *W_2 = &ZiS8_17->A[Z256];

{
register Zq0A4_120 *W_3 = &Zq0A4_95->A[W_2->Y0]->U_1.V_18.Y17;

if (Z136 <= W_3->Y12) {
Z206 = 0X0L;
Z270(Zq0A4_95->A[W_2->Y0], Z136, Z257, 0L, &Z206, Z258);
{
LONGCARD B_1 = 0, B_2 = Z257 - 1;

if (B_1 <= B_2)
for (Z263 = B_1;; Z263 += 1) {
if (IN(Z263, Z206)) {
Z254(Z255, Z256, (LONGCARD)Z201, Z257 - Z263, Z258);
}
if (Z263 >= B_2) break;
}
}
} else if (W_2->Y0 <= ZpmC89LG6_4) {
ZpmCQ_32(&Z221);
ZpmCQ_12(&Z221);
ZpmCQ_14(&Z221, Zq0A4_91);
ZpmCQ_8(Z258, Z221);
} else {
if (Z257 == 1) {
ZiS8_49((SHORTCARD)Z255, Z256, &Z221);
if (!Z234) {
ZpmCQ_10(&Z221, Z230.A[Z231 - 1]);
}
ZpmCQ_8(Z258, Z221);
} else {
Y5_109 = W_3->Y16->U_1.V_9.Y8.Y8;
if (W_2->Y1 == 0) {
Z266 = Z217;
while (Z215->A[Z266] != 0) {
if (Z215->A[Z266] == Z256) {
return;
}
DEC(Z266);
}
INC(Z217);
if (Z217 == Z216) {
ZarQdhNDD_2((ADDRESS *)&Z215, &Z216, (LONGINT)sizeof (CARDINAL));
Z275((ADDRESS)Z215, (SHORTCARD)Z255);
}
Z215->A[Z217] = Z256;
{
LONGCARD B_3 = W_1->Y0, B_4 = W_1->Y0 + W_1->Y2 + W_1->Y3;

if (B_3 <= B_4)
for (Z261 = B_3;; Z261 += 1) {
{
register ZiS8_8 *W_4 = &ZiS8_17->A[Z261];

{
register Zq0A4_120 *W_5 = &Zq0A4_95->A[W_4->Y0]->U_1.V_18.Y17;

if (W_4->Y1 < W_5->Y12 && Y5_109 == W_5->Y17->A[W_4->Y1 + 1]) {
Z254(Z255, Z261, (LONGCARD)(W_4->Y1 + 2), Z257, Z258);
}
}
}
if (Z261 >= B_4) break;
}
}
DEC(Z217);
} else {
{
register ZiSr_4 *W_6 = &ZiSr_8->A[Z256 - W_1->Y0 + W_1->Y1];

if (!Z234) {
ZiS8_49((SHORTCARD)Z255, Z256, &Z221);
ZpmCQ_10(&Z221, Z230.A[Z231 - Z257]);
}
if (Z234 || !ZpmCQ_26(Z221)) {
if (W_6->Y0 == NIL) {
W_6->Y0 = (ZiSr_5 *)ZDtgCFKU_1((LONGINT)sizeof (ZiSr_5));
INC(Z236);
{
register ZiSr_5 *W_7 = W_6->Y0;

ZarQdhNDD_0((ADDRESS *)&W_7->Y1, &Z211, (LONGINT)sizeof (Zq0A4_57));
Z275((ADDRESS)W_7->Y1, (SHORTCARD)Z255);
INC(Z241);
ZarQdhNDD_0((ADDRESS *)&W_7->Y0, &Z210, (LONGINT)sizeof (SHORTCARD));
Z275((ADDRESS)W_7->Y0, (SHORTCARD)Z255);
INC(Z239);
{
SHORTCARD B_5 = 2, B_6 = ZiSr_7;

if (B_5 <= B_6)
for (Z266 = B_5;; Z266 += 1) {
W_7->Y0->A[Z266 - 2] = 0;
if (Z266 >= B_6) break;
}
}
W_7->Y2 = NIL;
}
}
{
register ZiSr_5 *W_8 = W_6->Y0;

Z268 = Z234;
Z234 = TRUE;
Z265 = Z227.A[Z257 - 2];
if (W_8->Y0->A[Z257 - 2] == 0) {
W_8->Y1->A[Z257 - 2] = (Zq0A4_57)ZiS8_48();
ZpmCQ_5(W_8->Y1->A[Z257 - 2], Zq0A4_91);
if (ZpmCQ_16(W_8->Y1->A[Z257 - 2]) == 0) {
ZblNKKO_45((STRING)"out of memory for state", 23L, (LONGCARD)ZblNKKO_14, ZmtLFGGBG_1, (LONGCARD)ZblNKKO_24, ADR (Z255));
}
INC(Z242);
INC(Z227.A[Z257 - 2]);
Z264 = Z227.A[Z257 - 2];
if (Z264 >= (CARDINAL)Z226.A[Z257 - 2]) {
Z260 = Z226.A[Z257 - 2];
ZarQdhNDD_2((ADDRESS *)&Z224.A[Z257 - 2], &Z260, (LONGINT)sizeof (ZiS8_5));
Z275((ADDRESS)Z224.A[Z257 - 2], (SHORTCARD)Z255);
ZarQdhNDD_2((ADDRESS *)&Z225.A[Z257 - 2], &Z226.A[Z257 - 2], (LONGINT)sizeof (CARDINAL));
Z275((ADDRESS)Z225.A[Z257 - 2], (SHORTCARD)Z255);
}
Z225.A[Z257 - 2]->A[Z264] = Z256;
Z224.A[Z257 - 2]->A[Z264] = Z255;
W_8->Y0->A[Z257 - 2] = Z264;
{
register ZiS8_9 *W_9 = &ZiS8_20->A[Z256 - W_1->Y0 + W_1->Y1];

INC(Z217);
if (Z217 == Z216) {
ZarQdhNDD_2((ADDRESS *)&Z215, &Z216, (LONGINT)sizeof (CARDINAL));
Z275((ADDRESS)Z215, (SHORTCARD)Z255);
}
Z215->A[Z217] = 0;
{
SHORTCARD B_7 = 1, B_8 = W_9->Y3;

if (B_7 <= B_8)
for (Z267 = B_7;; Z267 += 1) {
Z259 = W_9->Y1->A[Z267 - 1];
{
register ZiS8_7 *W_10 = &ZiS8_14->A[Z259];

{
LONGCARD B_9 = W_10->Y0, B_10 = W_10->Y0 + W_10->Y2 + W_10->Y3;

if (B_9 <= B_10)
for (Z261 = B_9;; Z261 += 1) {
{
register ZiS8_8 *W_11 = &ZiS8_17->A[Z261];

{
register Zq0A4_120 *W_12 = &Zq0A4_95->A[W_11->Y0]->U_1.V_18.Y17;

if (W_11->Y1 < W_12->Y12 && Y5_109 == W_12->Y17->A[W_11->Y1 + 1]) {
Z254((LONGCARD)Z259, Z261, (LONGCARD)(W_11->Y1 + 2), Z257, W_8->Y1->A[Z257 - 2]);
}
}
}
if (Z261 >= B_10) break;
}
}
}
if (Z267 >= B_8) break;
}
}
DEC(Z217);
}
if (W_8->Y0->A[Z257 - 2] == Z264) {
for (;;) {
Z261 = Z225.A[Z257 - 2]->A[Z227.A[Z257 - 2]];
Z259 = Z224.A[Z257 - 2]->A[Z227.A[Z257 - 2]];
DEC(Z227.A[Z257 - 2]);
{
register ZiS8_7 *W_13 = &ZiS8_14->A[Z259];

Z262 = Z261 - W_13->Y0 + W_13->Y1;
ZiSr_8->A[Z262].Y0->Y0->A[Z257 - 2] = Z201;
}
if (Z261 == Z256) {
goto EXIT_1;
}
ZpmCQ_30(ZiSr_8->A[Z262].Y0->Y1->A[Z257 - 2], *W_8->Y1->A[Z257 - 2]);
} EXIT_1:;
}
}
if (Z265 > 0) {
Z261 = Z225.A[Z257 - 2]->A[Z265];
Z259 = Z224.A[Z257 - 2]->A[Z265];
{
register ZiS8_7 *W_14 = &ZiS8_14->A[Z259];

Z262 = Z261 - W_14->Y0 + W_14->Y1;
ZiSr_8->A[Z262].Y0->Y0->A[Z257 - 2] = ZdaDDAD7_3((LONGINT)ZiSr_8->A[Z262].Y0->Y0->A[Z257 - 2], (LONGINT)W_8->Y0->A[Z257 - 2]);
}
}
Z234 = Z268;
ZpmCQ_8(Z258, *W_8->Y1->A[Z257 - 2]);
}
}
}
}
}
}
}
}
}
}

static void Z270
# ifdef HAVE_ARGS
(Zq0A4_35 Z287, CARDINAL Z136, CARDINAL Z257, CARDINAL Z288, BITSET *Z289, ZpmCQ_4 *Z258)
# else
(Z287, Z136, Z257, Z288, Z289, Z258)
Zq0A4_35 Z287;
CARDINAL Z136, Z257, Z288;
BITSET *Z289;
ZpmCQ_4 *Z258;
# endif
{
CARDINAL Z290, Z263;
BOOLEAN Z268;

{
register Zq0A4_120 *W_15 = &Z287->U_1.V_18.Y17;

for (;;) {
for (;;) {
if (Z136 <= W_15->Y12) {
Z290 = W_15->Y17->A[Z136];
if (Z290 < Zq0A4_91) {
if (Z234 || ZpmCQ_25(Z290, &Z230.A[Z231 - Z257])) {
if (Z257 == 1) {
ZpmCQ_13(Z258, Z290);
} else {
if (Z290 != 0) {
INC(Z136);
DEC(Z257);
INC(Z288);
goto EXIT_3;
} else {
DEC(Z257);
INC(Z288);
goto EXIT_3;
}
}
}
} else {
if (Z257 == 1) {
ZiS8_57(W_15->Y14, (SHORTCARD)Z136, Z258);
if (ZpmCQ_25(Zq0A4_91, Z258)) {
ZpmCQ_14(Z258, Zq0A4_91);
INCL(*Z289, Z288);
}
} else {
{
register Zq0A4_111 *W_16 = &Zq0A4_93->A[Z290]->U_1.V_9.Y8;

if (!Z234) {
ZpmCQ_30(&Z221, Z230.A[Z231 - Z257]);
ZpmCQ_10(&Z221, W_16->Y10);
}
if (Z234 || !ZpmCQ_26(Z221)) {
{
register Z202 *W_17 = &Z213->A[Z290 - Zq0A4_89];

Z268 = Z234;
Z234 = TRUE;
Z292(Z290, Z257);
Z234 = Z268;
ZpmCQ_8(Z258, *W_17->Y0->A[Z257 - 2]);
{
LONGCARD B_11 = 1, B_12 = Z257 - 1;

if (B_11 <= B_12)
for (Z263 = B_11;; Z263 += 1) {
if (IN(Z263, W_17->Y2)) {
Z270(Z287, Z136 + 1, Z257 - Z263, Z288 + Z263, Z289, Z258);
}
if (Z263 >= B_12) break;
}
}
}
}
if (IN(Zq0A4_50, W_16->Y5)) {
INC(Z136);
goto EXIT_3;
}
}
}
}
} else if (W_15->Y14 <= ZpmC89LG6_4) {
ZblNKKO_44((STRING)"LRk internal problem 2: Rule <= RootCount", 41L, (LONGCARD)ZblNKKO_17, ZmtLFGGBG_1);
} else {
INCL(*Z289, Z288);
}
return;
} EXIT_3:;
} EXIT_2:;
}
}

static void Z292
# ifdef HAVE_ARGS
(CARDINAL Z290, CARDINAL Z257)
# else
(Z290, Z257)
CARDINAL Z290, Z257;
# endif
{
SHORTCARD Z294, Z295, Z264;
Zq0A4_35 Z287;
CARDINAL Z136, Z266, Z263;

{
register Zq0A4_111 *W_18 = &Zq0A4_93->A[Z290]->U_1.V_9.Y8;

{
register Z202 *W_19 = &Z213->A[Z290 - Zq0A4_89];

if (W_19->Y1 == NIL) {
ZarQdhNDD_0((ADDRESS *)&W_19->Y0, &Z211, (LONGINT)sizeof (Zq0A4_57));
Z275((ADDRESS)W_19->Y0, 0);
INC(Z241);
W_19->Y2 = 0X0L;
ZarQdhNDD_0((ADDRESS *)&W_19->Y1, &Z210, (LONGINT)sizeof (SHORTCARD));
Z275((ADDRESS)W_19->Y1, 0);
INC(Z239);
{
LONGCARD B_13 = 2, B_14 = ZiSr_7;

if (B_13 <= B_14)
for (Z266 = B_13;; Z266 += 1) {
W_19->Y1->A[Z266 - 2] = 0;
if (Z266 >= B_14) break;
}
}
}
if (Z257 == 1) {
if (IN(Zq0A4_50, W_18->Y5)) {
INCL(W_19->Y2, 0);
}
return;
}
if (W_19->Y1->A[Z257 - 2] == 0) {
W_19->Y0->A[Z257 - 2] = (Zq0A4_57)ZiS8_48();
ZpmCQ_5(W_19->Y0->A[Z257 - 2], Zq0A4_91);
if (ZpmCQ_16(W_19->Y0->A[Z257 - 2]) == 0) {
ZblNKKO_44((STRING)"out of memory", 13L, (LONGCARD)ZblNKKO_14, ZmtLFGGBG_1);
}
INC(Z242);
INC(Z229.A[Z257 - 2]);
Z264 = Z229.A[Z257 - 2];
Z228.A[Z257 - 2]->A[Z264] = Z290;
W_19->Y1->A[Z257 - 2] = Z264;
Z287 = W_18->Y4;
while (Zq0A4_155(Z287, Zq0A4_18)) {
{
register Zq0A4_120 *W_20 = &Z287->U_1.V_18.Y17;

Z136 = 1;
for (;;) {
if (Z136 > W_20->Y12) {
if (W_20->Y14 <= ZpmC89LG6_4) {
ZblNKKO_44((STRING)"LRk internal problem 3: Rule <= RootCount", 41L, (LONGCARD)ZblNKKO_17, ZmtLFGGBG_1);
} else {
INCL(W_19->Y2, 0);
goto EXIT_4;
}
}
Z294 = W_20->Y17->A[Z136];
if (Z294 < Zq0A4_91) {
Z270(Z287, Z136 + 1, Z257 - 1, 1L, &W_19->Y2, W_19->Y0->A[Z257 - 2]);
goto EXIT_4;
} else {
Z292((LONGCARD)Z294, Z257 - 1);
{
LONGCARD B_15 = 1, B_16 = Z257 - 2;

if (B_15 <= B_16)
for (Z263 = B_15;; Z263 += 1) {
if (IN(Z263, Z213->A[Z294 - Zq0A4_89].Y2)) {
Z270(Z287, Z136 + 1, Z257 - Z263, Z263, &W_19->Y2, W_19->Y0->A[Z257 - 2]);
}
if (Z263 >= B_16) break;
}
}
if (IN(0, Z213->A[Z294 - Zq0A4_89].Y2)) {
INC(Z136);
} else {
goto EXIT_4;
}
}
} EXIT_4:;
Z287 = W_20->Y1;
}
}
Z287 = W_18->Y4;
while (Zq0A4_155(Z287, Zq0A4_18)) {
{
register Zq0A4_120 *W_21 = &Z287->U_1.V_18.Y17;

Z136 = 1;
for (;;) {
if (Z136 > W_21->Y12) {
if (W_21->Y14 <= ZpmC89LG6_4) {
ZblNKKO_44((STRING)"LRk internal problem 4: Rule <= RootCount", 41L, (LONGCARD)ZblNKKO_17, ZmtLFGGBG_1);
} else {
goto EXIT_5;
}
}
Z294 = W_21->Y17->A[Z136];
if (Z294 < Zq0A4_91) {
goto EXIT_5;
} else {
Z292((LONGCARD)Z294, Z257);
W_19->Y1->A[Z257 - 2] = ZdaDDAD7_3((LONGINT)W_19->Y1->A[Z257 - 2], (LONGINT)Z213->A[Z294 - Zq0A4_89].Y1->A[Z257 - 2]);
ZpmCQ_8(W_19->Y0->A[Z257 - 2], *Z213->A[Z294 - Zq0A4_89].Y0->A[Z257 - 2]);
{
LONGCARD B_17 = 1, B_18 = Z257 - 1;

if (B_17 <= B_18)
for (Z263 = B_17;; Z263 += 1) {
if (IN(Z263, Z213->A[Z294 - Zq0A4_89].Y2)) {
Z270(Z287, Z136 + 1, Z257 - Z263, Z263, &W_19->Y2, W_19->Y0->A[Z257 - 2]);
}
if (Z263 >= B_18) break;
}
}
if (IN(0, Z213->A[Z294 - Zq0A4_89].Y2)) {
INC(Z136);
} else {
goto EXIT_5;
}
}
} EXIT_5:;
Z287 = W_21->Y1;
}
}
if (W_19->Y1->A[Z257 - 2] == Z264) {
for (;;) {
Z294 = Z228.A[Z257 - 2]->A[Z229.A[Z257 - 2]];
DEC(Z229.A[Z257 - 2]);
{
register Z202 *W_22 = &Z213->A[Z294 - Zq0A4_89];

W_22->Y1->A[Z257 - 2] = Z201;
if (Z294 == Z290) {
goto EXIT_6;
}
Z287 = Zq0A4_93->A[Z294]->U_1.V_9.Y8.Y4;
while (Zq0A4_155(Z287, Zq0A4_18)) {
{
register Zq0A4_120 *W_23 = &Z287->U_1.V_18.Y17;

if (W_23->Y12 > 0) {
Z295 = W_23->Y17->A[1];
if (Z295 > Zq0A4_91) {
ZpmCQ_8(W_22->Y0->A[Z257 - 2], *Z213->A[Z295 - Zq0A4_89].Y0->A[Z257 - 2]);
if (W_23->Y12 == 1) {
W_22->Y2 = W_22->Y2 | Z213->A[Z295 - Zq0A4_89].Y2;
} else {
{
LONGCARD B_19 = 0, B_20 = Z257 - 1;

if (B_19 <= B_20)
for (Z263 = B_19;; Z263 += 1) {
if (IN(Z263, Z213->A[Z295 - Zq0A4_89].Y2)) {
Z270(Z287, 2L, Z257 - Z263, Z263, &W_22->Y2, W_22->Y0->A[Z257 - 2]);
}
if (Z263 >= B_20) break;
}
}
}
}
}
Z287 = W_23->Y1;
}
}
}
} EXIT_6:;
}
}
}
}
}

static void Y4_303
# ifdef HAVE_ARGS
(struct S_3_CompLookConstr *link, ZiSr_3 *Z299, CARDINAL Z257)
# else
(link, Z299, Z257)
struct S_3_CompLookConstr *link;
ZiSr_3 *Z299;
CARDINAL Z257;
# endif
{
CARDINAL Z266;

{
register ZiSr_3 *W_24 = Z299;

if (W_24->Y1 != NIL && Z257 > 1) {
{
LONGCARD B_21 = 0, B_22 = W_24->Y4 - W_24->Y3;

if (B_21 <= B_22)
for (Z266 = B_21;; Z266 += 1) {
if (W_24->Y1->A[Z266] != NIL) {
Y4_303(link, W_24->Y1->A[Z266], Z257 - 1);
}
if (Z266 >= B_22) break;
}
}
}
if (ZpmCQ_25(Zq0A4_91, &W_24->Y0)) {
ZpmCQ_14(&W_24->Y0, Zq0A4_91);
Z298(*link->Z255, *link->Z256, (LONGCARD)Z201, Z257, Z299);
}
}
}

static void Z298
# ifdef HAVE_ARGS
(CARDINAL Z255, CARDINAL Z256, CARDINAL Z136, CARDINAL Z257, ZiSr_3 *Z299)
# else
(Z255, Z256, Z136, Z257, Z299)
CARDINAL Z255, Z256, Z136, Z257;
ZiSr_3 *Z299;
# endif
{
LONGINT Z259, Z168;
CARDINAL Z261, Y2_109, Z300, Z262;
SHORTCARD Z264, Z265, Z266;
ZiS8_5 Z267;
BOOLEAN Z268, Z301, Z302, Y3_76;
struct S_3_CompLookConstr frame;

frame.Z255 = &Z255;
frame.Z256 = &Z256;
{
register ZiS8_7 *W_25 = &ZiS8_14->A[Z255];

{
register ZiS8_8 *W_26 = &ZiS8_17->A[Z256];

{
register Zq0A4_120 *W_27 = &Zq0A4_95->A[W_26->Y0]->U_1.V_18.Y17;

if (Z136 <= W_27->Y12) {
Z308(Zq0A4_95->A[W_26->Y0], Z136, Z257, Z299);
Y4_303(&frame, Z299, Z257);
} else if (W_26->Y0 <= ZpmC89LG6_4) {
ZpmCQ_32(&Z221);
ZpmCQ_12(&Z221);
ZpmCQ_14(&Z221, Zq0A4_91);
if (Z257 == 1) {
ZpmCQ_8(&Z299->Y0, Z221);
} else {
{
register ZiSr_3 *W_28 = Z299;

if (W_28->Y1 == NIL) {
Z309(Z299);
} else if (W_28->Y2 != NIL) {
Z311(Z299);
}
{
SHORTCARD B_23 = 0, B_24 = W_28->Y4 - W_28->Y3;

if (B_23 <= B_24)
for (Z266 = B_23;; Z266 += 1) {
if (W_28->Y1->A[Z266] == NIL) {
Z312(&W_28->Y1->A[Z266]);
}
ZpmCQ_8(&W_28->Y1->A[Z266]->Y0, Z221);
Z298(Z255, Z256, Z136, Z257 - 1, W_28->Y1->A[Z266]);
if (Z266 >= B_24) break;
}
}
}
}
} else {
if (Z257 == 1) {
ZiS8_49((SHORTCARD)Z255, Z256, &Z221);
if (!Z234) {
ZpmCQ_10(&Z221, Z230.A[Z231 - 1]);
}
ZpmCQ_8(&Z299->Y0, Z221);
} else {
Y2_109 = W_27->Y16->U_1.V_9.Y8.Y8;
if (W_26->Y1 == 0) {
Z266 = Z217;
while (Z215->A[Z266] != 0) {
if (Z215->A[Z266] == Z256) {
return;
}
DEC(Z266);
}
INC(Z217);
if (Z217 == Z216) {
ZarQdhNDD_2((ADDRESS *)&Z215, &Z216, (LONGINT)sizeof (CARDINAL));
Z275((ADDRESS)Z215, (SHORTCARD)Z255);
}
Z215->A[Z217] = Z256;
{
LONGCARD B_25 = W_25->Y0, B_26 = W_25->Y0 + W_25->Y2 + W_25->Y3;

if (B_25 <= B_26)
for (Z261 = B_25;; Z261 += 1) {
{
register ZiS8_8 *W_29 = &ZiS8_17->A[Z261];

{
register Zq0A4_120 *W_30 = &Zq0A4_95->A[W_29->Y0]->U_1.V_18.Y17;

if (W_29->Y1 < W_30->Y12 && Y2_109 == W_30->Y17->A[W_29->Y1 + 1]) {
Z298(Z255, Z261, (LONGCARD)(W_29->Y1 + 2), Z257, Z299);
}
}
}
if (Z261 >= B_26) break;
}
}
DEC(Z217);
} else {
{
register ZiSr_4 *W_31 = &ZiSr_8->A[Z256 - W_25->Y0 + W_25->Y1];

if (!Z234) {
ZiS8_49((SHORTCARD)Z255, Z256, &Z221);
ZpmCQ_10(&Z221, Z230.A[Z231 - Z257]);
}
if (Z234 || !ZpmCQ_26(Z221)) {
if (W_31->Y0 == NIL) {
W_31->Y0 = (ZiSr_5 *)ZDtgCFKU_1((LONGINT)sizeof (ZiSr_5));
INC(Z236);
{
register ZiSr_5 *W_32 = W_31->Y0;

W_32->Y0 = NIL;
W_32->Y2 = NIL;
}
}
{
register ZiSr_5 *W_33 = W_31->Y0;

if (W_33->Y2 == NIL) {
ZarQdhNDD_0((ADDRESS *)&W_33->Y2, &Z210, (LONGINT)sizeof (SHORTCARD));
Z275((ADDRESS)W_33->Y2, (SHORTCARD)Z255);
INC(Z240);
{
SHORTCARD B_27 = 2, B_28 = ZiSr_7;

if (B_27 <= B_28)
for (Z266 = B_27;; Z266 += 1) {
W_33->Y2->A[Z266 - 2] = 0;
if (Z266 >= B_28) break;
}
}
Z312(&W_33->Y3);
ZiS8_49((SHORTCARD)Z255, Z256, &W_33->Y3->Y0);
Z309(W_33->Y3);
}
Z268 = Z234;
Z234 = TRUE;
Z265 = Z227.A[Z257 - 2];
if (W_33->Y2->A[Z257 - 2] == 0) {
INC(Z227.A[Z257 - 2]);
Z264 = Z227.A[Z257 - 2];
if (Z264 >= (CARDINAL)Z226.A[Z257 - 2]) {
Z168 = Z226.A[Z257 - 2];
ZarQdhNDD_2((ADDRESS *)&Z224.A[Z257 - 2], &Z168, (LONGINT)sizeof (ZiS8_5));
Z275((ADDRESS)Z224.A[Z257 - 2], (SHORTCARD)Z255);
ZarQdhNDD_2((ADDRESS *)&Z225.A[Z257 - 2], &Z226.A[Z257 - 2], (LONGINT)sizeof (CARDINAL));
Z275((ADDRESS)Z225.A[Z257 - 2], (SHORTCARD)Z255);
}
Z225.A[Z257 - 2]->A[Z264] = Z256;
Z224.A[Z257 - 2]->A[Z264] = Z255;
W_33->Y2->A[Z257 - 2] = Z264;
{
register ZiS8_9 *W_34 = &ZiS8_20->A[Z256 - W_25->Y0 + W_25->Y1];

INC(Z217);
if (Z217 == Z216) {
ZarQdhNDD_2((ADDRESS *)&Z215, &Z216, (LONGINT)sizeof (CARDINAL));
Z275((ADDRESS)Z215, (SHORTCARD)Z255);
}
Z215->A[Z217] = 0;
{
SHORTCARD B_29 = 1, B_30 = W_34->Y3;

if (B_29 <= B_30)
for (Z267 = B_29;; Z267 += 1) {
Z259 = W_34->Y1->A[Z267 - 1];
{
register ZiS8_7 *W_35 = &ZiS8_14->A[Z259];

{
LONGCARD B_31 = W_35->Y0, B_32 = W_35->Y0 + W_35->Y2 + W_35->Y3;

if (B_31 <= B_32)
for (Z261 = B_31;; Z261 += 1) {
{
register ZiS8_8 *W_36 = &ZiS8_17->A[Z261];

{
register Zq0A4_120 *W_37 = &Zq0A4_95->A[W_36->Y0]->U_1.V_18.Y17;

if (W_36->Y1 < W_37->Y12 && Y2_109 == W_37->Y17->A[W_36->Y1 + 1]) {
Z298((LONGCARD)Z259, Z261, (LONGCARD)(W_36->Y1 + 2), Z257, W_33->Y3);
}
}
}
if (Z261 >= B_32) break;
}
}
}
if (Z267 >= B_30) break;
}
}
DEC(Z217);
}
if (W_33->Y2->A[Z257 - 2] == Z264) {
Z313(W_33->Y3);
INC1(Z245, Z314(*W_33->Y3));
INC(Z251);
for (;;) {
Z261 = Z225.A[Z257 - 2]->A[Z227.A[Z257 - 2]];
Z259 = Z224.A[Z257 - 2]->A[Z227.A[Z257 - 2]];
DEC(Z227.A[Z257 - 2]);
{
register ZiS8_7 *W_38 = &ZiS8_14->A[Z259];

Z262 = Z261 - W_38->Y0 + W_38->Y1;
ZiSr_8->A[Z262].Y0->Y2->A[Z257 - 2] = Z201;
}
if (Z261 == Z256) {
goto EXIT_7;
}
Z315(ZiSr_8->A[Z262].Y0->Y3, *W_33->Y3, Z257);
Z313(ZiSr_8->A[Z262].Y0->Y3);
INC1(Z245, Z314(*ZiSr_8->A[Z262].Y0->Y3));
INC(Z251);
} EXIT_7:;
}
}
if (Z265 > 0) {
Z261 = Z225.A[Z257 - 2]->A[Z265];
Z259 = Z224.A[Z257 - 2]->A[Z265];
{
register ZiS8_7 *W_39 = &ZiS8_14->A[Z259];

Z262 = Z261 - W_39->Y0 + W_39->Y1;
ZiSr_8->A[Z262].Y0->Y2->A[Z257 - 2] = ZdaDDAD7_3((LONGINT)ZiSr_8->A[Z262].Y0->Y2->A[Z257 - 2], (LONGINT)W_33->Y2->A[Z257 - 2]);
}
}
Z234 = Z268;
Z315(Z299, *W_33->Y3, Z257);
}
}
}
}
}
}
}
}
}
}

static void Y1_303
# ifdef HAVE_ARGS
(struct S_2_CompLookRuleConstr *link, ZiSr_3 *Z299, CARDINAL Z257)
# else
(link, Z299, Z257)
struct S_2_CompLookRuleConstr *link;
ZiSr_3 *Z299;
CARDINAL Z257;
# endif
{
CARDINAL Z266, Z263;

{
register ZiSr_3 *W_40 = Z299;

if (W_40->Y1 != NIL && Z257 > 1) {
if (W_40->Y2 == NIL) {
{
LONGCARD B_33 = 0, B_34 = W_40->Y4 - W_40->Y3;

if (B_33 <= B_34)
for (Z266 = B_33;; Z266 += 1) {
if (W_40->Y1->A[Z266] != NIL && (Z234 || ZpmCQ_25(Z266 + W_40->Y3, &Z230.A[Z231 - Z257]))) {
Y1_303(link, W_40->Y1->A[Z266], Z257 - 1);
}
if (Z266 >= B_34) break;
}
}
} else {
Z266 = 0;
do {
Z263 = W_40->Y2->A[Z266];
if (Z234 || ZpmCQ_25(Z263, &Z230.A[Z231 - Z257])) {
Y1_303(link, W_40->Y1->A[Z266], Z257 - 1);
}
INC(Z266);
} while (!(Z263 == W_40->Y4));
}
}
if (ZpmCQ_25(Zq0A4_91, &W_40->Y0)) {
ZpmCQ_14(&W_40->Y0, Zq0A4_91);
Z308(*link->Z287, *link->Z136 + 1, Z257, Z299);
}
}
}

static void Z308
# ifdef HAVE_ARGS
(Zq0A4_35 Z287, CARDINAL Z136, CARDINAL Z257, ZiSr_3 *Z299)
# else
(Z287, Z136, Z257, Z299)
Zq0A4_35 Z287;
CARDINAL Z136, Z257;
ZiSr_3 *Z299;
# endif
{
CARDINAL Z290;
BOOLEAN Z268;
ZiSr_3 Z316;
BOOLEAN Z206;
struct S_2_CompLookRuleConstr frame;

frame.Z287 = &Z287;
frame.Z136 = &Z136;
{
register Zq0A4_120 *W_41 = &Z287->U_1.V_18.Y17;

{
register ZiSr_3 *W_42 = Z299;

if (Z136 <= W_41->Y12) {
Z290 = W_41->Y17->A[Z136];
if (Z290 < Zq0A4_91) {
if (Z234 || ZpmCQ_25(Z290, &Z230.A[Z231 - Z257])) {
ZpmCQ_13(&W_42->Y0, Z290);
if (Z257 > 1) {
if (W_42->Y1 == NIL) {
Z309(Z299);
} else {
if (W_42->Y2 != NIL) {
Z311(Z299);
}
if (Z290 < Z299->Y3 || Z299->Y4 < Z290) {
Z317(Z299);
}
}
if (W_42->Y1->A[Z290 - W_42->Y3] == NIL) {
Z312(&W_42->Y1->A[Z290 - W_42->Y3]);
}
if (Z290 != 0) {
Z308(Z287, Z136 + 1, Z257 - 1, W_42->Y1->A[Z290 - W_42->Y3]);
} else {
Z308(Z287, Z136, Z257 - 1, W_42->Y1->A[Z290 - W_42->Y3]);
}
}
}
} else {
if (Z257 == 1) {
ZiS8_57(W_41->Y14, (SHORTCARD)Z136, &W_42->Y0);
} else {
if (!Z234) {
ZpmCQ_32(&Z221);
ZiS8_57(W_41->Y14, (SHORTCARD)Z136, &Z221);
Z206 = ZpmCQ_25(Zq0A4_91, &Z221);
ZpmCQ_10(&Z221, Z230.A[Z231 - Z257]);
}
if (Z234 || !ZpmCQ_26(Z221)) {
Z268 = Z234;
Z234 = TRUE;
Z318(Z290, Z257);
Z234 = Z268;
if (Z136 == W_41->Y12) {
Z315(Z299, Z213->A[Z290 - Zq0A4_89].Y3, Z257);
} else {
ZpmCQ_5(&Z316.Y0, Zq0A4_91);
Z316.Y1 = NIL;
Z316.Y2 = NIL;
Z319(&Z316, Z213->A[Z290 - Zq0A4_89].Y3, Z257);
Y1_303(&frame, &Z316, Z257);
Z315(Z299, Z316, Z257);
Z320(&Z316);
}
} else if (Z206) {
ZpmCQ_13(&W_42->Y0, Zq0A4_91);
}
}
}
} else if (W_41->Y14 <= ZpmC89LG6_4) {
ZblNKKO_44((STRING)"LRk internal problem 6: Rule <= RootCount", 41L, (LONGCARD)ZblNKKO_17, ZmtLFGGBG_1);
} else {
ZpmCQ_13(&W_42->Y0, Zq0A4_91);
}
}
}
}

static void Z303
# ifdef HAVE_ARGS
(struct S_1_CompLookNontermConstr *link, ZiSr_3 *Z299, CARDINAL Z257)
# else
(link, Z299, Z257)
struct S_1_CompLookNontermConstr *link;
ZiSr_3 *Z299;
CARDINAL Z257;
# endif
{
CARDINAL Z266;

{
register ZiSr_3 *W_43 = Z299;

if (W_43->Y1 != NIL && Z257 > 1) {
if (W_43->Y2 == NIL) {
{
LONGCARD B_35 = 0, B_36 = W_43->Y4 - W_43->Y3;

if (B_35 <= B_36)
for (Z266 = B_35;; Z266 += 1) {
if (W_43->Y1->A[Z266] != NIL) {
Z303(link, W_43->Y1->A[Z266], Z257 - 1);
{
register ZiSr_3 *W_44 = W_43->Y1->A[Z266];

if (ZpmCQ_25(Zq0A4_91, &W_44->Y0)) {
ZpmCQ_14(&W_44->Y0, Zq0A4_91);
Z308(*link->Z287, *link->Z136 + 1, Z257 - 1, Z299->Y1->A[Z266]);
}
}
}
if (Z266 >= B_36) break;
}
}
} else {
Z266 = 0;
do {
*link->Z263 = W_43->Y2->A[Z266];
Z303(link, W_43->Y1->A[Z266], Z257 - 1);
{
register ZiSr_3 *W_45 = W_43->Y1->A[Z266];

if (ZpmCQ_25(Zq0A4_91, &W_45->Y0)) {
ZpmCQ_14(&W_45->Y0, Zq0A4_91);
Z308(*link->Z287, *link->Z136 + 1, Z257 - 1, Z299->Y1->A[Z266]);
}
}
INC(Z266);
} while (!(*link->Z263 == W_43->Y4));
}
}
}
}

static void Z318
# ifdef HAVE_ARGS
(CARDINAL Z290, CARDINAL Z257)
# else
(Z290, Z257)
CARDINAL Z290, Z257;
# endif
{
SHORTCARD Z294, Z295, Z264;
Zq0A4_35 Z287;
CARDINAL Z136, Z266, Z263;
ZiSr_3 Z316;
struct S_1_CompLookNontermConstr frame;

frame.Z287 = &Z287;
frame.Z136 = &Z136;
frame.Z263 = &Z263;
{
register Zq0A4_111 *W_46 = &Zq0A4_93->A[Z290]->U_1.V_9.Y8;

{
register Z202 *W_47 = &Z213->A[Z290 - Zq0A4_89];

if (W_47->Y4 == NIL) {
INC(Z237);
ZpmCQ_5(&W_47->Y3.Y0, Zq0A4_91);
if (ZpmCQ_16(&W_47->Y3.Y0) == 0) {
ZblNKKO_44((STRING)"out of memory", 13L, (LONGCARD)ZblNKKO_14, ZmtLFGGBG_1);
}
ZpmCQ_30(&W_47->Y3.Y0, W_46->Y10);
Z309(&W_47->Y3);
ZarQdhNDD_0((ADDRESS *)&W_47->Y4, &Z210, (LONGINT)sizeof (SHORTCARD));
Z275((ADDRESS)W_47->Y4, 0);
INC(Z240);
{
LONGCARD B_37 = 2, B_38 = ZiSr_7;

if (B_37 <= B_38)
for (Z266 = B_37;; Z266 += 1) {
W_47->Y4->A[Z266 - 2] = 0;
if (Z266 >= B_38) break;
}
}
}
if (Z257 == 1) {
return;
}
if (W_47->Y4->A[Z257 - 2] == 0) {
INC(Z229.A[Z257 - 2]);
Z264 = Z229.A[Z257 - 2];
Z228.A[Z257 - 2]->A[Z264] = Z290;
W_47->Y4->A[Z257 - 2] = Z264;
ZpmCQ_5(&Z316.Y0, Zq0A4_91);
Z316.Y1 = NIL;
Z316.Y2 = NIL;
Z287 = W_46->Y4;
while (Zq0A4_155(Z287, Zq0A4_18)) {
{
register Zq0A4_120 *W_48 = &Z287->U_1.V_18.Y17;

Z136 = 1;
for (;;) {
if (Z136 > W_48->Y12) {
if (W_48->Y14 <= ZpmC89LG6_4) {
ZblNKKO_44((STRING)"LRk internal problem 7: Rule <= RootCount", 41L, (LONGCARD)ZblNKKO_17, ZmtLFGGBG_1);
} else {
ZpmCQ_13(&W_47->Y3.Y0, Zq0A4_91);
goto EXIT_8;
}
}
Z294 = W_48->Y17->A[Z136];
if (Z294 < Zq0A4_91) {
Z308(Z287, Z136, Z257, &W_47->Y3);
goto EXIT_8;
} else if (Z136 == W_48->Y12) {
goto EXIT_8;
} else {
Z318((LONGCARD)Z294, Z257 - 1);
Z319(&Z316, Z213->A[Z294 - Zq0A4_89].Y3, Z257 - 1);
Z303(&frame, &Z316, Z257);
if (IN(Zq0A4_50, Zq0A4_93->A[Z294]->U_1.V_9.Y8.Y5)) {
ZpmCQ_14(&Z316.Y0, Zq0A4_91);
Z315(&W_47->Y3, Z316, Z257);
INC(Z136);
} else {
Z315(&W_47->Y3, Z316, Z257);
goto EXIT_8;
}
}
} EXIT_8:;
Z287 = W_48->Y1;
}
}
Z287 = W_46->Y4;
while (Zq0A4_155(Z287, Zq0A4_18)) {
{
register Zq0A4_120 *W_49 = &Z287->U_1.V_18.Y17;

Z136 = 1;
for (;;) {
if (Z136 > W_49->Y12) {
if (W_49->Y14 <= ZpmC89LG6_4) {
ZblNKKO_44((STRING)"LRk internal problem 8: Rule <= RootCount", 41L, (LONGCARD)ZblNKKO_17, ZmtLFGGBG_1);
} else {
goto EXIT_9;
}
}
Z294 = W_49->Y17->A[Z136];
if (Z294 < Zq0A4_91) {
goto EXIT_9;
} else {
Z318((LONGCARD)Z294, Z257);
W_47->Y4->A[Z257 - 2] = ZdaDDAD7_3((LONGINT)W_47->Y4->A[Z257 - 2], (LONGINT)Z213->A[Z294 - Zq0A4_89].Y4->A[Z257 - 2]);
if (Z136 == W_49->Y12) {
Z315(&W_47->Y3, Z213->A[Z294 - Zq0A4_89].Y3, Z257);
goto EXIT_9;
} else {
Z319(&Z316, Z213->A[Z294 - Zq0A4_89].Y3, Z257);
Z303(&frame, &Z316, Z257);
if (IN(Zq0A4_50, Zq0A4_93->A[Z294]->U_1.V_9.Y8.Y5)) {
ZpmCQ_14(&Z316.Y0, Zq0A4_91);
Z315(&W_47->Y3, Z316, Z257);
INC(Z136);
} else {
Z315(&W_47->Y3, Z316, Z257);
goto EXIT_9;
}
}
}
} EXIT_9:;
Z287 = W_49->Y1;
}
}
if (W_47->Y4->A[Z257 - 2] == Z264) {
Z313(&W_47->Y3);
for (;;) {
Z294 = Z228.A[Z257 - 2]->A[Z229.A[Z257 - 2]];
DEC(Z229.A[Z257 - 2]);
{
register Z202 *W_50 = &Z213->A[Z294 - Zq0A4_89];

W_50->Y4->A[Z257 - 2] = Z201;
if (Z294 == Z290) {
goto EXIT_10;
}
Z287 = Zq0A4_93->A[Z294]->U_1.V_9.Y8.Y4;
while (Zq0A4_155(Z287, Zq0A4_18)) {
{
register Zq0A4_120 *W_51 = &Z287->U_1.V_18.Y17;

Z136 = 1;
for (;;) {
if (Z136 > W_51->Y12) {
if (W_51->Y14 <= ZpmC89LG6_4) {
ZblNKKO_44((STRING)"LRk internal problem 9: Rule <= RootCount", 41L, (LONGCARD)ZblNKKO_17, ZmtLFGGBG_1);
} else {
goto EXIT_11;
}
}
Z295 = W_51->Y17->A[Z136];
if (Z295 < Zq0A4_91) {
goto EXIT_11;
} else {
if (Z136 == W_51->Y12) {
Z315(&W_50->Y3, Z213->A[Z295 - Zq0A4_89].Y3, Z257);
goto EXIT_11;
} else {
Z319(&Z316, Z213->A[Z295 - Zq0A4_89].Y3, Z257);
Z303(&frame, &Z316, Z257);
if (IN(Zq0A4_50, Zq0A4_93->A[Z295]->U_1.V_9.Y8.Y5)) {
ZpmCQ_14(&Z316.Y0, Zq0A4_91);
Z315(&W_50->Y3, Z316, Z257);
INC(Z136);
} else {
Z315(&W_50->Y3, Z316, Z257);
goto EXIT_11;
}
}
}
} EXIT_11:;
Z287 = W_51->Y1;
}
}
Z313(&W_50->Y3);
}
} EXIT_10:;
}
Z320(&Z316);
}
}
}
}

INTEGER ZiSr_13
# ifdef HAVE_ARGS
(CARDINAL Z255, CARDINAL Z290, ZpmCQ_4 Z322, CARDINAL *Z323)
# else
(Z255, Z290, Z322, Z323)
CARDINAL Z255, Z290;
ZpmCQ_4 Z322;
CARDINAL *Z323;
# endif
{
SHORTINT Z324;
LONGINT Z266;
SHORTCARD Z263;
INTEGER Z257;
CARDINAL Z325, Z326, Z327;
ZiSr_3 Z328, Z329, Z330;
LONGINT Z331;

Z332();
Z331 = Z214;
Z232 = ZiSr_12;
Z233 = TRUE;
{
LONGINT B_39 = 2, B_40 = (SHORTINT)ZiSr_7;

if (B_39 <= B_40)
for (Z257 = B_39;; Z257 += 1) {
if (Z228.A[Z257 - 2] == NIL) {
ZarQdhNDD_0((ADDRESS *)&Z228.A[Z257 - 2], &Z331, (LONGINT)sizeof (SHORTCARD));
Z275((ADDRESS)Z228.A[Z257 - 2], 0);
}
Z231 = Z257;
ZpmCQ_32(&Z222);
if (!ZpmCQ_25(ORD('E'), &Zq0A4_61)) {
ZpmCQ_30(&Z230.A[0], Z322);
ZpmCQ_30(&Z230.A[Z257 - 1], Z223);
ZpmCQ_32(&Z218);
ZpmCQ_32(&Z219);
Z326 = 0;
Z324 = ZiS8_24->A[Z290].Y0;
while (Z324 >= 0) {
{
register ZiS8_11 *W_52 = &ZiS8_27->A[Z324];

{
register ZiS8_8 *W_53 = &ZiS8_17->A[W_52->Y0];

{
register Zq0A4_120 *W_54 = &Zq0A4_95->A[W_53->Y0]->U_1.V_18.Y17;

if (W_53->Y1 < W_54->Y12) {
Z234 = FALSE;
Z327 = Z335(W_52->Y0);
{
register ZiSr_6 *W_55 = &ZiSr_10->A[Z327];

if (W_55->Y1 == NIL) {
ZarQdhNDD_0((ADDRESS *)&W_55->Y1, &Z211, (LONGINT)sizeof (Zq0A4_57));
Z275((ADDRESS)W_55->Y1, (SHORTCARD)Z255);
INC(Z241);
{
SHORTCARD B_41 = 2, B_42 = ZiSr_7;

if (B_41 <= B_42)
for (Z263 = B_41;; Z263 += 1) {
W_55->Y1->A[Z263 - 2] = NIL;
if (Z263 >= B_42) break;
}
}
}
if (W_55->Y1->A[Z257 - 2] == NIL) {
W_55->Y1->A[Z257 - 2] = (Zq0A4_57)ZiS8_48();
ZpmCQ_5(W_55->Y1->A[Z257 - 2], Zq0A4_91);
if (ZpmCQ_16(W_55->Y1->A[Z257 - 2]) == 0) {
ZblNKKO_45((STRING)"out of memory for state", 23L, (LONGCARD)ZblNKKO_14, ZmtLFGGBG_1, (LONGCARD)ZblNKKO_24, ADR (Z255));
}
INC(Z242);
}
Z254(Z255, W_52->Y0, (LONGCARD)(W_53->Y1 + 2), (LONGCARD)(Z257 - 1), W_55->Y1->A[Z257 - 2]);
ZpmCQ_8(&Z218, *W_55->Y1->A[Z257 - 2]);
}
} else {
Z234 = W_53->Y1 > 0;
ZpmCQ_32(&Z220);
Z254(Z255, W_52->Y0, (LONGCARD)(W_53->Y1 + 1), (LONGCARD)Z257, &Z220);
ZpmCQ_30(&Z221, Z219);
ZpmCQ_10(&Z221, Z220);
ZpmCQ_8(&Z222, Z221);
ZpmCQ_8(&Z219, Z220);
Z325 = ZpmCQ_15(&Z220);
if (Z325 >= Z326) {
Z326 = Z325;
*Z323 = W_52->Y0;
}
if (W_53->Y1 == 0) {
Z327 = Z335(W_52->Y0);
{
register ZiSr_6 *W_56 = &ZiSr_10->A[Z327];

if (W_56->Y1 == NIL) {
ZarQdhNDD_0((ADDRESS *)&W_56->Y1, &Z211, (LONGINT)sizeof (Zq0A4_57));
Z275((ADDRESS)W_56->Y1, (SHORTCARD)Z255);
INC(Z241);
{
SHORTCARD B_43 = 2, B_44 = ZiSr_7;

if (B_43 <= B_44)
for (Z263 = B_43;; Z263 += 1) {
W_56->Y1->A[Z263 - 2] = NIL;
if (Z263 >= B_44) break;
}
}
}
if (W_56->Y1->A[Z257 - 2] == NIL) {
W_56->Y1->A[Z257 - 2] = (Zq0A4_57)ZiS8_48();
ZpmCQ_5(W_56->Y1->A[Z257 - 2], Zq0A4_91);
if (ZpmCQ_16(W_56->Y1->A[Z257 - 2]) == 0) {
ZblNKKO_45((STRING)"out of memory for state", 23L, (LONGCARD)ZblNKKO_14, ZmtLFGGBG_1, (LONGCARD)ZblNKKO_24, ADR (Z255));
}
INC(Z242);
}
ZpmCQ_8(W_56->Y1->A[Z257 - 2], Z220);
}
}
}
}
}
Z324 = W_52->Y1;
}
}
ZpmCQ_30(&Z221, Z219);
ZpmCQ_10(&Z221, Z218);
ZpmCQ_8(&Z222, Z221);
Z325 = ZpmCQ_15(&Z218);
if (Z325 >= Z326) {
*Z323 = 0;
}
if (ZpmCQ_26(Z222)) {
return Z257;
}
} else {
ZpmCQ_12(&Z222);
}
if (!ZpmCQ_25(ORD('F'), &Zq0A4_61)) {
ZpmCQ_31(&Z230.A[0], Z290);
ZpmCQ_30(&Z230.A[Z257 - 1], Z222);
ZpmCQ_30(&Z230.A[Z257 - 1], Z223);
ZpmCQ_32(&Z222);
ZpmCQ_5(&Z330.Y0, Zq0A4_91);
Z330.Y1 = NIL;
Z330.Y2 = NIL;
ZpmCQ_5(&Z328.Y0, Zq0A4_91);
Z328.Y1 = NIL;
Z328.Y2 = NIL;
ZpmCQ_5(&Z329.Y0, Zq0A4_91);
Z329.Y1 = NIL;
Z329.Y2 = NIL;
Z326 = 0;
{
register ZiS8_7 *W_57 = &ZiS8_14->A[Z255];

Z324 = ZiS8_24->A[Z290].Y0;
while (Z324 >= 0) {
{
register ZiS8_11 *W_58 = &ZiS8_27->A[Z324];

{
register ZiS8_8 *W_59 = &ZiS8_17->A[W_58->Y0];

{
register Zq0A4_120 *W_60 = &Zq0A4_95->A[W_59->Y0]->U_1.V_18.Y17;

Z234 = FALSE;
if (W_59->Y1 < W_60->Y12) {
Z327 = Z335(W_58->Y0);
{
register ZiSr_6 *W_61 = &ZiSr_10->A[Z327];

if (W_61->Y2.Y1 == NIL) {
ZpmCQ_5(&W_61->Y2.Y0, Zq0A4_91);
if (ZpmCQ_16(&W_61->Y2.Y0) == 0) {
ZblNKKO_45((STRING)"out of memory for state", 23L, (LONGCARD)ZblNKKO_14, ZmtLFGGBG_1, (LONGCARD)ZblNKKO_24, ADR (Z255));
}
ZpmCQ_13(&W_61->Y2.Y0, Z290);
Z309(&W_61->Y2);
}
if (W_61->Y2.Y1->A[0] == NIL) {
Z312(&W_61->Y2.Y1->A[0]);
}
Z298(Z255, W_58->Y0, (LONGCARD)(W_59->Y1 + 2), (LONGCARD)(Z257 - 1), W_61->Y2.Y1->A[0]);
Z315(&Z328, W_61->Y2, (LONGCARD)Z257);
}
} else {
Z337(&Z330);
ZpmCQ_13(&Z330.Y0, Z290);
Z309(&Z330);
Z298(Z255, W_58->Y0, (LONGCARD)(W_59->Y1 + 1), (LONGCARD)Z257, &Z330);
Z338(Z329, Z330, (LONGCARD)Z257);
Z315(&Z329, Z330, (LONGCARD)Z257);
if (Z330.Y1 != NIL) {
Z325 = ZpmCQ_15(&Z330.Y1->A[Z290 - Z330.Y3]->Y0);
if (Z325 >= Z326) {
Z326 = Z325;
*Z323 = W_58->Y0;
}
}
if (W_59->Y1 > 0) {
} else {
Z327 = Z335(W_58->Y0);
{
register ZiSr_6 *W_62 = &ZiSr_10->A[Z327];

if (W_62->Y2.Y1 == NIL) {
ZpmCQ_5(&W_62->Y2.Y0, Zq0A4_91);
if (ZpmCQ_16(&W_62->Y2.Y0) == 0) {
ZblNKKO_45((STRING)"out of memory for state", 23L, (LONGCARD)ZblNKKO_14, ZmtLFGGBG_1, (LONGCARD)ZblNKKO_24, ADR (Z255));
}
}
Z234 = TRUE;
Z315(&W_62->Y2, Z330, (LONGCARD)Z257);
}
}
}
}
}
Z324 = W_58->Y1;
}
}
}
Z338(Z328, Z329, (LONGCARD)Z257);
if (Z328.Y1 != NIL) {
Z325 = ZpmCQ_15(&Z328.Y1->A[Z290 - Z328.Y3]->Y0);
if (Z325 >= Z326) {
*Z323 = 0;
}
}
Z320(&Z330);
Z320(&Z328);
Z320(&Z329);
if (ZpmCQ_26(Z222)) {
if (Z233) {
{
LONGINT B_45 = Z232 + 1, B_46 = ZiSr_12;

if (B_45 <= B_46)
for (Z266 = B_45;; Z266 += 1) {
Z313(&ZiSr_10->A[Z266].Y2);
if (Z266 >= B_46) break;
}
}
}
return -Z257;
}
}
if (Z257 >= B_40) break;
}
}
while (Z233 && ZiSr_12 > Z232) {
{
register ZiSr_6 *W_63 = &ZiSr_10->A[ZiSr_12];

if (W_63->Y1 != NIL) {
{
SHORTCARD B_47 = 2, B_48 = ZiSr_7;

if (B_47 <= B_48)
for (Z263 = B_47;; Z263 += 1) {
if (W_63->Y1->A[Z263 - 2] != NIL) {
ZpmCQ_32(W_63->Y1->A[Z263 - 2]);
}
if (Z263 >= B_48) break;
}
}
}
if (W_63->Y2.Y1 != NIL) {
Z320(&ZiSr_10->A[ZiSr_12].Y2);
}
ZpmCQ_14(&Z235, W_63->Y0);
DEC(ZiSr_12);
}
}
return 0;
}

static void Z332
 ARGS ((void))
{
LONGINT Z266;

if (!Z212) {
ZiSr_9 = ZiS8_18 + 1;
ZarQdhNDD_0((ADDRESS *)&ZiSr_8, &ZiSr_9, (LONGINT)sizeof (ZiSr_4));
Z275((ADDRESS)ZiSr_8, 0);
{
LONGINT B_49 = 1, B_50 = ZiS8_18;

if (B_49 <= B_50)
for (Z266 = B_49;; Z266 += 1) {
ZiSr_8->A[Z266].Y0 = NIL;
if (Z266 >= B_50) break;
}
}
Z214 = ZpmC89LG6_1;
ZarQdhNDD_0((ADDRESS *)&Z213, &Z214, (LONGINT)sizeof (Z202));
Z275((ADDRESS)Z213, 0);
{
LONGINT B_51 = 0, B_52 = (LONGINT)ZpmC89LG6_1 - 1;

if (B_51 <= B_52)
for (Z266 = B_51;; Z266 += 1) {
Z213->A[Z266].Y1 = NIL;
Z213->A[Z266].Y4 = NIL;
if (Z266 >= B_52) break;
}
}
{
LONGINT B_53 = 2, B_54 = (SHORTINT)ZiSr_7;

if (B_53 <= B_54)
for (Z266 = B_53;; Z266 += 1) {
Z229.A[Z266 - 2] = 0;
Z228.A[Z266 - 2] = NIL;
if (Z266 >= B_54) break;
}
}
Z217 = 0;
Z216 = 32;
ZarQdhNDD_0((ADDRESS *)&Z215, &Z216, (LONGINT)sizeof (CARDINAL));
Z275((ADDRESS)Z215, 0);
Z215->A[0] = 0;
ZpmCQ_5(&Z218, Zq0A4_91);
ZpmCQ_5(&Z219, Zq0A4_91);
ZpmCQ_5(&Z220, Zq0A4_91);
ZpmCQ_5(&Z221, Zq0A4_91);
ZpmCQ_5(&Z222, Zq0A4_91);
ZpmCQ_5(&Z223, Zq0A4_91);
ZpmCQ_12(&Z223);
Z210 = ZiSr_7 - 1;
Z211 = Z210;
{
register ZiSr_4 *W_64 = &ZiSr_8->A[0];

W_64->Y0 = (ZiSr_5 *)ZDtgCFKU_1((LONGINT)sizeof (ZiSr_5));
INC(Z236);
ZarQdhNDD_0((ADDRESS *)&W_64->Y0->Y0, &Z210, (LONGINT)sizeof (SHORTCARD));
Z275((ADDRESS)W_64->Y0->Y0, 0);
INC(Z239);
ZarQdhNDD_0((ADDRESS *)&W_64->Y0->Y2, &Z210, (LONGINT)sizeof (SHORTCARD));
Z275((ADDRESS)W_64->Y0->Y2, 0);
INC(Z240);
{
LONGINT B_55 = 2, B_56 = (SHORTINT)ZiSr_7;

if (B_55 <= B_56)
for (Z266 = B_55;; Z266 += 1) {
Z227.A[Z266 - 2] = 0;
Z226.A[Z266 - 2] = 16;
ZarQdhNDD_0((ADDRESS *)&Z224.A[Z266 - 2], &Z226.A[Z266 - 2], (LONGINT)sizeof (ZiS8_5));
Z275((ADDRESS)Z224.A[Z266 - 2], 0);
ZarQdhNDD_0((ADDRESS *)&Z225.A[Z266 - 2], &Z226.A[Z266 - 2], (LONGINT)sizeof (CARDINAL));
Z275((ADDRESS)Z225.A[Z266 - 2], 0);
Z225.A[Z266 - 2]->A[0] = 0;
Z224.A[Z266 - 2]->A[0] = 0;
W_64->Y0->Y0->A[Z266 - 2] = 0;
W_64->Y0->Y2->A[Z266 - 2] = 0;
if (Z266 >= B_56) break;
}
}
}
{
LONGINT B_57 = 0, B_58 = Z211;

if (B_57 <= B_58)
for (Z266 = B_57;; Z266 += 1) {
ZpmCQ_5(&Z230.A[Z266], Zq0A4_91);
if (Z266 >= B_58) break;
}
}
ZiSr_11 = 64;
ZarQdhNDD_0((ADDRESS *)&ZiSr_10, &ZiSr_11, (LONGINT)sizeof (ZiSr_6));
Z275((ADDRESS)ZiSr_10, 0);
ZiSr_12 = 0;
ZiSr_10->A[0].Y0 = 0;
ZpmCQ_5(&Z235, (LONGCARD)ZiS8_15);
Z212 = TRUE;
}
}

static void Z343
# ifdef HAVE_ARGS
(ZfM_3 Z344, CARDINAL Z256)
# else
(Z344, Z256)
ZfM_3 Z344;
CARDINAL Z256;
# endif
{
CARDINAL Z266;
Zq0A4_35 Z290;

{
register ZiS8_8 *W_65 = &ZiS8_17->A[Z256];

{
register Zq0A4_120 *W_66 = &Zq0A4_95->A[W_65->Y0]->U_1.V_18.Y17;

Zp1BbM_23((STRING)" ", 1L);
Zfb3DLQ_7(Z344, W_66->Y16->U_1.V_9.Y8.Y2);
Zp1BbM_23((STRING)": ", 2L);
if (W_65->Y1 == 0) {
Zp1BbM_23((STRING)".", 1L);
} else {
Zp1BbM_23((STRING)" ", 1L);
}
{
LONGCARD B_59 = 1, B_60 = W_66->Y12;

if (B_59 <= B_60)
for (Z266 = B_59;; Z266 += 1) {
Z290 = Zq0A4_93->A[W_66->Y17->A[Z266]];
if (Z290->U_1.V_1.Y0 == Zq0A4_6) {
Zfb3DLQ_7(Z344, Z290->U_1.V_6.Y5.Y2);
} else {
Zfb3DLQ_7(Z344, Z290->U_1.V_9.Y8.Y2);
}
if (Z266 == W_65->Y1) {
Zp1BbM_23((STRING)".", 1L);
} else {
Zp1BbM_23((STRING)" ", 1L);
}
if (Z266 >= B_60) break;
}
}
}
}
}

static void Z348
# ifdef HAVE_ARGS
(ZfM_3 Z344, Zq0A4_35 Z287)
# else
(Z344, Z287)
ZfM_3 Z344;
Zq0A4_35 Z287;
# endif
{
CARDINAL Z266;
Zq0A4_35 Z349;

{
register Zq0A4_120 *W_67 = &Z287->U_1.V_18.Y17;

Zp1BbM_23((STRING)" ", 1L);
Zfb3DLQ_7((ZDz6VQCC_4)ZfM_1, W_67->Y16->U_1.V_9.Y8.Y2);
Zp1BbM_23((STRING)": ", 2L);
{
LONGCARD B_61 = 1, B_62 = W_67->Y12;

if (B_61 <= B_62)
for (Z266 = B_61;; Z266 += 1) {
Z349 = Zq0A4_93->A[W_67->Y17->A[Z266]];
if (Z349->U_1.V_1.Y0 == Zq0A4_6) {
Zfb3DLQ_7((ZDz6VQCC_4)ZfM_1, Z349->U_1.V_6.Y5.Y2);
} else {
Zfb3DLQ_7((ZDz6VQCC_4)ZfM_1, Z349->U_1.V_9.Y8.Y2);
}
Zp1BbM_23((STRING)" ", 1L);
if (Z266 >= B_62) break;
}
}
}
}

static void Z350
# ifdef HAVE_ARGS
(ZiSr_3 Z299)
# else
(Z299)
ZiSr_3 Z299;
# endif
{
Zp1BbM_23((STRING)"NODE BEGIN", 10L);
Zp1BbM_27();
Z351(Z299, 0L);
Zp1BbM_23((STRING)"NODE END", 8L);
Zp1BbM_27();
}

static void Z351
# ifdef HAVE_ARGS
(ZiSr_3 Z299, CARDINAL Z352)
# else
(Z299, Z352)
ZiSr_3 Z299;
CARDINAL Z352;
# endif
{
CARDINAL Z266, Z263, Z257;

{
register ZiSr_3 *W_68 = &Z299;

if (W_68->Y1 == NIL) {
Zp1BbM_23((STRING)" ", 1L);
ZpmC89LG6_7((ZDz6VQCC_4)ZfM_1, W_68->Y0);
Zp1BbM_27();
} else {
Zp1BbM_23((STRING)" ", 1L);
ZpmC89LG6_7((ZDz6VQCC_4)ZfM_1, W_68->Y0);
Zp1BbM_27();
if (W_68->Y2 == NIL) {
{
LONGCARD B_63 = W_68->Y3, B_64 = W_68->Y4;

if (B_63 <= B_64)
for (Z266 = B_63;; Z266 += 1) {
if (W_68->Y1->A[Z266 - W_68->Y3] != NIL) {
{
LONGCARD B_65 = 1, B_66 = Z352;

if (B_65 <= B_66)
for (Z263 = B_65;; Z263 += 1) {
Zp1BbM_23((STRING)"        ", 8L);
if (Z263 >= B_66) break;
}
}
Zfb3DLQ_7((ZDz6VQCC_4)ZfM_1, Zq0A4_93->A[Z266]->U_1.V_6.Y5.Y2);
Z351(*W_68->Y1->A[Z266 - W_68->Y3], Z352 + 1);
}
if (Z266 >= B_64) break;
}
}
} else {
Z266 = 0;
do {
Z257 = W_68->Y2->A[Z266];
{
LONGCARD B_67 = 1, B_68 = Z352;

if (B_67 <= B_68)
for (Z263 = B_67;; Z263 += 1) {
Zp1BbM_23((STRING)"        ", 8L);
if (Z263 >= B_68) break;
}
}
Zfb3DLQ_7((ZDz6VQCC_4)ZfM_1, Zq0A4_93->A[Z257]->U_1.V_6.Y5.Y2);
Z351(*W_68->Y1->A[Z266], Z352 + 1);
INC(Z266);
} while (!(Z257 == W_68->Y4));
}
if (ZpmCQ_25(Zq0A4_91, &W_68->Y0)) {
{
LONGCARD B_69 = 1, B_70 = Z352;

if (B_69 <= B_70)
for (Z263 = B_69;; Z263 += 1) {
Zp1BbM_23((STRING)"        ", 8L);
if (Z263 >= B_70) break;
}
}
Zp1BbM_23((STRING)"Epsilon", 7L);
Zp1BbM_27();
}
}
}
}

static void Z312
# ifdef HAVE_ARGS
(ZiSr_1 *Z207)
# else
(Z207)
ZiSr_1 *Z207;
# endif
{
*Z207 = (ZiSr_1)ZDtgCFKU_1((LONGINT)sizeof (ZiSr_3));
INC(Z238);
ZpmCQ_5(&(*Z207)->Y0, Zq0A4_91);
if (ZpmCQ_16(&(*Z207)->Y0) == 0) {
ZblNKKO_44((STRING)"out of memory", 13L, (LONGCARD)ZblNKKO_14, ZmtLFGGBG_1);
}
(*Z207)->Y1 = NIL;
(*Z207)->Y2 = NIL;
}

static void Z309
# ifdef HAVE_ARGS
(ZiSr_3 *Z299)
# else
(Z299)
ZiSr_3 *Z299;
# endif
{
CARDINAL Z266;
LONGINT Z168;

{
register ZiSr_3 *W_69 = Z299;

if (ZpmCQ_25(Zq0A4_91, &W_69->Y0)) {
ZpmCQ_14(&W_69->Y0, Zq0A4_91);
if (ZpmCQ_26(W_69->Y0)) {
W_69->Y3 = Zq0A4_91;
W_69->Y4 = 0;
} else {
W_69->Y3 = ZpmCQ_17(&W_69->Y0);
W_69->Y4 = ZpmCQ_18(&W_69->Y0);
}
ZpmCQ_13(&W_69->Y0, Zq0A4_91);
} else {
W_69->Y3 = ZpmCQ_17(&W_69->Y0);
W_69->Y4 = ZpmCQ_18(&W_69->Y0);
}
Z168 = W_69->Y4 - W_69->Y3 + 1;
if (Z168 > 0) {
ZarQdhNDD_0((ADDRESS *)&W_69->Y1, &Z168, (LONGINT)sizeof (ZiSr_1));
Z275((ADDRESS)W_69->Y1, 0);
INC1(Z243, Z168);
{
LONGCARD B_71 = 0, B_72 = W_69->Y4 - W_69->Y3;

if (B_71 <= B_72)
for (Z266 = B_71;; Z266 += 1) {
W_69->Y1->A[Z266] = NIL;
if (Z266 >= B_72) break;
}
}
} else {
W_69->Y1 = NIL;
}
W_69->Y2 = NIL;
}
}

static void Z317
# ifdef HAVE_ARGS
(ZiSr_3 *Z299)
# else
(Z299)
ZiSr_3 *Z299;
# endif
{
CARDINAL Z354, Z355, Z266;
LONGINT Z168;
ZiSr_2 Z356;

{
register ZiSr_3 *W_70 = Z299;

Z354 = W_70->Y3;
Z355 = W_70->Y4;
if (ZpmCQ_25(Zq0A4_91, &W_70->Y0)) {
ZpmCQ_14(&W_70->Y0, Zq0A4_91);
W_70->Y3 = ZpmCQ_17(&W_70->Y0);
W_70->Y4 = ZpmCQ_18(&W_70->Y0);
ZpmCQ_13(&W_70->Y0, Zq0A4_91);
} else {
W_70->Y3 = ZpmCQ_17(&W_70->Y0);
W_70->Y4 = ZpmCQ_18(&W_70->Y0);
}
if (W_70->Y3 < Z354 || Z355 < W_70->Y4) {
Z356 = W_70->Y1;
Z168 = W_70->Y4 - W_70->Y3 + 1;
ZarQdhNDD_0((ADDRESS *)&W_70->Y1, &Z168, (LONGINT)sizeof (ZiSr_1));
Z275((ADDRESS)W_70->Y1, 0);
INC1(Z243, Z168);
if (Z354 <= Z355) {
if (Z354 > 0) {
{
LONGCARD B_73 = W_70->Y3, B_74 = Z354 - 1;

if (B_73 <= B_74)
for (Z266 = B_73;; Z266 += 1) {
W_70->Y1->A[Z266 - W_70->Y3] = NIL;
if (Z266 >= B_74) break;
}
}
}
{
LONGCARD B_75 = Z354, B_76 = Z355;

if (B_75 <= B_76)
for (Z266 = B_75;; Z266 += 1) {
W_70->Y1->A[Z266 - W_70->Y3] = Z356->A[Z266 - Z354];
if (Z266 >= B_76) break;
}
}
{
LONGCARD B_77 = Z355 + 1, B_78 = W_70->Y4;

if (B_77 <= B_78)
for (Z266 = B_77;; Z266 += 1) {
W_70->Y1->A[Z266 - W_70->Y3] = NIL;
if (Z266 >= B_78) break;
}
}
Z168 = Z355 - Z354 + 1;
ZarQdhNDD_3((ADDRESS *)&Z356, &Z168, (LONGINT)sizeof (ZiSr_1));
DEC1(Z243, Z168);
} else {
{
LONGCARD B_79 = 0, B_80 = W_70->Y4 - W_70->Y3;

if (B_79 <= B_80)
for (Z266 = B_79;; Z266 += 1) {
W_70->Y1->A[Z266] = NIL;
if (Z266 >= B_80) break;
}
}
}
}
}
}

static void Z320
# ifdef HAVE_ARGS
(ZiSr_3 *Z299)
# else
(Z299)
ZiSr_3 *Z299;
# endif
{
CARDINAL Z266, Z263;
LONGINT Z168;

{
register ZiSr_3 *W_71 = Z299;

if (W_71->Y1 != NIL) {
if (W_71->Y2 == NIL) {
{
LONGCARD B_81 = 0, B_82 = W_71->Y4 - W_71->Y3;

if (B_81 <= B_82)
for (Z266 = B_81;; Z266 += 1) {
if (W_71->Y1->A[Z266] != NIL) {
Z320(W_71->Y1->A[Z266]);
ZDtgCFKU_2((LONGINT)sizeof (ZiSr_3), (ADDRESS)W_71->Y1->A[Z266]);
DEC(Z238);
}
if (Z266 >= B_82) break;
}
}
Z168 = W_71->Y4 - W_71->Y3 + 1;
ZarQdhNDD_3((ADDRESS *)&W_71->Y1, &Z168, (LONGINT)sizeof (ZiSr_1));
DEC1(Z243, Z168);
} else {
Z266 = 0;
do {
Z263 = W_71->Y2->A[Z266];
Z320(W_71->Y1->A[Z266]);
ZDtgCFKU_2((LONGINT)sizeof (ZiSr_3), (ADDRESS)W_71->Y1->A[Z266]);
DEC(Z238);
INC(Z266);
} while (!(Z263 == W_71->Y4));
Z168 = Z266;
ZarQdhNDD_3((ADDRESS *)&W_71->Y1, &Z168, (LONGINT)sizeof (ZiSr_1));
DEC1(Z243, Z168);
Z168 = Z266;
ZarQdhNDD_3((ADDRESS *)&W_71->Y2, &Z168, (LONGINT)sizeof (SHORTCARD));
DEC1(Z244, Z168);
}
}
ZpmCQ_7(&W_71->Y0);
}
}

static void Z337
# ifdef HAVE_ARGS
(ZiSr_3 *Z299)
# else
(Z299)
ZiSr_3 *Z299;
# endif
{
CARDINAL Z266;

{
register ZiSr_3 *W_72 = Z299;

Z320(Z299);
ZpmCQ_5(&W_72->Y0, Zq0A4_91);
W_72->Y1 = NIL;
W_72->Y2 = NIL;
}
}

static void Z319
# ifdef HAVE_ARGS
(ZiSr_3 *Z358, ZiSr_3 Z359, CARDINAL Z257)
# else
(Z358, Z359, Z257)
ZiSr_3 *Z358;
ZiSr_3 Z359;
CARDINAL Z257;
# endif
{
Z337(Z358);
Z315(Z358, Z359, Z257);
}

static void Z315
# ifdef HAVE_ARGS
(ZiSr_3 *Z358, ZiSr_3 Z359, CARDINAL Z257)
# else
(Z358, Z359, Z257)
ZiSr_3 *Z358;
ZiSr_3 Z359;
CARDINAL Z257;
# endif
{
CARDINAL Z266, Z263, Z360;

ZpmCQ_8(&Z358->Y0, Z359.Y0);
if (!Z234) {
if (ZpmCQ_25(Zq0A4_91, &Z358->Y0)) {
ZpmCQ_10(&Z358->Y0, Z230.A[Z231 - Z257]);
ZpmCQ_13(&Z358->Y0, Zq0A4_91);
} else {
ZpmCQ_10(&Z358->Y0, Z230.A[Z231 - Z257]);
}
}
if (Z359.Y1 != NIL && Z257 > 1) {
if (Z358->Y1 == NIL) {
Z309(Z358);
} else {
if (Z358->Y2 != NIL) {
Z311(Z358);
}
if (Z359.Y3 < Z358->Y3 || Z358->Y4 < Z359.Y4) {
Z317(Z358);
}
}
if (Z359.Y2 == NIL) {
{
LONGCARD B_83 = Z359.Y3, B_84 = Z359.Y4;

if (B_83 <= B_84)
for (Z266 = B_83;; Z266 += 1) {
if (Z359.Y1->A[Z266 - Z359.Y3] != NIL && (Z234 || ZpmCQ_25(Z266, &Z230.A[Z231 - Z257]))) {
Z263 = Z266 - Z358->Y3;
if (Z358->Y1->A[Z263] == NIL) {
Z312(&Z358->Y1->A[Z263]);
}
Z315(Z358->Y1->A[Z263], *Z359.Y1->A[Z266 - Z359.Y3], Z257 - 1);
}
if (Z266 >= B_84) break;
}
}
} else {
Z266 = 0;
do {
Z360 = Z359.Y2->A[Z266];
if (Z234 || ZpmCQ_25(Z360, &Z230.A[Z231 - Z257])) {
Z263 = Z360 - Z358->Y3;
if (Z358->Y1->A[Z263] == NIL) {
Z312(&Z358->Y1->A[Z263]);
}
Z315(Z358->Y1->A[Z263], *Z359.Y1->A[Z266], Z257 - 1);
}
INC(Z266);
} while (!(Z360 == Z359.Y4));
}
}
}

static void Z338
# ifdef HAVE_ARGS
(ZiSr_3 Z358, ZiSr_3 Z359, CARDINAL Z257)
# else
(Z358, Z359, Z257)
ZiSr_3 Z358, Z359;
CARDINAL Z257;
# endif
{
CARDINAL Z266;

if (Z257 == 1) {
ZpmCQ_30(&Z221, Z358.Y0);
ZpmCQ_10(&Z221, Z359.Y0);
ZpmCQ_8(&Z222, Z221);
} else {
if (Z358.Y2 == NIL && Z359.Y2 == NIL) {
if (Z358.Y1 != NIL && Z359.Y1 != NIL) {
{
LONGCARD B_85 = (CARDINAL)ZdaDDAD7_4((LONGINT)Z358.Y3, (LONGINT)Z359.Y3), B_86 = (CARDINAL)ZdaDDAD7_3((LONGINT)Z358.Y4, (LONGINT)Z359.Y4);

if (B_85 <= B_86)
for (Z266 = B_85;; Z266 += 1) {
if (Z358.Y1->A[Z266 - Z358.Y3] != NIL && Z359.Y1->A[Z266 - Z359.Y3] != NIL) {
Z338(*Z358.Y1->A[Z266 - Z358.Y3], *Z359.Y1->A[Z266 - Z359.Y3], Z257 - 1);
}
if (Z266 >= B_86) break;
}
}
}
} else {
Zp1BbM_23((STRING)"ERROR CompareTree", 17L);
Zp1BbM_27();
}
}
}

static void Z313
# ifdef HAVE_ARGS
(ZiSr_3 *Z299)
# else
(Z299)
ZiSr_3 *Z299;
# endif
{
CARDINAL Z266;
INTEGER Z325;
ZiSr_2 Z361;
LONGINT Z362, Z363;

{
register ZiSr_3 *W_73 = Z299;

if (W_73->Y1 != NIL && W_73->Y2 == NIL && W_73->Y4 - W_73->Y3 >= 5) {
Z361 = W_73->Y1;
Z362 = ZpmCQ_15(&W_73->Y0);
if (ZpmCQ_25(Zq0A4_91, &W_73->Y0)) {
DEC(Z362);
}
Z363 = Z362;
ZarQdhNDD_0((ADDRESS *)&W_73->Y1, &Z362, (LONGINT)sizeof (ZiSr_1));
Z275((ADDRESS)W_73->Y1, 0);
INC1(Z243, Z362);
ZarQdhNDD_0((ADDRESS *)&W_73->Y2, &Z363, (LONGINT)sizeof (SHORTCARD));
Z275((ADDRESS)W_73->Y2, 0);
INC1(Z244, Z363);
Z325 = 0;
{
LONGCARD B_87 = W_73->Y3, B_88 = W_73->Y4;

if (B_87 <= B_88)
for (Z266 = B_87;; Z266 += 1) {
if (Z361->A[Z266 - W_73->Y3] != NIL) {
W_73->Y1->A[Z325] = Z361->A[Z266 - W_73->Y3];
W_73->Y2->A[Z325] = Z266;
Z313(W_73->Y1->A[Z325]);
INC(Z325);
}
if (Z266 >= B_88) break;
}
}
if (Z325 == 0) {
ZarQdhNDD_3((ADDRESS *)&W_73->Y1, &Z362, (LONGINT)sizeof (ZiSr_1));
ZarQdhNDD_3((ADDRESS *)&W_73->Y2, &Z363, (LONGINT)sizeof (SHORTCARD));
W_73->Y1 = Z361;
W_73->Y2 = NIL;
} else {
Z363 = W_73->Y4 - W_73->Y3 + 1;
ZarQdhNDD_3((ADDRESS *)&Z361, &Z363, (LONGINT)sizeof (ZiSr_1));
DEC1(Z243, Z363);
}
}
}
}

static void Z311
# ifdef HAVE_ARGS
(ZiSr_3 *Z299)
# else
(Z299)
ZiSr_3 *Z299;
# endif
{
CARDINAL Z266, Z263;
ZiSr_2 Z361;
LONGINT Z168;

{
register ZiSr_3 *W_74 = Z299;

if (W_74->Y2 != NIL) {
Z361 = W_74->Y1;
Z168 = W_74->Y4 - W_74->Y3 + 1;
ZarQdhNDD_0((ADDRESS *)&W_74->Y1, &Z168, (LONGINT)sizeof (ZiSr_1));
Z275((ADDRESS)W_74->Y1, 0);
INC1(Z243, Z168);
{
LONGCARD B_89 = 0, B_90 = W_74->Y4 - W_74->Y3;

if (B_89 <= B_90)
for (Z266 = B_89;; Z266 += 1) {
W_74->Y1->A[Z266] = NIL;
if (Z266 >= B_90) break;
}
}
Z266 = 0;
do {
Z263 = W_74->Y2->A[Z266];
Z311(Z361->A[Z266]);
W_74->Y1->A[Z263 - W_74->Y3] = Z361->A[Z266];
INC(Z266);
} while (!(Z263 == W_74->Y4));
Z168 = Z266;
ZarQdhNDD_3((ADDRESS *)&Z361, &Z168, (LONGINT)sizeof (ZiSr_1));
DEC1(Z243, Z168);
Z168 = Z266;
ZarQdhNDD_3((ADDRESS *)&W_74->Y2, &Z168, (LONGINT)sizeof (SHORTCARD));
DEC1(Z244, Z168);
W_74->Y2 = NIL;
}
}
}

static CARDINAL Z314
# ifdef HAVE_ARGS
(ZiSr_3 Z299)
# else
(Z299)
ZiSr_3 Z299;
# endif
{
CARDINAL Z266, Z263, Z325;

{
register ZiSr_3 *W_75 = &Z299;

Z325 = 1;
if (W_75->Y1 == NIL) {
INC(Z248);
} else if (W_75->Y2 == NIL) {
INC(Z249);
{
LONGCARD B_91 = 0, B_92 = W_75->Y4 - W_75->Y3;

if (B_91 <= B_92)
for (Z266 = B_91;; Z266 += 1) {
if (W_75->Y1->A[Z266] != NIL) {
INC1(Z325, Z314(*W_75->Y1->A[Z266]));
}
if (Z266 >= B_92) break;
}
}
} else {
INC(Z250);
Z266 = 0;
do {
Z263 = W_75->Y2->A[Z266];
INC1(Z325, Z314(*W_75->Y1->A[Z266]));
INC(Z266);
} while (!(Z263 == W_75->Y4));
}
return Z325;
}
}

static void Z364
 ARGS ((void))
{
CARDINAL Z266, Z263;

{
LONGCARD B_93 = 1, B_94 = (CARDINAL)ZiS8_18;

if (B_93 <= B_94)
for (Z266 = B_93;; Z266 += 1) {
{
register ZiSr_4 *W_76 = &ZiSr_8->A[Z266];

if (W_76->Y0 != NIL) {
{
register ZiSr_5 *W_77 = W_76->Y0;

if (W_77->Y2 != NIL) {
Z320(W_77->Y3);
ZDtgCFKU_2((LONGINT)sizeof (ZiSr_3), (ADDRESS)W_77->Y3);
DEC(Z238);
ZarQdhNDD_3((ADDRESS *)&W_77->Y2, &Z210, (LONGINT)sizeof (SHORTCARD));
DEC(Z240);
W_77->Y2 = NIL;
}
if (W_77->Y0 != NIL) {
{
LONGCARD B_95 = 2, B_96 = ZiSr_7;

if (B_95 <= B_96)
for (Z263 = B_95;; Z263 += 1) {
if (W_77->Y0->A[Z263 - 2] != 0) {
ZpmCQ_7(W_77->Y1->A[Z263 - 2]);
DEC(Z242);
ZDtgCFKU_2((LONGINT)sizeof (ZpmCQ_4), (ADDRESS)W_77->Y1->A[Z263 - 2]);
}
if (Z263 >= B_96) break;
}
}
ZarQdhNDD_3((ADDRESS *)&W_77->Y1, &Z211, (LONGINT)sizeof (Zq0A4_57));
DEC(Z241);
ZarQdhNDD_3((ADDRESS *)&W_77->Y0, &Z210, (LONGINT)sizeof (SHORTCARD));
DEC(Z239);
}
}
}
}
if (Z266 >= B_94) break;
}
}
}

void ZiSr_15
 ARGS ((void))
{
CARDINAL Z266, Z263;
LONGINT Z331;

if (Z212) {
if (ZpmCQ_25(ORD('T'), &Zq0A4_61)) {
{
LONGCARD B_97 = Zq0A4_89, B_98 = Zq0A4_90;

if (B_97 <= B_98)
for (Z266 = B_97;; Z266 += 1) {
{
register Z202 *W_78 = &Z213->A[Z266 - Zq0A4_89];

if (W_78->Y4 != NIL) {
INC1(Z246, Z314(W_78->Y3));
INC(Z252);
}
}
if (Z266 >= B_98) break;
}
}
{
LONGCARD B_99 = 1, B_100 = (CARDINAL)ZiSr_12;

if (B_99 <= B_100)
for (Z266 = B_99;; Z266 += 1) {
INC1(Z247, Z314(ZiSr_10->A[Z266].Y2));
INC(Z253);
if (Z266 >= B_100) break;
}
}
Z366();
}
ZpmCQ_7(&Z218);
ZpmCQ_7(&Z219);
ZpmCQ_7(&Z220);
ZpmCQ_7(&Z221);
ZpmCQ_7(&Z222);
ZpmCQ_7(&Z223);
ZpmCQ_7(&Z235);
{
LONGCARD B_101 = 0, B_102 = (CARDINAL)Z211;

if (B_101 <= B_102)
for (Z266 = B_101;; Z266 += 1) {
ZpmCQ_7(&Z230.A[Z266]);
if (Z266 >= B_102) break;
}
}
ZarQdhNDD_3((ADDRESS *)&Z215, &Z216, (LONGINT)sizeof (CARDINAL));
Z331 = Z214;
{
LONGCARD B_103 = 2, B_104 = ZiSr_7;

if (B_103 <= B_104)
for (Z266 = B_103;; Z266 += 1) {
if (Z228.A[Z266 - 2] != NIL) {
ZarQdhNDD_3((ADDRESS *)&Z228.A[Z266 - 2], &Z331, (LONGINT)sizeof (SHORTCARD));
}
ZarQdhNDD_3((ADDRESS *)&Z224.A[Z266 - 2], &Z226.A[Z266 - 2], (LONGINT)sizeof (ZiS8_5));
ZarQdhNDD_3((ADDRESS *)&Z225.A[Z266 - 2], &Z226.A[Z266 - 2], (LONGINT)sizeof (CARDINAL));
if (Z266 >= B_104) break;
}
}
{
LONGCARD B_105 = Zq0A4_89, B_106 = Zq0A4_90;

if (B_105 <= B_106)
for (Z266 = B_105;; Z266 += 1) {
{
register Z202 *W_79 = &Z213->A[Z266 - Zq0A4_89];

if (W_79->Y4 != NIL) {
Z320(&W_79->Y3);
ZarQdhNDD_3((ADDRESS *)&W_79->Y4, &Z210, (LONGINT)sizeof (SHORTCARD));
DEC(Z240);
}
if (W_79->Y1 != NIL) {
{
LONGCARD B_107 = 2, B_108 = ZiSr_7;

if (B_107 <= B_108)
for (Z263 = B_107;; Z263 += 1) {
if (W_79->Y1->A[Z263 - 2] != 0) {
ZpmCQ_7(W_79->Y0->A[Z263 - 2]);
DEC(Z242);
ZDtgCFKU_2((LONGINT)sizeof (ZpmCQ_4), (ADDRESS)W_79->Y0->A[Z263 - 2]);
}
if (Z263 >= B_108) break;
}
}
ZarQdhNDD_3((ADDRESS *)&W_79->Y0, &Z211, (LONGINT)sizeof (Zq0A4_57));
DEC(Z241);
ZarQdhNDD_3((ADDRESS *)&W_79->Y1, &Z210, (LONGINT)sizeof (SHORTCARD));
DEC(Z239);
}
}
if (Z266 >= B_106) break;
}
}
ZarQdhNDD_3((ADDRESS *)&Z213, &Z214, (LONGINT)sizeof (Z202));
}
}

static void Z275
# ifdef HAVE_ARGS
(ADDRESS Z367, ZiS8_5 Z255)
# else
(Z367, Z255)
ADDRESS Z367;
ZiS8_5 Z255;
# endif
{
if (Z367 == NIL) {
ZblNKKO_45((STRING)"out of memory for state", 23L, (LONGCARD)ZblNKKO_14, ZmtLFGGBG_1, (LONGCARD)ZblNKKO_23, ADR (Z255));
}
}

CARDINAL ZiSr_14
# ifdef HAVE_ARGS
(CARDINAL Z256)
# else
(Z256)
CARDINAL Z256;
# endif
{
INTEGER Z369, Z370, Z371;

Z369 = 1;
Z371 = ZiSr_12;
while (Z369 + 1 < Z371) {
Z370 = (Z369 + Z371) / 2;
if (ZiSr_10->A[Z370].Y0 < Z256) {
Z369 = Z370;
} else {
Z371 = Z370;
}
}
if (ZiSr_10->A[Z369].Y0 == Z256) {
return Z369;
} else if (ZiSr_10->A[Z371].Y0 == Z256) {
return Z371;
} else {
ZblNKKO_45((STRING)"GetLATreeIndex fails at Item", 28L, (LONGCARD)ZblNKKO_14, ZmtLFGGBG_1, (LONGCARD)ZblNKKO_24, ADR (Z256));
return 0;
}
}

static CARDINAL Z335
# ifdef HAVE_ARGS
(CARDINAL Z372)
# else
(Z372)
CARDINAL Z372;
# endif
{
LONGINT Z266;

if (ZpmCQ_25(Z372, &Z235)) {
return ZiSr_14(Z372);
} else {
INC(ZiSr_12);
if (ZiSr_12 == ZiSr_11) {
ZarQdhNDD_2((ADDRESS *)&ZiSr_10, &ZiSr_11, (LONGINT)sizeof (ZiSr_6));
Z275((ADDRESS)ZiSr_10, 0);
}
Z266 = ZiSr_12;
while (ZiSr_10->A[Z266 - 1].Y0 > Z372) {
ZiSr_10->A[Z266] = ZiSr_10->A[Z266 - 1];
Z233 = FALSE;
DEC(Z266);
}
{
register ZiSr_6 *W_80 = &ZiSr_10->A[Z266];

W_80->Y0 = Z372;
W_80->Y1 = NIL;
W_80->Y2.Y1 = NIL;
W_80->Y2.Y2 = NIL;
}
ZpmCQ_13(&Z235, Z372);
return Z266;
}
}

static void Z373
# ifdef HAVE_ARGS
(CHAR Z374[], LONGCARD O_1, INTEGER Z375)
# else
(Z374, O_1, Z375)
CHAR Z374[];
LONGCARD O_1;
INTEGER Z375;
# endif
{
OPEN_ARRAY_LOCALS

ALLOC_OPEN_ARRAYS (O_1 * sizeof (CHAR), 1)
COPY_OPEN_ARRAY (Z374, O_1, CHAR)
Zp1BbM_23((STRING)"          ", 10L);
Zp1BbM_23(Z374, O_1);
Zp1BbM_19(Z375, 8L);
Zp1BbM_27();
FREE_OPEN_ARRAYS
}

static void Z366
 ARGS ((void))
{
Z373((STRING)"LAKPtr     Size    ", 19L, ZiSr_9);
Z373((STRING)"LAKPtr     Space   ", 19L, ZiSr_9 * sizeof (ZiSr_4));
Z373((STRING)"FirstPtr   Size    ", 19L, Z214);
Z373((STRING)"FirstPtr   Elmts   ", 19L, (LONGINT)Z237);
Z373((STRING)"FirstPtr   Space   ", 19L, (LONGINT)((CARDINAL)Z214 * sizeof (Z202) + Z237 * ((Zq0A4_91 + 32) / 32 * sizeof (BITSET))));
Z373((STRING)"LATree     Size    ", 19L, ZiSr_11);
Z373((STRING)"LATree     Elmts   ", 19L, ZiSr_12);
Z373((STRING)"LATree     Space   ", 19L, ZiSr_12 * sizeof (ZiSr_6));
Z373((STRING)"LAK Nodes          ", 19L, (LONGINT)Z236);
Z373((STRING)"LAK Nodes  Space   ", 19L, (LONGINT)(Z236 * sizeof (ZiSr_5)));
Z373((STRING)"LRK Nodes          ", 19L, (LONGINT)Z238);
Z373((STRING)"LRK Nodes  Space   ", 19L, (LONGINT)(Z238 * (sizeof (ZiSr_3) + (Zq0A4_91 + 32) / 32 * sizeof (BITSET))));
Z373((STRING)"Array      Space   ", 19L, (LONGINT)(Z243 * sizeof (ZiSr_1)));
Z373((STRING)"Token      Space   ", 19L, (LONGINT)(Z244 * sizeof (SHORTCARD)));
Z373((STRING)"Kernel     Nodes   ", 19L, (LONGINT)Z245);
Z373((STRING)"Nonterm    Nodes   ", 19L, (LONGINT)Z246);
Z373((STRING)"LATree     Nodes   ", 19L, (LONGINT)Z247);
Z373((STRING)"Kernel             ", 19L, (LONGINT)Z251);
Z373((STRING)"Nonterm            ", 19L, (LONGINT)Z252);
Z373((STRING)"LATree             ", 19L, (LONGINT)Z253);
Z373((STRING)"Front      Nodes   ", 19L, (LONGINT)Z248);
Z373((STRING)"UnCompress Nodes   ", 19L, (LONGINT)Z249);
Z373((STRING)"Compressed Nodes   ", 19L, (LONGINT)Z250);
Z373((STRING)"Look1 Sets         ", 19L, (LONGINT)Z242);
Z373((STRING)"Look1 Sets Space   ", 19L, (LONGINT)(Z242 * (sizeof (ZpmCQ_4) + (Zq0A4_91 + 32) / 32 * sizeof (BITSET))));
}

static void Z376
# ifdef HAVE_ARGS
(ZiSr_3 Z299)
# else
(Z299)
ZiSr_3 Z299;
# endif
{
CARDINAL Z266, Z263;

{
register ZiSr_3 *W_81 = &Z299;

if (W_81->Y1 == NIL) {
return;
}
Zp1BbM_23((STRING)" NODE ", 6L);
if (W_81->Y2 != NIL) {
Zp1BbM_23((STRING)"COMPRESSED ", 11L);
}
Zp1BbM_23((STRING)"Min, Max, Set = ", 16L);
Zp1BbM_19((LONGINT)W_81->Y3, 5L);
Zp1BbM_19((LONGINT)W_81->Y4, 5L);
ZpmCQ_35((ZDz6VQCC_4)ZfM_1, W_81->Y0);
Zp1BbM_27();
if (W_81->Y2 != NIL) {
Z266 = 0;
do {
Z263 = W_81->Y2->A[Z266];
Zp1BbM_19((LONGINT)Z263, 5L);
if (W_81->Y1->A[Z266] != NIL) {
Z376(*W_81->Y1->A[Z266]);
} else {
Zp1BbM_23((STRING)" ERROR", 6L);
Zp1BbM_27();
}
INC(Z266);
} while (!(Z263 == W_81->Y4));
} else {
{
LONGCARD B_109 = W_81->Y3, B_110 = W_81->Y4;

if (B_109 <= B_110)
for (Z266 = B_109;; Z266 += 1) {
if (W_81->Y1->A[Z266 - W_81->Y3] != NIL) {
Zp1BbM_19((LONGINT)Z266, 5L);
Z376(*W_81->Y1->A[Z266 - W_81->Y3]);
}
if (Z266 >= B_110) break;
}
}
}
}
}

static void Z377
 ARGS ((void))
{
LONGINT Z266;

{
LONGINT B_111 = 1, B_112 = ZiSr_12;

if (B_111 <= B_112)
for (Z266 = B_111;; Z266 += 1) {
{
register ZiSr_6 *W_82 = &ZiSr_10->A[Z266];

Zp1BbM_23((STRING)"i, Item, Look1 = ", 17L);
Zp1BbM_19(Z266, 5L);
Zp1BbM_19((LONGINT)W_82->Y0, 6L);
ZpmCQ_35((ZDz6VQCC_4)ZfM_1, *W_82->Y1->A[2 - 2]);
Z376(W_82->Y2);
Zp1BbM_27();
}
if (Z266 >= B_112) break;
}
}
}

void BEGIN_LRk ARGS ((void))
{
  static BOOLEAN has_been_called = FALSE;
  if (has_been_called) return;
  has_been_called = TRUE;
BEGIN_IO ();
BEGIN_Sets ();
BEGIN_Tree ();
BEGIN_General ();
BEGIN_rMemory ();
BEGIN_DynArray ();
BEGIN_IO ();
BEGIN_StdIO ();
BEGIN_Idents ();
BEGIN_Position ();
BEGIN_Errors ();
BEGIN_Relation ();
BEGIN_Sets ();
BEGIN_Tree ();
BEGIN_Semantic ();
BEGIN_LR1 ();
BEGIN_Tree ();

ZiSr_7 = 1;
Z212 = FALSE;
Z236 = 0;
Z237 = 0;
Z238 = 0;
Z239 = 0;
Z240 = 0;
Z241 = 0;
Z242 = 0;
Z243 = 0;
Z244 = 0;
Z245 = 0;
Z246 = 0;
Z247 = 0;
Z248 = 0;
Z249 = 0;
Z250 = 0;
Z251 = 0;
Z252 = 0;
Z253 = 0;
}
