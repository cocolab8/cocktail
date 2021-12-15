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

#ifndef DEFINITION_TreeCxx1
#include "TreeCxx1.h"
#endif

#ifndef DEFINITION_TreeCxx2
#include "TreeCxx2.h"
#endif

#ifndef DEFINITION_EvalCxx
#include "EvalCxx.h"
#endif

#ifndef DEFINITION_Errors
#include "Errors.h"
#endif

#ifndef DEFINITION_Position
#include "Position.h"
#endif

#ifndef DEFINITION_EvalCxx
#include "EvalCxx.h"
#endif

#ifndef DEFINITION_Tree
#include "Tree.h"
#endif

#ifndef DEFINITION_EvalCxx3
#include "EvalCxx3.h"
#endif

ZfM_3 ZbpA7dpZg_0;
BOOLEAN ZbpA7dpZg_1;
PROC ZbpA7dpZg_2;

static SHORTCARD Z197, Z198, Z199, Z200, Z201, Z202, Z203, Z204;
static Zq0A4_153 Z205;
static BOOLEAN Z206, Z207, Z208;
static LONGINT Z209;
static Zq0A4_63 Z210;
static ZpmCQ_4 Z211, Z212;
static LONGINT Z213;
static struct S_1 {
SHORTCARD A[1000000 - 1 + 1];
} *Z214;
static Zfb3DLQ_0 Z215;
static void Z216 ARGS ((Zq0A4_153 Z217, SHORTCARD Z199));
static void Z229 ARGS ((Zq0A4_153 Z217, INTEGER Z197));
static void Z234 ARGS ((CHAR Z235[], LONGCARD O_1));
static BOOLEAN Z238 ARGS ((BYTE Z239[], LONGCARD O_3, BYTE Z240[], LONGCARD O_2));
struct S_22 {
union {
char dummy;
} U_1;
};
struct S_20 {
union {
struct {
struct S_21 {
SHORTCARD Y0;
} Y0;
} V_1;
} U_1;
};
static void Z260 ARGS ((Zq0A4_153 Z217));
struct S_19 {
union {
char dummy;
} U_1;
};
static void Z261 ARGS ((Zq0A4_153 Z217));
struct S_17 {
union {
struct {
struct S_18 {
INTEGER Y0;
} Y0;
} V_1;
} U_1;
};
static void Z268 ARGS ((Zq0A4_153 Z217));
struct S_16 {
union {
char dummy;
} U_1;
};
static void Z269 ARGS ((Zq0A4_153 Z217));
struct S_15 {
union {
char dummy;
} U_1;
};
static void Z266 ARGS ((Zq0A4_153 Z217));
struct S_13 {
union {
struct {
struct S_14 {
ZpmCQ_4 Y0;
} Y0;
} V_1;
} U_1;
};
static void Z263 ARGS ((Zq0A4_153 Z217));
struct S_12 {
union {
char dummy;
} U_1;
};
static void Z283 ARGS ((Zq0A4_153 Z217));
struct S_11 {
union {
char dummy;
} U_1;
};
struct S_10 {
union {
char dummy;
} U_1;
};
static INTEGER Z224 ARGS ((Zq0A4_153 Z286, INTEGER Z287));
struct S_9 {
union {
char dummy;
} U_1;
};
static INTEGER Z228 ARGS ((Zq0A4_153 Z288, Zq0A4_153 Z289, SHORTCARD Z290));
struct S_7 {
union {
struct {
struct S_8 {
INTEGER Y0;
} Y0;
} V_1;
} U_1;
};
static INTEGER Z272 ARGS ((Zq0A4_153 Z292, INTEGER Z293));
struct S_5 {
union {
struct {
struct S_6 {
INTEGER Y0;
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
static void Z295 ARGS ((Zq0A4_153 Z217));
struct S_2 {
union {
char dummy;
} U_1;
};
static void Z299 ARGS ((void));

static void Z216
# ifdef HAVE_ARGS
(Zq0A4_153 Z217, SHORTCARD Z199)
# else
(Z217, Z199)
Zq0A4_153 Z217;
SHORTCARD Z199;
# endif
{
{
register Zq0A4_199 *W_1 = &Z217->U_1.V_5.Y4.Y15->A[Z199 - 1];

if (SET_IS_SUBSET1(SET_ELEM (Zq0A4_7) | SET_ELEM (Zq0A4_20), W_1->Y3)) {
Z200 = ZbpA7dpZg_5(Z217, (LONGINT)Z199);
ZfM_29(Zq0A4_172, (STRING)"IFNOTIN (", 9L);
Zq0A4_195((LONGINT)(Z200 % Zq0A4dpZe_0));
ZfM_29(Zq0A4_172, (STRING)", yyt->yyIsComp", 15L);
Zq0A4_195((LONGINT)(Z200 / Zq0A4dpZe_0));
ZfM_29(Zq0A4_172, (STRING)") {", 3L);
ZfM_29(Zq0A4_172, (STRING)" yyS", 4L);
Zq0A4_195((LONGINT)Z200);
ZfM_29(Zq0A4_172, (STRING)" (yyt); /* ", 11L);
Zq0A4_192(W_1->Y1->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)" */ }", 5L);
ZfM_33(Zq0A4_172);
} else if (SET_IS_SUBSET1(SET_ELEM (Zq0A4_6) | SET_ELEM (Zq0A4_20), W_1->Y3)) {
Z200 = ZbpA7dpZg_5(Z217, (LONGINT)Z199);
ZfM_29(Zq0A4_172, (STRING)"IFNOTIN (", 9L);
Zq0A4_195((LONGINT)(Z200 % Zq0A4dpZe_0));
ZfM_29(Zq0A4_172, (STRING)", yyt->yyIsComp", 15L);
Zq0A4_195((LONGINT)(Z200 / Zq0A4dpZe_0));
ZfM_29(Zq0A4_172, (STRING)") {", 3L);
if (ZpmCQ_25(ORD('Z'), &Zq0A4_171) && IN(Zq0A4_42, Z217->U_1.V_5.Y4.Y2)) {
ZfM_29(Zq0A4_172, (STRING)" yyVisitParent (yyt);", 21L);
ZfM_29(Zq0A4_172, (STRING)" yyI [yyt->yyOffset + ", 22L);
Zq0A4_195((LONGINT)Z200);
ZfM_29(Zq0A4_172, (STRING)"](yyt->yyParent); /* ", 21L);
Zq0A4_192(W_1->Y1->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)" */", 3L);
ZfM_29(Zq0A4_172, (STRING)" yyWriteVisit (yyt->yyParent, \"?\"); }", 37L);
ZfM_33(Zq0A4_172);
} else {
ZfM_29(Zq0A4_172, (STRING)" yyI [yyt->yyOffset + ", 22L);
Zq0A4_195((LONGINT)Z200);
ZfM_29(Zq0A4_172, (STRING)"](yyt->yyParent); /* ", 21L);
Zq0A4_192(W_1->Y1->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)" */ }", 5L);
ZfM_33(Zq0A4_172);
}
} else if (SET_IS_SUBSET1(SET_ELEM (Zq0A4_6) | SET_ELEM (Zq0A4_21), W_1->Y3)) {
Z200 = Z224(W_1->Y0, (LONGINT)(Z199 - Z217->U_1.V_5.Y4.Y13 - W_1->Y0->U_1.V_10.Y9.Y13));
ZfM_29(Zq0A4_172, (STRING)"IFNOTIN (", 9L);
Zq0A4_195((LONGINT)(Z200 % Zq0A4dpZe_0));
ZfM_29(Zq0A4_172, (STRING)", (", 3L);
ZbpA7dpZ_5(ZbpA7dpZ_0->U_1.V_5.Y4.Y1);
ZfM_29(Zq0A4_172, (STRING)"yyt)->", 6L);
Zq0A4_192(W_1->Y0->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)"->yyIsComp", 10L);
Zq0A4_195((LONGINT)(Z200 / Zq0A4dpZe_0));
ZfM_29(Zq0A4_172, (STRING)") {", 3L);
Z200 = Z228(Z217, W_1->Y0, Z199);
ZfM_29(Zq0A4_172, (STRING)" yyI", 4L);
Zq0A4_195((LONGINT)Z200);
ZfM_29(Zq0A4_172, (STRING)" (yyt); /* ", 11L);
Zq0A4_192(W_1->Y0->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)":", 1L);
Zq0A4_192(W_1->Y1->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)" */ }", 5L);
ZfM_33(Zq0A4_172);
} else if (SET_IS_SUBSET1(SET_ELEM (Zq0A4_7) | SET_ELEM (Zq0A4_21), W_1->Y3)) {
Z200 = Z224(W_1->Y0, (LONGINT)(Z199 - Z217->U_1.V_5.Y4.Y13 - W_1->Y0->U_1.V_10.Y9.Y13));
ZfM_29(Zq0A4_172, (STRING)"IFNOTIN (", 9L);
Zq0A4_195((LONGINT)(Z200 % Zq0A4dpZe_0));
ZfM_29(Zq0A4_172, (STRING)", (", 3L);
ZbpA7dpZ_5(ZbpA7dpZ_0->U_1.V_5.Y4.Y1);
ZfM_29(Zq0A4_172, (STRING)"yyt)->", 6L);
Zq0A4_192(W_1->Y0->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)"->yyIsComp", 10L);
Zq0A4_195((LONGINT)(Z200 / Zq0A4dpZe_0));
ZfM_29(Zq0A4_172, (STRING)") {", 3L);
if (ZpmCQ_25(ORD('Z'), &Zq0A4_171) && IN(Zq0A4_42, Z217->U_1.V_5.Y4.Y2)) {
ZfM_29(Zq0A4_172, (STRING)" yyWriteVisit (yyt, \"", 21L);
Zq0A4_192(W_1->Y0->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)"\");", 3L);
ZfM_29(Zq0A4_172, (STRING)" yyS", 4L);
Zq0A4_195((LONGINT)Z200);
ZfM_29(Zq0A4_172, (STRING)" ((", 3L);
ZbpA7dpZ_5(ZbpA7dpZ_0->U_1.V_5.Y4.Y1);
ZfM_29(Zq0A4_172, (STRING)"yyt)->", 6L);
Zq0A4_192(W_1->Y0->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)"); /* ", 6L);
Zq0A4_192(W_1->Y0->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)":", 1L);
Zq0A4_192(W_1->Y1->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)" */", 3L);
ZfM_29(Zq0A4_172, (STRING)" yyVisitParent ((", 17L);
ZbpA7dpZ_5(ZbpA7dpZ_0->U_1.V_5.Y4.Y1);
ZfM_29(Zq0A4_172, (STRING)"yyt)->", 6L);
Zq0A4_192(W_1->Y0->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)"); }", 4L);
ZfM_33(Zq0A4_172);
} else {
ZfM_29(Zq0A4_172, (STRING)" yyS", 4L);
Zq0A4_195((LONGINT)Z200);
ZfM_29(Zq0A4_172, (STRING)" ((", 3L);
ZbpA7dpZ_5(ZbpA7dpZ_0->U_1.V_5.Y4.Y1);
ZfM_29(Zq0A4_172, (STRING)"yyt)->", 6L);
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
(Zq0A4_153 Z217, INTEGER Z197)
# else
(Z217, Z197)
Zq0A4_153 Z217;
INTEGER Z197;
# endif
{
ZbpA7dpZ_0 = Z217;
{
register Zq0A4_199 *W_2 = &Z217->U_1.V_5.Y4.Y15->A[Z197 - 1];

if (ZpmCQ_25(ORD('X'), &Zq0A4_171) && IN(Zq0A4_42, Z217->U_1.V_5.Y4.Y2)) {
ZfM_29(Zq0A4_172, (STRING)"yyWriteEval (yyt, \"", 19L);
Zq0A4_192(W_2->Y1->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)"\");", 3L);
ZfM_33(Zq0A4_172);
if (W_2->Y2 != (Zq0A4_153)ADR (W_2->Y2) && !IN(Zq0A4_1, W_2->Y3)) {
ZbpA7dpZ_10(W_2->Y2);
ZfM_33(Zq0A4_172);
if (IN(Zq0A4_19, W_2->Y3)) {
ZfM_29(Zq0A4_172, (STRING)"writebool (yyb) xxWriteNl ();", 29L);
ZfM_33(Zq0A4_172);
} else if (W_2->Y1->U_1.V_1.Y0 == Zq0A4_105 || W_2->Y1->U_1.V_11.Y10.Y4 == Zq0A4_86) {
ZfM_29(Zq0A4_172, (STRING)"write", 5L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)" ((", 3L);
ZbpA7dpZ_5(Z217->U_1.V_5.Y4.Y1);
ZfM_29(Zq0A4_172, (STRING)"yyt)->", 6L);
Zq0A4_192(W_2->Y1->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)") xxWriteNl ();", 15L);
ZfM_33(Zq0A4_172);
} else {
ZfM_29(Zq0A4_172, (STRING)"write", 5L);
Zq0A4_192(W_2->Y1->U_1.V_10.Y9.Y4);
ZfM_29(Zq0A4_172, (STRING)" ((", 3L);
ZbpA7dpZ_5(Z217->U_1.V_5.Y4.Y1);
ZfM_29(Zq0A4_172, (STRING)"yyt)->", 6L);
Zq0A4_192(W_2->Y1->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)") xxWriteNl ();", 15L);
ZfM_33(Zq0A4_172);
}
} else {
ZfM_29(Zq0A4_172, (STRING)"xxWriteNl ();", 13L);
ZfM_33(Zq0A4_172);
}
} else if (ZpmCQ_25(ORD('Y'), &Zq0A4_171) && IN(Zq0A4_42, Z217->U_1.V_5.Y4.Y2)) {
ZfM_29(Zq0A4_172, (STRING)"yyWriteEval (yyt, \"", 19L);
Zq0A4_192(W_2->Y1->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)"\");", 3L);
ZfM_33(Zq0A4_172);
if (W_2->Y2 != (Zq0A4_153)ADR (W_2->Y2) && !IN(Zq0A4_1, W_2->Y3)) {
ZbpA7dpZ_10(W_2->Y2);
}
} else {
if (W_2->Y2 != (Zq0A4_153)ADR (W_2->Y2) && !IN(Zq0A4_1, W_2->Y3)) {
ZbpA7dpZ_10(W_2->Y2);
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
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)"Error: module EvalCxx3, routine ", 32L);
ZfM_29((ZDz6VQCC_4)ZfM_2, Z235, O_1);
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)" failed", 7L);
ZfM_33((ZDz6VQCC_4)ZfM_2);
(*ZbpA7dpZg_2)();
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

void ZbpA7dpZg_3
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
register Zq0A4_253 *W_3 = &Z217->U_1.V_32.Y31;

ZfM_29(Zq0A4_172, (STRING)"# ifndef yy", 11L);
Zq0A4_192(W_3->Y7);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# define yy", 11L);
Zq0A4_192(W_3->Y7);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# include \"", 11L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)".h\"", 3L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
Zq0A4dpZf_3(W_3->Y8->U_1.V_17.Y16.Y8);
ZqnGVQ_5(Zq0A4_172, W_3->Y8->U_1.V_17.Y16.Y2);
Z205 = W_3->Y14;
while (Z205->U_1.V_1.Y0 == Zq0A4_144) {
Zq0A4dpZf_3(Z205->U_1.V_49.Y48.Y8->U_1.V_17.Y16.Y8);
ZqnGVQ_5(Zq0A4_172, Z205->U_1.V_49.Y48.Y8->U_1.V_17.Y16.Y2);
Z205 = Z205->U_1.V_49.Y48.Y12;
}
Zq0A4dpZf_3(W_3->Y8->U_1.V_17.Y16.Y7);
ZqnGVQ_5(Zq0A4_172, W_3->Y8->U_1.V_17.Y16.Y1);
Z205 = W_3->Y14;
while (Z205->U_1.V_1.Y0 == Zq0A4_144) {
Zq0A4dpZf_3(Z205->U_1.V_49.Y48.Y8->U_1.V_17.Y16.Y7);
ZqnGVQ_5(Zq0A4_172, Z205->U_1.V_49.Y48.Y8->U_1.V_17.Y16.Y1);
Z205 = Z205->U_1.V_49.Y48.Y12;
}
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"extern void ", 12L);
Zq0A4_192(W_3->Y7);
ZfM_29(Zq0A4_172, (STRING)" (", 2L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)" yyt);", 6L);
ZfM_33(Zq0A4_172);
ZpmCQ_5(&Z212, (LONGCARD)Zfb3DLQ_6());
Zq0A4_184(W_3->Y13, (Zq0A4_170)Z256);
ZpmCQ_7(&Z212);
ZfM_29(Zq0A4_172, (STRING)"extern void Begin", 17L);
Zq0A4_192(W_3->Y7);
ZfM_29(Zq0A4_172, (STRING)" ();", 4L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"extern void Close", 17L);
Zq0A4_192(W_3->Y7);
ZfM_29(Zq0A4_172, (STRING)" ();", 4L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# endif", 7L);
ZfM_33(Zq0A4_172);
return;
}
}
}

void ZbpA7dpZg_4
# ifdef HAVE_ARGS
(Zq0A4_153 Z217)
# else
(Z217)
Zq0A4_153 Z217;
# endif
{
struct S_20 Z243;

if (Z217 == Zq0A4_97) {
return;
}
if (Z217 != NIL && Z217->U_1.V_1.Y0 == Zq0A4_127) {
{
register Zq0A4_253 *W_4 = &Z217->U_1.V_32.Y31;

Z202 = 0;
Z203 = 0;
Zq0A4_184(W_4->Y13, (Zq0A4_170)Z260);
ZpmCQ_5(&Z211, (LONGCARD)Z203);
Z213 = Z203;
ZarQdhNDD_0((ADDRESS *)&Z214, &Z213, (LONGINT)sizeof (SHORTCARD));
{
SHORTCARD B_3 = 1, B_4 = Z203;

if (B_3 <= B_4)
for (Z197 = B_3;; Z197 += 1) {
Z214->A[Z197 - 1] = 0;
if (Z197 >= B_4) break;
}
}
Zq0A4_184(W_4->Y13, (Zq0A4_170)Z261);
ZfM_29(Zq0A4_172, (STRING)"# define IFNOTIN(b, s) if (! (s & 1 << b))", 42L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# define INCL(s, b) s |= 1 << b", 31L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# define REMOTE_SYN(i, b, c, n, t, a) (n->i & 1 << b ? (void) 0 : c (n), ((class ", 81L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"::t *) n)->a)", 13L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# define REMOTE_INH(i, b, k, n, t, a) (n->i & 1 << b ? (void) 0 : yyI [n->yyOffset + k](n->yyParent), ((class ", 110L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"::t *) n)->a)", 13L);
ZfM_33(Zq0A4_172);
ZbpA7dpZ_7(Z217);
ZfM_29(Zq0A4_172, (STRING)"static char * yyCheck2 = & generate_", 36L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"_module_with_option_L;", 22L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"static void yyE (register ", 26L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)" yyt);", 6L);
ZfM_33(Zq0A4_172);
{
SHORTCARD B_5 = 1, B_6 = Z202 - 1;

if (B_5 <= B_6)
for (Z197 = B_5;; Z197 += 1) {
ZfM_29(Zq0A4_172, (STRING)"static void yyS", 15L);
Zq0A4_195((LONGINT)Z197);
ZfM_29(Zq0A4_172, (STRING)" (register ", 11L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)" yyt);", 6L);
ZfM_33(Zq0A4_172);
if (Z197 >= B_6) break;
}
}
{
SHORTCARD B_7 = ZpmCQ_17(&Z211), B_8 = ZpmCQ_18(&Z211);

if (B_7 <= B_8)
for (Z197 = B_7;; Z197 += 1) {
if (ZpmCQ_25((LONGCARD)Z197, &Z211)) {
ZfM_29(Zq0A4_172, (STRING)"static void yyI", 15L);
Zq0A4_195((LONGINT)Z197);
ZfM_29(Zq0A4_172, (STRING)" (register ", 11L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)" yyt);", 6L);
ZfM_33(Zq0A4_172);
}
if (Z197 >= B_8) break;
}
}
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"static const ", 13L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"::yytProcTree yyI [", 19L);
Zq0A4_195((LONGINT)(ZpmCQ_18(&Z211) + 1));
ZfM_29(Zq0A4_172, (STRING)"] = { 0,", 8L);
ZfM_33(Zq0A4_172);
{
SHORTCARD B_9 = 1, B_10 = ZpmCQ_18(&Z211);

if (B_9 <= B_10)
for (Z197 = B_9;; Z197 += 1) {
if (ZpmCQ_25((LONGCARD)Z197, &Z211)) {
ZfM_29(Zq0A4_172, (STRING)" yyI", 4L);
Zq0A4_195((LONGINT)Z197);
ZfM_29(Zq0A4_172, (STRING)",", 1L);
ZfM_33(Zq0A4_172);
} else {
ZfM_29(Zq0A4_172, (STRING)" 0,", 3L);
ZfM_33(Zq0A4_172);
}
if (Z197 >= B_10) break;
}
}
ZfM_29(Zq0A4_172, (STRING)"};", 2L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"static void yyAbort (", 21L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)" yyt)", 5L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"{", 1L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" ", 1L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"::ErrorsObj->ErrorMessageI (xxCyclicDependencies, xxFatal, NoPosition,", 70L);
ZfM_29(Zq0A4_172, (STRING)" xxString, \"", 12L);
Zq0A4_192(W_4->Y7);
ZfM_29(Zq0A4_172, (STRING)"\");", 3L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" throw ", 7L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"::ErrorsObj->CodeToText (xxCyclicDependencies);", 47L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"}", 1L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"void ", 5L);
Zq0A4_192(W_4->Y7);
ZfM_29(Zq0A4_172, (STRING)" (", 2L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)" yyt)", 5L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"{", 1L);
ZfM_33(Zq0A4_172);
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
ZfM_29(Zq0A4_172, (STRING)" ", 1L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"::yyInit (yyt); yyE (yyt);", 26L);
ZfM_33(Zq0A4_172);
if (ZpmCQ_25(ORD('9'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)" printf (\"Stacksize %ld\\n\", (long) (& yyHigh - yyMinLow));", 58L);
ZfM_33(Zq0A4_172);
}
ZfM_29(Zq0A4_172, (STRING)"}", 1L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
do {
Z207 = TRUE;
Zq0A4_184(W_4->Y13, (Zq0A4_170)Z263);
} while (!Z207);
ZfM_29(Zq0A4_172, (STRING)"static void yyE (register ", 26L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)" yyt)", 5L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"{", 1L);
ZfM_33(Zq0A4_172);
Zq0A4dpZf_3(Zq0A4_279->U_1.V_32.Y31.Y8->U_1.V_17.Y16.Y10);
ZqnGVQ_5(Zq0A4_172, Zq0A4_279->U_1.V_32.Y31.Y8->U_1.V_17.Y16.Y4);
Z205 = Zq0A4_279->U_1.V_32.Y31.Y14;
while (Z205->U_1.V_1.Y0 == Zq0A4_144) {
Zq0A4dpZf_3(Z205->U_1.V_49.Y48.Y8->U_1.V_17.Y16.Y10);
ZqnGVQ_5(Zq0A4_172, Z205->U_1.V_49.Y48.Y8->U_1.V_17.Y16.Y4);
Z205 = Z205->U_1.V_49.Y48.Y12;
}
if (ZpmCQ_25(ORD('9'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)" char yyLow;", 12L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" if (& yyLow < yyMinLow) yyMinLow = & yyLow;", 44L);
ZfM_33(Zq0A4_172);
}
ZfM_29(Zq0A4_172, (STRING)" for (;;) {", 11L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  if (yyt == ", 13L);
Zq0A4_192(Zq0A4_88);
ZfM_29(Zq0A4_172, (STRING)" || yyt->yyIsComp0 & 1) return;", 31L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  yyt->yyIsComp0 |= 1;", 22L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  switch (yyt->Kind) {", 22L);
ZfM_33(Zq0A4_172);
Zq0A4_184(W_4->Y13, (Zq0A4_170)Z266);
ZfM_29(Zq0A4_172, (STRING)"  default: return;", 18L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  }", 3L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" }", 2L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"}", 1L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZpmCQ_5(&Z212, (LONGCARD)Zfb3DLQ_6());
Zq0A4_184(W_4->Y13, (Zq0A4_170)Z267);
ZpmCQ_7(&Z212);
{
SHORTCARD B_11 = 2, B_12 = Z202;

if (B_11 <= B_12)
for (Z197 = B_11;; Z197 += 1) {
Z201 = 0;
Zq0A4_184(W_4->Y13, (Zq0A4_170)Z268);
if (Z201 > 0) {
ZfM_29(Zq0A4_172, (STRING)"static void yyS", 15L);
Zq0A4_195((LONGINT)(Z197 - 1));
ZfM_29(Zq0A4_172, (STRING)" (register ", 11L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)" yyt)", 5L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"{", 1L);
ZfM_33(Zq0A4_172);
Zq0A4dpZf_3(Zq0A4_279->U_1.V_32.Y31.Y8->U_1.V_17.Y16.Y10);
ZqnGVQ_5(Zq0A4_172, Zq0A4_279->U_1.V_32.Y31.Y8->U_1.V_17.Y16.Y4);
Z205 = Zq0A4_279->U_1.V_32.Y31.Y14;
while (Z205->U_1.V_1.Y0 == Zq0A4_144) {
Zq0A4dpZf_3(Z205->U_1.V_49.Y48.Y8->U_1.V_17.Y16.Y10);
ZqnGVQ_5(Zq0A4_172, Z205->U_1.V_49.Y48.Y8->U_1.V_17.Y16.Y4);
Z205 = Z205->U_1.V_49.Y48.Y12;
}
if (ZpmCQ_25(ORD('9'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)" char yyLow;", 12L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" if (& yyLow < yyMinLow) yyMinLow = & yyLow;", 44L);
ZfM_33(Zq0A4_172);
}
if (ZpmCQ_25(ORD('5'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)" IFNOTIN (", 10L);
Zq0A4_195((LONGINT)((Z197 - 1) % Zq0A4dpZe_0));
ZfM_29(Zq0A4_172, (STRING)", yyt->yyIsDone", 15L);
Zq0A4_195((LONGINT)((Z197 - 1) / Zq0A4dpZe_0));
ZfM_29(Zq0A4_172, (STRING)") { INCL (yyt->yyIsDone", 23L);
Zq0A4_195((LONGINT)((Z197 - 1) / Zq0A4dpZe_0));
ZfM_29(Zq0A4_172, (STRING)", ", 2L);
Zq0A4_195((LONGINT)((Z197 - 1) % Zq0A4dpZe_0));
ZfM_29(Zq0A4_172, (STRING)"); } else yyAbort (yyt);", 24L);
ZfM_33(Zq0A4_172);
}
if (Z201 > 1) {
ZfM_29(Zq0A4_172, (STRING)" switch (yyt->Kind) {", 21L);
ZfM_33(Zq0A4_172);
Zq0A4_184(W_4->Y13, (Zq0A4_170)Z269);
ZfM_29(Zq0A4_172, (STRING)" }", 2L);
ZfM_33(Zq0A4_172);
} else {
Zq0A4_184(W_4->Y13, (Zq0A4_170)Z269);
}
ZfM_29(Zq0A4_172, (STRING)" INCL (yyt->yyIsComp", 20L);
Zq0A4_195((LONGINT)((Z197 - 1) / Zq0A4dpZe_0));
ZfM_29(Zq0A4_172, (STRING)", ", 2L);
Zq0A4_195((LONGINT)((Z197 - 1) % Zq0A4dpZe_0));
ZfM_29(Zq0A4_172, (STRING)");", 2L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"}", 1L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
}
if (Z197 >= B_12) break;
}
}
{
SHORTCARD B_13 = ZpmCQ_17(&Z211), B_14 = ZpmCQ_18(&Z211);

if (B_13 <= B_14)
for (Z197 = B_13;; Z197 += 1) {
if (ZpmCQ_25((LONGCARD)Z197, &Z211)) {
ZfM_29(Zq0A4_172, (STRING)"static void yyI", 15L);
Zq0A4_195((LONGINT)Z197);
ZfM_29(Zq0A4_172, (STRING)" (register ", 11L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)" yyt)", 5L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"{", 1L);
ZfM_33(Zq0A4_172);
Zq0A4dpZf_3(Zq0A4_279->U_1.V_32.Y31.Y8->U_1.V_17.Y16.Y10);
ZqnGVQ_5(Zq0A4_172, Zq0A4_279->U_1.V_32.Y31.Y8->U_1.V_17.Y16.Y4);
Z205 = Zq0A4_279->U_1.V_32.Y31.Y14;
while (Z205->U_1.V_1.Y0 == Zq0A4_144) {
Zq0A4dpZf_3(Z205->U_1.V_49.Y48.Y8->U_1.V_17.Y16.Y10);
ZqnGVQ_5(Zq0A4_172, Z205->U_1.V_49.Y48.Y8->U_1.V_17.Y16.Y4);
Z205 = Z205->U_1.V_49.Y48.Y12;
}
if (ZpmCQ_25(ORD('9'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)" char yyLow;", 12L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" if (& yyLow < yyMinLow) yyMinLow = & yyLow;", 44L);
ZfM_33(Zq0A4_172);
}
Z204 = 0;
if (Z214->A[Z197 - 1] > 1) {
ZfM_29(Zq0A4_172, (STRING)" switch (yyt->Kind) {", 21L);
ZfM_33(Zq0A4_172);
Zq0A4_184(W_4->Y13, (Zq0A4_170)ZbpA7dpZg_4);
ZfM_29(Zq0A4_172, (STRING)" }", 2L);
ZfM_33(Zq0A4_172);
} else {
Zq0A4_184(W_4->Y13, (Zq0A4_170)ZbpA7dpZg_4);
}
if (Z204 != Z214->A[Z197 - 1]) {
ZblNKKO_45((STRING)"internal error in yyI", 21L, (LONGCARD)ZblNKKO_16, ZmtLFGGBG_1, (LONGCARD)ZblNKKO_23, ADR (Z197));
INC(Zq0A4_0);
}
ZfM_29(Zq0A4_172, (STRING)"}", 1L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
}
if (Z197 >= B_14) break;
}
}
ZbpA7dpZ_8(Z217);
return;
}
}
if (Z217 != NIL && Z217->U_1.V_1.Y0 == Zq0A4_100) {
{
register struct S_21 *W_5 = &Z243.U_1.V_1.Y0;

for (;;) {
{
register Zq0A4_226 *W_6 = &Z217->U_1.V_5.Y4;

if (!((Zq0A4_177 & W_6->Y2) == 0X0L)) {
goto EXIT_1;
}
if (!(Z197 <= W_6->Y14)) {
goto EXIT_1;
}
W_5->Y0 = Z272(Z217, (LONGINT)Z197);
if (W_5->Y0 == 0) {
return;
}
{
register Zq0A4_199 *W_7 = &W_6->Y15->A[W_5->Y0 - 1];

if (SET_IS_SUBSET1(SET_ELEM (Zq0A4_6) | SET_ELEM (Zq0A4_21), W_7->Y3)) {
ZbpA7dpZ_0 = Z217;
if (Z214->A[Z197 - 1] > 1) {
ZfM_29(Zq0A4_172, (STRING)"  case k", 8L);
Zq0A4_192(W_6->Y1);
ZfM_29(Zq0A4_172, (STRING)":", 1L);
ZfM_33(Zq0A4_172);
}
INC(Z204);
Z200 = Z224(W_7->Y0, (LONGINT)(W_5->Y0 - W_6->Y13 - W_7->Y0->U_1.V_10.Y9.Y13));
if (ZpmCQ_25(ORD('5'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)" IFNOTIN (", 10L);
Zq0A4_195((LONGINT)(Z200 % Zq0A4dpZe_0));
ZfM_29(Zq0A4_172, (STRING)", (", 3L);
ZbpA7dpZ_5(ZbpA7dpZ_0->U_1.V_5.Y4.Y1);
ZfM_29(Zq0A4_172, (STRING)"yyt)->", 6L);
Zq0A4_192(W_7->Y0->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)"->yyIsDone", 10L);
Zq0A4_195((LONGINT)(Z200 / Zq0A4dpZe_0));
ZfM_29(Zq0A4_172, (STRING)") { INCL ((", 11L);
ZbpA7dpZ_5(ZbpA7dpZ_0->U_1.V_5.Y4.Y1);
ZfM_29(Zq0A4_172, (STRING)"yyt)->", 6L);
Zq0A4_192(W_7->Y0->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)"->yyIsDone", 10L);
Zq0A4_195((LONGINT)(Z200 / Zq0A4dpZe_0));
ZfM_29(Zq0A4_172, (STRING)", ", 2L);
Zq0A4_195((LONGINT)(Z200 % Zq0A4dpZe_0));
ZfM_29(Zq0A4_172, (STRING)"); } else yyAbort (yyt);", 24L);
ZfM_33(Zq0A4_172);
}
{
SHORTCARD B_15 = 1, B_16 = W_6->Y14;

if (B_15 <= B_16)
for (Z199 = B_15;; Z199 += 1) {
if (ZolB7FGBG_9((LONGINT)W_5->Y0, (LONGINT)Z199, W_6->Y16)) {
Z216(Z217, Z199);
}
if (Z199 >= B_16) break;
}
}
if (ZpmCQ_25(ORD('X'), &Zq0A4_171) && IN(Zq0A4_42, Z217->U_1.V_5.Y4.Y2)) {
ZfM_29(Zq0A4_172, (STRING)"yyWriteEval (yyt, \"", 19L);
Zq0A4_192(W_7->Y0->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)":", 1L);
Zq0A4_192(W_7->Y1->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)"\");", 3L);
ZfM_33(Zq0A4_172);
if (W_7->Y2 != (Zq0A4_153)ADR (W_7->Y2) && !IN(Zq0A4_1, W_7->Y3)) {
ZbpA7dpZ_10(W_7->Y2);
ZfM_33(Zq0A4_172);
if (W_7->Y1->U_1.V_1.Y0 == Zq0A4_105 || W_7->Y1->U_1.V_11.Y10.Y4 == Zq0A4_86) {
ZfM_29(Zq0A4_172, (STRING)"write", 5L);
Zq0A4_192(Zq0A4_86);
} else {
ZfM_29(Zq0A4_172, (STRING)"write", 5L);
Zq0A4_192(W_7->Y1->U_1.V_10.Y9.Y4);
}
ZfM_29(Zq0A4_172, (STRING)" ((", 3L);
ZbpA7dpZ_5(W_6->Y1);
ZfM_29(Zq0A4_172, (STRING)"yyt)->", 6L);
Zq0A4_192(W_7->Y0->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)"->", 2L);
Zq0A4_192(W_7->Y1->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)") xxWriteNl ();", 15L);
ZfM_33(Zq0A4_172);
} else {
ZfM_29(Zq0A4_172, (STRING)"xxWriteNl ();", 13L);
ZfM_33(Zq0A4_172);
}
} else if (ZpmCQ_25(ORD('Y'), &Zq0A4_171) && IN(Zq0A4_42, Z217->U_1.V_5.Y4.Y2)) {
ZfM_29(Zq0A4_172, (STRING)"yyWriteEval (yyt, \"", 19L);
Zq0A4_192(W_7->Y0->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)":", 1L);
Zq0A4_192(W_7->Y1->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)"\");", 3L);
ZfM_33(Zq0A4_172);
if (W_7->Y2 != (Zq0A4_153)ADR (W_7->Y2) && !IN(Zq0A4_1, W_7->Y3)) {
ZbpA7dpZ_10(W_7->Y2);
}
} else {
if (W_7->Y2 != (Zq0A4_153)ADR (W_7->Y2) && !IN(Zq0A4_1, W_7->Y3)) {
ZbpA7dpZ_10(W_7->Y2);
}
}
if (!IN(Zq0A4_8, W_7->Y3) && W_7->Y1->U_1.V_1.Y0 == Zq0A4_105) {
ZfM_29(Zq0A4_172, (STRING)"{ register ", 11L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)" yyr = (", 8L);
ZbpA7dpZ_5(W_6->Y1);
ZfM_29(Zq0A4_172, (STRING)"yyt)->", 6L);
Zq0A4_192(W_7->Y0->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)"->", 2L);
Zq0A4_192(W_7->Y1->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)"; if (yyr->yyParent == ", 23L);
Zq0A4_192(Zq0A4_88);
ZfM_29(Zq0A4_172, (STRING)") { yyr->yyOffset = ", 20L);
Zq0A4_195((LONGINT)(W_7->Y0->U_1.V_10.Y9.Y8->U_1.V_5.Y4.Y25 + W_7->Y1->U_1.V_10.Y9.Y15));
ZfM_29(Zq0A4_172, (STRING)"; yyr->yyParent = (", 19L);
ZbpA7dpZ_5(W_6->Y1);
ZfM_29(Zq0A4_172, (STRING)"yyt)->", 6L);
Zq0A4_192(W_7->Y0->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)"; ", 2L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"::yyInit (yyr); } }", 19L);
ZfM_33(Zq0A4_172);
}
{
SHORTCARD B_17 = 1, B_18 = W_6->Y14;

if (B_17 <= B_18)
for (Z198 = B_17;; Z198 += 1) {
if (W_6->Y15->A[Z198 - 1].Y2 == W_7->Y2) {
{
register Zq0A4_199 *W_8 = &W_6->Y15->A[Z198 - 1];

if (IN(Zq0A4_7, W_8->Y3)) {
Z200 = ZbpA7dpZg_5(ZbpA7dpZ_0, (LONGINT)Z198);
ZfM_29(Zq0A4_172, (STRING)"  INCL (yyt->yyIsComp", 21L);
Zq0A4_195((LONGINT)(Z200 / Zq0A4dpZe_0));
ZfM_29(Zq0A4_172, (STRING)", ", 2L);
Zq0A4_195((LONGINT)(Z200 % Zq0A4dpZe_0));
ZfM_29(Zq0A4_172, (STRING)");", 2L);
ZfM_33(Zq0A4_172);
} else if (IN(Zq0A4_6, W_8->Y3)) {
Z200 = Z224(W_8->Y0, (LONGINT)(Z198 - W_6->Y13 - W_8->Y0->U_1.V_10.Y9.Y13));
ZfM_29(Zq0A4_172, (STRING)"  INCL ((", 9L);
ZbpA7dpZ_5(ZbpA7dpZ_0->U_1.V_5.Y4.Y1);
ZfM_29(Zq0A4_172, (STRING)"yyt)->", 6L);
Zq0A4_192(W_8->Y0->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)"->yyIsComp", 10L);
Zq0A4_195((LONGINT)(Z200 / Zq0A4dpZe_0));
ZfM_29(Zq0A4_172, (STRING)", ", 2L);
Zq0A4_195((LONGINT)(Z200 % Zq0A4dpZe_0));
ZfM_29(Zq0A4_172, (STRING)");", 2L);
ZfM_33(Zq0A4_172);
}
}
}
if (Z198 >= B_18) break;
}
}
ZfM_29(Zq0A4_172, (STRING)" return;", 8L);
ZfM_33(Zq0A4_172);
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
struct S_19 Z243;

if (Z217 == Zq0A4_97) {
return;
}
if (Z217 != NIL && Z217->U_1.V_1.Y0 == Zq0A4_100) {
{
register Zq0A4_226 *W_9 = &Z217->U_1.V_5.Y4;

Z209 = W_9->Y13;
ZarQdhNDD_0((ADDRESS *)&W_9->Y26, &Z209, (LONGINT)sizeof (Zq0A4_62));
Z197 = 1;
Z210 = W_9->Y26;
Zq0A4_185(Z217, (Zq0A4_170)Z260);
Z202 = ZdaDDAD7_4((LONGINT)Z197, (LONGINT)Z202);
Z203 = ZdaDDAD7_4((LONGINT)W_9->Y14, (LONGINT)Z203);
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
INC(Z197);
Z210->A[W_10->Y10 - 1].Y0 = Z197;
Z210->A[Z197 - 1].Y1 = W_10->Y10;
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
INC(Z197);
Z210->A[W_11->Y10 - 1].Y0 = Z197;
Z210->A[Z197 - 1].Y1 = W_11->Y10;
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
struct S_17 Z243;

if (Z217 == Zq0A4_97) {
return;
}
if (Z217 != NIL && Z217->U_1.V_1.Y0 == Zq0A4_100) {
{
register struct S_18 *W_12 = &Z243.U_1.V_1.Y0;

{
register Zq0A4_226 *W_13 = &Z217->U_1.V_5.Y4;

{
SHORTCARD B_19 = W_13->Y13 + 1, B_20 = W_13->Y14;

if (B_19 <= B_20)
for (Z199 = B_19;; Z199 += 1) {
{
register Zq0A4_199 *W_14 = &W_13->Y15->A[Z199 - 1];

if (IN(Zq0A4_6, W_14->Y3)) {
W_12->Y0 = Z228(Z217, W_14->Y0, Z199);
ZpmCQ_13(&Z211, (LONGCARD)W_12->Y0);
INC(Z214->A[W_12->Y0 - 1]);
}
}
if (Z199 >= B_20) break;
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
struct S_16 Z243;

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
if (!(Z197 <= W_15->Y25)) {
goto EXIT_4;
}
{
register Zq0A4_199 *W_16 = &W_15->Y15->A[W_15->Y26->A[Z197 - 1].Y1 - 1];

if (SET_IS_SUBSET1(SET_ELEM (Zq0A4_7) | SET_ELEM (Zq0A4_20), W_16->Y3) && !IN(Zq0A4_19, W_16->Y3)) {
INC(Z201);
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
struct S_15 Z243;

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
if (!(Z197 <= W_17->Y25)) {
goto EXIT_5;
}
{
register Zq0A4_199 *W_18 = &W_17->Y15->A[W_17->Y26->A[Z197 - 1].Y1 - 1];

if (SET_IS_SUBSET1(SET_ELEM (Zq0A4_7) | SET_ELEM (Zq0A4_20), W_18->Y3) && !IN(Zq0A4_19, W_18->Y3)) {
ZbpA7dpZ_0 = Z217;
if (Z201 > 1) {
ZfM_29(Zq0A4_172, (STRING)" case k", 7L);
Zq0A4_192(W_17->Y1);
ZfM_29(Zq0A4_172, (STRING)":", 1L);
ZfM_33(Zq0A4_172);
}
{
SHORTCARD B_21 = 1, B_22 = W_17->Y14;

if (B_21 <= B_22)
for (Z199 = B_21;; Z199 += 1) {
if (ZolB7FGBG_9((LONGINT)W_17->Y26->A[Z197 - 1].Y1, (LONGINT)Z199, W_17->Y16)) {
Z216(Z217, Z199);
}
if (Z199 >= B_22) break;
}
}
Z229(Z217, (LONGINT)W_17->Y26->A[Z197 - 1].Y1);
if (!IN(Zq0A4_8, W_18->Y3) && W_18->Y1->U_1.V_1.Y0 == Zq0A4_105) {
ZfM_29(Zq0A4_172, (STRING)"{ register ", 11L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)" yyr = (", 8L);
ZbpA7dpZ_5(W_17->Y1);
ZfM_29(Zq0A4_172, (STRING)"yyt)->", 6L);
Zq0A4_192(W_18->Y1->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)"; if (yyr->yyParent == ", 23L);
Zq0A4_192(Zq0A4_88);
ZfM_29(Zq0A4_172, (STRING)") { yyr->yyOffset = ", 20L);
Zq0A4_195((LONGINT)(W_17->Y25 + W_18->Y1->U_1.V_10.Y9.Y15));
ZfM_29(Zq0A4_172, (STRING)"; yyr->yyParent = yyt; ", 23L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"::yyInit (yyr); } }", 19L);
ZfM_33(Zq0A4_172);
}
{
SHORTCARD B_23 = 1, B_24 = W_17->Y14;

if (B_23 <= B_24)
for (Z198 = B_23;; Z198 += 1) {
if (W_17->Y15->A[Z198 - 1].Y2 == W_18->Y2) {
{
register Zq0A4_199 *W_19 = &W_17->Y15->A[Z198 - 1];

if (IN(Zq0A4_7, W_19->Y3)) {
Z200 = ZbpA7dpZg_5(ZbpA7dpZ_0, (LONGINT)Z198);
if (Z200 != Z197 - 1) {
ZfM_29(Zq0A4_172, (STRING)"  INCL (yyt->yyIsComp", 21L);
Zq0A4_195((LONGINT)(Z200 / Zq0A4dpZe_0));
ZfM_29(Zq0A4_172, (STRING)", ", 2L);
Zq0A4_195((LONGINT)(Z200 % Zq0A4dpZe_0));
ZfM_29(Zq0A4_172, (STRING)");", 2L);
ZfM_33(Zq0A4_172);
}
} else if (IN(Zq0A4_6, W_19->Y3)) {
Z200 = Z224(W_19->Y0, (LONGINT)(Z198 - W_17->Y13 - W_19->Y0->U_1.V_10.Y9.Y13));
ZfM_29(Zq0A4_172, (STRING)"  INCL ((", 9L);
ZbpA7dpZ_5(ZbpA7dpZ_0->U_1.V_5.Y4.Y1);
ZfM_29(Zq0A4_172, (STRING)"yyt)->", 6L);
Zq0A4_192(W_19->Y0->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)"->yyIsComp", 10L);
Zq0A4_195((LONGINT)(Z200 / Zq0A4dpZe_0));
ZfM_29(Zq0A4_172, (STRING)", ", 2L);
Zq0A4_195((LONGINT)(Z200 % Zq0A4dpZe_0));
ZfM_29(Zq0A4_172, (STRING)");", 2L);
ZfM_33(Zq0A4_172);
}
}
}
if (Z198 >= B_24) break;
}
}
if (Z201 > 1) {
ZfM_29(Zq0A4_172, (STRING)"  break;", 8L);
ZfM_33(Zq0A4_172);
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
struct S_13 Z243;

if (Z217 == Zq0A4_97) {
return;
}
if (Z217 != NIL && Z217->U_1.V_1.Y0 == Zq0A4_100) {
{
register struct S_14 *W_20 = &Z243.U_1.V_1.Y0;

{
register Zq0A4_226 *W_21 = &Z217->U_1.V_5.Y4;

Zq0A4dpZf_8(Z217);
Z201 = 0;
Z199 = 2;
for (;;) {
if (Z199 > W_21->Y14) {
goto EXIT_6;
}
{
register Zq0A4_199 *W_22 = &W_21->Y15->A[Z199 - 1];

if (((SET_ELEM (Zq0A4_27) | SET_ELEM (Zq0A4_9) | SET_ELEM (Zq0A4_19)) & W_22->Y3) != 0X0L) {
if (IN(Zq0A4_19, W_22->Y3) || SET_IS_SUBSET1(SET_ELEM (Zq0A4_7) | SET_ELEM (Zq0A4_20), W_22->Y3) || SET_IS_SUBSET1(SET_ELEM (Zq0A4_6) | SET_ELEM (Zq0A4_21), W_22->Y3) || SET_IS_SUBSET1(SET_ELEM (Zq0A4_6) | SET_ELEM (Zq0A4_20), W_22->Y3) && !IN(Zq0A4_8, W_22->Y3) && W_22->Y1->U_1.V_1.Y0 == Zq0A4_105 || SET_IS_SUBSET1(SET_ELEM (Zq0A4_7) | SET_ELEM (Zq0A4_21) | SET_ELEM (Zq0A4_27), W_22->Y3) && W_22->Y0 != Zq0A4dpZf_2 && IN(Zq0A4_49, W_22->Y0->U_1.V_10.Y9.Y8->U_1.V_5.Y4.Y2)) {
INC(Z201);
goto EXIT_6;
}
}
}
INC(Z199);
} EXIT_6:;
if (Z201 == 0 && (Zq0A4dpZf_2 == Zq0A4_97 || !IN(Zq0A4_49, Zq0A4dpZf_2->U_1.V_10.Y9.Y8->U_1.V_5.Y4.Y2))) {
return;
}
ZbpA7dpZ_0 = Z217;
ZfM_29(Zq0A4_172, (STRING)"  case k", 8L);
Zq0A4_192(W_21->Y1);
ZfM_29(Zq0A4_172, (STRING)":", 1L);
ZfM_33(Zq0A4_172);
{
SHORTCARD B_25 = 2, B_26 = W_21->Y14;

if (B_25 <= B_26)
for (Z199 = B_25;; Z199 += 1) {
{
register Zq0A4_199 *W_23 = &W_21->Y15->A[Z199 - 1];

if (((SET_ELEM (Zq0A4_27) | SET_ELEM (Zq0A4_9)) & W_23->Y3) != 0X0L) {
if (SET_IS_SUBSET1(SET_ELEM (Zq0A4_7) | SET_ELEM (Zq0A4_20), W_23->Y3) || SET_IS_SUBSET1(SET_ELEM (Zq0A4_6) | SET_ELEM (Zq0A4_21), W_23->Y3) || SET_IS_SUBSET1(SET_ELEM (Zq0A4_6) | SET_ELEM (Zq0A4_20), W_23->Y3) && !IN(Zq0A4_8, W_23->Y3) && W_23->Y1->U_1.V_1.Y0 == Zq0A4_105) {
Z216(Z217, Z199);
} else if (SET_IS_SUBSET1(SET_ELEM (Zq0A4_7) | SET_ELEM (Zq0A4_21) | SET_ELEM (Zq0A4_27), W_23->Y3) && W_23->Y0 != Zq0A4dpZf_2 && IN(Zq0A4_49, W_23->Y0->U_1.V_10.Y9.Y8->U_1.V_5.Y4.Y2)) {
if (ZpmCQ_25(ORD('Z'), &Zq0A4_171) && IN(Zq0A4_42, Z217->U_1.V_5.Y4.Y2)) {
ZfM_29(Zq0A4_172, (STRING)"yyWriteVisit (yyt, \"", 20L);
Zq0A4_192(W_23->Y0->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)"\"); ", 4L);
}
ZfM_29(Zq0A4_172, (STRING)"yyE ((", 6L);
ZbpA7dpZ_5(W_21->Y1);
ZfM_29(Zq0A4_172, (STRING)"yyt)->", 6L);
Zq0A4_192(W_23->Y0->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)");", 2L);
ZfM_33(Zq0A4_172);
if (ZpmCQ_25(ORD('Z'), &Zq0A4_171) && IN(Zq0A4_42, Z217->U_1.V_5.Y4.Y2)) {
ZfM_29(Zq0A4_172, (STRING)"yyVisitParent ((", 16L);
ZbpA7dpZ_5(W_21->Y1);
ZfM_29(Zq0A4_172, (STRING)"yyt)->", 6L);
Zq0A4_192(W_23->Y0->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)");", 2L);
ZfM_33(Zq0A4_172);
}
}
}
}
if (Z199 >= B_26) break;
}
}
ZpmCQ_5(&W_20->Y0, (LONGCARD)W_21->Y14);
{
SHORTCARD B_27 = 2, B_28 = W_21->Y13;

if (B_27 <= B_28)
for (Z197 = B_27;; Z197 += 1) {
{
register Zq0A4_199 *W_24 = &W_21->Y15->A[Z197 - 1];

if (IN(Zq0A4_19, W_24->Y3)) {
{
SHORTCARD B_29 = 2, B_30 = W_21->Y14;

if (B_29 <= B_30)
for (Z199 = B_29;; Z199 += 1) {
if (ZolB7FGBG_9((LONGINT)Z197, (LONGINT)Z199, W_21->Y16)) {
if (((SET_ELEM (Zq0A4_7) | SET_ELEM (Zq0A4_6)) & W_21->Y15->A[Z199 - 1].Y3) != 0X0L) {
ZpmCQ_13(&W_20->Y0, (LONGCARD)Z199);
}
}
if (Z199 >= B_30) break;
}
}
}
}
if (Z197 >= B_28) break;
}
}
{
SHORTCARD B_31 = 2, B_32 = W_21->Y14;

if (B_31 <= B_32)
for (Z197 = B_31;; Z197 += 1) {
{
register Zq0A4_199 *W_25 = &W_21->Y15->A[Z197 - 1];

if (SET_IS_SUBSET1(SET_ELEM (Zq0A4_7) | SET_ELEM (Zq0A4_20) | SET_ELEM (Zq0A4_9), W_25->Y3) || SET_IS_SUBSET1(SET_ELEM (Zq0A4_6) | SET_ELEM (Zq0A4_21) | SET_ELEM (Zq0A4_9), W_25->Y3)) {
ZpmCQ_14(&W_20->Y0, (LONGCARD)Z197);
}
}
if (Z197 >= B_32) break;
}
}
while (!ZpmCQ_26(W_20->Y0)) {
Z216(Z217, (SHORTCARD)ZpmCQ_20(&W_20->Y0));
}
ZpmCQ_7(&W_20->Y0);
{
SHORTCARD B_33 = 2, B_34 = W_21->Y13;

if (B_33 <= B_34)
for (Z197 = B_33;; Z197 += 1) {
if (IN(Zq0A4_19, W_21->Y15->A[Z197 - 1].Y3)) {
Z229(Z217, (LONGINT)Z197);
}
if (Z197 >= B_34) break;
}
}
if (Zq0A4dpZf_2 == Zq0A4_97 || !IN(Zq0A4_49, Zq0A4dpZf_2->U_1.V_10.Y9.Y8->U_1.V_5.Y4.Y2)) {
ZfM_29(Zq0A4_172, (STRING)"return;", 7L);
ZfM_33(Zq0A4_172);
} else {
if (ZpmCQ_25(ORD('Z'), &Zq0A4_171) && IN(Zq0A4_42, Z217->U_1.V_5.Y4.Y2)) {
ZfM_29(Zq0A4_172, (STRING)"yyWriteVisit (yyt, \"", 20L);
Zq0A4_192(Zq0A4dpZf_2->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)"\"); ", 4L);
}
ZfM_29(Zq0A4_172, (STRING)"yyt = (", 7L);
ZbpA7dpZ_5(W_21->Y1);
ZfM_29(Zq0A4_172, (STRING)"yyt)->", 6L);
Zq0A4_192(Zq0A4dpZf_2->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)"; break;", 8L);
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
struct S_12 Z243;

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
Zq0A4_184(W_26->Y4, (Zq0A4_170)Z283);
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

static void Z283
# ifdef HAVE_ARGS
(Zq0A4_153 Z217)
# else
(Z217)
Zq0A4_153 Z217;
# endif
{
struct S_11 Z243;

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

INTEGER ZbpA7dpZg_5
# ifdef HAVE_ARGS
(Zq0A4_153 Z284, INTEGER Z285)
# else
(Z284, Z285)
Zq0A4_153 Z284;
INTEGER Z285;
# endif
{
struct S_10 Z243;

return Z284->U_1.V_5.Y4.Y26->A[Z285 - 1].Y0 - 1;
}

static INTEGER Z224
# ifdef HAVE_ARGS
(Zq0A4_153 Z286, INTEGER Z287)
# else
(Z286, Z287)
Zq0A4_153 Z286;
INTEGER Z287;
# endif
{
struct S_9 Z243;

return Z286->U_1.V_10.Y9.Y8->U_1.V_5.Y4.Y26->A[Z287 - 1].Y0 - 1;
}

static INTEGER Z228
# ifdef HAVE_ARGS
(Zq0A4_153 Z288, Zq0A4_153 Z289, SHORTCARD Z290)
# else
(Z288, Z289, Z290)
Zq0A4_153 Z288;
Zq0A4_153 Z289;
SHORTCARD Z290;
# endif
{
struct S_7 Z243;

{
register struct S_8 *W_30 = &Z243.U_1.V_1.Y0;

{
register Zq0A4_231 *W_31 = &Z289->U_1.V_10.Y9;

return Z288->U_1.V_5.Y4.Y25 + W_31->Y15 + W_31->Y8->U_1.V_5.Y4.Y26->A[Z290 - Z288->U_1.V_5.Y4.Y13 - W_31->Y13 - 1].Y0 - 1;
}
return W_30->Y0;
}
}

static INTEGER Z272
# ifdef HAVE_ARGS
(Zq0A4_153 Z292, INTEGER Z293)
# else
(Z292, Z293)
Zq0A4_153 Z292;
INTEGER Z293;
# endif
{
SHORTCARD Z259;
struct S_5 Z243;

{
register struct S_6 *W_32 = &Z243.U_1.V_1.Y0;

{
register Zq0A4_226 *W_33 = &Z292->U_1.V_5.Y4;

{
SHORTCARD B_35 = W_33->Y13 + 1, B_36 = W_33->Y14;

if (B_35 <= B_36)
for (Z259 = B_35;; Z259 += 1) {
{
register Zq0A4_199 *W_34 = &W_33->Y15->A[Z259 - 1];

if (((SET_ELEM (Zq0A4_8) | SET_ELEM (Zq0A4_19) | SET_ELEM (Zq0A4_27)) & W_34->Y3) == 0X0L && Z228(Z292, W_34->Y0, Z259) == Z293) {
return Z259;
}
}
if (Z259 >= B_36) break;
}
}
}
return 0;
return W_32->Y0;
}
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
register Zq0A4_226 *W_35 = &Z217->U_1.V_5.Y4;

Z217 = W_35->Y3;
goto EXIT_12;
}
}
if (Z217 != NIL && Z217->U_1.V_1.Y0 == Zq0A4_105) {
for (;;) {
{
register Zq0A4_231 *W_36 = &Z217->U_1.V_10.Y9;

if (!(((SET_ELEM (Zq0A4_8) | SET_ELEM (Zq0A4_19) | SET_ELEM (Zq0A4_27) | SET_ELEM (Zq0A4_1)) & W_36->Y6) == 0X0L && !ZpmCQ_25((LONGCARD)W_36->Y3, &Z212))) {
goto EXIT_13;
}
ZpmCQ_13(&Z212, (LONGCARD)W_36->Y3);
ZfM_29(Zq0A4_172, (STRING)"extern void ", 12L);
Zq0A4_192(Zq0A4_279->U_1.V_32.Y31.Y7);
Zq0A4_192(W_36->Y3);
ZfM_29(Zq0A4_172, (STRING)"	(register ", 11L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)" yyt);", 6L);
ZfM_33(Zq0A4_172);
Z256(W_36->Y1);
return;
}
} EXIT_13:;
{
register Zq0A4_231 *W_37 = &Z217->U_1.V_10.Y9;

Z217 = W_37->Y1;
goto EXIT_12;
}
}
if (Z217 != NIL && Z217->U_1.V_1.Y0 == Zq0A4_106) {
for (;;) {
{
register Zq0A4_232 *W_38 = &Z217->U_1.V_11.Y10;

if (!(((SET_ELEM (Zq0A4_8) | SET_ELEM (Zq0A4_19) | SET_ELEM (Zq0A4_27) | SET_ELEM (Zq0A4_1)) & W_38->Y6) == 0X0L && !ZpmCQ_25((LONGCARD)W_38->Y3, &Z212))) {
goto EXIT_14;
}
ZpmCQ_13(&Z212, (LONGCARD)W_38->Y3);
ZfM_29(Zq0A4_172, (STRING)"extern void ", 12L);
Zq0A4_192(Zq0A4_279->U_1.V_32.Y31.Y7);
Zq0A4_192(W_38->Y3);
ZfM_29(Zq0A4_172, (STRING)"	(register ", 11L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)" yyt);", 6L);
ZfM_33(Zq0A4_172);
Z256(W_38->Y1);
return;
}
} EXIT_14:;
{
register Zq0A4_232 *W_39 = &Z217->U_1.V_11.Y10;

Z217 = W_39->Y1;
goto EXIT_12;
}
}
return;
} EXIT_12:;
} EXIT_11:;
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
register Zq0A4_226 *W_40 = &Z217->U_1.V_5.Y4;

Z217 = W_40->Y3;
goto EXIT_16;
}
}
if (Z217 != NIL && Z217->U_1.V_1.Y0 == Zq0A4_105) {
for (;;) {
{
register Zq0A4_231 *W_41 = &Z217->U_1.V_10.Y9;

if (!(((SET_ELEM (Zq0A4_8) | SET_ELEM (Zq0A4_19) | SET_ELEM (Zq0A4_27) | SET_ELEM (Zq0A4_1)) & W_41->Y6) == 0X0L && !ZpmCQ_25((LONGCARD)W_41->Y3, &Z212))) {
goto EXIT_17;
}
ZpmCQ_13(&Z212, (LONGCARD)W_41->Y3);
ZfM_29(Zq0A4_172, (STRING)"void ", 5L);
Zq0A4_192(Zq0A4_279->U_1.V_32.Y31.Y7);
Zq0A4_192(W_41->Y3);
ZfM_29(Zq0A4_172, (STRING)" (register ", 11L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)" yyt)", 5L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"{", 1L);
ZfM_33(Zq0A4_172);
Z208 = TRUE;
Z215 = W_41->Y3;
Z295(Zq0A4_279->U_1.V_32.Y31.Y13);
if (!Z208) {
ZfM_29(Zq0A4_172, (STRING)" }", 2L);
ZfM_33(Zq0A4_172);
}
ZfM_29(Zq0A4_172, (STRING)"}", 1L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
Z267(W_41->Y1);
return;
}
} EXIT_17:;
{
register Zq0A4_231 *W_42 = &Z217->U_1.V_10.Y9;

Z217 = W_42->Y1;
goto EXIT_16;
}
}
if (Z217 != NIL && Z217->U_1.V_1.Y0 == Zq0A4_106) {
for (;;) {
{
register Zq0A4_232 *W_43 = &Z217->U_1.V_11.Y10;

if (!(((SET_ELEM (Zq0A4_8) | SET_ELEM (Zq0A4_19) | SET_ELEM (Zq0A4_27) | SET_ELEM (Zq0A4_1)) & W_43->Y6) == 0X0L && !ZpmCQ_25((LONGCARD)W_43->Y3, &Z212))) {
goto EXIT_18;
}
ZpmCQ_13(&Z212, (LONGCARD)W_43->Y3);
ZfM_29(Zq0A4_172, (STRING)"void ", 5L);
Zq0A4_192(Zq0A4_279->U_1.V_32.Y31.Y7);
Zq0A4_192(W_43->Y3);
ZfM_29(Zq0A4_172, (STRING)" (register ", 11L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)" yyt)", 5L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"{", 1L);
ZfM_33(Zq0A4_172);
Z208 = TRUE;
Z215 = W_43->Y3;
Z295(Zq0A4_279->U_1.V_32.Y31.Y13);
if (!Z208) {
ZfM_29(Zq0A4_172, (STRING)" }", 2L);
ZfM_33(Zq0A4_172);
}
ZfM_29(Zq0A4_172, (STRING)"}", 1L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
Z267(W_43->Y1);
return;
}
} EXIT_18:;
{
register Zq0A4_232 *W_44 = &Z217->U_1.V_11.Y10;

Z217 = W_44->Y1;
goto EXIT_16;
}
}
return;
} EXIT_16:;
} EXIT_15:;
}

static void Z295
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
register Zq0A4_226 *W_45 = &Z217->U_1.V_5.Y4;

Z201 = 0;
Z199 = 2;
for (;;) {
if (Z199 > W_45->Y13) {
goto EXIT_21;
}
{
register Zq0A4_199 *W_46 = &W_45->Y15->A[Z199 - 1];

if (!IN(Zq0A4_8, W_46->Y3) && W_46->Y1->U_1.V_10.Y9.Y3 == Z215) {
INC(Z201);
goto EXIT_21;
}
}
INC(Z199);
} EXIT_21:;
if (Z201 > 0) {
if (Z208) {
Z208 = FALSE;
} else {
ZfM_29(Zq0A4_172, (STRING)" } else", 7L);
}
if (W_45->Y4->U_1.V_1.Y0 == Zq0A4_99) {
ZfM_29(Zq0A4_172, (STRING)" if (yyt->Kind == k", 19L);
Zq0A4_192(W_45->Y1);
ZfM_29(Zq0A4_172, (STRING)") {", 3L);
ZfM_33(Zq0A4_172);
} else {
ZfM_29(Zq0A4_172, (STRING)" if (", 5L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"::IsType (yyt, k", 16L);
Zq0A4_192(W_45->Y1);
ZfM_29(Zq0A4_172, (STRING)")) {", 4L);
ZfM_33(Zq0A4_172);
}
ZbpA7dpZ_0 = Z217;
Z216(Z217, Z199);
} else {
Z295(W_45->Y4);
}
Z217 = W_45->Y5;
goto EXIT_20;
}
}
return;
} EXIT_20:;
} EXIT_19:;
}

void ZbpA7dpZg_6
 ARGS ((void))
{
}

void ZbpA7dpZg_7
 ARGS ((void))
{
}

static void Z299
 ARGS ((void))
{
ZfM_34();
rExit(1L);
}

void BEGIN_EvalCxx3 ARGS ((void))
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
BEGIN_TreeCxx1 ();
BEGIN_TreeCxx2 ();
BEGIN_EvalCxx ();
BEGIN_Errors ();
BEGIN_Position ();
BEGIN_EvalCxx ();
BEGIN_Tree ();

ZbpA7dpZg_0 = ZfM_1;
ZbpA7dpZg_2 = Z299;
ZbpA7dpZg_6();
}
