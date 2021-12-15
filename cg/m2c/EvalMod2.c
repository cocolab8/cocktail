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

#ifndef DEFINITION_StringM
#include "StringM.h"
#endif

#ifndef DEFINITION_Idents
#include "Idents.h"
#endif

#ifndef DEFINITION_Texts
#include "Texts.h"
#endif

#ifndef DEFINITION_Sets
#include "Sets.h"
#endif

#ifndef DEFINITION_Relation
#include "Relation.h"
#endif

#ifndef DEFINITION_TreeMod2
#include "TreeMod2.h"
#endif

#ifndef DEFINITION_EvalMod
#include "EvalMod.h"
#endif

#ifndef DEFINITION_Tree
#include "Tree.h"
#endif

#ifndef DEFINITION_Errors
#include "Errors.h"
#endif

#ifndef DEFINITION_EvalMod2
#include "EvalMod2.h"
#endif

ZfM_3 ZbpA7nqDK_0;
BOOLEAN ZbpA7nqDK_1;
PROC ZbpA7nqDK_2;

static SHORTCARD Z187, Z188, Z189, Z190, Z191, Z192, Z193, Z194, Z195;
static Zq0A4_153 Z196, Z197, Z198, Z199, Z200, Z201, Z202, Z203;
static BOOLEAN Z204;
static ZpmCQ_4 Z205;
static CARDINAL Z206 ARGS ((CARDINAL Z192));
static void Z217 ARGS ((CARDINAL Z192, BOOLEAN Z218));
static Zq0A4_153 Z220 ARGS ((Zq0A4_153 Z198, Zfb3DLQ_0 Z214));
static BOOLEAN Z226 ARGS ((BITSET Z227));
static void Z231 ARGS ((CHAR Z232[], LONGCARD O_1));
static BOOLEAN Z235 ARGS ((BYTE Z236[], LONGCARD O_3, BYTE Z237[], LONGCARD O_2));
struct S_26 {
union {
struct {
struct S_27 {
BOOLEAN Y0;
} Y0;
} V_1;
} U_1;
};
static void Z268 ARGS ((Zq0A4_153 Z240));
struct S_24 {
union {
struct {
struct S_25 {
BOOLEAN Y0;
} Y0;
} V_1;
} U_1;
};
static void Z262 ARGS ((Zq0A4_153 Z240));
struct S_23 {
union {
char dummy;
} U_1;
};
static void Z263 ARGS ((Zq0A4_153 Z240));
struct S_22 {
union {
char dummy;
} U_1;
};
static void Z275 ARGS ((Zq0A4_153 Z240));
struct S_21 {
union {
char dummy;
} U_1;
};
static void Z248 ARGS ((Zq0A4_153 Z240));
struct S_20 {
union {
char dummy;
} U_1;
};
static void Z264 ARGS ((Zq0A4_153 Z240));
struct S_19 {
union {
char dummy;
} U_1;
};
static void Z297 ARGS ((Zq0A4_153 Z240));
struct S_18 {
union {
char dummy;
} U_1;
};
static void Z296 ARGS ((Zq0A4_153 Z240));
struct S_17 {
union {
char dummy;
} U_1;
};
static void Z298 ARGS ((Zq0A4_153 Z240));
struct S_16 {
union {
char dummy;
} U_1;
};
static void Z246 ARGS ((Zq0A4_153 Z240));
struct S_15 {
union {
char dummy;
} U_1;
};
static void Z249 ARGS ((Zq0A4_153 Z240));
struct S_14 {
union {
char dummy;
} U_1;
};
static void Z299 ARGS ((Zq0A4_153 Z240));
struct S_13 {
union {
char dummy;
} U_1;
};
static void Z270 ARGS ((Zq0A4_153 Z240));
struct S_12 {
union {
char dummy;
} U_1;
};
static BOOLEAN Z272 ARGS ((Zq0A4_153 Z301, INTEGER Z188, INTEGER Z189));
struct S_11 {
union {
char dummy;
} U_1;
};
static BOOLEAN Z302 ARGS ((Zq0A4_153 Z303, INTEGER Z304));
struct S_10 {
union {
char dummy;
} U_1;
};
static void Z274 ARGS ((Zq0A4_153 Z240));
struct S_8 {
union {
struct {
struct S_9 {
SHORTCARD Y0;
} Y0;
} V_1;
} U_1;
};
static BOOLEAN Z267 ARGS ((Zq0A4_153 Z240));
struct S_7 {
union {
char dummy;
} U_1;
};
static BOOLEAN Z306 ARGS ((Zq0A4_153 Z307));
struct S_6 {
union {
char dummy;
} U_1;
};
static BOOLEAN Z305 ARGS ((Zq0A4_153 Z240));
struct S_5 {
union {
char dummy;
} U_1;
};
static BOOLEAN Z273 ARGS ((Zq0A4_153 Z240));
struct S_4 {
union {
char dummy;
} U_1;
};
static void Z308 ARGS ((Zq0A4_153 Z240));
struct S_2 {
union {
struct {
struct S_3 {
SHORTCARD Y0;
} Y0;
} V_1;
} U_1;
};
static Zfb3DLQ_0 Z247 ARGS ((Zq0A4_153 Z309));
struct S_1 {
union {
char dummy;
} U_1;
};
static void Z312 ARGS ((void));

static CARDINAL Z206
# ifdef HAVE_ARGS
(CARDINAL Z192)
# else
(Z192)
CARDINAL Z192;
# endif
{
ZpmCQ_4 Z207;
CARDINAL Z208;
BOOLEAN Z209;
CARDINAL Z193, Z194;

{
register Zq0A4_226 *W_1 = &Z198->U_1.V_5.Y4;

ZpmCQ_5(&Z207, (LONGCARD)W_1->Y14);
ZpmCQ_13(&Z207, Z192);
do {
Z209 = TRUE;
{
LONGCARD B_1 = 1, B_2 = W_1->Y14;

if (B_1 <= B_2)
for (Z193 = B_1;; Z193 += 1) {
if (ZpmCQ_25(Z193, &Z207)) {
if (IN(Zq0A4_22, W_1->Y15->A[Z193 - 1].Y3)) {
Z194 = W_1->Y15->A[Z193 - 1].Y5;
if (IN(Zq0A4_11, W_1->Y15->A[Z194 - 1].Y1->U_1.V_11.Y10.Y6) && !ZpmCQ_25(Z194, &Z207)) {
ZpmCQ_13(&Z207, Z194);
Z209 = FALSE;
}
}
if (IN(Zq0A4_23, W_1->Y15->A[Z193 - 1].Y3)) {
{
LONGCARD B_3 = 1, B_4 = W_1->Y14;

if (B_3 <= B_4)
for (Z194 = B_3;; Z194 += 1) {
if (IN(Zq0A4_22, W_1->Y15->A[Z194 - 1].Y3) && IN(Zq0A4_11, W_1->Y15->A[Z194 - 1].Y1->U_1.V_11.Y10.Y6) && W_1->Y15->A[Z194 - 1].Y5 == Z193 && !ZpmCQ_25(Z194, &Z207)) {
ZpmCQ_13(&Z207, Z194);
Z209 = FALSE;
}
if (Z194 >= B_4) break;
}
}
}
}
if (Z193 >= B_2) break;
}
}
} while (!Z209);
Z208 = ZpmCQ_17(&Z207);
if (Z208 <= W_1->Y13) {
Z209 = TRUE;
Z193 = Z208 + 1;
for (;;) {
if (Z193 > W_1->Y13) {
goto EXIT_1;
}
if (ZpmCQ_25(Z193, &Z207)) {
Z209 = FALSE;
goto EXIT_1;
}
INC(Z193);
} EXIT_1:;
if (!Z209) {
Z193 = 1;
for (;;) {
Z194 = W_1->Y15->A[Z193 - 1].Y4;
if (Z194 <= W_1->Y13 && ZpmCQ_25(Z194, &Z207)) {
Z208 = Z194;
goto EXIT_2;
}
INC(Z193);
} EXIT_2:;
}
}
ZpmCQ_7(&Z207);
return Z208;
}
}

static void Z217
# ifdef HAVE_ARGS
(CARDINAL Z192, BOOLEAN Z218)
# else
(Z192, Z218)
CARDINAL Z192;
BOOLEAN Z218;
# endif
{
if (Z218) {
{
register Zq0A4_199 *W_2 = &Z198->U_1.V_5.Y4.Y15->A[Z192 - 1];

if (IN(Zq0A4_11, W_2->Y1->U_1.V_11.Y10.Y6) && ((SET_ELEM (Zq0A4_22) | SET_ELEM (Zq0A4_23)) & W_2->Y3) != 0X0L) {
Z192 = Z206(Z192);
}
}
}
{
register Zq0A4_199 *W_3 = &Z198->U_1.V_5.Y4.Y15->A[Z192 - 1];

if (IN(Zq0A4_1, W_3->Y3)) {
return;
}
if (IN(Zq0A4_20, W_3->Y3)) {
{
register Zq0A4_232 *W_4 = &W_3->Y1->U_1.V_11.Y10;

if (IN(Zq0A4_11, W_4->Y6)) {
if (Zq0A4_183(Z196, W_4->Y3) == Zq0A4_97) {
Zq0A4_192(Z198->U_1.V_5.Y4.Y1);
ZfM_29(Zq0A4_172, (STRING)"yy", 2L);
Zq0A4_192(W_4->Y3);
} else {
ZfM_29(Zq0A4_172, (STRING)"yy", 2L);
Zq0A4_192(W_4->Y3);
}
} else if (IN(Zq0A4_14, W_4->Y6)) {
if (IN(Zq0A4_15, W_4->Y6)) {
Z200 = Z220(Z198, W_4->Y3);
ZfM_29(Zq0A4_172, (STRING)"y", 1L);
Zq0A4_192(Z200->U_1.V_5.Y4.Y1);
ZfM_29(Zq0A4_172, (STRING)"y", 1L);
Zq0A4_192(W_4->Y3);
ZfM_29(Zq0A4_172, (STRING)" (yyt)", 6L);
} else if (Z192 != Z194) {
Zq0A4_192(Z198->U_1.V_5.Y4.Y1);
ZfM_29(Zq0A4_172, (STRING)"yy", 2L);
Zq0A4_192(W_4->Y3);
} else {
ZfM_29(Zq0A4_172, (STRING)"yy", 2L);
Zq0A4_192(W_4->Y3);
}
} else {
ZfM_29(Zq0A4_172, (STRING)"yyt^.", 5L);
Zq0A4_192(Z198->U_1.V_5.Y4.Y1);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(W_4->Y3);
}
}
} else {
{
register Zq0A4_232 *W_5 = &W_3->Y1->U_1.V_11.Y10;

if (IN(Zq0A4_11, W_5->Y6)) {
Zq0A4_192(Z198->U_1.V_5.Y4.Y1);
ZfM_29(Zq0A4_172, (STRING)"y", 1L);
Zq0A4_192(W_3->Y0->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)"y", 1L);
Zq0A4_192(W_5->Y3);
} else if (IN(Zq0A4_14, W_5->Y6)) {
if (IN(Zq0A4_15, W_5->Y6)) {
Z200 = Z220(W_3->Y0->U_1.V_10.Y9.Y8, W_5->Y3);
ZfM_29(Zq0A4_172, (STRING)"y", 1L);
Zq0A4_192(Z200->U_1.V_5.Y4.Y1);
ZfM_29(Zq0A4_172, (STRING)"y", 1L);
Zq0A4_192(W_5->Y3);
ZfM_29(Zq0A4_172, (STRING)" (yyt^.", 7L);
Zq0A4_192(Z198->U_1.V_5.Y4.Y1);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(W_3->Y0->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)")", 1L);
} else {
Zq0A4_192(Z198->U_1.V_5.Y4.Y1);
ZfM_29(Zq0A4_172, (STRING)"y", 1L);
Zq0A4_192(W_3->Y0->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)"y", 1L);
Zq0A4_192(W_5->Y3);
}
} else {
ZfM_29(Zq0A4_172, (STRING)"yyt^.", 5L);
Zq0A4_192(Z198->U_1.V_5.Y4.Y1);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(W_3->Y0->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)"^.", 2L);
Zq0A4_192(W_3->Y0->U_1.V_10.Y9.Y4);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(W_5->Y3);
}
}
}
}
}

static Zq0A4_153 Z220
# ifdef HAVE_ARGS
(Zq0A4_153 Z198, Zfb3DLQ_0 Z214)
# else
(Z198, Z214)
Zq0A4_153 Z198;
Zfb3DLQ_0 Z214;
# endif
{
while (Z198->U_1.V_1.Y0 != Zq0A4_99) {
if (Zq0A4_183(Z198->U_1.V_5.Y4.Y3, Z214) != Zq0A4_97) {
return Z198;
}
Z198 = Z198->U_1.V_5.Y4.Y6;
}
return Zq0A4_97;
}

static BOOLEAN Z226
# ifdef HAVE_ARGS
(BITSET Z227)
# else
(Z227)
BITSET Z227;
# endif
{
SHORTCARD Z192, Z228;

{
SHORTCARD B_5 = Z188, B_6 = Z189;

if (B_5 <= B_6)
for (Z192 = B_5;; Z192 += 1) {
Z228 = Z198->U_1.V_5.Y4.Y15->A[Z192 - 1].Y4;
{
register Zq0A4_199 *W_6 = &Z198->U_1.V_5.Y4.Y15->A[Z228 - 1];

if (SET_IS_SUBSET1(SET_ELEM (Zq0A4_7) | SET_ELEM (Zq0A4_21) | SET_ELEM (Zq0A4_26), W_6->Y3) && Z201 == W_6->Y0 && W_6->Y1->U_1.V_10.Y9.Y11 <= W_6->Y0->U_1.V_10.Y9.Y8->U_1.V_5.Y4.Y22 && IN(W_6->Y1->U_1.V_10.Y9.Y11, Z227)) {
return TRUE;
}
if (SET_IS_SUBSET1(SET_ELEM (Zq0A4_6) | SET_ELEM (Zq0A4_21), W_6->Y3) && Z228 == Z193) {
return TRUE;
}
}
if (Z192 >= B_6) break;
}
}
return FALSE;
}

static void Z231
# ifdef HAVE_ARGS
(CHAR Z232[], LONGCARD O_1)
# else
(Z232, O_1)
CHAR Z232[];
LONGCARD O_1;
# endif
{
OPEN_ARRAY_LOCALS

ALLOC_OPEN_ARRAYS (O_1 * sizeof (CHAR), 1)
COPY_OPEN_ARRAY (Z232, O_1, CHAR)
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)"Error: module EvalMod2, routine ", 32L);
ZfM_29((ZDz6VQCC_4)ZfM_2, Z232, O_1);
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)" failed", 7L);
ZfM_33((ZDz6VQCC_4)ZfM_2);
(*ZbpA7nqDK_2)();
FREE_OPEN_ARRAYS
}

static BOOLEAN Z235
# ifdef HAVE_ARGS
(BYTE Z236[], LONGCARD O_3, BYTE Z237[], LONGCARD O_2)
# else
(Z236, O_3, Z237, O_2)
BYTE Z236[];
LONGCARD O_3;
BYTE Z237[];
LONGCARD O_2;
# endif
{
INTEGER Z238;
OPEN_ARRAY_LOCALS

ALLOC_OPEN_ARRAYS (O_2 * sizeof (WORD) + O_3 * sizeof (WORD), 2)
COPY_OPEN_ARRAY (Z237, O_2, WORD)
COPY_OPEN_ARRAY (Z236, O_3, WORD)
{
LONGINT B_7 = 0, B_8 = (INTEGER)(O_3 - 1);

if (B_7 <= B_8)
for (Z238 = B_7;; Z238 += 1) {
if (Z236[Z238] != Z237[Z238]) {
FREE_OPEN_ARRAYS
return FALSE;
}
if (Z238 >= B_8) break;
}
}
FREE_OPEN_ARRAYS
return TRUE;
}

void ZbpA7nqDK_3
# ifdef HAVE_ARGS
(Zq0A4_153 Z240)
# else
(Z240)
Zq0A4_153 Z240;
# endif
{
struct S_26 Z241;

if (Z240 == Zq0A4_97) {
return;
}
if (Z240 != NIL && Z240->U_1.V_1.Y0 == Zq0A4_127) {
{
register Zq0A4_253 *W_7 = &Z240->U_1.V_32.Y31;

ZbpA7nqD_5(Z240);
if (!ZpmCQ_25(ORD('9'), &Zq0A4_171)) {
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"PROCEDURE Eval (yyt: ", 21L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)");", 2L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" VAR", 4L);
ZfM_33(Zq0A4_172);
Z196 = W_7->Y13;
Z198 = W_7->Y13;
Zq0A4_185(Z198, (Zq0A4_170)Z246);
ZfM_29(Zq0A4_172, (STRING)" BEGIN", 6L);
if (Zq0A4_70 > 0) {
Z198 = W_7->Y13;
Z190 = 1;
ZfM_29(Zq0A4_172, (STRING)" yyVisit1", 9L);
Zq0A4_192(Z247(W_7->Y13));
ZfM_29(Zq0A4_172, (STRING)" (yyt", 5L);
Zq0A4_185(Z198, (Zq0A4_170)Z248);
ZfM_29(Zq0A4_172, (STRING)");", 2L);
}
ZfM_29(Zq0A4_172, (STRING)" END Eval;", 10L);
ZfM_33(Zq0A4_172);
} else {
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"VAR yyMinLow: SYSTEM.ADDRESS;", 29L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"PROCEDURE Eval (yyt: ", 21L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)");", 2L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" VAR yyHigh: BOOLEAN;", 21L);
ZfM_33(Zq0A4_172);
Z196 = W_7->Y13;
Z198 = W_7->Y13;
Zq0A4_185(Z198, (Zq0A4_170)Z246);
ZfM_29(Zq0A4_172, (STRING)"BEGIN ", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" yyMinLow := SYSTEM.ADR (yyHigh);", 33L);
ZfM_33(Zq0A4_172);
if (Zq0A4_70 > 0) {
Z198 = W_7->Y13;
Z190 = 1;
ZfM_29(Zq0A4_172, (STRING)" yyVisit1", 9L);
Zq0A4_192(Z247(W_7->Y13));
ZfM_29(Zq0A4_172, (STRING)" (yyt", 5L);
Zq0A4_185(Z198, (Zq0A4_170)Z248);
ZfM_29(Zq0A4_172, (STRING)");", 2L);
}
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" IO.WriteS (IO.StdOutput, 'Stacksize ');", 40L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" IO.WriteI (IO.StdOutput, Pointers.PTRDIFF (SYSTEM.ADR (yyHigh), yyMinLow), 0);", 79L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" IO.WriteNl (IO.StdOutput);", 27L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"END Eval;", 9L);
ZfM_33(Zq0A4_172);
}
ZfM_33(Zq0A4_172);
Zq0A4_184(W_7->Y13, (Zq0A4_170)Z249);
Zq0A4_184(W_7->Y13, (Zq0A4_170)ZbpA7nqDK_3);
ZfM_29(Zq0A4_172, (STRING)"PROCEDURE Begin", 15L);
Zq0A4_192(W_7->Y7);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" BEGIN", 6L);
ZfM_33(Zq0A4_172);
Zq0A4gqDK_2(W_7->Y8->U_1.V_17.Y16.Y11);
ZqnGVQ_5(Zq0A4_172, W_7->Y8->U_1.V_17.Y16.Y5);
Z196 = W_7->Y14;
while (Z196->U_1.V_1.Y0 == Zq0A4_144) {
Zq0A4gqDK_2(Z196->U_1.V_49.Y48.Y8->U_1.V_17.Y16.Y11);
ZqnGVQ_5(Zq0A4_172, Z196->U_1.V_49.Y48.Y8->U_1.V_17.Y16.Y5);
Z196 = Z196->U_1.V_49.Y48.Y12;
}
ZfM_29(Zq0A4_172, (STRING)" END Begin", 10L);
Zq0A4_192(W_7->Y7);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"PROCEDURE Close", 15L);
Zq0A4_192(W_7->Y7);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" BEGIN", 6L);
ZfM_33(Zq0A4_172);
Zq0A4gqDK_2(W_7->Y8->U_1.V_17.Y16.Y12);
ZqnGVQ_5(Zq0A4_172, W_7->Y8->U_1.V_17.Y16.Y6);
Z196 = W_7->Y14;
while (Z196->U_1.V_1.Y0 == Zq0A4_144) {
Zq0A4gqDK_2(Z196->U_1.V_49.Y48.Y8->U_1.V_17.Y16.Y12);
ZqnGVQ_5(Zq0A4_172, Z196->U_1.V_49.Y48.Y8->U_1.V_17.Y16.Y6);
Z196 = Z196->U_1.V_49.Y48.Y12;
}
ZfM_29(Zq0A4_172, (STRING)" END Close", 10L);
Zq0A4_192(W_7->Y7);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"BEGIN", 5L);
ZfM_33(Zq0A4_172);
if (ZpmCQ_25(ORD('X'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)" yyf := IO.StdOutput;", 21L);
ZfM_33(Zq0A4_172);
}
ZfM_29(Zq0A4_172, (STRING)"END ", 4L);
Zq0A4_192(W_7->Y7);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
ZfM_33(Zq0A4_172);
return;
}
}
if (Z240 != NIL && Z240->U_1.V_1.Y0 == Zq0A4_100) {
{
register struct S_27 *W_8 = &Z241.U_1.V_1.Y0;

for (;;) {
{
register Zq0A4_226 *W_9 = &Z240->U_1.V_5.Y4;

if (!((Zq0A4_177 & W_9->Y2) == 0X0L)) {
goto EXIT_3;
}
if (!IN(Zq0A4_36, W_9->Y2)) {
goto EXIT_3;
}
W_9->Y24 = 0;
Zq0A4_184(W_9->Y4, (Zq0A4_170)Z262);
{
SHORTCARD B_9 = 1, B_10 = W_9->Y22;

if (B_9 <= B_10)
for (Z190 = B_9;; Z190 += 1) {
ZfM_29(Zq0A4_172, (STRING)"PROCEDURE yyVisit", 17L);
Zq0A4_195((LONGINT)Z190);
Zq0A4_192(W_9->Y1);
ZfM_29(Zq0A4_172, (STRING)" (yyt: ", 7L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(Zq0A4_86);
Z196 = Z240;
Z198 = Z240;
Z199 = Z240;
Zq0A4_185(Z240, (Zq0A4_170)Z263);
ZfM_29(Zq0A4_172, (STRING)");", 2L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" VAR yyTempo: RECORD CASE : INTEGER OF", 38L);
ZfM_33(Zq0A4_172);
Z196 = Z240;
Z264(Z240);
Zq0A4_184(W_9->Y4, (Zq0A4_170)Z264);
ZfM_29(Zq0A4_172, (STRING)" END; END;", 10L);
ZfM_33(Zq0A4_172);
Zq0A4gqDK_2(Zq0A4_279->U_1.V_32.Y31.Y8->U_1.V_17.Y16.Y10);
ZqnGVQ_5(Zq0A4_172, Zq0A4_279->U_1.V_32.Y31.Y8->U_1.V_17.Y16.Y4);
Z196 = Zq0A4_279->U_1.V_32.Y31.Y14;
while (Z196->U_1.V_1.Y0 == Zq0A4_144) {
Zq0A4gqDK_2(Z196->U_1.V_49.Y48.Y8->U_1.V_17.Y16.Y10);
ZqnGVQ_5(Zq0A4_172, Z196->U_1.V_49.Y48.Y8->U_1.V_17.Y16.Y4);
Z196 = Z196->U_1.V_49.Y48.Y12;
}
if (ZpmCQ_25(ORD('9'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)" VAR yyLow: BOOLEAN;", 20L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" BEGIN", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  IF Pointers.PTRDIFF (yyMinLow, SYSTEM.ADR (yyLow)) > 0 THEN", 61L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   yyMinLow := SYSTEM.ADR (yyLow);", 34L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  END;", 6L);
ZfM_33(Zq0A4_172);
} else {
ZfM_29(Zq0A4_172, (STRING)" BEGIN", 6L);
ZfM_33(Zq0A4_172);
}
ZfM_29(Zq0A4_172, (STRING)"  WITH yyTempo DO", 17L);
ZfM_33(Zq0A4_172);
W_8->Y0 = IN(Zq0A4_56, Zq0A4_69) && Z267(Z240);
if (W_8->Y0) {
ZfM_29(Zq0A4_172, (STRING)"  LOOP LOOP", 11L);
ZfM_33(Zq0A4_172);
}
ZfM_29(Zq0A4_172, (STRING)"   CASE yyt^.Kind OF", 20L);
ZfM_33(Zq0A4_172);
if (IN(Zq0A4_56, Zq0A4_69)) {
Z196 = Z240;
Z268(Z240);
Zq0A4_184(W_9->Y4, (Zq0A4_170)Z268);
}
ZfM_29(Zq0A4_172, (STRING)"   ELSE", 7L);
ZfM_33(Zq0A4_172);
if (ZpmCQ_25(ORD('Z'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)"    yyVisitParent (yyt);", 24L);
ZfM_33(Zq0A4_172);
}
ZfM_29(Zq0A4_172, (STRING)"   END;", 7L);
ZfM_33(Zq0A4_172);
if (W_8->Y0) {
ZfM_29(Zq0A4_172, (STRING)"   RETURN;", 10L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  END; END;", 11L);
ZfM_33(Zq0A4_172);
}
ZfM_29(Zq0A4_172, (STRING)"  END;", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" END yyVisit", 12L);
Zq0A4_195((LONGINT)Z190);
Zq0A4_192(W_9->Y1);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
if (Z190 >= B_10) break;
}
}
return;
}
} EXIT_3:;
}
}
}

static void Z268
# ifdef HAVE_ARGS
(Zq0A4_153 Z240)
# else
(Z240)
Zq0A4_153 Z240;
# endif
{
struct S_24 Z241;

for (;;) {
for (;;) {
if (Z240 == Zq0A4_97) {
return;
}
if (Z240 != NIL) {
switch (Z240->U_1.V_1.Y0) {
case Zq0A4_100:;
{
register struct S_25 *W_10 = &Z241.U_1.V_1.Y0;

for (;;) {
{
register Zq0A4_226 *W_11 = &Z240->U_1.V_5.Y4;

if (!((Zq0A4_177 & W_11->Y2) == 0X0L)) {
goto EXIT_6;
}
if (!(W_11->Y24 != W_11->Y14)) {
goto EXIT_6;
}
W_10->Y0 = FALSE;
ZfM_29(Zq0A4_172, (STRING)"| ", 2L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(W_11->Y1);
ZfM_29(Zq0A4_172, (STRING)":", 1L);
ZfM_33(Zq0A4_172);
Z188 = W_11->Y24 + 1;
for (;;) {
if (W_11->Y24 == W_11->Y14) {
goto EXIT_7;
}
INC(W_11->Y24);
{
register Zq0A4_199 *W_12 = &W_11->Y15->A[W_11->Y15->A[W_11->Y24 - 1].Y4 - 1];

if (IN(Zq0A4_20, W_12->Y3) && W_12->Y1->U_1.V_10.Y9.Y11 > Z190) {
DEC(W_11->Y24);
goto EXIT_7;
}
}
} EXIT_7:;
Z189 = W_11->Y24;
Z198 = Z240;
{
SHORTCARD B_11 = Z188, B_12 = Z189;

if (B_11 <= B_12)
for (Z188 = B_11;; Z188 += 1) {
Z192 = W_11->Y15->A[Z188 - 1].Y4;
{
register Zq0A4_199 *W_13 = &W_11->Y15->A[Z192 - 1];

if (SET_IS_SUBSET1(SET_ELEM (Zq0A4_6) | SET_ELEM (Zq0A4_21) | SET_ELEM (Zq0A4_26), W_13->Y3) && ((SET_ELEM (Zq0A4_27) | SET_ELEM (Zq0A4_1) | SET_ELEM (Zq0A4_14)) & W_13->Y3) == 0X0L) {
Z270(Z240);
if (ZpmCQ_25(ORD('X'), &Zq0A4_171) && IN(Zq0A4_42, Z240->U_1.V_5.Y4.Y2)) {
ZfM_29(Zq0A4_172, (STRING)"yyWriteEval (yyt, '", 19L);
Zq0A4_192(W_13->Y0->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)":", 1L);
Zq0A4_192(W_13->Y1->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)"');", 3L);
ZfM_33(Zq0A4_172);
if (W_13->Y2 != (Zq0A4_153)ADR (W_13->Y2)) {
Z268(W_13->Y2);
}
ZfM_33(Zq0A4_172);
if (W_13->Y1->U_1.V_1.Y0 == Zq0A4_105 || W_13->Y1->U_1.V_11.Y10.Y4 == Zq0A4_86) {
ZfM_29(Zq0A4_172, (STRING)"write", 5L);
Zq0A4_192(Zq0A4_86);
} else {
ZfM_29(Zq0A4_172, (STRING)"write", 5L);
Zq0A4_192(W_13->Y1->U_1.V_10.Y9.Y4);
}
ZfM_29(Zq0A4_172, (STRING)" (", 2L);
Z217((LONGCARD)Z192, TRUE);
ZfM_29(Zq0A4_172, (STRING)") yyWriteNl;", 12L);
ZfM_33(Zq0A4_172);
} else if (ZpmCQ_25(ORD('Y'), &Zq0A4_171) && IN(Zq0A4_42, Z240->U_1.V_5.Y4.Y2)) {
ZfM_29(Zq0A4_172, (STRING)"yyWriteEval (yyt, '", 19L);
Zq0A4_192(W_13->Y0->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)":", 1L);
Zq0A4_192(W_13->Y1->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)"');", 3L);
ZfM_33(Zq0A4_172);
if (W_13->Y2 != (Zq0A4_153)ADR (W_13->Y2)) {
Z268(W_13->Y2);
}
} else {
if (W_13->Y2 != (Zq0A4_153)ADR (W_13->Y2)) {
Z268(W_13->Y2);
}
}
}
if (SET_IS_SUBSET1(SET_ELEM (Zq0A4_7) | SET_ELEM (Zq0A4_20) | SET_ELEM (Zq0A4_26), W_13->Y3) && ((SET_ELEM (Zq0A4_27) | SET_ELEM (Zq0A4_1) | SET_ELEM (Zq0A4_14)) & W_13->Y3) == 0X0L) {
Z270(Z240);
if (ZpmCQ_25(ORD('X'), &Zq0A4_171) && IN(Zq0A4_42, Z240->U_1.V_5.Y4.Y2)) {
ZfM_29(Zq0A4_172, (STRING)"yyWriteEval (yyt, '", 19L);
Zq0A4_192(W_13->Y1->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)"');", 3L);
ZfM_33(Zq0A4_172);
if (W_13->Y2 != (Zq0A4_153)ADR (W_13->Y2)) {
Z268(W_13->Y2);
}
ZfM_33(Zq0A4_172);
if (IN(Zq0A4_19, W_13->Y3)) {
ZfM_29(Zq0A4_172, (STRING)"writeBOOLEAN (yyb) yyWriteNl;", 29L);
ZfM_33(Zq0A4_172);
} else if (W_13->Y1->U_1.V_1.Y0 == Zq0A4_105 || W_13->Y1->U_1.V_11.Y10.Y4 == Zq0A4_86) {
ZfM_29(Zq0A4_172, (STRING)"write", 5L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)" (", 2L);
Z217((LONGCARD)Z192, TRUE);
ZfM_29(Zq0A4_172, (STRING)") yyWriteNl;", 12L);
ZfM_33(Zq0A4_172);
} else {
ZfM_29(Zq0A4_172, (STRING)"write", 5L);
Zq0A4_192(W_13->Y1->U_1.V_10.Y9.Y4);
ZfM_29(Zq0A4_172, (STRING)" (", 2L);
Z217((LONGCARD)Z192, TRUE);
ZfM_29(Zq0A4_172, (STRING)") yyWriteNl;", 12L);
ZfM_33(Zq0A4_172);
}
} else if (ZpmCQ_25(ORD('Y'), &Zq0A4_171) && IN(Zq0A4_42, Z240->U_1.V_5.Y4.Y2)) {
ZfM_29(Zq0A4_172, (STRING)"yyWriteEval (yyt, '", 19L);
Zq0A4_192(W_13->Y1->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)"');", 3L);
ZfM_33(Zq0A4_172);
if (W_13->Y2 != (Zq0A4_153)ADR (W_13->Y2)) {
Z268(W_13->Y2);
}
} else {
if (W_13->Y2 != (Zq0A4_153)ADR (W_13->Y2)) {
Z268(W_13->Y2);
}
}
}
if (SET_IS_SUBSET1(SET_ELEM (Zq0A4_7) | SET_ELEM (Zq0A4_21) | SET_ELEM (Zq0A4_26), W_13->Y3) && W_13->Y1->U_1.V_10.Y9.Y11 <= W_13->Y0->U_1.V_10.Y9.Y8->U_1.V_5.Y4.Y22) {
if (ZpmCQ_25(ORD('Z'), &Zq0A4_171) && IN(Zq0A4_42, Z240->U_1.V_5.Y4.Y2)) {
ZfM_29(Zq0A4_172, (STRING)"yyWriteVisit (yyt, '", 20L);
Zq0A4_192(W_13->Y0->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)" ", 1L);
Zq0A4_195((LONGINT)W_13->Y1->U_1.V_10.Y9.Y11);
ZfM_29(Zq0A4_172, (STRING)"');", 3L);
ZfM_33(Zq0A4_172);
}
Z191 = W_13->Y1->U_1.V_10.Y9.Y11;
Z201 = W_13->Y0;
if (Z190 == Z191 && Z199->U_1.V_5.Y4.Y1 == Z201->U_1.V_10.Y9.Y4 && Z272(Z198, (LONGINT)(Z188 + 1), (LONGINT)Z189) && Z273(Z201->U_1.V_10.Y9.Y8)) {
ZfM_29(Zq0A4_172, (STRING)"yyt := yyt^.", 12L);
Zq0A4_192(W_11->Y1);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(Z201->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
Zq0A4_185(Z201->U_1.V_10.Y9.Y8, (Zq0A4_170)Z274);
ZfM_29(Zq0A4_172, (STRING)"EXIT;", 5L);
ZfM_33(Zq0A4_172);
W_10->Y0 = TRUE;
Z188 = Z189 + 1;
} else {
ZfM_29(Zq0A4_172, (STRING)"yyVisit", 7L);
Zq0A4_195((LONGINT)Z191);
Zq0A4_192(Z201->U_1.V_10.Y9.Y4);
ZfM_29(Zq0A4_172, (STRING)" (yyt^.", 7L);
Zq0A4_192(W_11->Y1);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(Z201->U_1.V_10.Y9.Y3);
Zq0A4_185(Z201->U_1.V_10.Y9.Y8, (Zq0A4_170)Z275);
ZfM_29(Zq0A4_172, (STRING)");", 2L);
ZfM_33(Zq0A4_172);
}
}
}
if (Z188 >= B_12) break;
}
}
if (!W_10->Y0) {
if (ZpmCQ_25(ORD('Z'), &Zq0A4_171) && IN(Zq0A4_42, Z240->U_1.V_5.Y4.Y2)) {
ZfM_29(Zq0A4_172, (STRING)"yyVisitParent (yyt);", 20L);
ZfM_33(Zq0A4_172);
}
}
return;
}
} EXIT_6:;
}
break;
case Zq0A4_137:;
{
register Zq0A4_263 *W_14 = &Z240->U_1.V_42.Y41;

Zq0A4gqDK_2(W_14->Y2);
Z268(W_14->Y4);
ZfM_29(Zq0A4_172, (STRING)":=", 2L);
Z268(W_14->Y5);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
return;
}
break;
case Zq0A4_138:;
{
register Zq0A4_264 *W_15 = &Z240->U_1.V_43.Y42;

Z193 = Z198->U_1.V_5.Y4.Y15->A[Z192 - 1].Y5;
if (IN(Zq0A4_11, Z198->U_1.V_5.Y4.Y15->A[Z192 - 1].Y1->U_1.V_11.Y10.Y6) && IN(Zq0A4_11, Z198->U_1.V_5.Y4.Y15->A[Z193 - 1].Y1->U_1.V_11.Y10.Y6)) {
if (IN(Zq0A4_20, Z198->U_1.V_5.Y4.Y15->A[Z192 - 1].Y3) && IN(Zq0A4_20, Z198->U_1.V_5.Y4.Y15->A[Z193 - 1].Y3)) {
Zq0A4gqDK_2(W_15->Y2);
Z217((LONGCARD)Z192, FALSE);
ZfM_29(Zq0A4_172, (STRING)" :=", 3L);
Z268(W_15->Y5);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
}
} else {
Zq0A4gqDK_2(W_15->Y2);
Z268(W_15->Y4);
ZfM_29(Zq0A4_172, (STRING)":=", 2L);
Z268(W_15->Y5);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
}
return;
}
break;
case Zq0A4_139:;
{
register Zq0A4_265 *W_16 = &Z240->U_1.V_44.Y43;

Zq0A4gqDK_2(W_16->Y2);
Z268(W_16->Y5);
ZfM_33(Zq0A4_172);
return;
}
break;
case Zq0A4_141:;
{
register Zq0A4_267 *W_17 = &Z240->U_1.V_46.Y45;

Zq0A4gqDK_2(W_17->Y2);
if (W_17->Y4 != Zq0A4_97) {
if (ZpmCQ_25(ORD('X'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)"yyb := ", 7L);
Z268(W_17->Y4);
ZfM_29(Zq0A4_172, (STRING)"; IF NOT yyb THEN ", 18L);
} else {
ZfM_29(Zq0A4_172, (STRING)"IF NOT (", 8L);
Z268(W_17->Y4);
ZfM_29(Zq0A4_172, (STRING)") THEN ", 7L);
}
Z268(W_17->Y5);
ZfM_33(Zq0A4_172);
if (W_17->Y6->U_1.V_1.Y0 == Zq0A4_141) {
ZfM_29(Zq0A4_172, (STRING)"ELSE ", 5L);
Z268(W_17->Y6);
}
ZfM_29(Zq0A4_172, (STRING)" END;", 5L);
ZfM_33(Zq0A4_172);
} else {
if (ZpmCQ_25(ORD('X'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)"yyb := FALSE; ", 14L);
}
Z268(W_17->Y5);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
Z268(W_17->Y6);
}
return;
}
break;
case Zq0A4_116:;
{
register Zq0A4_242 *W_18 = &Z240->U_1.V_21.Y20;

Z202 = Zq0A4_183(Z198, W_18->Y2);
if (Z202 != Zq0A4_97) {
Z203 = Z202->U_1.V_10.Y9.Y8;
Z197 = Zq0A4_183(Z203, W_18->Y3);
if (Z197 != Zq0A4_97) {
Z217((LONGCARD)(Z198->U_1.V_5.Y4.Y13 + Z202->U_1.V_10.Y9.Y13 + Z197->U_1.V_11.Y10.Y10), TRUE);
} else {
Zq0A4_192(W_18->Y2);
ZfM_29(Zq0A4_172, (STRING)":", 1L);
Zq0A4_192(W_18->Y3);
}
} else {
Zq0A4_192(W_18->Y2);
ZfM_29(Zq0A4_172, (STRING)":", 1L);
Zq0A4_192(W_18->Y3);
}
Z240 = W_18->Y1;
goto EXIT_5;
}
break;
case Zq0A4_117:;
{
register Zq0A4_243 *W_19 = &Z240->U_1.V_22.Y21;

Z197 = Zq0A4_183(Z198, W_19->Y2);
if (Z197 != Zq0A4_97) {
Z217((LONGCARD)Z197->U_1.V_11.Y10.Y10, TRUE);
} else {
Zq0A4_192(W_19->Y2);
}
Z240 = W_19->Y1;
goto EXIT_5;
}
break;
case Zq0A4_119:;
{
register Zq0A4_245 *W_20 = &Z240->U_1.V_24.Y23;

Zp1PEAFi_6(Zq0A4_172, W_20->Y2);
Z240 = W_20->Y1;
goto EXIT_5;
}
break;
case Zq0A4_120:;
{
register Zq0A4_246 *W_21 = &Z240->U_1.V_25.Y24;

Z268(W_21->Y2);
Z240 = W_21->Y1;
goto EXIT_5;
}
break;
case Zq0A4_123:;
{
register Zq0A4_249 *W_22 = &Z240->U_1.V_28.Y27;

Zp1PEAFi_6(Zq0A4_172, W_22->Y1);
Z240 = W_22->Y2;
goto EXIT_5;
}
break;
default:
break;
}
}
return;
} EXIT_5:;
} EXIT_4:;
}

static void Z262
# ifdef HAVE_ARGS
(Zq0A4_153 Z240)
# else
(Z240)
Zq0A4_153 Z240;
# endif
{
struct S_23 Z241;

if (Z240 == Zq0A4_97) {
return;
}
if (Z240 != NIL && Z240->U_1.V_1.Y0 == Zq0A4_100) {
{
register Zq0A4_226 *W_23 = &Z240->U_1.V_5.Y4;

W_23->Y24 = 0;
return;
}
}
}

static void Z263
# ifdef HAVE_ARGS
(Zq0A4_153 Z240)
# else
(Z240)
Zq0A4_153 Z240;
# endif
{
struct S_22 Z241;

if (Z240 == Zq0A4_97) {
return;
}
if (Z240 != NIL && Z240->U_1.V_1.Y0 == Zq0A4_106) {
for (;;) {
{
register Zq0A4_232 *W_24 = &Z240->U_1.V_11.Y10;

if (!(IN(Zq0A4_11, W_24->Y6) && IN(Z190, W_24->Y12))) {
goto EXIT_8;
}
ZfM_29(Zq0A4_172, (STRING)"; ", 2L);
if (IN(Zq0A4_7, W_24->Y6)) {
ZfM_29(Zq0A4_172, (STRING)"VAR ", 4L);
}
Z217((LONGCARD)W_24->Y10, FALSE);
ZfM_29(Zq0A4_172, (STRING)": ", 2L);
Zq0A4_192(W_24->Y4);
return;
}
} EXIT_8:;
}
}

static void Z275
# ifdef HAVE_ARGS
(Zq0A4_153 Z240)
# else
(Z240)
Zq0A4_153 Z240;
# endif
{
struct S_21 Z241;

if (Z240 == Zq0A4_97) {
return;
}
if (Z240 != NIL && Z240->U_1.V_1.Y0 == Zq0A4_106) {
for (;;) {
{
register Zq0A4_232 *W_25 = &Z240->U_1.V_11.Y10;

if (!(IN(Zq0A4_11, W_25->Y6) && IN(Z191, W_25->Y12))) {
goto EXIT_9;
}
ZfM_29(Zq0A4_172, (STRING)", ", 2L);
Z217((LONGCARD)(Z198->U_1.V_5.Y4.Y13 + Z201->U_1.V_10.Y9.Y13 + W_25->Y10), TRUE);
return;
}
} EXIT_9:;
}
}

static void Z248
# ifdef HAVE_ARGS
(Zq0A4_153 Z240)
# else
(Z240)
Zq0A4_153 Z240;
# endif
{
struct S_20 Z241;

if (Z240 == Zq0A4_97) {
return;
}
if (Z240 != NIL && Z240->U_1.V_1.Y0 == Zq0A4_106) {
for (;;) {
{
register Zq0A4_232 *W_26 = &Z240->U_1.V_11.Y10;

if (!(IN(Zq0A4_11, W_26->Y6) && IN(Z190, W_26->Y12))) {
goto EXIT_10;
}
if (IN(Zq0A4_6, W_26->Y6)) {
ZblNKKO_45((STRING)"inherited attribute at root node", 32L, (LONGCARD)ZblNKKO_16, W_26->Y9, (LONGCARD)ZblNKKO_34, ADR (W_26->Y3));
INC(Zq0A4_0);
}
ZfM_29(Zq0A4_172, (STRING)", ", 2L);
Z217((LONGCARD)W_26->Y10, FALSE);
return;
}
} EXIT_10:;
}
}

static void Z264
# ifdef HAVE_ARGS
(Zq0A4_153 Z240)
# else
(Z240)
Zq0A4_153 Z240;
# endif
{
struct S_19 Z241;

if (Z240 == Zq0A4_97) {
return;
}
if (Z240 != NIL && Z240->U_1.V_1.Y0 == Zq0A4_100) {
for (;;) {
{
register Zq0A4_226 *W_27 = &Z240->U_1.V_5.Y4;

if (!((Zq0A4_177 & W_27->Y2) == 0X0L)) {
goto EXIT_11;
}
Z188 = W_27->Y24 + 1;
for (;;) {
if (W_27->Y24 == W_27->Y14) {
goto EXIT_12;
}
INC(W_27->Y24);
{
register Zq0A4_199 *W_28 = &W_27->Y15->A[W_27->Y15->A[W_27->Y24 - 1].Y4 - 1];

if (IN(Zq0A4_20, W_28->Y3) && W_28->Y1->U_1.V_10.Y9.Y11 > Z190) {
DEC(W_27->Y24);
goto EXIT_12;
}
}
} EXIT_12:;
Z189 = W_27->Y24;
W_27->Y24 = Z188 - 1;
Z187 = 0;
Z198 = Z240;
Zq0A4_185(Z240, (Zq0A4_170)Z296);
if (Z187 > 0) {
ZfM_29(Zq0A4_172, (STRING)" | ", 3L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(W_27->Y1);
ZfM_29(Zq0A4_172, (STRING)":", 1L);
ZfM_33(Zq0A4_172);
Z198 = Z240;
Zq0A4_185(Z240, (Zq0A4_170)Z264);
}
return;
}
} EXIT_11:;
}
if (Z240 != NIL && Z240->U_1.V_1.Y0 == Zq0A4_105) {
{
register Zq0A4_231 *W_29 = &Z240->U_1.V_10.Y9;

Z201 = Z240;
Zq0A4_185(W_29->Y8, (Zq0A4_170)Z297);
return;
}
}
if (Z240 != NIL && Z240->U_1.V_1.Y0 == Zq0A4_106) {
for (;;) {
{
register Zq0A4_232 *W_30 = &Z240->U_1.V_11.Y10;

if (!(IN(Zq0A4_11, W_30->Y6) && Zq0A4_183(Z196, W_30->Y3) == Zq0A4_97 && IN(Z190, W_30->Y12) || IN(Zq0A4_14, W_30->Y6) && !IN(Zq0A4_15, W_30->Y6) && W_30->Y10 != Z194)) {
goto EXIT_13;
}
ZfM_29(Zq0A4_172, (STRING)"  ", 2L);
Z217((LONGCARD)W_30->Y10, FALSE);
ZfM_29(Zq0A4_172, (STRING)": ", 2L);
Zq0A4_192(W_30->Y4);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
return;
}
} EXIT_13:;
}
}

static void Z297
# ifdef HAVE_ARGS
(Zq0A4_153 Z240)
# else
(Z240)
Zq0A4_153 Z240;
# endif
{
struct S_18 Z241;

if (Z240 == Zq0A4_97) {
return;
}
if (Z240 != NIL && Z240->U_1.V_1.Y0 == Zq0A4_106) {
for (;;) {
{
register Zq0A4_232 *W_31 = &Z240->U_1.V_11.Y10;

if (!(IN(Zq0A4_11, W_31->Y6) || IN(Zq0A4_14, W_31->Y6) && !IN(Zq0A4_15, W_31->Y6))) {
goto EXIT_14;
}
Z193 = Z198->U_1.V_5.Y4.Y13 + Z201->U_1.V_10.Y9.Y13 + W_31->Y10;
if (!(IN(Zq0A4_14, W_31->Y6) || ((SET_ELEM (Zq0A4_22) | SET_ELEM (Zq0A4_23)) & Z198->U_1.V_5.Y4.Y15->A[Z193 - 1].Y3) == 0X0L || Z193 == Z206((LONGCARD)Z193))) {
goto EXIT_14;
}
if (!Z226(W_31->Y12)) {
goto EXIT_14;
}
ZfM_29(Zq0A4_172, (STRING)"  ", 2L);
Z217((LONGCARD)Z193, FALSE);
ZfM_29(Zq0A4_172, (STRING)": ", 2L);
Zq0A4_192(W_31->Y4);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
return;
}
} EXIT_14:;
}
}

static void Z296
# ifdef HAVE_ARGS
(Zq0A4_153 Z240)
# else
(Z240)
Zq0A4_153 Z240;
# endif
{
struct S_17 Z241;

if (Z240 == Zq0A4_97) {
return;
}
if (Z240 != NIL && Z240->U_1.V_1.Y0 == Zq0A4_105) {
{
register Zq0A4_231 *W_32 = &Z240->U_1.V_10.Y9;

Z201 = Z240;
Zq0A4_185(W_32->Y8, (Zq0A4_170)Z298);
return;
}
}
if (Z240 != NIL && Z240->U_1.V_1.Y0 == Zq0A4_106) {
for (;;) {
{
register Zq0A4_232 *W_33 = &Z240->U_1.V_11.Y10;

if (!(IN(Zq0A4_11, W_33->Y6) && Zq0A4_183(Z196, W_33->Y3) == Zq0A4_97 && IN(Z190, W_33->Y12) || IN(Zq0A4_14, W_33->Y6) && !IN(Zq0A4_15, W_33->Y6) && W_33->Y10 != Z194)) {
goto EXIT_15;
}
INC(Z187);
return;
}
} EXIT_15:;
}
}

static void Z298
# ifdef HAVE_ARGS
(Zq0A4_153 Z240)
# else
(Z240)
Zq0A4_153 Z240;
# endif
{
struct S_16 Z241;

if (Z240 == Zq0A4_97) {
return;
}
if (Z240 != NIL && Z240->U_1.V_1.Y0 == Zq0A4_106) {
for (;;) {
{
register Zq0A4_232 *W_34 = &Z240->U_1.V_11.Y10;

if (!(IN(Zq0A4_11, W_34->Y6) || IN(Zq0A4_14, W_34->Y6) && !IN(Zq0A4_15, W_34->Y6))) {
goto EXIT_16;
}
Z193 = Z198->U_1.V_5.Y4.Y13 + Z201->U_1.V_10.Y9.Y13 + W_34->Y10;
if (!(IN(Zq0A4_14, W_34->Y6) || ((SET_ELEM (Zq0A4_22) | SET_ELEM (Zq0A4_23)) & Z198->U_1.V_5.Y4.Y15->A[Z193 - 1].Y3) == 0X0L || Z193 == Z206((LONGCARD)Z193))) {
goto EXIT_16;
}
if (!Z226(W_34->Y12)) {
goto EXIT_16;
}
INC(Z187);
return;
}
} EXIT_16:;
}
}

static void Z246
# ifdef HAVE_ARGS
(Zq0A4_153 Z240)
# else
(Z240)
Zq0A4_153 Z240;
# endif
{
struct S_15 Z241;

if (Z240 == Zq0A4_97) {
return;
}
if (Z240 != NIL && Z240->U_1.V_1.Y0 == Zq0A4_106) {
for (;;) {
{
register Zq0A4_232 *W_35 = &Z240->U_1.V_11.Y10;

if (!IN(Zq0A4_11, W_35->Y6)) {
goto EXIT_17;
}
ZfM_29(Zq0A4_172, (STRING)"  ", 2L);
Z217((LONGCARD)W_35->Y10, FALSE);
ZfM_29(Zq0A4_172, (STRING)": ", 2L);
Zq0A4_192(W_35->Y4);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
return;
}
} EXIT_17:;
}
}

static void Z249
# ifdef HAVE_ARGS
(Zq0A4_153 Z240)
# else
(Z240)
Zq0A4_153 Z240;
# endif
{
struct S_14 Z241;

if (Z240 == Zq0A4_97) {
return;
}
if (Z240 != NIL && Z240->U_1.V_1.Y0 == Zq0A4_100) {
for (;;) {
{
register Zq0A4_226 *W_36 = &Z240->U_1.V_5.Y4;

if (!((Zq0A4_177 & W_36->Y2) == 0X0L)) {
goto EXIT_18;
}
Z196 = Z240;
Zq0A4_185(W_36->Y3, (Zq0A4_170)Z249);
return;
}
} EXIT_18:;
}
if (Z240 != NIL && Z240->U_1.V_1.Y0 == Zq0A4_106) {
for (;;) {
{
register Zq0A4_232 *W_37 = &Z240->U_1.V_11.Y10;

if (!IN(Zq0A4_14, W_37->Y6)) {
goto EXIT_19;
}
Z198 = Z196;
Z194 = W_37->Y10;
if (IN(Zq0A4_15, W_37->Y6)) {
ZfM_29(Zq0A4_172, (STRING)"PROCEDURE y", 11L);
Zq0A4_192(Z198->U_1.V_5.Y4.Y1);
ZfM_29(Zq0A4_172, (STRING)"y", 1L);
Zq0A4_192(W_37->Y3);
ZfM_29(Zq0A4_172, (STRING)" (yyt: ", 7L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)"): ", 3L);
Zq0A4_192(W_37->Y4);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
} else {
ZfM_29(Zq0A4_172, (STRING)"PROCEDURE y", 11L);
Zq0A4_192(Z198->U_1.V_5.Y4.Y1);
ZfM_29(Zq0A4_172, (STRING)"y", 1L);
Zq0A4_192(W_37->Y3);
ZfM_29(Zq0A4_172, (STRING)" (yyt: ", 7L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)"; VAR ", 6L);
Z217((LONGCARD)W_37->Y10, FALSE);
ZfM_29(Zq0A4_172, (STRING)": ", 2L);
Zq0A4_192(W_37->Y4);
ZfM_29(Zq0A4_172, (STRING)");", 2L);
ZfM_33(Zq0A4_172);
}
ZfM_29(Zq0A4_172, (STRING)" VAR yyTempo: RECORD CASE : INTEGER OF", 38L);
ZfM_33(Zq0A4_172);
Z264(Z198);
Zq0A4_184(Z198->U_1.V_5.Y4.Y4, (Zq0A4_170)Z264);
ZfM_29(Zq0A4_172, (STRING)" END; END;", 10L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" BEGIN", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  WITH yyTempo DO", 17L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   CASE yyt^.Kind OF", 20L);
ZfM_33(Zq0A4_172);
if (IN(Zq0A4_56, Zq0A4_69)) {
Z192 = W_37->Y10;
Z198 = Z196;
Z299(Z198);
Zq0A4_184(Z198->U_1.V_5.Y4.Y4, (Zq0A4_170)Z299);
Z198 = Z196;
}
ZfM_29(Zq0A4_172, (STRING)"   ELSE", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   END;", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  END;", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" END y", 6L);
Zq0A4_192(Z198->U_1.V_5.Y4.Y1);
ZfM_29(Zq0A4_172, (STRING)"y", 1L);
Zq0A4_192(W_37->Y3);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
Z194 = 0;
return;
}
} EXIT_19:;
}
}

static void Z299
# ifdef HAVE_ARGS
(Zq0A4_153 Z240)
# else
(Z240)
Zq0A4_153 Z240;
# endif
{
struct S_13 Z241;

if (Z240 == Zq0A4_97) {
return;
}
if (Z240 != NIL && Z240->U_1.V_1.Y0 == Zq0A4_100) {
{
register Zq0A4_226 *W_38 = &Z240->U_1.V_5.Y4;

ZfM_29(Zq0A4_172, (STRING)"| ", 2L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(W_38->Y1);
ZfM_29(Zq0A4_172, (STRING)":", 1L);
ZfM_33(Zq0A4_172);
{
register Zq0A4_199 *W_39 = &W_38->Y15->A[Z192 - 1];

Z198 = Z240;
Z270(Z240);
if (IN(Zq0A4_15, W_39->Y3)) {
Z299(W_39->Y2);
} else {
Z268(W_39->Y2);
ZfM_33(Zq0A4_172);
}
}
return;
}
}
if (Z240 != NIL && Z240->U_1.V_1.Y0 == Zq0A4_137) {
{
register Zq0A4_263 *W_40 = &Z240->U_1.V_42.Y41;

ZfM_29(Zq0A4_172, (STRING)"RETURN ", 7L);
Z268(W_40->Y5);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
return;
}
}
if (Z240 != NIL && Z240->U_1.V_1.Y0 == Zq0A4_138) {
{
register Zq0A4_264 *W_41 = &Z240->U_1.V_43.Y42;

ZfM_29(Zq0A4_172, (STRING)"RETURN ", 7L);
Z268(W_41->Y5);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
return;
}
}
if (Z240 != NIL && Z240->U_1.V_1.Y0 == Zq0A4_139) {
{
register Zq0A4_265 *W_42 = &Z240->U_1.V_44.Y43;

ZfM_29(Zq0A4_172, (STRING)"NoBlockStatementForDemandFunctionAttributes;", 44L);
ZfM_33(Zq0A4_172);
return;
}
}
}

static void Z270
# ifdef HAVE_ARGS
(Zq0A4_153 Z240)
# else
(Z240)
Zq0A4_153 Z240;
# endif
{
struct S_12 Z241;

if (Z240 == Zq0A4_97) {
return;
}
if (Z240 != NIL && Z240->U_1.V_1.Y0 == Zq0A4_100) {
{
register Zq0A4_226 *W_43 = &Z240->U_1.V_5.Y4;

{
SHORTCARD B_13 = 1, B_14 = W_43->Y14;

if (B_13 <= B_14)
for (Z193 = B_13;; Z193 += 1) {
{
register Zq0A4_199 *W_44 = &W_43->Y15->A[Z193 - 1];

if (ZolB7FGBG_9((LONGINT)Z192, (LONGINT)Z193, W_43->Y16) && IN(Zq0A4_14, W_44->Y3) && !IN(Zq0A4_15, W_44->Y3)) {
if (IN(Zq0A4_20, W_44->Y3)) {
Z200 = Z220(Z240, W_44->Y1->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)"    y", 5L);
Zq0A4_192(Z200->U_1.V_5.Y4.Y1);
ZfM_29(Zq0A4_172, (STRING)"y", 1L);
Zq0A4_192(W_44->Y1->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)" (yyt, ", 7L);
Z217((LONGCARD)Z193, FALSE);
ZfM_29(Zq0A4_172, (STRING)");", 2L);
ZfM_33(Zq0A4_172);
} else {
Z200 = Z220(W_44->Y0->U_1.V_10.Y9.Y8, W_44->Y1->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)"    y", 5L);
Zq0A4_192(Z200->U_1.V_5.Y4.Y1);
ZfM_29(Zq0A4_172, (STRING)"y", 1L);
Zq0A4_192(W_44->Y1->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)" (yyt^.", 7L);
Zq0A4_192(W_43->Y1);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(W_44->Y0->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)", ", 2L);
Z217((LONGCARD)Z193, FALSE);
ZfM_29(Zq0A4_172, (STRING)");", 2L);
ZfM_33(Zq0A4_172);
}
}
}
if (Z193 >= B_14) break;
}
}
return;
}
}
}

static BOOLEAN Z272
# ifdef HAVE_ARGS
(Zq0A4_153 Z301, INTEGER Z188, INTEGER Z189)
# else
(Z301, Z188, Z189)
Zq0A4_153 Z301;
INTEGER Z188;
INTEGER Z189;
# endif
{
INTEGER Z192, Z193;
struct S_11 Z241;

if (Z301 == Zq0A4_97) {
return FALSE;
}
{
register Zq0A4_226 *W_45 = &Z301->U_1.V_5.Y4;

{
LONGINT B_15 = Z188, B_16 = Z189;

if (B_15 <= B_16)
for (Z193 = B_15;; Z193 += 1) {
Z192 = W_45->Y15->A[Z193 - 1].Y4;
{
register Zq0A4_199 *W_46 = &W_45->Y15->A[Z192 - 1];

if (SET_IS_SUBSET1(SET_ELEM (Zq0A4_6) | SET_ELEM (Zq0A4_21) | SET_ELEM (Zq0A4_26), W_46->Y3) && ((SET_ELEM (Zq0A4_27) | SET_ELEM (Zq0A4_1) | SET_ELEM (Zq0A4_14)) & W_46->Y3) == 0X0L) {
if (W_46->Y2 != (Zq0A4_153)ADR (W_46->Y2) && !Z302(W_46->Y2, Z192)) {
return FALSE;
}
}
if (SET_IS_SUBSET1(SET_ELEM (Zq0A4_7) | SET_ELEM (Zq0A4_20) | SET_ELEM (Zq0A4_26), W_46->Y3) && ((SET_ELEM (Zq0A4_27) | SET_ELEM (Zq0A4_1) | SET_ELEM (Zq0A4_14)) & W_46->Y3) == 0X0L) {
if (W_46->Y2 != (Zq0A4_153)ADR (W_46->Y2) && !Z302(W_46->Y2, Z192)) {
return FALSE;
}
}
if (SET_IS_SUBSET1(SET_ELEM (Zq0A4_7) | SET_ELEM (Zq0A4_21) | SET_ELEM (Zq0A4_26), W_46->Y3) && W_46->Y1->U_1.V_10.Y9.Y11 <= W_46->Y0->U_1.V_10.Y9.Y8->U_1.V_5.Y4.Y22) {
return FALSE;
}
}
if (Z193 >= B_16) break;
}
}
return TRUE;
}
}

static BOOLEAN Z302
# ifdef HAVE_ARGS
(Zq0A4_153 Z303, INTEGER Z304)
# else
(Z303, Z304)
Zq0A4_153 Z303;
INTEGER Z304;
# endif
{
struct S_10 Z241;

if (Z303 == Zq0A4_97) {
return FALSE;
}
if (Z303 != NIL && Z303->U_1.V_1.Y0 == Zq0A4_138) {
for (;;) {
{
register Zq0A4_264 *W_47 = &Z303->U_1.V_43.Y42;

Z193 = Z198->U_1.V_5.Y4.Y15->A[Z304 - 1].Y5;
if (!(IN(Zq0A4_11, Z198->U_1.V_5.Y4.Y15->A[Z304 - 1].Y1->U_1.V_11.Y10.Y6) && IN(Zq0A4_11, Z198->U_1.V_5.Y4.Y15->A[Z193 - 1].Y1->U_1.V_11.Y10.Y6) && !(IN(Zq0A4_20, Z198->U_1.V_5.Y4.Y15->A[Z304 - 1].Y3) && IN(Zq0A4_20, Z198->U_1.V_5.Y4.Y15->A[Z193 - 1].Y3)))) {
goto EXIT_20;
}
return TRUE;
}
} EXIT_20:;
}
return FALSE;
}

static void Z274
# ifdef HAVE_ARGS
(Zq0A4_153 Z240)
# else
(Z240)
Zq0A4_153 Z240;
# endif
{
struct S_8 Z241;

if (Z240 == Zq0A4_97) {
return;
}
if (Z240 != NIL && Z240->U_1.V_1.Y0 == Zq0A4_106) {
{
register struct S_9 *W_48 = &Z241.U_1.V_1.Y0;

for (;;) {
{
register Zq0A4_232 *W_49 = &Z240->U_1.V_11.Y10;

if (!(IN(Zq0A4_11, W_49->Y6) && IN(Z191, W_49->Y12))) {
goto EXIT_21;
}
W_48->Y0 = Z198->U_1.V_5.Y4.Y13 + Z201->U_1.V_10.Y9.Y13 + W_49->Y10;
{
register Zq0A4_199 *W_50 = &Z198->U_1.V_5.Y4.Y15->A[W_48->Y0 - 1];

if (((SET_ELEM (Zq0A4_22) | SET_ELEM (Zq0A4_23)) & W_50->Y3) != 0X0L) {
W_48->Y0 = Z206((LONGCARD)W_48->Y0);
}
}
if (!(W_49->Y10 != W_48->Y0)) {
goto EXIT_21;
}
ZfM_29(Zq0A4_172, (STRING)"yy", 2L);
Zq0A4_192(W_49->Y3);
ZfM_29(Zq0A4_172, (STRING)" := ", 4L);
Z217((LONGCARD)W_48->Y0, TRUE);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
return;
}
} EXIT_21:;
}
}
}

static BOOLEAN Z267
# ifdef HAVE_ARGS
(Zq0A4_153 Z240)
# else
(Z240)
Zq0A4_153 Z240;
# endif
{
struct S_7 Z241;

if (Z240 == Zq0A4_97) {
return FALSE;
}
for (;;) {
{
register Zq0A4_226 *W_51 = &Z240->U_1.V_5.Y4;

if (!(Z305(Z240) || Z306(W_51->Y4))) {
goto EXIT_22;
}
return TRUE;
}
} EXIT_22:;
return FALSE;
}

static BOOLEAN Z306
# ifdef HAVE_ARGS
(Zq0A4_153 Z307)
# else
(Z307)
Zq0A4_153 Z307;
# endif
{
struct S_6 Z241;

if (Z307 == Zq0A4_97) {
return FALSE;
}
if (Z307 != NIL && Z307->U_1.V_1.Y0 == Zq0A4_100) {
for (;;) {
{
register Zq0A4_226 *W_52 = &Z307->U_1.V_5.Y4;

if (!(Z267(Z307) || Z306(W_52->Y5))) {
goto EXIT_23;
}
return TRUE;
}
} EXIT_23:;
}
return FALSE;
}

static BOOLEAN Z305
# ifdef HAVE_ARGS
(Zq0A4_153 Z240)
# else
(Z240)
Zq0A4_153 Z240;
# endif
{
struct S_5 Z241;

if (Z240 == Zq0A4_97) {
return FALSE;
}
for (;;) {
{
register Zq0A4_226 *W_53 = &Z240->U_1.V_5.Y4;

if (!((Zq0A4_177 & W_53->Y2) == 0X0L)) {
goto EXIT_24;
}
if (!(W_53->Y24 != W_53->Y14)) {
goto EXIT_24;
}
Z198 = Z240;
Z189 = W_53->Y24;
for (;;) {
if (Z189 == W_53->Y14) {
goto EXIT_25;
}
INC(Z189);
{
register Zq0A4_199 *W_54 = &W_53->Y15->A[W_53->Y15->A[Z189 - 1].Y4 - 1];

if (IN(Zq0A4_20, W_54->Y3) && W_54->Y1->U_1.V_10.Y9.Y11 > Z190) {
DEC(Z189);
goto EXIT_25;
}
}
} EXIT_25:;
{
SHORTCARD B_17 = W_53->Y24 + 1, B_18 = Z189;

if (B_17 <= B_18)
for (Z188 = B_17;; Z188 += 1) {
Z192 = W_53->Y15->A[Z188 - 1].Y4;
{
register Zq0A4_199 *W_55 = &W_53->Y15->A[Z192 - 1];

if (SET_IS_SUBSET1(SET_ELEM (Zq0A4_7) | SET_ELEM (Zq0A4_21) | SET_ELEM (Zq0A4_26), W_55->Y3) && W_55->Y1->U_1.V_10.Y9.Y11 <= W_55->Y0->U_1.V_10.Y9.Y8->U_1.V_5.Y4.Y22) {
Z191 = W_55->Y1->U_1.V_10.Y9.Y11;
Z201 = W_55->Y0;
if (Z190 == Z191 && Z199->U_1.V_5.Y4.Y1 == Z201->U_1.V_10.Y9.Y4 && Z272(Z198, (LONGINT)(Z188 + 1), (LONGINT)Z189)) {
return TRUE;
}
}
}
if (Z188 >= B_18) break;
}
}
return FALSE;
return TRUE;
}
} EXIT_24:;
return FALSE;
}

static BOOLEAN Z273
# ifdef HAVE_ARGS
(Zq0A4_153 Z240)
# else
(Z240)
Zq0A4_153 Z240;
# endif
{
struct S_4 Z241;

if (Z240 == Zq0A4_97) {
return FALSE;
}
for (;;) {
{
register Zq0A4_226 *W_56 = &Z240->U_1.V_5.Y4;

Z204 = TRUE;
Z195 = W_56->Y14;
ZpmCQ_5(&Z205, (LONGCARD)W_56->Y14);
Zq0A4_185(Z240, (Zq0A4_170)Z308);
ZpmCQ_7(&Z205);
if (!Z204) {
goto EXIT_26;
}
return TRUE;
}
} EXIT_26:;
return FALSE;
}

static void Z308
# ifdef HAVE_ARGS
(Zq0A4_153 Z240)
# else
(Z240)
Zq0A4_153 Z240;
# endif
{
struct S_2 Z241;

if (Z240 == Zq0A4_97) {
return;
}
if (Z240 != NIL && Z240->U_1.V_1.Y0 == Zq0A4_106) {
{
register struct S_3 *W_57 = &Z241.U_1.V_1.Y0;

for (;;) {
{
register Zq0A4_232 *W_58 = &Z240->U_1.V_11.Y10;

if (!(IN(Zq0A4_11, W_58->Y6) && IN(Z191, W_58->Y12))) {
goto EXIT_27;
}
W_57->Y0 = Z198->U_1.V_5.Y4.Y13 + Z201->U_1.V_10.Y9.Y13 + W_58->Y10;
{
register Zq0A4_199 *W_59 = &Z198->U_1.V_5.Y4.Y15->A[W_57->Y0 - 1];

if (((SET_ELEM (Zq0A4_22) | SET_ELEM (Zq0A4_23)) & W_59->Y3) != 0X0L) {
W_57->Y0 = Z206((LONGCARD)W_57->Y0);
}
}
if (W_58->Y10 != W_57->Y0) {
if (W_57->Y0 <= Z195 && ZpmCQ_25((LONGCARD)W_57->Y0, &Z205)) {
Z204 = FALSE;
}
ZpmCQ_13(&Z205, (LONGCARD)W_58->Y10);
}
return;
}
} EXIT_27:;
}
}
}

static Zfb3DLQ_0 Z247
# ifdef HAVE_ARGS
(Zq0A4_153 Z309)
# else
(Z309)
Zq0A4_153 Z309;
# endif
{
struct S_1 Z241;

for (;;) {
for (;;) {
if (Z309 != NIL && Z309->U_1.V_1.Y0 == Zq0A4_100) {
for (;;) {
{
register Zq0A4_226 *W_60 = &Z309->U_1.V_5.Y4;

if (!((Zq0A4_177 & W_60->Y2) == 0X0L)) {
goto EXIT_30;
}
return W_60->Y1;
}
} EXIT_30:;
Z309 = Z309->U_1.V_5.Y4.Y5;
goto EXIT_29;
}
Z231((STRING)"GetName", 7L);
} EXIT_29:;
} EXIT_28:;
}

void ZbpA7nqDK_4
 ARGS ((void))
{
Z194 = 0;
}

void ZbpA7nqDK_5
 ARGS ((void))
{
}

static void Z312
 ARGS ((void))
{
ZfM_34();
rExit(1L);
}

void BEGIN_EvalMod2 ARGS ((void))
{
  static BOOLEAN has_been_called = FALSE;
  if (has_been_called) return;
  has_been_called = TRUE;
BEGIN_IO ();
BEGIN_Tree ();
BEGIN_rSystem ();
BEGIN_IO ();
BEGIN_Tree ();
BEGIN_IO ();
BEGIN_StringM ();
BEGIN_Idents ();
BEGIN_Texts ();
BEGIN_Sets ();
BEGIN_Relation ();
BEGIN_TreeMod2 ();
BEGIN_EvalMod ();
BEGIN_Tree ();
BEGIN_Errors ();

ZbpA7nqDK_0 = ZfM_1;
ZbpA7nqDK_2 = Z312;
ZbpA7nqDK_4();
}
