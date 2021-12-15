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

#ifndef DEFINITION_TreeCxx1
#include "TreeCxx1.h"
#endif

#ifndef DEFINITION_TreeCxx2
#include "TreeCxx2.h"
#endif

#ifndef DEFINITION_EvalCxx
#include "EvalCxx.h"
#endif

#ifndef DEFINITION_EvalCxx3
#include "EvalCxx3.h"
#endif

#ifndef DEFINITION_EvalCxx
#include "EvalCxx.h"
#endif

#ifndef DEFINITION_Tree
#include "Tree.h"
#endif

#ifndef DEFINITION_EvalCxx4
#include "EvalCxx4.h"
#endif

ZfM_3 ZbpA7dpZa_0;
BOOLEAN ZbpA7dpZa_1;
PROC ZbpA7dpZa_2;

#define Z179	256
typedef struct S_11 {
SHORTCARD A[100000 + 1];
} *Z180;
static SHORTCARD Z181, Z182, Z183;
static INTEGER Z184, Z185, Z186;
static Zq0A4_153 Z187, Z188, Z189;
static struct S_1 {
Z180 A[100000 + 1];
} *Z190;
static struct S_2 {
SHORTCARD A[100000 + 1];
} *Z191;
static LONGINT Z192, Z193;
static void Z194 ARGS ((CHAR Z195[], LONGCARD O_1));
static BOOLEAN Z198 ARGS ((BYTE Z199[], LONGCARD O_3, BYTE Z200[], LONGCARD O_2));
struct S_8 {
union {
char dummy;
} U_1;
};
static void Z209 ARGS ((Zq0A4_153 Z203));
struct S_7 {
union {
char dummy;
} U_1;
};
static void Z212 ARGS ((Zq0A4_153 Z203));
struct S_6 {
union {
char dummy;
} U_1;
};
static void Z221 ARGS ((Zq0A4_153 Z203));
struct S_5 {
union {
char dummy;
} U_1;
};
static void Z211 ARGS ((Zq0A4_153 Z203));
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

static void Z194
# ifdef HAVE_ARGS
(CHAR Z195[], LONGCARD O_1)
# else
(Z195, O_1)
CHAR Z195[];
LONGCARD O_1;
# endif
{
OPEN_ARRAY_LOCALS

ALLOC_OPEN_ARRAYS (O_1 * sizeof (CHAR), 1)
COPY_OPEN_ARRAY (Z195, O_1, CHAR)
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)"Error: module EvalCxx4, routine ", 32L);
ZfM_29((ZDz6VQCC_4)ZfM_2, Z195, O_1);
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)" failed", 7L);
ZfM_33((ZDz6VQCC_4)ZfM_2);
(*ZbpA7dpZa_2)();
FREE_OPEN_ARRAYS
}

static BOOLEAN Z198
# ifdef HAVE_ARGS
(BYTE Z199[], LONGCARD O_3, BYTE Z200[], LONGCARD O_2)
# else
(Z199, O_3, Z200, O_2)
BYTE Z199[];
LONGCARD O_3;
BYTE Z200[];
LONGCARD O_2;
# endif
{
INTEGER Z201;
OPEN_ARRAY_LOCALS

ALLOC_OPEN_ARRAYS (O_2 * sizeof (WORD) + O_3 * sizeof (WORD), 2)
COPY_OPEN_ARRAY (Z200, O_2, WORD)
COPY_OPEN_ARRAY (Z199, O_3, WORD)
{
LONGINT B_1 = 0, B_2 = (INTEGER)(O_3 - 1);

if (B_1 <= B_2)
for (Z201 = B_1;; Z201 += 1) {
if (Z199[Z201] != Z200[Z201]) {
FREE_OPEN_ARRAYS
return FALSE;
}
if (Z201 >= B_2) break;
}
}
FREE_OPEN_ARRAYS
return TRUE;
}

void ZbpA7dpZa_3
# ifdef HAVE_ARGS
(Zq0A4_153 Z203)
# else
(Z203)
Zq0A4_153 Z203;
# endif
{
struct S_8 Z204;

if (Z203 == Zq0A4_97) {
return;
}
if (Z203 != NIL && Z203->U_1.V_1.Y0 == Zq0A4_127) {
{
register Zq0A4_253 *W_1 = &Z203->U_1.V_32.Y31;

ZfM_29(Zq0A4_172, (STRING)"# ifndef EXTERN_C_BEGIN", 23L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# define EXTERN_C_BEGIN", 23L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# define EXTERN_C_END", 21L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# endif", 7L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"EXTERN_C_BEGIN", 14L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# include \"DynArray.h\"", 22L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"EXTERN_C_END", 12L);
ZfM_33(Zq0A4_172);
ZbpA7dpZ_7(Z203);
ZfM_29(Zq0A4_172, (STRING)"static char * yyCheck2 = & generate_", 36L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"_module_without_option_0;", 25L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
Z192 = Zq0A4_70 + 1;
ZarQdhNDD_0((ADDRESS *)&Z190, &Z192, (LONGINT)sizeof (Z180));
ZarQdhNDD_0((ADDRESS *)&Z191, &Z192, (LONGINT)sizeof (SHORTCARD));
Z193 = Zq0A4_68 + 1;
{
SHORTCARD B_3 = 1, B_4 = Zq0A4_70;

if (B_3 <= B_4)
for (Z181 = B_3;; Z181 += 1) {
ZarQdhNDD_0((ADDRESS *)&Z190->A[Z181], &Z193, (LONGINT)sizeof (SHORTCARD));
{
LONGINT B_5 = 1, B_6 = Zq0A4_68;

if (B_5 <= B_6)
for (Z185 = B_5;; Z185 += 1) {
Z190->A[Z181]->A[Z185] = 0;
if (Z185 >= B_6) break;
}
}
Z191->A[Z181] = 0;
ZfM_29(Zq0A4_172, (STRING)"extern const short ", 19L);
Zq0A4_192(W_1->Y7);
ZfM_29(Zq0A4_172, (STRING)"_MapDown", 8L);
Zq0A4_195((LONGINT)Z181);
ZfM_29(Zq0A4_172, (STRING)" [];", 4L);
ZfM_33(Zq0A4_172);
if (Z181 >= B_4) break;
}
}
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# define yyInitStackSize 100", 28L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"typedef struct { ", 17L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)" yyt; int yyn; } yytStack;", 26L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"static yytStack * yyStack, * yyStackPtr, * yyEndOfStack;", 56L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"static unsigned long yyStackSize = yyInitStackSize;", 51L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
Z182 = 0;
Z184 = 0;
Z209(Z203);
Zq0A4_184(W_1->Y13, (Zq0A4_170)Z211);
if (Z182 % Z179 != 0) {
Z182 = (Z182 / Z179 + 1) * Z179;
Z212(Z203);
DEC(Z182);
}
ZbpA7dpZ_1 = Z182 / Z179;
if (ZbpA7dpZ_1 > 0) {
ZfM_29(Zq0A4_172, (STRING)"# ifndef _MSC_VER", 17L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"typedef ", 8L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)" (* yytP) (", 11L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)");", 2L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"static const yytP yyP [", 23L);
Zq0A4_195((LONGINT)(ZbpA7dpZ_1 + 1));
ZfM_29(Zq0A4_172, (STRING)"] = { ", 6L);
{
SHORTCARD B_7 = 0, B_8 = ZbpA7dpZ_1;

if (B_7 <= B_8)
for (Z181 = B_7;; Z181 += 1) {
ZfM_29(Zq0A4_172, (STRING)"yy", 2L);
Zq0A4_195((LONGINT)Z181);
ZfM_29(Zq0A4_172, (STRING)", ", 2L);
if (Z181 >= B_8) break;
}
}
ZfM_29(Zq0A4_172, (STRING)"};", 2L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# endif", 7L);
ZfM_33(Zq0A4_172);
}
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"void ", 5L);
Zq0A4_192(W_1->Y7);
ZfM_29(Zq0A4_172, (STRING)" (register ", 11L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)" yyt)", 5L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"{", 1L);
ZfM_33(Zq0A4_172);
if (ZpmCQ_25(ORD('X'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)" if (yyf == NULL) yyf = stdout;", 31L);
ZfM_33(Zq0A4_172);
}
ZfM_29(Zq0A4_172, (STRING)" MakeArray ((char * *) & yyStack, & yyStackSize, (unsigned long) sizeof (yytStack));", 84L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" yyStackPtr	 = yyStack;", 23L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" yyEndOfStack	 = & yyStack [yyStackSize];", 41L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" yyStackPtr->yyt = yyt;", 23L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" yyStackPtr->yyn = ", 19L);
Zq0A4_192(W_1->Y7);
ZfM_29(Zq0A4_172, (STRING)"_MapDown1 [yyt->Kind];", 22L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
if (ZbpA7dpZ_1 == 0) {
ZfM_29(Zq0A4_172, (STRING)" do yyt = yy0 (yyt); while (yyt != ", 35L);
Zq0A4_192(Zq0A4_88);
ZfM_29(Zq0A4_172, (STRING)");", 2L);
ZfM_33(Zq0A4_172);
} else {
ZfM_29(Zq0A4_172, (STRING)"# ifdef _MSC_VER", 16L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" do {", 5L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  switch (yyStackPtr->yyn / ", 28L);
Zq0A4_195((LONGINT)Z179);
ZfM_29(Zq0A4_172, (STRING)") {", 3L);
ZfM_33(Zq0A4_172);
{
SHORTCARD B_9 = 0, B_10 = ZbpA7dpZ_1;

if (B_9 <= B_10)
for (Z181 = B_9;; Z181 += 1) {
ZfM_29(Zq0A4_172, (STRING)"   case ", 8L);
Zq0A4_195((LONGINT)Z181);
ZfM_29(Zq0A4_172, (STRING)": yyt = yy", 10L);
Zq0A4_195((LONGINT)Z181);
ZfM_29(Zq0A4_172, (STRING)" (yyt); break;", 14L);
ZfM_33(Zq0A4_172);
if (Z181 >= B_10) break;
}
}
ZfM_29(Zq0A4_172, (STRING)"  }", 3L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" } while (yyt != ", 17L);
Zq0A4_192(Zq0A4_88);
ZfM_29(Zq0A4_172, (STRING)");", 2L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# else", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" do yyt = yyP [yyStackPtr->yyn / ", 33L);
Zq0A4_195((LONGINT)Z179);
ZfM_29(Zq0A4_172, (STRING)"] (yyt); while (yyt != ", 23L);
Zq0A4_192(Zq0A4_88);
ZfM_29(Zq0A4_172, (STRING)");", 2L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# endif", 7L);
ZfM_33(Zq0A4_172);
}
ZfM_29(Zq0A4_172, (STRING)" ReleaseArray ((char * *) & yyStack, & yyStackSize, (unsigned long) sizeof (yytStack));", 87L);
ZfM_33(Zq0A4_172);
if (ZpmCQ_25(ORD('9'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)" printf (\"Stacksize %ld\\n\", yyStackSize * sizeof (yytStack));", 61L);
ZfM_33(Zq0A4_172);
}
ZfM_29(Zq0A4_172, (STRING)"}", 1L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
{
SHORTCARD B_11 = 1, B_12 = Zq0A4_70;

if (B_11 <= B_12)
for (Z181 = B_11;; Z181 += 1) {
ZfM_29(Zq0A4_172, (STRING)"const short ", 12L);
Zq0A4_192(W_1->Y7);
ZfM_29(Zq0A4_172, (STRING)"_MapDown", 8L);
Zq0A4_195((LONGINT)Z181);
ZfM_29(Zq0A4_172, (STRING)" [] = { 0,", 10L);
ZfM_33(Zq0A4_172);
{
SHORTCARD B_13 = 1, B_14 = Z191->A[Z181];

if (B_13 <= B_14)
for (Z183 = B_13;; Z183 += 1) {
Zq0A4_195((LONGINT)Z190->A[Z181]->A[Z183]);
ZfM_29(Zq0A4_172, (STRING)",", 1L);
ZfM_33(Zq0A4_172);
if (Z183 >= B_14) break;
}
}
ZfM_29(Zq0A4_172, (STRING)"};", 2L);
ZfM_33(Zq0A4_172);
if (Z181 >= B_12) break;
}
}
ZfM_33(Zq0A4_172);
ZbpA7dpZ_8(Z203);
return;
}
}
}

static void Z209
# ifdef HAVE_ARGS
(Zq0A4_153 Z203)
# else
(Z203)
Zq0A4_153 Z203;
# endif
{
struct S_7 Z204;

if (Z203 == Zq0A4_97) {
return;
}
ZfM_29(Zq0A4_172, (STRING)"static ", 7L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)" yy", 3L);
Zq0A4_195((LONGINT)(Z182 / Z179));
ZfM_29(Zq0A4_172, (STRING)" (register ", 11L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)" yyt)", 5L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"{", 1L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" register const short * yyMapDown;", 34L);
ZfM_33(Zq0A4_172);
Zq0A4dpZf_3(Zq0A4_279->U_1.V_32.Y31.Y8->U_1.V_17.Y16.Y10);
ZqnGVQ_5(Zq0A4_172, Zq0A4_279->U_1.V_32.Y31.Y8->U_1.V_17.Y16.Y4);
Z187 = Zq0A4_279->U_1.V_32.Y31.Y14;
while (Z187->U_1.V_1.Y0 == Zq0A4_144) {
Zq0A4dpZf_3(Z187->U_1.V_49.Y48.Y8->U_1.V_17.Y16.Y10);
ZqnGVQ_5(Zq0A4_172, Z187->U_1.V_49.Y48.Y8->U_1.V_17.Y16.Y4);
Z187 = Z187->U_1.V_49.Y48.Y12;
}
ZfM_29(Zq0A4_172, (STRING)" for (;;) {", 11L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  switch (yyStackPtr->yyn) {", 28L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  case ", 7L);
Zq0A4_195((LONGINT)Z182);
ZfM_29(Zq0A4_172, (STRING)":", 1L);
ZfM_33(Zq0A4_172);
return;
}

static void Z212
# ifdef HAVE_ARGS
(Zq0A4_153 Z203)
# else
(Z203)
Zq0A4_153 Z203;
# endif
{
struct S_6 Z204;

if (Z203 == Zq0A4_97) {
return;
}
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  default: return yyt;", 22L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  yyVisit: yyStackPtr->yyn ++;", 30L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   if (++ yyStackPtr == yyEndOfStack) {", 39L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"    long yyyStackPtr = yyStackPtr - yyStack;", 44L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"    ExtendArray ((char * *) & yyStack, & yyStackSize, (unsigned long) sizeof (yytStack));", 89L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"    yyStackPtr = yyStack + yyyStackPtr;", 39L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"    yyEndOfStack = & yyStack [yyStackSize];", 43L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   }", 4L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   yyStackPtr->yyt = yyt;", 25L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   yyStackPtr->yyn = yyMapDown [yyt->Kind]; continue;", 53L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  yyParent:", 11L);
if (ZpmCQ_25(ORD('Z'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)" yyVisitParent (yyt);", 21L);
}
ZfM_29(Zq0A4_172, (STRING)" if (yyStackPtr == yyStack) return ", 35L);
Zq0A4_192(Zq0A4_88);
ZfM_29(Zq0A4_172, (STRING)"; yyt = (-- yyStackPtr)->yyt;", 29L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  }", 3L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" }", 2L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" return ", 8L);
Zq0A4_192(Zq0A4_88);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"}", 1L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
return;
}

static void Z221
# ifdef HAVE_ARGS
(Zq0A4_153 Z203)
# else
(Z203)
Zq0A4_153 Z203;
# endif
{
struct S_5 Z204;

if (Z203 == Zq0A4_97) {
return;
}
INC(Z182);
if (Z182 % Z179 == 0) {
Z212(Z203);
Z209(Z203);
} else {
ZfM_29(Zq0A4_172, (STRING)"  case ", 7L);
Zq0A4_195((LONGINT)Z182);
ZfM_29(Zq0A4_172, (STRING)":", 1L);
ZfM_33(Zq0A4_172);
}
return;
}

static void Z211
# ifdef HAVE_ARGS
(Zq0A4_153 Z203)
# else
(Z203)
Zq0A4_153 Z203;
# endif
{
struct S_3 Z204;

if (Z203 == Zq0A4_97) {
return;
}
if (Z203 != NIL) {
switch (Z203->U_1.V_1.Y0) {
case Zq0A4_100:;
for (;;) {
{
register Zq0A4_226 *W_2 = &Z203->U_1.V_5.Y4;

if (!((Zq0A4_177 & W_2->Y2) == 0X0L)) {
goto EXIT_1;
}
INC(Z184);
Z186 = 1;
Z190->A[1]->A[Z184] = Z182;
Z191->A[1] = ZdaDDAD7_4((LONGINT)Z191->A[1], Z184);
ZbpA7dpZ_0 = Z203;
Z181 = 1;
for (;;) {
{
register Zq0A4_199 *W_3 = &W_2->Y15->A[W_2->Y15->A[Z181 - 1].Y4 - 1];

if (Z181 > W_2->Y14) {
goto EXIT_2;
}
if (SET_IS_SUBSET1(SET_ELEM (Zq0A4_6) | SET_ELEM (Zq0A4_20), W_3->Y3) || IN(Zq0A4_8, W_3->Y3)) {
INC(Z181);
} else {
goto EXIT_2;
}
}
} EXIT_2:;
{
SHORTCARD B_15 = Z181, B_16 = W_2->Y14;

if (B_15 <= B_16)
for (Z181 = B_15;; Z181 += 1) {
{
register Zq0A4_199 *W_4 = &W_2->Y15->A[W_2->Y15->A[Z181 - 1].Y4 - 1];

if (SET_IS_SUBSET1(SET_ELEM (Zq0A4_6) | SET_ELEM (Zq0A4_21) | SET_ELEM (Zq0A4_26), W_4->Y3) && !IN(Zq0A4_1, W_4->Y3)) {
if (ZpmCQ_25(ORD('X'), &Zq0A4_171) && IN(Zq0A4_42, Z203->U_1.V_5.Y4.Y2)) {
ZfM_29(Zq0A4_172, (STRING)"yyWriteEval (yyt, \"", 19L);
Zq0A4_192(W_4->Y0->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)":", 1L);
Zq0A4_192(W_4->Y1->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)"\");", 3L);
ZfM_33(Zq0A4_172);
if (W_4->Y2 != (Zq0A4_153)ADR (W_4->Y2)) {
Z211(W_4->Y2);
}
ZfM_33(Zq0A4_172);
if (W_4->Y1->U_1.V_1.Y0 == Zq0A4_105 || W_4->Y1->U_1.V_11.Y10.Y4 == Zq0A4_86) {
ZfM_29(Zq0A4_172, (STRING)"write", 5L);
Zq0A4_192(Zq0A4_86);
} else {
ZfM_29(Zq0A4_172, (STRING)"write", 5L);
Zq0A4_192(W_4->Y1->U_1.V_10.Y9.Y4);
}
ZfM_29(Zq0A4_172, (STRING)" ((", 3L);
ZbpA7dpZ_5(W_2->Y1);
ZfM_29(Zq0A4_172, (STRING)"yyt)->", 6L);
Zq0A4_192(W_4->Y0->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)"->", 2L);
Zq0A4_192(W_4->Y1->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)") xxWriteNl ();", 15L);
ZfM_33(Zq0A4_172);
} else if (ZpmCQ_25(ORD('Y'), &Zq0A4_171) && IN(Zq0A4_42, Z203->U_1.V_5.Y4.Y2)) {
ZfM_29(Zq0A4_172, (STRING)"yyWriteEval (yyt, \"", 19L);
Zq0A4_192(W_4->Y0->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)":", 1L);
Zq0A4_192(W_4->Y1->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)"\");", 3L);
ZfM_33(Zq0A4_172);
if (W_4->Y2 != (Zq0A4_153)ADR (W_4->Y2)) {
Z211(W_4->Y2);
}
} else {
if (W_4->Y2 != (Zq0A4_153)ADR (W_4->Y2)) {
Z211(W_4->Y2);
}
}
}
if (SET_IS_SUBSET1(SET_ELEM (Zq0A4_7) | SET_ELEM (Zq0A4_20) | SET_ELEM (Zq0A4_26), W_4->Y3) && ((SET_ELEM (Zq0A4_27) | SET_ELEM (Zq0A4_1)) & W_4->Y3) == 0X0L) {
if (ZpmCQ_25(ORD('X'), &Zq0A4_171) && IN(Zq0A4_42, Z203->U_1.V_5.Y4.Y2)) {
ZfM_29(Zq0A4_172, (STRING)"yyWriteEval (yyt, \"", 19L);
Zq0A4_192(W_4->Y1->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)"\");", 3L);
ZfM_33(Zq0A4_172);
if (W_4->Y2 != (Zq0A4_153)ADR (W_4->Y2)) {
Z211(W_4->Y2);
}
ZfM_33(Zq0A4_172);
if (IN(Zq0A4_19, W_4->Y3)) {
ZfM_29(Zq0A4_172, (STRING)"writebool (yyb) xxWriteNl ();", 29L);
ZfM_33(Zq0A4_172);
} else if (W_4->Y1->U_1.V_1.Y0 == Zq0A4_105 || W_4->Y1->U_1.V_11.Y10.Y4 == Zq0A4_86) {
ZfM_29(Zq0A4_172, (STRING)"write", 5L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)" ((", 3L);
ZbpA7dpZ_5(W_2->Y1);
ZfM_29(Zq0A4_172, (STRING)"yyt)->", 6L);
Zq0A4_192(W_4->Y1->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)") xxWriteNl ();", 15L);
ZfM_33(Zq0A4_172);
} else {
ZfM_29(Zq0A4_172, (STRING)"write", 5L);
Zq0A4_192(W_4->Y1->U_1.V_10.Y9.Y4);
ZfM_29(Zq0A4_172, (STRING)" ((", 3L);
ZbpA7dpZ_5(W_2->Y1);
ZfM_29(Zq0A4_172, (STRING)"yyt)->", 6L);
Zq0A4_192(W_4->Y1->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)") xxWriteNl ();", 15L);
ZfM_33(Zq0A4_172);
}
} else if (ZpmCQ_25(ORD('Y'), &Zq0A4_171) && IN(Zq0A4_42, Z203->U_1.V_5.Y4.Y2)) {
ZfM_29(Zq0A4_172, (STRING)"yyWriteEval (yyt, \"", 19L);
Zq0A4_192(W_4->Y1->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)"\");", 3L);
ZfM_33(Zq0A4_172);
if (W_4->Y2 != (Zq0A4_153)ADR (W_4->Y2)) {
Z211(W_4->Y2);
}
} else {
if (W_4->Y2 != (Zq0A4_153)ADR (W_4->Y2)) {
Z211(W_4->Y2);
}
}
}
if (SET_IS_SUBSET1(SET_ELEM (Zq0A4_7) | SET_ELEM (Zq0A4_21) | SET_ELEM (Zq0A4_26), W_4->Y3) && W_4->Y1->U_1.V_10.Y9.Y11 <= W_4->Y0->U_1.V_10.Y9.Y8->U_1.V_5.Y4.Y22) {
if (ZpmCQ_25(ORD('Z'), &Zq0A4_171) && IN(Zq0A4_42, Z203->U_1.V_5.Y4.Y2)) {
ZfM_29(Zq0A4_172, (STRING)"yyWriteVisit (yyt, \"", 20L);
Zq0A4_192(W_4->Y0->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)" ", 1L);
Zq0A4_195((LONGINT)W_4->Y1->U_1.V_10.Y9.Y11);
ZfM_29(Zq0A4_172, (STRING)"\");", 3L);
ZfM_33(Zq0A4_172);
}
ZfM_29(Zq0A4_172, (STRING)"yyt = (", 7L);
ZbpA7dpZ_5(W_2->Y1);
ZfM_29(Zq0A4_172, (STRING)"yyt)->", 6L);
Zq0A4_192(W_4->Y0->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_29(Zq0A4_172, (STRING)" yyMapDown = ", 13L);
Zq0A4_192(Zq0A4_279->U_1.V_32.Y31.Y7);
ZfM_29(Zq0A4_172, (STRING)"_MapDown", 8L);
Zq0A4_195((LONGINT)W_4->Y1->U_1.V_10.Y9.Y11);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_29(Zq0A4_172, (STRING)" goto yyVisit;", 14L);
ZfM_33(Zq0A4_172);
Z221(Z203);
}
if (SET_IS_SUBSET1(SET_ELEM (Zq0A4_6) | SET_ELEM (Zq0A4_20) | SET_ELEM (Zq0A4_26), W_4->Y3)) {
ZfM_29(Zq0A4_172, (STRING)"   goto yyParent;", 17L);
ZfM_33(Zq0A4_172);
Z221(Z203);
INC(Z186);
Z190->A[Z186]->A[Z184] = Z182;
Z191->A[Z186] = ZdaDDAD7_4((LONGINT)Z191->A[Z186], Z184);
}
}
if (Z181 >= B_16) break;
}
}
ZfM_29(Zq0A4_172, (STRING)"   goto yyParent;", 17L);
ZfM_33(Zq0A4_172);
if (Z184 < Zq0A4_68) {
Z221(Z203);
}
return;
}
} EXIT_1:;
break;
case Zq0A4_137:;
{
register Zq0A4_263 *W_5 = &Z203->U_1.V_42.Y41;

Zq0A4dpZf_3(W_5->Y2);
Z211(W_5->Y4);
ZfM_29(Zq0A4_172, (STRING)"=", 1L);
Z211(W_5->Y5);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
return;
}
break;
case Zq0A4_138:;
{
register Zq0A4_264 *W_6 = &Z203->U_1.V_43.Y42;

Zq0A4dpZf_3(W_6->Y2);
Z211(W_6->Y4);
ZfM_29(Zq0A4_172, (STRING)"=", 1L);
Z211(W_6->Y5);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
return;
}
break;
case Zq0A4_139:;
{
register Zq0A4_265 *W_7 = &Z203->U_1.V_44.Y43;

Zq0A4dpZf_3(W_7->Y2);
Z211(W_7->Y5);
ZfM_33(Zq0A4_172);
return;
}
break;
case Zq0A4_141:;
{
register Zq0A4_267 *W_8 = &Z203->U_1.V_46.Y45;

Zq0A4dpZf_3(W_8->Y2);
if (W_8->Y4 != Zq0A4_97) {
ZfM_29(Zq0A4_172, (STRING)"if (! (", 7L);
if (ZpmCQ_25(ORD('X'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)"yyb = ", 6L);
}
Z211(W_8->Y4);
ZfM_29(Zq0A4_172, (STRING)")) {", 4L);
Z211(W_8->Y5);
ZfM_29(Zq0A4_172, (STRING)"; }", 3L);
ZfM_33(Zq0A4_172);
if (W_8->Y6->U_1.V_1.Y0 == Zq0A4_141) {
ZfM_29(Zq0A4_172, (STRING)"else", 4L);
ZfM_33(Zq0A4_172);
Z211(W_8->Y6);
}
} else {
if (ZpmCQ_25(ORD('X'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)"yyb = false; ", 13L);
}
Z211(W_8->Y5);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
Z211(W_8->Y6);
}
return;
}
break;
case Zq0A4_116:;
{
register Zq0A4_242 *W_9 = &Z203->U_1.V_21.Y20;

Z188 = Zq0A4_183(ZbpA7dpZ_0, W_9->Y2);
if (Z188 != Zq0A4_97) {
Z189 = Z188->U_1.V_10.Y9.Y8;
Z188 = Zq0A4_183(Z189, W_9->Y3);
if (!IN(Zq0A4_1, Z188->U_1.V_11.Y10.Y6)) {
ZfM_29(Zq0A4_172, (STRING)"(", 1L);
ZbpA7dpZ_5(ZbpA7dpZ_0->U_1.V_5.Y4.Y1);
ZfM_29(Zq0A4_172, (STRING)"yyt)->", 6L);
Zq0A4_192(W_9->Y2);
ZfM_29(Zq0A4_172, (STRING)"->", 2L);
Zq0A4_192(W_9->Y3);
}
} else {
Zq0A4_192(W_9->Y2);
ZfM_29(Zq0A4_172, (STRING)":", 1L);
Zq0A4_192(W_9->Y3);
}
Z211(W_9->Y1);
return;
}
break;
case Zq0A4_117:;
{
register Zq0A4_243 *W_10 = &Z203->U_1.V_22.Y21;

Z188 = Zq0A4_183(ZbpA7dpZ_0, W_10->Y2);
if (Z188 != Zq0A4_97) {
if (!IN(Zq0A4_1, Z188->U_1.V_11.Y10.Y6)) {
ZfM_29(Zq0A4_172, (STRING)"(", 1L);
ZbpA7dpZ_5(ZbpA7dpZ_0->U_1.V_5.Y4.Y1);
ZfM_29(Zq0A4_172, (STRING)"yyt)->", 6L);
Zq0A4_192(W_10->Y2);
}
} else {
Zq0A4_192(W_10->Y2);
}
Z211(W_10->Y1);
return;
}
break;
case Zq0A4_118:;
{
register struct S_4 *W_11 = &Z204.U_1.V_1.Y0;

{
register Zq0A4_244 *W_12 = &Z203->U_1.V_23.Y22;

W_11->Y0 = Zq0A4_182(Zq0A4_279->U_1.V_32.Y31.Y13, W_12->Y3);
if (W_11->Y0 != Zq0A4_97) {
Z188 = Zq0A4_183(W_11->Y0, W_12->Y4);
if (Z188 != Zq0A4_97) {
{
register Zq0A4_232 *W_13 = &Z188->U_1.V_11.Y10;

W_11->Y1 = ZbpA7dpZg_5(W_11->Y0, (LONGINT)W_13->Y10);
if (IN(Zq0A4_7, W_13->Y6)) {
ZfM_29(Zq0A4_172, (STRING)"REMOTE_SYN (yyIsComp", 20L);
Zq0A4_195(W_11->Y1 / Zq0A4dpZe_0);
ZfM_29(Zq0A4_172, (STRING)", ", 2L);
Zq0A4_195(W_11->Y1 % Zq0A4dpZe_0);
ZfM_29(Zq0A4_172, (STRING)", yyS", 5L);
Zq0A4_195(W_11->Y1);
ZfM_29(Zq0A4_172, (STRING)", ", 2L);
Z211(W_12->Y2);
ZfM_29(Zq0A4_172, (STRING)", ", 2L);
Zq0A4_192(Z203->U_1.V_23.Y22.Y3);
ZfM_29(Zq0A4_172, (STRING)", ", 2L);
Zq0A4_192(W_12->Y4);
ZfM_29(Zq0A4_172, (STRING)")", 1L);
} else if (IN(Zq0A4_6, W_13->Y6)) {
ZfM_29(Zq0A4_172, (STRING)"REMOTE_INH (yyIsComp", 20L);
Zq0A4_195(W_11->Y1 / Zq0A4dpZe_0);
ZfM_29(Zq0A4_172, (STRING)", ", 2L);
Zq0A4_195(W_11->Y1 % Zq0A4dpZe_0);
ZfM_29(Zq0A4_172, (STRING)", ", 2L);
Zq0A4_195(W_11->Y1);
ZfM_29(Zq0A4_172, (STRING)", ", 2L);
Z211(W_12->Y2);
ZfM_29(Zq0A4_172, (STRING)", ", 2L);
Zq0A4_192(Z203->U_1.V_23.Y22.Y3);
ZfM_29(Zq0A4_172, (STRING)", ", 2L);
Zq0A4_192(W_12->Y4);
ZfM_29(Zq0A4_172, (STRING)")", 1L);
} else {
ZfM_29(Zq0A4_172, (STRING)"(", 1L);
ZbpA7dpZ_5(Z203->U_1.V_23.Y22.Y3);
Z211(W_12->Y2);
ZfM_29(Zq0A4_172, (STRING)")->", 3L);
Zq0A4_192(W_12->Y4);
}
}
}
}
Z211(W_12->Y1);
return;
}
}
break;
case Zq0A4_119:;
{
register Zq0A4_245 *W_14 = &Z203->U_1.V_24.Y23;

Zp1PEAFi_6(Zq0A4_172, W_14->Y2);
Z211(W_14->Y1);
return;
}
break;
case Zq0A4_120:;
{
register Zq0A4_246 *W_15 = &Z203->U_1.V_25.Y24;

Z211(W_15->Y2);
Z211(W_15->Y1);
return;
}
break;
case Zq0A4_123:;
{
register Zq0A4_249 *W_16 = &Z203->U_1.V_28.Y27;

Zp1PEAFi_6(Zq0A4_172, W_16->Y1);
Z211(W_16->Y2);
return;
}
break;
default:
break;
}
}
}

void ZbpA7dpZa_4
 ARGS ((void))
{
}

void ZbpA7dpZa_5
 ARGS ((void))
{
}

static void Z256
 ARGS ((void))
{
ZfM_34();
rExit(1L);
}

void BEGIN_EvalCxx4 ARGS ((void))
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
BEGIN_TreeCxx1 ();
BEGIN_TreeCxx2 ();
BEGIN_EvalCxx ();
BEGIN_EvalCxx3 ();
BEGIN_EvalCxx ();
BEGIN_Tree ();

ZbpA7dpZa_0 = ZfM_1;
ZbpA7dpZa_2 = Z256;
ZbpA7dpZa_4();
}
