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

#ifndef DEFINITION_TreeJav1
#include "TreeJav1.h"
#endif

#ifndef DEFINITION_TreeJav2
#include "TreeJav2.h"
#endif

#ifndef DEFINITION_EvalJava
#include "EvalJava.h"
#endif

#ifndef DEFINITION_Errors
#include "Errors.h"
#endif

#ifndef DEFINITION_Position
#include "Position.h"
#endif

#ifndef DEFINITION_EvalJava
#include "EvalJava.h"
#endif

#ifndef DEFINITION_Tree
#include "Tree.h"
#endif

#ifndef DEFINITION_EvalJav3
#include "EvalJav3.h"
#endif

ZfM_3 ZbpA7kgAe_0;
BOOLEAN ZbpA7kgAe_1;
PROC ZbpA7kgAe_2;

static SHORTCARD Z196, Z197, Z198, Z199, Z200, Z201, Z202, Z203;
static Zq0A4_153 Z204, Z205;
static BOOLEAN Z206, Z207, Z208;
static LONGINT Z209;
static Zq0A4_63 Z210;
static ZpmCQ_4 Z211, Z212;
static LONGINT Z213;
static struct S_1 {
SHORTCARD A[1000000 - 1 + 1];
} *Z214;
static Zfb3DLQ_0 Z215;
static void Z216 ARGS ((Zq0A4_153 Z217, SHORTCARD Z198));
static void Z229 ARGS ((Zq0A4_153 Z217, INTEGER Z196));
static void Z234 ARGS ((CHAR Z235[], LONGCARD O_1));
static BOOLEAN Z238 ARGS ((BYTE Z239[], LONGCARD O_3, BYTE Z240[], LONGCARD O_2));
static void Z242 ARGS ((Zq0A4_153 Z217));
struct S_24 {
union {
char dummy;
} U_1;
};
struct S_22 {
union {
struct {
struct S_23 {
SHORTCARD Y0;
} Y0;
} V_1;
} U_1;
};
static void Z260 ARGS ((Zq0A4_153 Z217));
struct S_21 {
union {
char dummy;
} U_1;
};
static void Z261 ARGS ((Zq0A4_153 Z217));
struct S_19 {
union {
struct {
struct S_20 {
INTEGER Y0;
} Y0;
} V_1;
} U_1;
};
static void Z268 ARGS ((Zq0A4_153 Z217));
struct S_18 {
union {
char dummy;
} U_1;
};
static void Z269 ARGS ((Zq0A4_153 Z217));
struct S_17 {
union {
char dummy;
} U_1;
};
static void Z266 ARGS ((Zq0A4_153 Z217));
struct S_15 {
union {
struct {
struct S_16 {
ZpmCQ_4 Y0;
} Y0;
} V_1;
} U_1;
};
static void Z263 ARGS ((Zq0A4_153 Z217));
struct S_14 {
union {
char dummy;
} U_1;
};
static void Z286 ARGS ((Zq0A4_153 Z217));
struct S_13 {
union {
char dummy;
} U_1;
};
struct S_12 {
union {
char dummy;
} U_1;
};
static INTEGER Z224 ARGS ((Zq0A4_153 Z289, INTEGER Z290));
struct S_11 {
union {
char dummy;
} U_1;
};
static INTEGER Z228 ARGS ((Zq0A4_153 Z291, Zq0A4_153 Z292, SHORTCARD Z293));
struct S_9 {
union {
struct {
struct S_10 {
INTEGER Y0;
} Y0;
} V_1;
} U_1;
};
static INTEGER Z275 ARGS ((Zq0A4_153 Z295, INTEGER Z296));
struct S_7 {
union {
struct {
struct S_8 {
INTEGER Y0;
} Y0;
} V_1;
} U_1;
};
static void Z231 ARGS ((Zq0A4_153 Z217));
struct S_5 {
union {
struct {
struct S_6 {
Zq0A4_153 Y0;
INTEGER Y1;
} Y0;
} V_1;
} U_1;
};
static void Z256 ARGS ((Zq0A4_153 Z217));
struct S_4 {
union {
char dummy;
} U_1;
};
static void Z267 ARGS ((Zq0A4_153 Z217));
struct S_3 {
union {
char dummy;
} U_1;
};
static void Z313 ARGS ((Zq0A4_153 Z217));
struct S_2 {
union {
char dummy;
} U_1;
};
static void Z317 ARGS ((void));

static void Z216
# ifdef HAVE_ARGS
(Zq0A4_153 Z217, SHORTCARD Z198)
# else
(Z217, Z198)
Zq0A4_153 Z217;
SHORTCARD Z198;
# endif
{
{
register Zq0A4_199 *W_1 = &Z217->U_1.V_5.Y4.Y15->A[Z198 - 1];

if (SET_IS_SUBSET1(SET_ELEM (Zq0A4_7) | SET_ELEM (Zq0A4_20), W_1->Y3)) {
Z199 = ZbpA7kgAe_4(Z217, (LONGINT)Z198);
ZfM_29(Zq0A4_172, (STRING)"IFNOTIN (", 9L);
Zq0A4_195((LONGINT)(Z199 % Zq0A4dgAc_0));
ZfM_29(Zq0A4_172, (STRING)", yyt.yyIsComp", 14L);
Zq0A4_195((LONGINT)(Z199 / Zq0A4dgAc_0));
ZfM_29(Zq0A4_172, (STRING)") ", 2L);
ZfM_29(Zq0A4_172, (STRING)"yyS", 3L);
Zq0A4_195((LONGINT)Z199);
ZfM_29(Zq0A4_172, (STRING)"(yyt); /* ", 10L);
Zq0A4_192(W_1->Y1->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)" */ }", 5L);
ZfM_33(Zq0A4_172);
} else if (SET_IS_SUBSET1(SET_ELEM (Zq0A4_6) | SET_ELEM (Zq0A4_20), W_1->Y3)) {
Z199 = ZbpA7kgAe_4(Z217, (LONGINT)Z198);
ZfM_29(Zq0A4_172, (STRING)"IFNOTIN (", 9L);
Zq0A4_195((LONGINT)(Z199 % Zq0A4dgAc_0));
ZfM_29(Zq0A4_172, (STRING)", yyt.yyIsComp", 14L);
Zq0A4_195((LONGINT)(Z199 / Zq0A4dgAc_0));
ZfM_29(Zq0A4_172, (STRING)") ", 2L);
if (ZpmCQ_25(ORD('Z'), &Zq0A4_171) && IN(Zq0A4_42, Z217->U_1.V_5.Y4.Y2)) {
ZfM_29(Zq0A4_172, (STRING)"yyVisitParent (yyt); ", 21L);
ZfM_29(Zq0A4_172, (STRING)"yyI[yyt.yyOffset + ", 19L);
Zq0A4_195((LONGINT)Z199);
ZfM_29(Zq0A4_172, (STRING)"].proc (yyt.yyParent); /* ", 26L);
Zq0A4_192(W_1->Y1->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)" */ ", 4L);
ZfM_29(Zq0A4_172, (STRING)"yyWriteVisit (yyt.yyParent, \"?\"); END;", 38L);
ZfM_33(Zq0A4_172);
} else {
ZfM_29(Zq0A4_172, (STRING)"yyI[yyt.yyOffset + ", 19L);
Zq0A4_195((LONGINT)Z199);
ZfM_29(Zq0A4_172, (STRING)"].proc (yyt.yyParent); /* ", 26L);
Zq0A4_192(W_1->Y1->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)" */ }", 5L);
ZfM_33(Zq0A4_172);
}
} else if (SET_IS_SUBSET1(SET_ELEM (Zq0A4_6) | SET_ELEM (Zq0A4_21), W_1->Y3)) {
Z199 = Z224(W_1->Y0, (LONGINT)(Z198 - Z217->U_1.V_5.Y4.Y13 - W_1->Y0->U_1.V_10.Y9.Y13));
ZfM_29(Zq0A4_172, (STRING)"IFNOTIN (", 9L);
Zq0A4_195((LONGINT)(Z199 % Zq0A4dgAc_0));
ZfM_29(Zq0A4_172, (STRING)", ((", 4L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(ZbpA7kgAA_0->U_1.V_5.Y4.Y1);
ZfM_29(Zq0A4_172, (STRING)") yyt).", 7L);
ZfM_33(Zq0A4_172);
Zq0A4_192(W_1->Y0->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)".yyIsComp", 9L);
Zq0A4_195((LONGINT)(Z199 / Zq0A4dgAc_0));
ZfM_29(Zq0A4_172, (STRING)") ", 2L);
Z199 = Z228(Z217, W_1->Y0, Z198);
ZfM_29(Zq0A4_172, (STRING)"yyI", 3L);
Zq0A4_195((LONGINT)Z199);
ZfM_29(Zq0A4_172, (STRING)".proc (yyt); /* ", 16L);
Zq0A4_192(W_1->Y0->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)":", 1L);
Zq0A4_192(W_1->Y1->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)" */ };", 6L);
ZfM_33(Zq0A4_172);
} else if (SET_IS_SUBSET1(SET_ELEM (Zq0A4_7) | SET_ELEM (Zq0A4_21), W_1->Y3)) {
Z199 = Z224(W_1->Y0, (LONGINT)(Z198 - Z217->U_1.V_5.Y4.Y13 - W_1->Y0->U_1.V_10.Y9.Y13));
ZfM_29(Zq0A4_172, (STRING)"IFNOTIN (", 9L);
Zq0A4_195((LONGINT)(Z199 % Zq0A4dgAc_0));
ZfM_29(Zq0A4_172, (STRING)", ((", 4L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(ZbpA7kgAA_0->U_1.V_5.Y4.Y1);
ZfM_29(Zq0A4_172, (STRING)") yyt).", 7L);
ZfM_33(Zq0A4_172);
Zq0A4_192(W_1->Y0->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)".yyIsComp", 9L);
Zq0A4_195((LONGINT)(Z199 / Zq0A4dgAc_0));
ZfM_29(Zq0A4_172, (STRING)") ", 2L);
if (ZpmCQ_25(ORD('Z'), &Zq0A4_171) && IN(Zq0A4_42, Z217->U_1.V_5.Y4.Y2)) {
ZfM_29(Zq0A4_172, (STRING)"yyWriteVisit (yyt, \"", 20L);
Zq0A4_192(W_1->Y0->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)"\"); ", 4L);
ZfM_29(Zq0A4_172, (STRING)"yyS", 3L);
Zq0A4_195((LONGINT)Z199);
ZfM_29(Zq0A4_172, (STRING)"(((", 3L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(ZbpA7kgAA_0->U_1.V_5.Y4.Y1);
ZfM_29(Zq0A4_172, (STRING)") yyt).", 7L);
Zq0A4_192(W_1->Y0->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)"); /* ", 6L);
Zq0A4_192(W_1->Y0->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)":", 1L);
Zq0A4_192(W_1->Y1->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)" */ ", 4L);
ZfM_29(Zq0A4_172, (STRING)"yyVisitParent (((", 17L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(ZbpA7kgAA_0->U_1.V_5.Y4.Y1);
ZfM_29(Zq0A4_172, (STRING)") yyt).", 7L);
Zq0A4_192(W_1->Y0->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)"); }", 4L);
ZfM_33(Zq0A4_172);
} else {
ZfM_29(Zq0A4_172, (STRING)"yyS", 3L);
Zq0A4_195((LONGINT)Z199);
ZfM_29(Zq0A4_172, (STRING)"(((", 3L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(ZbpA7kgAA_0->U_1.V_5.Y4.Y1);
ZfM_29(Zq0A4_172, (STRING)") yyt).", 7L);
Zq0A4_192(W_1->Y0->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)"); /* ", 6L);
Zq0A4_192(W_1->Y0->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)":", 1L);
Zq0A4_192(W_1->Y1->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)" */ }", 5L);
ZfM_33(Zq0A4_172);
}
}
}
}

static void Z229
# ifdef HAVE_ARGS
(Zq0A4_153 Z217, INTEGER Z196)
# else
(Z217, Z196)
Zq0A4_153 Z217;
INTEGER Z196;
# endif
{
ZbpA7kgAA_0 = Z217;
{
register Zq0A4_199 *W_2 = &Z217->U_1.V_5.Y4.Y15->A[Z196 - 1];

if (ZpmCQ_25(ORD('X'), &Zq0A4_171) && IN(Zq0A4_42, Z217->U_1.V_5.Y4.Y2)) {
ZfM_29(Zq0A4_172, (STRING)"yyWriteEval (yyt, \"", 19L);
Zq0A4_192(W_2->Y1->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)"\");", 3L);
ZfM_33(Zq0A4_172);
if (W_2->Y2 != (Zq0A4_153)ADR (W_2->Y2) && !IN(Zq0A4_1, W_2->Y3)) {
Z231(W_2->Y2);
ZbpA7kgAA_6(W_2->Y2);
ZfM_33(Zq0A4_172);
if (IN(Zq0A4_19, W_2->Y3)) {
ZfM_29(Zq0A4_172, (STRING)"writeBOOLEAN (yyb) yyWriteNl ();", 32L);
ZfM_33(Zq0A4_172);
} else if (W_2->Y1->U_1.V_1.Y0 == Zq0A4_105 || W_2->Y1->U_1.V_11.Y10.Y4 == Zq0A4_86) {
ZfM_29(Zq0A4_172, (STRING)"write", 5L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)"(((", 3L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(Z217->U_1.V_5.Y4.Y1);
ZfM_29(Zq0A4_172, (STRING)") yyt).", 7L);
Zq0A4_192(W_2->Y1->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)") yyWriteNl ();", 15L);
ZfM_33(Zq0A4_172);
} else {
ZfM_29(Zq0A4_172, (STRING)"write", 5L);
Zq0A4_192(W_2->Y1->U_1.V_10.Y9.Y4);
ZfM_29(Zq0A4_172, (STRING)"(((", 3L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(Z217->U_1.V_5.Y4.Y1);
ZfM_29(Zq0A4_172, (STRING)") yyt).", 7L);
Zq0A4_192(W_2->Y1->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)") yyWriteNl ();", 15L);
ZfM_33(Zq0A4_172);
}
} else {
ZfM_29(Zq0A4_172, (STRING)"yyWriteNl ();", 13L);
ZfM_33(Zq0A4_172);
}
} else if (ZpmCQ_25(ORD('Y'), &Zq0A4_171) && IN(Zq0A4_42, Z217->U_1.V_5.Y4.Y2)) {
ZfM_29(Zq0A4_172, (STRING)"yyWriteEval (yyt, \"", 19L);
Zq0A4_192(W_2->Y1->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)"\");", 3L);
ZfM_33(Zq0A4_172);
if (W_2->Y2 != (Zq0A4_153)ADR (W_2->Y2) && !IN(Zq0A4_1, W_2->Y3)) {
Z231(W_2->Y2);
ZbpA7kgAA_6(W_2->Y2);
}
} else {
if (W_2->Y2 != (Zq0A4_153)ADR (W_2->Y2) && !IN(Zq0A4_1, W_2->Y3)) {
Z231(W_2->Y2);
ZbpA7kgAA_6(W_2->Y2);
}
}
}
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
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)"Error: module EvalJav3, routine ", 32L);
ZfM_29((ZDz6VQCC_4)ZfM_2, Z235, O_1);
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)" failed", 7L);
ZfM_33((ZDz6VQCC_4)ZfM_2);
(*ZbpA7kgAe_2)();
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
LONGINT B_1 = 0, B_2 = (INTEGER)(O_3 - 1);

if (B_1 <= B_2)
for (Z241 = B_1;; Z241 += 1) {
if (Z239[Z241] != Z240[Z241]) {
FREE_OPEN_ARRAYS
return FALSE;
}
if (Z241 >= B_2) break;
}
}
FREE_OPEN_ARRAYS
return TRUE;
}

static void Z242
# ifdef HAVE_ARGS
(Zq0A4_153 Z217)
# else
(Z217)
Zq0A4_153 Z217;
# endif
{
struct S_24 Z243;

if (Z217 == Zq0A4_97) {
return;
}
if (Z217 != NIL && Z217->U_1.V_1.Y0 == Zq0A4_127) {
{
register Zq0A4_253 *W_3 = &Z217->U_1.V_32.Y31;

ZfM_29(Zq0A4_172, (STRING)"// DEFINITION MODULE ", 21L);
Zq0A4_192(W_3->Y7);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"import ", 7L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
Zq0A4dgAd_1(W_3->Y8->U_1.V_17.Y16.Y8);
ZqnGVQ_5(Zq0A4_172, W_3->Y8->U_1.V_17.Y16.Y2);
Z204 = W_3->Y14;
while (Z204->U_1.V_1.Y0 == Zq0A4_144) {
Zq0A4dgAd_1(Z204->U_1.V_49.Y48.Y8->U_1.V_17.Y16.Y8);
ZqnGVQ_5(Zq0A4_172, Z204->U_1.V_49.Y48.Y8->U_1.V_17.Y16.Y2);
Z204 = Z204->U_1.V_49.Y48.Y12;
}
Zq0A4dgAd_1(W_3->Y8->U_1.V_17.Y16.Y7);
ZqnGVQ_5(Zq0A4_172, W_3->Y8->U_1.V_17.Y16.Y1);
Z204 = W_3->Y14;
while (Z204->U_1.V_1.Y0 == Zq0A4_144) {
Zq0A4dgAd_1(Z204->U_1.V_49.Y48.Y8->U_1.V_17.Y16.Y7);
ZqnGVQ_5(Zq0A4_172, Z204->U_1.V_49.Y48.Y8->U_1.V_17.Y16.Y1);
Z204 = Z204->U_1.V_49.Y48.Y12;
}
ZfM_33(Zq0A4_172);
ZpmCQ_5(&Z212, (LONGCARD)Zfb3DLQ_6());
Zq0A4_184(W_3->Y13, (Zq0A4_170)Z256);
ZpmCQ_7(&Z212);
ZfM_33(Zq0A4_172);
return;
}
}
}

void ZbpA7kgAe_3
# ifdef HAVE_ARGS
(Zq0A4_153 Z217)
# else
(Z217)
Zq0A4_153 Z217;
# endif
{
struct S_22 Z243;

if (Z217 == Zq0A4_97) {
return;
}
if (Z217 != NIL && Z217->U_1.V_1.Y0 == Zq0A4_127) {
{
register Zq0A4_253 *W_4 = &Z217->U_1.V_32.Y31;

Z201 = 0;
Z202 = 0;
Zq0A4_184(W_4->Y13, (Zq0A4_170)Z260);
ZpmCQ_5(&Z211, (LONGCARD)Z202);
Z213 = Z202;
ZarQdhNDD_0((ADDRESS *)&Z214, &Z213, (LONGINT)sizeof (SHORTCARD));
{
SHORTCARD B_3 = 1, B_4 = Z202;

if (B_3 <= B_4)
for (Z196 = B_3;; Z196 += 1) {
Z214->A[Z196 - 1] = 0;
if (Z196 >= B_4) break;
}
}
Zq0A4_184(W_4->Y13, (Zq0A4_170)Z261);
ZfM_29(Zq0A4_172, (STRING)"# define IFNOTIN(b, s) if (((1 << b) & s) == 0) {", 49L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# define REMOTE_SYN(i, b, c, n, t, a) n.t.a", 43L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# define REMOTE_INH(i, b, k, n, t, a) n.t.a", 43L);
ZfM_33(Zq0A4_172);
ZbpA7kgAA_4(Z217);
ZfM_29(Zq0A4_172, (STRING)"private static final int yyCheck2 = ", 36L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)".Generate", 9L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"ModuleWithOptionL;", 18L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" private static ProcTree[] yyI = new Proc", 41L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"[", 1L);
Zq0A4_195((LONGINT)ZpmCQ_18(&Z211));
ZfM_29(Zq0A4_172, (STRING)"];", 2L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" private static void yyAbort (", 30L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)" yyt) {", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  try {", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   de.cocolab.reuse.IO.StdError.writeS (\"Error: module ", 55L);
Zq0A4_192(W_4->Y7);
ZfM_29(Zq0A4_172, (STRING)", cyclic dependencies\");", 24L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   de.cocolab.reuse.IO.StdError.writeNl ();", 43L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   de.cocolab.reuse.IO.closeIO ();", 34L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   ", 3L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)".yyExit.proc ();", 16L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  } catch (Throwable t) {", 25L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  // ignore ???", 15L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  }", 3L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" }", 2L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" private static void Eval (", 27L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)" yyt) {", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" ", 1L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)".init", 5L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"(yyt); yyE (yyt);}", 18L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
do {
Z207 = TRUE;
Zq0A4_184(W_4->Y13, (Zq0A4_170)Z263);
} while (!Z207);
ZfM_29(Zq0A4_172, (STRING)" private static void yyE (", 26L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)" yyt) {", 7L);
ZfM_33(Zq0A4_172);
Zq0A4dgAd_1(Zq0A4_279->U_1.V_32.Y31.Y8->U_1.V_17.Y16.Y10);
ZqnGVQ_5(Zq0A4_172, Zq0A4_279->U_1.V_32.Y31.Y8->U_1.V_17.Y16.Y4);
Z204 = Zq0A4_279->U_1.V_32.Y31.Y14;
while (Z204->U_1.V_1.Y0 == Zq0A4_144) {
Zq0A4dgAd_1(Z204->U_1.V_49.Y48.Y8->U_1.V_17.Y16.Y10);
ZqnGVQ_5(Zq0A4_172, Z204->U_1.V_49.Y48.Y8->U_1.V_17.Y16.Y4);
Z204 = Z204->U_1.V_49.Y48.Y12;
}
ZfM_29(Zq0A4_172, (STRING)"  for (;;) {", 12L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   if ((yyt == ", 15L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(Zq0A4_88);
ZfM_29(Zq0A4_172, (STRING)") || ((1 & yyt.yyIsComp0) > 0)) return;", 39L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   yyt.yyIsComp0 |= 1;", 22L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   switch (yyt.yyKind) {", 24L);
ZfM_33(Zq0A4_172);
Zq0A4_184(W_4->Y13, (Zq0A4_170)Z266);
ZfM_29(Zq0A4_172, (STRING)"   default: return;", 19L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   }", 4L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  }", 3L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" }", 2L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZpmCQ_5(&Z212, (LONGCARD)Zfb3DLQ_6());
Zq0A4_184(W_4->Y13, (Zq0A4_170)Z267);
ZpmCQ_7(&Z212);
{
SHORTCARD B_5 = 2, B_6 = Z201;

if (B_5 <= B_6)
for (Z196 = B_5;; Z196 += 1) {
Z200 = 0;
Zq0A4_184(W_4->Y13, (Zq0A4_170)Z268);
if (Z200 > 0) {
ZfM_29(Zq0A4_172, (STRING)" private static void yyS", 24L);
Zq0A4_195((LONGINT)(Z196 - 1));
ZfM_29(Zq0A4_172, (STRING)"(", 1L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)" yyt) {", 7L);
ZfM_33(Zq0A4_172);
Zq0A4dgAd_1(Zq0A4_279->U_1.V_32.Y31.Y8->U_1.V_17.Y16.Y10);
ZqnGVQ_5(Zq0A4_172, Zq0A4_279->U_1.V_32.Y31.Y8->U_1.V_17.Y16.Y4);
Z204 = Zq0A4_279->U_1.V_32.Y31.Y14;
while (Z204->U_1.V_1.Y0 == Zq0A4_144) {
Zq0A4dgAd_1(Z204->U_1.V_49.Y48.Y8->U_1.V_17.Y16.Y10);
ZqnGVQ_5(Zq0A4_172, Z204->U_1.V_49.Y48.Y8->U_1.V_17.Y16.Y4);
Z204 = Z204->U_1.V_49.Y48.Y12;
}
if (ZpmCQ_25(ORD('5'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)"  IFNOTIN (", 11L);
Zq0A4_195((LONGINT)((Z196 - 1) % Zq0A4dgAc_0));
ZfM_29(Zq0A4_172, (STRING)", yyt.yyIsDone", 14L);
Zq0A4_195((LONGINT)((Z196 - 1) / Zq0A4dgAc_0));
ZfM_29(Zq0A4_172, (STRING)") yyt.yyIsDone.include (", 24L);
Zq0A4_195((LONGINT)((Z196 - 1) / Zq0A4dgAc_0));
ZfM_29(Zq0A4_172, (STRING)", ", 2L);
Zq0A4_195((LONGINT)((Z196 - 1) % Zq0A4dgAc_0));
ZfM_29(Zq0A4_172, (STRING)");} else {yyAbort (yyt);}", 25L);
ZfM_33(Zq0A4_172);
}
if (Z200 > 1) {
ZfM_29(Zq0A4_172, (STRING)"  switch (yyt.yyKind) {", 23L);
ZfM_33(Zq0A4_172);
Zq0A4_184(W_4->Y13, (Zq0A4_170)Z269);
ZfM_29(Zq0A4_172, (STRING)"  }", 3L);
ZfM_33(Zq0A4_172);
} else {
Zq0A4_184(W_4->Y13, (Zq0A4_170)Z269);
}
ZfM_29(Zq0A4_172, (STRING)"  yyt.yyIsComp.include (", 24L);
Zq0A4_195((LONGINT)((Z196 - 1) / Zq0A4dgAc_0));
ZfM_29(Zq0A4_172, (STRING)", ", 2L);
Zq0A4_195((LONGINT)((Z196 - 1) % Zq0A4dgAc_0));
ZfM_29(Zq0A4_172, (STRING)");", 2L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" }", 2L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
}
if (Z196 >= B_6) break;
}
}
{
SHORTCARD B_7 = ZpmCQ_17(&Z211), B_8 = ZpmCQ_18(&Z211);

if (B_7 <= B_8)
for (Z196 = B_7;; Z196 += 1) {
if (ZpmCQ_25((LONGCARD)Z196, &Z211)) {
ZfM_29(Zq0A4_172, (STRING)" private static ProcTree yyI", 28L);
Zq0A4_195((LONGINT)Z196);
ZfM_29(Zq0A4_172, (STRING)" = new ProcTree () {", 20L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  public void proc (", 20L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)" yyt) {", 7L);
ZfM_33(Zq0A4_172);
Zq0A4dgAd_1(Zq0A4_279->U_1.V_32.Y31.Y8->U_1.V_17.Y16.Y10);
ZqnGVQ_5(Zq0A4_172, Zq0A4_279->U_1.V_32.Y31.Y8->U_1.V_17.Y16.Y4);
Z204 = Zq0A4_279->U_1.V_32.Y31.Y14;
while (Z204->U_1.V_1.Y0 == Zq0A4_144) {
Zq0A4dgAd_1(Z204->U_1.V_49.Y48.Y8->U_1.V_17.Y16.Y10);
ZqnGVQ_5(Zq0A4_172, Z204->U_1.V_49.Y48.Y8->U_1.V_17.Y16.Y4);
Z204 = Z204->U_1.V_49.Y48.Y12;
}
Z203 = 0;
if (Z214->A[Z196 - 1] > 1) {
ZfM_29(Zq0A4_172, (STRING)"   switch (yyt.yyKind) {", 24L);
ZfM_33(Zq0A4_172);
Zq0A4_184(W_4->Y13, (Zq0A4_170)ZbpA7kgAe_3);
ZfM_29(Zq0A4_172, (STRING)"   }", 4L);
ZfM_33(Zq0A4_172);
} else {
Zq0A4_184(W_4->Y13, (Zq0A4_170)ZbpA7kgAe_3);
}
if (Z203 != Z214->A[Z196 - 1]) {
ZblNKKO_45((STRING)"internal error in yyI", 21L, (LONGCARD)ZblNKKO_16, ZmtLFGGBG_1, (LONGCARD)ZblNKKO_23, ADR (Z196));
INC(Zq0A4_0);
}
ZfM_29(Zq0A4_172, (STRING)"  }", 3L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" };", 3L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
}
if (Z196 >= B_8) break;
}
}
ZfM_29(Zq0A4_172, (STRING)" static void begin", 18L);
Zq0A4_192(W_4->Y7);
ZfM_29(Zq0A4_172, (STRING)"() {", 4L);
ZfM_33(Zq0A4_172);
Zq0A4dgAd_1(W_4->Y8->U_1.V_17.Y16.Y11);
ZqnGVQ_5(Zq0A4_172, W_4->Y8->U_1.V_17.Y16.Y5);
Z204 = W_4->Y14;
while (Z204->U_1.V_1.Y0 == Zq0A4_144) {
Zq0A4dgAd_1(Z204->U_1.V_49.Y48.Y8->U_1.V_17.Y16.Y11);
ZqnGVQ_5(Zq0A4_172, Z204->U_1.V_49.Y48.Y8->U_1.V_17.Y16.Y5);
Z204 = Z204->U_1.V_49.Y48.Y12;
}
ZfM_29(Zq0A4_172, (STRING)" }", 2L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" static void cClose", 19L);
Zq0A4_192(W_4->Y7);
ZfM_29(Zq0A4_172, (STRING)"() {", 4L);
ZfM_33(Zq0A4_172);
Zq0A4dgAd_1(W_4->Y8->U_1.V_17.Y16.Y12);
ZqnGVQ_5(Zq0A4_172, W_4->Y8->U_1.V_17.Y16.Y6);
Z204 = W_4->Y14;
while (Z204->U_1.V_1.Y0 == Zq0A4_144) {
Zq0A4dgAd_1(Z204->U_1.V_49.Y48.Y8->U_1.V_17.Y16.Y12);
ZqnGVQ_5(Zq0A4_172, Z204->U_1.V_49.Y48.Y8->U_1.V_17.Y16.Y6);
Z204 = Z204->U_1.V_49.Y48.Y12;
}
ZfM_29(Zq0A4_172, (STRING)" }", 2L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" static {", 9L);
ZfM_33(Zq0A4_172);
if (ZpmCQ_25(ORD('X'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)"  yyf = de.cocolab.reuse.IO.StdOutput;", 38L);
ZfM_33(Zq0A4_172);
}
{
SHORTCARD B_9 = ZpmCQ_17(&Z211), B_10 = ZpmCQ_18(&Z211);

if (B_9 <= B_10)
for (Z196 = B_9;; Z196 += 1) {
if (ZpmCQ_25((LONGCARD)Z196, &Z211)) {
ZfM_29(Zq0A4_172, (STRING)"  yyI[", 6L);
Zq0A4_195((LONGINT)Z196);
ZfM_29(Zq0A4_172, (STRING)"] = yyI", 7L);
Zq0A4_195((LONGINT)Z196);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
}
if (Z196 >= B_10) break;
}
}
ZfM_29(Zq0A4_172, (STRING)" }", 2L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"}", 1L);
ZfM_33(Zq0A4_172);
return;
}
}
if (Z217 != NIL && Z217->U_1.V_1.Y0 == Zq0A4_100) {
{
register struct S_23 *W_5 = &Z243.U_1.V_1.Y0;

for (;;) {
{
register Zq0A4_226 *W_6 = &Z217->U_1.V_5.Y4;

if (!((Zq0A4_177 & W_6->Y2) == 0X0L)) {
goto EXIT_1;
}
if (!(Z196 <= W_6->Y14)) {
goto EXIT_1;
}
W_5->Y0 = Z275(Z217, (LONGINT)Z196);
if (W_5->Y0 == 0) {
return;
}
{
register Zq0A4_199 *W_7 = &W_6->Y15->A[W_5->Y0 - 1];

if (SET_IS_SUBSET1(SET_ELEM (Zq0A4_6) | SET_ELEM (Zq0A4_21), W_7->Y3)) {
ZbpA7kgAA_0 = Z217;
if (Z214->A[Z196 - 1] > 1) {
ZfM_29(Zq0A4_172, (STRING)"   case ", 8L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(W_6->Y1);
ZfM_29(Zq0A4_172, (STRING)":", 1L);
ZfM_33(Zq0A4_172);
}
INC(Z203);
Z199 = Z224(W_7->Y0, (LONGINT)(W_5->Y0 - W_6->Y13 - W_7->Y0->U_1.V_10.Y9.Y13));
if (ZpmCQ_25(ORD('5'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)"     IFNOTIN (", 14L);
Zq0A4_195((LONGINT)(Z199 % Zq0A4dgAc_0));
ZfM_29(Zq0A4_172, (STRING)", ((", 4L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(ZbpA7kgAA_0->U_1.V_5.Y4.Y1);
ZfM_29(Zq0A4_172, (STRING)") yyt.", 6L);
ZfM_33(Zq0A4_172);
Zq0A4_192(W_7->Y0->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)".yyIsDone", 9L);
Zq0A4_195((LONGINT)(Z199 / Zq0A4dgAc_0));
ZfM_29(Zq0A4_172, (STRING)") ((", 4L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(ZbpA7kgAA_0->U_1.V_5.Y4.Y1);
ZfM_29(Zq0A4_172, (STRING)") yyt).", 7L);
Zq0A4_192(W_7->Y0->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)".yyIsDone", 9L);
Zq0A4_195((LONGINT)(Z199 / Zq0A4dgAc_0));
ZfM_29(Zq0A4_172, (STRING)" |= ", 4L);
Zq0A4_195((LONGINT)(Z199 % Zq0A4dgAc_0));
ZfM_29(Zq0A4_172, (STRING)");}", 3L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"     else {", 11L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      yyAbort (yyt);}", 21L);
ZfM_33(Zq0A4_172);
}
{
SHORTCARD B_11 = 1, B_12 = W_6->Y14;

if (B_11 <= B_12)
for (Z198 = B_11;; Z198 += 1) {
if (ZolB7FGBG_9((LONGINT)W_5->Y0, (LONGINT)Z198, W_6->Y16)) {
Z216(Z217, Z198);
}
if (Z198 >= B_12) break;
}
}
if (ZpmCQ_25(ORD('X'), &Zq0A4_171) && IN(Zq0A4_42, Z217->U_1.V_5.Y4.Y2)) {
ZfM_29(Zq0A4_172, (STRING)"    yyWriteEval (yyt, \"", 23L);
Zq0A4_192(W_7->Y0->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)":", 1L);
Zq0A4_192(W_7->Y1->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)"\");", 3L);
ZfM_33(Zq0A4_172);
if (W_7->Y2 != (Zq0A4_153)ADR (W_7->Y2) && !IN(Zq0A4_1, W_7->Y3)) {
Z231(W_7->Y2);
ZbpA7kgAA_6(W_7->Y2);
ZfM_33(Zq0A4_172);
if (W_7->Y1->U_1.V_1.Y0 == Zq0A4_105 || W_7->Y1->U_1.V_11.Y10.Y4 == Zq0A4_86) {
ZfM_29(Zq0A4_172, (STRING)"    write", 9L);
Zq0A4_192(Zq0A4_86);
} else {
ZfM_29(Zq0A4_172, (STRING)"    write", 9L);
Zq0A4_192(W_7->Y1->U_1.V_10.Y9.Y4);
}
ZfM_29(Zq0A4_172, (STRING)"(yyt.", 5L);
Zq0A4_192(W_6->Y1);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(W_7->Y0->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(W_7->Y0->U_1.V_10.Y9.Y4);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(W_7->Y1->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)") yyWriteNl ();", 15L);
ZfM_33(Zq0A4_172);
} else {
ZfM_29(Zq0A4_172, (STRING)"    yyWriteNl ();", 17L);
ZfM_33(Zq0A4_172);
}
} else if (ZpmCQ_25(ORD('Y'), &Zq0A4_171) && IN(Zq0A4_42, Z217->U_1.V_5.Y4.Y2)) {
ZfM_29(Zq0A4_172, (STRING)"    yyWriteEval (yyt, \"", 23L);
Zq0A4_192(W_7->Y0->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)":", 1L);
Zq0A4_192(W_7->Y1->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)"\");", 3L);
ZfM_33(Zq0A4_172);
if (W_7->Y2 != (Zq0A4_153)ADR (W_7->Y2) && !IN(Zq0A4_1, W_7->Y3)) {
Z231(W_7->Y2);
ZbpA7kgAA_6(W_7->Y2);
}
} else {
if (W_7->Y2 != (Zq0A4_153)ADR (W_7->Y2) && !IN(Zq0A4_1, W_7->Y3)) {
Z231(W_7->Y2);
ZbpA7kgAA_6(W_7->Y2);
}
}
if (!IN(Zq0A4_8, W_7->Y3) && W_7->Y1->U_1.V_1.Y0 == Zq0A4_105) {
ZfM_29(Zq0A4_172, (STRING)"/* ???  yyt^.", 13L);
Zq0A4_192(W_6->Y1);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(W_7->Y0->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(W_7->Y0->U_1.V_10.Y9.Y4);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(W_7->Y1->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)"*/", 2L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"    if (yyt.yyParent == ", 24L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(Zq0A4_88);
ZfM_29(Zq0A4_172, (STRING)") {yyt.yyOffset = ", 18L);
Zq0A4_195((LONGINT)(W_7->Y0->U_1.V_10.Y9.Y8->U_1.V_5.Y4.Y25 + W_7->Y1->U_1.V_10.Y9.Y15));
ZfM_29(Zq0A4_172, (STRING)"; yyt.yyParent = ((", 19L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(W_6->Y1);
ZfM_29(Zq0A4_172, (STRING)") yyt).", 7L);
Zq0A4_192(W_7->Y0->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)"; ", 2L);
ZfM_33(Zq0A4_172);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)".init", 5L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"(((", 3L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(W_7->Y0->U_1.V_10.Y9.Y4);
ZfM_29(Zq0A4_172, (STRING)")((", 3L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(W_6->Y1);
ZfM_29(Zq0A4_172, (STRING)") yyt).", 7L);
Zq0A4_192(W_7->Y0->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)").", 2L);
Zq0A4_192(W_7->Y1->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)"); }", 4L);
ZfM_33(Zq0A4_172);
}
{
SHORTCARD B_13 = 1, B_14 = W_6->Y14;

if (B_13 <= B_14)
for (Z197 = B_13;; Z197 += 1) {
if (W_6->Y15->A[Z197 - 1].Y2 == W_7->Y2) {
{
register Zq0A4_199 *W_8 = &W_6->Y15->A[Z197 - 1];

if (IN(Zq0A4_7, W_8->Y3)) {
Z199 = ZbpA7kgAe_4(ZbpA7kgAA_0, (LONGINT)Z197);
ZfM_29(Zq0A4_172, (STRING)"   yyt.yyIsComp", 15L);
Zq0A4_195((LONGINT)(Z199 / Zq0A4dgAc_0));
ZfM_29(Zq0A4_172, (STRING)"|= 1 << ", 8L);
Zq0A4_195((LONGINT)(Z199 % Zq0A4dgAc_0));
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
} else if (IN(Zq0A4_6, W_8->Y3)) {
Z199 = Z224(W_8->Y0, (LONGINT)(Z197 - W_6->Y13 - W_8->Y0->U_1.V_10.Y9.Y13));
ZfM_29(Zq0A4_172, (STRING)"   ((", 5L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(ZbpA7kgAA_0->U_1.V_5.Y4.Y1);
ZfM_29(Zq0A4_172, (STRING)") yyt).", 7L);
Zq0A4_192(W_8->Y0->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)".yyIsComp", 9L);
Zq0A4_195((LONGINT)(Z199 / Zq0A4dgAc_0));
ZfM_29(Zq0A4_172, (STRING)" |= 1 << ", 9L);
Zq0A4_195((LONGINT)(Z199 % Zq0A4dgAc_0));
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
}
}
}
if (Z197 >= B_14) break;
}
}
}
}
return;
}
} EXIT_1:;
}
}
}

static void Z260
# ifdef HAVE_ARGS
(Zq0A4_153 Z217)
# else
(Z217)
Zq0A4_153 Z217;
# endif
{
struct S_21 Z243;

if (Z217 == Zq0A4_97) {
return;
}
if (Z217 != NIL && Z217->U_1.V_1.Y0 == Zq0A4_100) {
{
register Zq0A4_226 *W_9 = &Z217->U_1.V_5.Y4;

Z209 = W_9->Y13;
ZarQdhNDD_0((ADDRESS *)&W_9->Y26, &Z209, (LONGINT)sizeof (Zq0A4_62));
Z196 = 1;
Z210 = W_9->Y26;
Zq0A4_185(Z217, (Zq0A4_170)Z260);
Z201 = ZdaDDAD7_4((LONGINT)Z196, (LONGINT)Z201);
Z202 = ZdaDDAD7_4((LONGINT)W_9->Y14, (LONGINT)Z202);
return;
}
}
if (Z217 != NIL && Z217->U_1.V_1.Y0 == Zq0A4_105) {
for (;;) {
{
register Zq0A4_231 *W_10 = &Z217->U_1.V_10.Y9;

if (!(((SET_ELEM (Zq0A4_8) | SET_ELEM (Zq0A4_19) | SET_ELEM (Zq0A4_27)) & W_10->Y6) == 0X0L)) {
goto EXIT_2;
}
INC(Z196);
Z210->A[W_10->Y10 - 1].Y0 = Z196;
Z210->A[Z196 - 1].Y1 = W_10->Y10;
return;
}
} EXIT_2:;
}
if (Z217 != NIL && Z217->U_1.V_1.Y0 == Zq0A4_106) {
for (;;) {
{
register Zq0A4_232 *W_11 = &Z217->U_1.V_11.Y10;

if (!(((SET_ELEM (Zq0A4_8) | SET_ELEM (Zq0A4_19) | SET_ELEM (Zq0A4_27)) & W_11->Y6) == 0X0L)) {
goto EXIT_3;
}
INC(Z196);
Z210->A[W_11->Y10 - 1].Y0 = Z196;
Z210->A[Z196 - 1].Y1 = W_11->Y10;
return;
}
} EXIT_3:;
}
}

static void Z261
# ifdef HAVE_ARGS
(Zq0A4_153 Z217)
# else
(Z217)
Zq0A4_153 Z217;
# endif
{
struct S_19 Z243;

if (Z217 == Zq0A4_97) {
return;
}
if (Z217 != NIL && Z217->U_1.V_1.Y0 == Zq0A4_100) {
{
register struct S_20 *W_12 = &Z243.U_1.V_1.Y0;

{
register Zq0A4_226 *W_13 = &Z217->U_1.V_5.Y4;

{
SHORTCARD B_15 = W_13->Y13 + 1, B_16 = W_13->Y14;

if (B_15 <= B_16)
for (Z198 = B_15;; Z198 += 1) {
{
register Zq0A4_199 *W_14 = &W_13->Y15->A[Z198 - 1];

if (IN(Zq0A4_6, W_14->Y3)) {
W_12->Y0 = Z228(Z217, W_14->Y0, Z198);
ZpmCQ_13(&Z211, (LONGCARD)W_12->Y0);
INC(Z214->A[W_12->Y0 - 1]);
}
}
if (Z198 >= B_16) break;
}
}
return;
}
}
}
}

static void Z268
# ifdef HAVE_ARGS
(Zq0A4_153 Z217)
# else
(Z217)
Zq0A4_153 Z217;
# endif
{
struct S_18 Z243;

if (Z217 == Zq0A4_97) {
return;
}
if (Z217 != NIL && Z217->U_1.V_1.Y0 == Zq0A4_100) {
for (;;) {
{
register Zq0A4_226 *W_15 = &Z217->U_1.V_5.Y4;

if (!((Zq0A4_177 & W_15->Y2) == 0X0L)) {
goto EXIT_4;
}
if (!(Z196 <= W_15->Y25)) {
goto EXIT_4;
}
{
register Zq0A4_199 *W_16 = &W_15->Y15->A[W_15->Y26->A[Z196 - 1].Y1 - 1];

if (SET_IS_SUBSET1(SET_ELEM (Zq0A4_7) | SET_ELEM (Zq0A4_20), W_16->Y3) && !IN(Zq0A4_19, W_16->Y3)) {
INC(Z200);
}
}
return;
}
} EXIT_4:;
}
}

static void Z269
# ifdef HAVE_ARGS
(Zq0A4_153 Z217)
# else
(Z217)
Zq0A4_153 Z217;
# endif
{
struct S_17 Z243;

if (Z217 == Zq0A4_97) {
return;
}
if (Z217 != NIL && Z217->U_1.V_1.Y0 == Zq0A4_100) {
for (;;) {
{
register Zq0A4_226 *W_17 = &Z217->U_1.V_5.Y4;

if (!((Zq0A4_177 & W_17->Y2) == 0X0L)) {
goto EXIT_5;
}
if (!(Z196 <= W_17->Y25)) {
goto EXIT_5;
}
{
register Zq0A4_199 *W_18 = &W_17->Y15->A[W_17->Y26->A[Z196 - 1].Y1 - 1];

if (SET_IS_SUBSET1(SET_ELEM (Zq0A4_7) | SET_ELEM (Zq0A4_20), W_18->Y3) && !IN(Zq0A4_19, W_18->Y3)) {
ZbpA7kgAA_0 = Z217;
if (Z200 > 1) {
ZfM_29(Zq0A4_172, (STRING)"   case ", 8L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(W_17->Y1);
ZfM_29(Zq0A4_172, (STRING)":", 1L);
ZfM_33(Zq0A4_172);
}
{
SHORTCARD B_17 = 1, B_18 = W_17->Y14;

if (B_17 <= B_18)
for (Z198 = B_17;; Z198 += 1) {
if (ZolB7FGBG_9((LONGINT)W_17->Y26->A[Z196 - 1].Y1, (LONGINT)Z198, W_17->Y16)) {
Z216(Z217, Z198);
}
if (Z198 >= B_18) break;
}
}
Z229(Z217, (LONGINT)W_17->Y26->A[Z196 - 1].Y1);
if (!IN(Zq0A4_8, W_18->Y3) && W_18->Y1->U_1.V_1.Y0 == Zq0A4_105) {
ZfM_29(Zq0A4_172, (STRING)"// ??? WITH yyt.", 16L);
Zq0A4_192(W_17->Y1);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(W_18->Y1->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)" if (yyt.yyParent == ", 21L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(Zq0A4_88);
ZfM_29(Zq0A4_172, (STRING)") {yyt.yyOffset = ", 18L);
Zq0A4_195((LONGINT)(W_17->Y25 + W_18->Y1->U_1.V_10.Y9.Y15));
ZfM_29(Zq0A4_172, (STRING)"; yyt.yyParent = yyt; ", 22L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)".init", 5L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"(yyt.", 5L);
Zq0A4_192(W_17->Y1);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(W_18->Y1->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)"); }}", 5L);
ZfM_33(Zq0A4_172);
}
{
SHORTCARD B_19 = 1, B_20 = W_17->Y14;

if (B_19 <= B_20)
for (Z197 = B_19;; Z197 += 1) {
if (W_17->Y15->A[Z197 - 1].Y2 == W_18->Y2) {
{
register Zq0A4_199 *W_19 = &W_17->Y15->A[Z197 - 1];

if (IN(Zq0A4_7, W_19->Y3)) {
Z199 = ZbpA7kgAe_4(ZbpA7kgAA_0, (LONGINT)Z197);
if (Z199 != Z196 - 1) {
ZfM_29(Zq0A4_172, (STRING)"   INCL (yyt.yyIsComp", 21L);
Zq0A4_195((LONGINT)(Z199 / Zq0A4dgAc_0));
ZfM_29(Zq0A4_172, (STRING)", ", 2L);
Zq0A4_195((LONGINT)(Z199 % Zq0A4dgAc_0));
ZfM_29(Zq0A4_172, (STRING)");", 2L);
ZfM_33(Zq0A4_172);
}
} else if (IN(Zq0A4_6, W_19->Y3)) {
Z199 = Z224(W_19->Y0, (LONGINT)(Z197 - W_17->Y13 - W_19->Y0->U_1.V_10.Y9.Y13));
ZfM_29(Zq0A4_172, (STRING)"   ((", 5L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(ZbpA7kgAA_0->U_1.V_5.Y4.Y1);
ZfM_29(Zq0A4_172, (STRING)") yyt).", 7L);
Zq0A4_192(W_19->Y0->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)".yyIsComp", 9L);
Zq0A4_195((LONGINT)(Z199 / Zq0A4dgAc_0));
ZfM_29(Zq0A4_172, (STRING)" |= 1 << ", 9L);
Zq0A4_195((LONGINT)(Z199 % Zq0A4dgAc_0));
ZfM_29(Zq0A4_172, (STRING)");", 2L);
ZfM_33(Zq0A4_172);
}
}
}
if (Z197 >= B_20) break;
}
}
}
}
return;
}
} EXIT_5:;
}
}

static void Z266
# ifdef HAVE_ARGS
(Zq0A4_153 Z217)
# else
(Z217)
Zq0A4_153 Z217;
# endif
{
struct S_15 Z243;

if (Z217 == Zq0A4_97) {
return;
}
if (Z217 != NIL && Z217->U_1.V_1.Y0 == Zq0A4_100) {
{
register struct S_16 *W_20 = &Z243.U_1.V_1.Y0;

{
register Zq0A4_226 *W_21 = &Z217->U_1.V_5.Y4;

Zq0A4dgAd_6(Z217);
Z200 = 0;
Z198 = 2;
for (;;) {
if (Z198 > W_21->Y14) {
goto EXIT_6;
}
{
register Zq0A4_199 *W_22 = &W_21->Y15->A[Z198 - 1];

if (((SET_ELEM (Zq0A4_27) | SET_ELEM (Zq0A4_9) | SET_ELEM (Zq0A4_19)) & W_22->Y3) != 0X0L) {
if (IN(Zq0A4_19, W_22->Y3) || SET_IS_SUBSET1(SET_ELEM (Zq0A4_7) | SET_ELEM (Zq0A4_20), W_22->Y3) || SET_IS_SUBSET1(SET_ELEM (Zq0A4_6) | SET_ELEM (Zq0A4_21), W_22->Y3) || SET_IS_SUBSET1(SET_ELEM (Zq0A4_6) | SET_ELEM (Zq0A4_20), W_22->Y3) && !IN(Zq0A4_8, W_22->Y3) && W_22->Y1->U_1.V_1.Y0 == Zq0A4_105 || SET_IS_SUBSET1(SET_ELEM (Zq0A4_7) | SET_ELEM (Zq0A4_21) | SET_ELEM (Zq0A4_27), W_22->Y3) && W_22->Y0 != Zq0A4dgAd_0 && IN(Zq0A4_49, W_22->Y0->U_1.V_10.Y9.Y8->U_1.V_5.Y4.Y2)) {
INC(Z200);
goto EXIT_6;
}
}
}
INC(Z198);
} EXIT_6:;
if (Z200 == 0 && (Zq0A4dgAd_0 == Zq0A4_97 || !IN(Zq0A4_49, Zq0A4dgAd_0->U_1.V_10.Y9.Y8->U_1.V_5.Y4.Y2))) {
return;
}
ZbpA7kgAA_0 = Z217;
ZfM_29(Zq0A4_172, (STRING)"   case ", 8L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(W_21->Y1);
ZfM_29(Zq0A4_172, (STRING)":", 1L);
ZfM_33(Zq0A4_172);
{
SHORTCARD B_21 = 2, B_22 = W_21->Y14;

if (B_21 <= B_22)
for (Z198 = B_21;; Z198 += 1) {
{
register Zq0A4_199 *W_23 = &W_21->Y15->A[Z198 - 1];

if (((SET_ELEM (Zq0A4_27) | SET_ELEM (Zq0A4_9)) & W_23->Y3) != 0X0L) {
if (SET_IS_SUBSET1(SET_ELEM (Zq0A4_7) | SET_ELEM (Zq0A4_20), W_23->Y3) || SET_IS_SUBSET1(SET_ELEM (Zq0A4_6) | SET_ELEM (Zq0A4_21), W_23->Y3) || SET_IS_SUBSET1(SET_ELEM (Zq0A4_6) | SET_ELEM (Zq0A4_20), W_23->Y3) && !IN(Zq0A4_8, W_23->Y3) && W_23->Y1->U_1.V_1.Y0 == Zq0A4_105) {
Z216(Z217, Z198);
} else if (SET_IS_SUBSET1(SET_ELEM (Zq0A4_7) | SET_ELEM (Zq0A4_21) | SET_ELEM (Zq0A4_27), W_23->Y3) && W_23->Y0 != Zq0A4dgAd_0 && IN(Zq0A4_49, W_23->Y0->U_1.V_10.Y9.Y8->U_1.V_5.Y4.Y2)) {
if (ZpmCQ_25(ORD('Z'), &Zq0A4_171) && IN(Zq0A4_42, Z217->U_1.V_5.Y4.Y2)) {
ZfM_29(Zq0A4_172, (STRING)"    yyWriteVisit (yyt, '", 24L);
Zq0A4_192(W_23->Y0->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)"'); ", 4L);
}
ZfM_29(Zq0A4_172, (STRING)"    yyE (((", 11L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(W_21->Y1);
ZfM_29(Zq0A4_172, (STRING)") yyt).", 7L);
Zq0A4_192(W_23->Y0->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)");", 2L);
ZfM_33(Zq0A4_172);
if (ZpmCQ_25(ORD('Z'), &Zq0A4_171) && IN(Zq0A4_42, Z217->U_1.V_5.Y4.Y2)) {
ZfM_29(Zq0A4_172, (STRING)"    yyVisitParent (yyt.", 23L);
Zq0A4_192(W_21->Y1);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(W_23->Y0->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)");", 2L);
ZfM_33(Zq0A4_172);
}
}
}
}
if (Z198 >= B_22) break;
}
}
ZpmCQ_5(&W_20->Y0, (LONGCARD)W_21->Y14);
{
SHORTCARD B_23 = 2, B_24 = W_21->Y13;

if (B_23 <= B_24)
for (Z196 = B_23;; Z196 += 1) {
{
register Zq0A4_199 *W_24 = &W_21->Y15->A[Z196 - 1];

if (IN(Zq0A4_19, W_24->Y3)) {
{
SHORTCARD B_25 = 2, B_26 = W_21->Y14;

if (B_25 <= B_26)
for (Z198 = B_25;; Z198 += 1) {
if (ZolB7FGBG_9((LONGINT)Z196, (LONGINT)Z198, W_21->Y16)) {
if (((SET_ELEM (Zq0A4_7) | SET_ELEM (Zq0A4_6)) & W_21->Y15->A[Z198 - 1].Y3) != 0X0L) {
ZpmCQ_13(&W_20->Y0, (LONGCARD)Z198);
}
}
if (Z198 >= B_26) break;
}
}
}
}
if (Z196 >= B_24) break;
}
}
{
SHORTCARD B_27 = 2, B_28 = W_21->Y14;

if (B_27 <= B_28)
for (Z196 = B_27;; Z196 += 1) {
{
register Zq0A4_199 *W_25 = &W_21->Y15->A[Z196 - 1];

if (SET_IS_SUBSET1(SET_ELEM (Zq0A4_7) | SET_ELEM (Zq0A4_20) | SET_ELEM (Zq0A4_9), W_25->Y3) || SET_IS_SUBSET1(SET_ELEM (Zq0A4_6) | SET_ELEM (Zq0A4_21) | SET_ELEM (Zq0A4_9), W_25->Y3)) {
ZpmCQ_14(&W_20->Y0, (LONGCARD)Z196);
}
}
if (Z196 >= B_28) break;
}
}
while (!ZpmCQ_26(W_20->Y0)) {
Z216(Z217, (SHORTCARD)ZpmCQ_20(&W_20->Y0));
}
ZpmCQ_7(&W_20->Y0);
{
SHORTCARD B_29 = 2, B_30 = W_21->Y13;

if (B_29 <= B_30)
for (Z196 = B_29;; Z196 += 1) {
if (IN(Zq0A4_19, W_21->Y15->A[Z196 - 1].Y3)) {
Z229(Z217, (LONGINT)Z196);
}
if (Z196 >= B_30) break;
}
}
if (Zq0A4dgAd_0 == Zq0A4_97 || !IN(Zq0A4_49, Zq0A4dgAd_0->U_1.V_10.Y9.Y8->U_1.V_5.Y4.Y2)) {
ZfM_29(Zq0A4_172, (STRING)"    return;", 11L);
ZfM_33(Zq0A4_172);
} else {
if (ZpmCQ_25(ORD('Z'), &Zq0A4_171) && IN(Zq0A4_42, Z217->U_1.V_5.Y4.Y2)) {
ZfM_29(Zq0A4_172, (STRING)"    yyWriteVisit (yyt, '", 24L);
Zq0A4_192(Zq0A4dgAd_0->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)"'); ", 4L);
}
ZfM_29(Zq0A4_172, (STRING)"    yyt = ((", 12L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(W_21->Y1);
ZfM_29(Zq0A4_172, (STRING)") yyt).", 7L);
Zq0A4_192(Zq0A4dgAd_0->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
}
return;
}
}
}
}

static void Z263
# ifdef HAVE_ARGS
(Zq0A4_153 Z217)
# else
(Z217)
Zq0A4_153 Z217;
# endif
{
struct S_14 Z243;

if (Z217 == Zq0A4_97) {
return;
}
if (Z217 != NIL && Z217->U_1.V_1.Y0 == Zq0A4_100) {
for (;;) {
{
register Zq0A4_226 *W_26 = &Z217->U_1.V_5.Y4;

if (!!IN(Zq0A4_49, W_26->Y2)) {
goto EXIT_7;
}
Z206 = FALSE;
Zq0A4_185(Z217, (Zq0A4_170)Z263);
Zq0A4_184(W_26->Y4, (Zq0A4_170)Z286);
if (!Z206) {
goto EXIT_7;
}
INCL(W_26->Y2, Zq0A4_49);
Z207 = FALSE;
return;
}
} EXIT_7:;
}
if (Z217 != NIL && Z217->U_1.V_1.Y0 == Zq0A4_105) {
for (;;) {
{
register Zq0A4_231 *W_27 = &Z217->U_1.V_10.Y9;

if (!(IN(Zq0A4_9, W_27->Y6) || IN(Zq0A4_49, W_27->Y8->U_1.V_5.Y4.Y2))) {
goto EXIT_8;
}
Z206 = TRUE;
return;
}
} EXIT_8:;
}
if (Z217 != NIL && Z217->U_1.V_1.Y0 == Zq0A4_106) {
for (;;) {
{
register Zq0A4_232 *W_28 = &Z217->U_1.V_11.Y10;

if (!(((SET_ELEM (Zq0A4_19) | SET_ELEM (Zq0A4_9)) & W_28->Y6) != 0X0L)) {
goto EXIT_9;
}
Z206 = TRUE;
return;
}
} EXIT_9:;
}
}

static void Z286
# ifdef HAVE_ARGS
(Zq0A4_153 Z217)
# else
(Z217)
Zq0A4_153 Z217;
# endif
{
struct S_13 Z243;

if (Z217 == Zq0A4_97) {
return;
}
if (Z217 != NIL && Z217->U_1.V_1.Y0 == Zq0A4_100) {
for (;;) {
{
register Zq0A4_226 *W_29 = &Z217->U_1.V_5.Y4;

if (!IN(Zq0A4_49, W_29->Y2)) {
goto EXIT_10;
}
Z206 = TRUE;
return;
}
} EXIT_10:;
}
}

INTEGER ZbpA7kgAe_4
# ifdef HAVE_ARGS
(Zq0A4_153 Z287, INTEGER Z288)
# else
(Z287, Z288)
Zq0A4_153 Z287;
INTEGER Z288;
# endif
{
struct S_12 Z243;

return Z287->U_1.V_5.Y4.Y26->A[Z288 - 1].Y0 - 1;
}

static INTEGER Z224
# ifdef HAVE_ARGS
(Zq0A4_153 Z289, INTEGER Z290)
# else
(Z289, Z290)
Zq0A4_153 Z289;
INTEGER Z290;
# endif
{
struct S_11 Z243;

return Z289->U_1.V_10.Y9.Y8->U_1.V_5.Y4.Y26->A[Z290 - 1].Y0 - 1;
}

static INTEGER Z228
# ifdef HAVE_ARGS
(Zq0A4_153 Z291, Zq0A4_153 Z292, SHORTCARD Z293)
# else
(Z291, Z292, Z293)
Zq0A4_153 Z291;
Zq0A4_153 Z292;
SHORTCARD Z293;
# endif
{
struct S_9 Z243;

{
register struct S_10 *W_30 = &Z243.U_1.V_1.Y0;

{
register Zq0A4_231 *W_31 = &Z292->U_1.V_10.Y9;

return Z291->U_1.V_5.Y4.Y25 + W_31->Y15 + W_31->Y8->U_1.V_5.Y4.Y26->A[Z293 - Z291->U_1.V_5.Y4.Y13 - W_31->Y13 - 1].Y0 - 1;
}
return W_30->Y0;
}
}

static INTEGER Z275
# ifdef HAVE_ARGS
(Zq0A4_153 Z295, INTEGER Z296)
# else
(Z295, Z296)
Zq0A4_153 Z295;
INTEGER Z296;
# endif
{
SHORTCARD Z259;
struct S_7 Z243;

{
register struct S_8 *W_32 = &Z243.U_1.V_1.Y0;

{
register Zq0A4_226 *W_33 = &Z295->U_1.V_5.Y4;

{
SHORTCARD B_31 = W_33->Y13 + 1, B_32 = W_33->Y14;

if (B_31 <= B_32)
for (Z259 = B_31;; Z259 += 1) {
{
register Zq0A4_199 *W_34 = &W_33->Y15->A[Z259 - 1];

if (((SET_ELEM (Zq0A4_8) | SET_ELEM (Zq0A4_19) | SET_ELEM (Zq0A4_27)) & W_34->Y3) == 0X0L && Z228(Z295, W_34->Y0, Z259) == Z296) {
return Z259;
}
}
if (Z259 >= B_32) break;
}
}
}
return 0;
return W_32->Y0;
}
}

static void Z231
# ifdef HAVE_ARGS
(Zq0A4_153 Z217)
# else
(Z217)
Zq0A4_153 Z217;
# endif
{
struct S_5 Z243;

for (;;) {
for (;;) {
if (Z217 == Zq0A4_97) {
return;
}
if (Z217 != NIL) {
switch (Z217->U_1.V_1.Y0) {
case Zq0A4_137:;
{
register Zq0A4_263 *W_35 = &Z217->U_1.V_42.Y41;

Z217 = W_35->Y5;
goto EXIT_12;
}
break;
case Zq0A4_138:;
{
register Zq0A4_264 *W_36 = &Z217->U_1.V_43.Y42;

Z217 = W_36->Y5;
goto EXIT_12;
}
break;
case Zq0A4_139:;
{
register Zq0A4_265 *W_37 = &Z217->U_1.V_44.Y43;

Z217 = W_37->Y5;
goto EXIT_12;
}
break;
case Zq0A4_141:;
{
register Zq0A4_267 *W_38 = &Z217->U_1.V_46.Y45;

Z231(W_38->Y4);
Z231(W_38->Y5);
Z217 = W_38->Y6;
goto EXIT_12;
}
break;
case Zq0A4_116:;
{
register Zq0A4_242 *W_39 = &Z217->U_1.V_21.Y20;

Z217 = W_39->Y1;
goto EXIT_12;
}
break;
case Zq0A4_117:;
{
register Zq0A4_243 *W_40 = &Z217->U_1.V_22.Y21;

Z217 = W_40->Y1;
goto EXIT_12;
}
break;
case Zq0A4_119:;
{
register Zq0A4_245 *W_41 = &Z217->U_1.V_24.Y23;

Z217 = W_41->Y1;
goto EXIT_12;
}
break;
case Zq0A4_120:;
{
register Zq0A4_246 *W_42 = &Z217->U_1.V_25.Y24;

Z217 = W_42->Y1;
goto EXIT_12;
}
break;
case Zq0A4_118:;
{
register struct S_6 *W_43 = &Z243.U_1.V_1.Y0;

{
register Zq0A4_244 *W_44 = &Z217->U_1.V_23.Y22;

W_43->Y0 = Zq0A4_182(Zq0A4_279->U_1.V_32.Y31.Y13, W_44->Y3);
if (W_43->Y0 != Zq0A4_97) {
Z205 = Zq0A4_183(W_43->Y0, W_44->Y4);
if (Z205 != Zq0A4_97) {
{
register Zq0A4_232 *W_45 = &Z205->U_1.V_11.Y10;

W_43->Y1 = ZbpA7kgAe_4(W_43->Y0, (LONGINT)W_45->Y10);
if (IN(Zq0A4_7, W_45->Y6)) {
ZfM_29(Zq0A4_172, (STRING)"  IFNOTIN (", 11L);
Zq0A4_195(W_43->Y1 % Zq0A4dgAc_0);
ZfM_29(Zq0A4_172, (STRING)",", 1L);
ZbpA7kgAA_6(W_44->Y2);
ZfM_29(Zq0A4_172, (STRING)".yyIsComp", 9L);
Zq0A4_195(W_43->Y1 / Zq0A4dgAc_0);
ZfM_29(Zq0A4_172, (STRING)") yyS", 5L);
Zq0A4_195(W_43->Y1);
ZfM_29(Zq0A4_172, (STRING)"(", 1L);
ZbpA7kgAA_6(W_44->Y2);
ZfM_29(Zq0A4_172, (STRING)");}", 3L);
ZfM_33(Zq0A4_172);
} else if (IN(Zq0A4_6, W_45->Y6)) {
ZfM_29(Zq0A4_172, (STRING)"  IFNOTIN (", 11L);
Zq0A4_195(W_43->Y1 % Zq0A4dgAc_0);
ZfM_29(Zq0A4_172, (STRING)",", 1L);
ZbpA7kgAA_6(W_44->Y2);
ZfM_29(Zq0A4_172, (STRING)".yyIsComp", 9L);
Zq0A4_195(W_43->Y1 / Zq0A4dgAc_0);
ZfM_29(Zq0A4_172, (STRING)") yyI[", 6L);
ZbpA7kgAA_6(W_44->Y2);
ZfM_29(Zq0A4_172, (STRING)".yyOffset + ", 12L);
Zq0A4_195(W_43->Y1);
ZfM_29(Zq0A4_172, (STRING)"].proc (", 8L);
ZbpA7kgAA_6(W_44->Y2);
ZfM_29(Zq0A4_172, (STRING)".yyParent);}", 12L);
ZfM_33(Zq0A4_172);
}
}
}
}
Z231(W_44->Y1);
return;
}
}
break;
default:
break;
}
}
return;
} EXIT_12:;
} EXIT_11:;
}

static void Z256
# ifdef HAVE_ARGS
(Zq0A4_153 Z217)
# else
(Z217)
Zq0A4_153 Z217;
# endif
{
struct S_4 Z243;

for (;;) {
for (;;) {
if (Z217 == Zq0A4_97) {
return;
}
if (Z217 != NIL && Z217->U_1.V_1.Y0 == Zq0A4_100) {
{
register Zq0A4_226 *W_46 = &Z217->U_1.V_5.Y4;

Z217 = W_46->Y3;
goto EXIT_14;
}
}
if (Z217 != NIL && Z217->U_1.V_1.Y0 == Zq0A4_105) {
for (;;) {
{
register Zq0A4_231 *W_47 = &Z217->U_1.V_10.Y9;

if (!(((SET_ELEM (Zq0A4_8) | SET_ELEM (Zq0A4_19) | SET_ELEM (Zq0A4_27) | SET_ELEM (Zq0A4_1)) & W_47->Y6) == 0X0L && !ZpmCQ_25((LONGCARD)W_47->Y3, &Z212))) {
goto EXIT_15;
}
ZpmCQ_13(&Z212, (LONGCARD)W_47->Y3);
Z256(W_47->Y1);
return;
}
} EXIT_15:;
{
register Zq0A4_231 *W_48 = &Z217->U_1.V_10.Y9;

Z217 = W_48->Y1;
goto EXIT_14;
}
}
if (Z217 != NIL && Z217->U_1.V_1.Y0 == Zq0A4_106) {
for (;;) {
{
register Zq0A4_232 *W_49 = &Z217->U_1.V_11.Y10;

if (!(((SET_ELEM (Zq0A4_8) | SET_ELEM (Zq0A4_19) | SET_ELEM (Zq0A4_27) | SET_ELEM (Zq0A4_1)) & W_49->Y6) == 0X0L && !ZpmCQ_25((LONGCARD)W_49->Y3, &Z212))) {
goto EXIT_16;
}
ZpmCQ_13(&Z212, (LONGCARD)W_49->Y3);
Z256(W_49->Y1);
return;
}
} EXIT_16:;
{
register Zq0A4_232 *W_50 = &Z217->U_1.V_11.Y10;

Z217 = W_50->Y1;
goto EXIT_14;
}
}
return;
} EXIT_14:;
} EXIT_13:;
}

static void Z267
# ifdef HAVE_ARGS
(Zq0A4_153 Z217)
# else
(Z217)
Zq0A4_153 Z217;
# endif
{
struct S_3 Z243;

for (;;) {
for (;;) {
if (Z217 == Zq0A4_97) {
return;
}
if (Z217 != NIL && Z217->U_1.V_1.Y0 == Zq0A4_100) {
{
register Zq0A4_226 *W_51 = &Z217->U_1.V_5.Y4;

Z217 = W_51->Y3;
goto EXIT_18;
}
}
if (Z217 != NIL && Z217->U_1.V_1.Y0 == Zq0A4_105) {
for (;;) {
{
register Zq0A4_231 *W_52 = &Z217->U_1.V_10.Y9;

if (!(((SET_ELEM (Zq0A4_8) | SET_ELEM (Zq0A4_19) | SET_ELEM (Zq0A4_27) | SET_ELEM (Zq0A4_1)) & W_52->Y6) == 0X0L && !ZpmCQ_25((LONGCARD)W_52->Y3, &Z212))) {
goto EXIT_19;
}
ZpmCQ_13(&Z212, (LONGCARD)W_52->Y3);
ZfM_29(Zq0A4_172, (STRING)" public static void Eval", 24L);
Zq0A4_192(W_52->Y3);
ZfM_29(Zq0A4_172, (STRING)"(", 1L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)" yyt) {", 7L);
ZfM_33(Zq0A4_172);
Z208 = TRUE;
Z215 = W_52->Y3;
Z313(Zq0A4_279->U_1.V_32.Y31.Y13);
if (!Z208) {
ZfM_29(Zq0A4_172, (STRING)"// ??? }", 8L);
ZfM_33(Zq0A4_172);
}
ZfM_29(Zq0A4_172, (STRING)" }", 2L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
Z267(W_52->Y1);
return;
}
} EXIT_19:;
{
register Zq0A4_231 *W_53 = &Z217->U_1.V_10.Y9;

Z217 = W_53->Y1;
goto EXIT_18;
}
}
if (Z217 != NIL && Z217->U_1.V_1.Y0 == Zq0A4_106) {
for (;;) {
{
register Zq0A4_232 *W_54 = &Z217->U_1.V_11.Y10;

if (!(((SET_ELEM (Zq0A4_8) | SET_ELEM (Zq0A4_19) | SET_ELEM (Zq0A4_27) | SET_ELEM (Zq0A4_1)) & W_54->Y6) == 0X0L && !ZpmCQ_25((LONGCARD)W_54->Y3, &Z212))) {
goto EXIT_20;
}
ZpmCQ_13(&Z212, (LONGCARD)W_54->Y3);
ZfM_29(Zq0A4_172, (STRING)" public static void Eval", 24L);
Zq0A4_192(W_54->Y3);
ZfM_29(Zq0A4_172, (STRING)"(", 1L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)" yyt) {", 7L);
ZfM_33(Zq0A4_172);
Z208 = TRUE;
Z215 = W_54->Y3;
Z313(Zq0A4_279->U_1.V_32.Y31.Y13);
if (!Z208) {
ZfM_29(Zq0A4_172, (STRING)"// ??? }", 8L);
ZfM_33(Zq0A4_172);
}
ZfM_29(Zq0A4_172, (STRING)" }", 2L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
Z267(W_54->Y1);
return;
}
} EXIT_20:;
{
register Zq0A4_232 *W_55 = &Z217->U_1.V_11.Y10;

Z217 = W_55->Y1;
goto EXIT_18;
}
}
return;
} EXIT_18:;
} EXIT_17:;
}

static void Z313
# ifdef HAVE_ARGS
(Zq0A4_153 Z217)
# else
(Z217)
Zq0A4_153 Z217;
# endif
{
struct S_2 Z243;

for (;;) {
for (;;) {
if (Z217 == Zq0A4_97) {
return;
}
if (Z217 != NIL && Z217->U_1.V_1.Y0 == Zq0A4_100) {
{
register Zq0A4_226 *W_56 = &Z217->U_1.V_5.Y4;

Z200 = 0;
Z198 = 2;
for (;;) {
if (Z198 > W_56->Y13) {
goto EXIT_23;
}
{
register Zq0A4_199 *W_57 = &W_56->Y15->A[Z198 - 1];

if (!IN(Zq0A4_8, W_57->Y3) && W_57->Y1->U_1.V_10.Y9.Y3 == Z215) {
INC(Z200);
goto EXIT_23;
}
}
INC(Z198);
} EXIT_23:;
if (Z200 > 0) {
if (Z208) {
Z208 = FALSE;
} else {
ZfM_29(Zq0A4_172, (STRING)"  else ", 7L);
}
if (W_56->Y4->U_1.V_1.Y0 == Zq0A4_99) {
ZfM_29(Zq0A4_172, (STRING)" if (yyt.yyKind == ", 19L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(W_56->Y1);
ZfM_29(Zq0A4_172, (STRING)") {", 3L);
ZfM_33(Zq0A4_172);
} else {
ZfM_29(Zq0A4_172, (STRING)" if (", 5L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)".isType (yyt, ", 14L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(W_56->Y1);
ZfM_29(Zq0A4_172, (STRING)")) {", 4L);
ZfM_33(Zq0A4_172);
}
ZbpA7kgAA_0 = Z217;
Z216(Z217, Z198);
ZfM_29(Zq0A4_172, (STRING)"  }", 3L);
ZfM_33(Zq0A4_172);
} else {
Z313(W_56->Y4);
}
Z217 = W_56->Y5;
goto EXIT_22;
}
}
return;
} EXIT_22:;
} EXIT_21:;
}

void ZbpA7kgAe_5
 ARGS ((void))
{
}

void ZbpA7kgAe_6
 ARGS ((void))
{
}

static void Z317
 ARGS ((void))
{
ZfM_34();
rExit(1L);
}

void BEGIN_EvalJav3 ARGS ((void))
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
BEGIN_Idents ();
BEGIN_Texts ();
BEGIN_Sets ();
BEGIN_Relation ();
BEGIN_TreeJav1 ();
BEGIN_TreeJav2 ();
BEGIN_EvalJava ();
BEGIN_Errors ();
BEGIN_Position ();
BEGIN_EvalJava ();
BEGIN_Tree ();

ZbpA7kgAe_0 = ZfM_1;
ZbpA7kgAe_2 = Z317;
ZbpA7kgAe_5();
}
