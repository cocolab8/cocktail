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

#ifndef DEFINITION_TreeCxx2
#include "TreeCxx2.h"
#endif

#ifndef DEFINITION_EvalCxx
#include "EvalCxx.h"
#endif

#ifndef DEFINITION_Tree
#include "Tree.h"
#endif

#ifndef DEFINITION_Errors
#include "Errors.h"
#endif

#ifndef DEFINITION_EvalCxx2
#include "EvalCxx2.h"
#endif

ZfM_3 ZbpA7dpZf_0;
BOOLEAN ZbpA7dpZf_1;
PROC ZbpA7dpZf_2;

static SHORTCARD Z190, Z191, Z192, Z193, Z194, Z195, Z196, Z197;
static Zq0A4_153 Z198, Z199, Z200, Z201, Z202, Z203, Z204, Z205;
static BOOLEAN Z206;
static ZpmCQ_4 Z207;
static CARDINAL Z208 ARGS ((CARDINAL Z194));
static void Z219 ARGS ((CARDINAL Z194, BOOLEAN Z220));
static Zq0A4_153 Z222 ARGS ((Zq0A4_153 Z200, Zfb3DLQ_0 Z216));
static BOOLEAN Z227 ARGS ((BITSET Z228));
static void Z232 ARGS ((CHAR Z233[], LONGCARD O_1));
static BOOLEAN Z236 ARGS ((BYTE Z237[], LONGCARD O_3, BYTE Z238[], LONGCARD O_2));
struct S_27 {
union {
char dummy;
} U_1;
};
static void Z245 ARGS ((Zq0A4_153 Z241));
struct S_26 {
union {
char dummy;
} U_1;
};
static void Z263 ARGS ((Zq0A4_153 Z241));
struct S_24 {
union {
struct {
struct S_25 {
BOOLEAN Y0;
} Y0;
} V_1;
} U_1;
};
static void Z253 ARGS ((Zq0A4_153 Z241));
struct S_23 {
union {
char dummy;
} U_1;
};
static void Z291 ARGS ((Zq0A4_153 Z241));
struct S_22 {
union {
char dummy;
} U_1;
};
static void Z292 ARGS ((Zq0A4_153 Z241));
struct S_21 {
union {
char dummy;
} U_1;
};
static void Z254 ARGS ((Zq0A4_153 Z241));
struct S_20 {
union {
char dummy;
} U_1;
};
static void Z273 ARGS ((Zq0A4_153 Z241));
struct S_19 {
union {
char dummy;
} U_1;
};
static void Z249 ARGS ((Zq0A4_153 Z241));
struct S_18 {
union {
char dummy;
} U_1;
};
static void Z268 ARGS ((Zq0A4_153 Z241));
struct S_17 {
union {
char dummy;
} U_1;
};
static void Z295 ARGS ((Zq0A4_153 Z241));
struct S_16 {
union {
char dummy;
} U_1;
};
static void Z247 ARGS ((Zq0A4_153 Z241));
struct S_15 {
union {
char dummy;
} U_1;
};
static void Z250 ARGS ((Zq0A4_153 Z241));
struct S_14 {
union {
char dummy;
} U_1;
};
static void Z296 ARGS ((Zq0A4_153 Z241));
struct S_13 {
union {
char dummy;
} U_1;
};
static void Z269 ARGS ((Zq0A4_153 Z241));
struct S_12 {
union {
char dummy;
} U_1;
};
static BOOLEAN Z267 ARGS ((Zq0A4_153 Z298, INTEGER Z190, INTEGER Z191));
struct S_11 {
union {
char dummy;
} U_1;
};
static BOOLEAN Z299 ARGS ((Zq0A4_153 Z300, INTEGER Z301));
struct S_10 {
union {
char dummy;
} U_1;
};
static void Z272 ARGS ((Zq0A4_153 Z241));
struct S_8 {
union {
struct {
struct S_9 {
SHORTCARD Y0;
} Y0;
} V_1;
} U_1;
};
static BOOLEAN Z262 ARGS ((Zq0A4_153 Z241));
struct S_7 {
union {
char dummy;
} U_1;
};
static BOOLEAN Z303 ARGS ((Zq0A4_153 Z304));
struct S_6 {
union {
char dummy;
} U_1;
};
static BOOLEAN Z302 ARGS ((Zq0A4_153 Z241));
struct S_5 {
union {
char dummy;
} U_1;
};
static BOOLEAN Z271 ARGS ((Zq0A4_153 Z241));
struct S_4 {
union {
char dummy;
} U_1;
};
static void Z305 ARGS ((Zq0A4_153 Z241));
struct S_2 {
union {
struct {
struct S_3 {
SHORTCARD Y0;
} Y0;
} V_1;
} U_1;
};
static Zfb3DLQ_0 Z248 ARGS ((Zq0A4_153 Z306));
struct S_1 {
union {
char dummy;
} U_1;
};
static void Z309 ARGS ((void));

static CARDINAL Z208
# ifdef HAVE_ARGS
(CARDINAL Z194)
# else
(Z194)
CARDINAL Z194;
# endif
{
ZpmCQ_4 Z209;
CARDINAL Z210;
BOOLEAN Z211;
CARDINAL Z195, Z196;

{
register Zq0A4_226 *W_1 = &Z200->U_1.V_5.Y4;

ZpmCQ_5(&Z209, (LONGCARD)W_1->Y14);
ZpmCQ_13(&Z209, Z194);
do {
Z211 = TRUE;
{
LONGCARD B_1 = 1, B_2 = W_1->Y14;

if (B_1 <= B_2)
for (Z195 = B_1;; Z195 += 1) {
if (ZpmCQ_25(Z195, &Z209)) {
if (IN(Zq0A4_22, W_1->Y15->A[Z195 - 1].Y3)) {
Z196 = W_1->Y15->A[Z195 - 1].Y5;
if (IN(Zq0A4_11, W_1->Y15->A[Z196 - 1].Y1->U_1.V_11.Y10.Y6) && !ZpmCQ_25(Z196, &Z209)) {
ZpmCQ_13(&Z209, Z196);
Z211 = FALSE;
}
}
if (IN(Zq0A4_23, W_1->Y15->A[Z195 - 1].Y3)) {
{
LONGCARD B_3 = 1, B_4 = W_1->Y14;

if (B_3 <= B_4)
for (Z196 = B_3;; Z196 += 1) {
if (IN(Zq0A4_22, W_1->Y15->A[Z196 - 1].Y3) && IN(Zq0A4_11, W_1->Y15->A[Z196 - 1].Y1->U_1.V_11.Y10.Y6) && W_1->Y15->A[Z196 - 1].Y5 == Z195 && !ZpmCQ_25(Z196, &Z209)) {
ZpmCQ_13(&Z209, Z196);
Z211 = FALSE;
}
if (Z196 >= B_4) break;
}
}
}
}
if (Z195 >= B_2) break;
}
}
} while (!Z211);
Z210 = ZpmCQ_17(&Z209);
if (Z210 <= W_1->Y13) {
Z211 = TRUE;
Z195 = Z210 + 1;
for (;;) {
if (Z195 > W_1->Y13) {
goto EXIT_1;
}
if (ZpmCQ_25(Z195, &Z209)) {
Z211 = FALSE;
goto EXIT_1;
}
INC(Z195);
} EXIT_1:;
if (!Z211) {
Z195 = 1;
for (;;) {
Z196 = W_1->Y15->A[Z195 - 1].Y4;
if (Z196 <= W_1->Y13 && ZpmCQ_25(Z196, &Z209)) {
Z210 = Z196;
goto EXIT_2;
}
INC(Z195);
} EXIT_2:;
}
}
ZpmCQ_7(&Z209);
return Z210;
}
}

static void Z219
# ifdef HAVE_ARGS
(CARDINAL Z194, BOOLEAN Z220)
# else
(Z194, Z220)
CARDINAL Z194;
BOOLEAN Z220;
# endif
{
if (Z220) {
{
register Zq0A4_199 *W_2 = &Z200->U_1.V_5.Y4.Y15->A[Z194 - 1];

if (IN(Zq0A4_11, W_2->Y1->U_1.V_11.Y10.Y6) && ((SET_ELEM (Zq0A4_22) | SET_ELEM (Zq0A4_23)) & W_2->Y3) != 0X0L) {
Z194 = Z208(Z194);
}
}
}
{
register Zq0A4_199 *W_3 = &Z200->U_1.V_5.Y4.Y15->A[Z194 - 1];

if (IN(Zq0A4_1, W_3->Y3)) {
return;
}
if (IN(Zq0A4_20, W_3->Y3)) {
{
register Zq0A4_232 *W_4 = &W_3->Y1->U_1.V_11.Y10;

if (IN(Zq0A4_11, W_4->Y6)) {
if (Zq0A4_183(Z198, W_4->Y3) == Zq0A4_97) {
ZfM_29(Zq0A4_172, (STRING)"yy", 2L);
Zq0A4_192(W_4->Y3);
} else if (IN(Zq0A4_6, W_4->Y6)) {
ZfM_29(Zq0A4_172, (STRING)"yy", 2L);
Zq0A4_192(W_4->Y3);
} else {
ZfM_29(Zq0A4_172, (STRING)"(* yy", 5L);
Zq0A4_192(W_4->Y3);
ZfM_29(Zq0A4_172, (STRING)")", 1L);
}
} else if (IN(Zq0A4_14, W_4->Y6)) {
if (IN(Zq0A4_15, W_4->Y6)) {
Z202 = Z222(Z200, W_4->Y3);
ZfM_29(Zq0A4_172, (STRING)"y", 1L);
Zq0A4_192(Z202->U_1.V_5.Y4.Y1);
ZfM_29(Zq0A4_172, (STRING)"y", 1L);
Zq0A4_192(W_4->Y3);
ZfM_29(Zq0A4_172, (STRING)" (yyt)", 6L);
} else if (Z194 != Z196) {
ZfM_29(Zq0A4_172, (STRING)"yy", 2L);
Zq0A4_192(W_4->Y3);
} else {
ZfM_29(Zq0A4_172, (STRING)"(* yy", 5L);
Zq0A4_192(W_4->Y3);
ZfM_29(Zq0A4_172, (STRING)")", 1L);
}
} else {
ZfM_29(Zq0A4_172, (STRING)"(", 1L);
ZbpA7dpZ_5(Z200->U_1.V_5.Y4.Y1);
ZfM_29(Zq0A4_172, (STRING)"yyt)->", 6L);
Zq0A4_192(W_4->Y3);
}
}
} else {
{
register Zq0A4_232 *W_5 = &W_3->Y1->U_1.V_11.Y10;

if (IN(Zq0A4_11, W_5->Y6)) {
Zq0A4_192(W_3->Y0->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)"yy", 2L);
Zq0A4_192(W_5->Y3);
} else if (IN(Zq0A4_14, W_5->Y6)) {
if (IN(Zq0A4_15, W_5->Y6)) {
Z202 = Z222(W_3->Y0->U_1.V_10.Y9.Y8, W_5->Y3);
ZfM_29(Zq0A4_172, (STRING)"y", 1L);
Zq0A4_192(Z202->U_1.V_5.Y4.Y1);
ZfM_29(Zq0A4_172, (STRING)"y", 1L);
Zq0A4_192(W_5->Y3);
ZfM_29(Zq0A4_172, (STRING)" ((", 3L);
ZbpA7dpZ_5(Z200->U_1.V_5.Y4.Y1);
ZfM_29(Zq0A4_172, (STRING)"yyt)->", 6L);
Zq0A4_192(W_3->Y0->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)")", 1L);
} else {
Zq0A4_192(W_3->Y0->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)"yy", 2L);
Zq0A4_192(W_5->Y3);
}
} else {
ZfM_29(Zq0A4_172, (STRING)"(", 1L);
ZbpA7dpZ_5(Z200->U_1.V_5.Y4.Y1);
ZfM_29(Zq0A4_172, (STRING)"yyt)->", 6L);
Zq0A4_192(W_3->Y0->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)"->", 2L);
Zq0A4_192(W_5->Y3);
}
}
}
}
}

static Zq0A4_153 Z222
# ifdef HAVE_ARGS
(Zq0A4_153 Z200, Zfb3DLQ_0 Z216)
# else
(Z200, Z216)
Zq0A4_153 Z200;
Zfb3DLQ_0 Z216;
# endif
{
while (Z200->U_1.V_1.Y0 != Zq0A4_99) {
if (Zq0A4_183(Z200->U_1.V_5.Y4.Y3, Z216) != Zq0A4_97) {
return Z200;
}
Z200 = Z200->U_1.V_5.Y4.Y6;
}
return Zq0A4_97;
}

static BOOLEAN Z227
# ifdef HAVE_ARGS
(BITSET Z228)
# else
(Z228)
BITSET Z228;
# endif
{
SHORTCARD Z194, Z229;

{
SHORTCARD B_5 = Z190, B_6 = Z191;

if (B_5 <= B_6)
for (Z194 = B_5;; Z194 += 1) {
Z229 = Z200->U_1.V_5.Y4.Y15->A[Z194 - 1].Y4;
{
register Zq0A4_199 *W_6 = &Z200->U_1.V_5.Y4.Y15->A[Z229 - 1];

if (SET_IS_SUBSET1(SET_ELEM (Zq0A4_7) | SET_ELEM (Zq0A4_21) | SET_ELEM (Zq0A4_26), W_6->Y3) && Z203 == W_6->Y0 && W_6->Y1->U_1.V_10.Y9.Y11 <= W_6->Y0->U_1.V_10.Y9.Y8->U_1.V_5.Y4.Y22 && IN(W_6->Y1->U_1.V_10.Y9.Y11, Z228)) {
return TRUE;
}
if (SET_IS_SUBSET1(SET_ELEM (Zq0A4_6) | SET_ELEM (Zq0A4_21), W_6->Y3) && Z229 == Z195) {
return TRUE;
}
}
if (Z194 >= B_6) break;
}
}
return FALSE;
}

static void Z232
# ifdef HAVE_ARGS
(CHAR Z233[], LONGCARD O_1)
# else
(Z233, O_1)
CHAR Z233[];
LONGCARD O_1;
# endif
{
OPEN_ARRAY_LOCALS

ALLOC_OPEN_ARRAYS (O_1 * sizeof (CHAR), 1)
COPY_OPEN_ARRAY (Z233, O_1, CHAR)
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)"Error: module EvalCxx2, routine ", 32L);
ZfM_29((ZDz6VQCC_4)ZfM_2, Z233, O_1);
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)" failed", 7L);
ZfM_33((ZDz6VQCC_4)ZfM_2);
(*ZbpA7dpZf_2)();
FREE_OPEN_ARRAYS
}

static BOOLEAN Z236
# ifdef HAVE_ARGS
(BYTE Z237[], LONGCARD O_3, BYTE Z238[], LONGCARD O_2)
# else
(Z237, O_3, Z238, O_2)
BYTE Z237[];
LONGCARD O_3;
BYTE Z238[];
LONGCARD O_2;
# endif
{
INTEGER Z239;
OPEN_ARRAY_LOCALS

ALLOC_OPEN_ARRAYS (O_2 * sizeof (WORD) + O_3 * sizeof (WORD), 2)
COPY_OPEN_ARRAY (Z238, O_2, WORD)
COPY_OPEN_ARRAY (Z237, O_3, WORD)
{
LONGINT B_7 = 0, B_8 = (INTEGER)(O_3 - 1);

if (B_7 <= B_8)
for (Z239 = B_7;; Z239 += 1) {
if (Z237[Z239] != Z238[Z239]) {
FREE_OPEN_ARRAYS
return FALSE;
}
if (Z239 >= B_8) break;
}
}
FREE_OPEN_ARRAYS
return TRUE;
}

void ZbpA7dpZf_3
# ifdef HAVE_ARGS
(Zq0A4_153 Z241)
# else
(Z241)
Zq0A4_153 Z241;
# endif
{
struct S_27 Z242;

if (Z241 == Zq0A4_97) {
return;
}
if (Z241 != NIL && Z241->U_1.V_1.Y0 == Zq0A4_127) {
{
register Zq0A4_253 *W_7 = &Z241->U_1.V_32.Y31;

ZbpA7dpZ_7(Z241);
ZfM_33(Zq0A4_172);
Zq0A4_184(W_7->Y13, (Zq0A4_170)Z245);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"void ", 5L);
Zq0A4_192(W_7->Y7);
ZfM_29(Zq0A4_172, (STRING)" (", 2L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)" yyt)", 5L);
ZfM_33(Zq0A4_172);
Z198 = W_7->Y13;
Z200 = W_7->Y13;
ZfM_29(Zq0A4_172, (STRING)"{", 1L);
ZfM_33(Zq0A4_172);
Zq0A4_185(Z200, (Zq0A4_170)Z247);
if (ZpmCQ_25(ORD('9'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)" char yyHigh;", 13L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" yyMinLow = & yyHigh;", 21L);
ZfM_33(Zq0A4_172);
}
if (ZpmCQ_25(ORD('X'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)" if (yyf == NULL) yyf = stdout;", 31L);
ZfM_33(Zq0A4_172);
}
if (Zq0A4_70 > 0) {
Z200 = W_7->Y13;
Z192 = 1;
ZfM_29(Zq0A4_172, (STRING)" yyVisit1", 9L);
Zq0A4_192(Z248(W_7->Y13));
ZfM_29(Zq0A4_172, (STRING)" (yyt", 5L);
Zq0A4_185(Z200, (Zq0A4_170)Z249);
ZfM_29(Zq0A4_172, (STRING)");", 2L);
ZfM_33(Zq0A4_172);
}
if (ZpmCQ_25(ORD('9'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)" printf (\"Stacksize %ld\\n\", (long) (& yyHigh - yyMinLow));", 58L);
ZfM_33(Zq0A4_172);
}
ZfM_29(Zq0A4_172, (STRING)"}", 1L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
Zq0A4_184(W_7->Y13, (Zq0A4_170)Z250);
Zq0A4_184(W_7->Y13, (Zq0A4_170)ZbpA7dpZf_3);
ZbpA7dpZ_8(Z241);
return;
}
}
if (Z241 != NIL && Z241->U_1.V_1.Y0 == Zq0A4_100) {
for (;;) {
{
register Zq0A4_226 *W_8 = &Z241->U_1.V_5.Y4;

if (!((Zq0A4_177 & W_8->Y2) == 0X0L)) {
goto EXIT_3;
}
if (!IN(Zq0A4_36, W_8->Y2)) {
goto EXIT_3;
}
W_8->Y24 = 0;
Zq0A4_184(W_8->Y4, (Zq0A4_170)Z253);
{
SHORTCARD B_9 = 1, B_10 = W_8->Y22;

if (B_9 <= B_10)
for (Z192 = B_9;; Z192 += 1) {
Z198 = Z241;
Z200 = Z241;
Z201 = Z241;
ZfM_29(Zq0A4_172, (STRING)"static void yyVisit", 19L);
Zq0A4_195((LONGINT)Z192);
Zq0A4_192(W_8->Y1);
ZfM_29(Zq0A4_172, (STRING)" (register ", 11L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)" yyt", 4L);
Zq0A4_185(Z241, (Zq0A4_170)Z254);
ZfM_29(Zq0A4_172, (STRING)")", 1L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"{", 1L);
ZfM_33(Zq0A4_172);
Zq0A4dpZf_3(Zq0A4_279->U_1.V_32.Y31.Y8->U_1.V_17.Y16.Y10);
ZqnGVQ_5(Zq0A4_172, Zq0A4_279->U_1.V_32.Y31.Y8->U_1.V_17.Y16.Y4);
Z198 = Zq0A4_279->U_1.V_32.Y31.Y14;
while (Z198->U_1.V_1.Y0 == Zq0A4_144) {
Zq0A4dpZf_3(Z198->U_1.V_49.Y48.Y8->U_1.V_17.Y16.Y10);
ZqnGVQ_5(Zq0A4_172, Z198->U_1.V_49.Y48.Y8->U_1.V_17.Y16.Y4);
Z198 = Z198->U_1.V_49.Y48.Y12;
}
if (ZpmCQ_25(ORD('9'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)" char yyLow;", 12L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" if (& yyLow < yyMinLow) yyMinLow = & yyLow;", 44L);
ZfM_33(Zq0A4_172);
}
if (IN(Zq0A4_56, Zq0A4_69) && Z262(Z241)) {
ZfM_29(Zq0A4_172, (STRING)"yyRecursion:", 12L);
ZfM_33(Zq0A4_172);
}
ZfM_29(Zq0A4_172, (STRING)" switch (yyt->Kind) {", 21L);
ZfM_33(Zq0A4_172);
if (IN(Zq0A4_56, Zq0A4_69)) {
Z198 = Z241;
Z263(Z241);
Zq0A4_184(W_8->Y4, (Zq0A4_170)Z263);
}
ZfM_29(Zq0A4_172, (STRING)" default: ;", 11L);
ZfM_33(Zq0A4_172);
if (ZpmCQ_25(ORD('Z'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)"  yyVisitParent (yyt);", 22L);
ZfM_33(Zq0A4_172);
}
ZfM_29(Zq0A4_172, (STRING)" }", 2L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"}", 1L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
if (Z192 >= B_10) break;
}
}
return;
}
} EXIT_3:;
}
}

static void Z245
# ifdef HAVE_ARGS
(Zq0A4_153 Z241)
# else
(Z241)
Zq0A4_153 Z241;
# endif
{
struct S_26 Z242;

if (Z241 == Zq0A4_97) {
return;
}
if (Z241 != NIL && Z241->U_1.V_1.Y0 == Zq0A4_100) {
for (;;) {
{
register Zq0A4_226 *W_9 = &Z241->U_1.V_5.Y4;

if (!((Zq0A4_177 & W_9->Y2) == 0X0L)) {
goto EXIT_4;
}
if (!IN(Zq0A4_36, W_9->Y2)) {
goto EXIT_4;
}
{
SHORTCARD B_11 = 1, B_12 = W_9->Y22;

if (B_11 <= B_12)
for (Z192 = B_11;; Z192 += 1) {
ZfM_29(Zq0A4_172, (STRING)"static void yyVisit", 19L);
Zq0A4_195((LONGINT)Z192);
Zq0A4_192(W_9->Y1);
ZfM_29(Zq0A4_172, (STRING)" (register ", 11L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)" yyt", 4L);
Z198 = Z241;
Z200 = Z241;
Zq0A4_185(Z241, (Zq0A4_170)Z245);
ZfM_29(Zq0A4_172, (STRING)");", 2L);
ZfM_33(Zq0A4_172);
if (Z192 >= B_12) break;
}
}
return;
}
} EXIT_4:;
}
if (Z241 != NIL && Z241->U_1.V_1.Y0 == Zq0A4_106) {
for (;;) {
{
register Zq0A4_232 *W_10 = &Z241->U_1.V_11.Y10;

if (!(IN(Zq0A4_11, W_10->Y6) && IN(Z192, W_10->Y12))) {
goto EXIT_5;
}
ZfM_29(Zq0A4_172, (STRING)", ", 2L);
Zq0A4_192(W_10->Y4);
ZfM_29(Zq0A4_172, (STRING)" ", 1L);
Z219((LONGCARD)W_10->Y10, FALSE);
return;
}
} EXIT_5:;
}
}

static void Z263
# ifdef HAVE_ARGS
(Zq0A4_153 Z241)
# else
(Z241)
Zq0A4_153 Z241;
# endif
{
struct S_24 Z242;

for (;;) {
for (;;) {
if (Z241 == Zq0A4_97) {
return;
}
if (Z241 != NIL) {
switch (Z241->U_1.V_1.Y0) {
case Zq0A4_100:;
{
register struct S_25 *W_11 = &Z242.U_1.V_1.Y0;

for (;;) {
{
register Zq0A4_226 *W_12 = &Z241->U_1.V_5.Y4;

if (!((Zq0A4_177 & W_12->Y2) == 0X0L)) {
goto EXIT_8;
}
if (!(W_12->Y24 != W_12->Y14)) {
goto EXIT_8;
}
W_11->Y0 = FALSE;
Z190 = W_12->Y24 + 1;
for (;;) {
if (W_12->Y24 == W_12->Y14) {
goto EXIT_9;
}
INC(W_12->Y24);
{
register Zq0A4_199 *W_13 = &W_12->Y15->A[W_12->Y15->A[W_12->Y24 - 1].Y4 - 1];

if (IN(Zq0A4_20, W_13->Y3) && W_13->Y1->U_1.V_10.Y9.Y11 > Z192) {
DEC(W_12->Y24);
goto EXIT_9;
}
}
} EXIT_9:;
Z191 = W_12->Y24;
Z200 = Z241;
if (Z267(Z200, (LONGINT)Z190, (LONGINT)Z191)) {
return;
}
ZfM_29(Zq0A4_172, (STRING)"case k", 6L);
Zq0A4_192(W_12->Y1);
ZfM_29(Zq0A4_172, (STRING)": {", 3L);
ZfM_33(Zq0A4_172);
Zq0A4_185(Z241, (Zq0A4_170)Z268);
{
SHORTCARD B_13 = Z190, B_14 = Z191;

if (B_13 <= B_14)
for (Z190 = B_13;; Z190 += 1) {
Z194 = W_12->Y15->A[Z190 - 1].Y4;
{
register Zq0A4_199 *W_14 = &W_12->Y15->A[Z194 - 1];

if (SET_IS_SUBSET1(SET_ELEM (Zq0A4_6) | SET_ELEM (Zq0A4_21) | SET_ELEM (Zq0A4_26), W_14->Y3) && ((SET_ELEM (Zq0A4_27) | SET_ELEM (Zq0A4_1) | SET_ELEM (Zq0A4_14)) & W_14->Y3) == 0X0L) {
Z269(Z241);
if (ZpmCQ_25(ORD('X'), &Zq0A4_171) && IN(Zq0A4_42, Z241->U_1.V_5.Y4.Y2)) {
ZfM_29(Zq0A4_172, (STRING)"yyWriteEval (yyt, \"", 19L);
Zq0A4_192(W_14->Y0->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)":", 1L);
Zq0A4_192(W_14->Y1->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)"\");", 3L);
ZfM_33(Zq0A4_172);
if (W_14->Y2 != (Zq0A4_153)ADR (W_14->Y2)) {
Z263(W_14->Y2);
}
ZfM_33(Zq0A4_172);
if (W_14->Y1->U_1.V_1.Y0 == Zq0A4_105 || W_14->Y1->U_1.V_11.Y10.Y4 == Zq0A4_86) {
ZfM_29(Zq0A4_172, (STRING)"write", 5L);
Zq0A4_192(Zq0A4_86);
} else {
ZfM_29(Zq0A4_172, (STRING)"write", 5L);
Zq0A4_192(W_14->Y1->U_1.V_10.Y9.Y4);
}
ZfM_29(Zq0A4_172, (STRING)" (", 2L);
Z219((LONGCARD)Z194, TRUE);
ZfM_29(Zq0A4_172, (STRING)") xxWriteNl ();", 15L);
ZfM_33(Zq0A4_172);
} else if (ZpmCQ_25(ORD('Y'), &Zq0A4_171) && IN(Zq0A4_42, Z241->U_1.V_5.Y4.Y2)) {
ZfM_29(Zq0A4_172, (STRING)"yyWriteEval (yyt, \"", 19L);
Zq0A4_192(W_14->Y0->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)":", 1L);
Zq0A4_192(W_14->Y1->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)"\");", 3L);
ZfM_33(Zq0A4_172);
if (W_14->Y2 != (Zq0A4_153)ADR (W_14->Y2)) {
Z263(W_14->Y2);
}
} else {
if (W_14->Y2 != (Zq0A4_153)ADR (W_14->Y2)) {
Z263(W_14->Y2);
}
}
}
if (SET_IS_SUBSET1(SET_ELEM (Zq0A4_7) | SET_ELEM (Zq0A4_20) | SET_ELEM (Zq0A4_26), W_14->Y3) && ((SET_ELEM (Zq0A4_27) | SET_ELEM (Zq0A4_1) | SET_ELEM (Zq0A4_14)) & W_14->Y3) == 0X0L) {
Z269(Z241);
if (ZpmCQ_25(ORD('X'), &Zq0A4_171) && IN(Zq0A4_42, Z241->U_1.V_5.Y4.Y2)) {
ZfM_29(Zq0A4_172, (STRING)"yyWriteEval (yyt, \"", 19L);
Zq0A4_192(W_14->Y1->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)"\");", 3L);
ZfM_33(Zq0A4_172);
if (W_14->Y2 != (Zq0A4_153)ADR (W_14->Y2)) {
Z263(W_14->Y2);
}
ZfM_33(Zq0A4_172);
if (IN(Zq0A4_19, W_14->Y3)) {
ZfM_29(Zq0A4_172, (STRING)"writebool (yyb) xxWriteNl ();", 29L);
ZfM_33(Zq0A4_172);
} else if (W_14->Y1->U_1.V_1.Y0 == Zq0A4_105 || W_14->Y1->U_1.V_11.Y10.Y4 == Zq0A4_86) {
ZfM_29(Zq0A4_172, (STRING)"write", 5L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)" (", 2L);
Z219((LONGCARD)Z194, TRUE);
ZfM_29(Zq0A4_172, (STRING)") xxWriteNl ();", 15L);
ZfM_33(Zq0A4_172);
} else {
ZfM_29(Zq0A4_172, (STRING)"write", 5L);
Zq0A4_192(W_14->Y1->U_1.V_10.Y9.Y4);
ZfM_29(Zq0A4_172, (STRING)" (", 2L);
Z219((LONGCARD)Z194, TRUE);
ZfM_29(Zq0A4_172, (STRING)") xxWriteNl ();", 15L);
ZfM_33(Zq0A4_172);
}
} else if (ZpmCQ_25(ORD('Y'), &Zq0A4_171) && IN(Zq0A4_42, Z241->U_1.V_5.Y4.Y2)) {
ZfM_29(Zq0A4_172, (STRING)"yyWriteEval (yyt, \"", 19L);
Zq0A4_192(W_14->Y1->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)"\");", 3L);
ZfM_33(Zq0A4_172);
if (W_14->Y2 != (Zq0A4_153)ADR (W_14->Y2)) {
Z263(W_14->Y2);
}
} else {
if (W_14->Y2 != (Zq0A4_153)ADR (W_14->Y2)) {
Z263(W_14->Y2);
}
}
}
if (SET_IS_SUBSET1(SET_ELEM (Zq0A4_7) | SET_ELEM (Zq0A4_21) | SET_ELEM (Zq0A4_26), W_14->Y3) && W_14->Y1->U_1.V_10.Y9.Y11 <= W_14->Y0->U_1.V_10.Y9.Y8->U_1.V_5.Y4.Y22) {
if (ZpmCQ_25(ORD('Z'), &Zq0A4_171) && IN(Zq0A4_42, Z241->U_1.V_5.Y4.Y2)) {
ZfM_29(Zq0A4_172, (STRING)"yyWriteVisit (yyt, \"", 20L);
Zq0A4_192(W_14->Y0->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)" ", 1L);
Zq0A4_195((LONGINT)W_14->Y1->U_1.V_10.Y9.Y11);
ZfM_29(Zq0A4_172, (STRING)"\");", 3L);
ZfM_33(Zq0A4_172);
}
Z193 = W_14->Y1->U_1.V_10.Y9.Y11;
Z203 = W_14->Y0;
if (Z192 == Z193 && Z201->U_1.V_5.Y4.Y1 == Z203->U_1.V_10.Y9.Y4 && Z267(Z200, (LONGINT)(Z190 + 1), (LONGINT)Z191) && Z271(Z203->U_1.V_10.Y9.Y8)) {
ZfM_29(Zq0A4_172, (STRING)"yyt = (", 7L);
ZbpA7dpZ_5(W_12->Y1);
ZfM_29(Zq0A4_172, (STRING)"yyt)->", 6L);
Zq0A4_192(Z203->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
Zq0A4_185(Z203->U_1.V_10.Y9.Y8, (Zq0A4_170)Z272);
ZfM_29(Zq0A4_172, (STRING)"goto yyRecursion;", 17L);
ZfM_33(Zq0A4_172);
W_11->Y0 = TRUE;
Z190 = Z191 + 1;
} else {
ZfM_29(Zq0A4_172, (STRING)"yyVisit", 7L);
Zq0A4_195((LONGINT)Z193);
Zq0A4_192(Z203->U_1.V_10.Y9.Y4);
ZfM_29(Zq0A4_172, (STRING)" ((", 3L);
ZbpA7dpZ_5(W_12->Y1);
ZfM_29(Zq0A4_172, (STRING)"yyt)->", 6L);
Zq0A4_192(Z203->U_1.V_10.Y9.Y3);
Zq0A4_185(Z203->U_1.V_10.Y9.Y8, (Zq0A4_170)Z273);
ZfM_29(Zq0A4_172, (STRING)");", 2L);
ZfM_33(Zq0A4_172);
}
}
}
if (Z190 >= B_14) break;
}
}
if (!W_11->Y0) {
if (ZpmCQ_25(ORD('Z'), &Zq0A4_171) && IN(Zq0A4_42, Z241->U_1.V_5.Y4.Y2)) {
ZfM_29(Zq0A4_172, (STRING)"yyVisitParent (yyt);", 20L);
ZfM_33(Zq0A4_172);
}
ZfM_29(Zq0A4_172, (STRING)"} break;", 8L);
ZfM_33(Zq0A4_172);
} else {
ZfM_29(Zq0A4_172, (STRING)"}", 1L);
ZfM_33(Zq0A4_172);
}
return;
}
} EXIT_8:;
}
break;
case Zq0A4_137:;
{
register Zq0A4_263 *W_15 = &Z241->U_1.V_42.Y41;

Zq0A4dpZf_3(W_15->Y2);
Z263(W_15->Y4);
ZfM_29(Zq0A4_172, (STRING)"=", 1L);
Z263(W_15->Y5);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
return;
}
break;
case Zq0A4_138:;
{
register Zq0A4_264 *W_16 = &Z241->U_1.V_43.Y42;

Z195 = Z200->U_1.V_5.Y4.Y15->A[Z194 - 1].Y5;
if (IN(Zq0A4_11, Z200->U_1.V_5.Y4.Y15->A[Z194 - 1].Y1->U_1.V_11.Y10.Y6) && IN(Zq0A4_11, Z200->U_1.V_5.Y4.Y15->A[Z195 - 1].Y1->U_1.V_11.Y10.Y6)) {
if (IN(Zq0A4_20, Z200->U_1.V_5.Y4.Y15->A[Z194 - 1].Y3) && IN(Zq0A4_20, Z200->U_1.V_5.Y4.Y15->A[Z195 - 1].Y3)) {
Zq0A4dpZf_3(W_16->Y2);
Z219((LONGCARD)Z194, FALSE);
ZfM_29(Zq0A4_172, (STRING)" =", 2L);
Z263(W_16->Y5);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
}
} else {
Zq0A4dpZf_3(W_16->Y2);
Z263(W_16->Y4);
ZfM_29(Zq0A4_172, (STRING)"=", 1L);
Z263(W_16->Y5);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
}
return;
}
break;
case Zq0A4_139:;
{
register Zq0A4_265 *W_17 = &Z241->U_1.V_44.Y43;

Zq0A4dpZf_3(W_17->Y2);
Z263(W_17->Y5);
ZfM_33(Zq0A4_172);
return;
}
break;
case Zq0A4_141:;
{
register Zq0A4_267 *W_18 = &Z241->U_1.V_46.Y45;

Zq0A4dpZf_3(W_18->Y2);
if (W_18->Y4 != Zq0A4_97) {
ZfM_29(Zq0A4_172, (STRING)"if (! (", 7L);
if (ZpmCQ_25(ORD('X'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)"yyb = ", 6L);
}
Z263(W_18->Y4);
ZfM_29(Zq0A4_172, (STRING)")) {", 4L);
Z263(W_18->Y5);
ZfM_29(Zq0A4_172, (STRING)"; }", 3L);
ZfM_33(Zq0A4_172);
if (W_18->Y6->U_1.V_1.Y0 == Zq0A4_141) {
ZfM_29(Zq0A4_172, (STRING)"else", 4L);
ZfM_33(Zq0A4_172);
Z263(W_18->Y6);
}
} else {
if (ZpmCQ_25(ORD('X'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)"yyb = false; ", 13L);
}
Z263(W_18->Y5);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
Z263(W_18->Y6);
}
return;
}
break;
case Zq0A4_116:;
{
register Zq0A4_242 *W_19 = &Z241->U_1.V_21.Y20;

Z204 = Zq0A4_183(Z200, W_19->Y2);
if (Z204 != Zq0A4_97) {
Z205 = Z204->U_1.V_10.Y9.Y8;
Z199 = Zq0A4_183(Z205, W_19->Y3);
if (Z199 != Zq0A4_97) {
Z219((LONGCARD)(Z200->U_1.V_5.Y4.Y13 + Z204->U_1.V_10.Y9.Y13 + Z199->U_1.V_11.Y10.Y10), TRUE);
} else {
Zq0A4_192(W_19->Y2);
ZfM_29(Zq0A4_172, (STRING)":", 1L);
Zq0A4_192(W_19->Y3);
}
} else {
Zq0A4_192(W_19->Y2);
ZfM_29(Zq0A4_172, (STRING)":", 1L);
Zq0A4_192(W_19->Y3);
}
Z241 = W_19->Y1;
goto EXIT_7;
}
break;
case Zq0A4_117:;
{
register Zq0A4_243 *W_20 = &Z241->U_1.V_22.Y21;

Z199 = Zq0A4_183(Z200, W_20->Y2);
if (Z199 != Zq0A4_97) {
Z219((LONGCARD)Z199->U_1.V_11.Y10.Y10, TRUE);
} else {
Zq0A4_192(W_20->Y2);
}
Z241 = W_20->Y1;
goto EXIT_7;
}
break;
case Zq0A4_119:;
{
register Zq0A4_245 *W_21 = &Z241->U_1.V_24.Y23;

Zp1PEAFi_6(Zq0A4_172, W_21->Y2);
Z241 = W_21->Y1;
goto EXIT_7;
}
break;
case Zq0A4_120:;
{
register Zq0A4_246 *W_22 = &Z241->U_1.V_25.Y24;

Z263(W_22->Y2);
Z241 = W_22->Y1;
goto EXIT_7;
}
break;
case Zq0A4_123:;
{
register Zq0A4_249 *W_23 = &Z241->U_1.V_28.Y27;

Zp1PEAFi_6(Zq0A4_172, W_23->Y1);
Z241 = W_23->Y2;
goto EXIT_7;
}
break;
default:
break;
}
}
return;
} EXIT_7:;
} EXIT_6:;
}

static void Z253
# ifdef HAVE_ARGS
(Zq0A4_153 Z241)
# else
(Z241)
Zq0A4_153 Z241;
# endif
{
struct S_23 Z242;

if (Z241 == Zq0A4_97) {
return;
}
if (Z241 != NIL && Z241->U_1.V_1.Y0 == Zq0A4_100) {
{
register Zq0A4_226 *W_24 = &Z241->U_1.V_5.Y4;

W_24->Y24 = 0;
return;
}
}
}

static void Z291
# ifdef HAVE_ARGS
(Zq0A4_153 Z241)
# else
(Z241)
Zq0A4_153 Z241;
# endif
{
struct S_22 Z242;

if (Z241 == Zq0A4_97) {
return;
}
if (Z241 != NIL && Z241->U_1.V_1.Y0 == Zq0A4_106) {
for (;;) {
{
register Zq0A4_232 *W_25 = &Z241->U_1.V_11.Y10;

if (!(IN(Zq0A4_11, W_25->Y6) && IN(Z192, W_25->Y12))) {
goto EXIT_10;
}
ZfM_29(Zq0A4_172, (STRING)", yy", 4L);
Zq0A4_192(W_25->Y3);
return;
}
} EXIT_10:;
}
}

static void Z292
# ifdef HAVE_ARGS
(Zq0A4_153 Z241)
# else
(Z241)
Zq0A4_153 Z241;
# endif
{
struct S_21 Z242;

if (Z241 == Zq0A4_97) {
return;
}
if (Z241 != NIL && Z241->U_1.V_1.Y0 == Zq0A4_106) {
for (;;) {
{
register Zq0A4_232 *W_26 = &Z241->U_1.V_11.Y10;

if (!(IN(Zq0A4_11, W_26->Y6) && IN(Z192, W_26->Y12))) {
goto EXIT_11;
}
ZfM_29(Zq0A4_172, (STRING)" ", 1L);
Zq0A4_192(W_26->Y4);
ZfM_29(Zq0A4_172, (STRING)" ", 1L);
Z219((LONGCARD)W_26->Y10, FALSE);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
return;
}
} EXIT_11:;
}
}

static void Z254
# ifdef HAVE_ARGS
(Zq0A4_153 Z241)
# else
(Z241)
Zq0A4_153 Z241;
# endif
{
struct S_20 Z242;

if (Z241 == Zq0A4_97) {
return;
}
if (Z241 != NIL && Z241->U_1.V_1.Y0 == Zq0A4_106) {
for (;;) {
{
register Zq0A4_232 *W_27 = &Z241->U_1.V_11.Y10;

if (!(IN(Zq0A4_11, W_27->Y6) && IN(Z192, W_27->Y12))) {
goto EXIT_12;
}
ZfM_29(Zq0A4_172, (STRING)", ", 2L);
Zq0A4_192(W_27->Y4);
ZfM_29(Zq0A4_172, (STRING)" ", 1L);
Z219((LONGCARD)W_27->Y10, FALSE);
return;
}
} EXIT_12:;
}
}

static void Z273
# ifdef HAVE_ARGS
(Zq0A4_153 Z241)
# else
(Z241)
Zq0A4_153 Z241;
# endif
{
struct S_19 Z242;

if (Z241 == Zq0A4_97) {
return;
}
if (Z241 != NIL && Z241->U_1.V_1.Y0 == Zq0A4_106) {
for (;;) {
{
register Zq0A4_232 *W_28 = &Z241->U_1.V_11.Y10;

if (!(IN(Zq0A4_11, W_28->Y6) && IN(Z193, W_28->Y12))) {
goto EXIT_13;
}
if (IN(Zq0A4_6, W_28->Y6)) {
ZfM_29(Zq0A4_172, (STRING)", ", 2L);
} else {
ZfM_29(Zq0A4_172, (STRING)", & ", 4L);
}
Z219((LONGCARD)(Z200->U_1.V_5.Y4.Y13 + Z203->U_1.V_10.Y9.Y13 + W_28->Y10), TRUE);
return;
}
} EXIT_13:;
}
}

static void Z249
# ifdef HAVE_ARGS
(Zq0A4_153 Z241)
# else
(Z241)
Zq0A4_153 Z241;
# endif
{
struct S_18 Z242;

if (Z241 == Zq0A4_97) {
return;
}
if (Z241 != NIL && Z241->U_1.V_1.Y0 == Zq0A4_106) {
for (;;) {
{
register Zq0A4_232 *W_29 = &Z241->U_1.V_11.Y10;

if (!(IN(Zq0A4_11, W_29->Y6) && IN(Z192, W_29->Y12))) {
goto EXIT_14;
}
if (IN(Zq0A4_6, W_29->Y6)) {
ZblNKKO_45((STRING)"inherited attribute at root node", 32L, (LONGCARD)ZblNKKO_16, W_29->Y9, (LONGCARD)ZblNKKO_34, ADR (W_29->Y3));
INC(Zq0A4_0);
ZfM_29(Zq0A4_172, (STRING)",", 1L);
} else {
ZfM_29(Zq0A4_172, (STRING)", &", 3L);
}
ZfM_29(Zq0A4_172, (STRING)" yy", 3L);
Zq0A4_192(W_29->Y3);
return;
}
} EXIT_14:;
}
}

static void Z268
# ifdef HAVE_ARGS
(Zq0A4_153 Z241)
# else
(Z241)
Zq0A4_153 Z241;
# endif
{
struct S_17 Z242;

if (Z241 == Zq0A4_97) {
return;
}
if (Z241 != NIL && Z241->U_1.V_1.Y0 == Zq0A4_105) {
{
register Zq0A4_231 *W_30 = &Z241->U_1.V_10.Y9;

Z203 = Z241;
Zq0A4_185(W_30->Y8, (Zq0A4_170)Z295);
return;
}
}
if (Z241 != NIL && Z241->U_1.V_1.Y0 == Zq0A4_106) {
for (;;) {
{
register Zq0A4_232 *W_31 = &Z241->U_1.V_11.Y10;

if (!(IN(Zq0A4_11, W_31->Y6) && Zq0A4_183(Z198, W_31->Y3) == Zq0A4_97 && IN(Z192, W_31->Y12) || IN(Zq0A4_14, W_31->Y6) && !IN(Zq0A4_15, W_31->Y6) && W_31->Y10 != Z196)) {
goto EXIT_15;
}
Zq0A4_192(W_31->Y4);
ZfM_29(Zq0A4_172, (STRING)" yy", 3L);
Zq0A4_192(W_31->Y3);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
return;
}
} EXIT_15:;
}
}

static void Z295
# ifdef HAVE_ARGS
(Zq0A4_153 Z241)
# else
(Z241)
Zq0A4_153 Z241;
# endif
{
struct S_16 Z242;

if (Z241 == Zq0A4_97) {
return;
}
if (Z241 != NIL && Z241->U_1.V_1.Y0 == Zq0A4_106) {
for (;;) {
{
register Zq0A4_232 *W_32 = &Z241->U_1.V_11.Y10;

if (!(IN(Zq0A4_11, W_32->Y6) || IN(Zq0A4_14, W_32->Y6) && !IN(Zq0A4_15, W_32->Y6))) {
goto EXIT_16;
}
Z195 = Z200->U_1.V_5.Y4.Y13 + Z203->U_1.V_10.Y9.Y13 + W_32->Y10;
if (!(IN(Zq0A4_14, W_32->Y6) || ((SET_ELEM (Zq0A4_22) | SET_ELEM (Zq0A4_23)) & Z200->U_1.V_5.Y4.Y15->A[Z195 - 1].Y3) == 0X0L || Z195 == Z208((LONGCARD)Z195))) {
goto EXIT_16;
}
if (!Z227(W_32->Y12)) {
goto EXIT_16;
}
Zq0A4_192(W_32->Y4);
ZfM_29(Zq0A4_172, (STRING)" ", 1L);
Zq0A4_192(Z203->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)"yy", 2L);
Zq0A4_192(W_32->Y3);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
return;
}
} EXIT_16:;
}
}

static void Z247
# ifdef HAVE_ARGS
(Zq0A4_153 Z241)
# else
(Z241)
Zq0A4_153 Z241;
# endif
{
struct S_15 Z242;

if (Z241 == Zq0A4_97) {
return;
}
if (Z241 != NIL && Z241->U_1.V_1.Y0 == Zq0A4_106) {
for (;;) {
{
register Zq0A4_232 *W_33 = &Z241->U_1.V_11.Y10;

if (!IN(Zq0A4_11, W_33->Y6)) {
goto EXIT_17;
}
ZfM_29(Zq0A4_172, (STRING)"  ", 2L);
Zq0A4_192(W_33->Y4);
ZfM_29(Zq0A4_172, (STRING)" yy", 3L);
Zq0A4_192(W_33->Y3);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
return;
}
} EXIT_17:;
}
}

static void Z250
# ifdef HAVE_ARGS
(Zq0A4_153 Z241)
# else
(Z241)
Zq0A4_153 Z241;
# endif
{
struct S_14 Z242;

if (Z241 == Zq0A4_97) {
return;
}
if (Z241 != NIL && Z241->U_1.V_1.Y0 == Zq0A4_100) {
for (;;) {
{
register Zq0A4_226 *W_34 = &Z241->U_1.V_5.Y4;

if (!((Zq0A4_177 & W_34->Y2) == 0X0L)) {
goto EXIT_18;
}
Z198 = Z241;
Zq0A4_185(W_34->Y3, (Zq0A4_170)Z250);
return;
}
} EXIT_18:;
}
if (Z241 != NIL && Z241->U_1.V_1.Y0 == Zq0A4_106) {
for (;;) {
{
register Zq0A4_232 *W_35 = &Z241->U_1.V_11.Y10;

if (!IN(Zq0A4_14, W_35->Y6)) {
goto EXIT_19;
}
Z200 = Z198;
Z196 = W_35->Y10;
if (IN(Zq0A4_15, W_35->Y6)) {
ZfM_29(Zq0A4_172, (STRING)"static ", 7L);
Zq0A4_192(W_35->Y4);
ZfM_29(Zq0A4_172, (STRING)" y", 2L);
Zq0A4_192(Z200->U_1.V_5.Y4.Y1);
ZfM_29(Zq0A4_172, (STRING)"y", 1L);
Zq0A4_192(W_35->Y3);
ZfM_29(Zq0A4_172, (STRING)" (register ", 11L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)" yyt)", 5L);
ZfM_33(Zq0A4_172);
} else {
ZfM_29(Zq0A4_172, (STRING)"static void y", 13L);
Zq0A4_192(Z200->U_1.V_5.Y4.Y1);
ZfM_29(Zq0A4_172, (STRING)"y", 1L);
Zq0A4_192(W_35->Y3);
ZfM_29(Zq0A4_172, (STRING)" (register ", 11L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)" yyt, ", 6L);
Zq0A4_192(W_35->Y4);
ZfM_29(Zq0A4_172, (STRING)" * ", 3L);
Z219((LONGCARD)W_35->Y10, FALSE);
ZfM_29(Zq0A4_172, (STRING)")", 1L);
ZfM_33(Zq0A4_172);
}
ZfM_29(Zq0A4_172, (STRING)"{", 1L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" switch (yyt->Kind) {", 21L);
ZfM_33(Zq0A4_172);
if (IN(Zq0A4_56, Zq0A4_69)) {
Z194 = W_35->Y10;
Z200 = Z198;
Z192 = W_35->Y11;
Z296(Z200);
Zq0A4_184(Z200->U_1.V_5.Y4.Y4, (Zq0A4_170)Z296);
Z200 = Z198;
}
ZfM_29(Zq0A4_172, (STRING)" default: ;", 11L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" }", 2L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"}", 1L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
Z196 = 0;
return;
}
} EXIT_19:;
}
}

static void Z296
# ifdef HAVE_ARGS
(Zq0A4_153 Z241)
# else
(Z241)
Zq0A4_153 Z241;
# endif
{
struct S_13 Z242;

if (Z241 == Zq0A4_97) {
return;
}
if (Z241 != NIL && Z241->U_1.V_1.Y0 == Zq0A4_100) {
{
register Zq0A4_226 *W_36 = &Z241->U_1.V_5.Y4;

ZfM_29(Zq0A4_172, (STRING)"case k", 6L);
Zq0A4_192(W_36->Y1);
ZfM_29(Zq0A4_172, (STRING)": {", 3L);
ZfM_33(Zq0A4_172);
{
register Zq0A4_199 *W_37 = &W_36->Y15->A[Z194 - 1];

Z200 = Z241;
Zq0A4_185(Z241, (Zq0A4_170)Z268);
Z269(Z241);
if (IN(Zq0A4_15, W_37->Y3)) {
Z296(W_37->Y2);
} else {
Z263(W_37->Y2);
ZfM_33(Zq0A4_172);
}
}
ZfM_29(Zq0A4_172, (STRING)"} break;", 8L);
ZfM_33(Zq0A4_172);
return;
}
}
if (Z241 != NIL && Z241->U_1.V_1.Y0 == Zq0A4_137) {
{
register Zq0A4_263 *W_38 = &Z241->U_1.V_42.Y41;

ZfM_29(Zq0A4_172, (STRING)"return ", 7L);
Z263(W_38->Y5);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
return;
}
}
if (Z241 != NIL && Z241->U_1.V_1.Y0 == Zq0A4_138) {
{
register Zq0A4_264 *W_39 = &Z241->U_1.V_43.Y42;

ZfM_29(Zq0A4_172, (STRING)"return ", 7L);
Z263(W_39->Y5);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
return;
}
}
if (Z241 != NIL && Z241->U_1.V_1.Y0 == Zq0A4_139) {
{
register Zq0A4_265 *W_40 = &Z241->U_1.V_44.Y43;

ZfM_29(Zq0A4_172, (STRING)"NoBlockStatementForDemandFunctionAttributes;", 44L);
ZfM_33(Zq0A4_172);
return;
}
}
}

static void Z269
# ifdef HAVE_ARGS
(Zq0A4_153 Z241)
# else
(Z241)
Zq0A4_153 Z241;
# endif
{
struct S_12 Z242;

if (Z241 == Zq0A4_97) {
return;
}
if (Z241 != NIL && Z241->U_1.V_1.Y0 == Zq0A4_100) {
{
register Zq0A4_226 *W_41 = &Z241->U_1.V_5.Y4;

{
SHORTCARD B_15 = 1, B_16 = W_41->Y14;

if (B_15 <= B_16)
for (Z195 = B_15;; Z195 += 1) {
{
register Zq0A4_199 *W_42 = &W_41->Y15->A[Z195 - 1];

if (ZolB7FGBG_9((LONGINT)Z194, (LONGINT)Z195, W_41->Y16) && IN(Zq0A4_14, W_42->Y3) && !IN(Zq0A4_15, W_42->Y3)) {
if (IN(Zq0A4_20, W_42->Y3)) {
Z202 = Z222(Z241, W_42->Y1->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)"    y", 5L);
Zq0A4_192(Z202->U_1.V_5.Y4.Y1);
ZfM_29(Zq0A4_172, (STRING)"y", 1L);
Zq0A4_192(W_42->Y1->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)" (yyt, ", 7L);
Z219((LONGCARD)Z195, FALSE);
ZfM_29(Zq0A4_172, (STRING)");", 2L);
ZfM_33(Zq0A4_172);
} else {
Z202 = Z222(W_42->Y0->U_1.V_10.Y9.Y8, W_42->Y1->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)"    y", 5L);
Zq0A4_192(Z202->U_1.V_5.Y4.Y1);
ZfM_29(Zq0A4_172, (STRING)"y", 1L);
Zq0A4_192(W_42->Y1->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)" ((", 3L);
ZbpA7dpZ_5(W_41->Y1);
ZfM_29(Zq0A4_172, (STRING)"yyt)->", 6L);
Zq0A4_192(W_42->Y0->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)", ", 2L);
Z219((LONGCARD)Z195, FALSE);
ZfM_29(Zq0A4_172, (STRING)");", 2L);
ZfM_33(Zq0A4_172);
}
}
}
if (Z195 >= B_16) break;
}
}
return;
}
}
}

static BOOLEAN Z267
# ifdef HAVE_ARGS
(Zq0A4_153 Z298, INTEGER Z190, INTEGER Z191)
# else
(Z298, Z190, Z191)
Zq0A4_153 Z298;
INTEGER Z190;
INTEGER Z191;
# endif
{
INTEGER Z194, Z195;
struct S_11 Z242;

if (Z298 == Zq0A4_97) {
return FALSE;
}
{
register Zq0A4_226 *W_43 = &Z298->U_1.V_5.Y4;

{
LONGINT B_17 = Z190, B_18 = Z191;

if (B_17 <= B_18)
for (Z195 = B_17;; Z195 += 1) {
Z194 = W_43->Y15->A[Z195 - 1].Y4;
{
register Zq0A4_199 *W_44 = &W_43->Y15->A[Z194 - 1];

if (SET_IS_SUBSET1(SET_ELEM (Zq0A4_6) | SET_ELEM (Zq0A4_21) | SET_ELEM (Zq0A4_26), W_44->Y3) && ((SET_ELEM (Zq0A4_27) | SET_ELEM (Zq0A4_1) | SET_ELEM (Zq0A4_14)) & W_44->Y3) == 0X0L) {
if (W_44->Y2 != (Zq0A4_153)ADR (W_44->Y2) && !Z299(W_44->Y2, Z194)) {
return FALSE;
}
}
if (SET_IS_SUBSET1(SET_ELEM (Zq0A4_7) | SET_ELEM (Zq0A4_20) | SET_ELEM (Zq0A4_26), W_44->Y3) && ((SET_ELEM (Zq0A4_27) | SET_ELEM (Zq0A4_1) | SET_ELEM (Zq0A4_14)) & W_44->Y3) == 0X0L) {
if (W_44->Y2 != (Zq0A4_153)ADR (W_44->Y2) && !Z299(W_44->Y2, Z194)) {
return FALSE;
}
}
if (SET_IS_SUBSET1(SET_ELEM (Zq0A4_7) | SET_ELEM (Zq0A4_21) | SET_ELEM (Zq0A4_26), W_44->Y3) && W_44->Y1->U_1.V_10.Y9.Y11 <= W_44->Y0->U_1.V_10.Y9.Y8->U_1.V_5.Y4.Y22) {
return FALSE;
}
}
if (Z195 >= B_18) break;
}
}
return TRUE;
}
}

static BOOLEAN Z299
# ifdef HAVE_ARGS
(Zq0A4_153 Z300, INTEGER Z301)
# else
(Z300, Z301)
Zq0A4_153 Z300;
INTEGER Z301;
# endif
{
struct S_10 Z242;

if (Z300 == Zq0A4_97) {
return FALSE;
}
if (Z300 != NIL && Z300->U_1.V_1.Y0 == Zq0A4_138) {
for (;;) {
{
register Zq0A4_264 *W_45 = &Z300->U_1.V_43.Y42;

Z195 = Z200->U_1.V_5.Y4.Y15->A[Z301 - 1].Y5;
if (!(IN(Zq0A4_11, Z200->U_1.V_5.Y4.Y15->A[Z301 - 1].Y1->U_1.V_11.Y10.Y6) && IN(Zq0A4_11, Z200->U_1.V_5.Y4.Y15->A[Z195 - 1].Y1->U_1.V_11.Y10.Y6) && !(IN(Zq0A4_20, Z200->U_1.V_5.Y4.Y15->A[Z301 - 1].Y3) && IN(Zq0A4_20, Z200->U_1.V_5.Y4.Y15->A[Z195 - 1].Y3)))) {
goto EXIT_20;
}
return TRUE;
}
} EXIT_20:;
}
return FALSE;
}

static void Z272
# ifdef HAVE_ARGS
(Zq0A4_153 Z241)
# else
(Z241)
Zq0A4_153 Z241;
# endif
{
struct S_8 Z242;

if (Z241 == Zq0A4_97) {
return;
}
if (Z241 != NIL && Z241->U_1.V_1.Y0 == Zq0A4_106) {
{
register struct S_9 *W_46 = &Z242.U_1.V_1.Y0;

for (;;) {
{
register Zq0A4_232 *W_47 = &Z241->U_1.V_11.Y10;

if (!(IN(Zq0A4_11, W_47->Y6) && IN(Z193, W_47->Y12))) {
goto EXIT_21;
}
W_46->Y0 = Z200->U_1.V_5.Y4.Y13 + Z203->U_1.V_10.Y9.Y13 + W_47->Y10;
{
register Zq0A4_199 *W_48 = &Z200->U_1.V_5.Y4.Y15->A[W_46->Y0 - 1];

if (((SET_ELEM (Zq0A4_22) | SET_ELEM (Zq0A4_23)) & W_48->Y3) != 0X0L) {
W_46->Y0 = Z208((LONGCARD)W_46->Y0);
}
}
if (W_47->Y10 != W_46->Y0) {
if (IN(Zq0A4_6, W_47->Y6)) {
ZfM_29(Zq0A4_172, (STRING)"yy", 2L);
Zq0A4_192(W_47->Y3);
ZfM_29(Zq0A4_172, (STRING)" = ", 3L);
Z219((LONGCARD)W_46->Y0, TRUE);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
} else {
ZfM_29(Zq0A4_172, (STRING)"yy", 2L);
Zq0A4_192(W_47->Y3);
ZfM_29(Zq0A4_172, (STRING)" = & ", 5L);
Z219((LONGCARD)W_46->Y0, TRUE);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
}
}
return;
}
} EXIT_21:;
}
}
}

static BOOLEAN Z262
# ifdef HAVE_ARGS
(Zq0A4_153 Z241)
# else
(Z241)
Zq0A4_153 Z241;
# endif
{
struct S_7 Z242;

if (Z241 == Zq0A4_97) {
return FALSE;
}
for (;;) {
{
register Zq0A4_226 *W_49 = &Z241->U_1.V_5.Y4;

if (!(Z302(Z241) || Z303(W_49->Y4))) {
goto EXIT_22;
}
return TRUE;
}
} EXIT_22:;
return FALSE;
}

static BOOLEAN Z303
# ifdef HAVE_ARGS
(Zq0A4_153 Z304)
# else
(Z304)
Zq0A4_153 Z304;
# endif
{
struct S_6 Z242;

if (Z304 == Zq0A4_97) {
return FALSE;
}
if (Z304 != NIL && Z304->U_1.V_1.Y0 == Zq0A4_100) {
for (;;) {
{
register Zq0A4_226 *W_50 = &Z304->U_1.V_5.Y4;

if (!(Z262(Z304) || Z303(W_50->Y5))) {
goto EXIT_23;
}
return TRUE;
}
} EXIT_23:;
}
return FALSE;
}

static BOOLEAN Z302
# ifdef HAVE_ARGS
(Zq0A4_153 Z241)
# else
(Z241)
Zq0A4_153 Z241;
# endif
{
struct S_5 Z242;

if (Z241 == Zq0A4_97) {
return FALSE;
}
for (;;) {
{
register Zq0A4_226 *W_51 = &Z241->U_1.V_5.Y4;

if (!((Zq0A4_177 & W_51->Y2) == 0X0L)) {
goto EXIT_24;
}
if (!(W_51->Y24 != W_51->Y14)) {
goto EXIT_24;
}
Z200 = Z241;
Z191 = W_51->Y24;
for (;;) {
if (Z191 == W_51->Y14) {
goto EXIT_25;
}
INC(Z191);
{
register Zq0A4_199 *W_52 = &W_51->Y15->A[W_51->Y15->A[Z191 - 1].Y4 - 1];

if (IN(Zq0A4_20, W_52->Y3) && W_52->Y1->U_1.V_10.Y9.Y11 > Z192) {
DEC(Z191);
goto EXIT_25;
}
}
} EXIT_25:;
{
SHORTCARD B_19 = W_51->Y24 + 1, B_20 = Z191;

if (B_19 <= B_20)
for (Z190 = B_19;; Z190 += 1) {
Z194 = W_51->Y15->A[Z190 - 1].Y4;
{
register Zq0A4_199 *W_53 = &W_51->Y15->A[Z194 - 1];

if (SET_IS_SUBSET1(SET_ELEM (Zq0A4_7) | SET_ELEM (Zq0A4_21) | SET_ELEM (Zq0A4_26), W_53->Y3) && W_53->Y1->U_1.V_10.Y9.Y11 <= W_53->Y0->U_1.V_10.Y9.Y8->U_1.V_5.Y4.Y22) {
Z193 = W_53->Y1->U_1.V_10.Y9.Y11;
Z203 = W_53->Y0;
if (Z192 == Z193 && Z201->U_1.V_5.Y4.Y1 == Z203->U_1.V_10.Y9.Y4 && Z267(Z200, (LONGINT)(Z190 + 1), (LONGINT)Z191)) {
return TRUE;
}
}
}
if (Z190 >= B_20) break;
}
}
return FALSE;
return TRUE;
}
} EXIT_24:;
return FALSE;
}

static BOOLEAN Z271
# ifdef HAVE_ARGS
(Zq0A4_153 Z241)
# else
(Z241)
Zq0A4_153 Z241;
# endif
{
struct S_4 Z242;

if (Z241 == Zq0A4_97) {
return FALSE;
}
for (;;) {
{
register Zq0A4_226 *W_54 = &Z241->U_1.V_5.Y4;

Z206 = TRUE;
Z197 = W_54->Y14;
ZpmCQ_5(&Z207, (LONGCARD)W_54->Y14);
Zq0A4_185(Z241, (Zq0A4_170)Z305);
ZpmCQ_7(&Z207);
if (!Z206) {
goto EXIT_26;
}
return TRUE;
}
} EXIT_26:;
return FALSE;
}

static void Z305
# ifdef HAVE_ARGS
(Zq0A4_153 Z241)
# else
(Z241)
Zq0A4_153 Z241;
# endif
{
struct S_2 Z242;

if (Z241 == Zq0A4_97) {
return;
}
if (Z241 != NIL && Z241->U_1.V_1.Y0 == Zq0A4_106) {
{
register struct S_3 *W_55 = &Z242.U_1.V_1.Y0;

for (;;) {
{
register Zq0A4_232 *W_56 = &Z241->U_1.V_11.Y10;

if (!(IN(Zq0A4_11, W_56->Y6) && IN(Z193, W_56->Y12))) {
goto EXIT_27;
}
W_55->Y0 = Z200->U_1.V_5.Y4.Y13 + Z203->U_1.V_10.Y9.Y13 + W_56->Y10;
{
register Zq0A4_199 *W_57 = &Z200->U_1.V_5.Y4.Y15->A[W_55->Y0 - 1];

if (((SET_ELEM (Zq0A4_22) | SET_ELEM (Zq0A4_23)) & W_57->Y3) != 0X0L) {
W_55->Y0 = Z208((LONGCARD)W_55->Y0);
}
}
if (W_56->Y10 != W_55->Y0) {
if (W_55->Y0 <= Z197 && ZpmCQ_25((LONGCARD)W_55->Y0, &Z207)) {
Z206 = FALSE;
}
ZpmCQ_13(&Z207, (LONGCARD)W_56->Y10);
}
return;
}
} EXIT_27:;
}
}
}

static Zfb3DLQ_0 Z248
# ifdef HAVE_ARGS
(Zq0A4_153 Z306)
# else
(Z306)
Zq0A4_153 Z306;
# endif
{
struct S_1 Z242;

for (;;) {
for (;;) {
if (Z306 != NIL && Z306->U_1.V_1.Y0 == Zq0A4_100) {
for (;;) {
{
register Zq0A4_226 *W_58 = &Z306->U_1.V_5.Y4;

if (!((Zq0A4_177 & W_58->Y2) == 0X0L)) {
goto EXIT_30;
}
return W_58->Y1;
}
} EXIT_30:;
Z306 = Z306->U_1.V_5.Y4.Y5;
goto EXIT_29;
}
Z232((STRING)"GetName", 7L);
} EXIT_29:;
} EXIT_28:;
}

void ZbpA7dpZf_4
 ARGS ((void))
{
Z196 = 0;
}

void ZbpA7dpZf_5
 ARGS ((void))
{
}

static void Z309
 ARGS ((void))
{
ZfM_34();
rExit(1L);
}

void BEGIN_EvalCxx2 ARGS ((void))
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
BEGIN_TreeCxx2 ();
BEGIN_EvalCxx ();
BEGIN_Tree ();
BEGIN_Errors ();

ZbpA7dpZf_0 = ZfM_1;
ZbpA7dpZf_2 = Z309;
ZbpA7dpZf_4();
}
