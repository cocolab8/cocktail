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

#ifndef DEFINITION_TreeC1
#include "TreeC1.h"
#endif

#ifndef DEFINITION_TreeC2
#include "TreeC2.h"
#endif

#ifndef DEFINITION_EvalC
#include "EvalC.h"
#endif

#ifndef DEFINITION_Errors
#include "Errors.h"
#endif

#ifndef DEFINITION_Position
#include "Position.h"
#endif

#ifndef DEFINITION_EvalC
#include "EvalC.h"
#endif

#ifndef DEFINITION_Tree
#include "Tree.h"
#endif

#ifndef DEFINITION_EvalC3
#include "EvalC3.h"
#endif

ZfM_3 ZbpA7dv_0;
BOOLEAN ZbpA7dv_1;
PROC ZbpA7dv_2;

static SHORTCARD Z200, Z201, Z202, Z203, Z204, Z205, Z206, Z207;
static Zq0A4_153 Z208;
static BOOLEAN Z209, Z210, Z211;
static LONGINT Z212;
static Zq0A4_63 Z213;
static ZpmCQ_4 Z214, Z215;
static LONGINT Z216;
static struct S_1 {
SHORTCARD A[1000000 - 1 + 1];
} *Z217;
static Zfb3DLQ_0 Z218;
static void Z219 ARGS ((Zq0A4_153 Z220, SHORTCARD Z202));
static void Z232 ARGS ((Zq0A4_153 Z220, INTEGER Z200));
static void Z237 ARGS ((void));
static void Z238 ARGS ((CHAR Z239[], LONGCARD O_1));
static BOOLEAN Z242 ARGS ((BYTE Z243[], LONGCARD O_3, BYTE Z244[], LONGCARD O_2));
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
static void Z264 ARGS ((Zq0A4_153 Z220));
struct S_19 {
union {
char dummy;
} U_1;
};
static void Z265 ARGS ((Zq0A4_153 Z220));
struct S_17 {
union {
struct {
struct S_18 {
INTEGER Y0;
} Y0;
} V_1;
} U_1;
};
static void Z272 ARGS ((Zq0A4_153 Z220));
struct S_16 {
union {
char dummy;
} U_1;
};
static void Z273 ARGS ((Zq0A4_153 Z220));
struct S_15 {
union {
char dummy;
} U_1;
};
static void Z270 ARGS ((Zq0A4_153 Z220));
struct S_13 {
union {
struct {
struct S_14 {
ZpmCQ_4 Y0;
} Y0;
} V_1;
} U_1;
};
static void Z267 ARGS ((Zq0A4_153 Z220));
struct S_12 {
union {
char dummy;
} U_1;
};
static void Z287 ARGS ((Zq0A4_153 Z220));
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
static INTEGER Z227 ARGS ((Zq0A4_153 Z290, INTEGER Z291));
struct S_9 {
union {
char dummy;
} U_1;
};
static INTEGER Z231 ARGS ((Zq0A4_153 Z292, Zq0A4_153 Z293, SHORTCARD Z294));
struct S_7 {
union {
struct {
struct S_8 {
INTEGER Y0;
} Y0;
} V_1;
} U_1;
};
static INTEGER Z276 ARGS ((Zq0A4_153 Z296, INTEGER Z297));
struct S_5 {
union {
struct {
struct S_6 {
INTEGER Y0;
} Y0;
} V_1;
} U_1;
};
static void Z260 ARGS ((Zq0A4_153 Z220));
struct S_4 {
union {
char dummy;
} U_1;
};
static void Z271 ARGS ((Zq0A4_153 Z220));
struct S_3 {
union {
char dummy;
} U_1;
};
static void Z299 ARGS ((Zq0A4_153 Z220));
struct S_2 {
union {
char dummy;
} U_1;
};
static void Z303 ARGS ((void));

static void Z219
# ifdef HAVE_ARGS
(Zq0A4_153 Z220, SHORTCARD Z202)
# else
(Z220, Z202)
Zq0A4_153 Z220;
SHORTCARD Z202;
# endif
{
{
register Zq0A4_199 *W_1 = &Z220->U_1.V_5.Y4.Y15->A[Z202 - 1];

if (SET_IS_SUBSET1(SET_ELEM (Zq0A4_7) | SET_ELEM (Zq0A4_20), W_1->Y3)) {
Z203 = ZbpA7dv_5(Z220, (LONGINT)Z202);
ZfM_29(Zq0A4_172, (STRING)"IFNOTIN (", 9L);
Zq0A4_195((LONGINT)(Z203 % Zq0A4dt_0));
ZfM_29(Zq0A4_172, (STRING)", yyt->yyHead.yyIsComp", 22L);
Zq0A4_195((LONGINT)(Z203 / Zq0A4dt_0));
ZfM_29(Zq0A4_172, (STRING)") {", 3L);
ZfM_29(Zq0A4_172, (STRING)" yyS", 4L);
Zq0A4_195((LONGINT)Z203);
ZfM_29(Zq0A4_172, (STRING)" (yyt); /* ", 11L);
Zq0A4_192(W_1->Y1->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)" */ }", 5L);
ZfM_33(Zq0A4_172);
} else if (SET_IS_SUBSET1(SET_ELEM (Zq0A4_6) | SET_ELEM (Zq0A4_20), W_1->Y3)) {
Z203 = ZbpA7dv_5(Z220, (LONGINT)Z202);
ZfM_29(Zq0A4_172, (STRING)"IFNOTIN (", 9L);
Zq0A4_195((LONGINT)(Z203 % Zq0A4dt_0));
ZfM_29(Zq0A4_172, (STRING)", yyt->yyHead.yyIsComp", 22L);
Zq0A4_195((LONGINT)(Z203 / Zq0A4dt_0));
ZfM_29(Zq0A4_172, (STRING)") {", 3L);
if (ZpmCQ_25(ORD('Z'), &Zq0A4_171) && IN(Zq0A4_42, Z220->U_1.V_5.Y4.Y2)) {
ZfM_29(Zq0A4_172, (STRING)" yyVisitParent (yyt);", 21L);
ZfM_29(Zq0A4_172, (STRING)" yyI [yyt->yyHead.yyOffset + ", 29L);
Zq0A4_195((LONGINT)Z203);
ZfM_29(Zq0A4_172, (STRING)"](yyt->yyHead.yyParent); /* ", 28L);
Zq0A4_192(W_1->Y1->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)" */", 3L);
ZfM_29(Zq0A4_172, (STRING)" yyWriteVisit (yyt->yyHead.yyParent, \"?\"); }", 44L);
ZfM_33(Zq0A4_172);
} else {
ZfM_29(Zq0A4_172, (STRING)" yyI [yyt->yyHead.yyOffset + ", 29L);
Zq0A4_195((LONGINT)Z203);
ZfM_29(Zq0A4_172, (STRING)"](yyt->yyHead.yyParent); /* ", 28L);
Zq0A4_192(W_1->Y1->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)" */ }", 5L);
ZfM_33(Zq0A4_172);
}
} else if (SET_IS_SUBSET1(SET_ELEM (Zq0A4_6) | SET_ELEM (Zq0A4_21), W_1->Y3)) {
Z203 = Z227(W_1->Y0, (LONGINT)(Z202 - Z220->U_1.V_5.Y4.Y13 - W_1->Y0->U_1.V_10.Y9.Y13));
ZfM_29(Zq0A4_172, (STRING)"IFNOTIN (", 9L);
Zq0A4_195((LONGINT)(Z203 % Zq0A4dt_0));
ZfM_29(Zq0A4_172, (STRING)", yyt->", 7L);
Zq0A4_193(ZbpA7d_0->U_1.V_5.Y4.Y1);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(W_1->Y0->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)"->yyHead.yyIsComp", 17L);
Zq0A4_195((LONGINT)(Z203 / Zq0A4dt_0));
ZfM_29(Zq0A4_172, (STRING)") {", 3L);
Z203 = Z231(Z220, W_1->Y0, Z202);
ZfM_29(Zq0A4_172, (STRING)" yyI", 4L);
Zq0A4_195((LONGINT)Z203);
ZfM_29(Zq0A4_172, (STRING)" (yyt); /* ", 11L);
Zq0A4_192(W_1->Y0->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)":", 1L);
Zq0A4_192(W_1->Y1->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)" */ }", 5L);
ZfM_33(Zq0A4_172);
} else if (SET_IS_SUBSET1(SET_ELEM (Zq0A4_7) | SET_ELEM (Zq0A4_21), W_1->Y3)) {
Z203 = Z227(W_1->Y0, (LONGINT)(Z202 - Z220->U_1.V_5.Y4.Y13 - W_1->Y0->U_1.V_10.Y9.Y13));
ZfM_29(Zq0A4_172, (STRING)"IFNOTIN (", 9L);
Zq0A4_195((LONGINT)(Z203 % Zq0A4dt_0));
ZfM_29(Zq0A4_172, (STRING)", yyt->", 7L);
Zq0A4_193(ZbpA7d_0->U_1.V_5.Y4.Y1);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(W_1->Y0->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)"->yyHead.yyIsComp", 17L);
Zq0A4_195((LONGINT)(Z203 / Zq0A4dt_0));
ZfM_29(Zq0A4_172, (STRING)") {", 3L);
if (ZpmCQ_25(ORD('Z'), &Zq0A4_171) && IN(Zq0A4_42, Z220->U_1.V_5.Y4.Y2)) {
ZfM_29(Zq0A4_172, (STRING)" yyWriteVisit (yyt, \"", 21L);
Zq0A4_192(W_1->Y0->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)"\");", 3L);
ZfM_29(Zq0A4_172, (STRING)" yyS", 4L);
Zq0A4_195((LONGINT)Z203);
ZfM_29(Zq0A4_172, (STRING)" (yyt->", 7L);
Zq0A4_193(ZbpA7d_0->U_1.V_5.Y4.Y1);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(W_1->Y0->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)"); /* ", 6L);
Zq0A4_192(W_1->Y0->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)":", 1L);
Zq0A4_192(W_1->Y1->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)" */", 3L);
ZfM_29(Zq0A4_172, (STRING)" yyVisitParent (yyt->", 21L);
Zq0A4_193(ZbpA7d_0->U_1.V_5.Y4.Y1);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(W_1->Y0->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)"); }", 4L);
ZfM_33(Zq0A4_172);
} else {
ZfM_29(Zq0A4_172, (STRING)" yyS", 4L);
Zq0A4_195((LONGINT)Z203);
ZfM_29(Zq0A4_172, (STRING)" (yyt->", 7L);
Zq0A4_193(ZbpA7d_0->U_1.V_5.Y4.Y1);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
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

static void Z232
# ifdef HAVE_ARGS
(Zq0A4_153 Z220, INTEGER Z200)
# else
(Z220, Z200)
Zq0A4_153 Z220;
INTEGER Z200;
# endif
{
ZbpA7d_0 = Z220;
{
register Zq0A4_199 *W_2 = &Z220->U_1.V_5.Y4.Y15->A[Z200 - 1];

if (ZpmCQ_25(ORD('X'), &Zq0A4_171) && IN(Zq0A4_42, Z220->U_1.V_5.Y4.Y2)) {
ZfM_29(Zq0A4_172, (STRING)"yyWriteEval (yyt, \"", 19L);
Zq0A4_192(W_2->Y1->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)"\");", 3L);
ZfM_33(Zq0A4_172);
if (W_2->Y2 != (Zq0A4_153)ADR (W_2->Y2) && !IN(Zq0A4_1, W_2->Y3)) {
ZbpA7d_11(W_2->Y2);
ZfM_33(Zq0A4_172);
if (IN(Zq0A4_19, W_2->Y3)) {
ZfM_29(Zq0A4_172, (STRING)"writerbool (yyb) xxWriteNl ();", 30L);
ZfM_33(Zq0A4_172);
} else if (W_2->Y1->U_1.V_1.Y0 == Zq0A4_105 || W_2->Y1->U_1.V_11.Y10.Y4 == Zq0A4_86) {
ZfM_29(Zq0A4_172, (STRING)"write", 5L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)" (yyt->", 7L);
Zq0A4_193(Z220->U_1.V_5.Y4.Y1);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(W_2->Y1->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)") xxWriteNl ();", 15L);
ZfM_33(Zq0A4_172);
} else {
ZfM_29(Zq0A4_172, (STRING)"write", 5L);
Zq0A4_192(W_2->Y1->U_1.V_10.Y9.Y4);
ZfM_29(Zq0A4_172, (STRING)" (yyt->", 7L);
Zq0A4_193(Z220->U_1.V_5.Y4.Y1);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(W_2->Y1->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)") xxWriteNl ();", 15L);
ZfM_33(Zq0A4_172);
}
} else {
ZfM_29(Zq0A4_172, (STRING)"xxWriteNl ();", 13L);
ZfM_33(Zq0A4_172);
}
} else if (ZpmCQ_25(ORD('Y'), &Zq0A4_171) && IN(Zq0A4_42, Z220->U_1.V_5.Y4.Y2)) {
ZfM_29(Zq0A4_172, (STRING)"yyWriteEval (yyt, \"", 19L);
Zq0A4_192(W_2->Y1->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)"\");", 3L);
ZfM_33(Zq0A4_172);
if (W_2->Y2 != (Zq0A4_153)ADR (W_2->Y2) && !IN(Zq0A4_1, W_2->Y3)) {
ZbpA7d_11(W_2->Y2);
}
} else {
if (W_2->Y2 != (Zq0A4_153)ADR (W_2->Y2) && !IN(Zq0A4_1, W_2->Y3)) {
ZbpA7d_11(W_2->Y2);
}
}
}
}

static void Z237
 ARGS ((void))
{
if (ZpmCQ_25(ORD('+'), &Zq0A4_171)) {
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"_PREFIX ", 8L);
}
}

static void Z238
# ifdef HAVE_ARGS
(CHAR Z239[], LONGCARD O_1)
# else
(Z239, O_1)
CHAR Z239[];
LONGCARD O_1;
# endif
{
OPEN_ARRAY_LOCALS

ALLOC_OPEN_ARRAYS (O_1 * sizeof (CHAR), 1)
COPY_OPEN_ARRAY (Z239, O_1, CHAR)
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)"Error: module EvalC3, routine ", 30L);
ZfM_29((ZDz6VQCC_4)ZfM_2, Z239, O_1);
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)" failed", 7L);
ZfM_33((ZDz6VQCC_4)ZfM_2);
(*ZbpA7dv_2)();
FREE_OPEN_ARRAYS
}

static BOOLEAN Z242
# ifdef HAVE_ARGS
(BYTE Z243[], LONGCARD O_3, BYTE Z244[], LONGCARD O_2)
# else
(Z243, O_3, Z244, O_2)
BYTE Z243[];
LONGCARD O_3;
BYTE Z244[];
LONGCARD O_2;
# endif
{
INTEGER Z245;
OPEN_ARRAY_LOCALS

ALLOC_OPEN_ARRAYS (O_2 * sizeof (WORD) + O_3 * sizeof (WORD), 2)
COPY_OPEN_ARRAY (Z244, O_2, WORD)
COPY_OPEN_ARRAY (Z243, O_3, WORD)
{
LONGINT B_1 = 0, B_2 = (INTEGER)(O_3 - 1);

if (B_1 <= B_2)
for (Z245 = B_1;; Z245 += 1) {
if (Z243[Z245] != Z244[Z245]) {
FREE_OPEN_ARRAYS
return FALSE;
}
if (Z245 >= B_2) break;
}
}
FREE_OPEN_ARRAYS
return TRUE;
}

void ZbpA7dv_3
# ifdef HAVE_ARGS
(Zq0A4_153 Z220)
# else
(Z220)
Zq0A4_153 Z220;
# endif
{
struct S_22 Z247;

if (Z220 == Zq0A4_97) {
return;
}
if (Z220 != NIL && Z220->U_1.V_1.Y0 == Zq0A4_127) {
{
register Zq0A4_253 *W_3 = &Z220->U_1.V_32.Y31;

ZfM_29(Zq0A4_172, (STRING)"# ifndef yy", 11L);
Zq0A4_192(W_3->Y7);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# define yy", 11L);
Zq0A4_192(W_3->Y7);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# include \"ratc.h\"", 18L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# include \"", 11L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)".h\"", 3L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
Zq0A4du_3(W_3->Y8->U_1.V_17.Y16.Y8);
ZqnGVQ_5(Zq0A4_172, W_3->Y8->U_1.V_17.Y16.Y2);
Z208 = W_3->Y14;
while (Z208->U_1.V_1.Y0 == Zq0A4_144) {
Zq0A4du_3(Z208->U_1.V_49.Y48.Y8->U_1.V_17.Y16.Y8);
ZqnGVQ_5(Zq0A4_172, Z208->U_1.V_49.Y48.Y8->U_1.V_17.Y16.Y2);
Z208 = Z208->U_1.V_49.Y48.Y12;
}
Zq0A4du_3(W_3->Y8->U_1.V_17.Y16.Y7);
ZqnGVQ_5(Zq0A4_172, W_3->Y8->U_1.V_17.Y16.Y1);
Z208 = W_3->Y14;
while (Z208->U_1.V_1.Y0 == Zq0A4_144) {
Zq0A4du_3(Z208->U_1.V_49.Y48.Y8->U_1.V_17.Y16.Y7);
ZqnGVQ_5(Zq0A4_172, Z208->U_1.V_49.Y48.Y8->U_1.V_17.Y16.Y1);
Z208 = Z208->U_1.V_49.Y48.Y12;
}
ZfM_33(Zq0A4_172);
if (ZpmCQ_25(ORD('+'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)"class ", 6L);
Zq0A4_192(W_3->Y7);
ZfM_29(Zq0A4_172, (STRING)" {", 2L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"public:", 7L);
ZfM_33(Zq0A4_172);
ZbpA7d_6();
ZfM_29(Zq0A4_172, (STRING)"void Evaluate ARGS ((", 21L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)" yyt));", 7L);
ZfM_33(Zq0A4_172);
} else {
ZbpA7d_6();
ZfM_29(Zq0A4_172, (STRING)"void ", 5L);
Zq0A4_192(W_3->Y7);
ZfM_29(Zq0A4_172, (STRING)" ARGS ((", 8L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)" yyt));", 7L);
ZfM_33(Zq0A4_172);
}
ZpmCQ_5(&Z215, (LONGCARD)Zfb3DLQ_6());
Zq0A4_184(W_3->Y13, (Zq0A4_170)Z260);
ZpmCQ_7(&Z215);
ZbpA7d_6();
ZfM_29(Zq0A4_172, (STRING)"void Begin", 10L);
Zq0A4_192(W_3->Y7);
ZfM_29(Zq0A4_172, (STRING)" ARGS ((void));", 15L);
ZfM_33(Zq0A4_172);
ZbpA7d_6();
ZfM_29(Zq0A4_172, (STRING)"void Close", 10L);
Zq0A4_192(W_3->Y7);
ZfM_29(Zq0A4_172, (STRING)" ARGS ((void));", 15L);
ZfM_33(Zq0A4_172);
if (ZpmCQ_25(ORD('+'), &Zq0A4_171)) {
Zq0A4_192(W_3->Y7);
ZfM_29(Zq0A4_172, (STRING)" (void);", 8L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"~", 1L);
Zq0A4_192(W_3->Y7);
ZfM_29(Zq0A4_172, (STRING)" (void);", 8L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"private:", 8L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"};", 2L);
ZfM_33(Zq0A4_172);
}
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# endif", 7L);
ZfM_33(Zq0A4_172);
return;
}
}
}

void ZbpA7dv_4
# ifdef HAVE_ARGS
(Zq0A4_153 Z220)
# else
(Z220)
Zq0A4_153 Z220;
# endif
{
struct S_20 Z247;

if (Z220 == Zq0A4_97) {
return;
}
if (Z220 != NIL && Z220->U_1.V_1.Y0 == Zq0A4_127) {
{
register Zq0A4_253 *W_4 = &Z220->U_1.V_32.Y31;

Z205 = 0;
Z206 = 0;
Zq0A4_184(W_4->Y13, (Zq0A4_170)Z264);
ZpmCQ_5(&Z214, (LONGCARD)Z206);
Z216 = Z206;
ZarQdhNDD_0((ADDRESS *)&Z217, &Z216, (LONGINT)sizeof (SHORTCARD));
{
SHORTCARD B_3 = 1, B_4 = Z206;

if (B_3 <= B_4)
for (Z200 = B_3;; Z200 += 1) {
Z217->A[Z200 - 1] = 0;
if (Z200 >= B_4) break;
}
}
Zq0A4_184(W_4->Y13, (Zq0A4_170)Z265);
ZfM_29(Zq0A4_172, (STRING)"# define IFNOTIN(b, s) if (! (s & 1 << b))", 42L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# define INCL(s, b) s |= 1 << b", 31L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# define REMOTE_SYN(i, b, c, n, t, a) (n->yyHead.i & 1 << b ? (void) 0 : c (n), n->t.a)", 87L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# define REMOTE_INH(i, b, k, n, t, a) (n->yyHead.i & 1 << b ? (void) 0 : yyI [n->yyHead.yyOffset + k](n->yyHead.yyParent), n->t.a)", 130L);
ZfM_33(Zq0A4_172);
ZbpA7d_8(Z220);
ZfM_29(Zq0A4_172, (STRING)"static char * yyCheck2 = & generate_", 36L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"_module_with_option_L;", 22L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"static void yyE ARGS ((register ", 32L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)" yyt));", 7L);
ZfM_33(Zq0A4_172);
{
SHORTCARD B_5 = 1, B_6 = Z205 - 1;

if (B_5 <= B_6)
for (Z200 = B_5;; Z200 += 1) {
ZfM_29(Zq0A4_172, (STRING)"static void yyS", 15L);
Zq0A4_195((LONGINT)Z200);
ZfM_29(Zq0A4_172, (STRING)" ARGS ((register ", 17L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)" yyt));", 7L);
ZfM_33(Zq0A4_172);
if (Z200 >= B_6) break;
}
}
{
SHORTCARD B_7 = ZpmCQ_17(&Z214), B_8 = ZpmCQ_18(&Z214);

if (B_7 <= B_8)
for (Z200 = B_7;; Z200 += 1) {
if (ZpmCQ_25((LONGCARD)Z200, &Z214)) {
ZfM_29(Zq0A4_172, (STRING)"static void yyI", 15L);
Zq0A4_195((LONGINT)Z200);
ZfM_29(Zq0A4_172, (STRING)" ARGS ((register ", 17L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)" yyt));", 7L);
ZfM_33(Zq0A4_172);
}
if (Z200 >= B_8) break;
}
}
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"static const ", 13L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"_tProcTree yyI [", 16L);
Zq0A4_195((LONGINT)(ZpmCQ_18(&Z214) + 1));
ZfM_29(Zq0A4_172, (STRING)"] = { 0,", 8L);
ZfM_33(Zq0A4_172);
{
SHORTCARD B_9 = 1, B_10 = ZpmCQ_18(&Z214);

if (B_9 <= B_10)
for (Z200 = B_9;; Z200 += 1) {
if (ZpmCQ_25((LONGCARD)Z200, &Z214)) {
ZfM_29(Zq0A4_172, (STRING)" yyI", 4L);
Zq0A4_195((LONGINT)Z200);
ZfM_29(Zq0A4_172, (STRING)",", 1L);
ZfM_33(Zq0A4_172);
} else {
ZfM_29(Zq0A4_172, (STRING)" 0,", 3L);
ZfM_33(Zq0A4_172);
}
if (Z200 >= B_10) break;
}
}
ZfM_29(Zq0A4_172, (STRING)"};", 2L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"static void yyAbort", 19L);
ZfM_33(Zq0A4_172);
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
ZfM_29(Zq0A4_172, (STRING)"{", 1L);
ZfM_33(Zq0A4_172);
Z237();
Zq0A4du_10();
ZfM_29(Zq0A4_172, (STRING)" ErrorMessageI (xxCyclicDependencies, xxFatal, NoPosition, xxString,", 68L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  \"", 3L);
Zq0A4_192(W_4->Y7);
ZfM_29(Zq0A4_172, (STRING)"\");", 3L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" ", 1L);
Z237();
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"_Exit ();", 9L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"}", 1L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"void ", 5L);
ZbpA7d_5();
if (ZpmCQ_25(ORD('+'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)"Evaluate", 8L);
ZfM_33(Zq0A4_172);
} else {
Zq0A4_192(W_4->Y7);
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
Z237();
ZfM_29(Zq0A4_172, (STRING)"Init", 4L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)" (yyt); yyE (yyt);", 18L);
ZfM_33(Zq0A4_172);
if (ZpmCQ_25(ORD('9'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)" printf (\"Stacksize %ld\\n\", (long) (& yyHigh - yyMinLow));", 58L);
ZfM_33(Zq0A4_172);
}
ZfM_29(Zq0A4_172, (STRING)"}", 1L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
do {
Z210 = TRUE;
Zq0A4_184(W_4->Y13, (Zq0A4_170)Z267);
} while (!Z210);
ZfM_29(Zq0A4_172, (STRING)"static void yyE", 15L);
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
ZfM_29(Zq0A4_172, (STRING)"{", 1L);
ZfM_33(Zq0A4_172);
Zq0A4du_3(Zq0A4_279->U_1.V_32.Y31.Y8->U_1.V_17.Y16.Y10);
ZqnGVQ_5(Zq0A4_172, Zq0A4_279->U_1.V_32.Y31.Y8->U_1.V_17.Y16.Y4);
Z208 = Zq0A4_279->U_1.V_32.Y31.Y14;
while (Z208->U_1.V_1.Y0 == Zq0A4_144) {
Zq0A4du_3(Z208->U_1.V_49.Y48.Y8->U_1.V_17.Y16.Y10);
ZqnGVQ_5(Zq0A4_172, Z208->U_1.V_49.Y48.Y8->U_1.V_17.Y16.Y4);
Z208 = Z208->U_1.V_49.Y48.Y12;
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
ZfM_29(Zq0A4_172, (STRING)" || yyt->yyHead.yyIsComp0 & 1) return;", 38L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  yyt->yyHead.yyIsComp0 |= 1;", 29L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  switch (yyt->Kind) {", 22L);
ZfM_33(Zq0A4_172);
Zq0A4_184(W_4->Y13, (Zq0A4_170)Z270);
ZfM_29(Zq0A4_172, (STRING)"  default: return;", 18L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  }", 3L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" }", 2L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"}", 1L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZpmCQ_5(&Z215, (LONGCARD)Zfb3DLQ_6());
Zq0A4_184(W_4->Y13, (Zq0A4_170)Z271);
ZpmCQ_7(&Z215);
{
SHORTCARD B_11 = 2, B_12 = Z205;

if (B_11 <= B_12)
for (Z200 = B_11;; Z200 += 1) {
Z204 = 0;
Zq0A4_184(W_4->Y13, (Zq0A4_170)Z272);
if (Z204 > 0) {
ZfM_29(Zq0A4_172, (STRING)"static void yyS", 15L);
Zq0A4_195((LONGINT)(Z200 - 1));
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
ZfM_29(Zq0A4_172, (STRING)"{", 1L);
ZfM_33(Zq0A4_172);
Zq0A4du_3(Zq0A4_279->U_1.V_32.Y31.Y8->U_1.V_17.Y16.Y10);
ZqnGVQ_5(Zq0A4_172, Zq0A4_279->U_1.V_32.Y31.Y8->U_1.V_17.Y16.Y4);
Z208 = Zq0A4_279->U_1.V_32.Y31.Y14;
while (Z208->U_1.V_1.Y0 == Zq0A4_144) {
Zq0A4du_3(Z208->U_1.V_49.Y48.Y8->U_1.V_17.Y16.Y10);
ZqnGVQ_5(Zq0A4_172, Z208->U_1.V_49.Y48.Y8->U_1.V_17.Y16.Y4);
Z208 = Z208->U_1.V_49.Y48.Y12;
}
if (ZpmCQ_25(ORD('9'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)" char yyLow;", 12L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" if (& yyLow < yyMinLow) yyMinLow = & yyLow;", 44L);
ZfM_33(Zq0A4_172);
}
if (ZpmCQ_25(ORD('5'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)" IFNOTIN (", 10L);
Zq0A4_195((LONGINT)((Z200 - 1) % Zq0A4dt_0));
ZfM_29(Zq0A4_172, (STRING)", yyt->yyHead.yyIsDone", 22L);
Zq0A4_195((LONGINT)((Z200 - 1) / Zq0A4dt_0));
ZfM_29(Zq0A4_172, (STRING)") { INCL (yyt->yyHead.yyIsDone", 30L);
Zq0A4_195((LONGINT)((Z200 - 1) / Zq0A4dt_0));
ZfM_29(Zq0A4_172, (STRING)", ", 2L);
Zq0A4_195((LONGINT)((Z200 - 1) % Zq0A4dt_0));
ZfM_29(Zq0A4_172, (STRING)"); } else yyAbort (yyt);", 24L);
ZfM_33(Zq0A4_172);
}
if (Z204 > 1) {
ZfM_29(Zq0A4_172, (STRING)" switch (yyt->Kind) {", 21L);
ZfM_33(Zq0A4_172);
Zq0A4_184(W_4->Y13, (Zq0A4_170)Z273);
ZfM_29(Zq0A4_172, (STRING)" }", 2L);
ZfM_33(Zq0A4_172);
} else {
Zq0A4_184(W_4->Y13, (Zq0A4_170)Z273);
}
ZfM_29(Zq0A4_172, (STRING)" INCL (yyt->yyHead.yyIsComp", 27L);
Zq0A4_195((LONGINT)((Z200 - 1) / Zq0A4dt_0));
ZfM_29(Zq0A4_172, (STRING)", ", 2L);
Zq0A4_195((LONGINT)((Z200 - 1) % Zq0A4dt_0));
ZfM_29(Zq0A4_172, (STRING)");", 2L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"}", 1L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
}
if (Z200 >= B_12) break;
}
}
{
SHORTCARD B_13 = ZpmCQ_17(&Z214), B_14 = ZpmCQ_18(&Z214);

if (B_13 <= B_14)
for (Z200 = B_13;; Z200 += 1) {
if (ZpmCQ_25((LONGCARD)Z200, &Z214)) {
ZfM_29(Zq0A4_172, (STRING)"static void yyI", 15L);
Zq0A4_195((LONGINT)Z200);
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
ZfM_29(Zq0A4_172, (STRING)"{", 1L);
ZfM_33(Zq0A4_172);
Zq0A4du_3(Zq0A4_279->U_1.V_32.Y31.Y8->U_1.V_17.Y16.Y10);
ZqnGVQ_5(Zq0A4_172, Zq0A4_279->U_1.V_32.Y31.Y8->U_1.V_17.Y16.Y4);
Z208 = Zq0A4_279->U_1.V_32.Y31.Y14;
while (Z208->U_1.V_1.Y0 == Zq0A4_144) {
Zq0A4du_3(Z208->U_1.V_49.Y48.Y8->U_1.V_17.Y16.Y10);
ZqnGVQ_5(Zq0A4_172, Z208->U_1.V_49.Y48.Y8->U_1.V_17.Y16.Y4);
Z208 = Z208->U_1.V_49.Y48.Y12;
}
if (ZpmCQ_25(ORD('9'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)" char yyLow;", 12L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" if (& yyLow < yyMinLow) yyMinLow = & yyLow;", 44L);
ZfM_33(Zq0A4_172);
}
Z207 = 0;
if (Z217->A[Z200 - 1] > 1) {
ZfM_29(Zq0A4_172, (STRING)" switch (yyt->Kind) {", 21L);
ZfM_33(Zq0A4_172);
Zq0A4_184(W_4->Y13, (Zq0A4_170)ZbpA7dv_4);
ZfM_29(Zq0A4_172, (STRING)" }", 2L);
ZfM_33(Zq0A4_172);
} else {
Zq0A4_184(W_4->Y13, (Zq0A4_170)ZbpA7dv_4);
}
if (Z207 != Z217->A[Z200 - 1]) {
ZblNKKO_45((STRING)"internal error in yyI", 21L, (LONGCARD)ZblNKKO_16, ZmtLFGGBG_1, (LONGCARD)ZblNKKO_23, ADR (Z200));
INC(Zq0A4_0);
}
ZfM_29(Zq0A4_172, (STRING)"}", 1L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
}
if (Z200 >= B_14) break;
}
}
ZbpA7d_9(Z220);
return;
}
}
if (Z220 != NIL && Z220->U_1.V_1.Y0 == Zq0A4_100) {
{
register struct S_21 *W_5 = &Z247.U_1.V_1.Y0;

for (;;) {
{
register Zq0A4_226 *W_6 = &Z220->U_1.V_5.Y4;

if (!((Zq0A4_177 & W_6->Y2) == 0X0L)) {
goto EXIT_1;
}
if (!(Z200 <= W_6->Y14)) {
goto EXIT_1;
}
W_5->Y0 = Z276(Z220, (LONGINT)Z200);
if (W_5->Y0 == 0) {
return;
}
{
register Zq0A4_199 *W_7 = &W_6->Y15->A[W_5->Y0 - 1];

if (SET_IS_SUBSET1(SET_ELEM (Zq0A4_6) | SET_ELEM (Zq0A4_21), W_7->Y3)) {
ZbpA7d_0 = Z220;
if (Z217->A[Z200 - 1] > 1) {
ZfM_29(Zq0A4_172, (STRING)"  case k", 8L);
Zq0A4_193(W_6->Y1);
ZfM_29(Zq0A4_172, (STRING)":", 1L);
ZfM_33(Zq0A4_172);
}
INC(Z207);
Z203 = Z227(W_7->Y0, (LONGINT)(W_5->Y0 - W_6->Y13 - W_7->Y0->U_1.V_10.Y9.Y13));
if (ZpmCQ_25(ORD('5'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)" IFNOTIN (", 10L);
Zq0A4_195((LONGINT)(Z203 % Zq0A4dt_0));
ZfM_29(Zq0A4_172, (STRING)", yyt->", 7L);
Zq0A4_193(ZbpA7d_0->U_1.V_5.Y4.Y1);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(W_7->Y0->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)"->yyHead.yyIsDone", 17L);
Zq0A4_195((LONGINT)(Z203 / Zq0A4dt_0));
ZfM_29(Zq0A4_172, (STRING)") { INCL (yyt->", 15L);
Zq0A4_193(ZbpA7d_0->U_1.V_5.Y4.Y1);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(W_7->Y0->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)"->yyHead.yyIsDone", 17L);
Zq0A4_195((LONGINT)(Z203 / Zq0A4dt_0));
ZfM_29(Zq0A4_172, (STRING)", ", 2L);
Zq0A4_195((LONGINT)(Z203 % Zq0A4dt_0));
ZfM_29(Zq0A4_172, (STRING)"); } else yyAbort (yyt);", 24L);
ZfM_33(Zq0A4_172);
}
{
SHORTCARD B_15 = 1, B_16 = W_6->Y14;

if (B_15 <= B_16)
for (Z202 = B_15;; Z202 += 1) {
if (ZolB7FGBG_9((LONGINT)W_5->Y0, (LONGINT)Z202, W_6->Y16)) {
Z219(Z220, Z202);
}
if (Z202 >= B_16) break;
}
}
if (ZpmCQ_25(ORD('X'), &Zq0A4_171) && IN(Zq0A4_42, Z220->U_1.V_5.Y4.Y2)) {
ZfM_29(Zq0A4_172, (STRING)"yyWriteEval (yyt, \"", 19L);
Zq0A4_192(W_7->Y0->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)":", 1L);
Zq0A4_192(W_7->Y1->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)"\");", 3L);
ZfM_33(Zq0A4_172);
if (W_7->Y2 != (Zq0A4_153)ADR (W_7->Y2) && !IN(Zq0A4_1, W_7->Y3)) {
ZbpA7d_11(W_7->Y2);
ZfM_33(Zq0A4_172);
if (W_7->Y1->U_1.V_1.Y0 == Zq0A4_105 || W_7->Y1->U_1.V_11.Y10.Y4 == Zq0A4_86) {
ZfM_29(Zq0A4_172, (STRING)"write", 5L);
Zq0A4_192(Zq0A4_86);
} else {
ZfM_29(Zq0A4_172, (STRING)"write", 5L);
Zq0A4_192(W_7->Y1->U_1.V_10.Y9.Y4);
}
ZfM_29(Zq0A4_172, (STRING)" (yyt->", 7L);
Zq0A4_193(W_6->Y1);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(W_7->Y0->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)"->", 2L);
Zq0A4_193(W_7->Y0->U_1.V_10.Y9.Y4);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(W_7->Y1->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)") xxWriteNl ();", 15L);
ZfM_33(Zq0A4_172);
} else {
ZfM_29(Zq0A4_172, (STRING)"xxWriteNl ();", 13L);
ZfM_33(Zq0A4_172);
}
} else if (ZpmCQ_25(ORD('Y'), &Zq0A4_171) && IN(Zq0A4_42, Z220->U_1.V_5.Y4.Y2)) {
ZfM_29(Zq0A4_172, (STRING)"yyWriteEval (yyt, \"", 19L);
Zq0A4_192(W_7->Y0->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)":", 1L);
Zq0A4_192(W_7->Y1->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)"\");", 3L);
ZfM_33(Zq0A4_172);
if (W_7->Y2 != (Zq0A4_153)ADR (W_7->Y2) && !IN(Zq0A4_1, W_7->Y3)) {
ZbpA7d_11(W_7->Y2);
}
} else {
if (W_7->Y2 != (Zq0A4_153)ADR (W_7->Y2) && !IN(Zq0A4_1, W_7->Y3)) {
ZbpA7d_11(W_7->Y2);
}
}
if (!IN(Zq0A4_8, W_7->Y3) && W_7->Y1->U_1.V_1.Y0 == Zq0A4_105) {
ZfM_29(Zq0A4_172, (STRING)"{ register ", 11L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)" yyr = yyt->", 12L);
Zq0A4_193(W_6->Y1);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(W_7->Y0->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)"->", 2L);
Zq0A4_193(W_7->Y0->U_1.V_10.Y9.Y4);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(W_7->Y1->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)"; if (yyr->yyHead.yyParent == ", 30L);
Zq0A4_192(Zq0A4_88);
ZfM_29(Zq0A4_172, (STRING)") { yyr->yyHead.yyOffset = ", 27L);
Zq0A4_195((LONGINT)(W_7->Y0->U_1.V_10.Y9.Y8->U_1.V_5.Y4.Y25 + W_7->Y1->U_1.V_10.Y9.Y15));
ZfM_29(Zq0A4_172, (STRING)"; yyr->yyHead.yyParent = yyt->", 30L);
Zq0A4_193(W_6->Y1);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(W_7->Y0->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)"; ", 2L);
Z237();
ZfM_29(Zq0A4_172, (STRING)"Init", 4L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)" (yyr); } }", 11L);
ZfM_33(Zq0A4_172);
}
{
SHORTCARD B_17 = 1, B_18 = W_6->Y14;

if (B_17 <= B_18)
for (Z201 = B_17;; Z201 += 1) {
if (W_6->Y15->A[Z201 - 1].Y2 == W_7->Y2) {
{
register Zq0A4_199 *W_8 = &W_6->Y15->A[Z201 - 1];

if (IN(Zq0A4_7, W_8->Y3)) {
Z203 = ZbpA7dv_5(ZbpA7d_0, (LONGINT)Z201);
ZfM_29(Zq0A4_172, (STRING)"  INCL (yyt->yyHead.yyIsComp", 28L);
Zq0A4_195((LONGINT)(Z203 / Zq0A4dt_0));
ZfM_29(Zq0A4_172, (STRING)", ", 2L);
Zq0A4_195((LONGINT)(Z203 % Zq0A4dt_0));
ZfM_29(Zq0A4_172, (STRING)");", 2L);
ZfM_33(Zq0A4_172);
} else if (IN(Zq0A4_6, W_8->Y3)) {
Z203 = Z227(W_8->Y0, (LONGINT)(Z201 - W_6->Y13 - W_8->Y0->U_1.V_10.Y9.Y13));
ZfM_29(Zq0A4_172, (STRING)"  INCL (yyt->", 13L);
Zq0A4_193(ZbpA7d_0->U_1.V_5.Y4.Y1);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(W_8->Y0->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)"->yyHead.yyIsComp", 17L);
Zq0A4_195((LONGINT)(Z203 / Zq0A4dt_0));
ZfM_29(Zq0A4_172, (STRING)", ", 2L);
Zq0A4_195((LONGINT)(Z203 % Zq0A4dt_0));
ZfM_29(Zq0A4_172, (STRING)");", 2L);
ZfM_33(Zq0A4_172);
}
}
}
if (Z201 >= B_18) break;
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

static void Z264
# ifdef HAVE_ARGS
(Zq0A4_153 Z220)
# else
(Z220)
Zq0A4_153 Z220;
# endif
{
struct S_19 Z247;

if (Z220 == Zq0A4_97) {
return;
}
if (Z220 != NIL && Z220->U_1.V_1.Y0 == Zq0A4_100) {
{
register Zq0A4_226 *W_9 = &Z220->U_1.V_5.Y4;

Z212 = W_9->Y13;
ZarQdhNDD_0((ADDRESS *)&W_9->Y26, &Z212, (LONGINT)sizeof (Zq0A4_62));
Z200 = 1;
Z213 = W_9->Y26;
Zq0A4_185(Z220, (Zq0A4_170)Z264);
Z205 = ZdaDDAD7_4((LONGINT)Z200, (LONGINT)Z205);
Z206 = ZdaDDAD7_4((LONGINT)W_9->Y14, (LONGINT)Z206);
return;
}
}
if (Z220 != NIL && Z220->U_1.V_1.Y0 == Zq0A4_105) {
for (;;) {
{
register Zq0A4_231 *W_10 = &Z220->U_1.V_10.Y9;

if (!(((SET_ELEM (Zq0A4_8) | SET_ELEM (Zq0A4_19) | SET_ELEM (Zq0A4_27)) & W_10->Y6) == 0X0L)) {
goto EXIT_2;
}
INC(Z200);
Z213->A[W_10->Y10 - 1].Y0 = Z200;
Z213->A[Z200 - 1].Y1 = W_10->Y10;
return;
}
} EXIT_2:;
}
if (Z220 != NIL && Z220->U_1.V_1.Y0 == Zq0A4_106) {
for (;;) {
{
register Zq0A4_232 *W_11 = &Z220->U_1.V_11.Y10;

if (!(((SET_ELEM (Zq0A4_8) | SET_ELEM (Zq0A4_19) | SET_ELEM (Zq0A4_27)) & W_11->Y6) == 0X0L)) {
goto EXIT_3;
}
INC(Z200);
Z213->A[W_11->Y10 - 1].Y0 = Z200;
Z213->A[Z200 - 1].Y1 = W_11->Y10;
return;
}
} EXIT_3:;
}
}

static void Z265
# ifdef HAVE_ARGS
(Zq0A4_153 Z220)
# else
(Z220)
Zq0A4_153 Z220;
# endif
{
struct S_17 Z247;

if (Z220 == Zq0A4_97) {
return;
}
if (Z220 != NIL && Z220->U_1.V_1.Y0 == Zq0A4_100) {
{
register struct S_18 *W_12 = &Z247.U_1.V_1.Y0;

{
register Zq0A4_226 *W_13 = &Z220->U_1.V_5.Y4;

{
SHORTCARD B_19 = W_13->Y13 + 1, B_20 = W_13->Y14;

if (B_19 <= B_20)
for (Z202 = B_19;; Z202 += 1) {
{
register Zq0A4_199 *W_14 = &W_13->Y15->A[Z202 - 1];

if (IN(Zq0A4_6, W_14->Y3)) {
W_12->Y0 = Z231(Z220, W_14->Y0, Z202);
ZpmCQ_13(&Z214, (LONGCARD)W_12->Y0);
INC(Z217->A[W_12->Y0 - 1]);
}
}
if (Z202 >= B_20) break;
}
}
return;
}
}
}
}

static void Z272
# ifdef HAVE_ARGS
(Zq0A4_153 Z220)
# else
(Z220)
Zq0A4_153 Z220;
# endif
{
struct S_16 Z247;

if (Z220 == Zq0A4_97) {
return;
}
if (Z220 != NIL && Z220->U_1.V_1.Y0 == Zq0A4_100) {
for (;;) {
{
register Zq0A4_226 *W_15 = &Z220->U_1.V_5.Y4;

if (!((Zq0A4_177 & W_15->Y2) == 0X0L)) {
goto EXIT_4;
}
if (!(Z200 <= W_15->Y25)) {
goto EXIT_4;
}
{
register Zq0A4_199 *W_16 = &W_15->Y15->A[W_15->Y26->A[Z200 - 1].Y1 - 1];

if (SET_IS_SUBSET1(SET_ELEM (Zq0A4_7) | SET_ELEM (Zq0A4_20), W_16->Y3) && !IN(Zq0A4_19, W_16->Y3)) {
INC(Z204);
}
}
return;
}
} EXIT_4:;
}
}

static void Z273
# ifdef HAVE_ARGS
(Zq0A4_153 Z220)
# else
(Z220)
Zq0A4_153 Z220;
# endif
{
struct S_15 Z247;

if (Z220 == Zq0A4_97) {
return;
}
if (Z220 != NIL && Z220->U_1.V_1.Y0 == Zq0A4_100) {
for (;;) {
{
register Zq0A4_226 *W_17 = &Z220->U_1.V_5.Y4;

if (!((Zq0A4_177 & W_17->Y2) == 0X0L)) {
goto EXIT_5;
}
if (!(Z200 <= W_17->Y25)) {
goto EXIT_5;
}
{
register Zq0A4_199 *W_18 = &W_17->Y15->A[W_17->Y26->A[Z200 - 1].Y1 - 1];

if (SET_IS_SUBSET1(SET_ELEM (Zq0A4_7) | SET_ELEM (Zq0A4_20), W_18->Y3) && !IN(Zq0A4_19, W_18->Y3)) {
ZbpA7d_0 = Z220;
if (Z204 > 1) {
ZfM_29(Zq0A4_172, (STRING)" case k", 7L);
Zq0A4_193(W_17->Y1);
ZfM_29(Zq0A4_172, (STRING)":", 1L);
ZfM_33(Zq0A4_172);
}
{
SHORTCARD B_21 = 1, B_22 = W_17->Y14;

if (B_21 <= B_22)
for (Z202 = B_21;; Z202 += 1) {
if (ZolB7FGBG_9((LONGINT)W_17->Y26->A[Z200 - 1].Y1, (LONGINT)Z202, W_17->Y16)) {
Z219(Z220, Z202);
}
if (Z202 >= B_22) break;
}
}
Z232(Z220, (LONGINT)W_17->Y26->A[Z200 - 1].Y1);
if (!IN(Zq0A4_8, W_18->Y3) && W_18->Y1->U_1.V_1.Y0 == Zq0A4_105) {
ZfM_29(Zq0A4_172, (STRING)"{ register ", 11L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)" yyr = yyt->", 12L);
Zq0A4_193(W_17->Y1);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(W_18->Y1->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)"; if (yyr->yyHead.yyParent == ", 30L);
Zq0A4_192(Zq0A4_88);
ZfM_29(Zq0A4_172, (STRING)") { yyr->yyHead.yyOffset = ", 27L);
Zq0A4_195((LONGINT)(W_17->Y25 + W_18->Y1->U_1.V_10.Y9.Y15));
ZfM_29(Zq0A4_172, (STRING)"; yyr->yyHead.yyParent = yyt; ", 30L);
Z237();
ZfM_29(Zq0A4_172, (STRING)"Init", 4L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)" (yyr); } }", 11L);
ZfM_33(Zq0A4_172);
}
{
SHORTCARD B_23 = 1, B_24 = W_17->Y14;

if (B_23 <= B_24)
for (Z201 = B_23;; Z201 += 1) {
if (W_17->Y15->A[Z201 - 1].Y2 == W_18->Y2) {
{
register Zq0A4_199 *W_19 = &W_17->Y15->A[Z201 - 1];

if (IN(Zq0A4_7, W_19->Y3)) {
Z203 = ZbpA7dv_5(ZbpA7d_0, (LONGINT)Z201);
if (Z203 != Z200 - 1) {
ZfM_29(Zq0A4_172, (STRING)"  INCL (yyt->yyHead.yyIsComp", 28L);
Zq0A4_195((LONGINT)(Z203 / Zq0A4dt_0));
ZfM_29(Zq0A4_172, (STRING)", ", 2L);
Zq0A4_195((LONGINT)(Z203 % Zq0A4dt_0));
ZfM_29(Zq0A4_172, (STRING)");", 2L);
ZfM_33(Zq0A4_172);
}
} else if (IN(Zq0A4_6, W_19->Y3)) {
Z203 = Z227(W_19->Y0, (LONGINT)(Z201 - W_17->Y13 - W_19->Y0->U_1.V_10.Y9.Y13));
ZfM_29(Zq0A4_172, (STRING)"  INCL (yyt->", 13L);
Zq0A4_193(ZbpA7d_0->U_1.V_5.Y4.Y1);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(W_19->Y0->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)"->yyHead.yyIsComp", 17L);
Zq0A4_195((LONGINT)(Z203 / Zq0A4dt_0));
ZfM_29(Zq0A4_172, (STRING)", ", 2L);
Zq0A4_195((LONGINT)(Z203 % Zq0A4dt_0));
ZfM_29(Zq0A4_172, (STRING)");", 2L);
ZfM_33(Zq0A4_172);
}
}
}
if (Z201 >= B_24) break;
}
}
if (Z204 > 1) {
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

static void Z270
# ifdef HAVE_ARGS
(Zq0A4_153 Z220)
# else
(Z220)
Zq0A4_153 Z220;
# endif
{
struct S_13 Z247;

if (Z220 == Zq0A4_97) {
return;
}
if (Z220 != NIL && Z220->U_1.V_1.Y0 == Zq0A4_100) {
{
register struct S_14 *W_20 = &Z247.U_1.V_1.Y0;

{
register Zq0A4_226 *W_21 = &Z220->U_1.V_5.Y4;

Zq0A4du_14(Z220);
Z204 = 0;
Z202 = 2;
for (;;) {
if (Z202 > W_21->Y14) {
goto EXIT_6;
}
{
register Zq0A4_199 *W_22 = &W_21->Y15->A[Z202 - 1];

if (((SET_ELEM (Zq0A4_27) | SET_ELEM (Zq0A4_9) | SET_ELEM (Zq0A4_19)) & W_22->Y3) != 0X0L) {
if (IN(Zq0A4_19, W_22->Y3) || SET_IS_SUBSET1(SET_ELEM (Zq0A4_7) | SET_ELEM (Zq0A4_20), W_22->Y3) || SET_IS_SUBSET1(SET_ELEM (Zq0A4_6) | SET_ELEM (Zq0A4_21), W_22->Y3) || SET_IS_SUBSET1(SET_ELEM (Zq0A4_6) | SET_ELEM (Zq0A4_20), W_22->Y3) && !IN(Zq0A4_8, W_22->Y3) && W_22->Y1->U_1.V_1.Y0 == Zq0A4_105 || SET_IS_SUBSET1(SET_ELEM (Zq0A4_7) | SET_ELEM (Zq0A4_21) | SET_ELEM (Zq0A4_27), W_22->Y3) && W_22->Y0 != Zq0A4du_2 && IN(Zq0A4_49, W_22->Y0->U_1.V_10.Y9.Y8->U_1.V_5.Y4.Y2)) {
INC(Z204);
goto EXIT_6;
}
}
}
INC(Z202);
} EXIT_6:;
if (Z204 == 0 && (Zq0A4du_2 == Zq0A4_97 || !IN(Zq0A4_49, Zq0A4du_2->U_1.V_10.Y9.Y8->U_1.V_5.Y4.Y2))) {
return;
}
ZbpA7d_0 = Z220;
ZfM_29(Zq0A4_172, (STRING)"  case k", 8L);
Zq0A4_193(W_21->Y1);
ZfM_29(Zq0A4_172, (STRING)":", 1L);
ZfM_33(Zq0A4_172);
{
SHORTCARD B_25 = 2, B_26 = W_21->Y14;

if (B_25 <= B_26)
for (Z202 = B_25;; Z202 += 1) {
{
register Zq0A4_199 *W_23 = &W_21->Y15->A[Z202 - 1];

if (((SET_ELEM (Zq0A4_27) | SET_ELEM (Zq0A4_9)) & W_23->Y3) != 0X0L) {
if (SET_IS_SUBSET1(SET_ELEM (Zq0A4_7) | SET_ELEM (Zq0A4_20), W_23->Y3) || SET_IS_SUBSET1(SET_ELEM (Zq0A4_6) | SET_ELEM (Zq0A4_21), W_23->Y3) || SET_IS_SUBSET1(SET_ELEM (Zq0A4_6) | SET_ELEM (Zq0A4_20), W_23->Y3) && !IN(Zq0A4_8, W_23->Y3) && W_23->Y1->U_1.V_1.Y0 == Zq0A4_105) {
Z219(Z220, Z202);
} else if (SET_IS_SUBSET1(SET_ELEM (Zq0A4_7) | SET_ELEM (Zq0A4_21) | SET_ELEM (Zq0A4_27), W_23->Y3) && W_23->Y0 != Zq0A4du_2 && IN(Zq0A4_49, W_23->Y0->U_1.V_10.Y9.Y8->U_1.V_5.Y4.Y2)) {
if (ZpmCQ_25(ORD('Z'), &Zq0A4_171) && IN(Zq0A4_42, Z220->U_1.V_5.Y4.Y2)) {
ZfM_29(Zq0A4_172, (STRING)"yyWriteVisit (yyt, \"", 20L);
Zq0A4_192(W_23->Y0->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)"\"); ", 4L);
}
ZfM_29(Zq0A4_172, (STRING)"yyE (yyt->", 10L);
Zq0A4_193(W_21->Y1);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(W_23->Y0->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)");", 2L);
ZfM_33(Zq0A4_172);
if (ZpmCQ_25(ORD('Z'), &Zq0A4_171) && IN(Zq0A4_42, Z220->U_1.V_5.Y4.Y2)) {
ZfM_29(Zq0A4_172, (STRING)"yyVisitParent (yyt->", 20L);
Zq0A4_193(W_21->Y1);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(W_23->Y0->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)");", 2L);
ZfM_33(Zq0A4_172);
}
}
}
}
if (Z202 >= B_26) break;
}
}
ZpmCQ_5(&W_20->Y0, (LONGCARD)W_21->Y14);
{
SHORTCARD B_27 = 2, B_28 = W_21->Y13;

if (B_27 <= B_28)
for (Z200 = B_27;; Z200 += 1) {
{
register Zq0A4_199 *W_24 = &W_21->Y15->A[Z200 - 1];

if (IN(Zq0A4_19, W_24->Y3)) {
{
SHORTCARD B_29 = 2, B_30 = W_21->Y14;

if (B_29 <= B_30)
for (Z202 = B_29;; Z202 += 1) {
if (ZolB7FGBG_9((LONGINT)Z200, (LONGINT)Z202, W_21->Y16)) {
if (((SET_ELEM (Zq0A4_7) | SET_ELEM (Zq0A4_6)) & W_21->Y15->A[Z202 - 1].Y3) != 0X0L) {
ZpmCQ_13(&W_20->Y0, (LONGCARD)Z202);
}
}
if (Z202 >= B_30) break;
}
}
}
}
if (Z200 >= B_28) break;
}
}
{
SHORTCARD B_31 = 2, B_32 = W_21->Y14;

if (B_31 <= B_32)
for (Z200 = B_31;; Z200 += 1) {
{
register Zq0A4_199 *W_25 = &W_21->Y15->A[Z200 - 1];

if (SET_IS_SUBSET1(SET_ELEM (Zq0A4_7) | SET_ELEM (Zq0A4_20) | SET_ELEM (Zq0A4_9), W_25->Y3) || SET_IS_SUBSET1(SET_ELEM (Zq0A4_6) | SET_ELEM (Zq0A4_21) | SET_ELEM (Zq0A4_9), W_25->Y3)) {
ZpmCQ_14(&W_20->Y0, (LONGCARD)Z200);
}
}
if (Z200 >= B_32) break;
}
}
while (!ZpmCQ_26(W_20->Y0)) {
Z219(Z220, (SHORTCARD)ZpmCQ_20(&W_20->Y0));
}
ZpmCQ_7(&W_20->Y0);
{
SHORTCARD B_33 = 2, B_34 = W_21->Y13;

if (B_33 <= B_34)
for (Z200 = B_33;; Z200 += 1) {
if (IN(Zq0A4_19, W_21->Y15->A[Z200 - 1].Y3)) {
Z232(Z220, (LONGINT)Z200);
}
if (Z200 >= B_34) break;
}
}
if (Zq0A4du_2 == Zq0A4_97 || !IN(Zq0A4_49, Zq0A4du_2->U_1.V_10.Y9.Y8->U_1.V_5.Y4.Y2)) {
ZfM_29(Zq0A4_172, (STRING)"return;", 7L);
ZfM_33(Zq0A4_172);
} else {
if (ZpmCQ_25(ORD('Z'), &Zq0A4_171) && IN(Zq0A4_42, Z220->U_1.V_5.Y4.Y2)) {
ZfM_29(Zq0A4_172, (STRING)"yyWriteVisit (yyt, \"", 20L);
Zq0A4_192(Zq0A4du_2->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)"\"); ", 4L);
}
ZfM_29(Zq0A4_172, (STRING)"yyt = yyt->", 11L);
Zq0A4_193(W_21->Y1);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(Zq0A4du_2->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)"; break;", 8L);
ZfM_33(Zq0A4_172);
}
return;
}
}
}
}

static void Z267
# ifdef HAVE_ARGS
(Zq0A4_153 Z220)
# else
(Z220)
Zq0A4_153 Z220;
# endif
{
struct S_12 Z247;

if (Z220 == Zq0A4_97) {
return;
}
if (Z220 != NIL && Z220->U_1.V_1.Y0 == Zq0A4_100) {
for (;;) {
{
register Zq0A4_226 *W_26 = &Z220->U_1.V_5.Y4;

if (!!IN(Zq0A4_49, W_26->Y2)) {
goto EXIT_7;
}
Z209 = FALSE;
Zq0A4_185(Z220, (Zq0A4_170)Z267);
Zq0A4_184(W_26->Y4, (Zq0A4_170)Z287);
if (!Z209) {
goto EXIT_7;
}
INCL(W_26->Y2, Zq0A4_49);
Z210 = FALSE;
return;
}
} EXIT_7:;
}
if (Z220 != NIL && Z220->U_1.V_1.Y0 == Zq0A4_105) {
for (;;) {
{
register Zq0A4_231 *W_27 = &Z220->U_1.V_10.Y9;

if (!(IN(Zq0A4_9, W_27->Y6) || IN(Zq0A4_49, W_27->Y8->U_1.V_5.Y4.Y2))) {
goto EXIT_8;
}
Z209 = TRUE;
return;
}
} EXIT_8:;
}
if (Z220 != NIL && Z220->U_1.V_1.Y0 == Zq0A4_106) {
for (;;) {
{
register Zq0A4_232 *W_28 = &Z220->U_1.V_11.Y10;

if (!(((SET_ELEM (Zq0A4_19) | SET_ELEM (Zq0A4_9)) & W_28->Y6) != 0X0L)) {
goto EXIT_9;
}
Z209 = TRUE;
return;
}
} EXIT_9:;
}
}

static void Z287
# ifdef HAVE_ARGS
(Zq0A4_153 Z220)
# else
(Z220)
Zq0A4_153 Z220;
# endif
{
struct S_11 Z247;

if (Z220 == Zq0A4_97) {
return;
}
if (Z220 != NIL && Z220->U_1.V_1.Y0 == Zq0A4_100) {
for (;;) {
{
register Zq0A4_226 *W_29 = &Z220->U_1.V_5.Y4;

if (!IN(Zq0A4_49, W_29->Y2)) {
goto EXIT_10;
}
Z209 = TRUE;
return;
}
} EXIT_10:;
}
}

INTEGER ZbpA7dv_5
# ifdef HAVE_ARGS
(Zq0A4_153 Z288, INTEGER Z289)
# else
(Z288, Z289)
Zq0A4_153 Z288;
INTEGER Z289;
# endif
{
struct S_10 Z247;

return Z288->U_1.V_5.Y4.Y26->A[Z289 - 1].Y0 - 1;
}

static INTEGER Z227
# ifdef HAVE_ARGS
(Zq0A4_153 Z290, INTEGER Z291)
# else
(Z290, Z291)
Zq0A4_153 Z290;
INTEGER Z291;
# endif
{
struct S_9 Z247;

return Z290->U_1.V_10.Y9.Y8->U_1.V_5.Y4.Y26->A[Z291 - 1].Y0 - 1;
}

static INTEGER Z231
# ifdef HAVE_ARGS
(Zq0A4_153 Z292, Zq0A4_153 Z293, SHORTCARD Z294)
# else
(Z292, Z293, Z294)
Zq0A4_153 Z292;
Zq0A4_153 Z293;
SHORTCARD Z294;
# endif
{
struct S_7 Z247;

{
register struct S_8 *W_30 = &Z247.U_1.V_1.Y0;

{
register Zq0A4_231 *W_31 = &Z293->U_1.V_10.Y9;

return Z292->U_1.V_5.Y4.Y25 + W_31->Y15 + W_31->Y8->U_1.V_5.Y4.Y26->A[Z294 - Z292->U_1.V_5.Y4.Y13 - W_31->Y13 - 1].Y0 - 1;
}
return W_30->Y0;
}
}

static INTEGER Z276
# ifdef HAVE_ARGS
(Zq0A4_153 Z296, INTEGER Z297)
# else
(Z296, Z297)
Zq0A4_153 Z296;
INTEGER Z297;
# endif
{
SHORTCARD Z263;
struct S_5 Z247;

{
register struct S_6 *W_32 = &Z247.U_1.V_1.Y0;

{
register Zq0A4_226 *W_33 = &Z296->U_1.V_5.Y4;

{
SHORTCARD B_35 = W_33->Y13 + 1, B_36 = W_33->Y14;

if (B_35 <= B_36)
for (Z263 = B_35;; Z263 += 1) {
{
register Zq0A4_199 *W_34 = &W_33->Y15->A[Z263 - 1];

if (((SET_ELEM (Zq0A4_8) | SET_ELEM (Zq0A4_19) | SET_ELEM (Zq0A4_27)) & W_34->Y3) == 0X0L && Z231(Z296, W_34->Y0, Z263) == Z297) {
return Z263;
}
}
if (Z263 >= B_36) break;
}
}
}
return 0;
return W_32->Y0;
}
}

static void Z260
# ifdef HAVE_ARGS
(Zq0A4_153 Z220)
# else
(Z220)
Zq0A4_153 Z220;
# endif
{
struct S_4 Z247;

for (;;) {
for (;;) {
if (Z220 == Zq0A4_97) {
return;
}
if (Z220 != NIL && Z220->U_1.V_1.Y0 == Zq0A4_100) {
{
register Zq0A4_226 *W_35 = &Z220->U_1.V_5.Y4;

Z220 = W_35->Y3;
goto EXIT_12;
}
}
if (Z220 != NIL && Z220->U_1.V_1.Y0 == Zq0A4_105) {
for (;;) {
{
register Zq0A4_231 *W_36 = &Z220->U_1.V_10.Y9;

if (!(((SET_ELEM (Zq0A4_8) | SET_ELEM (Zq0A4_19) | SET_ELEM (Zq0A4_27) | SET_ELEM (Zq0A4_1)) & W_36->Y6) == 0X0L && !ZpmCQ_25((LONGCARD)W_36->Y3, &Z215))) {
goto EXIT_13;
}
ZpmCQ_13(&Z215, (LONGCARD)W_36->Y3);
ZbpA7d_6();
ZfM_29(Zq0A4_172, (STRING)"void ", 5L);
Zq0A4_192(Zq0A4_279->U_1.V_32.Y31.Y7);
Zq0A4_192(W_36->Y3);
ZfM_29(Zq0A4_172, (STRING)"	ARGS ((register ", 17L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)" yyt));", 7L);
ZfM_33(Zq0A4_172);
Z260(W_36->Y1);
return;
}
} EXIT_13:;
{
register Zq0A4_231 *W_37 = &Z220->U_1.V_10.Y9;

Z220 = W_37->Y1;
goto EXIT_12;
}
}
if (Z220 != NIL && Z220->U_1.V_1.Y0 == Zq0A4_106) {
for (;;) {
{
register Zq0A4_232 *W_38 = &Z220->U_1.V_11.Y10;

if (!(((SET_ELEM (Zq0A4_8) | SET_ELEM (Zq0A4_19) | SET_ELEM (Zq0A4_27) | SET_ELEM (Zq0A4_1)) & W_38->Y6) == 0X0L && !ZpmCQ_25((LONGCARD)W_38->Y3, &Z215))) {
goto EXIT_14;
}
ZpmCQ_13(&Z215, (LONGCARD)W_38->Y3);
ZbpA7d_6();
ZfM_29(Zq0A4_172, (STRING)"void ", 5L);
Zq0A4_192(Zq0A4_279->U_1.V_32.Y31.Y7);
Zq0A4_192(W_38->Y3);
ZfM_29(Zq0A4_172, (STRING)"	ARGS ((register ", 17L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)" yyt));", 7L);
ZfM_33(Zq0A4_172);
Z260(W_38->Y1);
return;
}
} EXIT_14:;
{
register Zq0A4_232 *W_39 = &Z220->U_1.V_11.Y10;

Z220 = W_39->Y1;
goto EXIT_12;
}
}
return;
} EXIT_12:;
} EXIT_11:;
}

static void Z271
# ifdef HAVE_ARGS
(Zq0A4_153 Z220)
# else
(Z220)
Zq0A4_153 Z220;
# endif
{
struct S_3 Z247;

for (;;) {
for (;;) {
if (Z220 == Zq0A4_97) {
return;
}
if (Z220 != NIL && Z220->U_1.V_1.Y0 == Zq0A4_100) {
{
register Zq0A4_226 *W_40 = &Z220->U_1.V_5.Y4;

Z220 = W_40->Y3;
goto EXIT_16;
}
}
if (Z220 != NIL && Z220->U_1.V_1.Y0 == Zq0A4_105) {
for (;;) {
{
register Zq0A4_231 *W_41 = &Z220->U_1.V_10.Y9;

if (!(((SET_ELEM (Zq0A4_8) | SET_ELEM (Zq0A4_19) | SET_ELEM (Zq0A4_27) | SET_ELEM (Zq0A4_1)) & W_41->Y6) == 0X0L && !ZpmCQ_25((LONGCARD)W_41->Y3, &Z215))) {
goto EXIT_17;
}
ZpmCQ_13(&Z215, (LONGCARD)W_41->Y3);
ZfM_29(Zq0A4_172, (STRING)"void ", 5L);
ZbpA7d_5();
Zq0A4_192(Zq0A4_279->U_1.V_32.Y31.Y7);
Zq0A4_192(W_41->Y3);
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
ZfM_29(Zq0A4_172, (STRING)"{", 1L);
ZfM_33(Zq0A4_172);
Z211 = TRUE;
Z218 = W_41->Y3;
Z299(Zq0A4_279->U_1.V_32.Y31.Y13);
if (!Z211) {
ZfM_29(Zq0A4_172, (STRING)" }", 2L);
ZfM_33(Zq0A4_172);
}
ZfM_29(Zq0A4_172, (STRING)"}", 1L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
Z271(W_41->Y1);
return;
}
} EXIT_17:;
{
register Zq0A4_231 *W_42 = &Z220->U_1.V_10.Y9;

Z220 = W_42->Y1;
goto EXIT_16;
}
}
if (Z220 != NIL && Z220->U_1.V_1.Y0 == Zq0A4_106) {
for (;;) {
{
register Zq0A4_232 *W_43 = &Z220->U_1.V_11.Y10;

if (!(((SET_ELEM (Zq0A4_8) | SET_ELEM (Zq0A4_19) | SET_ELEM (Zq0A4_27) | SET_ELEM (Zq0A4_1)) & W_43->Y6) == 0X0L && !ZpmCQ_25((LONGCARD)W_43->Y3, &Z215))) {
goto EXIT_18;
}
ZpmCQ_13(&Z215, (LONGCARD)W_43->Y3);
ZfM_29(Zq0A4_172, (STRING)"void ", 5L);
ZbpA7d_5();
Zq0A4_192(Zq0A4_279->U_1.V_32.Y31.Y7);
Zq0A4_192(W_43->Y3);
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
ZfM_29(Zq0A4_172, (STRING)"{", 1L);
ZfM_33(Zq0A4_172);
Z211 = TRUE;
Z218 = W_43->Y3;
Z299(Zq0A4_279->U_1.V_32.Y31.Y13);
if (!Z211) {
ZfM_29(Zq0A4_172, (STRING)" }", 2L);
ZfM_33(Zq0A4_172);
}
ZfM_29(Zq0A4_172, (STRING)"}", 1L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
Z271(W_43->Y1);
return;
}
} EXIT_18:;
{
register Zq0A4_232 *W_44 = &Z220->U_1.V_11.Y10;

Z220 = W_44->Y1;
goto EXIT_16;
}
}
return;
} EXIT_16:;
} EXIT_15:;
}

static void Z299
# ifdef HAVE_ARGS
(Zq0A4_153 Z220)
# else
(Z220)
Zq0A4_153 Z220;
# endif
{
struct S_2 Z247;

for (;;) {
for (;;) {
if (Z220 == Zq0A4_97) {
return;
}
if (Z220 != NIL && Z220->U_1.V_1.Y0 == Zq0A4_100) {
{
register Zq0A4_226 *W_45 = &Z220->U_1.V_5.Y4;

Z204 = 0;
Z202 = 2;
for (;;) {
if (Z202 > W_45->Y13) {
goto EXIT_21;
}
{
register Zq0A4_199 *W_46 = &W_45->Y15->A[Z202 - 1];

if (!IN(Zq0A4_8, W_46->Y3) && W_46->Y1->U_1.V_10.Y9.Y3 == Z218) {
INC(Z204);
goto EXIT_21;
}
}
INC(Z202);
} EXIT_21:;
if (Z204 > 0) {
if (Z211) {
Z211 = FALSE;
} else {
ZfM_29(Zq0A4_172, (STRING)" } else", 7L);
}
if (W_45->Y4->U_1.V_1.Y0 == Zq0A4_99) {
ZfM_29(Zq0A4_172, (STRING)" if (yyt->Kind == k", 19L);
Zq0A4_193(W_45->Y1);
ZfM_29(Zq0A4_172, (STRING)") {", 3L);
ZfM_33(Zq0A4_172);
} else {
ZfM_29(Zq0A4_172, (STRING)" if (", 5L);
Z237();
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"_IsType (yyt, k", 15L);
Zq0A4_193(W_45->Y1);
ZfM_29(Zq0A4_172, (STRING)")) {", 4L);
ZfM_33(Zq0A4_172);
}
ZbpA7d_0 = Z220;
Z219(Z220, Z202);
} else {
Z299(W_45->Y4);
}
Z220 = W_45->Y5;
goto EXIT_20;
}
}
return;
} EXIT_20:;
} EXIT_19:;
}

void ZbpA7dv_6
 ARGS ((void))
{
}

void ZbpA7dv_7
 ARGS ((void))
{
}

static void Z303
 ARGS ((void))
{
ZfM_34();
rExit(1L);
}

void BEGIN_EvalC3 ARGS ((void))
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
BEGIN_TreeC1 ();
BEGIN_TreeC2 ();
BEGIN_EvalC ();
BEGIN_Errors ();
BEGIN_Position ();
BEGIN_EvalC ();
BEGIN_Tree ();

ZbpA7dv_0 = ZfM_1;
ZbpA7dv_2 = Z303;
ZbpA7dv_6();
}
