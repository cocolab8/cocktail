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

#ifndef DEFINITION_TreeJav2
#include "TreeJav2.h"
#endif

#ifndef DEFINITION_EvalJava
#include "EvalJava.h"
#endif

#ifndef DEFINITION_Tree
#include "Tree.h"
#endif

#ifndef DEFINITION_Errors
#include "Errors.h"
#endif

#ifndef DEFINITION_EvalJav2
#include "EvalJav2.h"
#endif

ZfM_3 ZbpA7kgAd_0;
BOOLEAN ZbpA7kgAd_1;
PROC ZbpA7kgAd_2;

static SHORTCARD Z188, Z189, Z190, Z191, Z192, Z193, Z194, Z195, Z196;
static Zq0A4_153 Z197, Z198, Z199, Z200, Z201, Z202, Z203, Z204;
static BOOLEAN Z205;
static ZpmCQ_4 Z206;
static CARDINAL Z207 ARGS ((CARDINAL Z193));
static void Z218 ARGS ((CARDINAL Z193, BOOLEAN Z219, BOOLEAN Z220));
static Zq0A4_153 Z222 ARGS ((Zq0A4_153 Z199, Zfb3DLQ_0 Z215));
static BOOLEAN Z228 ARGS ((BITSET Z229));
static void Z233 ARGS ((CHAR Z234[], LONGCARD O_1));
static BOOLEAN Z237 ARGS ((BYTE Z238[], LONGCARD O_3, BYTE Z239[], LONGCARD O_2));
struct S_26 {
union {
struct {
struct S_27 {
BOOLEAN Y0;
} Y0;
} V_1;
} U_1;
};
static void Z269 ARGS ((Zq0A4_153 Z242));
struct S_24 {
union {
struct {
struct S_25 {
BOOLEAN Y0;
} Y0;
} V_1;
} U_1;
};
static void Z263 ARGS ((Zq0A4_153 Z242));
struct S_23 {
union {
char dummy;
} U_1;
};
static void Z264 ARGS ((Zq0A4_153 Z242));
struct S_22 {
union {
char dummy;
} U_1;
};
static void Z276 ARGS ((Zq0A4_153 Z242));
struct S_21 {
union {
char dummy;
} U_1;
};
static void Z250 ARGS ((Zq0A4_153 Z242));
struct S_20 {
union {
char dummy;
} U_1;
};
static void Z265 ARGS ((Zq0A4_153 Z242));
struct S_19 {
union {
char dummy;
} U_1;
};
static void Z298 ARGS ((Zq0A4_153 Z242));
struct S_18 {
union {
char dummy;
} U_1;
};
static void Z297 ARGS ((Zq0A4_153 Z242));
struct S_17 {
union {
char dummy;
} U_1;
};
static void Z299 ARGS ((Zq0A4_153 Z242));
struct S_16 {
union {
char dummy;
} U_1;
};
static void Z248 ARGS ((Zq0A4_153 Z242));
struct S_15 {
union {
char dummy;
} U_1;
};
static void Z251 ARGS ((Zq0A4_153 Z242));
struct S_14 {
union {
char dummy;
} U_1;
};
static void Z300 ARGS ((Zq0A4_153 Z242));
struct S_13 {
union {
char dummy;
} U_1;
};
static void Z271 ARGS ((Zq0A4_153 Z242));
struct S_12 {
union {
char dummy;
} U_1;
};
static BOOLEAN Z273 ARGS ((Zq0A4_153 Z302, INTEGER Z189, INTEGER Z190));
struct S_11 {
union {
char dummy;
} U_1;
};
static BOOLEAN Z303 ARGS ((Zq0A4_153 Z304, INTEGER Z305));
struct S_10 {
union {
char dummy;
} U_1;
};
static void Z275 ARGS ((Zq0A4_153 Z242));
struct S_8 {
union {
struct {
struct S_9 {
SHORTCARD Y0;
} Y0;
} V_1;
} U_1;
};
static BOOLEAN Z268 ARGS ((Zq0A4_153 Z242));
struct S_7 {
union {
char dummy;
} U_1;
};
static BOOLEAN Z307 ARGS ((Zq0A4_153 Z308));
struct S_6 {
union {
char dummy;
} U_1;
};
static BOOLEAN Z306 ARGS ((Zq0A4_153 Z242));
struct S_5 {
union {
char dummy;
} U_1;
};
static BOOLEAN Z274 ARGS ((Zq0A4_153 Z242));
struct S_4 {
union {
char dummy;
} U_1;
};
static void Z309 ARGS ((Zq0A4_153 Z242));
struct S_2 {
union {
struct {
struct S_3 {
SHORTCARD Y0;
} Y0;
} V_1;
} U_1;
};
static Zfb3DLQ_0 Z249 ARGS ((Zq0A4_153 Z310));
struct S_1 {
union {
char dummy;
} U_1;
};
static void Z313 ARGS ((void));

static CARDINAL Z207
# ifdef HAVE_ARGS
(CARDINAL Z193)
# else
(Z193)
CARDINAL Z193;
# endif
{
ZpmCQ_4 Z208;
CARDINAL Z209;
BOOLEAN Z210;
CARDINAL Z194, Z195;

{
register Zq0A4_226 *W_1 = &Z199->U_1.V_5.Y4;

ZpmCQ_5(&Z208, (LONGCARD)W_1->Y14);
ZpmCQ_13(&Z208, Z193);
do {
Z210 = TRUE;
{
LONGCARD B_1 = 1, B_2 = W_1->Y14;

if (B_1 <= B_2)
for (Z194 = B_1;; Z194 += 1) {
if (ZpmCQ_25(Z194, &Z208)) {
if (IN(Zq0A4_22, W_1->Y15->A[Z194 - 1].Y3)) {
Z195 = W_1->Y15->A[Z194 - 1].Y5;
if (IN(Zq0A4_11, W_1->Y15->A[Z195 - 1].Y1->U_1.V_11.Y10.Y6) && !ZpmCQ_25(Z195, &Z208)) {
ZpmCQ_13(&Z208, Z195);
Z210 = FALSE;
}
}
if (IN(Zq0A4_23, W_1->Y15->A[Z194 - 1].Y3)) {
{
LONGCARD B_3 = 1, B_4 = W_1->Y14;

if (B_3 <= B_4)
for (Z195 = B_3;; Z195 += 1) {
if (IN(Zq0A4_22, W_1->Y15->A[Z195 - 1].Y3) && IN(Zq0A4_11, W_1->Y15->A[Z195 - 1].Y1->U_1.V_11.Y10.Y6) && W_1->Y15->A[Z195 - 1].Y5 == Z194 && !ZpmCQ_25(Z195, &Z208)) {
ZpmCQ_13(&Z208, Z195);
Z210 = FALSE;
}
if (Z195 >= B_4) break;
}
}
}
}
if (Z194 >= B_2) break;
}
}
} while (!Z210);
Z209 = ZpmCQ_17(&Z208);
if (Z209 <= W_1->Y13) {
Z210 = TRUE;
Z194 = Z209 + 1;
for (;;) {
if (Z194 > W_1->Y13) {
goto EXIT_1;
}
if (ZpmCQ_25(Z194, &Z208)) {
Z210 = FALSE;
goto EXIT_1;
}
INC(Z194);
} EXIT_1:;
if (!Z210) {
Z194 = 1;
for (;;) {
Z195 = W_1->Y15->A[Z194 - 1].Y4;
if (Z195 <= W_1->Y13 && ZpmCQ_25(Z195, &Z208)) {
Z209 = Z195;
goto EXIT_2;
}
INC(Z194);
} EXIT_2:;
}
}
ZpmCQ_7(&Z208);
return Z209;
}
}

static void Z218
# ifdef HAVE_ARGS
(CARDINAL Z193, BOOLEAN Z219, BOOLEAN Z220)
# else
(Z193, Z219, Z220)
CARDINAL Z193;
BOOLEAN Z219;
BOOLEAN Z220;
# endif
{
if (Z219) {
{
register Zq0A4_199 *W_2 = &Z199->U_1.V_5.Y4.Y15->A[Z193 - 1];

if (IN(Zq0A4_11, W_2->Y1->U_1.V_11.Y10.Y6) && ((SET_ELEM (Zq0A4_22) | SET_ELEM (Zq0A4_23)) & W_2->Y3) != 0X0L) {
Z193 = Z207(Z193);
}
}
}
{
register Zq0A4_199 *W_3 = &Z199->U_1.V_5.Y4.Y15->A[Z193 - 1];

if (IN(Zq0A4_1, W_3->Y3)) {
return;
}
if (IN(Zq0A4_20, W_3->Y3)) {
{
register Zq0A4_232 *W_4 = &W_3->Y1->U_1.V_11.Y10;

if (IN(Zq0A4_11, W_4->Y6)) {
if (Zq0A4_183(Z197, W_4->Y3) == Zq0A4_97) {
Zq0A4_192(Z199->U_1.V_5.Y4.Y1);
ZfM_29(Zq0A4_172, (STRING)"yy", 2L);
Zq0A4_192(W_4->Y3);
} else if (IN(Zq0A4_6, W_4->Y6)) {
ZfM_29(Zq0A4_172, (STRING)"yy", 2L);
Zq0A4_192(W_4->Y3);
} else if (Z220) {
ZfM_29(Zq0A4_172, (STRING)"[] yy", 5L);
Zq0A4_192(W_4->Y3);
} else {
ZfM_29(Zq0A4_172, (STRING)"yy", 2L);
Zq0A4_192(W_4->Y3);
ZfM_29(Zq0A4_172, (STRING)"[0]", 3L);
}
} else if (IN(Zq0A4_14, W_4->Y6)) {
if (IN(Zq0A4_15, W_4->Y6)) {
Z201 = Z222(Z199, W_4->Y3);
ZfM_29(Zq0A4_172, (STRING)"y", 1L);
Zq0A4_192(Z201->U_1.V_5.Y4.Y1);
ZfM_29(Zq0A4_172, (STRING)"y", 1L);
Zq0A4_192(W_4->Y3);
ZfM_29(Zq0A4_172, (STRING)"(yyt)", 5L);
} else if (Z193 != Z195) {
Zq0A4_192(Z199->U_1.V_5.Y4.Y1);
ZfM_29(Zq0A4_172, (STRING)"yy", 2L);
Zq0A4_192(W_4->Y3);
if (!IN(Zq0A4_6, W_4->Y6)) {
ZfM_29(Zq0A4_172, (STRING)"[0]", 3L);
}
} else {
ZfM_29(Zq0A4_172, (STRING)"(yy", 3L);
Zq0A4_192(W_4->Y3);
ZfM_29(Zq0A4_172, (STRING)"[0])", 4L);
}
} else {
ZfM_29(Zq0A4_172, (STRING)"((", 2L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(Z199->U_1.V_5.Y4.Y1);
ZfM_29(Zq0A4_172, (STRING)") yyt).", 7L);
Zq0A4_192(W_4->Y3);
}
}
} else {
{
register Zq0A4_232 *W_5 = &W_3->Y1->U_1.V_11.Y10;

if (IN(Zq0A4_11, W_5->Y6)) {
Zq0A4_192(Z199->U_1.V_5.Y4.Y1);
ZfM_29(Zq0A4_172, (STRING)"y", 1L);
Zq0A4_192(W_3->Y0->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)"y", 1L);
Zq0A4_192(W_5->Y3);
if (!IN(Zq0A4_6, W_5->Y6) && !Z220) {
ZfM_29(Zq0A4_172, (STRING)"[0]", 3L);
}
ZfM_29(Zq0A4_172, (STRING)"/*", 2L);
if (IN(Zq0A4_6, W_5->Y6)) {
ZfM_29(Zq0A4_172, (STRING)"Inh ", 4L);
}
if (Z220) {
ZfM_29(Zq0A4_172, (STRING)"Decl ", 5L);
}
if (Z219) {
ZfM_29(Zq0A4_172, (STRING)"repr", 4L);
}
ZfM_29(Zq0A4_172, (STRING)"*/", 2L);
ZfM_33(Zq0A4_172);
} else if (IN(Zq0A4_14, W_5->Y6)) {
if (IN(Zq0A4_15, W_5->Y6)) {
Z201 = Z222(W_3->Y0->U_1.V_10.Y9.Y8, W_5->Y3);
ZfM_29(Zq0A4_172, (STRING)"y", 1L);
Zq0A4_192(Z201->U_1.V_5.Y4.Y1);
ZfM_29(Zq0A4_172, (STRING)"y", 1L);
Zq0A4_192(W_5->Y3);
ZfM_29(Zq0A4_172, (STRING)"(((", 3L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(Z199->U_1.V_5.Y4.Y1);
ZfM_29(Zq0A4_172, (STRING)") yyt).", 7L);
Zq0A4_192(W_3->Y0->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)")", 1L);
} else {
Zq0A4_192(Z199->U_1.V_5.Y4.Y1);
ZfM_29(Zq0A4_172, (STRING)"y", 1L);
Zq0A4_192(W_3->Y0->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)"y", 1L);
Zq0A4_192(W_5->Y3);
}
} else {
ZfM_29(Zq0A4_172, (STRING)"((", 2L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(Z199->U_1.V_5.Y4.Y1);
ZfM_29(Zq0A4_172, (STRING)") yyt).", 7L);
Zq0A4_192(W_3->Y0->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(W_3->Y0->U_1.V_10.Y9.Y4);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(W_5->Y3);
}
}
}
}
}

static Zq0A4_153 Z222
# ifdef HAVE_ARGS
(Zq0A4_153 Z199, Zfb3DLQ_0 Z215)
# else
(Z199, Z215)
Zq0A4_153 Z199;
Zfb3DLQ_0 Z215;
# endif
{
while (Z199->U_1.V_1.Y0 != Zq0A4_99) {
if (Zq0A4_183(Z199->U_1.V_5.Y4.Y3, Z215) != Zq0A4_97) {
return Z199;
}
Z199 = Z199->U_1.V_5.Y4.Y6;
}
return Zq0A4_97;
}

static BOOLEAN Z228
# ifdef HAVE_ARGS
(BITSET Z229)
# else
(Z229)
BITSET Z229;
# endif
{
SHORTCARD Z193, Z230;

{
SHORTCARD B_5 = Z189, B_6 = Z190;

if (B_5 <= B_6)
for (Z193 = B_5;; Z193 += 1) {
Z230 = Z199->U_1.V_5.Y4.Y15->A[Z193 - 1].Y4;
{
register Zq0A4_199 *W_6 = &Z199->U_1.V_5.Y4.Y15->A[Z230 - 1];

if (SET_IS_SUBSET1(SET_ELEM (Zq0A4_7) | SET_ELEM (Zq0A4_21) | SET_ELEM (Zq0A4_26), W_6->Y3) && Z202 == W_6->Y0 && W_6->Y1->U_1.V_10.Y9.Y11 <= W_6->Y0->U_1.V_10.Y9.Y8->U_1.V_5.Y4.Y22 && IN(W_6->Y1->U_1.V_10.Y9.Y11, Z229)) {
return TRUE;
}
if (SET_IS_SUBSET1(SET_ELEM (Zq0A4_6) | SET_ELEM (Zq0A4_21), W_6->Y3) && Z230 == Z194) {
return TRUE;
}
}
if (Z193 >= B_6) break;
}
}
return FALSE;
}

static void Z233
# ifdef HAVE_ARGS
(CHAR Z234[], LONGCARD O_1)
# else
(Z234, O_1)
CHAR Z234[];
LONGCARD O_1;
# endif
{
OPEN_ARRAY_LOCALS

ALLOC_OPEN_ARRAYS (O_1 * sizeof (CHAR), 1)
COPY_OPEN_ARRAY (Z234, O_1, CHAR)
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)"Error: module EvalJav2, routine ", 32L);
ZfM_29((ZDz6VQCC_4)ZfM_2, Z234, O_1);
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)" failed", 7L);
ZfM_33((ZDz6VQCC_4)ZfM_2);
(*ZbpA7kgAd_2)();
FREE_OPEN_ARRAYS
}

static BOOLEAN Z237
# ifdef HAVE_ARGS
(BYTE Z238[], LONGCARD O_3, BYTE Z239[], LONGCARD O_2)
# else
(Z238, O_3, Z239, O_2)
BYTE Z238[];
LONGCARD O_3;
BYTE Z239[];
LONGCARD O_2;
# endif
{
INTEGER Z240;
OPEN_ARRAY_LOCALS

ALLOC_OPEN_ARRAYS (O_2 * sizeof (WORD) + O_3 * sizeof (WORD), 2)
COPY_OPEN_ARRAY (Z239, O_2, WORD)
COPY_OPEN_ARRAY (Z238, O_3, WORD)
{
LONGINT B_7 = 0, B_8 = (INTEGER)(O_3 - 1);

if (B_7 <= B_8)
for (Z240 = B_7;; Z240 += 1) {
if (Z238[Z240] != Z239[Z240]) {
FREE_OPEN_ARRAYS
return FALSE;
}
if (Z240 >= B_8) break;
}
}
FREE_OPEN_ARRAYS
return TRUE;
}

void ZbpA7kgAd_3
# ifdef HAVE_ARGS
(Zq0A4_153 Z242)
# else
(Z242)
Zq0A4_153 Z242;
# endif
{
struct S_26 Z243;

if (Z242 == Zq0A4_97) {
return;
}
if (Z242 != NIL && Z242->U_1.V_1.Y0 == Zq0A4_127) {
{
register Zq0A4_253 *W_7 = &Z242->U_1.V_32.Y31;

ZbpA7kgAA_4(Z242);
if (!ZpmCQ_25(ORD('9'), &Zq0A4_171)) {
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"static void Eval (", 18L);
Zq0A4_192(Zq0A4_81);
ZfM_29(Zq0A4_172, (STRING)" yyt) {", 7L);
ZfM_33(Zq0A4_172);
Z197 = W_7->Y13;
Z199 = W_7->Y13;
Zq0A4_185(Z199, (Zq0A4_170)Z248);
ZfM_29(Zq0A4_172, (STRING)"", 1L);
if (Zq0A4_70 > 0) {
Z199 = W_7->Y13;
Z191 = 1;
ZfM_29(Zq0A4_172, (STRING)" yyVisit1", 9L);
Zq0A4_192(Z249(W_7->Y13));
ZfM_29(Zq0A4_172, (STRING)" (yyt", 5L);
Zq0A4_185(Z199, (Zq0A4_170)Z250);
ZfM_29(Zq0A4_172, (STRING)");", 2L);
}
ZfM_29(Zq0A4_172, (STRING)"}", 1L);
ZfM_33(Zq0A4_172);
} else {
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"int yyMinLow;", 13L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" void Eval (", 12L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)" yyt) {", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  boolean yyHigh;", 17L);
ZfM_33(Zq0A4_172);
Z197 = W_7->Y13;
Z199 = W_7->Y13;
Zq0A4_185(Z199, (Zq0A4_170)Z248);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" yyMinLow = MAX (int);", 22L);
ZfM_33(Zq0A4_172);
if (Zq0A4_70 > 0) {
Z199 = W_7->Y13;
Z191 = 1;
ZfM_29(Zq0A4_172, (STRING)" yyVisit1", 9L);
Zq0A4_192(Z249(W_7->Y13));
ZfM_29(Zq0A4_172, (STRING)" (yyt", 5L);
Zq0A4_185(Z199, (Zq0A4_170)Z250);
ZfM_29(Zq0A4_172, (STRING)");", 2L);
}
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" }", 2L);
ZfM_33(Zq0A4_172);
}
ZfM_33(Zq0A4_172);
Zq0A4_184(W_7->Y13, (Zq0A4_170)Z251);
Zq0A4_184(W_7->Y13, (Zq0A4_170)ZbpA7kgAd_3);
ZfM_29(Zq0A4_172, (STRING)" static void begin () {", 23L);
ZfM_33(Zq0A4_172);
Zq0A4dgAd_1(W_7->Y8->U_1.V_17.Y16.Y11);
ZqnGVQ_5(Zq0A4_172, W_7->Y8->U_1.V_17.Y16.Y5);
Z197 = W_7->Y14;
while (Z197->U_1.V_1.Y0 == Zq0A4_144) {
Zq0A4dgAd_1(Z197->U_1.V_49.Y48.Y8->U_1.V_17.Y16.Y11);
ZqnGVQ_5(Zq0A4_172, Z197->U_1.V_49.Y48.Y8->U_1.V_17.Y16.Y5);
Z197 = Z197->U_1.V_49.Y48.Y12;
}
ZfM_29(Zq0A4_172, (STRING)" }", 2L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" static void close () {", 23L);
ZfM_33(Zq0A4_172);
Zq0A4dgAd_1(W_7->Y8->U_1.V_17.Y16.Y12);
ZqnGVQ_5(Zq0A4_172, W_7->Y8->U_1.V_17.Y16.Y6);
Z197 = W_7->Y14;
while (Z197->U_1.V_1.Y0 == Zq0A4_144) {
Zq0A4dgAd_1(Z197->U_1.V_49.Y48.Y8->U_1.V_17.Y16.Y12);
ZqnGVQ_5(Zq0A4_172, Z197->U_1.V_49.Y48.Y8->U_1.V_17.Y16.Y6);
Z197 = Z197->U_1.V_49.Y48.Y12;
}
ZfM_29(Zq0A4_172, (STRING)" }", 2L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" static {", 9L);
ZfM_33(Zq0A4_172);
if (ZpmCQ_25(ORD('X'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)" yyf = IO.StdOutput;", 20L);
ZfM_33(Zq0A4_172);
}
ZfM_29(Zq0A4_172, (STRING)" }", 2L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"}", 1L);
ZfM_33(Zq0A4_172);
return;
}
}
if (Z242 != NIL && Z242->U_1.V_1.Y0 == Zq0A4_100) {
{
register struct S_27 *W_8 = &Z243.U_1.V_1.Y0;

for (;;) {
{
register Zq0A4_226 *W_9 = &Z242->U_1.V_5.Y4;

if (!((Zq0A4_177 & W_9->Y2) == 0X0L)) {
goto EXIT_3;
}
if (!IN(Zq0A4_36, W_9->Y2)) {
goto EXIT_3;
}
W_9->Y24 = 0;
Zq0A4_184(W_9->Y4, (Zq0A4_170)Z263);
{
SHORTCARD B_9 = 1, B_10 = W_9->Y22;

if (B_9 <= B_10)
for (Z191 = B_9;; Z191 += 1) {
ZfM_29(Zq0A4_172, (STRING)" private static void yyVisit", 28L);
Zq0A4_195((LONGINT)Z191);
Zq0A4_192(W_9->Y1);
ZfM_29(Zq0A4_172, (STRING)" (", 2L);
Zq0A4_192(Zq0A4_81);
ZfM_29(Zq0A4_172, (STRING)" yyt", 4L);
ZfM_33(Zq0A4_172);
Z197 = Z242;
Z199 = Z242;
Z200 = Z242;
Zq0A4_185(Z242, (Zq0A4_170)Z264);
ZfM_29(Zq0A4_172, (STRING)") {", 3L);
ZfM_33(Zq0A4_172);
Z197 = Z242;
Z265(Z242);
Zq0A4_184(W_9->Y4, (Zq0A4_170)Z265);
Zq0A4dgAd_1(Zq0A4_279->U_1.V_32.Y31.Y8->U_1.V_17.Y16.Y10);
ZqnGVQ_5(Zq0A4_172, Zq0A4_279->U_1.V_32.Y31.Y8->U_1.V_17.Y16.Y4);
Z197 = Zq0A4_279->U_1.V_32.Y31.Y14;
while (Z197->U_1.V_1.Y0 == Zq0A4_144) {
Zq0A4dgAd_1(Z197->U_1.V_49.Y48.Y8->U_1.V_17.Y16.Y10);
ZqnGVQ_5(Zq0A4_172, Z197->U_1.V_49.Y48.Y8->U_1.V_17.Y16.Y4);
Z197 = Z197->U_1.V_49.Y48.Y12;
}
if (ZpmCQ_25(ORD('9'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)" boolean yyLow;", 15L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  yyMinLow = General.min (yyMinLow, SYSTEM.ADR (yyLow));", 56L);
ZfM_33(Zq0A4_172);
}
W_8->Y0 = IN(Zq0A4_56, Zq0A4_69) && Z268(Z242);
if (W_8->Y0) {
ZfM_29(Zq0A4_172, (STRING)" for (;;) {", 11L);
ZfM_33(Zq0A4_172);
}
ZfM_29(Zq0A4_172, (STRING)"  switch (yyt.yyKind) {", 23L);
ZfM_33(Zq0A4_172);
if (IN(Zq0A4_56, Zq0A4_69)) {
Z197 = Z242;
Z269(Z242);
Zq0A4_184(W_9->Y4, (Zq0A4_170)Z269);
}
ZfM_29(Zq0A4_172, (STRING)"  default:", 10L);
ZfM_33(Zq0A4_172);
if (ZpmCQ_25(ORD('Z'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)"   yyVisitParent (yyt);", 23L);
ZfM_33(Zq0A4_172);
}
ZfM_29(Zq0A4_172, (STRING)"  }", 3L);
ZfM_33(Zq0A4_172);
if (W_8->Y0) {
ZfM_29(Zq0A4_172, (STRING)"  return;", 9L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" }", 2L);
ZfM_33(Zq0A4_172);
}
ZfM_29(Zq0A4_172, (STRING)" }", 2L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
if (Z191 >= B_10) break;
}
}
return;
}
} EXIT_3:;
}
}
}

static void Z269
# ifdef HAVE_ARGS
(Zq0A4_153 Z242)
# else
(Z242)
Zq0A4_153 Z242;
# endif
{
struct S_24 Z243;

for (;;) {
for (;;) {
if (Z242 == Zq0A4_97) {
return;
}
if (Z242 != NIL) {
switch (Z242->U_1.V_1.Y0) {
case Zq0A4_100:;
{
register struct S_25 *W_10 = &Z243.U_1.V_1.Y0;

for (;;) {
{
register Zq0A4_226 *W_11 = &Z242->U_1.V_5.Y4;

if (!((Zq0A4_177 & W_11->Y2) == 0X0L)) {
goto EXIT_6;
}
if (!(W_11->Y24 != W_11->Y14)) {
goto EXIT_6;
}
W_10->Y0 = FALSE;
ZfM_29(Zq0A4_172, (STRING)"case ", 5L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)".k", 2L);
Zq0A4_192(W_11->Y1);
ZfM_29(Zq0A4_172, (STRING)":", 1L);
ZfM_33(Zq0A4_172);
Z189 = W_11->Y24 + 1;
for (;;) {
if (W_11->Y24 == W_11->Y14) {
goto EXIT_7;
}
INC(W_11->Y24);
{
register Zq0A4_199 *W_12 = &W_11->Y15->A[W_11->Y15->A[W_11->Y24 - 1].Y4 - 1];

if (IN(Zq0A4_20, W_12->Y3) && W_12->Y1->U_1.V_10.Y9.Y11 > Z191) {
DEC(W_11->Y24);
goto EXIT_7;
}
}
} EXIT_7:;
Z190 = W_11->Y24;
Z199 = Z242;
{
SHORTCARD B_11 = Z189, B_12 = Z190;

if (B_11 <= B_12)
for (Z189 = B_11;; Z189 += 1) {
Z193 = W_11->Y15->A[Z189 - 1].Y4;
{
register Zq0A4_199 *W_13 = &W_11->Y15->A[Z193 - 1];

if (SET_IS_SUBSET1(SET_ELEM (Zq0A4_6) | SET_ELEM (Zq0A4_21) | SET_ELEM (Zq0A4_26), W_13->Y3) && ((SET_ELEM (Zq0A4_27) | SET_ELEM (Zq0A4_1) | SET_ELEM (Zq0A4_14)) & W_13->Y3) == 0X0L) {
Z271(Z242);
if (ZpmCQ_25(ORD('X'), &Zq0A4_171) && IN(Zq0A4_42, Z242->U_1.V_5.Y4.Y2)) {
ZfM_29(Zq0A4_172, (STRING)"yyWriteEval (yyt, '", 19L);
Zq0A4_192(W_13->Y0->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)":", 1L);
Zq0A4_192(W_13->Y1->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)"');", 3L);
ZfM_33(Zq0A4_172);
if (W_13->Y2 != (Zq0A4_153)ADR (W_13->Y2)) {
Z269(W_13->Y2);
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
Z218((LONGCARD)Z193, TRUE, FALSE);
ZfM_29(Zq0A4_172, (STRING)").yyWriteNl ();", 15L);
ZfM_33(Zq0A4_172);
} else if (ZpmCQ_25(ORD('Y'), &Zq0A4_171) && IN(Zq0A4_42, Z242->U_1.V_5.Y4.Y2)) {
ZfM_29(Zq0A4_172, (STRING)"yyWriteEval (yyt, '", 19L);
Zq0A4_192(W_13->Y0->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)":", 1L);
Zq0A4_192(W_13->Y1->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)"');", 3L);
ZfM_33(Zq0A4_172);
if (W_13->Y2 != (Zq0A4_153)ADR (W_13->Y2)) {
Z269(W_13->Y2);
}
} else {
if (W_13->Y2 != (Zq0A4_153)ADR (W_13->Y2)) {
Z269(W_13->Y2);
}
}
}
if (SET_IS_SUBSET1(SET_ELEM (Zq0A4_7) | SET_ELEM (Zq0A4_20) | SET_ELEM (Zq0A4_26), W_13->Y3) && ((SET_ELEM (Zq0A4_27) | SET_ELEM (Zq0A4_1) | SET_ELEM (Zq0A4_14)) & W_13->Y3) == 0X0L) {
Z271(Z242);
if (ZpmCQ_25(ORD('X'), &Zq0A4_171) && IN(Zq0A4_42, Z242->U_1.V_5.Y4.Y2)) {
ZfM_29(Zq0A4_172, (STRING)"yyWriteEval (yyt, '", 19L);
Zq0A4_192(W_13->Y1->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)"');", 3L);
ZfM_33(Zq0A4_172);
if (W_13->Y2 != (Zq0A4_153)ADR (W_13->Y2)) {
Z269(W_13->Y2);
}
ZfM_33(Zq0A4_172);
if (IN(Zq0A4_19, W_13->Y3)) {
ZfM_29(Zq0A4_172, (STRING)"writeBOOLEAN (yyb).yyWriteNl ();", 32L);
ZfM_33(Zq0A4_172);
} else if (W_13->Y1->U_1.V_1.Y0 == Zq0A4_105 || W_13->Y1->U_1.V_11.Y10.Y4 == Zq0A4_86) {
ZfM_29(Zq0A4_172, (STRING)"write", 5L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)"(", 1L);
Z218((LONGCARD)Z193, TRUE, FALSE);
ZfM_29(Zq0A4_172, (STRING)").yyWriteNl ();", 15L);
ZfM_33(Zq0A4_172);
} else {
ZfM_29(Zq0A4_172, (STRING)"write", 5L);
Zq0A4_192(W_13->Y1->U_1.V_10.Y9.Y4);
ZfM_29(Zq0A4_172, (STRING)"(", 1L);
Z218((LONGCARD)Z193, TRUE, FALSE);
ZfM_29(Zq0A4_172, (STRING)").yyWriteNl ();", 15L);
ZfM_33(Zq0A4_172);
}
} else if (ZpmCQ_25(ORD('Y'), &Zq0A4_171) && IN(Zq0A4_42, Z242->U_1.V_5.Y4.Y2)) {
ZfM_29(Zq0A4_172, (STRING)"yyWriteEval (yyt, '", 19L);
Zq0A4_192(W_13->Y1->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)"');", 3L);
ZfM_33(Zq0A4_172);
if (W_13->Y2 != (Zq0A4_153)ADR (W_13->Y2)) {
Z269(W_13->Y2);
}
} else {
if (W_13->Y2 != (Zq0A4_153)ADR (W_13->Y2)) {
Z269(W_13->Y2);
}
}
}
if (SET_IS_SUBSET1(SET_ELEM (Zq0A4_7) | SET_ELEM (Zq0A4_21) | SET_ELEM (Zq0A4_26), W_13->Y3) && W_13->Y1->U_1.V_10.Y9.Y11 <= W_13->Y0->U_1.V_10.Y9.Y8->U_1.V_5.Y4.Y22) {
if (ZpmCQ_25(ORD('Z'), &Zq0A4_171) && IN(Zq0A4_42, Z242->U_1.V_5.Y4.Y2)) {
ZfM_29(Zq0A4_172, (STRING)"yyWriteVisit (yyt, '", 20L);
Zq0A4_192(W_13->Y0->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)" ", 1L);
Zq0A4_195((LONGINT)W_13->Y1->U_1.V_10.Y9.Y11);
ZfM_29(Zq0A4_172, (STRING)"');", 3L);
ZfM_33(Zq0A4_172);
}
Z192 = W_13->Y1->U_1.V_10.Y9.Y11;
Z202 = W_13->Y0;
if (Z191 == Z192 && Z200->U_1.V_5.Y4.Y1 == Z202->U_1.V_10.Y9.Y4 && Z273(Z199, (LONGINT)(Z189 + 1), (LONGINT)Z190) && Z274(Z202->U_1.V_10.Y9.Y8)) {
ZfM_29(Zq0A4_172, (STRING)"  yyt = ((", 10L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(W_11->Y1);
ZfM_29(Zq0A4_172, (STRING)") yyt).", 7L);
Zq0A4_192(Z202->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
Zq0A4_185(Z202->U_1.V_10.Y9.Y8, (Zq0A4_170)Z275);
ZfM_29(Zq0A4_172, (STRING)"break;", 6L);
ZfM_33(Zq0A4_172);
W_10->Y0 = TRUE;
Z189 = Z190 + 1;
} else {
ZfM_29(Zq0A4_172, (STRING)"yyVisit", 7L);
Zq0A4_195((LONGINT)Z192);
Zq0A4_192(Z202->U_1.V_10.Y9.Y4);
ZfM_29(Zq0A4_172, (STRING)" (((", 4L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(W_11->Y1);
ZfM_29(Zq0A4_172, (STRING)") yyt).", 7L);
Zq0A4_192(Z202->U_1.V_10.Y9.Y3);
Zq0A4_185(Z202->U_1.V_10.Y9.Y8, (Zq0A4_170)Z276);
ZfM_29(Zq0A4_172, (STRING)");", 2L);
ZfM_33(Zq0A4_172);
}
}
}
if (Z189 >= B_12) break;
}
}
if (!W_10->Y0) {
if (ZpmCQ_25(ORD('Z'), &Zq0A4_171) && IN(Zq0A4_42, Z242->U_1.V_5.Y4.Y2)) {
ZfM_29(Zq0A4_172, (STRING)"yyVisitParent (yyt);", 20L);
ZfM_33(Zq0A4_172);
}
}
ZfM_29(Zq0A4_172, (STRING)"      break;", 12L);
ZfM_33(Zq0A4_172);
return;
}
} EXIT_6:;
}
break;
case Zq0A4_137:;
{
register Zq0A4_263 *W_14 = &Z242->U_1.V_42.Y41;

Zq0A4dgAd_1(W_14->Y2);
ZfM_29(Zq0A4_172, (STRING)"  ", 2L);
Z269(W_14->Y4);
ZfM_29(Zq0A4_172, (STRING)"=", 1L);
Z269(W_14->Y5);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
return;
}
break;
case Zq0A4_138:;
{
register Zq0A4_264 *W_15 = &Z242->U_1.V_43.Y42;

Z194 = Z199->U_1.V_5.Y4.Y15->A[Z193 - 1].Y5;
if (IN(Zq0A4_11, Z199->U_1.V_5.Y4.Y15->A[Z193 - 1].Y1->U_1.V_11.Y10.Y6) && IN(Zq0A4_11, Z199->U_1.V_5.Y4.Y15->A[Z194 - 1].Y1->U_1.V_11.Y10.Y6)) {
if (IN(Zq0A4_20, Z199->U_1.V_5.Y4.Y15->A[Z193 - 1].Y3) && IN(Zq0A4_20, Z199->U_1.V_5.Y4.Y15->A[Z194 - 1].Y3)) {
Zq0A4dgAd_1(W_15->Y2);
Z218((LONGCARD)Z193, FALSE, FALSE);
ZfM_29(Zq0A4_172, (STRING)" = ", 3L);
Z269(W_15->Y5);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
}
} else {
Zq0A4dgAd_1(W_15->Y2);
Z269(W_15->Y4);
ZfM_29(Zq0A4_172, (STRING)"=", 1L);
Z269(W_15->Y5);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
}
return;
}
break;
case Zq0A4_139:;
{
register Zq0A4_265 *W_16 = &Z242->U_1.V_44.Y43;

Zq0A4dgAd_1(W_16->Y2);
Z269(W_16->Y5);
ZfM_33(Zq0A4_172);
return;
}
break;
case Zq0A4_141:;
{
register Zq0A4_267 *W_17 = &Z242->U_1.V_46.Y45;

Zq0A4dgAd_1(W_17->Y2);
if (W_17->Y4 != Zq0A4_97) {
if (ZpmCQ_25(ORD('X'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)"yyb = ", 6L);
Z269(W_17->Y4);
ZfM_29(Zq0A4_172, (STRING)"; if (!yyb) {", 13L);
} else {
ZfM_29(Zq0A4_172, (STRING)"if (! (", 7L);
ZfM_33(Zq0A4_172);
Z269(W_17->Y4);
ZfM_29(Zq0A4_172, (STRING)")) { ", 5L);
}
Z269(W_17->Y5);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
if (W_17->Y6->U_1.V_1.Y0 == Zq0A4_141) {
ZfM_29(Zq0A4_172, (STRING)"} else { ", 9L);
Z269(W_17->Y6);
}
ZfM_29(Zq0A4_172, (STRING)"}", 1L);
ZfM_33(Zq0A4_172);
} else {
if (ZpmCQ_25(ORD('X'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)"yyb = false; ", 13L);
}
Z269(W_17->Y5);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
Z269(W_17->Y6);
}
return;
}
break;
case Zq0A4_116:;
{
register Zq0A4_242 *W_18 = &Z242->U_1.V_21.Y20;

Z203 = Zq0A4_183(Z199, W_18->Y2);
if (Z203 != Zq0A4_97) {
Z204 = Z203->U_1.V_10.Y9.Y8;
Z198 = Zq0A4_183(Z204, W_18->Y3);
if (Z198 != Zq0A4_97) {
Z218((LONGCARD)(Z199->U_1.V_5.Y4.Y13 + Z203->U_1.V_10.Y9.Y13 + Z198->U_1.V_11.Y10.Y10), TRUE, FALSE);
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
Z242 = W_18->Y1;
goto EXIT_5;
}
break;
case Zq0A4_117:;
{
register Zq0A4_243 *W_19 = &Z242->U_1.V_22.Y21;

Z198 = Zq0A4_183(Z199, W_19->Y2);
if (Z198 != Zq0A4_97) {
Z218((LONGCARD)Z198->U_1.V_11.Y10.Y10, TRUE, FALSE);
} else {
Zq0A4_192(W_19->Y2);
}
Z242 = W_19->Y1;
goto EXIT_5;
}
break;
case Zq0A4_119:;
{
register Zq0A4_245 *W_20 = &Z242->U_1.V_24.Y23;

Zp1PEAFi_6(Zq0A4_172, W_20->Y2);
Z242 = W_20->Y1;
goto EXIT_5;
}
break;
case Zq0A4_120:;
{
register Zq0A4_246 *W_21 = &Z242->U_1.V_25.Y24;

Z269(W_21->Y2);
Z242 = W_21->Y1;
goto EXIT_5;
}
break;
case Zq0A4_123:;
{
register Zq0A4_249 *W_22 = &Z242->U_1.V_28.Y27;

Zp1PEAFi_6(Zq0A4_172, W_22->Y1);
Z242 = W_22->Y2;
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

static void Z263
# ifdef HAVE_ARGS
(Zq0A4_153 Z242)
# else
(Z242)
Zq0A4_153 Z242;
# endif
{
struct S_23 Z243;

if (Z242 == Zq0A4_97) {
return;
}
if (Z242 != NIL && Z242->U_1.V_1.Y0 == Zq0A4_100) {
{
register Zq0A4_226 *W_23 = &Z242->U_1.V_5.Y4;

W_23->Y24 = 0;
return;
}
}
}

static void Z264
# ifdef HAVE_ARGS
(Zq0A4_153 Z242)
# else
(Z242)
Zq0A4_153 Z242;
# endif
{
struct S_22 Z243;

if (Z242 == Zq0A4_97) {
return;
}
if (Z242 != NIL && Z242->U_1.V_1.Y0 == Zq0A4_106) {
for (;;) {
{
register Zq0A4_232 *W_24 = &Z242->U_1.V_11.Y10;

if (!(IN(Zq0A4_11, W_24->Y6) && IN(Z191, W_24->Y12))) {
goto EXIT_8;
}
ZfM_29(Zq0A4_172, (STRING)", ", 2L);
if (IN(Zq0A4_7, W_24->Y6)) {
ZfM_29(Zq0A4_172, (STRING)"", 1L);
}
Zq0A4_192(W_24->Y4);
ZfM_29(Zq0A4_172, (STRING)" ", 1L);
Z218((LONGCARD)W_24->Y10, FALSE, TRUE);
return;
}
} EXIT_8:;
}
}

static void Z276
# ifdef HAVE_ARGS
(Zq0A4_153 Z242)
# else
(Z242)
Zq0A4_153 Z242;
# endif
{
struct S_21 Z243;

if (Z242 == Zq0A4_97) {
return;
}
if (Z242 != NIL && Z242->U_1.V_1.Y0 == Zq0A4_106) {
for (;;) {
{
register Zq0A4_232 *W_25 = &Z242->U_1.V_11.Y10;

if (!(IN(Zq0A4_11, W_25->Y6) && IN(Z192, W_25->Y12))) {
goto EXIT_9;
}
ZfM_29(Zq0A4_172, (STRING)", ", 2L);
Z218((LONGCARD)(Z199->U_1.V_5.Y4.Y13 + Z202->U_1.V_10.Y9.Y13 + W_25->Y10), TRUE, TRUE);
ZfM_29(Zq0A4_172, (STRING)"//was not isDecl", 16L);
ZfM_33(Zq0A4_172);
return;
}
} EXIT_9:;
}
}

static void Z250
# ifdef HAVE_ARGS
(Zq0A4_153 Z242)
# else
(Z242)
Zq0A4_153 Z242;
# endif
{
struct S_20 Z243;

if (Z242 == Zq0A4_97) {
return;
}
if (Z242 != NIL && Z242->U_1.V_1.Y0 == Zq0A4_106) {
for (;;) {
{
register Zq0A4_232 *W_26 = &Z242->U_1.V_11.Y10;

if (!(IN(Zq0A4_11, W_26->Y6) && IN(Z191, W_26->Y12))) {
goto EXIT_10;
}
if (IN(Zq0A4_6, W_26->Y6)) {
ZblNKKO_45((STRING)"inherited attribute at root node", 32L, (LONGCARD)ZblNKKO_16, W_26->Y9, (LONGCARD)ZblNKKO_34, ADR (W_26->Y3));
INC(Zq0A4_0);
}
ZfM_29(Zq0A4_172, (STRING)", ", 2L);
Z218((LONGCARD)W_26->Y10, FALSE, FALSE);
return;
}
} EXIT_10:;
}
}

static void Z265
# ifdef HAVE_ARGS
(Zq0A4_153 Z242)
# else
(Z242)
Zq0A4_153 Z242;
# endif
{
struct S_19 Z243;

if (Z242 == Zq0A4_97) {
return;
}
if (Z242 != NIL && Z242->U_1.V_1.Y0 == Zq0A4_100) {
for (;;) {
{
register Zq0A4_226 *W_27 = &Z242->U_1.V_5.Y4;

if (!((Zq0A4_177 & W_27->Y2) == 0X0L)) {
goto EXIT_11;
}
Z189 = W_27->Y24 + 1;
for (;;) {
if (W_27->Y24 == W_27->Y14) {
goto EXIT_12;
}
INC(W_27->Y24);
{
register Zq0A4_199 *W_28 = &W_27->Y15->A[W_27->Y15->A[W_27->Y24 - 1].Y4 - 1];

if (IN(Zq0A4_20, W_28->Y3) && W_28->Y1->U_1.V_10.Y9.Y11 > Z191) {
DEC(W_27->Y24);
goto EXIT_12;
}
}
} EXIT_12:;
Z190 = W_27->Y24;
W_27->Y24 = Z189 - 1;
Z188 = 0;
Z199 = Z242;
Zq0A4_185(Z242, (Zq0A4_170)Z297);
if (Z188 > 0) {
Z199 = Z242;
Zq0A4_185(Z242, (Zq0A4_170)Z265);
}
return;
}
} EXIT_11:;
}
if (Z242 != NIL && Z242->U_1.V_1.Y0 == Zq0A4_105) {
{
register Zq0A4_231 *W_29 = &Z242->U_1.V_10.Y9;

Z202 = Z242;
Zq0A4_185(W_29->Y8, (Zq0A4_170)Z298);
return;
}
}
if (Z242 != NIL && Z242->U_1.V_1.Y0 == Zq0A4_106) {
for (;;) {
{
register Zq0A4_232 *W_30 = &Z242->U_1.V_11.Y10;

if (!(IN(Zq0A4_11, W_30->Y6) && Zq0A4_183(Z197, W_30->Y3) == Zq0A4_97 && IN(Z191, W_30->Y12) || IN(Zq0A4_14, W_30->Y6) && !IN(Zq0A4_15, W_30->Y6) && W_30->Y10 != Z195)) {
goto EXIT_13;
}
ZfM_29(Zq0A4_172, (STRING)"  ", 2L);
Zq0A4_192(W_30->Y4);
if (!IN(Zq0A4_6, W_30->Y6)) {
ZfM_29(Zq0A4_172, (STRING)"[]", 2L);
}
ZfM_29(Zq0A4_172, (STRING)" ", 1L);
Z218((LONGCARD)W_30->Y10, FALSE, FALSE);
if (!IN(Zq0A4_6, W_30->Y6)) {
ZfM_29(Zq0A4_172, (STRING)" = new ", 7L);
Zq0A4_192(W_30->Y4);
ZfM_29(Zq0A4_172, (STRING)"[1]", 3L);
}
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
return;
}
} EXIT_13:;
}
}

static void Z298
# ifdef HAVE_ARGS
(Zq0A4_153 Z242)
# else
(Z242)
Zq0A4_153 Z242;
# endif
{
struct S_18 Z243;

if (Z242 == Zq0A4_97) {
return;
}
if (Z242 != NIL && Z242->U_1.V_1.Y0 == Zq0A4_106) {
for (;;) {
{
register Zq0A4_232 *W_31 = &Z242->U_1.V_11.Y10;

if (!(IN(Zq0A4_11, W_31->Y6) || IN(Zq0A4_14, W_31->Y6) && !IN(Zq0A4_15, W_31->Y6))) {
goto EXIT_14;
}
Z194 = Z199->U_1.V_5.Y4.Y13 + Z202->U_1.V_10.Y9.Y13 + W_31->Y10;
if (!(IN(Zq0A4_14, W_31->Y6) || ((SET_ELEM (Zq0A4_22) | SET_ELEM (Zq0A4_23)) & Z199->U_1.V_5.Y4.Y15->A[Z194 - 1].Y3) == 0X0L || Z194 == Z207((LONGCARD)Z194))) {
goto EXIT_14;
}
if (!Z228(W_31->Y12)) {
goto EXIT_14;
}
ZfM_29(Zq0A4_172, (STRING)"  ", 2L);
Zq0A4_192(W_31->Y4);
if (!IN(Zq0A4_6, W_31->Y6)) {
ZfM_29(Zq0A4_172, (STRING)"[]", 2L);
}
ZfM_29(Zq0A4_172, (STRING)" ", 1L);
Z218((LONGCARD)Z194, FALSE, TRUE);
if (!IN(Zq0A4_6, W_31->Y6)) {
ZfM_29(Zq0A4_172, (STRING)" = new ", 7L);
Zq0A4_192(W_31->Y4);
ZfM_29(Zq0A4_172, (STRING)"[1]", 3L);
}
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
return;
}
} EXIT_14:;
}
}

static void Z297
# ifdef HAVE_ARGS
(Zq0A4_153 Z242)
# else
(Z242)
Zq0A4_153 Z242;
# endif
{
struct S_17 Z243;

if (Z242 == Zq0A4_97) {
return;
}
if (Z242 != NIL && Z242->U_1.V_1.Y0 == Zq0A4_105) {
{
register Zq0A4_231 *W_32 = &Z242->U_1.V_10.Y9;

Z202 = Z242;
Zq0A4_185(W_32->Y8, (Zq0A4_170)Z299);
return;
}
}
if (Z242 != NIL && Z242->U_1.V_1.Y0 == Zq0A4_106) {
for (;;) {
{
register Zq0A4_232 *W_33 = &Z242->U_1.V_11.Y10;

if (!(IN(Zq0A4_11, W_33->Y6) && Zq0A4_183(Z197, W_33->Y3) == Zq0A4_97 && IN(Z191, W_33->Y12) || IN(Zq0A4_14, W_33->Y6) && !IN(Zq0A4_15, W_33->Y6) && W_33->Y10 != Z195)) {
goto EXIT_15;
}
INC(Z188);
return;
}
} EXIT_15:;
}
}

static void Z299
# ifdef HAVE_ARGS
(Zq0A4_153 Z242)
# else
(Z242)
Zq0A4_153 Z242;
# endif
{
struct S_16 Z243;

if (Z242 == Zq0A4_97) {
return;
}
if (Z242 != NIL && Z242->U_1.V_1.Y0 == Zq0A4_106) {
for (;;) {
{
register Zq0A4_232 *W_34 = &Z242->U_1.V_11.Y10;

if (!(IN(Zq0A4_11, W_34->Y6) || IN(Zq0A4_14, W_34->Y6) && !IN(Zq0A4_15, W_34->Y6))) {
goto EXIT_16;
}
Z194 = Z199->U_1.V_5.Y4.Y13 + Z202->U_1.V_10.Y9.Y13 + W_34->Y10;
if (!(IN(Zq0A4_14, W_34->Y6) || ((SET_ELEM (Zq0A4_22) | SET_ELEM (Zq0A4_23)) & Z199->U_1.V_5.Y4.Y15->A[Z194 - 1].Y3) == 0X0L || Z194 == Z207((LONGCARD)Z194))) {
goto EXIT_16;
}
if (!Z228(W_34->Y12)) {
goto EXIT_16;
}
INC(Z188);
return;
}
} EXIT_16:;
}
}

static void Z248
# ifdef HAVE_ARGS
(Zq0A4_153 Z242)
# else
(Z242)
Zq0A4_153 Z242;
# endif
{
struct S_15 Z243;

if (Z242 == Zq0A4_97) {
return;
}
if (Z242 != NIL && Z242->U_1.V_1.Y0 == Zq0A4_106) {
for (;;) {
{
register Zq0A4_232 *W_35 = &Z242->U_1.V_11.Y10;

if (!IN(Zq0A4_11, W_35->Y6)) {
goto EXIT_17;
}
ZfM_29(Zq0A4_172, (STRING)"  ", 2L);
Zq0A4_192(W_35->Y4);
ZfM_29(Zq0A4_172, (STRING)" ", 1L);
Z218((LONGCARD)W_35->Y10, FALSE, FALSE);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
return;
}
} EXIT_17:;
}
}

static void Z251
# ifdef HAVE_ARGS
(Zq0A4_153 Z242)
# else
(Z242)
Zq0A4_153 Z242;
# endif
{
struct S_14 Z243;

if (Z242 == Zq0A4_97) {
return;
}
if (Z242 != NIL && Z242->U_1.V_1.Y0 == Zq0A4_100) {
for (;;) {
{
register Zq0A4_226 *W_36 = &Z242->U_1.V_5.Y4;

if (!((Zq0A4_177 & W_36->Y2) == 0X0L)) {
goto EXIT_18;
}
Z197 = Z242;
Zq0A4_185(W_36->Y3, (Zq0A4_170)Z251);
return;
}
} EXIT_18:;
}
if (Z242 != NIL && Z242->U_1.V_1.Y0 == Zq0A4_106) {
for (;;) {
{
register Zq0A4_232 *W_37 = &Z242->U_1.V_11.Y10;

if (!IN(Zq0A4_14, W_37->Y6)) {
goto EXIT_19;
}
Z199 = Z197;
Z195 = W_37->Y10;
if (IN(Zq0A4_15, W_37->Y6)) {
Zq0A4_192(W_37->Y4);
ZfM_29(Zq0A4_172, (STRING)" y", 2L);
Zq0A4_192(Z199->U_1.V_5.Y4.Y1);
ZfM_29(Zq0A4_172, (STRING)"y", 1L);
Zq0A4_192(W_37->Y3);
ZfM_29(Zq0A4_172, (STRING)" (", 2L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)" yyt);", 6L);
ZfM_33(Zq0A4_172);
} else {
ZfM_29(Zq0A4_172, (STRING)"void y", 6L);
Zq0A4_192(Z199->U_1.V_5.Y4.Y1);
ZfM_29(Zq0A4_172, (STRING)"y", 1L);
Zq0A4_192(W_37->Y3);
ZfM_29(Zq0A4_172, (STRING)" (", 2L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)"yyt, ", 5L);
Zq0A4_192(W_37->Y4);
ZfM_29(Zq0A4_172, (STRING)" ", 1L);
Z218((LONGCARD)W_37->Y10, FALSE, TRUE);
ZfM_29(Zq0A4_172, (STRING)");", 2L);
ZfM_33(Zq0A4_172);
}
ZfM_29(Zq0A4_172, (STRING)" class yyTempo", 14L);
ZfM_33(Zq0A4_172);
Z265(Z199);
Zq0A4_184(Z199->U_1.V_5.Y4.Y4, (Zq0A4_170)Z265);
ZfM_29(Zq0A4_172, (STRING)" }}", 3L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  switch (yyt.yyKind) {", 23L);
ZfM_33(Zq0A4_172);
if (IN(Zq0A4_56, Zq0A4_69)) {
Z193 = W_37->Y10;
Z199 = Z197;
Z300(Z199);
Zq0A4_184(Z199->U_1.V_5.Y4.Y4, (Zq0A4_170)Z300);
Z199 = Z197;
}
ZfM_29(Zq0A4_172, (STRING)"  default: break;", 17L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  }", 3L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" }", 2L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"}", 1L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
Z195 = 0;
return;
}
} EXIT_19:;
}
}

static void Z300
# ifdef HAVE_ARGS
(Zq0A4_153 Z242)
# else
(Z242)
Zq0A4_153 Z242;
# endif
{
struct S_13 Z243;

if (Z242 == Zq0A4_97) {
return;
}
if (Z242 != NIL && Z242->U_1.V_1.Y0 == Zq0A4_100) {
{
register Zq0A4_226 *W_38 = &Z242->U_1.V_5.Y4;

ZfM_29(Zq0A4_172, (STRING)"case ", 5L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(W_38->Y1);
ZfM_29(Zq0A4_172, (STRING)":", 1L);
ZfM_33(Zq0A4_172);
{
register Zq0A4_199 *W_39 = &W_38->Y15->A[Z193 - 1];

Z199 = Z242;
Z271(Z242);
if (IN(Zq0A4_15, W_39->Y3)) {
Z300(W_39->Y2);
} else {
Z269(W_39->Y2);
ZfM_33(Zq0A4_172);
}
}
ZfM_29(Zq0A4_172, (STRING)"break;", 6L);
ZfM_33(Zq0A4_172);
return;
}
}
if (Z242 != NIL && Z242->U_1.V_1.Y0 == Zq0A4_137) {
{
register Zq0A4_263 *W_40 = &Z242->U_1.V_42.Y41;

ZfM_29(Zq0A4_172, (STRING)"return ", 7L);
Z269(W_40->Y5);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
return;
}
}
if (Z242 != NIL && Z242->U_1.V_1.Y0 == Zq0A4_138) {
{
register Zq0A4_264 *W_41 = &Z242->U_1.V_43.Y42;

ZfM_29(Zq0A4_172, (STRING)"return ", 7L);
Z269(W_41->Y5);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
return;
}
}
if (Z242 != NIL && Z242->U_1.V_1.Y0 == Zq0A4_139) {
{
register Zq0A4_265 *W_42 = &Z242->U_1.V_44.Y43;

ZfM_29(Zq0A4_172, (STRING)"NoBlockStatementForDemandFunctionAttributes;", 44L);
ZfM_33(Zq0A4_172);
return;
}
}
}

static void Z271
# ifdef HAVE_ARGS
(Zq0A4_153 Z242)
# else
(Z242)
Zq0A4_153 Z242;
# endif
{
struct S_12 Z243;

if (Z242 == Zq0A4_97) {
return;
}
if (Z242 != NIL && Z242->U_1.V_1.Y0 == Zq0A4_100) {
{
register Zq0A4_226 *W_43 = &Z242->U_1.V_5.Y4;

{
SHORTCARD B_13 = 1, B_14 = W_43->Y14;

if (B_13 <= B_14)
for (Z194 = B_13;; Z194 += 1) {
{
register Zq0A4_199 *W_44 = &W_43->Y15->A[Z194 - 1];

if (ZolB7FGBG_9((LONGINT)Z193, (LONGINT)Z194, W_43->Y16) && IN(Zq0A4_14, W_44->Y3) && !IN(Zq0A4_15, W_44->Y3)) {
if (IN(Zq0A4_20, W_44->Y3)) {
Z201 = Z222(Z242, W_44->Y1->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)"   y", 4L);
Zq0A4_192(Z201->U_1.V_5.Y4.Y1);
ZfM_29(Zq0A4_172, (STRING)"y", 1L);
Zq0A4_192(W_44->Y1->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)"(yyt, ", 6L);
Z218((LONGCARD)Z194, FALSE, FALSE);
ZfM_29(Zq0A4_172, (STRING)");", 2L);
ZfM_33(Zq0A4_172);
} else {
Z201 = Z222(W_44->Y0->U_1.V_10.Y9.Y8, W_44->Y1->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)"   y", 4L);
Zq0A4_192(Z201->U_1.V_5.Y4.Y1);
ZfM_29(Zq0A4_172, (STRING)"y", 1L);
Zq0A4_192(W_44->Y1->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)"(((", 3L);
Zq0A4_192(W_43->Y1);
ZfM_29(Zq0A4_172, (STRING)") yyt).", 7L);
Zq0A4_192(W_44->Y0->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)", ", 2L);
Z218((LONGCARD)Z194, FALSE, FALSE);
ZfM_29(Zq0A4_172, (STRING)");", 2L);
ZfM_33(Zq0A4_172);
}
}
}
if (Z194 >= B_14) break;
}
}
return;
}
}
}

static BOOLEAN Z273
# ifdef HAVE_ARGS
(Zq0A4_153 Z302, INTEGER Z189, INTEGER Z190)
# else
(Z302, Z189, Z190)
Zq0A4_153 Z302;
INTEGER Z189;
INTEGER Z190;
# endif
{
INTEGER Z193, Z194;
struct S_11 Z243;

if (Z302 == Zq0A4_97) {
return FALSE;
}
{
register Zq0A4_226 *W_45 = &Z302->U_1.V_5.Y4;

{
LONGINT B_15 = Z189, B_16 = Z190;

if (B_15 <= B_16)
for (Z194 = B_15;; Z194 += 1) {
Z193 = W_45->Y15->A[Z194 - 1].Y4;
{
register Zq0A4_199 *W_46 = &W_45->Y15->A[Z193 - 1];

if (SET_IS_SUBSET1(SET_ELEM (Zq0A4_6) | SET_ELEM (Zq0A4_21) | SET_ELEM (Zq0A4_26), W_46->Y3) && ((SET_ELEM (Zq0A4_27) | SET_ELEM (Zq0A4_1) | SET_ELEM (Zq0A4_14)) & W_46->Y3) == 0X0L) {
if (W_46->Y2 != (Zq0A4_153)ADR (W_46->Y2) && !Z303(W_46->Y2, Z193)) {
return FALSE;
}
}
if (SET_IS_SUBSET1(SET_ELEM (Zq0A4_7) | SET_ELEM (Zq0A4_20) | SET_ELEM (Zq0A4_26), W_46->Y3) && ((SET_ELEM (Zq0A4_27) | SET_ELEM (Zq0A4_1) | SET_ELEM (Zq0A4_14)) & W_46->Y3) == 0X0L) {
if (W_46->Y2 != (Zq0A4_153)ADR (W_46->Y2) && !Z303(W_46->Y2, Z193)) {
return FALSE;
}
}
if (SET_IS_SUBSET1(SET_ELEM (Zq0A4_7) | SET_ELEM (Zq0A4_21) | SET_ELEM (Zq0A4_26), W_46->Y3) && W_46->Y1->U_1.V_10.Y9.Y11 <= W_46->Y0->U_1.V_10.Y9.Y8->U_1.V_5.Y4.Y22) {
return FALSE;
}
}
if (Z194 >= B_16) break;
}
}
return TRUE;
}
}

static BOOLEAN Z303
# ifdef HAVE_ARGS
(Zq0A4_153 Z304, INTEGER Z305)
# else
(Z304, Z305)
Zq0A4_153 Z304;
INTEGER Z305;
# endif
{
struct S_10 Z243;

if (Z304 == Zq0A4_97) {
return FALSE;
}
if (Z304 != NIL && Z304->U_1.V_1.Y0 == Zq0A4_138) {
for (;;) {
{
register Zq0A4_264 *W_47 = &Z304->U_1.V_43.Y42;

Z194 = Z199->U_1.V_5.Y4.Y15->A[Z305 - 1].Y5;
if (!(IN(Zq0A4_11, Z199->U_1.V_5.Y4.Y15->A[Z305 - 1].Y1->U_1.V_11.Y10.Y6) && IN(Zq0A4_11, Z199->U_1.V_5.Y4.Y15->A[Z194 - 1].Y1->U_1.V_11.Y10.Y6) && !(IN(Zq0A4_20, Z199->U_1.V_5.Y4.Y15->A[Z305 - 1].Y3) && IN(Zq0A4_20, Z199->U_1.V_5.Y4.Y15->A[Z194 - 1].Y3)))) {
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
(Zq0A4_153 Z242)
# else
(Z242)
Zq0A4_153 Z242;
# endif
{
struct S_8 Z243;

if (Z242 == Zq0A4_97) {
return;
}
if (Z242 != NIL && Z242->U_1.V_1.Y0 == Zq0A4_106) {
{
register struct S_9 *W_48 = &Z243.U_1.V_1.Y0;

for (;;) {
{
register Zq0A4_232 *W_49 = &Z242->U_1.V_11.Y10;

if (!(IN(Zq0A4_11, W_49->Y6) && IN(Z192, W_49->Y12))) {
goto EXIT_21;
}
W_48->Y0 = Z199->U_1.V_5.Y4.Y13 + Z202->U_1.V_10.Y9.Y13 + W_49->Y10;
{
register Zq0A4_199 *W_50 = &Z199->U_1.V_5.Y4.Y15->A[W_48->Y0 - 1];

if (((SET_ELEM (Zq0A4_22) | SET_ELEM (Zq0A4_23)) & W_50->Y3) != 0X0L) {
W_48->Y0 = Z207((LONGCARD)W_48->Y0);
}
}
if (!(W_49->Y10 != W_48->Y0)) {
goto EXIT_21;
}
ZfM_29(Zq0A4_172, (STRING)"yy", 2L);
Zq0A4_192(W_49->Y3);
ZfM_29(Zq0A4_172, (STRING)" = ", 3L);
Z218((LONGCARD)W_48->Y0, TRUE, FALSE);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
if (W_49->Y10 != W_48->Y0) {
if (IN(Zq0A4_6, W_49->Y6)) {
ZfM_29(Zq0A4_172, (STRING)"yy", 2L);
Zq0A4_192(W_49->Y3);
ZfM_29(Zq0A4_172, (STRING)" = ", 3L);
Z218((LONGCARD)W_48->Y0, TRUE, FALSE);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
} else {
ZfM_29(Zq0A4_172, (STRING)"yy", 2L);
Zq0A4_192(W_49->Y3);
ZfM_29(Zq0A4_172, (STRING)" = new ", 7L);
Zq0A4_192(W_49->Y4);
ZfM_29(Zq0A4_172, (STRING)"[] {", 4L);
Z218((LONGCARD)W_48->Y0, TRUE, FALSE);
ZfM_29(Zq0A4_172, (STRING)"};", 2L);
ZfM_33(Zq0A4_172);
}
}
return;
}
} EXIT_21:;
}
}
}

static BOOLEAN Z268
# ifdef HAVE_ARGS
(Zq0A4_153 Z242)
# else
(Z242)
Zq0A4_153 Z242;
# endif
{
struct S_7 Z243;

if (Z242 == Zq0A4_97) {
return FALSE;
}
for (;;) {
{
register Zq0A4_226 *W_51 = &Z242->U_1.V_5.Y4;

if (!(Z306(Z242) || Z307(W_51->Y4))) {
goto EXIT_22;
}
return TRUE;
}
} EXIT_22:;
return FALSE;
}

static BOOLEAN Z307
# ifdef HAVE_ARGS
(Zq0A4_153 Z308)
# else
(Z308)
Zq0A4_153 Z308;
# endif
{
struct S_6 Z243;

if (Z308 == Zq0A4_97) {
return FALSE;
}
if (Z308 != NIL && Z308->U_1.V_1.Y0 == Zq0A4_100) {
for (;;) {
{
register Zq0A4_226 *W_52 = &Z308->U_1.V_5.Y4;

if (!(Z268(Z308) || Z307(W_52->Y5))) {
goto EXIT_23;
}
return TRUE;
}
} EXIT_23:;
}
return FALSE;
}

static BOOLEAN Z306
# ifdef HAVE_ARGS
(Zq0A4_153 Z242)
# else
(Z242)
Zq0A4_153 Z242;
# endif
{
struct S_5 Z243;

if (Z242 == Zq0A4_97) {
return FALSE;
}
for (;;) {
{
register Zq0A4_226 *W_53 = &Z242->U_1.V_5.Y4;

if (!((Zq0A4_177 & W_53->Y2) == 0X0L)) {
goto EXIT_24;
}
if (!(W_53->Y24 != W_53->Y14)) {
goto EXIT_24;
}
Z199 = Z242;
Z190 = W_53->Y24;
for (;;) {
if (Z190 == W_53->Y14) {
goto EXIT_25;
}
INC(Z190);
{
register Zq0A4_199 *W_54 = &W_53->Y15->A[W_53->Y15->A[Z190 - 1].Y4 - 1];

if (IN(Zq0A4_20, W_54->Y3) && W_54->Y1->U_1.V_10.Y9.Y11 > Z191) {
DEC(Z190);
goto EXIT_25;
}
}
} EXIT_25:;
{
SHORTCARD B_17 = W_53->Y24 + 1, B_18 = Z190;

if (B_17 <= B_18)
for (Z189 = B_17;; Z189 += 1) {
Z193 = W_53->Y15->A[Z189 - 1].Y4;
{
register Zq0A4_199 *W_55 = &W_53->Y15->A[Z193 - 1];

if (SET_IS_SUBSET1(SET_ELEM (Zq0A4_7) | SET_ELEM (Zq0A4_21) | SET_ELEM (Zq0A4_26), W_55->Y3) && W_55->Y1->U_1.V_10.Y9.Y11 <= W_55->Y0->U_1.V_10.Y9.Y8->U_1.V_5.Y4.Y22) {
Z192 = W_55->Y1->U_1.V_10.Y9.Y11;
Z202 = W_55->Y0;
if (Z191 == Z192 && Z200->U_1.V_5.Y4.Y1 == Z202->U_1.V_10.Y9.Y4 && Z273(Z199, (LONGINT)(Z189 + 1), (LONGINT)Z190)) {
return TRUE;
}
}
}
if (Z189 >= B_18) break;
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
(Zq0A4_153 Z242)
# else
(Z242)
Zq0A4_153 Z242;
# endif
{
struct S_4 Z243;

if (Z242 == Zq0A4_97) {
return FALSE;
}
for (;;) {
{
register Zq0A4_226 *W_56 = &Z242->U_1.V_5.Y4;

Z205 = TRUE;
Z196 = W_56->Y14;
ZpmCQ_5(&Z206, (LONGCARD)W_56->Y14);
Zq0A4_185(Z242, (Zq0A4_170)Z309);
ZpmCQ_7(&Z206);
if (!Z205) {
goto EXIT_26;
}
return TRUE;
}
} EXIT_26:;
return FALSE;
}

static void Z309
# ifdef HAVE_ARGS
(Zq0A4_153 Z242)
# else
(Z242)
Zq0A4_153 Z242;
# endif
{
struct S_2 Z243;

if (Z242 == Zq0A4_97) {
return;
}
if (Z242 != NIL && Z242->U_1.V_1.Y0 == Zq0A4_106) {
{
register struct S_3 *W_57 = &Z243.U_1.V_1.Y0;

for (;;) {
{
register Zq0A4_232 *W_58 = &Z242->U_1.V_11.Y10;

if (!(IN(Zq0A4_11, W_58->Y6) && IN(Z192, W_58->Y12))) {
goto EXIT_27;
}
W_57->Y0 = Z199->U_1.V_5.Y4.Y13 + Z202->U_1.V_10.Y9.Y13 + W_58->Y10;
{
register Zq0A4_199 *W_59 = &Z199->U_1.V_5.Y4.Y15->A[W_57->Y0 - 1];

if (((SET_ELEM (Zq0A4_22) | SET_ELEM (Zq0A4_23)) & W_59->Y3) != 0X0L) {
W_57->Y0 = Z207((LONGCARD)W_57->Y0);
}
}
if (W_58->Y10 != W_57->Y0) {
if (W_57->Y0 <= Z196 && ZpmCQ_25((LONGCARD)W_57->Y0, &Z206)) {
Z205 = FALSE;
}
ZpmCQ_13(&Z206, (LONGCARD)W_58->Y10);
}
return;
}
} EXIT_27:;
}
}
}

static Zfb3DLQ_0 Z249
# ifdef HAVE_ARGS
(Zq0A4_153 Z310)
# else
(Z310)
Zq0A4_153 Z310;
# endif
{
struct S_1 Z243;

for (;;) {
for (;;) {
if (Z310 != NIL && Z310->U_1.V_1.Y0 == Zq0A4_100) {
for (;;) {
{
register Zq0A4_226 *W_60 = &Z310->U_1.V_5.Y4;

if (!((Zq0A4_177 & W_60->Y2) == 0X0L)) {
goto EXIT_30;
}
return W_60->Y1;
}
} EXIT_30:;
Z310 = Z310->U_1.V_5.Y4.Y5;
goto EXIT_29;
}
Z233((STRING)"GetName", 7L);
} EXIT_29:;
} EXIT_28:;
}

void ZbpA7kgAd_4
 ARGS ((void))
{
Z195 = 0;
}

void ZbpA7kgAd_5
 ARGS ((void))
{
}

static void Z313
 ARGS ((void))
{
ZfM_34();
rExit(1L);
}

void BEGIN_EvalJav2 ARGS ((void))
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
BEGIN_TreeJav2 ();
BEGIN_EvalJava ();
BEGIN_Tree ();
BEGIN_Errors ();

ZbpA7kgAd_0 = ZfM_1;
ZbpA7kgAd_2 = Z313;
ZbpA7kgAd_4();
}
