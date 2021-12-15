#include "SYSTEM_.h"

#ifndef DEFINITION_rSystem
#include "rSystem.h"
#endif

#ifndef DEFINITION_IO
#include "IO.h"
#endif

#ifndef DEFINITION_Tree
#include "Tree.h"
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

#ifndef DEFINITION_Idents
#include "Idents.h"
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

#ifndef DEFINITION_Delta
#include "Delta.h"
#endif

ZfM_3 ZaeBJF_0, ZaeBJF_1;
ZfM_3 ZaeBJF_6;
BOOLEAN ZaeBJF_7;
PROC ZaeBJF_8;

typedef struct S_1 {
Zfb3DLQ_0 Y0;
SHORTINT Y1;
} Z177;
typedef struct S_15 {
SHORTCARD A[10000 + 1];
} *Z180;
typedef struct S_2 {
SHORTCARD Y0;
SHORTCARD Y1;
SHORTCARD Y2;
Z180 Y3;
} Z181;
typedef struct S_3 {
SHORTCARD Y0;
SHORTCARD Y1;
ZpmCQ_4 *Y2;
} Z185;
typedef struct S_4 {
ZpmCQ_4 Y0;
SHORTCARD Y1;
SHORTCARD Y2;
SHORTCARD Y3;
BOOLEAN Y4;
BITSET Y5;
struct S_14 {
Z185 A[10000 + 1];
} *Y6;
} Z189;
static CARDINAL Z196, Z197, Z198, Z199, Z200, Z201, Z202, Z203, Z204, Z205, Z206, Z207;
static LONGINT Z208;
static struct S_5 {
Z177 A[100000 + 1];
} *Z209;
static LONGINT Z210;
static struct S_6 {
Z181 A[100000 + 1];
} *Z211;
static LONGINT Z212;
static LONGINT Z213;
static struct S_7 {
Z189 A[100000 + 1];
} *Z214;
static ZpmCQ_4 Z215, Z216;
static SHORTCARD Z217 ARGS ((Zq0A4_35 Z186, SHORTCARD Z218, Z180 Z219));
static void Z224 ARGS ((void));
static BOOLEAN Z242 ARGS ((ZpmCQ_4 Z243, ZpmCQ_4 Z244));
static BOOLEAN Z245 ARGS ((ZpmCQ_4 Z243, ZpmCQ_4 Z244));
static void Z261 ARGS ((CHAR Z262[], LONGCARD O_1, CARDINAL Z263));
static void Z267 ARGS ((CHAR Z268[], LONGCARD O_2));
static BOOLEAN Z271 ARGS ((BYTE Z272[], LONGCARD O_4, BYTE Z273[], LONGCARD O_3));
struct S_10 {
union {
char dummy;
} U_1;
};
static void Z279 ARGS ((Zq0A4_35 Z281));
struct S_9 {
union {
char dummy;
} U_1;
};
static void Z280 ARGS ((Zq0A4_35 Z282));
struct S_8 {
union {
char dummy;
} U_1;
};
static void Z287 ARGS ((void));

static SHORTCARD Z217
# ifdef HAVE_ARGS
(Zq0A4_35 Z186, SHORTCARD Z218, Z180 Z219)
# else
(Z186, Z218, Z219)
Zq0A4_35 Z186;
SHORTCARD Z218;
Z180 Z219;
# endif
{
SHORTCARD Z220;

while (Z186->U_1.V_1.Y0 != Zq0A4_17) {
{
register Zq0A4_120 *W_1 = &Z186->U_1.V_18.Y17;

if (W_1->Y12 == Z218 && !ZpmCQ_25((LONGCARD)W_1->Y14, &Z215)) {
Z220 = 1;
for (;;) {
if (Z220 > Z218) {
return W_1->Y14;
}
if (W_1->Y17->A[Z220] != (SHORTCARD)Z209->A[Z219->A[Z220]].Y1) {
goto EXIT_1;
}
INC(Z220);
} EXIT_1:;
}
Z186 = W_1->Y1;
}
}
return 0;
}

static void Z224
 ARGS ((void))
{
CHAR Z225;

do {
Z225 = ZfM_7(ZaeBJF_0);
} while (!(Z225 == ' ' || Z225 == '\n'));
}

void ZaeBJF_2
 ARGS ((void))
{
CARDINAL Z179, Z220, Z228, Z229;
Zp1PEAFD_2 Z230;
Zq0A4_35 Z231;
CHAR Z225;
LONGINT Z232;
SHORTINT Z233;

Z224();
Z204 = ZfM_8(ZaeBJF_0);
Z205 = ZfM_8(ZaeBJF_0);
Z206 = ZfM_8(ZaeBJF_0);
Z207 = ZfM_8(ZaeBJF_0);
ZfM_16(ZaeBJF_0);
Z208 = Z206 + 1;
ZarQdhNDD_0((ADDRESS *)&Z209, &Z208, (LONGINT)sizeof (Z177));
Z210 = Z207 + 1;
ZarQdhNDD_0((ADDRESS *)&Z211, &Z210, (LONGINT)sizeof (Z181));
Z197 = 0;
ZfM_16(ZaeBJF_0);
{
LONGCARD B_1 = 1, B_2 = Z204;

if (B_1 <= B_2)
for (Z220 = B_1;; Z220 += 1) {
Z179 = ZfM_8(ZaeBJF_0);
Z225 = ZfM_7(ZaeBJF_0);
Zp1PEAFD_20(ZaeBJF_0, &Z230);
{
register Z177 *W_2 = &Z209->A[Z179];

W_2->Y0 = Zfb3DLQ_2(&Z230);
Z231 = Zq0A4_100(W_2->Y0);
if (Z231 == Zq0A4_2 || Z231->U_1.V_1.Y0 != Zq0A4_6) {
W_2->Y1 = -1;
INC(Z197);
ZfM_29(ZaeBJF_1, (STRING)"- Terminal ", 11L);
Zfb3DLQ_7(ZaeBJF_1, W_2->Y0);
ZfM_33(ZaeBJF_1);
} else {
W_2->Y1 = Z231->U_1.V_6.Y5.Y10;
INCL(Z231->U_1.V_6.Y5.Y7, Zq0A4_54);
}
}
if (Z220 >= B_2) break;
}
}
if (Z197 > 0) {
ZfM_33(ZaeBJF_1);
}
Z196 = 0;
Z231 = Zq0A4_137->U_1.V_3.Y2.Y1;
while (Z231->U_1.V_1.Y0 == Zq0A4_6) {
{
register Zq0A4_108 *W_3 = &Z231->U_1.V_6.Y5;

if (!IN(Zq0A4_54, W_3->Y7) && IN(Zq0A4_47, W_3->Y7)) {
INC(Z196);
ZfM_29(ZaeBJF_1, (STRING)"+ Terminal ", 11L);
Zfb3DLQ_7(ZaeBJF_1, W_3->Y2);
ZfM_33(ZaeBJF_1);
}
Z231 = W_3->Y1;
}
}
if (Z196 > 0) {
ZfM_33(ZaeBJF_1);
}
Z199 = 0;
ZfM_16(ZaeBJF_0);
{
LONGCARD B_3 = 1, B_4 = Z205;

if (B_3 <= B_4)
for (Z220 = B_3;; Z220 += 1) {
Z179 = ZfM_8(ZaeBJF_0);
Z225 = ZfM_7(ZaeBJF_0);
Zp1PEAFD_20(ZaeBJF_0, &Z230);
{
register Z177 *W_4 = &Z209->A[Z179];

W_4->Y0 = Zfb3DLQ_2(&Z230);
Z231 = Zq0A4_100(W_4->Y0);
if (Z231 == Zq0A4_2 || Z231->U_1.V_1.Y0 != Zq0A4_9) {
W_4->Y1 = -1;
INC(Z199);
ZfM_29(ZaeBJF_1, (STRING)"- Nonterm  ", 11L);
Zfb3DLQ_7(ZaeBJF_1, W_4->Y0);
ZfM_33(ZaeBJF_1);
} else {
W_4->Y1 = Z231->U_1.V_9.Y8.Y8;
INCL(Z231->U_1.V_9.Y8.Y5, Zq0A4_54);
}
}
if (Z220 >= B_4) break;
}
}
if (Z199 > 0) {
ZfM_33(ZaeBJF_1);
}
Z198 = 0;
Z231 = Zq0A4_137->U_1.V_3.Y2.Y5;
while (Z231->U_1.V_1.Y0 == Zq0A4_9) {
{
register Zq0A4_111 *W_5 = &Z231->U_1.V_9.Y8;

if (!IN(Zq0A4_54, W_5->Y5) && IN(Zq0A4_47, W_5->Y5)) {
INC(Z198);
ZfM_29(ZaeBJF_1, (STRING)"+ Nonterm  ", 11L);
Zfb3DLQ_7(ZaeBJF_1, W_5->Y2);
ZfM_33(ZaeBJF_1);
}
Z231 = W_5->Y1;
}
}
if (Z198 > 0) {
ZfM_33(ZaeBJF_1);
}
Z201 = 0;
ZpmCQ_5(&Z215, ZpmC89LG6_2);
ZfM_16(ZaeBJF_0);
{
LONGCARD B_5 = 1, B_6 = Z207;

if (B_5 <= B_6)
for (Z220 = B_5;; Z220 += 1) {
Z179 = ZfM_8(ZaeBJF_0);
{
register Z181 *W_6 = &Z211->A[Z179];

W_6->Y1 = ZfM_8(ZaeBJF_0);
W_6->Y2 = ZfM_8(ZaeBJF_0);
Z232 = W_6->Y1 + 1;
ZarQdhNDD_0((ADDRESS *)&W_6->Y3, &Z232, (LONGINT)sizeof (SHORTCARD));
{
LONGCARD B_7 = 1, B_8 = W_6->Y1;

if (B_7 <= B_8)
for (Z228 = B_7;; Z228 += 1) {
W_6->Y3->A[Z228] = ZfM_8(ZaeBJF_0);
if (Z228 >= B_8) break;
}
}
ZfM_16(ZaeBJF_0);
Z233 = Z209->A[W_6->Y2].Y1;
if (Z233 > 0) {
W_6->Y0 = Z217(Zq0A4_93->A[Z233]->U_1.V_9.Y8.Y4, W_6->Y1, W_6->Y3);
ZpmCQ_13(&Z215, (LONGCARD)W_6->Y0);
} else {
W_6->Y0 = 0;
}
if (W_6->Y0 == 0) {
INC(Z201);
ZfM_29(ZaeBJF_1, (STRING)"- Rule     ", 11L);
Zfb3DLQ_7(ZaeBJF_1, Z209->A[W_6->Y2].Y0);
ZfM_29(ZaeBJF_1, (STRING)": ", 2L);
{
LONGCARD B_9 = 1, B_10 = W_6->Y1;

if (B_9 <= B_10)
for (Z228 = B_9;; Z228 += 1) {
Zfb3DLQ_7(ZaeBJF_1, Z209->A[W_6->Y3->A[Z228]].Y0);
ZfM_24(ZaeBJF_1, ' ');
if (Z228 >= B_10) break;
}
}
ZfM_33(ZaeBJF_1);
}
}
if (Z220 >= B_6) break;
}
}
if (Z201 > 0) {
ZfM_33(ZaeBJF_1);
}
Z200 = 0;
ZpmCQ_12(&Z215);
ZpmCQ_14(&Z215, 0L);
if (!ZpmCQ_26(Z215)) {
{
LONGCARD B_11 = ZpmCQ_17(&Z215), B_12 = ZpmCQ_18(&Z215);

if (B_11 <= B_12)
for (Z220 = B_11;; Z220 += 1) {
if (ZpmCQ_25(Z220, &Z215)) {
{
register Zq0A4_120 *W_7 = &Zq0A4_95->A[Z220]->U_1.V_18.Y17;

INC(Z200);
ZfM_29(ZaeBJF_1, (STRING)"+ Rule     ", 11L);
Zfb3DLQ_7(ZaeBJF_1, W_7->Y16->U_1.V_9.Y8.Y2);
ZfM_29(ZaeBJF_1, (STRING)": ", 2L);
{
LONGCARD B_13 = 1, B_14 = W_7->Y12;

if (B_13 <= B_14)
for (Z228 = B_13;; Z228 += 1) {
Z231 = Zq0A4_93->A[W_7->Y17->A[Z228]];
if (Z231->U_1.V_1.Y0 == Zq0A4_6) {
Zfb3DLQ_7(ZaeBJF_1, Z231->U_1.V_6.Y5.Y2);
} else {
Zfb3DLQ_7(ZaeBJF_1, Z231->U_1.V_9.Y8.Y2);
}
ZfM_24(ZaeBJF_1, ' ');
if (Z228 >= B_14) break;
}
}
ZfM_33(ZaeBJF_1);
}
}
if (Z220 >= B_12) break;
}
}
}
ZpmCQ_7(&Z215);
if (Z200 > 0) {
ZfM_33(ZaeBJF_1);
}
Z202 = 0;
ZarQdhNDD_0((ADDRESS *)&Z214, &Z213, (LONGINT)sizeof (Z189));
while (!ZfM_19(ZaeBJF_0)) {
Z224();
INC(Z212);
if (Z212 == Z213) {
ZarQdhNDD_2((ADDRESS *)&Z214, &Z213, (LONGINT)sizeof (Z189));
}
{
register Z189 *W_8 = &Z214->A[Z212];

W_8->Y1 = ZfM_8(ZaeBJF_0);
W_8->Y2 = ZfM_8(ZaeBJF_0);
W_8->Y3 = ZfM_8(ZaeBJF_0);
W_8->Y4 = FALSE;
ZpmCQ_5(&W_8->Y0, Z204);
ZpmCQ_34(ZaeBJF_0, &W_8->Y0);
W_8->Y5 = (BITSET)ZfM_11(ZaeBJF_0, 16L);
ZfM_16(ZaeBJF_0);
Z232 = W_8->Y3 + 1;
ZarQdhNDD_0((ADDRESS *)&W_8->Y6, &Z232, (LONGINT)sizeof (Z185));
{
LONGCARD B_15 = 0, B_16 = W_8->Y3;

if (B_15 <= B_16)
for (Z220 = B_15;; Z220 += 1) {
{
register Z185 *W_9 = &W_8->Y6->A[Z220];

W_9->Y0 = ZfM_8(ZaeBJF_0);
W_9->Y1 = ZfM_8(ZaeBJF_0);
Z229 = ZfM_8(ZaeBJF_0);
if (Z229 == 0) {
W_9->Y2 = NIL;
} else {
W_9->Y2 = (ZpmCQ_4 *)ZiS8_48();
ZpmCQ_5(W_9->Y2, Z204);
ZpmCQ_34(ZaeBJF_0, W_9->Y2);
}
ZfM_16(ZaeBJF_0);
}
if (Z220 >= B_16) break;
}
}
}
}
}

static BOOLEAN Z242
# ifdef HAVE_ARGS
(ZpmCQ_4 Z243, ZpmCQ_4 Z244)
# else
(Z243, Z244)
ZpmCQ_4 Z243, Z244;
# endif
{
return ZpmCQ_15(&Z243) == ZpmCQ_15(&Z244) && Z245(Z243, Z244);
}

static BOOLEAN Z245
# ifdef HAVE_ARGS
(ZpmCQ_4 Z243, ZpmCQ_4 Z244)
# else
(Z243, Z244)
ZpmCQ_4 Z243, Z244;
# endif
{
CARDINAL Z220;

{
LONGCARD B_17 = ZpmCQ_17(&Z243), B_18 = ZpmCQ_18(&Z243);

if (B_17 <= B_18)
for (Z220 = B_17;; Z220 += 1) {
if (ZpmCQ_25(Z220, &Z243) && (Z209->A[Z220].Y1 < 0 || !ZpmCQ_25((LONGCARD)Z209->A[Z220].Y1, &Z244))) {
return FALSE;
}
if (Z220 >= B_18) break;
}
}
return TRUE;
}

BOOLEAN ZaeBJF_3
# ifdef HAVE_ARGS
(CARDINAL Z247, BITSET Z248, ZpmCQ_4 Z249)
# else
(Z247, Z248, Z249)
CARDINAL Z247;
BITSET Z248;
ZpmCQ_4 Z249;
# endif
{
INTEGER Z220;
CARDINAL Z228, Z250;
INTEGER Z251, Z252;
INTEGER Z253, Z254;

if (Z212 == 0) {
return TRUE;
}
{
register ZiS8_7 *W_10 = &ZiS8_14->A[Z247];

{
LONGINT B_19 = 1, B_20 = Z212;

if (B_19 <= B_20)
for (Z220 = B_19;; Z220 += 1) {
{
register Z189 *W_11 = &Z214->A[Z220];

if (W_10->Y2 + W_10->Y3 == W_11->Y3 && W_11->Y5 == Z248) {
Z228 = 0;
for (;;) {
if (Z228 > W_11->Y3) {
W_11->Y4 = TRUE;
return FALSE;
}
if (ZiS8_17->A[W_10->Y0 + Z228].Y1 != W_11->Y6->A[Z228].Y1 || ZiS8_17->A[W_10->Y0 + Z228].Y0 != Z211->A[W_11->Y6->A[Z228].Y0].Y0) {
goto EXIT_2;
}
INC(Z228);
} EXIT_2:;
}
}
if (Z220 >= B_20) break;
}
}
{
LONGINT B_21 = 1, B_22 = Z212;

if (B_21 <= B_22)
for (Z220 = B_21;; Z220 += 1) {
{
register Z189 *W_12 = &Z214->A[Z220];

if (!W_12->Y4 && W_12->Y5 == Z248 && Z242(W_12->Y0, Z249)) {
Z252 = W_10->Y0 + W_10->Y2 + W_10->Y3;
Z251 = W_12->Y3;
Z254 = W_10->Y0 - 1;
Z253 = -1;
for (;;) {
for (;;) {
INC(Z254);
if (Z254 > Z252) {
goto EXIT_4;
}
{
register ZiS8_8 *W_13 = &ZiS8_17->A[Z254];

{
register Zq0A4_120 *W_14 = &Zq0A4_95->A[W_13->Y0]->U_1.V_18.Y17;

if (W_13->Y1 == W_14->Y12) {
ZiS8_49((SHORTCARD)Z247, (LONGCARD)Z254, &Z216);
ZpmCQ_10(&Z216, Z249);
if (!ZpmCQ_26(Z216)) {
goto EXIT_4;
}
} else {
Z250 = W_14->Y17->A[W_13->Y1 + 1];
if (Z250 < Zq0A4_91 && ZpmCQ_25(Z250, &Z249)) {
goto EXIT_4;
}
}
}
}
} EXIT_4:;
for (;;) {
INC(Z253);
if (Z253 > Z251) {
goto EXIT_5;
}
{
register Z185 *W_15 = &W_12->Y6->A[Z253];

if (W_15->Y2 != NIL) {
goto EXIT_5;
}
{
register Z181 *W_16 = &Z211->A[W_15->Y0];

Z250 = W_16->Y3->A[W_15->Y1 + 1];
if (Z250 < Z204 && ZpmCQ_25(Z250, &W_12->Y0)) {
goto EXIT_5;
}
}
}
} EXIT_5:;
if (Z254 > Z252 && Z253 > Z251) {
W_12->Y4 = TRUE;
return FALSE;
}
if (Z254 > Z252 || Z253 > Z251) {
goto EXIT_3;
}
if (ZiS8_17->A[Z254].Y1 != W_12->Y6->A[Z253].Y1 || ZiS8_17->A[Z254].Y0 != Z211->A[W_12->Y6->A[Z253].Y0].Y0) {
goto EXIT_3;
}
} EXIT_3:;
}
}
if (Z220 >= B_22) break;
}
}
INC(Z202);
ZfM_29(ZaeBJF_1, (STRING)"+ Conflict State ", 17L);
ZfM_25(ZaeBJF_1, (LONGINT)W_10->Y5, 0L);
ZfM_29(ZaeBJF_1, (STRING)" (", 2L);
ZfM_25(ZaeBJF_1, (LONGINT)Z247, 0L);
ZfM_29(ZaeBJF_1, (STRING)") on lookahead ", 15L);
ZpmC89LG6_7(ZaeBJF_1, Z249);
ZfM_33(ZaeBJF_1);
return TRUE;
}
}

void ZaeBJF_4
 ARGS ((void))
{
INTEGER Z220;
CARDINAL Z228, Z260;

if (Z202 > 0) {
ZfM_33(ZaeBJF_1);
}
Z203 = 0;
{
LONGINT B_23 = 1, B_24 = Z212;

if (B_23 <= B_24)
for (Z220 = B_23;; Z220 += 1) {
{
register Z189 *W_17 = &Z214->A[Z220];

if (!W_17->Y4) {
INC(Z203);
ZfM_29(ZaeBJF_1, (STRING)"- Conflict State ", 17L);
ZfM_25(ZaeBJF_1, (LONGINT)W_17->Y2, 0L);
ZfM_29(ZaeBJF_1, (STRING)" (", 2L);
ZfM_25(ZaeBJF_1, (LONGINT)W_17->Y1, 0L);
ZfM_29(ZaeBJF_1, (STRING)") on lookahead {", 16L);
Z260 = 0;
{
LONGCARD B_25 = ZpmCQ_17(&W_17->Y0), B_26 = ZpmCQ_18(&W_17->Y0);

if (B_25 <= B_26)
for (Z228 = B_25;; Z228 += 1) {
if (ZpmCQ_25(Z228, &W_17->Y0)) {
Zfb3DLQ_7(ZaeBJF_1, Z209->A[Z228].Y0);
ZfM_24(ZaeBJF_1, ' ');
INC(Z260);
if (Z260 == 10) {
Z260 = 0;
ZfM_33(ZaeBJF_1);
ZfM_24(ZaeBJF_1, '\t');
}
}
if (Z228 >= B_26) break;
}
}
ZfM_24(ZaeBJF_1, '}');
ZfM_33(ZaeBJF_1);
}
}
if (Z220 >= B_24) break;
}
}
if (Z203 > 0) {
ZfM_33(ZaeBJF_1);
}
if (Z196 + Z197 + Z198 + Z199 + Z200 + Z201 + Z202 + Z203 == 0) {
ZfM_29(ZaeBJF_1, (STRING)"no differences", 14L);
ZfM_33(ZaeBJF_1);
} else {
ZfM_29(ZaeBJF_1, (STRING)"Summary", 7L);
ZfM_33(ZaeBJF_1);
ZfM_29(ZaeBJF_1, (STRING)"-------", 7L);
ZfM_33(ZaeBJF_1);
ZfM_33(ZaeBJF_1);
Z261((STRING)"- Terminals    ", 15L, Z197);
Z261((STRING)"+ Terminals    ", 15L, Z196);
Z261((STRING)"- Nonterminals ", 15L, Z199);
Z261((STRING)"+ Nonterminals ", 15L, Z198);
Z261((STRING)"- Rules        ", 15L, Z201);
Z261((STRING)"+ Rules        ", 15L, Z200);
Z261((STRING)"- Conflicts    ", 15L, Z203);
Z261((STRING)"+ Conflicts    ", 15L, Z202);
}
}

static void Z261
# ifdef HAVE_ARGS
(CHAR Z262[], LONGCARD O_1, CARDINAL Z263)
# else
(Z262, O_1, Z263)
CHAR Z262[];
LONGCARD O_1;
CARDINAL Z263;
# endif
{
OPEN_ARRAY_LOCALS

ALLOC_OPEN_ARRAYS (O_1 * sizeof (CHAR), 1)
COPY_OPEN_ARRAY (Z262, O_1, CHAR)
if (Z263 > 0) {
ZfM_29(ZaeBJF_1, Z262, O_1);
ZfM_25(ZaeBJF_1, (LONGINT)Z263, 4L);
ZfM_33(ZaeBJF_1);
}
FREE_OPEN_ARRAYS
}

void ZaeBJF_5
# ifdef HAVE_ARGS
(CARDINAL Z247, BITSET Z194, ZpmCQ_4 Z190)
# else
(Z247, Z194, Z190)
CARDINAL Z247;
BITSET Z194;
ZpmCQ_4 Z190;
# endif
{
CARDINAL Z265;

{
register ZiS8_7 *W_18 = &ZiS8_14->A[Z247];

ZfM_29(ZaeBJF_0, (STRING)"STATE ", 6L);
ZfM_25(ZaeBJF_0, (LONGINT)Z247, 0L);
ZfM_24(ZaeBJF_0, ' ');
ZfM_25(ZaeBJF_0, (LONGINT)W_18->Y5, 0L);
ZfM_24(ZaeBJF_0, ' ');
ZfM_25(ZaeBJF_0, (LONGINT)(W_18->Y2 + W_18->Y3), 0L);
ZfM_24(ZaeBJF_0, ' ');
ZpmCQ_35(ZaeBJF_0, Z190);
ZfM_24(ZaeBJF_0, ' ');
ZfM_28(ZaeBJF_0, (LONGCARD)Z194, 4L, 16L);
ZfM_33(ZaeBJF_0);
{
LONGCARD B_27 = W_18->Y0, B_28 = W_18->Y0 + W_18->Y2;

if (B_27 <= B_28)
for (Z265 = B_27;; Z265 += 1) {
{
register ZiS8_8 *W_19 = &ZiS8_17->A[Z265];

{
register Zq0A4_120 *W_20 = &Zq0A4_95->A[W_19->Y0]->U_1.V_18.Y17;

{
register ZiS8_9 *W_21 = &ZiS8_20->A[Z265 - W_18->Y0 + W_18->Y1];

ZfM_25(ZaeBJF_0, (LONGINT)W_19->Y0, 0L);
ZfM_24(ZaeBJF_0, ' ');
ZfM_25(ZaeBJF_0, (LONGINT)W_19->Y1, 0L);
ZfM_24(ZaeBJF_0, ' ');
if (W_21->Y0 != NIL && W_19->Y1 == W_20->Y12) {
ZpmCQ_30(&Z216, *W_21->Y0);
ZpmCQ_10(&Z216, Z190);
if (!ZpmCQ_26(Z216)) {
ZfM_25(ZaeBJF_0, (LONGINT)ZpmCQ_15(&Z216), 0L);
ZfM_24(ZaeBJF_0, ' ');
ZpmCQ_35(ZaeBJF_0, Z216);
} else {
ZfM_24(ZaeBJF_0, '0');
}
} else {
ZfM_24(ZaeBJF_0, '0');
}
ZfM_33(ZaeBJF_0);
}
}
}
if (Z265 >= B_28) break;
}
}
{
LONGCARD B_29 = W_18->Y0 + W_18->Y2 + 1, B_30 = W_18->Y0 + W_18->Y2 + W_18->Y3;

if (B_29 <= B_30)
for (Z265 = B_29;; Z265 += 1) {
{
register ZiS8_8 *W_22 = &ZiS8_17->A[Z265];

{
register Zq0A4_120 *W_23 = &Zq0A4_95->A[W_22->Y0]->U_1.V_18.Y17;

ZfM_25(ZaeBJF_0, (LONGINT)W_22->Y0, 0L);
ZfM_24(ZaeBJF_0, ' ');
ZfM_25(ZaeBJF_0, (LONGINT)W_22->Y1, 0L);
ZfM_24(ZaeBJF_0, ' ');
if (W_22->Y1 == W_23->Y12) {
ZiS8_49((SHORTCARD)Z247, Z265, &Z216);
ZpmCQ_10(&Z216, Z190);
if (!ZpmCQ_26(Z216)) {
ZfM_25(ZaeBJF_0, (LONGINT)ZpmCQ_15(&Z216), 0L);
ZfM_24(ZaeBJF_0, ' ');
ZpmCQ_35(ZaeBJF_0, Z216);
} else {
ZfM_24(ZaeBJF_0, '0');
}
} else {
ZfM_24(ZaeBJF_0, '0');
}
ZfM_33(ZaeBJF_0);
}
}
if (Z265 >= B_30) break;
}
}
}
}

static void Z267
# ifdef HAVE_ARGS
(CHAR Z268[], LONGCARD O_2)
# else
(Z268, O_2)
CHAR Z268[];
LONGCARD O_2;
# endif
{
OPEN_ARRAY_LOCALS

ALLOC_OPEN_ARRAYS (O_2 * sizeof (CHAR), 1)
COPY_OPEN_ARRAY (Z268, O_2, CHAR)
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)"Error: module Delta, routine ", 29L);
ZfM_29((ZDz6VQCC_4)ZfM_2, Z268, O_2);
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)" failed", 7L);
ZfM_33((ZDz6VQCC_4)ZfM_2);
(*ZaeBJF_8)();
FREE_OPEN_ARRAYS
}

static BOOLEAN Z271
# ifdef HAVE_ARGS
(BYTE Z272[], LONGCARD O_4, BYTE Z273[], LONGCARD O_3)
# else
(Z272, O_4, Z273, O_3)
BYTE Z272[];
LONGCARD O_4;
BYTE Z273[];
LONGCARD O_3;
# endif
{
INTEGER Z274;
OPEN_ARRAY_LOCALS

ALLOC_OPEN_ARRAYS (O_3 * sizeof (WORD) + O_4 * sizeof (WORD), 2)
COPY_OPEN_ARRAY (Z273, O_3, WORD)
COPY_OPEN_ARRAY (Z272, O_4, WORD)
{
LONGINT B_31 = 0, B_32 = (INTEGER)(O_4 - 1);

if (B_31 <= B_32)
for (Z274 = B_31;; Z274 += 1) {
if (Z272[Z274] != Z273[Z274]) {
FREE_OPEN_ARRAYS
return FALSE;
}
if (Z274 >= B_32) break;
}
}
FREE_OPEN_ARRAYS
return TRUE;
}

void ZaeBJF_9
# ifdef HAVE_ARGS
(Zq0A4_35 Z276)
# else
(Z276)
Zq0A4_35 Z276;
# endif
{
struct S_10 Z277;

{
register Zq0A4_105 *W_24 = &Z276->U_1.V_3.Y2;

ZpmCQ_5(&Z216, Zq0A4_91);
ZaeBJF_6 = ZaeBJF_0;
ZfM_29(ZaeBJF_6, (STRING)"GRAMMAR ", 8L);
ZfM_25(ZaeBJF_0, (LONGINT)ZpmC89LG6_0, 0L);
ZfM_29(ZaeBJF_6, (STRING)" ", 1L);
ZfM_25(ZaeBJF_0, (LONGINT)ZpmC89LG6_1, 0L);
ZfM_29(ZaeBJF_6, (STRING)" ", 1L);
ZfM_25(ZaeBJF_0, (LONGINT)Zq0A4_90, 0L);
ZfM_29(ZaeBJF_6, (STRING)" ", 1L);
ZfM_25(ZaeBJF_0, (LONGINT)ZpmC89LG6_2, 0L);
ZfM_33(ZaeBJF_6);
ZfM_29(ZaeBJF_6, (STRING)"TERMINAL", 8L);
ZfM_33(ZaeBJF_6);
Zq0A4_190(W_24->Y1, (Zq0A4_36)Z279);
ZfM_29(ZaeBJF_6, (STRING)"NONTERMINAL", 11L);
ZfM_33(ZaeBJF_6);
Zq0A4_190(W_24->Y5, (Zq0A4_36)Z279);
ZfM_29(ZaeBJF_6, (STRING)"RULE", 4L);
ZfM_33(ZaeBJF_6);
Zq0A4_190(W_24->Y5, (Zq0A4_36)Z280);
return;
}
}

static void Z279
# ifdef HAVE_ARGS
(Zq0A4_35 Z281)
# else
(Z281)
Zq0A4_35 Z281;
# endif
{
struct S_9 Z277;

if (Z281 != NIL && Z281->U_1.V_1.Y0 == Zq0A4_6) {
for (;;) {
{
register Zq0A4_108 *W_25 = &Z281->U_1.V_6.Y5;

if (!IN(Zq0A4_47, W_25->Y7)) {
goto EXIT_6;
}
ZfM_25(ZaeBJF_0, (LONGINT)W_25->Y10, 0L);
ZfM_29(ZaeBJF_6, (STRING)" ", 1L);
Zfb3DLQ_7(ZaeBJF_0, W_25->Y2);
ZfM_33(ZaeBJF_6);
return;
}
} EXIT_6:;
}
if (Z281 != NIL && Z281->U_1.V_1.Y0 == Zq0A4_9) {
for (;;) {
{
register Zq0A4_111 *W_26 = &Z281->U_1.V_9.Y8;

if (!IN(Zq0A4_47, W_26->Y5)) {
goto EXIT_7;
}
ZfM_25(ZaeBJF_0, (LONGINT)W_26->Y8, 0L);
ZfM_29(ZaeBJF_6, (STRING)" ", 1L);
Zfb3DLQ_7(ZaeBJF_0, W_26->Y2);
ZfM_33(ZaeBJF_6);
return;
}
} EXIT_7:;
}
}

static void Z280
# ifdef HAVE_ARGS
(Zq0A4_35 Z282)
# else
(Z282)
Zq0A4_35 Z282;
# endif
{
SHORTCARD Z220;
struct S_8 Z277;

if (Z282 != NIL && Z282->U_1.V_1.Y0 == Zq0A4_9) {
for (;;) {
{
register Zq0A4_111 *W_27 = &Z282->U_1.V_9.Y8;

if (!IN(Zq0A4_47, W_27->Y5)) {
goto EXIT_8;
}
Zq0A4_190(W_27->Y4, (Zq0A4_36)Z280);
return;
}
} EXIT_8:;
}
if (Zq0A4_155(Z282, Zq0A4_18)) {
{
register Zq0A4_120 *W_28 = &Z282->U_1.V_18.Y17;

ZfM_25(ZaeBJF_0, (LONGINT)W_28->Y14, 0L);
ZfM_29(ZaeBJF_6, (STRING)" ", 1L);
ZfM_25(ZaeBJF_0, (LONGINT)W_28->Y12, 0L);
ZfM_29(ZaeBJF_6, (STRING)" ", 1L);
ZfM_25(ZaeBJF_0, (LONGINT)W_28->Y16->U_1.V_9.Y8.Y8, 0L);
ZfM_29(ZaeBJF_6, (STRING)" ", 1L);
{
SHORTCARD B_33 = 1, B_34 = W_28->Y12;

if (B_33 <= B_34)
for (Z220 = B_33;; Z220 += 1) {
ZfM_25(ZaeBJF_0, (LONGINT)W_28->Y17->A[Z220], 0L);
ZfM_24(ZaeBJF_0, ' ');
if (Z220 >= B_34) break;
}
}
ZfM_33(ZaeBJF_6);
return;
}
}
if (Z282 != NIL && Z282->U_1.V_1.Y0 == Zq0A4_26) {
{
register Zq0A4_128 *W_29 = &Z282->U_1.V_26.Y25;

Zfb3DLQ_7(ZaeBJF_0, W_29->Y2);
ZfM_29(ZaeBJF_6, (STRING)" ", 1L);
return;
}
}
}

void ZaeBJF_10
 ARGS ((void))
{
Z212 = 0;
Z213 = 200;
}

void ZaeBJF_11
 ARGS ((void))
{
}

static void Z287
 ARGS ((void))
{
ZfM_34();
rExit(1L);
}

void BEGIN_Delta ARGS ((void))
{
  static BOOLEAN has_been_called = FALSE;
  if (has_been_called) return;
  has_been_called = TRUE;
BEGIN_IO ();
BEGIN_Tree ();
BEGIN_IO ();
BEGIN_Sets ();
BEGIN_rSystem ();
BEGIN_IO ();
BEGIN_Tree ();
BEGIN_IO ();
BEGIN_DynArray ();
BEGIN_Strings ();
BEGIN_Idents ();
BEGIN_Sets ();
BEGIN_Tree ();
BEGIN_Semantic ();
BEGIN_LR1 ();

ZaeBJF_6 = ZfM_1;
ZaeBJF_8 = Z287;
ZaeBJF_10();
}
