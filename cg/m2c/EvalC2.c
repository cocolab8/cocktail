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

#ifndef DEFINITION_TreeC2
#include "TreeC2.h"
#endif

#ifndef DEFINITION_EvalC
#include "EvalC.h"
#endif

#ifndef DEFINITION_Tree
#include "Tree.h"
#endif

#ifndef DEFINITION_Errors
#include "Errors.h"
#endif

#ifndef DEFINITION_EvalC2
#include "EvalC2.h"
#endif

ZfM_3 ZbpA7du_0;
BOOLEAN ZbpA7du_1;
PROC ZbpA7du_2;

static SHORTCARD Z191, Z192, Z193, Z194, Z195, Z196, Z197, Z198;
static Zq0A4_153 Z199, Z200, Z201, Z202, Z203, Z204, Z205, Z206;
static BOOLEAN Z207;
static ZpmCQ_4 Z208;
static CARDINAL Z209 ARGS ((CARDINAL Z195));
static void Z220 ARGS ((CARDINAL Z195, BOOLEAN Z221));
static Zq0A4_153 Z223 ARGS ((Zq0A4_153 Z201, Zfb3DLQ_0 Z217));
static BOOLEAN Z229 ARGS ((BITSET Z230));
static void Z234 ARGS ((CHAR Z235[], LONGCARD O_1));
static BOOLEAN Z238 ARGS ((BYTE Z239[], LONGCARD O_3, BYTE Z240[], LONGCARD O_2));
struct S_27 {
union {
char dummy;
} U_1;
};
static void Z247 ARGS ((Zq0A4_153 Z243));
struct S_26 {
union {
char dummy;
} U_1;
};
static void Z267 ARGS ((Zq0A4_153 Z243));
struct S_24 {
union {
struct {
struct S_25 {
BOOLEAN Y0;
} Y0;
} V_1;
} U_1;
};
static void Z255 ARGS ((Zq0A4_153 Z243));
struct S_23 {
union {
char dummy;
} U_1;
};
static void Z257 ARGS ((Zq0A4_153 Z243));
struct S_22 {
union {
char dummy;
} U_1;
};
static void Z258 ARGS ((Zq0A4_153 Z243));
struct S_21 {
union {
char dummy;
} U_1;
};
static void Z256 ARGS ((Zq0A4_153 Z243));
struct S_20 {
union {
char dummy;
} U_1;
};
static void Z276 ARGS ((Zq0A4_153 Z243));
struct S_19 {
union {
char dummy;
} U_1;
};
static void Z251 ARGS ((Zq0A4_153 Z243));
struct S_18 {
union {
char dummy;
} U_1;
};
static void Z271 ARGS ((Zq0A4_153 Z243));
struct S_17 {
union {
char dummy;
} U_1;
};
static void Z296 ARGS ((Zq0A4_153 Z243));
struct S_16 {
union {
char dummy;
} U_1;
};
static void Z249 ARGS ((Zq0A4_153 Z243));
struct S_15 {
union {
char dummy;
} U_1;
};
static void Z252 ARGS ((Zq0A4_153 Z243));
struct S_14 {
union {
char dummy;
} U_1;
};
static void Z297 ARGS ((Zq0A4_153 Z243));
struct S_13 {
union {
char dummy;
} U_1;
};
static void Z272 ARGS ((Zq0A4_153 Z243));
struct S_12 {
union {
char dummy;
} U_1;
};
static BOOLEAN Z270 ARGS ((Zq0A4_153 Z299, INTEGER Z191, INTEGER Z192));
struct S_11 {
union {
char dummy;
} U_1;
};
static BOOLEAN Z300 ARGS ((Zq0A4_153 Z301, INTEGER Z302));
struct S_10 {
union {
char dummy;
} U_1;
};
static void Z275 ARGS ((Zq0A4_153 Z243));
struct S_8 {
union {
struct {
struct S_9 {
SHORTCARD Y0;
} Y0;
} V_1;
} U_1;
};
static BOOLEAN Z266 ARGS ((Zq0A4_153 Z243));
struct S_7 {
union {
char dummy;
} U_1;
};
static BOOLEAN Z304 ARGS ((Zq0A4_153 Z305));
struct S_6 {
union {
char dummy;
} U_1;
};
static BOOLEAN Z303 ARGS ((Zq0A4_153 Z243));
struct S_5 {
union {
char dummy;
} U_1;
};
static BOOLEAN Z274 ARGS ((Zq0A4_153 Z243));
struct S_4 {
union {
char dummy;
} U_1;
};
static void Z306 ARGS ((Zq0A4_153 Z243));
struct S_2 {
union {
struct {
struct S_3 {
SHORTCARD Y0;
} Y0;
} V_1;
} U_1;
};
static Zfb3DLQ_0 Z250 ARGS ((Zq0A4_153 Z307));
struct S_1 {
union {
char dummy;
} U_1;
};
static void Z310 ARGS ((void));

static CARDINAL Z209
# ifdef HAVE_ARGS
(CARDINAL Z195)
# else
(Z195)
CARDINAL Z195;
# endif
{
ZpmCQ_4 Z210;
CARDINAL Z211;
BOOLEAN Z212;
CARDINAL Z196, Z197;

{
register Zq0A4_226 *W_1 = &Z201->U_1.V_5.Y4;

ZpmCQ_5(&Z210, (LONGCARD)W_1->Y14);
ZpmCQ_13(&Z210, Z195);
do {
Z212 = TRUE;
{
LONGCARD B_1 = 1, B_2 = W_1->Y14;

if (B_1 <= B_2)
for (Z196 = B_1;; Z196 += 1) {
if (ZpmCQ_25(Z196, &Z210)) {
if (IN(Zq0A4_22, W_1->Y15->A[Z196 - 1].Y3)) {
Z197 = W_1->Y15->A[Z196 - 1].Y5;
if (IN(Zq0A4_11, W_1->Y15->A[Z197 - 1].Y1->U_1.V_11.Y10.Y6) && !ZpmCQ_25(Z197, &Z210)) {
ZpmCQ_13(&Z210, Z197);
Z212 = FALSE;
}
}
if (IN(Zq0A4_23, W_1->Y15->A[Z196 - 1].Y3)) {
{
LONGCARD B_3 = 1, B_4 = W_1->Y14;

if (B_3 <= B_4)
for (Z197 = B_3;; Z197 += 1) {
if (IN(Zq0A4_22, W_1->Y15->A[Z197 - 1].Y3) && IN(Zq0A4_11, W_1->Y15->A[Z197 - 1].Y1->U_1.V_11.Y10.Y6) && W_1->Y15->A[Z197 - 1].Y5 == Z196 && !ZpmCQ_25(Z197, &Z210)) {
ZpmCQ_13(&Z210, Z197);
Z212 = FALSE;
}
if (Z197 >= B_4) break;
}
}
}
}
if (Z196 >= B_2) break;
}
}
} while (!Z212);
Z211 = ZpmCQ_17(&Z210);
if (Z211 <= W_1->Y13) {
Z212 = TRUE;
Z196 = Z211 + 1;
for (;;) {
if (Z196 > W_1->Y13) {
goto EXIT_1;
}
if (ZpmCQ_25(Z196, &Z210)) {
Z212 = FALSE;
goto EXIT_1;
}
INC(Z196);
} EXIT_1:;
if (!Z212) {
Z196 = 1;
for (;;) {
Z197 = W_1->Y15->A[Z196 - 1].Y4;
if (Z197 <= W_1->Y13 && ZpmCQ_25(Z197, &Z210)) {
Z211 = Z197;
goto EXIT_2;
}
INC(Z196);
} EXIT_2:;
}
}
ZpmCQ_7(&Z210);
return Z211;
}
}

static void Z220
# ifdef HAVE_ARGS
(CARDINAL Z195, BOOLEAN Z221)
# else
(Z195, Z221)
CARDINAL Z195;
BOOLEAN Z221;
# endif
{
if (Z221) {
{
register Zq0A4_199 *W_2 = &Z201->U_1.V_5.Y4.Y15->A[Z195 - 1];

if (IN(Zq0A4_11, W_2->Y1->U_1.V_11.Y10.Y6) && ((SET_ELEM (Zq0A4_22) | SET_ELEM (Zq0A4_23)) & W_2->Y3) != 0X0L) {
Z195 = Z209(Z195);
}
}
}
{
register Zq0A4_199 *W_3 = &Z201->U_1.V_5.Y4.Y15->A[Z195 - 1];

if (IN(Zq0A4_1, W_3->Y3)) {
return;
}
if (IN(Zq0A4_20, W_3->Y3)) {
{
register Zq0A4_232 *W_4 = &W_3->Y1->U_1.V_11.Y10;

if (IN(Zq0A4_11, W_4->Y6)) {
if (Zq0A4_183(Z199, W_4->Y3) == Zq0A4_97) {
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
Z203 = Z223(Z201, W_4->Y3);
ZfM_29(Zq0A4_172, (STRING)"y", 1L);
Zq0A4_192(Z203->U_1.V_5.Y4.Y1);
ZfM_29(Zq0A4_172, (STRING)"y", 1L);
Zq0A4_192(W_4->Y3);
ZfM_29(Zq0A4_172, (STRING)" (yyt)", 6L);
} else if (Z195 != Z197) {
ZfM_29(Zq0A4_172, (STRING)"yy", 2L);
Zq0A4_192(W_4->Y3);
} else {
ZfM_29(Zq0A4_172, (STRING)"(* yy", 5L);
Zq0A4_192(W_4->Y3);
ZfM_29(Zq0A4_172, (STRING)")", 1L);
}
} else {
ZfM_29(Zq0A4_172, (STRING)"yyt->", 5L);
Zq0A4_193(Z201->U_1.V_5.Y4.Y1);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
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
Z203 = Z223(W_3->Y0->U_1.V_10.Y9.Y8, W_5->Y3);
ZfM_29(Zq0A4_172, (STRING)"y", 1L);
Zq0A4_192(Z203->U_1.V_5.Y4.Y1);
ZfM_29(Zq0A4_172, (STRING)"y", 1L);
Zq0A4_192(W_5->Y3);
ZfM_29(Zq0A4_172, (STRING)" (yyt->", 7L);
Zq0A4_193(Z201->U_1.V_5.Y4.Y1);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(W_3->Y0->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)")", 1L);
} else {
Zq0A4_192(W_3->Y0->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)"yy", 2L);
Zq0A4_192(W_5->Y3);
}
} else {
ZfM_29(Zq0A4_172, (STRING)"yyt->", 5L);
Zq0A4_193(Z201->U_1.V_5.Y4.Y1);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(W_3->Y0->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)"->", 2L);
Zq0A4_193(W_3->Y0->U_1.V_10.Y9.Y4);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(W_5->Y3);
}
}
}
}
}

static Zq0A4_153 Z223
# ifdef HAVE_ARGS
(Zq0A4_153 Z201, Zfb3DLQ_0 Z217)
# else
(Z201, Z217)
Zq0A4_153 Z201;
Zfb3DLQ_0 Z217;
# endif
{
while (Z201->U_1.V_1.Y0 != Zq0A4_99) {
if (Zq0A4_183(Z201->U_1.V_5.Y4.Y3, Z217) != Zq0A4_97) {
return Z201;
}
Z201 = Z201->U_1.V_5.Y4.Y6;
}
return Zq0A4_97;
}

static BOOLEAN Z229
# ifdef HAVE_ARGS
(BITSET Z230)
# else
(Z230)
BITSET Z230;
# endif
{
SHORTCARD Z195, Z231;

{
SHORTCARD B_5 = Z191, B_6 = Z192;

if (B_5 <= B_6)
for (Z195 = B_5;; Z195 += 1) {
Z231 = Z201->U_1.V_5.Y4.Y15->A[Z195 - 1].Y4;
{
register Zq0A4_199 *W_6 = &Z201->U_1.V_5.Y4.Y15->A[Z231 - 1];

if (SET_IS_SUBSET1(SET_ELEM (Zq0A4_7) | SET_ELEM (Zq0A4_21) | SET_ELEM (Zq0A4_26), W_6->Y3) && Z204 == W_6->Y0 && W_6->Y1->U_1.V_10.Y9.Y11 <= W_6->Y0->U_1.V_10.Y9.Y8->U_1.V_5.Y4.Y22 && IN(W_6->Y1->U_1.V_10.Y9.Y11, Z230)) {
return TRUE;
}
if (SET_IS_SUBSET1(SET_ELEM (Zq0A4_6) | SET_ELEM (Zq0A4_21), W_6->Y3) && Z231 == Z196) {
return TRUE;
}
}
if (Z195 >= B_6) break;
}
}
return FALSE;
}

static void Z234
# ifdef HAVE_ARGS
(CHAR Z235[], LONGCARD O_1)
# else
(Z235, O_1)
CHAR Z235[];
LONGCARD O_1;
# endif
{
OPEN_ARRAY_LOCALS

ALLOC_OPEN_ARRAYS (O_1 * sizeof (CHAR), 1)
COPY_OPEN_ARRAY (Z235, O_1, CHAR)
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)"Error: module EvalC2, routine ", 30L);
ZfM_29((ZDz6VQCC_4)ZfM_2, Z235, O_1);
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)" failed", 7L);
ZfM_33((ZDz6VQCC_4)ZfM_2);
(*ZbpA7du_2)();
FREE_OPEN_ARRAYS
}

static BOOLEAN Z238
# ifdef HAVE_ARGS
(BYTE Z239[], LONGCARD O_3, BYTE Z240[], LONGCARD O_2)
# else
(Z239, O_3, Z240, O_2)
BYTE Z239[];
LONGCARD O_3;
BYTE Z240[];
LONGCARD O_2;
# endif
{
INTEGER Z241;
OPEN_ARRAY_LOCALS

ALLOC_OPEN_ARRAYS (O_2 * sizeof (WORD) + O_3 * sizeof (WORD), 2)
COPY_OPEN_ARRAY (Z240, O_2, WORD)
COPY_OPEN_ARRAY (Z239, O_3, WORD)
{
LONGINT B_7 = 0, B_8 = (INTEGER)(O_3 - 1);

if (B_7 <= B_8)
for (Z241 = B_7;; Z241 += 1) {
if (Z239[Z241] != Z240[Z241]) {
FREE_OPEN_ARRAYS
return FALSE;
}
if (Z241 >= B_8) break;
}
}
FREE_OPEN_ARRAYS
return TRUE;
}

void ZbpA7du_3
# ifdef HAVE_ARGS
(Zq0A4_153 Z243)
# else
(Z243)
Zq0A4_153 Z243;
# endif
{
struct S_27 Z244;

if (Z243 == Zq0A4_97) {
return;
}
if (Z243 != NIL && Z243->U_1.V_1.Y0 == Zq0A4_127) {
{
register Zq0A4_253 *W_7 = &Z243->U_1.V_32.Y31;

ZbpA7d_8(Z243);
ZfM_33(Zq0A4_172);
Zq0A4_184(W_7->Y13, (Zq0A4_170)Z247);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"void ", 5L);
ZbpA7d_5();
if (ZpmCQ_25(ORD('+'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)"Evaluate", 8L);
ZfM_33(Zq0A4_172);
} else {
Zq0A4_192(W_7->Y7);
ZfM_33(Zq0A4_172);
}
ZfM_29(Zq0A4_172, (STRING)"# ifdef HAVE_ARGS", 17L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" (", 2L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)" yyt)", 5L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# else", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" (yyt) ", 7L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)" yyt;", 5L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# endif", 7L);
ZfM_33(Zq0A4_172);
Z199 = W_7->Y13;
Z201 = W_7->Y13;
ZfM_29(Zq0A4_172, (STRING)"{", 1L);
ZfM_33(Zq0A4_172);
Zq0A4_185(Z201, (Zq0A4_170)Z249);
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
Z201 = W_7->Y13;
Z193 = 1;
ZfM_29(Zq0A4_172, (STRING)" yyVisit1", 9L);
Zq0A4_192(Z250(W_7->Y13));
ZfM_29(Zq0A4_172, (STRING)" (yyt", 5L);
Zq0A4_185(Z201, (Zq0A4_170)Z251);
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
Zq0A4_184(W_7->Y13, (Zq0A4_170)Z252);
Zq0A4_184(W_7->Y13, (Zq0A4_170)ZbpA7du_3);
ZbpA7d_9(Z243);
return;
}
}
if (Z243 != NIL && Z243->U_1.V_1.Y0 == Zq0A4_100) {
for (;;) {
{
register Zq0A4_226 *W_8 = &Z243->U_1.V_5.Y4;

if (!((Zq0A4_177 & W_8->Y2) == 0X0L)) {
goto EXIT_3;
}
if (!IN(Zq0A4_36, W_8->Y2)) {
goto EXIT_3;
}
W_8->Y24 = 0;
Zq0A4_184(W_8->Y4, (Zq0A4_170)Z255);
{
SHORTCARD B_9 = 1, B_10 = W_8->Y22;

if (B_9 <= B_10)
for (Z193 = B_9;; Z193 += 1) {
Z199 = Z243;
Z201 = Z243;
Z202 = Z243;
ZfM_29(Zq0A4_172, (STRING)"static void yyVisit", 19L);
Zq0A4_195((LONGINT)Z193);
Zq0A4_192(W_8->Y1);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# ifdef HAVE_ARGS", 17L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" (register ", 11L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)" yyt", 4L);
Zq0A4_185(Z243, (Zq0A4_170)Z256);
ZfM_29(Zq0A4_172, (STRING)")", 1L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# else", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" (yyt", 5L);
Zq0A4_185(Z243, (Zq0A4_170)Z257);
ZfM_29(Zq0A4_172, (STRING)")", 1L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" register ", 10L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)" yyt;", 5L);
ZfM_33(Zq0A4_172);
Zq0A4_185(Z243, (Zq0A4_170)Z258);
ZfM_29(Zq0A4_172, (STRING)"# endif", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"{", 1L);
ZfM_33(Zq0A4_172);
Zq0A4du_3(Zq0A4_279->U_1.V_32.Y31.Y8->U_1.V_17.Y16.Y10);
ZqnGVQ_5(Zq0A4_172, Zq0A4_279->U_1.V_32.Y31.Y8->U_1.V_17.Y16.Y4);
Z199 = Zq0A4_279->U_1.V_32.Y31.Y14;
while (Z199->U_1.V_1.Y0 == Zq0A4_144) {
Zq0A4du_3(Z199->U_1.V_49.Y48.Y8->U_1.V_17.Y16.Y10);
ZqnGVQ_5(Zq0A4_172, Z199->U_1.V_49.Y48.Y8->U_1.V_17.Y16.Y4);
Z199 = Z199->U_1.V_49.Y48.Y12;
}
if (ZpmCQ_25(ORD('9'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)" char yyLow;", 12L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" if (& yyLow < yyMinLow) yyMinLow = & yyLow;", 44L);
ZfM_33(Zq0A4_172);
}
if (IN(Zq0A4_56, Zq0A4_69) && Z266(Z243)) {
ZfM_29(Zq0A4_172, (STRING)"yyRecursion:", 12L);
ZfM_33(Zq0A4_172);
}
ZfM_29(Zq0A4_172, (STRING)" switch (yyt->Kind) {", 21L);
ZfM_33(Zq0A4_172);
if (IN(Zq0A4_56, Zq0A4_69)) {
Z199 = Z243;
Z267(Z243);
Zq0A4_184(W_8->Y4, (Zq0A4_170)Z267);
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
if (Z193 >= B_10) break;
}
}
return;
}
} EXIT_3:;
}
}

static void Z247
# ifdef HAVE_ARGS
(Zq0A4_153 Z243)
# else
(Z243)
Zq0A4_153 Z243;
# endif
{
struct S_26 Z244;

if (Z243 == Zq0A4_97) {
return;
}
if (Z243 != NIL && Z243->U_1.V_1.Y0 == Zq0A4_100) {
for (;;) {
{
register Zq0A4_226 *W_9 = &Z243->U_1.V_5.Y4;

if (!((Zq0A4_177 & W_9->Y2) == 0X0L)) {
goto EXIT_4;
}
if (!IN(Zq0A4_36, W_9->Y2)) {
goto EXIT_4;
}
{
SHORTCARD B_11 = 1, B_12 = W_9->Y22;

if (B_11 <= B_12)
for (Z193 = B_11;; Z193 += 1) {
ZfM_29(Zq0A4_172, (STRING)"static void yyVisit", 19L);
Zq0A4_195((LONGINT)Z193);
Zq0A4_192(W_9->Y1);
ZfM_29(Zq0A4_172, (STRING)" ARGS ((register ", 17L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)" yyt", 4L);
Z199 = Z243;
Z201 = Z243;
Zq0A4_185(Z243, (Zq0A4_170)Z247);
ZfM_29(Zq0A4_172, (STRING)"));", 3L);
ZfM_33(Zq0A4_172);
if (Z193 >= B_12) break;
}
}
return;
}
} EXIT_4:;
}
if (Z243 != NIL && Z243->U_1.V_1.Y0 == Zq0A4_106) {
for (;;) {
{
register Zq0A4_232 *W_10 = &Z243->U_1.V_11.Y10;

if (!(IN(Zq0A4_11, W_10->Y6) && IN(Z193, W_10->Y12))) {
goto EXIT_5;
}
ZfM_29(Zq0A4_172, (STRING)", ", 2L);
Zq0A4_192(W_10->Y4);
ZfM_29(Zq0A4_172, (STRING)" ", 1L);
Z220((LONGCARD)W_10->Y10, FALSE);
return;
}
} EXIT_5:;
}
}

static void Z267
# ifdef HAVE_ARGS
(Zq0A4_153 Z243)
# else
(Z243)
Zq0A4_153 Z243;
# endif
{
struct S_24 Z244;

for (;;) {
for (;;) {
if (Z243 == Zq0A4_97) {
return;
}
if (Z243 != NIL) {
switch (Z243->U_1.V_1.Y0) {
case Zq0A4_100:;
{
register struct S_25 *W_11 = &Z244.U_1.V_1.Y0;

for (;;) {
{
register Zq0A4_226 *W_12 = &Z243->U_1.V_5.Y4;

if (!((Zq0A4_177 & W_12->Y2) == 0X0L)) {
goto EXIT_8;
}
if (!(W_12->Y24 != W_12->Y14)) {
goto EXIT_8;
}
W_11->Y0 = FALSE;
Z191 = W_12->Y24 + 1;
for (;;) {
if (W_12->Y24 == W_12->Y14) {
goto EXIT_9;
}
INC(W_12->Y24);
{
register Zq0A4_199 *W_13 = &W_12->Y15->A[W_12->Y15->A[W_12->Y24 - 1].Y4 - 1];

if (IN(Zq0A4_20, W_13->Y3) && W_13->Y1->U_1.V_10.Y9.Y11 > Z193) {
DEC(W_12->Y24);
goto EXIT_9;
}
}
} EXIT_9:;
Z192 = W_12->Y24;
Z201 = Z243;
if (Z270(Z201, (LONGINT)Z191, (LONGINT)Z192)) {
return;
}
ZfM_29(Zq0A4_172, (STRING)"case k", 6L);
Zq0A4_193(W_12->Y1);
ZfM_29(Zq0A4_172, (STRING)": {", 3L);
ZfM_33(Zq0A4_172);
Zq0A4_185(Z243, (Zq0A4_170)Z271);
{
SHORTCARD B_13 = Z191, B_14 = Z192;

if (B_13 <= B_14)
for (Z191 = B_13;; Z191 += 1) {
Z195 = W_12->Y15->A[Z191 - 1].Y4;
{
register Zq0A4_199 *W_14 = &W_12->Y15->A[Z195 - 1];

if (SET_IS_SUBSET1(SET_ELEM (Zq0A4_6) | SET_ELEM (Zq0A4_21) | SET_ELEM (Zq0A4_26), W_14->Y3) && ((SET_ELEM (Zq0A4_27) | SET_ELEM (Zq0A4_1) | SET_ELEM (Zq0A4_14)) & W_14->Y3) == 0X0L) {
Z272(Z243);
if (ZpmCQ_25(ORD('X'), &Zq0A4_171) && IN(Zq0A4_42, Z243->U_1.V_5.Y4.Y2)) {
ZfM_29(Zq0A4_172, (STRING)"yyWriteEval (yyt, \"", 19L);
Zq0A4_192(W_14->Y0->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)":", 1L);
Zq0A4_192(W_14->Y1->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)"\");", 3L);
ZfM_33(Zq0A4_172);
if (W_14->Y2 != (Zq0A4_153)ADR (W_14->Y2)) {
Z267(W_14->Y2);
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
Z220((LONGCARD)Z195, TRUE);
ZfM_29(Zq0A4_172, (STRING)") xxWriteNl ();", 15L);
ZfM_33(Zq0A4_172);
} else if (ZpmCQ_25(ORD('Y'), &Zq0A4_171) && IN(Zq0A4_42, Z243->U_1.V_5.Y4.Y2)) {
ZfM_29(Zq0A4_172, (STRING)"yyWriteEval (yyt, \"", 19L);
Zq0A4_192(W_14->Y0->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)":", 1L);
Zq0A4_192(W_14->Y1->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)"\");", 3L);
ZfM_33(Zq0A4_172);
if (W_14->Y2 != (Zq0A4_153)ADR (W_14->Y2)) {
Z267(W_14->Y2);
}
} else {
if (W_14->Y2 != (Zq0A4_153)ADR (W_14->Y2)) {
Z267(W_14->Y2);
}
}
}
if (SET_IS_SUBSET1(SET_ELEM (Zq0A4_7) | SET_ELEM (Zq0A4_20) | SET_ELEM (Zq0A4_26), W_14->Y3) && ((SET_ELEM (Zq0A4_27) | SET_ELEM (Zq0A4_1) | SET_ELEM (Zq0A4_14)) & W_14->Y3) == 0X0L) {
Z272(Z243);
if (ZpmCQ_25(ORD('X'), &Zq0A4_171) && IN(Zq0A4_42, Z243->U_1.V_5.Y4.Y2)) {
ZfM_29(Zq0A4_172, (STRING)"yyWriteEval (yyt, \"", 19L);
Zq0A4_192(W_14->Y1->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)"\");", 3L);
ZfM_33(Zq0A4_172);
if (W_14->Y2 != (Zq0A4_153)ADR (W_14->Y2)) {
Z267(W_14->Y2);
}
ZfM_33(Zq0A4_172);
if (IN(Zq0A4_19, W_14->Y3)) {
ZfM_29(Zq0A4_172, (STRING)"writerbool (yyb) xxWriteNl ();", 30L);
ZfM_33(Zq0A4_172);
} else if (W_14->Y1->U_1.V_1.Y0 == Zq0A4_105 || W_14->Y1->U_1.V_11.Y10.Y4 == Zq0A4_86) {
ZfM_29(Zq0A4_172, (STRING)"write", 5L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)" (", 2L);
Z220((LONGCARD)Z195, TRUE);
ZfM_29(Zq0A4_172, (STRING)") xxWriteNl ();", 15L);
ZfM_33(Zq0A4_172);
} else {
ZfM_29(Zq0A4_172, (STRING)"write", 5L);
Zq0A4_192(W_14->Y1->U_1.V_10.Y9.Y4);
ZfM_29(Zq0A4_172, (STRING)" (", 2L);
Z220((LONGCARD)Z195, TRUE);
ZfM_29(Zq0A4_172, (STRING)") xxWriteNl ();", 15L);
ZfM_33(Zq0A4_172);
}
} else if (ZpmCQ_25(ORD('Y'), &Zq0A4_171) && IN(Zq0A4_42, Z243->U_1.V_5.Y4.Y2)) {
ZfM_29(Zq0A4_172, (STRING)"yyWriteEval (yyt, \"", 19L);
Zq0A4_192(W_14->Y1->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)"\");", 3L);
ZfM_33(Zq0A4_172);
if (W_14->Y2 != (Zq0A4_153)ADR (W_14->Y2)) {
Z267(W_14->Y2);
}
} else {
if (W_14->Y2 != (Zq0A4_153)ADR (W_14->Y2)) {
Z267(W_14->Y2);
}
}
}
if (SET_IS_SUBSET1(SET_ELEM (Zq0A4_7) | SET_ELEM (Zq0A4_21) | SET_ELEM (Zq0A4_26), W_14->Y3) && W_14->Y1->U_1.V_10.Y9.Y11 <= W_14->Y0->U_1.V_10.Y9.Y8->U_1.V_5.Y4.Y22) {
if (ZpmCQ_25(ORD('Z'), &Zq0A4_171) && IN(Zq0A4_42, Z243->U_1.V_5.Y4.Y2)) {
ZfM_29(Zq0A4_172, (STRING)"yyWriteVisit (yyt, \"", 20L);
Zq0A4_192(W_14->Y0->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)" ", 1L);
Zq0A4_195((LONGINT)W_14->Y1->U_1.V_10.Y9.Y11);
ZfM_29(Zq0A4_172, (STRING)"\");", 3L);
ZfM_33(Zq0A4_172);
}
Z194 = W_14->Y1->U_1.V_10.Y9.Y11;
Z204 = W_14->Y0;
if (Z193 == Z194 && Z202->U_1.V_5.Y4.Y1 == Z204->U_1.V_10.Y9.Y4 && Z270(Z201, (LONGINT)(Z191 + 1), (LONGINT)Z192) && Z274(Z204->U_1.V_10.Y9.Y8)) {
ZfM_29(Zq0A4_172, (STRING)"yyt = yyt->", 11L);
Zq0A4_193(W_12->Y1);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(Z204->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
Zq0A4_185(Z204->U_1.V_10.Y9.Y8, (Zq0A4_170)Z275);
ZfM_29(Zq0A4_172, (STRING)"goto yyRecursion;", 17L);
ZfM_33(Zq0A4_172);
W_11->Y0 = TRUE;
Z191 = Z192 + 1;
} else {
ZfM_29(Zq0A4_172, (STRING)"yyVisit", 7L);
Zq0A4_195((LONGINT)Z194);
Zq0A4_192(Z204->U_1.V_10.Y9.Y4);
ZfM_29(Zq0A4_172, (STRING)" (yyt->", 7L);
Zq0A4_193(W_12->Y1);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(Z204->U_1.V_10.Y9.Y3);
Zq0A4_185(Z204->U_1.V_10.Y9.Y8, (Zq0A4_170)Z276);
ZfM_29(Zq0A4_172, (STRING)");", 2L);
ZfM_33(Zq0A4_172);
}
}
}
if (Z191 >= B_14) break;
}
}
if (!W_11->Y0) {
if (ZpmCQ_25(ORD('Z'), &Zq0A4_171) && IN(Zq0A4_42, Z243->U_1.V_5.Y4.Y2)) {
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
register Zq0A4_263 *W_15 = &Z243->U_1.V_42.Y41;

Zq0A4du_3(W_15->Y2);
Z267(W_15->Y4);
ZfM_29(Zq0A4_172, (STRING)"=", 1L);
Z267(W_15->Y5);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
return;
}
break;
case Zq0A4_138:;
{
register Zq0A4_264 *W_16 = &Z243->U_1.V_43.Y42;

Z196 = Z201->U_1.V_5.Y4.Y15->A[Z195 - 1].Y5;
if (IN(Zq0A4_11, Z201->U_1.V_5.Y4.Y15->A[Z195 - 1].Y1->U_1.V_11.Y10.Y6) && IN(Zq0A4_11, Z201->U_1.V_5.Y4.Y15->A[Z196 - 1].Y1->U_1.V_11.Y10.Y6)) {
if (IN(Zq0A4_20, Z201->U_1.V_5.Y4.Y15->A[Z195 - 1].Y3) && IN(Zq0A4_20, Z201->U_1.V_5.Y4.Y15->A[Z196 - 1].Y3)) {
Zq0A4du_3(W_16->Y2);
Z220((LONGCARD)Z195, FALSE);
ZfM_29(Zq0A4_172, (STRING)" =", 2L);
Z267(W_16->Y5);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
}
} else {
Zq0A4du_3(W_16->Y2);
Z267(W_16->Y4);
ZfM_29(Zq0A4_172, (STRING)"=", 1L);
Z267(W_16->Y5);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
}
return;
}
break;
case Zq0A4_139:;
{
register Zq0A4_265 *W_17 = &Z243->U_1.V_44.Y43;

Zq0A4du_3(W_17->Y2);
Z267(W_17->Y5);
ZfM_33(Zq0A4_172);
return;
}
break;
case Zq0A4_141:;
{
register Zq0A4_267 *W_18 = &Z243->U_1.V_46.Y45;

Zq0A4du_3(W_18->Y2);
if (W_18->Y4 != Zq0A4_97) {
ZfM_29(Zq0A4_172, (STRING)"if (! (", 7L);
if (ZpmCQ_25(ORD('X'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)"yyb = ", 6L);
}
Z267(W_18->Y4);
ZfM_29(Zq0A4_172, (STRING)")) {", 4L);
Z267(W_18->Y5);
ZfM_29(Zq0A4_172, (STRING)"; }", 3L);
ZfM_33(Zq0A4_172);
if (W_18->Y6->U_1.V_1.Y0 == Zq0A4_141) {
ZfM_29(Zq0A4_172, (STRING)"else", 4L);
ZfM_33(Zq0A4_172);
Z267(W_18->Y6);
}
} else {
if (ZpmCQ_25(ORD('X'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)"yyb = rfalse; ", 14L);
}
Z267(W_18->Y5);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
Z267(W_18->Y6);
}
return;
}
break;
case Zq0A4_116:;
{
register Zq0A4_242 *W_19 = &Z243->U_1.V_21.Y20;

Z205 = Zq0A4_183(Z201, W_19->Y2);
if (Z205 != Zq0A4_97) {
Z206 = Z205->U_1.V_10.Y9.Y8;
Z200 = Zq0A4_183(Z206, W_19->Y3);
if (Z200 != Zq0A4_97) {
Z220((LONGCARD)(Z201->U_1.V_5.Y4.Y13 + Z205->U_1.V_10.Y9.Y13 + Z200->U_1.V_11.Y10.Y10), TRUE);
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
Z243 = W_19->Y1;
goto EXIT_7;
}
break;
case Zq0A4_117:;
{
register Zq0A4_243 *W_20 = &Z243->U_1.V_22.Y21;

Z200 = Zq0A4_183(Z201, W_20->Y2);
if (Z200 != Zq0A4_97) {
Z220((LONGCARD)Z200->U_1.V_11.Y10.Y10, TRUE);
} else {
Zq0A4_192(W_20->Y2);
}
Z243 = W_20->Y1;
goto EXIT_7;
}
break;
case Zq0A4_119:;
{
register Zq0A4_245 *W_21 = &Z243->U_1.V_24.Y23;

Zp1PEAFi_6(Zq0A4_172, W_21->Y2);
Z243 = W_21->Y1;
goto EXIT_7;
}
break;
case Zq0A4_120:;
{
register Zq0A4_246 *W_22 = &Z243->U_1.V_25.Y24;

Z267(W_22->Y2);
Z243 = W_22->Y1;
goto EXIT_7;
}
break;
case Zq0A4_123:;
{
register Zq0A4_249 *W_23 = &Z243->U_1.V_28.Y27;

Zp1PEAFi_6(Zq0A4_172, W_23->Y1);
Z243 = W_23->Y2;
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

static void Z255
# ifdef HAVE_ARGS
(Zq0A4_153 Z243)
# else
(Z243)
Zq0A4_153 Z243;
# endif
{
struct S_23 Z244;

if (Z243 == Zq0A4_97) {
return;
}
if (Z243 != NIL && Z243->U_1.V_1.Y0 == Zq0A4_100) {
{
register Zq0A4_226 *W_24 = &Z243->U_1.V_5.Y4;

W_24->Y24 = 0;
return;
}
}
}

static void Z257
# ifdef HAVE_ARGS
(Zq0A4_153 Z243)
# else
(Z243)
Zq0A4_153 Z243;
# endif
{
struct S_22 Z244;

if (Z243 == Zq0A4_97) {
return;
}
if (Z243 != NIL && Z243->U_1.V_1.Y0 == Zq0A4_106) {
for (;;) {
{
register Zq0A4_232 *W_25 = &Z243->U_1.V_11.Y10;

if (!(IN(Zq0A4_11, W_25->Y6) && IN(Z193, W_25->Y12))) {
goto EXIT_10;
}
ZfM_29(Zq0A4_172, (STRING)", yy", 4L);
Zq0A4_192(W_25->Y3);
return;
}
} EXIT_10:;
}
}

static void Z258
# ifdef HAVE_ARGS
(Zq0A4_153 Z243)
# else
(Z243)
Zq0A4_153 Z243;
# endif
{
struct S_21 Z244;

if (Z243 == Zq0A4_97) {
return;
}
if (Z243 != NIL && Z243->U_1.V_1.Y0 == Zq0A4_106) {
for (;;) {
{
register Zq0A4_232 *W_26 = &Z243->U_1.V_11.Y10;

if (!(IN(Zq0A4_11, W_26->Y6) && IN(Z193, W_26->Y12))) {
goto EXIT_11;
}
ZfM_29(Zq0A4_172, (STRING)" ", 1L);
Zq0A4_192(W_26->Y4);
ZfM_29(Zq0A4_172, (STRING)" ", 1L);
Z220((LONGCARD)W_26->Y10, FALSE);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
return;
}
} EXIT_11:;
}
}

static void Z256
# ifdef HAVE_ARGS
(Zq0A4_153 Z243)
# else
(Z243)
Zq0A4_153 Z243;
# endif
{
struct S_20 Z244;

if (Z243 == Zq0A4_97) {
return;
}
if (Z243 != NIL && Z243->U_1.V_1.Y0 == Zq0A4_106) {
for (;;) {
{
register Zq0A4_232 *W_27 = &Z243->U_1.V_11.Y10;

if (!(IN(Zq0A4_11, W_27->Y6) && IN(Z193, W_27->Y12))) {
goto EXIT_12;
}
ZfM_29(Zq0A4_172, (STRING)", ", 2L);
Zq0A4_192(W_27->Y4);
ZfM_29(Zq0A4_172, (STRING)" ", 1L);
Z220((LONGCARD)W_27->Y10, FALSE);
return;
}
} EXIT_12:;
}
}

static void Z276
# ifdef HAVE_ARGS
(Zq0A4_153 Z243)
# else
(Z243)
Zq0A4_153 Z243;
# endif
{
struct S_19 Z244;

if (Z243 == Zq0A4_97) {
return;
}
if (Z243 != NIL && Z243->U_1.V_1.Y0 == Zq0A4_106) {
for (;;) {
{
register Zq0A4_232 *W_28 = &Z243->U_1.V_11.Y10;

if (!(IN(Zq0A4_11, W_28->Y6) && IN(Z194, W_28->Y12))) {
goto EXIT_13;
}
if (IN(Zq0A4_6, W_28->Y6)) {
ZfM_29(Zq0A4_172, (STRING)", ", 2L);
} else {
ZfM_29(Zq0A4_172, (STRING)", & ", 4L);
}
Z220((LONGCARD)(Z201->U_1.V_5.Y4.Y13 + Z204->U_1.V_10.Y9.Y13 + W_28->Y10), TRUE);
return;
}
} EXIT_13:;
}
}

static void Z251
# ifdef HAVE_ARGS
(Zq0A4_153 Z243)
# else
(Z243)
Zq0A4_153 Z243;
# endif
{
struct S_18 Z244;

if (Z243 == Zq0A4_97) {
return;
}
if (Z243 != NIL && Z243->U_1.V_1.Y0 == Zq0A4_106) {
for (;;) {
{
register Zq0A4_232 *W_29 = &Z243->U_1.V_11.Y10;

if (!(IN(Zq0A4_11, W_29->Y6) && IN(Z193, W_29->Y12))) {
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

static void Z271
# ifdef HAVE_ARGS
(Zq0A4_153 Z243)
# else
(Z243)
Zq0A4_153 Z243;
# endif
{
struct S_17 Z244;

if (Z243 == Zq0A4_97) {
return;
}
if (Z243 != NIL && Z243->U_1.V_1.Y0 == Zq0A4_105) {
{
register Zq0A4_231 *W_30 = &Z243->U_1.V_10.Y9;

Z204 = Z243;
Zq0A4_185(W_30->Y8, (Zq0A4_170)Z296);
return;
}
}
if (Z243 != NIL && Z243->U_1.V_1.Y0 == Zq0A4_106) {
for (;;) {
{
register Zq0A4_232 *W_31 = &Z243->U_1.V_11.Y10;

if (!(IN(Zq0A4_11, W_31->Y6) && Zq0A4_183(Z199, W_31->Y3) == Zq0A4_97 && IN(Z193, W_31->Y12) || IN(Zq0A4_14, W_31->Y6) && !IN(Zq0A4_15, W_31->Y6) && W_31->Y10 != Z197)) {
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

static void Z296
# ifdef HAVE_ARGS
(Zq0A4_153 Z243)
# else
(Z243)
Zq0A4_153 Z243;
# endif
{
struct S_16 Z244;

if (Z243 == Zq0A4_97) {
return;
}
if (Z243 != NIL && Z243->U_1.V_1.Y0 == Zq0A4_106) {
for (;;) {
{
register Zq0A4_232 *W_32 = &Z243->U_1.V_11.Y10;

if (!(IN(Zq0A4_11, W_32->Y6) || IN(Zq0A4_14, W_32->Y6) && !IN(Zq0A4_15, W_32->Y6))) {
goto EXIT_16;
}
Z196 = Z201->U_1.V_5.Y4.Y13 + Z204->U_1.V_10.Y9.Y13 + W_32->Y10;
if (!(IN(Zq0A4_14, W_32->Y6) || ((SET_ELEM (Zq0A4_22) | SET_ELEM (Zq0A4_23)) & Z201->U_1.V_5.Y4.Y15->A[Z196 - 1].Y3) == 0X0L || Z196 == Z209((LONGCARD)Z196))) {
goto EXIT_16;
}
if (!Z229(W_32->Y12)) {
goto EXIT_16;
}
Zq0A4_192(W_32->Y4);
ZfM_29(Zq0A4_172, (STRING)" ", 1L);
Zq0A4_192(Z204->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)"yy", 2L);
Zq0A4_192(W_32->Y3);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
return;
}
} EXIT_16:;
}
}

static void Z249
# ifdef HAVE_ARGS
(Zq0A4_153 Z243)
# else
(Z243)
Zq0A4_153 Z243;
# endif
{
struct S_15 Z244;

if (Z243 == Zq0A4_97) {
return;
}
if (Z243 != NIL && Z243->U_1.V_1.Y0 == Zq0A4_106) {
for (;;) {
{
register Zq0A4_232 *W_33 = &Z243->U_1.V_11.Y10;

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

static void Z252
# ifdef HAVE_ARGS
(Zq0A4_153 Z243)
# else
(Z243)
Zq0A4_153 Z243;
# endif
{
struct S_14 Z244;

if (Z243 == Zq0A4_97) {
return;
}
if (Z243 != NIL && Z243->U_1.V_1.Y0 == Zq0A4_100) {
for (;;) {
{
register Zq0A4_226 *W_34 = &Z243->U_1.V_5.Y4;

if (!((Zq0A4_177 & W_34->Y2) == 0X0L)) {
goto EXIT_18;
}
Z199 = Z243;
Zq0A4_185(W_34->Y3, (Zq0A4_170)Z252);
return;
}
} EXIT_18:;
}
if (Z243 != NIL && Z243->U_1.V_1.Y0 == Zq0A4_106) {
for (;;) {
{
register Zq0A4_232 *W_35 = &Z243->U_1.V_11.Y10;

if (!IN(Zq0A4_14, W_35->Y6)) {
goto EXIT_19;
}
Z201 = Z199;
Z197 = W_35->Y10;
if (IN(Zq0A4_15, W_35->Y6)) {
ZfM_29(Zq0A4_172, (STRING)"static ", 7L);
Zq0A4_192(W_35->Y4);
ZfM_29(Zq0A4_172, (STRING)" y", 2L);
Zq0A4_192(Z201->U_1.V_5.Y4.Y1);
ZfM_29(Zq0A4_172, (STRING)"y", 1L);
Zq0A4_192(W_35->Y3);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# ifdef HAVE_ARGS", 17L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" (register ", 11L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)" yyt)", 5L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# else", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" (yyt) register ", 16L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)" yyt;", 5L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# endif", 7L);
ZfM_33(Zq0A4_172);
} else {
ZfM_29(Zq0A4_172, (STRING)"static void y", 13L);
Zq0A4_192(Z201->U_1.V_5.Y4.Y1);
ZfM_29(Zq0A4_172, (STRING)"y", 1L);
Zq0A4_192(W_35->Y3);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# ifdef HAVE_ARGS", 17L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" (register ", 11L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)" yyt, ", 6L);
Zq0A4_192(W_35->Y4);
ZfM_29(Zq0A4_172, (STRING)" * ", 3L);
Z220((LONGCARD)W_35->Y10, FALSE);
ZfM_29(Zq0A4_172, (STRING)")", 1L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# else", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" (yyt, ", 7L);
Z220((LONGCARD)W_35->Y10, FALSE);
ZfM_29(Zq0A4_172, (STRING)")", 1L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" register ", 10L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)" yyt;", 5L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" ", 1L);
Zq0A4_192(W_35->Y4);
ZfM_29(Zq0A4_172, (STRING)" * ", 3L);
Z220((LONGCARD)W_35->Y10, FALSE);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# endif", 7L);
ZfM_33(Zq0A4_172);
}
ZfM_29(Zq0A4_172, (STRING)"{", 1L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" switch (yyt->Kind) {", 21L);
ZfM_33(Zq0A4_172);
if (IN(Zq0A4_56, Zq0A4_69)) {
Z195 = W_35->Y10;
Z201 = Z199;
Z193 = W_35->Y11;
Z297(Z201);
Zq0A4_184(Z201->U_1.V_5.Y4.Y4, (Zq0A4_170)Z297);
Z201 = Z199;
}
ZfM_29(Zq0A4_172, (STRING)" default: ;", 11L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" }", 2L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"}", 1L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
Z197 = 0;
return;
}
} EXIT_19:;
}
}

static void Z297
# ifdef HAVE_ARGS
(Zq0A4_153 Z243)
# else
(Z243)
Zq0A4_153 Z243;
# endif
{
struct S_13 Z244;

if (Z243 == Zq0A4_97) {
return;
}
if (Z243 != NIL && Z243->U_1.V_1.Y0 == Zq0A4_100) {
{
register Zq0A4_226 *W_36 = &Z243->U_1.V_5.Y4;

ZfM_29(Zq0A4_172, (STRING)"case k", 6L);
Zq0A4_193(W_36->Y1);
ZfM_29(Zq0A4_172, (STRING)": {", 3L);
ZfM_33(Zq0A4_172);
{
register Zq0A4_199 *W_37 = &W_36->Y15->A[Z195 - 1];

Z201 = Z243;
Zq0A4_185(Z243, (Zq0A4_170)Z271);
Z272(Z243);
if (IN(Zq0A4_15, W_37->Y3)) {
Z297(W_37->Y2);
} else {
Z267(W_37->Y2);
ZfM_33(Zq0A4_172);
}
}
ZfM_29(Zq0A4_172, (STRING)"} break;", 8L);
ZfM_33(Zq0A4_172);
return;
}
}
if (Z243 != NIL && Z243->U_1.V_1.Y0 == Zq0A4_137) {
{
register Zq0A4_263 *W_38 = &Z243->U_1.V_42.Y41;

ZfM_29(Zq0A4_172, (STRING)"return ", 7L);
Z267(W_38->Y5);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
return;
}
}
if (Z243 != NIL && Z243->U_1.V_1.Y0 == Zq0A4_138) {
{
register Zq0A4_264 *W_39 = &Z243->U_1.V_43.Y42;

ZfM_29(Zq0A4_172, (STRING)"return ", 7L);
Z267(W_39->Y5);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
return;
}
}
if (Z243 != NIL && Z243->U_1.V_1.Y0 == Zq0A4_139) {
{
register Zq0A4_265 *W_40 = &Z243->U_1.V_44.Y43;

ZfM_29(Zq0A4_172, (STRING)"NoBlockStatementForDemandFunctionAttributes;", 44L);
ZfM_33(Zq0A4_172);
return;
}
}
}

static void Z272
# ifdef HAVE_ARGS
(Zq0A4_153 Z243)
# else
(Z243)
Zq0A4_153 Z243;
# endif
{
struct S_12 Z244;

if (Z243 == Zq0A4_97) {
return;
}
if (Z243 != NIL && Z243->U_1.V_1.Y0 == Zq0A4_100) {
{
register Zq0A4_226 *W_41 = &Z243->U_1.V_5.Y4;

{
SHORTCARD B_15 = 1, B_16 = W_41->Y14;

if (B_15 <= B_16)
for (Z196 = B_15;; Z196 += 1) {
{
register Zq0A4_199 *W_42 = &W_41->Y15->A[Z196 - 1];

if (ZolB7FGBG_9((LONGINT)Z195, (LONGINT)Z196, W_41->Y16) && IN(Zq0A4_14, W_42->Y3) && !IN(Zq0A4_15, W_42->Y3)) {
if (IN(Zq0A4_20, W_42->Y3)) {
Z203 = Z223(Z243, W_42->Y1->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)"    y", 5L);
Zq0A4_192(Z203->U_1.V_5.Y4.Y1);
ZfM_29(Zq0A4_172, (STRING)"y", 1L);
Zq0A4_192(W_42->Y1->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)" (yyt, ", 7L);
Z220((LONGCARD)Z196, FALSE);
ZfM_29(Zq0A4_172, (STRING)");", 2L);
ZfM_33(Zq0A4_172);
} else {
Z203 = Z223(W_42->Y0->U_1.V_10.Y9.Y8, W_42->Y1->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)"    y", 5L);
Zq0A4_192(Z203->U_1.V_5.Y4.Y1);
ZfM_29(Zq0A4_172, (STRING)"y", 1L);
Zq0A4_192(W_42->Y1->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)" (yyt->", 7L);
Zq0A4_193(W_41->Y1);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(W_42->Y0->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)", ", 2L);
Z220((LONGCARD)Z196, FALSE);
ZfM_29(Zq0A4_172, (STRING)");", 2L);
ZfM_33(Zq0A4_172);
}
}
}
if (Z196 >= B_16) break;
}
}
return;
}
}
}

static BOOLEAN Z270
# ifdef HAVE_ARGS
(Zq0A4_153 Z299, INTEGER Z191, INTEGER Z192)
# else
(Z299, Z191, Z192)
Zq0A4_153 Z299;
INTEGER Z191;
INTEGER Z192;
# endif
{
INTEGER Z195, Z196;
struct S_11 Z244;

if (Z299 == Zq0A4_97) {
return FALSE;
}
{
register Zq0A4_226 *W_43 = &Z299->U_1.V_5.Y4;

{
LONGINT B_17 = Z191, B_18 = Z192;

if (B_17 <= B_18)
for (Z196 = B_17;; Z196 += 1) {
Z195 = W_43->Y15->A[Z196 - 1].Y4;
{
register Zq0A4_199 *W_44 = &W_43->Y15->A[Z195 - 1];

if (SET_IS_SUBSET1(SET_ELEM (Zq0A4_6) | SET_ELEM (Zq0A4_21) | SET_ELEM (Zq0A4_26), W_44->Y3) && ((SET_ELEM (Zq0A4_27) | SET_ELEM (Zq0A4_1) | SET_ELEM (Zq0A4_14)) & W_44->Y3) == 0X0L) {
if (W_44->Y2 != (Zq0A4_153)ADR (W_44->Y2) && !Z300(W_44->Y2, Z195)) {
return FALSE;
}
}
if (SET_IS_SUBSET1(SET_ELEM (Zq0A4_7) | SET_ELEM (Zq0A4_20) | SET_ELEM (Zq0A4_26), W_44->Y3) && ((SET_ELEM (Zq0A4_27) | SET_ELEM (Zq0A4_1) | SET_ELEM (Zq0A4_14)) & W_44->Y3) == 0X0L) {
if (W_44->Y2 != (Zq0A4_153)ADR (W_44->Y2) && !Z300(W_44->Y2, Z195)) {
return FALSE;
}
}
if (SET_IS_SUBSET1(SET_ELEM (Zq0A4_7) | SET_ELEM (Zq0A4_21) | SET_ELEM (Zq0A4_26), W_44->Y3) && W_44->Y1->U_1.V_10.Y9.Y11 <= W_44->Y0->U_1.V_10.Y9.Y8->U_1.V_5.Y4.Y22) {
return FALSE;
}
}
if (Z196 >= B_18) break;
}
}
return TRUE;
}
}

static BOOLEAN Z300
# ifdef HAVE_ARGS
(Zq0A4_153 Z301, INTEGER Z302)
# else
(Z301, Z302)
Zq0A4_153 Z301;
INTEGER Z302;
# endif
{
struct S_10 Z244;

if (Z301 == Zq0A4_97) {
return FALSE;
}
if (Z301 != NIL && Z301->U_1.V_1.Y0 == Zq0A4_138) {
for (;;) {
{
register Zq0A4_264 *W_45 = &Z301->U_1.V_43.Y42;

Z196 = Z201->U_1.V_5.Y4.Y15->A[Z302 - 1].Y5;
if (!(IN(Zq0A4_11, Z201->U_1.V_5.Y4.Y15->A[Z302 - 1].Y1->U_1.V_11.Y10.Y6) && IN(Zq0A4_11, Z201->U_1.V_5.Y4.Y15->A[Z196 - 1].Y1->U_1.V_11.Y10.Y6) && !(IN(Zq0A4_20, Z201->U_1.V_5.Y4.Y15->A[Z302 - 1].Y3) && IN(Zq0A4_20, Z201->U_1.V_5.Y4.Y15->A[Z196 - 1].Y3)))) {
goto EXIT_20;
}
return TRUE;
}
} EXIT_20:;
}
return FALSE;
}

static void Z275
# ifdef HAVE_ARGS
(Zq0A4_153 Z243)
# else
(Z243)
Zq0A4_153 Z243;
# endif
{
struct S_8 Z244;

if (Z243 == Zq0A4_97) {
return;
}
if (Z243 != NIL && Z243->U_1.V_1.Y0 == Zq0A4_106) {
{
register struct S_9 *W_46 = &Z244.U_1.V_1.Y0;

for (;;) {
{
register Zq0A4_232 *W_47 = &Z243->U_1.V_11.Y10;

if (!(IN(Zq0A4_11, W_47->Y6) && IN(Z194, W_47->Y12))) {
goto EXIT_21;
}
W_46->Y0 = Z201->U_1.V_5.Y4.Y13 + Z204->U_1.V_10.Y9.Y13 + W_47->Y10;
{
register Zq0A4_199 *W_48 = &Z201->U_1.V_5.Y4.Y15->A[W_46->Y0 - 1];

if (((SET_ELEM (Zq0A4_22) | SET_ELEM (Zq0A4_23)) & W_48->Y3) != 0X0L) {
W_46->Y0 = Z209((LONGCARD)W_46->Y0);
}
}
if (W_47->Y10 != W_46->Y0) {
if (IN(Zq0A4_6, W_47->Y6)) {
ZfM_29(Zq0A4_172, (STRING)"yy", 2L);
Zq0A4_192(W_47->Y3);
ZfM_29(Zq0A4_172, (STRING)" = ", 3L);
Z220((LONGCARD)W_46->Y0, TRUE);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
} else {
ZfM_29(Zq0A4_172, (STRING)"yy", 2L);
Zq0A4_192(W_47->Y3);
ZfM_29(Zq0A4_172, (STRING)" = & ", 5L);
Z220((LONGCARD)W_46->Y0, TRUE);
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

static BOOLEAN Z266
# ifdef HAVE_ARGS
(Zq0A4_153 Z243)
# else
(Z243)
Zq0A4_153 Z243;
# endif
{
struct S_7 Z244;

if (Z243 == Zq0A4_97) {
return FALSE;
}
for (;;) {
{
register Zq0A4_226 *W_49 = &Z243->U_1.V_5.Y4;

if (!(Z303(Z243) || Z304(W_49->Y4))) {
goto EXIT_22;
}
return TRUE;
}
} EXIT_22:;
return FALSE;
}

static BOOLEAN Z304
# ifdef HAVE_ARGS
(Zq0A4_153 Z305)
# else
(Z305)
Zq0A4_153 Z305;
# endif
{
struct S_6 Z244;

if (Z305 == Zq0A4_97) {
return FALSE;
}
if (Z305 != NIL && Z305->U_1.V_1.Y0 == Zq0A4_100) {
for (;;) {
{
register Zq0A4_226 *W_50 = &Z305->U_1.V_5.Y4;

if (!(Z266(Z305) || Z304(W_50->Y5))) {
goto EXIT_23;
}
return TRUE;
}
} EXIT_23:;
}
return FALSE;
}

static BOOLEAN Z303
# ifdef HAVE_ARGS
(Zq0A4_153 Z243)
# else
(Z243)
Zq0A4_153 Z243;
# endif
{
struct S_5 Z244;

if (Z243 == Zq0A4_97) {
return FALSE;
}
for (;;) {
{
register Zq0A4_226 *W_51 = &Z243->U_1.V_5.Y4;

if (!((Zq0A4_177 & W_51->Y2) == 0X0L)) {
goto EXIT_24;
}
if (!(W_51->Y24 != W_51->Y14)) {
goto EXIT_24;
}
Z201 = Z243;
Z192 = W_51->Y24;
for (;;) {
if (Z192 == W_51->Y14) {
goto EXIT_25;
}
INC(Z192);
{
register Zq0A4_199 *W_52 = &W_51->Y15->A[W_51->Y15->A[Z192 - 1].Y4 - 1];

if (IN(Zq0A4_20, W_52->Y3) && W_52->Y1->U_1.V_10.Y9.Y11 > Z193) {
DEC(Z192);
goto EXIT_25;
}
}
} EXIT_25:;
{
SHORTCARD B_19 = W_51->Y24 + 1, B_20 = Z192;

if (B_19 <= B_20)
for (Z191 = B_19;; Z191 += 1) {
Z195 = W_51->Y15->A[Z191 - 1].Y4;
{
register Zq0A4_199 *W_53 = &W_51->Y15->A[Z195 - 1];

if (SET_IS_SUBSET1(SET_ELEM (Zq0A4_7) | SET_ELEM (Zq0A4_21) | SET_ELEM (Zq0A4_26), W_53->Y3) && W_53->Y1->U_1.V_10.Y9.Y11 <= W_53->Y0->U_1.V_10.Y9.Y8->U_1.V_5.Y4.Y22) {
Z194 = W_53->Y1->U_1.V_10.Y9.Y11;
Z204 = W_53->Y0;
if (Z193 == Z194 && Z202->U_1.V_5.Y4.Y1 == Z204->U_1.V_10.Y9.Y4 && Z270(Z201, (LONGINT)(Z191 + 1), (LONGINT)Z192)) {
return TRUE;
}
}
}
if (Z191 >= B_20) break;
}
}
return FALSE;
return TRUE;
}
} EXIT_24:;
return FALSE;
}

static BOOLEAN Z274
# ifdef HAVE_ARGS
(Zq0A4_153 Z243)
# else
(Z243)
Zq0A4_153 Z243;
# endif
{
struct S_4 Z244;

if (Z243 == Zq0A4_97) {
return FALSE;
}
for (;;) {
{
register Zq0A4_226 *W_54 = &Z243->U_1.V_5.Y4;

Z207 = TRUE;
Z198 = W_54->Y14;
ZpmCQ_5(&Z208, (LONGCARD)W_54->Y14);
Zq0A4_185(Z243, (Zq0A4_170)Z306);
ZpmCQ_7(&Z208);
if (!Z207) {
goto EXIT_26;
}
return TRUE;
}
} EXIT_26:;
return FALSE;
}

static void Z306
# ifdef HAVE_ARGS
(Zq0A4_153 Z243)
# else
(Z243)
Zq0A4_153 Z243;
# endif
{
struct S_2 Z244;

if (Z243 == Zq0A4_97) {
return;
}
if (Z243 != NIL && Z243->U_1.V_1.Y0 == Zq0A4_106) {
{
register struct S_3 *W_55 = &Z244.U_1.V_1.Y0;

for (;;) {
{
register Zq0A4_232 *W_56 = &Z243->U_1.V_11.Y10;

if (!(IN(Zq0A4_11, W_56->Y6) && IN(Z194, W_56->Y12))) {
goto EXIT_27;
}
W_55->Y0 = Z201->U_1.V_5.Y4.Y13 + Z204->U_1.V_10.Y9.Y13 + W_56->Y10;
{
register Zq0A4_199 *W_57 = &Z201->U_1.V_5.Y4.Y15->A[W_55->Y0 - 1];

if (((SET_ELEM (Zq0A4_22) | SET_ELEM (Zq0A4_23)) & W_57->Y3) != 0X0L) {
W_55->Y0 = Z209((LONGCARD)W_55->Y0);
}
}
if (W_56->Y10 != W_55->Y0) {
if (W_55->Y0 <= Z198 && ZpmCQ_25((LONGCARD)W_55->Y0, &Z208)) {
Z207 = FALSE;
}
ZpmCQ_13(&Z208, (LONGCARD)W_56->Y10);
}
return;
}
} EXIT_27:;
}
}
}

static Zfb3DLQ_0 Z250
# ifdef HAVE_ARGS
(Zq0A4_153 Z307)
# else
(Z307)
Zq0A4_153 Z307;
# endif
{
struct S_1 Z244;

for (;;) {
for (;;) {
if (Z307 != NIL && Z307->U_1.V_1.Y0 == Zq0A4_100) {
for (;;) {
{
register Zq0A4_226 *W_58 = &Z307->U_1.V_5.Y4;

if (!((Zq0A4_177 & W_58->Y2) == 0X0L)) {
goto EXIT_30;
}
return W_58->Y1;
}
} EXIT_30:;
Z307 = Z307->U_1.V_5.Y4.Y5;
goto EXIT_29;
}
Z234((STRING)"GetName", 7L);
} EXIT_29:;
} EXIT_28:;
}

void ZbpA7du_4
 ARGS ((void))
{
Z197 = 0;
}

void ZbpA7du_5
 ARGS ((void))
{
}

static void Z310
 ARGS ((void))
{
ZfM_34();
rExit(1L);
}

void BEGIN_EvalC2 ARGS ((void))
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
BEGIN_TreeC2 ();
BEGIN_EvalC ();
BEGIN_Tree ();
BEGIN_Errors ();

ZbpA7du_0 = ZfM_1;
ZbpA7du_2 = Z310;
ZbpA7du_4();
}
