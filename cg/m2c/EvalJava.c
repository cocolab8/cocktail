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

#ifndef DEFINITION_Idents
#include "Idents.h"
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

#ifndef DEFINITION_Semantic
#include "Semantic.h"
#endif

#ifndef DEFINITION_TreeJav1
#include "TreeJav1.h"
#endif

#ifndef DEFINITION_TreeJav2
#include "TreeJav2.h"
#endif

#ifndef DEFINITION_Tree
#include "Tree.h"
#endif

#ifndef DEFINITION_EvalJava
#include "EvalJava.h"
#endif

Zq0A4_153 ZbpA7kgAA_0;
ZfM_3 ZbpA7kgAA_1;
BOOLEAN ZbpA7kgAA_2;
PROC ZbpA7kgAA_3;

static SHORTCARD Z182;
static Zq0A4_153 Z183, Z184, Z185;
static BOOLEAN Z186;
static BOOLEAN Z187;
static BOOLEAN Z188;
static INTEGER Z189;
static void Z190 ARGS ((CHAR Z191[], LONGCARD O_1));
static BOOLEAN Z194 ARGS ((BYTE Z195[], LONGCARD O_3, BYTE Z196[], LONGCARD O_2));
struct S_6 {
union {
char dummy;
} U_1;
};
static void Z213 ARGS ((Zq0A4_153 Z199));
struct S_5 {
union {
char dummy;
} U_1;
};
struct S_4 {
union {
char dummy;
} U_1;
};
static void Z216 ARGS ((Zq0A4_153 Z199));
struct S_3 {
union {
char dummy;
} U_1;
};
struct S_1 {
union {
struct {
struct S_2 {
Zq0A4_153 Y0;
INTEGER Y1;
} Y0;
} V_1;
} U_1;
};
static void Z263 ARGS ((void));

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
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)"Error: module EvalJava, routine ", 32L);
ZfM_29((ZDz6VQCC_4)ZfM_2, Z191, O_1);
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)" failed", 7L);
ZfM_33((ZDz6VQCC_4)ZfM_2);
(*ZbpA7kgAA_3)();
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

void ZbpA7kgAA_4
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
if (Z199 != NIL && Z199->U_1.V_1.Y0 == Zq0A4_127) {
{
register Zq0A4_253 *W_1 = &Z199->U_1.V_32.Y31;

if (Zq0A4_83 != Zfb3DLQ_1) {
ZfM_29(Zq0A4_172, (STRING)"package ", 8L);
Zq0A4_192(Zq0A4_83);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
}
Z186 = FALSE;
if (!ZqnGVQ_4(&W_1->Y8->U_1.V_17.Y16.Y2)) {
Zq0A4dgAd_1(W_1->Y8->U_1.V_17.Y16.Y8);
ZqnGVQ_5(Zq0A4_172, W_1->Y8->U_1.V_17.Y16.Y2);
Z186 = TRUE;
}
Z183 = W_1->Y14;
while (Z183->U_1.V_1.Y0 == Zq0A4_144) {
if (!ZqnGVQ_4(&Z183->U_1.V_49.Y48.Y8->U_1.V_17.Y16.Y2)) {
Zq0A4dgAd_1(Z183->U_1.V_49.Y48.Y8->U_1.V_17.Y16.Y8);
ZqnGVQ_5(Zq0A4_172, Z183->U_1.V_49.Y48.Y8->U_1.V_17.Y16.Y2);
Z186 = TRUE;
}
Z183 = Z183->U_1.V_49.Y48.Y12;
}
if (!Z186) {
if (Zq0A4_82 != Zfb3DLQ_1) {
ZfM_29(Zq0A4_172, (STRING)"import ", 7L);
Zq0A4_192(Zq0A4_82);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(Zq0A4_85);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"import ", 7L);
Zq0A4_192(Zq0A4_82);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(Zq0A4_85);
ZfM_29(Zq0A4_172, (STRING)".*;", 3L);
ZfM_33(Zq0A4_172);
}
if (ZpmCQ_25(ORD('Y'), &Zq0A4_171) || ZpmCQ_25(ORD('Z'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)"import de.cocolab.reuse.CocktailWriter;", 39L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"import de.cocolab.reuse.MaskedException;", 40L);
ZfM_33(Zq0A4_172);
}
}
Zq0A4dgAd_1(W_1->Y8->U_1.V_17.Y16.Y9);
ZqnGVQ_5(Zq0A4_172, W_1->Y8->U_1.V_17.Y16.Y3);
Z183 = W_1->Y14;
while (Z183->U_1.V_1.Y0 == Zq0A4_144) {
Zq0A4dgAd_1(Z183->U_1.V_49.Y48.Y8->U_1.V_17.Y16.Y9);
ZqnGVQ_5(Zq0A4_172, Z183->U_1.V_49.Y48.Y8->U_1.V_17.Y16.Y3);
Z183 = Z183->U_1.V_49.Y48.Y12;
}
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# define DEP(a, b) a", 20L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
if (ZpmCQ_25(ORD('X'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)"#include \"yy", 12L);
Zq0A4_192(Zq0A4_85);
ZfM_29(Zq0A4_172, (STRING)".h\"", 3L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# define yyWrite", 16L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"(a) yyout.write (a)", 19L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
}
ZfM_29(Zq0A4_172, (STRING)"public class ", 13L);
Zq0A4_192(Zq0A4_84);
ZfM_29(Zq0A4_172, (STRING)" {", 2L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
Z189 = 0;
Zq0A4_184(W_1->Y13, (Zq0A4_170)Z213);
ZfM_33(Zq0A4_172);
Zq0A4dgAd_1(W_1->Y8->U_1.V_17.Y16.Y7);
ZqnGVQ_5(Zq0A4_172, W_1->Y8->U_1.V_17.Y16.Y1);
Z183 = W_1->Y14;
while (Z183->U_1.V_1.Y0 == Zq0A4_144) {
Zq0A4dgAd_1(Z183->U_1.V_49.Y48.Y8->U_1.V_17.Y16.Y7);
ZqnGVQ_5(Zq0A4_172, Z183->U_1.V_49.Y48.Y8->U_1.V_17.Y16.Y1);
Z183 = Z183->U_1.V_49.Y48.Y12;
}
if (ZpmCQ_25(ORD('Y'), &Zq0A4_171) || ZpmCQ_25(ORD('Z'), &Zq0A4_171)) {
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   private static CocktailWriter yyout = new CocktailWriter (System.out, true);", 79L);
ZfM_33(Zq0A4_172);
}
if (ZpmCQ_25(ORD('X'), &Zq0A4_171)) {
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   private static boolean yyb;", 30L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   private static void yyWriteNl () throws java.io.IOException {", 64L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      if (yyTrace) {", 20L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"         yyout.writeNl ();", 26L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      }", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   }", 4L);
ZfM_33(Zq0A4_172);
}
if (ZpmCQ_25(ORD('Y'), &Zq0A4_171) || ZpmCQ_25(ORD('Z'), &Zq0A4_171)) {
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   private static boolean yyTrace = true;", 41L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   private static void yyWriteSpaces (int yyn) throws java.io.IOException {", 75L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      for (int yyi = 1; yyi <= yyn; yyi ++) yyout.write (' ');", 62L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   }", 4L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   private static void yyWriteS (String yys) throws java.io.IOException {", 73L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      yyout.write (yys); yyWriteSpaces (16 - yys.length ());", 60L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   }", 4L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   private static void yyWriteType (", 36L);
Zq0A4_192(Zq0A4_81);
ZfM_29(Zq0A4_172, (STRING)" yyt) throws java.io.IOException {", 34L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# ifdef NODEOP", 14L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      NODEOP", 12L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# endif", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      switch (yyt.yyKind ()) {", 30L);
ZfM_33(Zq0A4_172);
Zq0A4_184(W_1->Y13, (Zq0A4_170)Z216);
ZfM_29(Zq0A4_172, (STRING)"         default: break;", 24L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      }", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   }", 4L);
ZfM_33(Zq0A4_172);
}
if (ZpmCQ_25(ORD('X'), &Zq0A4_171)) {
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   private static void yyWriteAddr (", 36L);
Zq0A4_192(Zq0A4_81);
ZfM_29(Zq0A4_172, (STRING)" yyt) throws java.io.IOException {", 34L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      if (yyt == null) yyout.write (\"", 37L);
Zq0A4_192(Zq0A4_88);
ZfM_29(Zq0A4_172, (STRING)"\");", 3L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      else yyout.write (Integer.toHexString (yyt.hashCode ()));", 63L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   }", 4L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   private static void yyWriteEval (", 36L);
Zq0A4_192(Zq0A4_81);
ZfM_29(Zq0A4_172, (STRING)" yyt, String yys) throws java.io.IOException {", 46L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      if (yyTrace) {", 20L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"         yyWriteType (yyt);", 27L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"         yyout.write (\" e \"); yyout.write (yys);", 48L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"         yyWriteSpaces (24 - yys.length ());", 44L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"         yyout.write (\" = \"); yyout.flush ();", 45L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      }", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   }", 4L);
ZfM_33(Zq0A4_172);
} else if (ZpmCQ_25(ORD('Y'), &Zq0A4_171)) {
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   private static void yyWriteEval (", 36L);
Zq0A4_192(Zq0A4_81);
ZfM_29(Zq0A4_172, (STRING)" yyt, String yys) throws java.io.IOException {", 46L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      if (yyTrace) {", 20L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"         yyWriteType (yyt);", 27L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"         yyout.write (\" e \"); yyout.write (yys); yyout.writeNl ();", 66L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      }", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   }", 4L);
ZfM_33(Zq0A4_172);
}
if (ZpmCQ_25(ORD('Z'), &Zq0A4_171)) {
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   private static void yyWriteVisit (", 37L);
Zq0A4_192(Zq0A4_81);
ZfM_29(Zq0A4_172, (STRING)" yyt, String yys) throws java.io.IOException {", 46L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      if (yyTrace) {", 20L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"         yyWriteType (yyt);", 27L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"         yyout.write (\" v \"); yyout.write (yys); yyout.writeNl ();", 66L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      }", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   }", 4L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   private static void yyVisitParent (", 38L);
Zq0A4_192(Zq0A4_81);
ZfM_29(Zq0A4_172, (STRING)" yyt) throws java.io.IOException {", 34L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      yyWriteVisit (yyt, \"parent\");", 35L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   }", 4L);
ZfM_33(Zq0A4_172);
}
ZfM_33(Zq0A4_172);
return;
}
}
}

static void Z213
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
if (Z199 != NIL && Z199->U_1.V_1.Y0 == Zq0A4_100) {
for (;;) {
{
register Zq0A4_226 *W_2 = &Z199->U_1.V_5.Y4;

if (!!IN(Zq0A4_48, W_2->Y2)) {
goto EXIT_1;
}
INC(Z189);
if (!!IN(Zq0A4_17, W_2->Y2)) {
goto EXIT_1;
}
ZfM_29(Zq0A4_172, (STRING)"   private static final int k", 29L);
Zq0A4_192(W_2->Y1);
ZfM_29(Zq0A4_172, (STRING)" = ", 3L);
Zq0A4_195(Z189);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
return;
}
} EXIT_1:;
}
}

void ZbpA7kgAA_5
# ifdef HAVE_ARGS
(Zq0A4_153 Z199)
# else
(Z199)
Zq0A4_153 Z199;
# endif
{
struct S_4 Z200;

if (Z199 == Zq0A4_97) {
return;
}
if (Z199 != NIL && Z199->U_1.V_1.Y0 == Zq0A4_127) {
{
register Zq0A4_253 *W_3 = &Z199->U_1.V_32.Y31;

ZbpA7kgAA_4(Z199);
ZfM_29(Zq0A4_172, (STRING)"   public static void eval (", 28L);
Zq0A4_192(Zq0A4_81);
ZfM_29(Zq0A4_172, (STRING)" yyt) {", 7L);
ZfM_33(Zq0A4_172);
if (Zq0A4_70 > 0) {
if (ZpmCQ_25(ORD('Y'), &Zq0A4_171) || ZpmCQ_25(ORD('Z'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)"      try {", 11L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"         yyVisit1 (yyt);", 24L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      } catch (java.io.IOException e) {", 39L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"         throw new MaskedException (e);", 39L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      }", 7L);
ZfM_33(Zq0A4_172);
} else {
ZfM_29(Zq0A4_172, (STRING)"      yyVisit1 (yyt);", 21L);
ZfM_33(Zq0A4_172);
}
}
ZfM_29(Zq0A4_172, (STRING)"   }", 4L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
{
SHORTCARD B_3 = 1, B_4 = Zq0A4_70;

if (B_3 <= B_4)
for (Z182 = B_3;; Z182 += 1) {
ZfM_29(Zq0A4_172, (STRING)"   private static void yyVisit", 30L);
Zq0A4_195((LONGINT)Z182);
ZfM_29(Zq0A4_172, (STRING)" (", 2L);
Zq0A4_192(Zq0A4_81);
ZfM_29(Zq0A4_172, (STRING)" yyt)", 5L);
if (ZpmCQ_25(ORD('Y'), &Zq0A4_171) || ZpmCQ_25(ORD('Z'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)" throws java.io.IOException", 27L);
}
ZfM_29(Zq0A4_172, (STRING)" {", 2L);
ZfM_33(Zq0A4_172);
Zq0A4dgAd_1(W_3->Y8->U_1.V_17.Y16.Y10);
ZqnGVQ_5(Zq0A4_172, W_3->Y8->U_1.V_17.Y16.Y4);
Z183 = W_3->Y14;
while (Z183->U_1.V_1.Y0 == Zq0A4_144) {
Zq0A4dgAd_1(Z183->U_1.V_49.Y48.Y8->U_1.V_17.Y16.Y10);
ZqnGVQ_5(Zq0A4_172, Z183->U_1.V_49.Y48.Y8->U_1.V_17.Y16.Y4);
Z183 = Z183->U_1.V_49.Y48.Y12;
}
ZfM_29(Zq0A4_172, (STRING)"      switch (yyt.yyKind ()) {", 30L);
ZfM_33(Zq0A4_172);
if (IN(Zq0A4_56, Zq0A4_69)) {
Zq0A4_184(W_3->Y13, (Zq0A4_170)ZbpA7kgAA_6);
}
ZfM_29(Zq0A4_172, (STRING)"         default:", 17L);
ZfM_33(Zq0A4_172);
if (ZpmCQ_25(ORD('Z'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)"            yyVisitParent (yyt);", 32L);
ZfM_33(Zq0A4_172);
}
ZfM_29(Zq0A4_172, (STRING)"            break;", 18L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      }", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   }", 4L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
if (Z182 >= B_4) break;
}
}
Z187 = FALSE;
if (!ZqnGVQ_4(&W_3->Y8->U_1.V_17.Y16.Y5)) {
Z187 = TRUE;
}
Z183 = W_3->Y14;
while (Z183->U_1.V_1.Y0 == Zq0A4_144) {
if (!ZqnGVQ_4(&Z183->U_1.V_49.Y48.Y8->U_1.V_17.Y16.Y5)) {
Z187 = TRUE;
}
Z183 = Z183->U_1.V_49.Y48.Y12;
}
if (Z187) {
ZfM_29(Zq0A4_172, (STRING)"   public static void begin () {", 32L);
ZfM_33(Zq0A4_172);
Zq0A4dgAd_1(W_3->Y8->U_1.V_17.Y16.Y11);
ZqnGVQ_5(Zq0A4_172, W_3->Y8->U_1.V_17.Y16.Y5);
Z183 = W_3->Y14;
while (Z183->U_1.V_1.Y0 == Zq0A4_144) {
Zq0A4dgAd_1(Z183->U_1.V_49.Y48.Y8->U_1.V_17.Y16.Y11);
ZqnGVQ_5(Zq0A4_172, Z183->U_1.V_49.Y48.Y8->U_1.V_17.Y16.Y5);
Z183 = Z183->U_1.V_49.Y48.Y12;
}
ZfM_29(Zq0A4_172, (STRING)"   }", 4L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
}
Z188 = FALSE;
if (!ZqnGVQ_4(&W_3->Y8->U_1.V_17.Y16.Y6)) {
Z188 = TRUE;
}
Z183 = W_3->Y14;
while (Z183->U_1.V_1.Y0 == Zq0A4_144) {
if (!ZqnGVQ_4(&Z183->U_1.V_49.Y48.Y8->U_1.V_17.Y16.Y6)) {
Z188 = TRUE;
}
Z183 = Z183->U_1.V_49.Y48.Y12;
}
if (Z188) {
ZfM_29(Zq0A4_172, (STRING)"   public static void close () {", 32L);
ZfM_33(Zq0A4_172);
Zq0A4dgAd_1(W_3->Y8->U_1.V_17.Y16.Y12);
ZqnGVQ_5(Zq0A4_172, W_3->Y8->U_1.V_17.Y16.Y6);
Z183 = W_3->Y14;
while (Z183->U_1.V_1.Y0 == Zq0A4_144) {
Zq0A4dgAd_1(Z183->U_1.V_49.Y48.Y8->U_1.V_17.Y16.Y12);
ZqnGVQ_5(Zq0A4_172, Z183->U_1.V_49.Y48.Y8->U_1.V_17.Y16.Y6);
Z183 = Z183->U_1.V_49.Y48.Y12;
}
ZfM_29(Zq0A4_172, (STRING)"   }", 4L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
}
if (Z187) {
ZfM_29(Zq0A4_172, (STRING)"   static {", 11L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      begin ();", 15L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   }", 4L);
ZfM_33(Zq0A4_172);
}
ZfM_29(Zq0A4_172, (STRING)"}", 1L);
ZfM_33(Zq0A4_172);
return;
}
}
}

static void Z216
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
if (Z199 != NIL && Z199->U_1.V_1.Y0 == Zq0A4_100) {
for (;;) {
{
register Zq0A4_226 *W_4 = &Z199->U_1.V_5.Y4;

if (!((Zq0A4_177 & W_4->Y2) == 0X0L)) {
goto EXIT_2;
}
if (!IN(Zq0A4_42, W_4->Y2)) {
goto EXIT_2;
}
ZfM_29(Zq0A4_172, (STRING)"         case k", 15L);
Zq0A4_192(W_4->Y1);
ZfM_29(Zq0A4_172, (STRING)":", 1L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"            yyWriteS (\"", 23L);
Zq0A4_192(W_4->Y1);
ZfM_29(Zq0A4_172, (STRING)"\");", 3L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"            break;", 18L);
ZfM_33(Zq0A4_172);
return;
}
} EXIT_2:;
}
}

void ZbpA7kgAA_6
# ifdef HAVE_ARGS
(Zq0A4_153 Z199)
# else
(Z199)
Zq0A4_153 Z199;
# endif
{
struct S_1 Z200;

if (Z199 == Zq0A4_97) {
return;
}
if (Z199 != NIL) {
switch (Z199->U_1.V_1.Y0) {
case Zq0A4_100:;
for (;;) {
{
register Zq0A4_226 *W_5 = &Z199->U_1.V_5.Y4;

if (!((Zq0A4_177 & W_5->Y2) == 0X0L)) {
goto EXIT_3;
}
if (W_5->Y24 == W_5->Y14 || W_5->Y22 < Z182) {
return;
}
ZfM_29(Zq0A4_172, (STRING)"         case k", 15L);
Zq0A4_192(W_5->Y1);
ZfM_29(Zq0A4_172, (STRING)":", 1L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"            ", 12L);
Zq0A4_192(Zq0A4_279->U_1.V_32.Y31.Y5);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(W_5->Y1);
ZfM_29(Zq0A4_172, (STRING)" yyt", 4L);
Zq0A4_192(W_5->Y1);
ZfM_29(Zq0A4_172, (STRING)" = (", 4L);
Zq0A4_192(Zq0A4_279->U_1.V_32.Y31.Y5);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(W_5->Y1);
ZfM_29(Zq0A4_172, (STRING)") yyt;", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# undef SELF", 12L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# define SELF yyt", 17L);
Zq0A4_192(W_5->Y1);
ZfM_33(Zq0A4_172);
ZbpA7kgAA_0 = Z199;
for (;;) {
if (W_5->Y24 == W_5->Y14) {
goto EXIT_4;
}
INC(W_5->Y24);
{
register Zq0A4_199 *W_6 = &W_5->Y15->A[W_5->Y15->A[W_5->Y24 - 1].Y4 - 1];

if (IN(Zq0A4_20, W_6->Y3) && W_6->Y1->U_1.V_10.Y9.Y11 > Z182) {
DEC(W_5->Y24);
goto EXIT_4;
}
if (SET_IS_SUBSET1(SET_ELEM (Zq0A4_6) | SET_ELEM (Zq0A4_21) | SET_ELEM (Zq0A4_26), W_6->Y3) && !IN(Zq0A4_1, W_6->Y3)) {
if (ZpmCQ_25(ORD('X'), &Zq0A4_171) && IN(Zq0A4_42, Z199->U_1.V_5.Y4.Y2)) {
ZfM_29(Zq0A4_172, (STRING)"            yyWriteEval (yyt, \"", 31L);
Zq0A4_192(W_6->Y0->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)":", 1L);
Zq0A4_192(W_6->Y1->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)"\");", 3L);
ZfM_33(Zq0A4_172);
if (W_6->Y2 != (Zq0A4_153)ADR (W_6->Y2)) {
ZbpA7kgAA_6(W_6->Y2);
}
ZfM_33(Zq0A4_172);
if (W_6->Y1->U_1.V_1.Y0 == Zq0A4_105 || W_6->Y1->U_1.V_11.Y10.Y4 == Zq0A4_86) {
ZfM_29(Zq0A4_172, (STRING)"            yyWriteAddr", 23L);
} else {
ZfM_29(Zq0A4_172, (STRING)"            write", 17L);
Zq0A4_192(W_6->Y1->U_1.V_10.Y9.Y5);
}
ZfM_29(Zq0A4_172, (STRING)" (yyt", 5L);
Zq0A4_192(W_5->Y1);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(W_6->Y0->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(W_6->Y1->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)"); yyWriteNl ();", 16L);
ZfM_33(Zq0A4_172);
} else if (ZpmCQ_25(ORD('Y'), &Zq0A4_171) && IN(Zq0A4_42, Z199->U_1.V_5.Y4.Y2)) {
ZfM_29(Zq0A4_172, (STRING)"   yyWriteEval (yyt, \"", 22L);
Zq0A4_192(W_6->Y0->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)":", 1L);
Zq0A4_192(W_6->Y1->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)"\");", 3L);
ZfM_33(Zq0A4_172);
if (W_6->Y2 != (Zq0A4_153)ADR (W_6->Y2)) {
ZbpA7kgAA_6(W_6->Y2);
}
} else {
if (W_6->Y2 != (Zq0A4_153)ADR (W_6->Y2)) {
ZbpA7kgAA_6(W_6->Y2);
}
}
}
if (SET_IS_SUBSET1(SET_ELEM (Zq0A4_7) | SET_ELEM (Zq0A4_20) | SET_ELEM (Zq0A4_26), W_6->Y3) && ((SET_ELEM (Zq0A4_27) | SET_ELEM (Zq0A4_1)) & W_6->Y3) == 0X0L) {
if (ZpmCQ_25(ORD('X'), &Zq0A4_171) && IN(Zq0A4_42, Z199->U_1.V_5.Y4.Y2)) {
ZfM_29(Zq0A4_172, (STRING)"   yyWriteEval (yyt, \"", 22L);
Zq0A4_192(W_6->Y1->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)"\");", 3L);
ZfM_33(Zq0A4_172);
if (W_6->Y2 != (Zq0A4_153)ADR (W_6->Y2)) {
ZbpA7kgAA_6(W_6->Y2);
}
ZfM_33(Zq0A4_172);
if (IN(Zq0A4_19, W_6->Y3)) {
ZfM_29(Zq0A4_172, (STRING)"   writeboolean (yyb); yyWriteNl ();", 36L);
ZfM_33(Zq0A4_172);
} else if (W_6->Y1->U_1.V_1.Y0 == Zq0A4_105 || ZpmCQ_25((LONGCARD)W_6->Y1->U_1.V_11.Y10.Y5, &Zq0A4_93)) {
ZfM_29(Zq0A4_172, (STRING)"   yyWriteAddr", 14L);
ZfM_29(Zq0A4_172, (STRING)" (yyt", 5L);
Zq0A4_192(W_5->Y1);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(W_6->Y1->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)"); yyWriteNl ();", 16L);
ZfM_33(Zq0A4_172);
} else {
ZfM_29(Zq0A4_172, (STRING)"   write", 8L);
Zq0A4_192(W_6->Y1->U_1.V_10.Y9.Y5);
ZfM_29(Zq0A4_172, (STRING)"(yyt", 4L);
Zq0A4_192(W_5->Y1);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(W_6->Y1->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)"); yyWriteNl ();", 16L);
ZfM_33(Zq0A4_172);
}
} else if (ZpmCQ_25(ORD('Y'), &Zq0A4_171) && IN(Zq0A4_42, Z199->U_1.V_5.Y4.Y2)) {
ZfM_29(Zq0A4_172, (STRING)"   yyWriteEval (yyt, \"", 22L);
Zq0A4_192(W_6->Y1->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)"\");", 3L);
ZfM_33(Zq0A4_172);
if (W_6->Y2 != (Zq0A4_153)ADR (W_6->Y2)) {
ZbpA7kgAA_6(W_6->Y2);
}
} else {
if (W_6->Y2 != (Zq0A4_153)ADR (W_6->Y2)) {
ZbpA7kgAA_6(W_6->Y2);
}
}
}
if (SET_IS_SUBSET1(SET_ELEM (Zq0A4_7) | SET_ELEM (Zq0A4_21) | SET_ELEM (Zq0A4_26), W_6->Y3) && W_6->Y1->U_1.V_10.Y9.Y11 <= W_6->Y0->U_1.V_10.Y9.Y8->U_1.V_5.Y4.Y22) {
if (ZpmCQ_25(ORD('Z'), &Zq0A4_171) && IN(Zq0A4_42, Z199->U_1.V_5.Y4.Y2)) {
ZfM_29(Zq0A4_172, (STRING)"            yyWriteVisit (yyt, \"", 32L);
Zq0A4_192(W_6->Y0->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)" ", 1L);
Zq0A4_195((LONGINT)W_6->Y1->U_1.V_10.Y9.Y11);
ZfM_29(Zq0A4_172, (STRING)"\");", 3L);
ZfM_33(Zq0A4_172);
}
ZfM_29(Zq0A4_172, (STRING)"            yyVisit", 19L);
Zq0A4_195((LONGINT)W_6->Y1->U_1.V_10.Y9.Y11);
ZfM_29(Zq0A4_172, (STRING)" (yyt", 5L);
Zq0A4_192(W_5->Y1);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(W_6->Y0->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)");", 2L);
ZfM_33(Zq0A4_172);
}
}
} EXIT_4:;
if (ZpmCQ_25(ORD('Z'), &Zq0A4_171) && IN(Zq0A4_42, Z199->U_1.V_5.Y4.Y2)) {
ZfM_29(Zq0A4_172, (STRING)"            yyVisitParent (yyt);", 32L);
ZfM_33(Zq0A4_172);
}
ZfM_29(Zq0A4_172, (STRING)"            break;", 18L);
ZfM_33(Zq0A4_172);
return;
}
} EXIT_3:;
break;
case Zq0A4_137:;
{
register Zq0A4_263 *W_7 = &Z199->U_1.V_42.Y41;

Zq0A4dgAd_1(W_7->Y2);
ZfM_29(Zq0A4_172, (STRING)"         ", 9L);
ZbpA7kgAA_6(W_7->Y4);
ZfM_29(Zq0A4_172, (STRING)" = ", 3L);
ZbpA7kgAA_6(W_7->Y5);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
return;
}
break;
case Zq0A4_138:;
{
register Zq0A4_264 *W_8 = &Z199->U_1.V_43.Y42;

Zq0A4dgAd_1(W_8->Y2);
ZfM_29(Zq0A4_172, (STRING)"         ", 9L);
ZbpA7kgAA_6(W_8->Y4);
ZfM_29(Zq0A4_172, (STRING)" = ", 3L);
ZbpA7kgAA_6(W_8->Y5);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
return;
}
break;
case Zq0A4_139:;
{
register Zq0A4_265 *W_9 = &Z199->U_1.V_44.Y43;

Zq0A4dgAd_1(W_9->Y2);
ZfM_29(Zq0A4_172, (STRING)"         ", 9L);
ZbpA7kgAA_6(W_9->Y5);
ZfM_33(Zq0A4_172);
return;
}
break;
case Zq0A4_141:;
{
register Zq0A4_267 *W_10 = &Z199->U_1.V_46.Y45;

Zq0A4dgAd_1(W_10->Y2);
if (W_10->Y4 != Zq0A4_97) {
if (ZpmCQ_25(ORD('X'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)"         yyb = ", 15L);
ZbpA7kgAA_6(W_10->Y4);
ZfM_29(Zq0A4_172, (STRING)"; if (!yyb) { ", 14L);
ZfM_33(Zq0A4_172);
} else {
ZfM_29(Zq0A4_172, (STRING)"         if (!(", 15L);
ZbpA7kgAA_6(W_10->Y4);
ZfM_29(Zq0A4_172, (STRING)")) {", 4L);
}
ZbpA7kgAA_6(W_10->Y5);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
if (W_10->Y6->U_1.V_1.Y0 == Zq0A4_141) {
ZfM_29(Zq0A4_172, (STRING)"         } else {", 17L);
ZfM_33(Zq0A4_172);
ZbpA7kgAA_6(W_10->Y6);
ZfM_33(Zq0A4_172);
}
ZfM_29(Zq0A4_172, (STRING)"         }", 10L);
ZfM_33(Zq0A4_172);
} else {
if (ZpmCQ_25(ORD('X'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)"         yyb = false; ", 22L);
}
ZbpA7kgAA_6(W_10->Y5);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
ZbpA7kgAA_6(W_10->Y6);
ZfM_33(Zq0A4_172);
}
return;
}
break;
case Zq0A4_116:;
{
register Zq0A4_242 *W_11 = &Z199->U_1.V_21.Y20;

Z184 = Zq0A4_183(ZbpA7kgAA_0, W_11->Y2);
if (Z184 != Zq0A4_97) {
Z185 = Z184->U_1.V_10.Y9.Y8;
Z184 = Zq0A4_183(Z185, W_11->Y3);
if (!IN(Zq0A4_1, Z184->U_1.V_11.Y10.Y6)) {
ZfM_29(Zq0A4_172, (STRING)"   yyt", 6L);
Zq0A4_192(ZbpA7kgAA_0->U_1.V_5.Y4.Y1);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(W_11->Y2);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(W_11->Y3);
}
} else {
Zq0A4_192(W_11->Y2);
ZfM_29(Zq0A4_172, (STRING)":", 1L);
Zq0A4_192(W_11->Y3);
}
ZbpA7kgAA_6(W_11->Y1);
return;
}
break;
case Zq0A4_117:;
{
register Zq0A4_243 *W_12 = &Z199->U_1.V_22.Y21;

Z184 = Zq0A4_183(ZbpA7kgAA_0, W_12->Y2);
if (Z184 != Zq0A4_97) {
if (!IN(Zq0A4_1, Z184->U_1.V_11.Y10.Y6)) {
ZfM_29(Zq0A4_172, (STRING)"yyt", 3L);
Zq0A4_192(ZbpA7kgAA_0->U_1.V_5.Y4.Y1);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(W_12->Y2);
}
} else {
Zq0A4_192(W_12->Y2);
}
ZbpA7kgAA_6(W_12->Y1);
return;
}
break;
case Zq0A4_118:;
{
register struct S_2 *W_13 = &Z200.U_1.V_1.Y0;

{
register Zq0A4_244 *W_14 = &Z199->U_1.V_23.Y22;

W_13->Y0 = Zq0A4_182(Zq0A4_279->U_1.V_32.Y31.Y13, W_14->Y3);
if (W_13->Y0 != Zq0A4_97) {
Z184 = Zq0A4_183(W_13->Y0, W_14->Y4);
if (Z184 != Zq0A4_97) {
{
register Zq0A4_232 *W_15 = &Z184->U_1.V_11.Y10;

ZbpA7kgAA_6(W_14->Y2);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(W_14->Y4);
}
}
}
ZbpA7kgAA_6(W_14->Y1);
return;
}
}
break;
case Zq0A4_119:;
{
register Zq0A4_245 *W_16 = &Z199->U_1.V_24.Y23;

Zp1PEAFi_6(Zq0A4_172, W_16->Y2);
ZbpA7kgAA_6(W_16->Y1);
return;
}
break;
case Zq0A4_120:;
{
register Zq0A4_246 *W_17 = &Z199->U_1.V_25.Y24;

ZbpA7kgAA_6(W_17->Y2);
ZbpA7kgAA_6(W_17->Y1);
return;
}
break;
case Zq0A4_123:;
{
register Zq0A4_249 *W_18 = &Z199->U_1.V_28.Y27;

Zp1PEAFi_6(Zq0A4_172, W_18->Y1);
ZbpA7kgAA_6(W_18->Y2);
return;
}
break;
default:
break;
}
}
}

void ZbpA7kgAA_7
 ARGS ((void))
{
}

void ZbpA7kgAA_8
 ARGS ((void))
{
}

static void Z263
 ARGS ((void))
{
ZfM_34();
rExit(1L);
}

void BEGIN_EvalJava ARGS ((void))
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
BEGIN_Idents ();
BEGIN_StringM ();
BEGIN_Texts ();
BEGIN_Sets ();
BEGIN_Semantic ();
BEGIN_TreeJav1 ();
BEGIN_TreeJav2 ();
BEGIN_Tree ();

ZbpA7kgAA_1 = ZfM_1;
ZbpA7kgAA_3 = Z263;
ZbpA7kgAA_7();
}
