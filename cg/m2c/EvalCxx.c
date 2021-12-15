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

#ifndef DEFINITION_Semantic
#include "Semantic.h"
#endif

#ifndef DEFINITION_TreeCxx1
#include "TreeCxx1.h"
#endif

#ifndef DEFINITION_TreeCxx2
#include "TreeCxx2.h"
#endif

#ifndef DEFINITION_EvalCxx3
#include "EvalCxx3.h"
#endif

#ifndef DEFINITION_Tree
#include "Tree.h"
#endif

#ifndef DEFINITION_EvalCxx
#include "EvalCxx.h"
#endif

Zq0A4_153 ZbpA7dpZ_0;
SHORTCARD ZbpA7dpZ_1;
ZfM_3 ZbpA7dpZ_2;
BOOLEAN ZbpA7dpZ_3;
PROC ZbpA7dpZ_4;

static SHORTCARD Z178;
static Zq0A4_153 Z179, Z180, Z181;
static void Z182 ARGS ((CHAR Z183[], LONGCARD O_1));
static BOOLEAN Z186 ARGS ((BYTE Z187[], LONGCARD O_3, BYTE Z188[], LONGCARD O_2));
struct S_10 {
union {
char dummy;
} U_1;
};
struct S_9 {
union {
char dummy;
} U_1;
};
struct S_8 {
union {
char dummy;
} U_1;
};
struct S_7 {
union {
char dummy;
} U_1;
};
struct S_6 {
union {
char dummy;
} U_1;
};
static void Z211 ARGS ((Zq0A4_153 Z194));
struct S_5 {
union {
char dummy;
} U_1;
};
struct S_2 {
union {
struct {
struct S_4 {
BOOLEAN Y0;
} Y0;
} V_1;
struct {
struct S_3 {
Zq0A4_153 Y0;
INTEGER Y1;
} Y1;
} V_2;
} U_1;
};
static BOOLEAN Z232 ARGS ((Zq0A4_153 Z259, SHORTCARD Z260));
struct S_1 {
union {
char dummy;
} U_1;
};
static void Z263 ARGS ((void));

static void Z182
# ifdef HAVE_ARGS
(CHAR Z183[], LONGCARD O_1)
# else
(Z183, O_1)
CHAR Z183[];
LONGCARD O_1;
# endif
{
OPEN_ARRAY_LOCALS

ALLOC_OPEN_ARRAYS (O_1 * sizeof (CHAR), 1)
COPY_OPEN_ARRAY (Z183, O_1, CHAR)
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)"Error: module EvalCxx, routine ", 31L);
ZfM_29((ZDz6VQCC_4)ZfM_2, Z183, O_1);
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)" failed", 7L);
ZfM_33((ZDz6VQCC_4)ZfM_2);
(*ZbpA7dpZ_4)();
FREE_OPEN_ARRAYS
}

static BOOLEAN Z186
# ifdef HAVE_ARGS
(BYTE Z187[], LONGCARD O_3, BYTE Z188[], LONGCARD O_2)
# else
(Z187, O_3, Z188, O_2)
BYTE Z187[];
LONGCARD O_3;
BYTE Z188[];
LONGCARD O_2;
# endif
{
INTEGER Z189;
OPEN_ARRAY_LOCALS

ALLOC_OPEN_ARRAYS (O_2 * sizeof (WORD) + O_3 * sizeof (WORD), 2)
COPY_OPEN_ARRAY (Z188, O_2, WORD)
COPY_OPEN_ARRAY (Z187, O_3, WORD)
{
LONGINT B_1 = 0, B_2 = (INTEGER)(O_3 - 1);

if (B_1 <= B_2)
for (Z189 = B_1;; Z189 += 1) {
if (Z187[Z189] != Z188[Z189]) {
FREE_OPEN_ARRAYS
return FALSE;
}
if (Z189 >= B_2) break;
}
}
FREE_OPEN_ARRAYS
return TRUE;
}

void ZbpA7dpZ_5
# ifdef HAVE_ARGS
(Zfb3DLQ_0 Z191)
# else
(Z191)
Zfb3DLQ_0 Z191;
# endif
{
struct S_10 Z192;

ZfM_29(Zq0A4_172, (STRING)"(class ", 7L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"::", 2L);
Zq0A4_192(Z191);
ZfM_29(Zq0A4_172, (STRING)" *) ", 4L);
return;
}

void ZbpA7dpZ_6
# ifdef HAVE_ARGS
(Zq0A4_153 Z194)
# else
(Z194)
Zq0A4_153 Z194;
# endif
{
struct S_9 Z192;

if (Z194 == Zq0A4_97) {
return;
}
if (Z194 != NIL && Z194->U_1.V_1.Y0 == Zq0A4_127) {
{
register Zq0A4_253 *W_1 = &Z194->U_1.V_32.Y31;

ZfM_29(Zq0A4_172, (STRING)"# ifndef yy", 11L);
Zq0A4_192(W_1->Y7);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# define yy", 11L);
Zq0A4_192(W_1->Y7);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# include \"", 11L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)".h\"", 3L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
Zq0A4dpZf_3(W_1->Y8->U_1.V_17.Y16.Y8);
ZqnGVQ_5(Zq0A4_172, W_1->Y8->U_1.V_17.Y16.Y2);
Z179 = W_1->Y14;
while (Z179->U_1.V_1.Y0 == Zq0A4_144) {
Zq0A4dpZf_3(Z179->U_1.V_49.Y48.Y8->U_1.V_17.Y16.Y8);
ZqnGVQ_5(Zq0A4_172, Z179->U_1.V_49.Y48.Y8->U_1.V_17.Y16.Y2);
Z179 = Z179->U_1.V_49.Y48.Y12;
}
Zq0A4dpZf_3(W_1->Y8->U_1.V_17.Y16.Y7);
ZqnGVQ_5(Zq0A4_172, W_1->Y8->U_1.V_17.Y16.Y1);
Z179 = W_1->Y14;
while (Z179->U_1.V_1.Y0 == Zq0A4_144) {
Zq0A4dpZf_3(Z179->U_1.V_49.Y48.Y8->U_1.V_17.Y16.Y7);
ZqnGVQ_5(Zq0A4_172, Z179->U_1.V_49.Y48.Y8->U_1.V_17.Y16.Y1);
Z179 = Z179->U_1.V_49.Y48.Y12;
}
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"extern void ", 12L);
Zq0A4_192(W_1->Y7);
ZfM_29(Zq0A4_172, (STRING)" (", 2L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"::", 2L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)");", 2L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"extern void Begin", 17L);
Zq0A4_192(W_1->Y7);
ZfM_29(Zq0A4_172, (STRING)" ();", 4L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"extern void Close", 17L);
Zq0A4_192(W_1->Y7);
ZfM_29(Zq0A4_172, (STRING)" ();", 4L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# endif", 7L);
ZfM_33(Zq0A4_172);
return;
}
}
}

void ZbpA7dpZ_7
# ifdef HAVE_ARGS
(Zq0A4_153 Z194)
# else
(Z194)
Zq0A4_153 Z194;
# endif
{
struct S_8 Z192;

if (Z194 == Zq0A4_97) {
return;
}
if (Z194 != NIL && Z194->U_1.V_1.Y0 == Zq0A4_127) {
{
register Zq0A4_253 *W_2 = &Z194->U_1.V_32.Y31;

ZfM_29(Zq0A4_172, (STRING)"# define DEP(a, b) a", 20L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# define SELF yyt", 17L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# ifndef EXTERN_C_BEGIN", 23L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# define EXTERN_C_BEGIN", 23L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# define EXTERN_C_END", 21L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# endif", 7L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# include \"", 11L);
Zq0A4_192(W_2->Y7);
ZfM_29(Zq0A4_172, (STRING)".h\"", 3L);
ZfM_33(Zq0A4_172);
if (ZpmCQ_25(ORD('Y'), &Zq0A4_171) || ZpmCQ_25(ORD('Z'), &Zq0A4_171) || ZpmCQ_25(ORD('L'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)"# include <stdio.h>", 19L);
ZfM_33(Zq0A4_172);
}
if (ZpmCQ_25(ORD('Y'), &Zq0A4_171) || ZpmCQ_25(ORD('Z'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)"EXTERN_C_BEGIN", 14L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# include \"rString.h\"", 21L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# include \"Idents.h\"", 20L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# include \"Sets.h\"", 18L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"EXTERN_C_END", 12L);
ZfM_33(Zq0A4_172);
}
if (ZpmCQ_25(ORD('9'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)"EXTERN_C_BEGIN", 14L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# include \"General.h\"", 21L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"EXTERN_C_END", 12L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"static char * yyMinLow;", 23L);
ZfM_33(Zq0A4_172);
}
Zq0A4dpZf_3(W_2->Y8->U_1.V_17.Y16.Y9);
ZqnGVQ_5(Zq0A4_172, W_2->Y8->U_1.V_17.Y16.Y3);
Z179 = W_2->Y14;
while (Z179->U_1.V_1.Y0 == Zq0A4_144) {
Zq0A4dpZf_3(Z179->U_1.V_49.Y48.Y8->U_1.V_17.Y16.Y9);
ZqnGVQ_5(Zq0A4_172, Z179->U_1.V_49.Y48.Y8->U_1.V_17.Y16.Y3);
Z179 = Z179->U_1.V_49.Y48.Y12;
}
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"using namespace ", 16L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
if (ZpmCQ_25(ORD('X'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)"# include \"yy", 13L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)".h\"", 3L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# define yyWrite", 16L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"(a) Write", 9L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)" (yyf, a)", 9L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"static char yyb;", 16L);
ZfM_33(Zq0A4_172);
}
if (ZpmCQ_25(ORD('Y'), &Zq0A4_171) || ZpmCQ_25(ORD('Z'), &Zq0A4_171)) {
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# define yyTrace	true", 21L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"static const char * const yyTypeName [", 38L);
Zq0A4_195(Zq0A4_68 + 1);
ZfM_29(Zq0A4_172, (STRING)"] = { 0,", 8L);
ZfM_33(Zq0A4_172);
Zq0A4_184(W_2->Y13, (Zq0A4_170)Z211);
ZfM_29(Zq0A4_172, (STRING)"};", 2L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"static void yyWriteType (", 25L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"::", 2L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)" yyt)", 5L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"{", 1L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" const char * yys = yyTypeName [yyt->Kind];", 43L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" register int yyi = 16 - strlen (yys);", 38L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" printf (\"%s\", yys);", 20L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" while (yyi -- > 0) putc (' ', stdout);", 39L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"}", 1L);
ZfM_33(Zq0A4_172);
}
if (ZpmCQ_25(ORD('X'), &Zq0A4_171)) {
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"static FILE * yyf = NULL;", 25L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"static void yyWriteHex (unsigned char * yyx, int yysize)", 56L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"{ register int yyi; for (yyi = 0; yyi < yysize; yyi ++) printf (\"%02x \", yyx [yyi]); }", 86L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"static void xxWriteNl () { if (yyTrace) { putc ('\\n', stdout); fflush (stdout); } }", 83L);
ZfM_33(Zq0A4_172);
}
if (ZpmCQ_25(ORD('X'), &Zq0A4_171)) {
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"static void yyWriteEval (", 25L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"::", 2L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)" yyt, char * yys)", 17L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"{", 1L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" if (yyTrace) {", 15L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  register int yyi = 24 - strlen (yys);", 39L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  yyWriteType (yyt);", 20L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  printf (\" e %s\", yys);", 24L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  while (yyi -- > 0) putc (' ', stdout);", 40L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  printf (\" = \");", 17L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  fflush (stdout);", 18L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" }", 2L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"}", 1L);
ZfM_33(Zq0A4_172);
} else if (ZpmCQ_25(ORD('Y'), &Zq0A4_171)) {
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"static void yyWriteEval (", 25L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"::", 2L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)" yyt, char * yys)", 17L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"{", 1L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" if (yyTrace) {", 15L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  yyWriteType (yyt);", 20L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  printf (\" e %s\\n\", yys);", 26L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  fflush (stdout);", 18L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" }", 2L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"}", 1L);
ZfM_33(Zq0A4_172);
}
if (ZpmCQ_25(ORD('Z'), &Zq0A4_171)) {
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"static void yyWriteVisit (", 26L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"::", 2L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)" yyt, char * yys)", 17L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"{", 1L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" if (yyTrace) {", 15L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  yyWriteType (yyt);", 20L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  printf (\" v %s\\n\", yys);", 26L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  fflush (stdout);", 18L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" }", 2L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"}", 1L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"static void yyVisitParent (", 27L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"::", 2L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)" yyt)", 5L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"{ yyWriteVisit (yyt, \"parent\"); }", 33L);
ZfM_33(Zq0A4_172);
}
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# ifdef YYCHECK", 15L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"static char * yyCheck1 = & ", 27L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"_module_does_not_match_evaluator_module_", 40L);
ZfM_28(Zq0A4_172, ZpmC89LG6_1, 0L, 10L);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# endif", 7L);
ZfM_33(Zq0A4_172);
return;
}
}
}

void ZbpA7dpZ_8
# ifdef HAVE_ARGS
(Zq0A4_153 Z194)
# else
(Z194)
Zq0A4_153 Z194;
# endif
{
struct S_7 Z192;

if (Z194 == Zq0A4_97) {
return;
}
if (Z194 != NIL && Z194->U_1.V_1.Y0 == Zq0A4_127) {
{
register Zq0A4_253 *W_3 = &Z194->U_1.V_32.Y31;

ZfM_29(Zq0A4_172, (STRING)"void Begin", 10L);
Zq0A4_192(W_3->Y7);
ZfM_29(Zq0A4_172, (STRING)" ()", 3L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"{", 1L);
ZfM_33(Zq0A4_172);
Zq0A4dpZf_3(W_3->Y8->U_1.V_17.Y16.Y11);
ZqnGVQ_5(Zq0A4_172, W_3->Y8->U_1.V_17.Y16.Y5);
Z179 = W_3->Y14;
while (Z179->U_1.V_1.Y0 == Zq0A4_144) {
Zq0A4dpZf_3(Z179->U_1.V_49.Y48.Y8->U_1.V_17.Y16.Y11);
ZqnGVQ_5(Zq0A4_172, Z179->U_1.V_49.Y48.Y8->U_1.V_17.Y16.Y5);
Z179 = Z179->U_1.V_49.Y48.Y12;
}
ZfM_29(Zq0A4_172, (STRING)"}", 1L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"void Close", 10L);
Zq0A4_192(W_3->Y7);
ZfM_29(Zq0A4_172, (STRING)" ()", 3L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"{", 1L);
ZfM_33(Zq0A4_172);
Zq0A4dpZf_3(W_3->Y8->U_1.V_17.Y16.Y12);
ZqnGVQ_5(Zq0A4_172, W_3->Y8->U_1.V_17.Y16.Y6);
Z179 = W_3->Y14;
while (Z179->U_1.V_1.Y0 == Zq0A4_144) {
Zq0A4dpZf_3(Z179->U_1.V_49.Y48.Y8->U_1.V_17.Y16.Y12);
ZqnGVQ_5(Zq0A4_172, Z179->U_1.V_49.Y48.Y8->U_1.V_17.Y16.Y6);
Z179 = Z179->U_1.V_49.Y48.Y12;
}
ZfM_29(Zq0A4_172, (STRING)"}", 1L);
ZfM_33(Zq0A4_172);
return;
}
}
}

void ZbpA7dpZ_9
# ifdef HAVE_ARGS
(Zq0A4_153 Z194)
# else
(Z194)
Zq0A4_153 Z194;
# endif
{
struct S_6 Z192;

if (Z194 == Zq0A4_97) {
return;
}
if (Z194 != NIL && Z194->U_1.V_1.Y0 == Zq0A4_127) {
{
register Zq0A4_253 *W_4 = &Z194->U_1.V_32.Y31;

ZbpA7dpZ_7(Z194);
ZfM_29(Zq0A4_172, (STRING)"static char * yyCheck2 = & generate_", 36L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"_module_without_option_0;", 25L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
{
SHORTCARD B_3 = 1, B_4 = Zq0A4_70;

if (B_3 <= B_4)
for (Z178 = B_3;; Z178 += 1) {
ZfM_29(Zq0A4_172, (STRING)"static void yyVisit", 19L);
Zq0A4_195((LONGINT)Z178);
ZfM_29(Zq0A4_172, (STRING)" (register ", 11L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"::", 2L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)");", 2L);
ZfM_33(Zq0A4_172);
if (Z178 >= B_4) break;
}
}
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"void ", 5L);
Zq0A4_192(W_4->Y7);
ZfM_29(Zq0A4_172, (STRING)" (", 2L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"::", 2L);
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
if (Zq0A4_70 > 0) {
ZfM_29(Zq0A4_172, (STRING)" yyVisit1 (yyt);", 16L);
ZfM_33(Zq0A4_172);
}
if (ZpmCQ_25(ORD('9'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)" printf (\"Stacksize %ld\\n\", (long) (& yyHigh - yyMinLow));", 58L);
ZfM_33(Zq0A4_172);
}
ZfM_29(Zq0A4_172, (STRING)"}", 1L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
{
SHORTCARD B_5 = 1, B_6 = Zq0A4_70;

if (B_5 <= B_6)
for (Z178 = B_5;; Z178 += 1) {
ZfM_29(Zq0A4_172, (STRING)"static void yyVisit", 19L);
Zq0A4_195((LONGINT)Z178);
ZfM_29(Zq0A4_172, (STRING)" (register ", 11L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"::", 2L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)" yyt)", 5L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"{", 1L);
ZfM_33(Zq0A4_172);
Zq0A4dpZf_3(W_4->Y8->U_1.V_17.Y16.Y10);
ZqnGVQ_5(Zq0A4_172, W_4->Y8->U_1.V_17.Y16.Y4);
Z179 = W_4->Y14;
while (Z179->U_1.V_1.Y0 == Zq0A4_144) {
Zq0A4dpZf_3(Z179->U_1.V_49.Y48.Y8->U_1.V_17.Y16.Y10);
ZqnGVQ_5(Zq0A4_172, Z179->U_1.V_49.Y48.Y8->U_1.V_17.Y16.Y4);
Z179 = Z179->U_1.V_49.Y48.Y12;
}
if (ZpmCQ_25(ORD('9'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)" char yyLow;", 12L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" if (& yyLow < yyMinLow) yyMinLow = & yyLow;", 44L);
ZfM_33(Zq0A4_172);
}
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"yyRecursion:", 12L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" switch (yyt->Kind) {", 21L);
ZfM_33(Zq0A4_172);
if (IN(Zq0A4_56, Zq0A4_69)) {
Zq0A4_184(W_4->Y13, (Zq0A4_170)ZbpA7dpZ_10);
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
if (Z178 >= B_6) break;
}
}
ZbpA7dpZ_8(Z194);
return;
}
}
}

static void Z211
# ifdef HAVE_ARGS
(Zq0A4_153 Z194)
# else
(Z194)
Zq0A4_153 Z194;
# endif
{
struct S_5 Z192;

if (Z194 == Zq0A4_97) {
return;
}
if (Z194 != NIL && Z194->U_1.V_1.Y0 == Zq0A4_100) {
for (;;) {
{
register Zq0A4_226 *W_5 = &Z194->U_1.V_5.Y4;

if (!((Zq0A4_177 & W_5->Y2) == 0X0L)) {
goto EXIT_1;
}
if (IN(Zq0A4_42, W_5->Y2)) {
ZfM_29(Zq0A4_172, (STRING)"\"", 1L);
Zq0A4_192(W_5->Y1);
ZfM_29(Zq0A4_172, (STRING)"\",", 2L);
ZfM_33(Zq0A4_172);
} else {
ZfM_29(Zq0A4_172, (STRING)"0,", 2L);
ZfM_33(Zq0A4_172);
}
return;
}
} EXIT_1:;
}
}

void ZbpA7dpZ_10
# ifdef HAVE_ARGS
(Zq0A4_153 Z194)
# else
(Z194)
Zq0A4_153 Z194;
# endif
{
struct S_2 Z192;

if (Z194 == Zq0A4_97) {
return;
}
if (Z194 != NIL) {
switch (Z194->U_1.V_1.Y0) {
case Zq0A4_100:;
{
register struct S_4 *W_6 = &Z192.U_1.V_1.Y0;

for (;;) {
{
register Zq0A4_226 *W_7 = &Z194->U_1.V_5.Y4;

if (!((Zq0A4_177 & W_7->Y2) == 0X0L)) {
goto EXIT_2;
}
if (!(W_7->Y24 < W_7->Y14 && W_7->Y22 >= Z178)) {
goto EXIT_2;
}
if (!!Z232(Z194, W_7->Y24)) {
goto EXIT_2;
}
W_6->Y0 = FALSE;
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"case k", 6L);
Zq0A4_192(W_7->Y1);
ZfM_29(Zq0A4_172, (STRING)":", 1L);
ZfM_33(Zq0A4_172);
ZbpA7dpZ_0 = Z194;
for (;;) {
if (W_7->Y24 == W_7->Y14) {
goto EXIT_3;
}
INC(W_7->Y24);
{
register Zq0A4_199 *W_8 = &W_7->Y15->A[W_7->Y15->A[W_7->Y24 - 1].Y4 - 1];

if (IN(Zq0A4_20, W_8->Y3) && W_8->Y1->U_1.V_10.Y9.Y11 > Z178) {
DEC(W_7->Y24);
goto EXIT_3;
}
if (SET_IS_SUBSET1(SET_ELEM (Zq0A4_6) | SET_ELEM (Zq0A4_21) | SET_ELEM (Zq0A4_26), W_8->Y3) && !IN(Zq0A4_1, W_8->Y3)) {
if (ZpmCQ_25(ORD('X'), &Zq0A4_171) && IN(Zq0A4_42, Z194->U_1.V_5.Y4.Y2)) {
ZfM_29(Zq0A4_172, (STRING)"yyWriteEval (yyt, \"", 19L);
Zq0A4_192(W_8->Y0->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)":", 1L);
Zq0A4_192(W_8->Y1->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)"\");", 3L);
ZfM_33(Zq0A4_172);
if (W_8->Y2 != (Zq0A4_153)ADR (W_8->Y2)) {
ZbpA7dpZ_10(W_8->Y2);
}
ZfM_33(Zq0A4_172);
if (W_8->Y1->U_1.V_1.Y0 == Zq0A4_105 || W_8->Y1->U_1.V_11.Y10.Y4 == Zq0A4_86) {
ZfM_29(Zq0A4_172, (STRING)"write", 5L);
Zq0A4_192(Zq0A4_86);
} else {
ZfM_29(Zq0A4_172, (STRING)"write", 5L);
Zq0A4_192(W_8->Y1->U_1.V_10.Y9.Y4);
}
ZfM_29(Zq0A4_172, (STRING)" ((", 3L);
ZbpA7dpZ_5(W_7->Y1);
ZfM_29(Zq0A4_172, (STRING)"yyt)->", 6L);
Zq0A4_192(W_8->Y0->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)"->", 2L);
Zq0A4_192(W_8->Y1->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)") xxWriteNl ();", 15L);
ZfM_33(Zq0A4_172);
} else if (ZpmCQ_25(ORD('Y'), &Zq0A4_171) && IN(Zq0A4_42, Z194->U_1.V_5.Y4.Y2)) {
ZfM_29(Zq0A4_172, (STRING)"yyWriteEval (yyt, \"", 19L);
Zq0A4_192(W_8->Y0->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)":", 1L);
Zq0A4_192(W_8->Y1->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)"\");", 3L);
ZfM_33(Zq0A4_172);
if (W_8->Y2 != (Zq0A4_153)ADR (W_8->Y2)) {
ZbpA7dpZ_10(W_8->Y2);
}
} else {
if (W_8->Y2 != (Zq0A4_153)ADR (W_8->Y2)) {
ZbpA7dpZ_10(W_8->Y2);
}
}
}
if (SET_IS_SUBSET1(SET_ELEM (Zq0A4_7) | SET_ELEM (Zq0A4_20) | SET_ELEM (Zq0A4_26), W_8->Y3) && ((SET_ELEM (Zq0A4_27) | SET_ELEM (Zq0A4_1)) & W_8->Y3) == 0X0L) {
if (ZpmCQ_25(ORD('X'), &Zq0A4_171) && IN(Zq0A4_42, Z194->U_1.V_5.Y4.Y2)) {
ZfM_29(Zq0A4_172, (STRING)"yyWriteEval (yyt, \"", 19L);
Zq0A4_192(W_8->Y1->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)"\");", 3L);
ZfM_33(Zq0A4_172);
if (W_8->Y2 != (Zq0A4_153)ADR (W_8->Y2)) {
ZbpA7dpZ_10(W_8->Y2);
}
ZfM_33(Zq0A4_172);
if (IN(Zq0A4_19, W_8->Y3)) {
ZfM_29(Zq0A4_172, (STRING)"writebool (yyb) xxWriteNl ();", 29L);
ZfM_33(Zq0A4_172);
} else if (W_8->Y1->U_1.V_1.Y0 == Zq0A4_105 || W_8->Y1->U_1.V_11.Y10.Y4 == Zq0A4_86) {
ZfM_29(Zq0A4_172, (STRING)"write", 5L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)" ((", 3L);
ZbpA7dpZ_5(W_7->Y1);
ZfM_29(Zq0A4_172, (STRING)"yyt)->", 6L);
Zq0A4_192(W_8->Y1->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)") xxWriteNl ();", 15L);
ZfM_33(Zq0A4_172);
} else {
ZfM_29(Zq0A4_172, (STRING)"write", 5L);
Zq0A4_192(W_8->Y1->U_1.V_10.Y9.Y4);
ZfM_29(Zq0A4_172, (STRING)" ((", 3L);
ZbpA7dpZ_5(W_7->Y1);
ZfM_29(Zq0A4_172, (STRING)"yyt)->", 6L);
Zq0A4_192(W_8->Y1->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)") xxWriteNl ();", 15L);
ZfM_33(Zq0A4_172);
}
} else if (ZpmCQ_25(ORD('Y'), &Zq0A4_171) && IN(Zq0A4_42, Z194->U_1.V_5.Y4.Y2)) {
ZfM_29(Zq0A4_172, (STRING)"yyWriteEval (yyt, \"", 19L);
Zq0A4_192(W_8->Y1->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)"\");", 3L);
ZfM_33(Zq0A4_172);
if (W_8->Y2 != (Zq0A4_153)ADR (W_8->Y2)) {
ZbpA7dpZ_10(W_8->Y2);
}
} else {
if (W_8->Y2 != (Zq0A4_153)ADR (W_8->Y2)) {
ZbpA7dpZ_10(W_8->Y2);
}
}
}
if (SET_IS_SUBSET1(SET_ELEM (Zq0A4_7) | SET_ELEM (Zq0A4_21) | SET_ELEM (Zq0A4_26), W_8->Y3) && W_8->Y1->U_1.V_10.Y9.Y11 <= W_8->Y0->U_1.V_10.Y9.Y8->U_1.V_5.Y4.Y22) {
if (ZpmCQ_25(ORD('Z'), &Zq0A4_171) && IN(Zq0A4_42, Z194->U_1.V_5.Y4.Y2)) {
ZfM_29(Zq0A4_172, (STRING)"yyWriteVisit (yyt, \"", 20L);
Zq0A4_192(W_8->Y0->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)" ", 1L);
Zq0A4_195((LONGINT)W_8->Y1->U_1.V_10.Y9.Y11);
ZfM_29(Zq0A4_172, (STRING)"\");", 3L);
ZfM_33(Zq0A4_172);
}
if (W_8->Y1->U_1.V_10.Y9.Y11 == Z178 && Z232(ZbpA7dpZ_0, W_7->Y24)) {
ZfM_29(Zq0A4_172, (STRING)"yyt = (", 7L);
ZbpA7dpZ_5(W_7->Y1);
ZfM_29(Zq0A4_172, (STRING)"yyt)->", 6L);
Zq0A4_192(W_8->Y0->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)"; goto yyRecursion;", 19L);
ZfM_33(Zq0A4_172);
W_6->Y0 = TRUE;
} else {
ZfM_29(Zq0A4_172, (STRING)"yyVisit", 7L);
Zq0A4_195((LONGINT)W_8->Y1->U_1.V_10.Y9.Y11);
ZfM_29(Zq0A4_172, (STRING)" ((", 3L);
ZbpA7dpZ_5(W_7->Y1);
ZfM_29(Zq0A4_172, (STRING)"yyt)->", 6L);
Zq0A4_192(W_8->Y0->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)");", 2L);
ZfM_33(Zq0A4_172);
}
}
}
} EXIT_3:;
if (!W_6->Y0) {
if (ZpmCQ_25(ORD('Z'), &Zq0A4_171) && IN(Zq0A4_42, Z194->U_1.V_5.Y4.Y2)) {
ZfM_29(Zq0A4_172, (STRING)"yyVisitParent (yyt);", 20L);
ZfM_33(Zq0A4_172);
}
ZfM_29(Zq0A4_172, (STRING)"break;", 6L);
ZfM_33(Zq0A4_172);
}
return;
}
} EXIT_2:;
}
break;
case Zq0A4_137:;
{
register Zq0A4_263 *W_9 = &Z194->U_1.V_42.Y41;

Zq0A4dpZf_3(W_9->Y2);
ZbpA7dpZ_10(W_9->Y4);
ZfM_29(Zq0A4_172, (STRING)"=", 1L);
ZbpA7dpZ_10(W_9->Y5);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
return;
}
break;
case Zq0A4_138:;
{
register Zq0A4_264 *W_10 = &Z194->U_1.V_43.Y42;

Zq0A4dpZf_3(W_10->Y2);
ZbpA7dpZ_10(W_10->Y4);
ZfM_29(Zq0A4_172, (STRING)"=", 1L);
ZbpA7dpZ_10(W_10->Y5);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
return;
}
break;
case Zq0A4_139:;
{
register Zq0A4_265 *W_11 = &Z194->U_1.V_44.Y43;

Zq0A4dpZf_3(W_11->Y2);
ZbpA7dpZ_10(W_11->Y5);
ZfM_33(Zq0A4_172);
return;
}
break;
case Zq0A4_141:;
{
register Zq0A4_267 *W_12 = &Z194->U_1.V_46.Y45;

Zq0A4dpZf_3(W_12->Y2);
if (W_12->Y4 != Zq0A4_97) {
ZfM_29(Zq0A4_172, (STRING)"if (! (", 7L);
if (ZpmCQ_25(ORD('X'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)"yyb = ", 6L);
}
ZbpA7dpZ_10(W_12->Y4);
ZfM_29(Zq0A4_172, (STRING)")) {", 4L);
ZbpA7dpZ_10(W_12->Y5);
ZfM_29(Zq0A4_172, (STRING)"; }", 3L);
ZfM_33(Zq0A4_172);
if (W_12->Y6->U_1.V_1.Y0 == Zq0A4_141) {
ZfM_29(Zq0A4_172, (STRING)"else", 4L);
ZfM_33(Zq0A4_172);
ZbpA7dpZ_10(W_12->Y6);
}
} else {
if (ZpmCQ_25(ORD('X'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)"yyb = false; ", 13L);
}
ZbpA7dpZ_10(W_12->Y5);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
ZbpA7dpZ_10(W_12->Y6);
}
return;
}
break;
case Zq0A4_116:;
{
register Zq0A4_242 *W_13 = &Z194->U_1.V_21.Y20;

Z180 = Zq0A4_183(ZbpA7dpZ_0, W_13->Y2);
if (Z180 != Zq0A4_97) {
Z181 = Z180->U_1.V_10.Y9.Y8;
Z180 = Zq0A4_183(Z181, W_13->Y3);
if (!IN(Zq0A4_1, Z180->U_1.V_11.Y10.Y6)) {
ZfM_29(Zq0A4_172, (STRING)"(", 1L);
ZbpA7dpZ_5(ZbpA7dpZ_0->U_1.V_5.Y4.Y1);
ZfM_29(Zq0A4_172, (STRING)"yyt)->", 6L);
Zq0A4_192(W_13->Y2);
ZfM_29(Zq0A4_172, (STRING)"->", 2L);
Zq0A4_192(W_13->Y3);
}
} else {
Zq0A4_192(W_13->Y2);
ZfM_29(Zq0A4_172, (STRING)":", 1L);
Zq0A4_192(W_13->Y3);
}
ZbpA7dpZ_10(W_13->Y1);
return;
}
break;
case Zq0A4_117:;
{
register Zq0A4_243 *W_14 = &Z194->U_1.V_22.Y21;

Z180 = Zq0A4_183(ZbpA7dpZ_0, W_14->Y2);
if (Z180 != Zq0A4_97) {
if (!IN(Zq0A4_1, Z180->U_1.V_11.Y10.Y6)) {
ZfM_29(Zq0A4_172, (STRING)"(", 1L);
ZbpA7dpZ_5(ZbpA7dpZ_0->U_1.V_5.Y4.Y1);
ZfM_29(Zq0A4_172, (STRING)"yyt)->", 6L);
Zq0A4_192(W_14->Y2);
}
} else {
Zq0A4_192(W_14->Y2);
}
ZbpA7dpZ_10(W_14->Y1);
return;
}
break;
case Zq0A4_118:;
{
register struct S_3 *W_15 = &Z192.U_1.V_2.Y1;

{
register Zq0A4_244 *W_16 = &Z194->U_1.V_23.Y22;

W_15->Y0 = Zq0A4_182(Zq0A4_279->U_1.V_32.Y31.Y13, W_16->Y3);
if (W_15->Y0 != Zq0A4_97) {
Z180 = Zq0A4_183(W_15->Y0, W_16->Y4);
if (Z180 != Zq0A4_97) {
{
register Zq0A4_232 *W_17 = &Z180->U_1.V_11.Y10;

W_15->Y1 = ZbpA7dpZg_5(W_15->Y0, (LONGINT)W_17->Y10);
if (IN(Zq0A4_7, W_17->Y6)) {
ZfM_29(Zq0A4_172, (STRING)"REMOTE_SYN (yyIsComp", 20L);
Zq0A4_195(W_15->Y1 / Zq0A4dpZe_0);
ZfM_29(Zq0A4_172, (STRING)", ", 2L);
Zq0A4_195(W_15->Y1 % Zq0A4dpZe_0);
ZfM_29(Zq0A4_172, (STRING)", yyS", 5L);
Zq0A4_195(W_15->Y1);
ZfM_29(Zq0A4_172, (STRING)", ", 2L);
ZbpA7dpZ_10(W_16->Y2);
ZfM_29(Zq0A4_172, (STRING)", ", 2L);
Zq0A4_192(Z194->U_1.V_23.Y22.Y3);
ZfM_29(Zq0A4_172, (STRING)", ", 2L);
Zq0A4_192(W_16->Y4);
ZfM_29(Zq0A4_172, (STRING)")", 1L);
} else if (IN(Zq0A4_6, W_17->Y6)) {
ZfM_29(Zq0A4_172, (STRING)"REMOTE_INH (yyIsComp", 20L);
Zq0A4_195(W_15->Y1 / Zq0A4dpZe_0);
ZfM_29(Zq0A4_172, (STRING)", ", 2L);
Zq0A4_195(W_15->Y1 % Zq0A4dpZe_0);
ZfM_29(Zq0A4_172, (STRING)", ", 2L);
Zq0A4_195(W_15->Y1);
ZfM_29(Zq0A4_172, (STRING)", ", 2L);
ZbpA7dpZ_10(W_16->Y2);
ZfM_29(Zq0A4_172, (STRING)", ", 2L);
Zq0A4_192(Z194->U_1.V_23.Y22.Y3);
ZfM_29(Zq0A4_172, (STRING)", ", 2L);
Zq0A4_192(W_16->Y4);
ZfM_29(Zq0A4_172, (STRING)")", 1L);
} else {
ZfM_29(Zq0A4_172, (STRING)"(", 1L);
ZbpA7dpZ_5(Z194->U_1.V_23.Y22.Y3);
ZbpA7dpZ_10(W_16->Y2);
ZfM_29(Zq0A4_172, (STRING)")->", 3L);
Zq0A4_192(W_16->Y4);
}
}
}
}
ZbpA7dpZ_10(W_16->Y1);
return;
}
}
break;
case Zq0A4_119:;
{
register Zq0A4_245 *W_18 = &Z194->U_1.V_24.Y23;

Zp1PEAFi_6(Zq0A4_172, W_18->Y2);
ZbpA7dpZ_10(W_18->Y1);
return;
}
break;
case Zq0A4_120:;
{
register Zq0A4_246 *W_19 = &Z194->U_1.V_25.Y24;

ZbpA7dpZ_10(W_19->Y2);
ZbpA7dpZ_10(W_19->Y1);
return;
}
break;
case Zq0A4_123:;
{
register Zq0A4_249 *W_20 = &Z194->U_1.V_28.Y27;

Zp1PEAFi_6(Zq0A4_172, W_20->Y1);
ZbpA7dpZ_10(W_20->Y2);
return;
}
break;
default:
break;
}
}
}

static BOOLEAN Z232
# ifdef HAVE_ARGS
(Zq0A4_153 Z259, SHORTCARD Z260)
# else
(Z259, Z260)
Zq0A4_153 Z259;
SHORTCARD Z260;
# endif
{
struct S_1 Z192;

if (Z259 == Zq0A4_97) {
return FALSE;
}
{
register Zq0A4_226 *W_21 = &Z259->U_1.V_5.Y4;

for (;;) {
if (Z260 == W_21->Y14) {
goto EXIT_4;
}
INC(Z260);
{
register Zq0A4_199 *W_22 = &W_21->Y15->A[W_21->Y15->A[Z260 - 1].Y4 - 1];

if (IN(Zq0A4_20, W_22->Y3) && W_22->Y1->U_1.V_10.Y9.Y11 > Z178) {
goto EXIT_4;
}
if (SET_IS_SUBSET1(SET_ELEM (Zq0A4_6) | SET_ELEM (Zq0A4_21) | SET_ELEM (Zq0A4_26), W_22->Y3) && !IN(Zq0A4_1, W_22->Y3)) {
if (W_22->Y2 != (Zq0A4_153)ADR (W_22->Y2)) {
return FALSE;
}
}
if (SET_IS_SUBSET1(SET_ELEM (Zq0A4_7) | SET_ELEM (Zq0A4_20) | SET_ELEM (Zq0A4_26), W_22->Y3) && ((SET_ELEM (Zq0A4_27) | SET_ELEM (Zq0A4_1)) & W_22->Y3) == 0X0L) {
if (W_22->Y2 != (Zq0A4_153)ADR (W_22->Y2)) {
return FALSE;
}
}
if (SET_IS_SUBSET1(SET_ELEM (Zq0A4_7) | SET_ELEM (Zq0A4_21) | SET_ELEM (Zq0A4_26), W_22->Y3) && W_22->Y1->U_1.V_10.Y9.Y11 <= W_22->Y0->U_1.V_10.Y9.Y8->U_1.V_5.Y4.Y22) {
return FALSE;
}
}
} EXIT_4:;
return TRUE;
}
}

void ZbpA7dpZ_11
 ARGS ((void))
{
}

void ZbpA7dpZ_12
 ARGS ((void))
{
}

static void Z263
 ARGS ((void))
{
ZfM_34();
rExit(1L);
}

void BEGIN_EvalCxx ARGS ((void))
{
  static BOOLEAN has_been_called = FALSE;
  if (has_been_called) return;
  has_been_called = TRUE;
BEGIN_IO ();
BEGIN_Tree ();
BEGIN_Idents ();
BEGIN_rSystem ();
BEGIN_IO ();
BEGIN_Tree ();
BEGIN_IO ();
BEGIN_StringM ();
BEGIN_Idents ();
BEGIN_Texts ();
BEGIN_Sets ();
BEGIN_Semantic ();
BEGIN_TreeCxx1 ();
BEGIN_TreeCxx2 ();
BEGIN_EvalCxx3 ();
BEGIN_Tree ();

ZbpA7dpZ_2 = ZfM_1;
ZbpA7dpZ_4 = Z263;
ZbpA7dpZ_11();
}
