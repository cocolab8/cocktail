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

#ifndef DEFINITION_General
#include "General.h"
#endif

#ifndef DEFINITION_DynArray
#include "DynArray.h"
#endif

#ifndef DEFINITION_IO
#include "IO.h"
#endif

#ifndef DEFINITION_StringM
#include "StringM.h"
#endif

#ifndef DEFINITION_Texts
#include "Texts.h"
#endif

#ifndef DEFINITION_Sets
#include "Sets.h"
#endif

#ifndef DEFINITION_TreeJav1
#include "TreeJav1.h"
#endif

#ifndef DEFINITION_TreeJav2
#include "TreeJav2.h"
#endif

#ifndef DEFINITION_EvalJava
#include "EvalJava.h"
#endif

#ifndef DEFINITION_EvalJav3
#include "EvalJav3.h"
#endif

#ifndef DEFINITION_EvalJava
#include "EvalJava.h"
#endif

#ifndef DEFINITION_Tree
#include "Tree.h"
#endif

#ifndef DEFINITION_EvalJav4
#include "EvalJav4.h"
#endif

ZfM_3 ZbpA7kgAf_0;
BOOLEAN ZbpA7kgAf_1;
PROC ZbpA7kgAf_2;

#define Z175	256
typedef struct S_11 {
SHORTCARD A[100000 + 1];
} *Z176;
static SHORTCARD Z177, Z178, Z179;
static INTEGER Z180, Z181, Z182;
static Zq0A4_153 Z183, Z184, Z185;
static struct S_1 {
Z176 A[100000 + 1];
} *Z186;
static struct S_2 {
SHORTCARD A[100000 + 1];
} *Z187;
static LONGINT Z188, Z189;
static void Z190 ARGS ((CHAR Z191[], LONGCARD O_1));
static BOOLEAN Z194 ARGS ((BYTE Z195[], LONGCARD O_3, BYTE Z196[], LONGCARD O_2));
struct S_8 {
union {
char dummy;
} U_1;
};
static void Z204 ARGS ((Zq0A4_153 Z199));
struct S_7 {
union {
char dummy;
} U_1;
};
static void Z207 ARGS ((Zq0A4_153 Z199));
struct S_6 {
union {
char dummy;
} U_1;
};
static void Z220 ARGS ((Zq0A4_153 Z199));
struct S_5 {
union {
char dummy;
} U_1;
};
static void Z206 ARGS ((Zq0A4_153 Z199));
struct S_3 {
union {
struct {
struct S_4 {
Zq0A4_153 Y0;
INTEGER Y1;
} Y0;
} V_1;
} U_1;
};
static void Z256 ARGS ((void));

static void Z190
# ifdef HAVE_ARGS
(CHAR Z191[], LONGCARD O_1)
# else
(Z191, O_1)
CHAR Z191[];
LONGCARD O_1;
# endif
{
OPEN_ARRAY_LOCALS

ALLOC_OPEN_ARRAYS (O_1 * sizeof (CHAR), 1)
COPY_OPEN_ARRAY (Z191, O_1, CHAR)
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)"Error: module EvalJav4, routine ", 32L);
ZfM_29((ZDz6VQCC_4)ZfM_2, Z191, O_1);
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)" failed", 7L);
ZfM_33((ZDz6VQCC_4)ZfM_2);
(*ZbpA7kgAf_2)();
FREE_OPEN_ARRAYS
}

static BOOLEAN Z194
# ifdef HAVE_ARGS
(BYTE Z195[], LONGCARD O_3, BYTE Z196[], LONGCARD O_2)
# else
(Z195, O_3, Z196, O_2)
BYTE Z195[];
LONGCARD O_3;
BYTE Z196[];
LONGCARD O_2;
# endif
{
INTEGER Z197;
OPEN_ARRAY_LOCALS

ALLOC_OPEN_ARRAYS (O_2 * sizeof (WORD) + O_3 * sizeof (WORD), 2)
COPY_OPEN_ARRAY (Z196, O_2, WORD)
COPY_OPEN_ARRAY (Z195, O_3, WORD)
{
LONGINT B_1 = 0, B_2 = (INTEGER)(O_3 - 1);

if (B_1 <= B_2)
for (Z197 = B_1;; Z197 += 1) {
if (Z195[Z197] != Z196[Z197]) {
FREE_OPEN_ARRAYS
return FALSE;
}
if (Z197 >= B_2) break;
}
}
FREE_OPEN_ARRAYS
return TRUE;
}

void ZbpA7kgAf_3
# ifdef HAVE_ARGS
(Zq0A4_153 Z199)
# else
(Z199)
Zq0A4_153 Z199;
# endif
{
struct S_8 Z200;

if (Z199 == Zq0A4_97) {
return;
}
if (Z199 != NIL && Z199->U_1.V_1.Y0 == Zq0A4_127) {
{
register Zq0A4_253 *W_1 = &Z199->U_1.V_32.Y31;

ZbpA7kgAA_4(Z199);
ZfM_29(Zq0A4_172, (STRING)"private static final int yyCheck2 = /* ??? */ ", 46L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)".Generate", 9L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"ModuleWithoutOption0;", 21L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"static final int yyInitStackSize	= 100;", 39L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)" yyNodeStack[] = new ", 21L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)"[yyInitStackSize];", 18L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"int yyPCStack[];", 16L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"int  yyStackPtr;", 16L);
ZfM_33(Zq0A4_172);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)" yyt;", 5L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
Z188 = Zq0A4_70 + 1;
ZarQdhNDD_0((ADDRESS *)&Z186, &Z188, (LONGINT)sizeof (Z176));
ZarQdhNDD_0((ADDRESS *)&Z187, &Z188, (LONGINT)sizeof (SHORTCARD));
Z189 = Zq0A4_68 + 1;
{
SHORTCARD B_3 = 1, B_4 = Zq0A4_70;

if (B_3 <= B_4)
for (Z177 = B_3;; Z177 += 1) {
ZarQdhNDD_0((ADDRESS *)&Z186->A[Z177], &Z189, (LONGINT)sizeof (SHORTCARD));
{
LONGINT B_5 = 1, B_6 = Zq0A4_68;

if (B_5 <= B_6)
for (Z181 = B_5;; Z181 += 1) {
Z186->A[Z177]->A[Z181] = 0;
if (Z181 >= B_6) break;
}
}
Z187->A[Z177] = 0;
ZfM_29(Zq0A4_172, (STRING)"void yyVisit", 12L);
Zq0A4_195((LONGINT)Z177);
ZfM_29(Zq0A4_172, (STRING)" () {", 5L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" yyPCStack[yyStackPtr++]++;", 27L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" if (yyStackPtr == yyNodeStack.length) {", 40L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  yyNodeStack = DynArrayObject.extend (yyNodeStack);", 52L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  yyPCStack = DynArrayInt.extend (yyPCStack);", 45L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" }", 2L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" yyNodeStack[yyStackPtr] = yyt;", 31L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" yyPCStack[yyStackPtr]   = yyMapDown", 36L);
Zq0A4_195((LONGINT)Z177);
ZfM_29(Zq0A4_172, (STRING)"[yyt.yyKind];", 13L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"}", 1L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
if (Z177 >= B_4) break;
}
}
ZfM_29(Zq0A4_172, (STRING)"void yyParent () {", 18L);
ZfM_33(Zq0A4_172);
if (ZpmCQ_25(ORD('Z'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)" yyVisitParent (yyt);", 21L);
ZfM_33(Zq0A4_172);
}
ZfM_29(Zq0A4_172, (STRING)" yyt = yyNodeStack[--yyStackPtr];", 33L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"}", 1L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
Z178 = 0;
Z180 = 0;
Z204(Z199);
Zq0A4_184(W_1->Y13, (Zq0A4_170)Z206);
if (Z178 % Z175 != 0) {
Z178 = (Z178 / Z175 + 1) * Z175;
Z207(Z199);
DEC(Z178);
}
Z179 = Z178 / Z175;
ZfM_29(Zq0A4_172, (STRING)"Proc yyP[", 9L);
Zq0A4_195((LONGINT)(Z179 + 1));
ZfM_29(Zq0A4_172, (STRING)"];", 2L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"void Eval (", 11L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)" yyyt) {", 8L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" yyPCStack = new int[yyInitStackSize];", 38L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" yyStackPtr = 1;", 16L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" yyNodeStack[yyStackPtr] = yyyt;", 32L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" yyPCStack[yyStackPtr]   = yyMapDown1[yyyt.yyKind];", 51L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" yyt = yyyt;", 12L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" do {", 5L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  yyP[yyPCStack[yyStackPtr] / ", 30L);
Zq0A4_195((LONGINT)Z175);
ZfM_29(Zq0A4_172, (STRING)"];", 2L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" while (yyStackPtr != 0);", 25L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"}", 1L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"void begin", 10L);
Zq0A4_192(W_1->Y7);
ZfM_29(Zq0A4_172, (STRING)"() {", 4L);
ZfM_33(Zq0A4_172);
Zq0A4dgAd_1(W_1->Y8->U_1.V_17.Y16.Y11);
ZqnGVQ_5(Zq0A4_172, W_1->Y8->U_1.V_17.Y16.Y5);
Z183 = W_1->Y14;
while (Z183->U_1.V_1.Y0 == Zq0A4_144) {
Zq0A4dgAd_1(Z183->U_1.V_49.Y48.Y8->U_1.V_17.Y16.Y11);
ZqnGVQ_5(Zq0A4_172, Z183->U_1.V_49.Y48.Y8->U_1.V_17.Y16.Y5);
Z183 = Z183->U_1.V_49.Y48.Y12;
}
ZfM_29(Zq0A4_172, (STRING)"}", 1L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"void close", 10L);
Zq0A4_192(W_1->Y7);
ZfM_29(Zq0A4_172, (STRING)"() {", 4L);
ZfM_33(Zq0A4_172);
Zq0A4dgAd_1(W_1->Y8->U_1.V_17.Y16.Y12);
ZqnGVQ_5(Zq0A4_172, W_1->Y8->U_1.V_17.Y16.Y6);
Z183 = W_1->Y14;
while (Z183->U_1.V_1.Y0 == Zq0A4_144) {
Zq0A4dgAd_1(Z183->U_1.V_49.Y48.Y8->U_1.V_17.Y16.Y12);
ZqnGVQ_5(Zq0A4_172, Z183->U_1.V_49.Y48.Y8->U_1.V_17.Y16.Y6);
Z183 = Z183->U_1.V_49.Y48.Y12;
}
ZfM_29(Zq0A4_172, (STRING)"}", 1L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
{
SHORTCARD B_7 = 1, B_8 = Zq0A4_70;

if (B_7 <= B_8)
for (Z177 = B_7;; Z177 += 1) {
ZfM_29(Zq0A4_172, (STRING)"int[", 4L);
Zq0A4_195((LONGINT)Z187->A[Z177]);
ZfM_29(Zq0A4_172, (STRING)"] yyMapDown", 11L);
Zq0A4_195((LONGINT)Z177);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
if (Z177 >= B_8) break;
}
}
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"static {", 8L);
ZfM_33(Zq0A4_172);
if (ZpmCQ_25(ORD('X'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)" yyf := IO.StdOutput;", 21L);
ZfM_33(Zq0A4_172);
}
{
SHORTCARD B_9 = 1, B_10 = Zq0A4_70;

if (B_9 <= B_10)
for (Z177 = B_9;; Z177 += 1) {
{
SHORTCARD B_11 = 1, B_12 = Z187->A[Z177];

if (B_11 <= B_12)
for (Z178 = B_11;; Z178 += 1) {
if (Z186->A[Z177]->A[Z178] != 0 || Z177 == 1) {
ZfM_29(Zq0A4_172, (STRING)" yyMapDown", 10L);
Zq0A4_195((LONGINT)Z177);
ZfM_29(Zq0A4_172, (STRING)"[", 1L);
Zq0A4_195((LONGINT)Z178);
ZfM_29(Zq0A4_172, (STRING)"] = ", 4L);
Zq0A4_195((LONGINT)Z186->A[Z177]->A[Z178]);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
}
if (Z178 >= B_12) break;
}
}
if (Z177 >= B_10) break;
}
}
{
SHORTCARD B_13 = 0, B_14 = Z179;

if (B_13 <= B_14)
for (Z177 = B_13;; Z177 += 1) {
ZfM_29(Zq0A4_172, (STRING)" yyP[", 5L);
Zq0A4_195((LONGINT)Z177);
ZfM_29(Zq0A4_172, (STRING)"] = yy", 6L);
Zq0A4_195((LONGINT)Z177);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
if (Z177 >= B_14) break;
}
}
ZfM_29(Zq0A4_172, (STRING)"}", 1L);
ZfM_33(Zq0A4_172);
return;
}
}
}

static void Z204
# ifdef HAVE_ARGS
(Zq0A4_153 Z199)
# else
(Z199)
Zq0A4_153 Z199;
# endif
{
struct S_7 Z200;

if (Z199 == Zq0A4_97) {
return;
}
ZfM_29(Zq0A4_172, (STRING)"void yy", 7L);
Zq0A4_195((LONGINT)(Z178 / Z175));
ZfM_29(Zq0A4_172, (STRING)"() {", 4L);
ZfM_33(Zq0A4_172);
Zq0A4dgAd_1(Zq0A4_279->U_1.V_32.Y31.Y8->U_1.V_17.Y16.Y10);
ZqnGVQ_5(Zq0A4_172, Zq0A4_279->U_1.V_32.Y31.Y8->U_1.V_17.Y16.Y4);
Z183 = Zq0A4_279->U_1.V_32.Y31.Y14;
while (Z183->U_1.V_1.Y0 == Zq0A4_144) {
Zq0A4dgAd_1(Z183->U_1.V_49.Y48.Y8->U_1.V_17.Y16.Y10);
ZqnGVQ_5(Zq0A4_172, Z183->U_1.V_49.Y48.Y8->U_1.V_17.Y16.Y4);
Z183 = Z183->U_1.V_49.Y48.Y12;
}
ZfM_29(Zq0A4_172, (STRING)" do {", 5L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  switch (yyPCStack[yyStackPtr]) {", 34L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  case ", 7L);
Zq0A4_195((LONGINT)Z178);
ZfM_29(Zq0A4_172, (STRING)":", 1L);
ZfM_33(Zq0A4_172);
return;
}

static void Z207
# ifdef HAVE_ARGS
(Zq0A4_153 Z199)
# else
(Z199)
Zq0A4_153 Z199;
# endif
{
struct S_6 Z200;

if (Z199 == Zq0A4_97) {
return;
}
ZfM_29(Zq0A4_172, (STRING)"   defaukt: return;", 19L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   }", 4L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  } while (yyStackPtr != 0);", 28L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"}", 1L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
return;
}

static void Z220
# ifdef HAVE_ARGS
(Zq0A4_153 Z199)
# else
(Z199)
Zq0A4_153 Z199;
# endif
{
struct S_5 Z200;

if (Z199 == Zq0A4_97) {
return;
}
INC(Z178);
if (Z178 % Z175 == 0) {
Z207(Z199);
Z204(Z199);
} else {
ZfM_29(Zq0A4_172, (STRING)"   case ", 8L);
Zq0A4_195((LONGINT)Z178);
ZfM_29(Zq0A4_172, (STRING)":", 1L);
ZfM_33(Zq0A4_172);
}
return;
}

static void Z206
# ifdef HAVE_ARGS
(Zq0A4_153 Z199)
# else
(Z199)
Zq0A4_153 Z199;
# endif
{
struct S_3 Z200;

if (Z199 == Zq0A4_97) {
return;
}
if (Z199 != NIL) {
switch (Z199->U_1.V_1.Y0) {
case Zq0A4_100:;
for (;;) {
{
register Zq0A4_226 *W_2 = &Z199->U_1.V_5.Y4;

if (!((Zq0A4_177 & W_2->Y2) == 0X0L)) {
goto EXIT_1;
}
INC(Z180);
Z182 = 1;
Z186->A[1]->A[Z180] = Z178;
Z187->A[1] = ZdaDDAD7_4((LONGINT)Z187->A[1], Z180);
ZbpA7kgAA_0 = Z199;
Z177 = 1;
for (;;) {
{
register Zq0A4_199 *W_3 = &W_2->Y15->A[W_2->Y15->A[Z177 - 1].Y4 - 1];

if (Z177 > W_2->Y14) {
goto EXIT_2;
}
if (SET_IS_SUBSET1(SET_ELEM (Zq0A4_6) | SET_ELEM (Zq0A4_20), W_3->Y3) || IN(Zq0A4_8, W_3->Y3)) {
INC(Z177);
} else {
goto EXIT_2;
}
}
} EXIT_2:;
{
SHORTCARD B_15 = Z177, B_16 = W_2->Y14;

if (B_15 <= B_16)
for (Z177 = B_15;; Z177 += 1) {
{
register Zq0A4_199 *W_4 = &W_2->Y15->A[W_2->Y15->A[Z177 - 1].Y4 - 1];

if (SET_IS_SUBSET1(SET_ELEM (Zq0A4_6) | SET_ELEM (Zq0A4_21) | SET_ELEM (Zq0A4_26), W_4->Y3) && !IN(Zq0A4_1, W_4->Y3)) {
if (ZpmCQ_25(ORD('X'), &Zq0A4_171) && IN(Zq0A4_42, Z199->U_1.V_5.Y4.Y2)) {
ZfM_29(Zq0A4_172, (STRING)"yyWriteEval (yyt, \"", 19L);
ZfM_33(Zq0A4_172);
Zq0A4_192(W_4->Y0->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)":", 1L);
Zq0A4_192(W_4->Y1->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)"\");", 3L);
ZfM_33(Zq0A4_172);
if (W_4->Y2 != (Zq0A4_153)ADR (W_4->Y2)) {
Z206(W_4->Y2);
}
ZfM_33(Zq0A4_172);
if (W_4->Y1->U_1.V_1.Y0 == Zq0A4_105 || W_4->Y1->U_1.V_11.Y10.Y4 == Zq0A4_86) {
ZfM_29(Zq0A4_172, (STRING)"write", 5L);
Zq0A4_192(Zq0A4_86);
} else {
ZfM_29(Zq0A4_172, (STRING)"write", 5L);
Zq0A4_192(W_4->Y1->U_1.V_10.Y9.Y4);
}
ZfM_29(Zq0A4_172, (STRING)"(yyt.", 5L);
Zq0A4_192(W_2->Y1);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(W_4->Y0->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(W_4->Y0->U_1.V_10.Y9.Y4);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(W_4->Y1->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)") yyWriteNl ();", 15L);
ZfM_33(Zq0A4_172);
} else if (ZpmCQ_25(ORD('Y'), &Zq0A4_171) && IN(Zq0A4_42, Z199->U_1.V_5.Y4.Y2)) {
ZfM_29(Zq0A4_172, (STRING)"yyWriteEval (yyt, \"", 19L);
ZfM_33(Zq0A4_172);
Zq0A4_192(W_4->Y0->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)":", 1L);
Zq0A4_192(W_4->Y1->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)"\");", 3L);
ZfM_33(Zq0A4_172);
if (W_4->Y2 != (Zq0A4_153)ADR (W_4->Y2)) {
Z206(W_4->Y2);
}
} else {
if (W_4->Y2 != (Zq0A4_153)ADR (W_4->Y2)) {
Z206(W_4->Y2);
}
}
}
if (SET_IS_SUBSET1(SET_ELEM (Zq0A4_7) | SET_ELEM (Zq0A4_20) | SET_ELEM (Zq0A4_26), W_4->Y3) && ((SET_ELEM (Zq0A4_27) | SET_ELEM (Zq0A4_1)) & W_4->Y3) == 0X0L) {
if (ZpmCQ_25(ORD('X'), &Zq0A4_171) && IN(Zq0A4_42, Z199->U_1.V_5.Y4.Y2)) {
ZfM_29(Zq0A4_172, (STRING)"yyWriteEval (yyt, \"", 19L);
ZfM_33(Zq0A4_172);
Zq0A4_192(W_4->Y1->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)"\");", 3L);
ZfM_33(Zq0A4_172);
if (W_4->Y2 != (Zq0A4_153)ADR (W_4->Y2)) {
Z206(W_4->Y2);
}
ZfM_33(Zq0A4_172);
if (IN(Zq0A4_19, W_4->Y3)) {
ZfM_29(Zq0A4_172, (STRING)"writeBOOLEAN (yyb) yyWriteNl ();", 32L);
ZfM_33(Zq0A4_172);
} else if (W_4->Y1->U_1.V_1.Y0 == Zq0A4_105 || W_4->Y1->U_1.V_11.Y10.Y4 == Zq0A4_86) {
ZfM_29(Zq0A4_172, (STRING)"write", 5L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)"(yyt.", 5L);
Zq0A4_192(W_2->Y1);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(W_4->Y1->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)") yyWriteNl ();", 15L);
ZfM_33(Zq0A4_172);
} else {
ZfM_29(Zq0A4_172, (STRING)"write", 5L);
Zq0A4_192(W_4->Y1->U_1.V_10.Y9.Y4);
ZfM_29(Zq0A4_172, (STRING)"(yyt.", 5L);
Zq0A4_192(W_2->Y1);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(W_4->Y1->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)") yyWriteNl ();", 15L);
ZfM_33(Zq0A4_172);
}
} else if (ZpmCQ_25(ORD('Y'), &Zq0A4_171) && IN(Zq0A4_42, Z199->U_1.V_5.Y4.Y2)) {
ZfM_29(Zq0A4_172, (STRING)"yyWriteEval (yyt, \"", 19L);
ZfM_33(Zq0A4_172);
Zq0A4_192(W_4->Y1->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)"\");", 3L);
ZfM_33(Zq0A4_172);
if (W_4->Y2 != (Zq0A4_153)ADR (W_4->Y2)) {
Z206(W_4->Y2);
}
} else {
if (W_4->Y2 != (Zq0A4_153)ADR (W_4->Y2)) {
Z206(W_4->Y2);
}
}
}
if (SET_IS_SUBSET1(SET_ELEM (Zq0A4_7) | SET_ELEM (Zq0A4_21) | SET_ELEM (Zq0A4_26), W_4->Y3) && W_4->Y1->U_1.V_10.Y9.Y11 <= W_4->Y0->U_1.V_10.Y9.Y8->U_1.V_5.Y4.Y22) {
if (ZpmCQ_25(ORD('Z'), &Zq0A4_171) && IN(Zq0A4_42, Z199->U_1.V_5.Y4.Y2)) {
ZfM_29(Zq0A4_172, (STRING)"yyWriteVisit (yyt, \"", 20L);
Zq0A4_192(W_4->Y0->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)" ", 1L);
Zq0A4_195((LONGINT)W_4->Y1->U_1.V_10.Y9.Y11);
ZfM_29(Zq0A4_172, (STRING)"\");", 3L);
ZfM_33(Zq0A4_172);
}
ZfM_29(Zq0A4_172, (STRING)"yyt = yyt.", 10L);
Zq0A4_192(W_2->Y1);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(W_4->Y0->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_29(Zq0A4_172, (STRING)" yyVisit", 8L);
Zq0A4_195((LONGINT)W_4->Y1->U_1.V_10.Y9.Y11);
ZfM_29(Zq0A4_172, (STRING)" ();", 4L);
ZfM_33(Zq0A4_172);
Z220(Z199);
}
if (SET_IS_SUBSET1(SET_ELEM (Zq0A4_6) | SET_ELEM (Zq0A4_20) | SET_ELEM (Zq0A4_26), W_4->Y3)) {
ZfM_29(Zq0A4_172, (STRING)"   yyParent ();", 15L);
ZfM_33(Zq0A4_172);
Z220(Z199);
INC(Z182);
Z186->A[Z182]->A[Z180] = Z178;
Z187->A[Z182] = ZdaDDAD7_4((LONGINT)Z187->A[Z182], Z180);
}
}
if (Z177 >= B_16) break;
}
}
ZfM_29(Zq0A4_172, (STRING)"   yyParent ();", 15L);
ZfM_33(Zq0A4_172);
if (Z180 < Zq0A4_68) {
Z220(Z199);
}
return;
}
} EXIT_1:;
break;
case Zq0A4_137:;
{
register Zq0A4_263 *W_5 = &Z199->U_1.V_42.Y41;

Zq0A4dgAd_1(W_5->Y2);
Z206(W_5->Y4);
ZfM_29(Zq0A4_172, (STRING)"=", 1L);
Z206(W_5->Y5);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
return;
}
break;
case Zq0A4_138:;
{
register Zq0A4_264 *W_6 = &Z199->U_1.V_43.Y42;

Zq0A4dgAd_1(W_6->Y2);
Z206(W_6->Y4);
ZfM_29(Zq0A4_172, (STRING)"=", 1L);
Z206(W_6->Y5);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
return;
}
break;
case Zq0A4_139:;
{
register Zq0A4_265 *W_7 = &Z199->U_1.V_44.Y43;

Zq0A4dgAd_1(W_7->Y2);
Z206(W_7->Y5);
ZfM_33(Zq0A4_172);
return;
}
break;
case Zq0A4_141:;
{
register Zq0A4_267 *W_8 = &Z199->U_1.V_46.Y45;

Zq0A4dgAd_1(W_8->Y2);
if (W_8->Y4 != Zq0A4_97) {
ZfM_29(Zq0A4_172, (STRING)"if (!(", 6L);
if (ZpmCQ_25(ORD('X'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)"yyb == ", 7L);
}
Z206(W_8->Y4);
ZfM_29(Zq0A4_172, (STRING)")) {", 4L);
Z206(W_8->Y5);
ZfM_29(Zq0A4_172, (STRING)"; }", 3L);
ZfM_33(Zq0A4_172);
if (W_8->Y6->U_1.V_1.Y0 == Zq0A4_141) {
ZfM_29(Zq0A4_172, (STRING)"else", 4L);
ZfM_33(Zq0A4_172);
Z206(W_8->Y6);
}
} else {
if (ZpmCQ_25(ORD('X'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)"yyb = false; ", 13L);
}
Z206(W_8->Y5);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
Z206(W_8->Y6);
}
return;
}
break;
case Zq0A4_116:;
{
register Zq0A4_242 *W_9 = &Z199->U_1.V_21.Y20;

Z184 = Zq0A4_183(ZbpA7kgAA_0, W_9->Y2);
if (Z184 != Zq0A4_97) {
Z185 = Z184->U_1.V_10.Y9.Y8;
Z184 = Zq0A4_183(Z185, W_9->Y3);
if (!IN(Zq0A4_1, Z184->U_1.V_11.Y10.Y6)) {
ZfM_29(Zq0A4_172, (STRING)"((", 2L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(Z185->U_1.V_5.Y4.Y1);
ZfM_29(Zq0A4_172, (STRING)")((", 3L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(ZbpA7kgAA_0->U_1.V_5.Y4.Y1);
ZfM_29(Zq0A4_172, (STRING)") yyt).", 7L);
Zq0A4_192(W_9->Y2);
ZfM_29(Zq0A4_172, (STRING)").", 2L);
Zq0A4_192(W_9->Y3);
}
} else {
Zq0A4_192(W_9->Y2);
ZfM_29(Zq0A4_172, (STRING)":", 1L);
Zq0A4_192(W_9->Y3);
}
Z206(W_9->Y1);
return;
}
break;
case Zq0A4_117:;
{
register Zq0A4_243 *W_10 = &Z199->U_1.V_22.Y21;

Z184 = Zq0A4_183(ZbpA7kgAA_0, W_10->Y2);
if (Z184 != Zq0A4_97) {
if (!IN(Zq0A4_1, Z184->U_1.V_11.Y10.Y6)) {
ZfM_29(Zq0A4_172, (STRING)"((", 2L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(ZbpA7kgAA_0->U_1.V_5.Y4.Y1);
ZfM_29(Zq0A4_172, (STRING)") yyt).", 7L);
Zq0A4_192(W_10->Y2);
}
} else {
Zq0A4_192(W_10->Y2);
}
Z206(W_10->Y1);
return;
}
break;
case Zq0A4_118:;
{
register struct S_4 *W_11 = &Z200.U_1.V_1.Y0;

{
register Zq0A4_244 *W_12 = &Z199->U_1.V_23.Y22;

W_11->Y0 = Zq0A4_182(Zq0A4_279->U_1.V_32.Y31.Y13, W_12->Y3);
if (W_11->Y0 != Zq0A4_97) {
Z184 = Zq0A4_183(W_11->Y0, W_12->Y4);
if (Z184 != Zq0A4_97) {
{
register Zq0A4_232 *W_13 = &Z184->U_1.V_11.Y10;

W_11->Y1 = ZbpA7kgAe_4(W_11->Y0, (LONGINT)W_13->Y10);
if (IN(Zq0A4_7, W_13->Y6)) {
ZfM_29(Zq0A4_172, (STRING)"REMOTE_SYN (yyIsComp", 20L);
Zq0A4_195(W_11->Y1 / Zq0A4dgAc_0);
ZfM_29(Zq0A4_172, (STRING)", ", 2L);
Zq0A4_195(W_11->Y1 % Zq0A4dgAc_0);
ZfM_29(Zq0A4_172, (STRING)", yyS", 5L);
Zq0A4_195(W_11->Y1);
ZfM_29(Zq0A4_172, (STRING)", ", 2L);
Z206(W_12->Y2);
ZfM_29(Zq0A4_172, (STRING)", ", 2L);
Zq0A4_192(Z199->U_1.V_23.Y22.Y3);
ZfM_29(Zq0A4_172, (STRING)", ", 2L);
Zq0A4_192(W_12->Y4);
ZfM_29(Zq0A4_172, (STRING)")", 1L);
} else if (IN(Zq0A4_6, W_13->Y6)) {
ZfM_29(Zq0A4_172, (STRING)"REMOTE_INH (yyIsComp", 20L);
Zq0A4_195(W_11->Y1 / Zq0A4dgAc_0);
ZfM_29(Zq0A4_172, (STRING)", ", 2L);
Zq0A4_195(W_11->Y1 % Zq0A4dgAc_0);
ZfM_29(Zq0A4_172, (STRING)", ", 2L);
Zq0A4_195(W_11->Y1);
ZfM_29(Zq0A4_172, (STRING)", ", 2L);
Z206(W_12->Y2);
ZfM_29(Zq0A4_172, (STRING)", ", 2L);
Zq0A4_192(Z199->U_1.V_23.Y22.Y3);
ZfM_29(Zq0A4_172, (STRING)", ", 2L);
Zq0A4_192(W_12->Y4);
ZfM_29(Zq0A4_172, (STRING)")", 1L);
} else {
Z206(W_12->Y2);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(Z199->U_1.V_23.Y22.Y3);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(W_12->Y4);
}
}
}
}
Z206(W_12->Y1);
return;
}
}
break;
case Zq0A4_119:;
{
register Zq0A4_245 *W_14 = &Z199->U_1.V_24.Y23;

Zp1PEAFi_6(Zq0A4_172, W_14->Y2);
Z206(W_14->Y1);
return;
}
break;
case Zq0A4_120:;
{
register Zq0A4_246 *W_15 = &Z199->U_1.V_25.Y24;

Z206(W_15->Y2);
Z206(W_15->Y1);
return;
}
break;
case Zq0A4_123:;
{
register Zq0A4_249 *W_16 = &Z199->U_1.V_28.Y27;

Zp1PEAFi_6(Zq0A4_172, W_16->Y1);
Z206(W_16->Y2);
return;
}
break;
default:
break;
}
}
}

void ZbpA7kgAf_4
 ARGS ((void))
{
}

void ZbpA7kgAf_5
 ARGS ((void))
{
}

static void Z256
 ARGS ((void))
{
ZfM_34();
rExit(1L);
}

void BEGIN_EvalJav4 ARGS ((void))
{
  static BOOLEAN has_been_called = FALSE;
  if (has_been_called) return;
  has_been_called = TRUE;
BEGIN_IO ();
BEGIN_Tree ();
BEGIN_rSystem ();
BEGIN_IO ();
BEGIN_Tree ();
BEGIN_General ();
BEGIN_DynArray ();
BEGIN_IO ();
BEGIN_StringM ();
BEGIN_Texts ();
BEGIN_Sets ();
BEGIN_TreeJav1 ();
BEGIN_TreeJav2 ();
BEGIN_EvalJava ();
BEGIN_EvalJav3 ();
BEGIN_EvalJava ();
BEGIN_Tree ();

ZbpA7kgAf_0 = ZfM_1;
ZbpA7kgAf_2 = Z256;
ZbpA7kgAf_4();
}
