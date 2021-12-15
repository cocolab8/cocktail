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

#ifndef DEFINITION_TreeJav2
#include "TreeJav2.h"
#endif

#ifndef DEFINITION_Tree
#include "Tree.h"
#endif

#ifndef DEFINITION_Strings
#include "Strings.h"
#endif

#ifndef DEFINITION_TreeJav1
#include "TreeJav1.h"
#endif

ZfM_3 Zq0A4dgAc_1;
BOOLEAN Zq0A4dgAc_2;
PROC Zq0A4dgAc_3;

static INTEGER Z175, Z176;
static Zfb3DLQ_0 Z177, Z178;
static Zq0A4_153 Z179;
static SHORTCARD Z180;
static SHORTCARD Z181, Z182;
static BOOLEAN Z183, Z184;
static BOOLEAN Z185;
static BOOLEAN Z186;
static BOOLEAN Z187;
static void Z188 ARGS ((CHAR Z189[], LONGCARD O_1));
static BOOLEAN Z192 ARGS ((BYTE Z193[], LONGCARD O_3, BYTE Z194[], LONGCARD O_2));
static void Z196 ARGS ((Zq0A4_153 Z197));
struct S_29 {
union {
char dummy;
} U_1;
};
static void Z202 ARGS ((Zq0A4_153 Z197));
struct S_28 {
union {
char dummy;
} U_1;
};
static void Z209 ARGS ((Zq0A4_153 Z197));
struct S_27 {
union {
char dummy;
} U_1;
};
static void Z211 ARGS ((Zq0A4_153 Z197));
struct S_26 {
union {
char dummy;
} U_1;
};
static void Z212 ARGS ((Zq0A4_153 Z197));
struct S_25 {
union {
char dummy;
} U_1;
};
struct S_24 {
union {
char dummy;
} U_1;
};
static void Z206 ARGS ((Zq0A4_153 Z197));
struct S_23 {
union {
char dummy;
} U_1;
};
static void Z249 ARGS ((Zq0A4_153 Z197));
struct S_22 {
union {
char dummy;
} U_1;
};
static BOOLEAN Z250 ARGS ((Zq0A4_153 Z197));
struct S_21 {
union {
char dummy;
} U_1;
};
static void Z207 ARGS ((Zq0A4_153 Z197));
struct S_20 {
union {
char dummy;
} U_1;
};
static void Z234 ARGS ((Zq0A4_153 Z197));
struct S_19 {
union {
char dummy;
} U_1;
};
static void Z235 ARGS ((Zq0A4_153 Z197));
struct S_18 {
union {
char dummy;
} U_1;
};
static void Z232 ARGS ((Zq0A4_153 Z197));
struct S_17 {
union {
char dummy;
} U_1;
};
static void Z236 ARGS ((Zq0A4_153 Z197));
struct S_16 {
union {
char dummy;
} U_1;
};
static void Z237 ARGS ((Zq0A4_153 Z197));
struct S_15 {
union {
char dummy;
} U_1;
};
static void Z238 ARGS ((Zq0A4_153 Z197));
struct S_14 {
union {
char dummy;
} U_1;
};
static void Z239 ARGS ((Zq0A4_153 Z197));
struct S_13 {
union {
char dummy;
} U_1;
};
static void Z240 ARGS ((Zq0A4_153 Z197));
struct S_12 {
union {
char dummy;
} U_1;
};
static void Z229 ARGS ((Zq0A4_153 Z197));
struct S_11 {
union {
char dummy;
} U_1;
};
static void Z233 ARGS ((Zq0A4_153 Z197));
struct S_10 {
union {
char dummy;
} U_1;
};
static void Z252 ARGS ((Zq0A4_153 Z197));
struct S_9 {
union {
char dummy;
} U_1;
};
static void Z241 ARGS ((Zq0A4_153 Z253));
struct S_8 {
union {
char dummy;
} U_1;
};
static void Z242 ARGS ((Zq0A4_153 Z197));
struct S_7 {
union {
char dummy;
} U_1;
};
static void Z243 ARGS ((Zq0A4_153 Z255));
struct S_6 {
union {
char dummy;
} U_1;
};
static void Z230 ARGS ((Zq0A4_153 Z197));
struct S_5 {
union {
char dummy;
} U_1;
};
static BOOLEAN Z254 ARGS ((Zq0A4_153 Z197));
struct S_4 {
union {
char dummy;
} U_1;
};
static void Z259 ARGS ((Zq0A4_153 Z197));
struct S_3 {
union {
char dummy;
} U_1;
};
static BOOLEAN Z256 ARGS ((Zq0A4_153 Z197));
struct S_2 {
union {
char dummy;
} U_1;
};
static void Z261 ARGS ((Zq0A4_153 Z197));
struct S_1 {
union {
char dummy;
} U_1;
};
static void Z264 ARGS ((void));

static void Z188
# ifdef HAVE_ARGS
(CHAR Z189[], LONGCARD O_1)
# else
(Z189, O_1)
CHAR Z189[];
LONGCARD O_1;
# endif
{
OPEN_ARRAY_LOCALS

ALLOC_OPEN_ARRAYS (O_1 * sizeof (CHAR), 1)
COPY_OPEN_ARRAY (Z189, O_1, CHAR)
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)"Error: module TreeJav1, routine ", 32L);
ZfM_29((ZDz6VQCC_4)ZfM_2, Z189, O_1);
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)" failed", 7L);
ZfM_33((ZDz6VQCC_4)ZfM_2);
(*Zq0A4dgAc_3)();
FREE_OPEN_ARRAYS
}

static BOOLEAN Z192
# ifdef HAVE_ARGS
(BYTE Z193[], LONGCARD O_3, BYTE Z194[], LONGCARD O_2)
# else
(Z193, O_3, Z194, O_2)
BYTE Z193[];
LONGCARD O_3;
BYTE Z194[];
LONGCARD O_2;
# endif
{
INTEGER Z195;
OPEN_ARRAY_LOCALS

ALLOC_OPEN_ARRAYS (O_2 * sizeof (WORD) + O_3 * sizeof (WORD), 2)
COPY_OPEN_ARRAY (Z194, O_2, WORD)
COPY_OPEN_ARRAY (Z193, O_3, WORD)
{
LONGINT B_1 = 0, B_2 = (INTEGER)(O_3 - 1);

if (B_1 <= B_2)
for (Z195 = B_1;; Z195 += 1) {
if (Z193[Z195] != Z194[Z195]) {
FREE_OPEN_ARRAYS
return FALSE;
}
if (Z195 >= B_2) break;
}
}
FREE_OPEN_ARRAYS
return TRUE;
}

static void Z196
# ifdef HAVE_ARGS
(Zq0A4_153 Z197)
# else
(Z197)
Zq0A4_153 Z197;
# endif
{
struct S_29 Z198;

if (Z197 == Zq0A4_97) {
return;
}
if (Z197 != NIL && Z197->U_1.V_1.Y0 == Zq0A4_100) {
for (;;) {
{
register Zq0A4_226 *W_1 = &Z197->U_1.V_5.Y4;

if (!!IN(Zq0A4_48, W_1->Y2)) {
goto EXIT_1;
}
INC(Z175);
if (!!IN(Zq0A4_17, W_1->Y2)) {
goto EXIT_1;
}
ZfM_29(Zq0A4_172, (STRING)"   public static final int k", 28L);
Zq0A4_192(W_1->Y1);
ZfM_29(Zq0A4_172, (STRING)" = ", 3L);
Zq0A4_195(Z175);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
return;
}
} EXIT_1:;
}
}

static void Z202
# ifdef HAVE_ARGS
(Zq0A4_153 Z197)
# else
(Z197)
Zq0A4_153 Z197;
# endif
{
struct S_28 Z198;

if (Z197 == Zq0A4_97) {
return;
}
if (Z197 != NIL && Z197->U_1.V_1.Y0 == Zq0A4_100) {
for (;;) {
{
register Zq0A4_226 *W_2 = &Z197->U_1.V_5.Y4;

if (!((Zq0A4_177 & W_2->Y2) == 0X0L)) {
goto EXIT_2;
}
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   public static class ", 23L);
Zq0A4_192(W_2->Y1);
ZfM_29(Zq0A4_172, (STRING)" extends ", 9L);
if (W_2->Y6->U_1.V_1.Y0 == Zq0A4_99) {
Zq0A4_192(Zq0A4_81);
} else {
Zq0A4_192(W_2->Y6->U_1.V_5.Y4.Y1);
}
ZfM_29(Zq0A4_172, (STRING)" {", 2L);
ZfM_33(Zq0A4_172);
Zq0A4_185(W_2->Y3, (Zq0A4_170)Z202);
Z206(Z197);
if (ZpmCQ_25(ORD('m'), &Zq0A4_171)) {
Z207(Z197);
}
ZfM_29(Zq0A4_172, (STRING)"?", 1L);
Zq0A4_192(W_2->Y1);
ZfM_29(Zq0A4_172, (STRING)".constructors", 13L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"?", 1L);
Zq0A4_192(W_2->Y1);
ZfM_29(Zq0A4_172, (STRING)".methods", 8L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   }", 4L);
ZfM_33(Zq0A4_172);
return;
}
} EXIT_2:;
}
if (Z197 != NIL && Z197->U_1.V_1.Y0 == Zq0A4_105) {
{
register Zq0A4_231 *W_3 = &Z197->U_1.V_10.Y9;

ZfM_29(Zq0A4_172, (STRING)"      public ", 13L);
Zq0A4_192(W_3->Y4);
ZfM_29(Zq0A4_172, (STRING)" ", 1L);
Zq0A4_192(W_3->Y3);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
return;
}
}
if (Z197 != NIL && Z197->U_1.V_1.Y0 == Zq0A4_106) {
for (;;) {
{
register Zq0A4_232 *W_4 = &Z197->U_1.V_11.Y10;

if (!((Zq0A4_176 & W_4->Y6) == 0X0L)) {
goto EXIT_3;
}
ZfM_29(Zq0A4_172, (STRING)"      public ", 13L);
Zq0A4_192(W_4->Y4);
ZfM_29(Zq0A4_172, (STRING)" ", 1L);
Zq0A4_192(W_4->Y3);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
return;
}
} EXIT_3:;
}
}

static void Z209
# ifdef HAVE_ARGS
(Zq0A4_153 Z197)
# else
(Z197)
Zq0A4_153 Z197;
# endif
{
struct S_27 Z198;

if (Z197 == Zq0A4_97) {
return;
}
if (Z197 != NIL && Z197->U_1.V_1.Y0 == Zq0A4_100) {
for (;;) {
{
register Zq0A4_226 *W_5 = &Z197->U_1.V_5.Y4;

if (!((Zq0A4_177 & W_5->Y2) == 0X0L)) {
goto EXIT_4;
}
Z176 = 0;
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      public ", 13L);
Zq0A4_192(W_5->Y1);
ZfM_29(Zq0A4_172, (STRING)" (", 2L);
ZfM_33(Zq0A4_172);
Zq0A4_185(Z197, (Zq0A4_170)Z209);
ZfM_29(Zq0A4_172, (STRING)")", 1L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      {", 7L);
ZfM_33(Zq0A4_172);
return;
}
} EXIT_4:;
}
if (Z197 != NIL && Z197->U_1.V_1.Y0 == Zq0A4_105) {
for (;;) {
{
register Zq0A4_231 *W_6 = &Z197->U_1.V_10.Y9;

if (!(IN(Zq0A4_8, W_6->Y6) && W_6->Y7 == Zp1PEAFi_0)) {
goto EXIT_5;
}
if (Z176 > 0) {
ZfM_29(Zq0A4_172, (STRING)", ", 2L);
ZfM_33(Zq0A4_172);
}
ZfM_29(Zq0A4_172, (STRING)"         ", 9L);
Zq0A4_192(W_6->Y4);
ZfM_29(Zq0A4_172, (STRING)" ", 1L);
Zq0A4_192(W_6->Y3);
INC(Z176);
return;
}
} EXIT_5:;
}
if (Z197 != NIL && Z197->U_1.V_1.Y0 == Zq0A4_106) {
for (;;) {
{
register Zq0A4_232 *W_7 = &Z197->U_1.V_11.Y10;

if (!(IN(Zq0A4_8, W_7->Y6) && W_7->Y7 == Zp1PEAFi_0)) {
goto EXIT_6;
}
if (Z176 > 0) {
ZfM_29(Zq0A4_172, (STRING)", ", 2L);
ZfM_33(Zq0A4_172);
}
ZfM_29(Zq0A4_172, (STRING)"         ", 9L);
Zq0A4_192(W_7->Y4);
ZfM_29(Zq0A4_172, (STRING)" ", 1L);
Zq0A4_192(W_7->Y3);
INC(Z176);
return;
}
} EXIT_6:;
}
}

static void Z211
# ifdef HAVE_ARGS
(Zq0A4_153 Z197)
# else
(Z197)
Zq0A4_153 Z197;
# endif
{
struct S_26 Z198;

if (Z197 == Zq0A4_97) {
return;
}
if (Z197 != NIL && Z197->U_1.V_1.Y0 == Zq0A4_100) {
for (;;) {
{
register Zq0A4_226 *W_8 = &Z197->U_1.V_5.Y4;

if (!!IN(Zq0A4_48, W_8->Y2)) {
goto EXIT_7;
}
if (!IN(Zq0A4_17, W_8->Y2)) {
ZfM_29(Zq0A4_172, (STRING)"      \"", 7L);
Zq0A4_192(W_8->Y1);
ZfM_29(Zq0A4_172, (STRING)"\",", 2L);
ZfM_33(Zq0A4_172);
} else {
ZfM_29(Zq0A4_172, (STRING)"      \"\",", 9L);
ZfM_33(Zq0A4_172);
}
return;
}
} EXIT_7:;
}
}

static void Z212
# ifdef HAVE_ARGS
(Zq0A4_153 Z197)
# else
(Z197)
Zq0A4_153 Z197;
# endif
{
struct S_25 Z198;

if (Z197 == Zq0A4_97) {
return;
}
if (Z197 != NIL && Z197->U_1.V_1.Y0 == Zq0A4_100) {
for (;;) {
{
register Zq0A4_226 *W_9 = &Z197->U_1.V_5.Y4;

if (!!IN(Zq0A4_48, W_9->Y2)) {
goto EXIT_8;
}
ZfM_29(Zq0A4_172, (STRING)"         case k", 15L);
Zq0A4_192(W_9->Y1);
ZfM_29(Zq0A4_172, (STRING)": return new ", 13L);
Zq0A4_192(W_9->Y1);
ZfM_29(Zq0A4_172, (STRING)" ();", 4L);
ZfM_33(Zq0A4_172);
return;
}
} EXIT_8:;
}
}

void Zq0A4dgAc_4
# ifdef HAVE_ARGS
(Zq0A4_153 Z197)
# else
(Z197)
Zq0A4_153 Z197;
# endif
{
struct S_24 Z198;

if (Z197 == Zq0A4_97) {
return;
}
if (Z197 != NIL && Z197->U_1.V_1.Y0 == Zq0A4_127) {
{
register Zq0A4_253 *W_10 = &Z197->U_1.V_32.Y31;

if (Zq0A4_82 != Zfb3DLQ_1) {
ZfM_29(Zq0A4_172, (STRING)"package ", 8L);
Zq0A4_192(Zq0A4_82);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
}
Z185 = FALSE;
if (!ZqnGVQ_4(&W_10->Y6->U_1.V_17.Y16.Y2)) {
Zq0A4dgAd_1(W_10->Y6->U_1.V_17.Y16.Y8);
ZqnGVQ_5(Zq0A4_172, W_10->Y6->U_1.V_17.Y16.Y2);
Z185 = TRUE;
}
Z179 = W_10->Y14;
while (Z179->U_1.V_1.Y0 == Zq0A4_144) {
if (!ZqnGVQ_4(&Z179->U_1.V_49.Y48.Y6->U_1.V_17.Y16.Y2)) {
Zq0A4dgAd_1(Z179->U_1.V_49.Y48.Y6->U_1.V_17.Y16.Y8);
ZqnGVQ_5(Zq0A4_172, Z179->U_1.V_49.Y48.Y6->U_1.V_17.Y16.Y2);
Z185 = TRUE;
}
Z179 = Z179->U_1.V_49.Y48.Y12;
}
if (!Z185) {
ZfM_29(Zq0A4_172, (STRING)"import de.cocolab.reuse.Position;", 33L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"import de.cocolab.reuse.IdentTable;", 35L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"import de.cocolab.reuse.Ident;", 30L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"import de.cocolab.reuse.Global;", 31L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"import de.cocolab.reuse.CocktailReader;", 39L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"import de.cocolab.reuse.CocktailWriter;", 39L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"import de.cocolab.reuse.DynArrayObject;", 39L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"import de.cocolab.reuse.CocktailError;", 38L);
ZfM_33(Zq0A4_172);
}
ZfM_33(Zq0A4_172);
Zq0A4dgAd_1(W_10->Y6->U_1.V_17.Y16.Y9);
ZqnGVQ_5(Zq0A4_172, W_10->Y6->U_1.V_17.Y16.Y3);
Z179 = W_10->Y14;
while (Z179->U_1.V_1.Y0 == Zq0A4_144) {
Zq0A4dgAd_1(Z179->U_1.V_49.Y48.Y6->U_1.V_17.Y16.Y9);
ZqnGVQ_5(Zq0A4_172, Z179->U_1.V_49.Y48.Y6->U_1.V_17.Y16.Y3);
Z179 = Z179->U_1.V_49.Y48.Y12;
}
Zq0A4dgAd_1(W_10->Y6->U_1.V_17.Y16.Y10);
ZqnGVQ_5(Zq0A4_172, W_10->Y6->U_1.V_17.Y16.Y4);
Z179 = W_10->Y14;
while (Z179->U_1.V_1.Y0 == Zq0A4_144) {
Zq0A4dgAd_1(Z179->U_1.V_49.Y48.Y6->U_1.V_17.Y16.Y10);
ZqnGVQ_5(Zq0A4_172, Z179->U_1.V_49.Y48.Y6->U_1.V_17.Y16.Y4);
Z179 = Z179->U_1.V_49.Y48.Y12;
}
ZfM_29(Zq0A4_172, (STRING)"#include \"yy", 12L);
Zq0A4_192(Zq0A4_85);
ZfM_29(Zq0A4_172, (STRING)".h\"", 3L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# ifndef Idents_PREFIX", 22L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# define Idents_PREFIX Global.idents.", 37L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# endif", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# ifndef ", 9L);
Zq0A4_192(Zq0A4_85);
ZfM_29(Zq0A4_172, (STRING)"_NodeHead", 9L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# define ", 9L);
Zq0A4_192(Zq0A4_85);
ZfM_29(Zq0A4_172, (STRING)"_NodeHead", 9L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# endif", 7L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"public abstract class ", 22L);
Zq0A4_192(Zq0A4_85);
ZfM_29(Zq0A4_172, (STRING)" implements java.io.Serializable {", 34L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   public ", 10L);
Zq0A4_192(Zq0A4_85);
ZfM_29(Zq0A4_172, (STRING)" () {", 5L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      beginNodeHead (this)", 26L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   }", 4L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   public static final ", 23L);
Zq0A4_192(Zq0A4_81);
ZfM_29(Zq0A4_172, (STRING)" ", 1L);
Zq0A4_192(Zq0A4_88);
ZfM_29(Zq0A4_172, (STRING)" = null;", 8L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"?", 1L);
Zq0A4_192(Zq0A4_81);
ZfM_29(Zq0A4_172, (STRING)".fields", 7L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   public static interface ProcTree {", 37L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      public void proc (", 24L);
Zq0A4_192(Zq0A4_81);
ZfM_29(Zq0A4_172, (STRING)" yyt);", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   }", 4L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
Zq0A4dgAd_1(W_10->Y6->U_1.V_17.Y16.Y7);
ZqnGVQ_5(Zq0A4_172, W_10->Y6->U_1.V_17.Y16.Y1);
Z179 = W_10->Y14;
while (Z179->U_1.V_1.Y0 == Zq0A4_144) {
Zq0A4dgAd_1(Z179->U_1.V_49.Y48.Y6->U_1.V_17.Y16.Y7);
ZqnGVQ_5(Zq0A4_172, Z179->U_1.V_49.Y48.Y6->U_1.V_17.Y16.Y1);
Z179 = Z179->U_1.V_49.Y48.Y12;
}
ZfM_29(Zq0A4_172, (STRING)"+", 1L);
Zq0A4_192(Zq0A4_81);
ZfM_29(Zq0A4_172, (STRING)".fields", 7L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   public int yyMark;", 21L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   ", 3L);
Zq0A4_192(Zq0A4_85);
ZfM_29(Zq0A4_172, (STRING)"_NodeHead", 9L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"=", 1L);
Zq0A4_192(Zq0A4_81);
ZfM_29(Zq0A4_172, (STRING)".fields", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"?", 1L);
Zq0A4_192(Zq0A4_81);
ZfM_29(Zq0A4_172, (STRING)".methods", 8L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   public abstract int yyKind ();", 33L);
ZfM_33(Zq0A4_172);
Zq0A4_184(W_10->Y13, (Zq0A4_170)Z229);
if (ZpmCQ_25(ORD('L'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)"// this code may well be broken until Ag is done - Trevor Nash", 62L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  public int yyOffset; ", 23L);
Zq0A4_192(Zq0A4_81);
ZfM_29(Zq0A4_172, (STRING)" yyParent;", 10L);
ZfM_33(Zq0A4_172);
Z182 = 0;
Zq0A4_184(W_10->Y13, (Zq0A4_170)Z230);
ZfM_29(Zq0A4_172, (STRING)"  public int yyIsComp0", 22L);
ZfM_33(Zq0A4_172);
if (ZpmCQ_25(ORD('5'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)", yyIsDone0", 11L);
}
{
SHORTCARD B_3 = 1, B_4 = (Z182 - 1) / Zq0A4dgAc_0;

if (B_3 <= B_4)
for (Z181 = B_3;; Z181 += 1) {
ZfM_29(Zq0A4_172, (STRING)", yyIsComp", 10L);
Zq0A4_195((LONGINT)Z181);
if (ZpmCQ_25(ORD('5'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)", yyIsDone", 10L);
Zq0A4_195((LONGINT)Z181);
}
if (Z181 >= B_4) break;
}
}
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
}
if (ZpmCQ_25(ORD('R'), &Zq0A4_171)) {
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   public ", 10L);
Zq0A4_192(Zq0A4_81);
ZfM_29(Zq0A4_172, (STRING)" reverse () {", 13L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      ", 6L);
Zq0A4_192(Zq0A4_81);
ZfM_29(Zq0A4_172, (STRING)" yyOld, yyNew, yyNext;", 22L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      yyOld = yyNew = this;", 27L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      while (yyOld != null) {", 29L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"         yyNext = yyOld.yySwapNext (yyNew);", 43L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"         if (yyNext == yyOld) break;", 36L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"         yyNew = yyOld;", 23L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"         yyOld = yyNext;", 24L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      }", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      yyNext = this.yySwapNext (yyOld);", 39L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      return yyNew;", 19L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   }", 4L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"+", 1L);
Zq0A4_192(Zq0A4_81);
ZfM_29(Zq0A4_172, (STRING)".methods", 8L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   ", 3L);
Zq0A4_192(Zq0A4_81);
ZfM_29(Zq0A4_172, (STRING)" yySwapNext (", 13L);
Zq0A4_192(Zq0A4_81);
ZfM_29(Zq0A4_172, (STRING)" yyt) {", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      return this;", 18L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   }", 4L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"=", 1L);
Zq0A4_192(Zq0A4_81);
ZfM_29(Zq0A4_172, (STRING)".methods", 8L);
ZfM_33(Zq0A4_172);
Zq0A4_184(W_10->Y13, (Zq0A4_170)Z232);
}
ZfM_33(Zq0A4_172);
if (ZpmCQ_25(ORD('_'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)"+", 1L);
Zq0A4_192(Zq0A4_81);
ZfM_29(Zq0A4_172, (STRING)".fields", 7L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   public static final String [] NodeNames = {", 46L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      \"", 7L);
Zq0A4_192(Zq0A4_88);
ZfM_29(Zq0A4_172, (STRING)"\",", 2L);
ZfM_33(Zq0A4_172);
Zq0A4_184(W_10->Y13, (Zq0A4_170)Z211);
ZfM_29(Zq0A4_172, (STRING)"   };", 5L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"=", 1L);
Zq0A4_192(Zq0A4_81);
ZfM_29(Zq0A4_172, (STRING)".fields", 7L);
ZfM_33(Zq0A4_172);
}
ZfM_29(Zq0A4_172, (STRING)"   public static boolean isType (", 33L);
Zq0A4_192(Zq0A4_81);
ZfM_29(Zq0A4_172, (STRING)" yyt, int kind) {", 17L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      return yyt != null && yyt.isType (kind);", 46L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   }", 4L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   public boolean isType (int kind) {", 37L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      return kind <= yyKind () && yyKind () <= TypeRange [kind];", 64L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   }", 4L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"+", 1L);
Zq0A4_192(Zq0A4_81);
ZfM_29(Zq0A4_172, (STRING)".fields", 7L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
Z175 = 0;
Zq0A4_184(W_10->Y13, (Zq0A4_170)Z196);
ZfM_29(Zq0A4_172, (STRING)"=", 1L);
Zq0A4_192(Zq0A4_81);
ZfM_29(Zq0A4_172, (STRING)".fields", 7L);
ZfM_33(Zq0A4_172);
if (ZpmCQ_25(ORD('L'), &Zq0A4_171)) {
Z182 = 0;
Zq0A4_184(W_10->Y13, (Zq0A4_170)Z230);
if (ZpmCQ_25(ORD('5'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)", int yyIsDone0", 15L);
}
{
SHORTCARD B_5 = 1, B_6 = (Z182 - 1) / Zq0A4dgAc_0;

if (B_5 <= B_6)
for (Z181 = B_5;; Z181 += 1) {
ZfM_29(Zq0A4_172, (STRING)", int yyIsComp", 14L);
Zq0A4_195((LONGINT)Z181);
if (ZpmCQ_25(ORD('5'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)", int yyIsDone", 14L);
Zq0A4_195((LONGINT)Z181);
}
if (Z181 >= B_6) break;
}
}
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
}
Zq0A4_184(W_10->Y13, (Zq0A4_170)Z202);
ZfM_29(Zq0A4_172, (STRING)"+", 1L);
Zq0A4_192(Zq0A4_81);
ZfM_29(Zq0A4_172, (STRING)".fields", 7L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   public static final int TypeRange [] = { 0,", 46L);
ZfM_33(Zq0A4_172);
Zq0A4_184(W_10->Y13, (Zq0A4_170)Z233);
ZfM_29(Zq0A4_172, (STRING)"   };", 5L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"=", 1L);
Zq0A4_192(Zq0A4_81);
ZfM_29(Zq0A4_172, (STRING)".fields", 7L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   public static ", 17L);
Zq0A4_192(Zq0A4_81);
ZfM_29(Zq0A4_172, (STRING)" make (int yyKind) {", 20L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      switch (yyKind) {", 23L);
ZfM_33(Zq0A4_172);
Zq0A4_184(W_10->Y13, (Zq0A4_170)Z212);
ZfM_29(Zq0A4_172, (STRING)"         default:", 17L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"            throw new de.cocolab.reuse.CocktailError (", 54L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"            \"", 13L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)".make called with parameter value of \" + yyKind);", 49L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      }", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   }", 4L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
Zq0A4dgAd_5(Z197);
if (ZpmCQ_25(ORD('t'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)"+", 1L);
Zq0A4_192(Zq0A4_81);
ZfM_29(Zq0A4_172, (STRING)".fields", 7L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   private static ProcTree yyProc;", 34L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"=", 1L);
Zq0A4_192(Zq0A4_81);
ZfM_29(Zq0A4_172, (STRING)".fields", 7L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   public static void traverseTD (", 34L);
Zq0A4_192(Zq0A4_81);
ZfM_29(Zq0A4_172, (STRING)" yyt, ProcTree yyyProc) {", 25L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      yyMark (yyt);", 19L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      yyProc = yyyProc;", 23L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      yyTraverseTD (yyt);", 25L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   }", 4L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   public static void yyTraverseTD (", 36L);
Zq0A4_192(Zq0A4_81);
ZfM_29(Zq0A4_172, (STRING)" yyt) {", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      while (yyt != null", 24L);
ZfM_29(Zq0A4_172, (STRING)" && yyt.yyMark != 0) {", 22L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"         yyt.yyMark = 0;", 24L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"         yyProc.proc (yyt);", 27L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"         yyt.yyTraverseTD ();", 29L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"+", 1L);
Zq0A4_192(Zq0A4_81);
ZfM_29(Zq0A4_172, (STRING)".methods", 8L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   public void traverseTD (ProcTree yyyProc) {", 46L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      ", 6L);
Zq0A4_192(Zq0A4_85);
ZfM_29(Zq0A4_172, (STRING)".traverseTD (this, yyyProc);", 28L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   }", 4L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   void yyTraverseTD () {}", 26L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"=", 1L);
Zq0A4_192(Zq0A4_81);
ZfM_29(Zq0A4_172, (STRING)".methods", 8L);
ZfM_33(Zq0A4_172);
Zq0A4_184(W_10->Y13, (Zq0A4_170)Z234);
ZfM_29(Zq0A4_172, (STRING)"         yyt = yyt.yyGetIterator ();", 36L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      }", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      return;", 13L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   }", 4L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
}
if (ZpmCQ_25(ORD('b'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)"# ifndef yyInitStackSize", 24L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# define yyInitStackSize 100", 28L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# endif", 7L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   public static void traverseBU (", 34L);
Zq0A4_192(Zq0A4_81);
ZfM_29(Zq0A4_172, (STRING)" yyt, ProcTree yyProc) {", 24L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      final int yyIsStacked = 32768;", 36L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      ", 6L);
Zq0A4_192(Zq0A4_81);
ZfM_29(Zq0A4_172, (STRING)" yys; int yyi;", 14L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      ", 6L);
Zq0A4_192(Zq0A4_81);
ZfM_29(Zq0A4_172, (STRING)" [] yyStack = new ", 18L);
Zq0A4_192(Zq0A4_81);
ZfM_29(Zq0A4_172, (STRING)" [yyInitStackSize];", 19L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      int yyStackPtr = 1;", 25L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      yyMark (yyt);", 19L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      yyStack [1] = yyt;", 24L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      if (yyt != null) yyt.yyMark += yyIsStacked;", 49L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      while (yyStackPtr > 0) {", 30L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"         yyt = yyStack [yyStackPtr];", 36L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"         if (yyt == null || yyt.yyMark == 0) {", 46L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"            yyStackPtr --;", 26L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"         } else if (yyt.yyMark > yyIsStacked) {", 47L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"            yyi = yyStackPtr + 1;", 33L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"            yyt.yyMark = yyIsStacked;", 37L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"            if (yyStackPtr + ", 29L);
Zq0A4_195((LONGINT)ZpmC89LG6_2);
ZfM_29(Zq0A4_172, (STRING)" > yyStack.length) {", 20L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"               yyStack = (", 26L);
Zq0A4_192(Zq0A4_81);
ZfM_29(Zq0A4_172, (STRING)" []) DynArrayObject.extend (yyStack);", 37L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"            }", 13L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"            switch (yyt.yyKind ()) {", 36L);
ZfM_33(Zq0A4_172);
Zq0A4_184(W_10->Y13, (Zq0A4_170)Z235);
ZfM_29(Zq0A4_172, (STRING)"               default: break;", 30L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"            }", 13L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"            while (yyi <= yyStackPtr) {", 39L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"               yys = yyStack [yyi];", 35L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"               if (yys != null) {", 33L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"                  if (yys.yyMark >= yyIsStacked) yyStack [yyi] = null;", 70L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"                  else yys.yyMark += yyIsStacked;", 49L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"               }", 16L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"               yyi ++;", 22L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"            }", 13L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"         } else {", 17L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"            yyt.yyMark = 0; yyStackPtr --; yyProc.proc (yyt);", 61L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"         }", 10L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      }", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   }", 4L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"+", 1L);
Zq0A4_192(Zq0A4_81);
ZfM_29(Zq0A4_172, (STRING)".methods", 8L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   public void traverseBU (ProcTree yyyProc) {", 46L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      ", 6L);
Zq0A4_192(Zq0A4_85);
ZfM_29(Zq0A4_172, (STRING)".traverseBU (this, yyyProc);", 28L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   }", 4L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"=", 1L);
Zq0A4_192(Zq0A4_81);
ZfM_29(Zq0A4_172, (STRING)".methods", 8L);
ZfM_33(Zq0A4_172);
}
if (ZpmCQ_25(ORD('R'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)"   public static void forall (", 30L);
Zq0A4_192(Zq0A4_81);
ZfM_29(Zq0A4_172, (STRING)" yyt, ProcTree yyProc) {", 24L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      ", 6L);
Zq0A4_192(Zq0A4_81);
ZfM_29(Zq0A4_172, (STRING)" yyyt = yyt;", 12L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      while (yyyt != null) {", 28L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"         yyProc.proc (yyyt);", 28L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"         yyyt = yyyt.yyGetNext ();", 34L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      }", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   }", 4L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"+", 1L);
Zq0A4_192(Zq0A4_81);
ZfM_29(Zq0A4_172, (STRING)".methods", 8L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   public ", 10L);
Zq0A4_192(Zq0A4_81);
ZfM_29(Zq0A4_172, (STRING)" yyGetNext () {", 15L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      return null;", 18L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   }", 4L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   public void forall (ProcTree yyProc) {", 41L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      ", 6L);
Zq0A4_192(Zq0A4_85);
ZfM_29(Zq0A4_172, (STRING)".forall (this, yyProc);", 23L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   }", 4L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"=", 1L);
Zq0A4_192(Zq0A4_81);
ZfM_29(Zq0A4_172, (STRING)".methods", 8L);
ZfM_33(Zq0A4_172);
Zq0A4_184(W_10->Y13, (Zq0A4_170)Z236);
}
if (ZpmCQ_25(ORD('y'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)"+", 1L);
Zq0A4_192(Zq0A4_81);
ZfM_29(Zq0A4_172, (STRING)".fields", 7L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   private static final int yyInitOldToNewStoreSize = 32;", 57L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   private static ", 18L);
Zq0A4_192(Zq0A4_81);
ZfM_29(Zq0A4_172, (STRING)" [] yyOld = new ", 16L);
Zq0A4_192(Zq0A4_81);
ZfM_29(Zq0A4_172, (STRING)" [yyInitOldToNewStoreSize];", 27L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   private static ", 18L);
Zq0A4_192(Zq0A4_81);
ZfM_29(Zq0A4_172, (STRING)" [] yyNew = new ", 16L);
Zq0A4_192(Zq0A4_81);
ZfM_29(Zq0A4_172, (STRING)" [yyInitOldToNewStoreSize];", 27L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   private static int yyOldToNewCount;", 38L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"=", 1L);
Zq0A4_192(Zq0A4_81);
ZfM_29(Zq0A4_172, (STRING)".fields", 7L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   private static void yyStoreOldToNew (", 40L);
Zq0A4_192(Zq0A4_81);
ZfM_29(Zq0A4_172, (STRING)" yyyOld, ", 9L);
Zq0A4_192(Zq0A4_81);
ZfM_29(Zq0A4_172, (STRING)" yyyNew) {", 10L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      yyOldToNewCount ++;", 25L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      if (yyOldToNewCount == yyOld.length) {", 44L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"         yyOld = (", 18L);
Zq0A4_192(Zq0A4_81);
ZfM_29(Zq0A4_172, (STRING)" []) de.cocolab.reuse.DynArrayObject.extend (yyOld);", 52L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"         yyNew = (", 18L);
Zq0A4_192(Zq0A4_81);
ZfM_29(Zq0A4_172, (STRING)" []) de.cocolab.reuse.DynArrayObject.extend (yyNew);", 52L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      }", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      yyOld [yyOldToNewCount] = yyyOld;", 39L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      yyNew [yyOldToNewCount] = yyyNew;", 39L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   }", 4L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   final ", 9L);
Zq0A4_192(Zq0A4_81);
ZfM_29(Zq0A4_172, (STRING)" yyMapOldToNew () {", 19L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      for (int yyi = 1; yyi <= yyOldToNewCount; yyi ++)", 55L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"         if (yyOld [yyi] == this) return yyNew [yyi];", 53L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      return null;", 18L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   }", 4L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   public static ", 17L);
Zq0A4_192(Zq0A4_81);
ZfM_29(Zq0A4_172, (STRING)" copy (", 7L);
Zq0A4_192(Zq0A4_81);
ZfM_29(Zq0A4_172, (STRING)" yyt) {", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      yyMark (yyt);", 19L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      yyOldToNewCount = 0;", 26L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      return yyCopyAll (yyt);", 29L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   }", 4L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   public java.lang.Object clone () {", 37L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      yyMark (this);", 20L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      yyOldToNewCount = 0;", 26L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      return yyCopyAll (this);", 30L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   }", 4L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   static ", 10L);
Zq0A4_192(Zq0A4_81);
ZfM_29(Zq0A4_172, (STRING)" yyCopyAll (", 12L);
Zq0A4_192(Zq0A4_81);
ZfM_29(Zq0A4_172, (STRING)" yyt) {", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      ", 6L);
Zq0A4_192(Zq0A4_81);
ZfM_29(Zq0A4_172, (STRING)" first, current, next;", 22L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      if (yyt == null) return null;", 35L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      first = yyt.yyCopy ();", 28L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      current = first;", 22L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      while (yyt != null", 24L);
ZfM_29(Zq0A4_172, (STRING)" && yyt.yyMark != 0) {", 22L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"         if (yyt.yyMark > 1) yyStoreOldToNew (yyt, current);", 60L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"         yyt.yyMark = 0;", 24L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"         yyt = yyt.yyGetIterator ();", 36L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"         if (yyt == null) return first;", 39L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"         next = yyt.yyCopy ();", 30L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"         current.yySetIterator (next);", 38L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"         current = next;", 24L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      }", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      return first;", 19L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   }", 4L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"+", 1L);
Zq0A4_192(Zq0A4_81);
ZfM_29(Zq0A4_172, (STRING)".methods", 8L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   abstract ", 12L);
Zq0A4_192(Zq0A4_81);
ZfM_29(Zq0A4_172, (STRING)" yyCopy ();", 11L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"=", 1L);
Zq0A4_192(Zq0A4_81);
ZfM_29(Zq0A4_172, (STRING)".methods", 8L);
ZfM_33(Zq0A4_172);
Zq0A4_184(W_10->Y13, (Zq0A4_170)Z237);
}
if (ZpmCQ_25(ORD('y'), &Zq0A4_171) || ZpmCQ_25(ORD('='), &Zq0A4_171) || ZpmCQ_25(ORD('r'), &Zq0A4_171) || ZpmCQ_25(ORD('w'), &Zq0A4_171) || ZpmCQ_25(ORD(','), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)"+", 1L);
Zq0A4_192(Zq0A4_81);
ZfM_29(Zq0A4_172, (STRING)".methods", 8L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   ", 3L);
Zq0A4_192(Zq0A4_81);
ZfM_29(Zq0A4_172, (STRING)" yyGetIterator () {", 19L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      return null;", 18L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   }", 4L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"=", 1L);
Zq0A4_192(Zq0A4_81);
ZfM_29(Zq0A4_172, (STRING)".methods", 8L);
ZfM_33(Zq0A4_172);
Zq0A4_184(W_10->Y13, (Zq0A4_170)Z238);
}
if (ZpmCQ_25(ORD('y'), &Zq0A4_171) || ZpmCQ_25(ORD('r'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)"+", 1L);
Zq0A4_192(Zq0A4_81);
ZfM_29(Zq0A4_172, (STRING)".methods", 8L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   boolean yyHasIterator () { return false; }", 45L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   void yySetIterator (", 23L);
Zq0A4_192(Zq0A4_81);
ZfM_29(Zq0A4_172, (STRING)" yyt) {", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   }", 4L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"=", 1L);
Zq0A4_192(Zq0A4_81);
ZfM_29(Zq0A4_172, (STRING)".methods", 8L);
ZfM_33(Zq0A4_172);
Zq0A4_184(W_10->Y13, (Zq0A4_170)Z239);
}
if (ZpmCQ_25(ORD('k'), &Zq0A4_171) || ZpmCQ_25(ORD('='), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)"+", 1L);
Zq0A4_192(Zq0A4_81);
ZfM_29(Zq0A4_172, (STRING)".fields", 7L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   private static boolean yyResult;", 35L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"=", 1L);
Zq0A4_192(Zq0A4_81);
ZfM_29(Zq0A4_172, (STRING)".fields", 7L);
ZfM_33(Zq0A4_172);
}
if (ZpmCQ_25(ORD('k'), &Zq0A4_171)) {
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   public static boolean check (", 32L);
Zq0A4_192(Zq0A4_81);
ZfM_29(Zq0A4_172, (STRING)" yyt) throws java.io.IOException {", 34L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      if (yyt == null) { return false; }", 40L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      return yyt.check ();", 26L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   }", 4L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"+", 1L);
Zq0A4_192(Zq0A4_81);
ZfM_29(Zq0A4_172, (STRING)".methods", 8L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   final public boolean check () throws java.io.IOException {", 61L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      yyMark (this);", 20L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      yyResult = true;", 22L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      yyCheckTree (this);", 25L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      return yyResult;", 22L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   }", 4L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"=", 1L);
Zq0A4_192(Zq0A4_81);
ZfM_29(Zq0A4_172, (STRING)".methods", 8L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   static void yyCheckTree (", 28L);
Zq0A4_192(Zq0A4_81);
ZfM_29(Zq0A4_172, (STRING)" yyt) throws java.io.IOException {", 34L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      while (yyt != null ", 25L);
ZfM_29(Zq0A4_172, (STRING)"&& yyt.yyMark != 0) {", 21L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"         yyt.yyMark = 0;", 24L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"         yyt = yyt.yyCheck ();", 30L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      }", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   }", 4L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   final void yyCheckChild2 (", 29L);
Zq0A4_192(Zq0A4_81);
ZfM_29(Zq0A4_172, (STRING)" yyChild, String yySelector) throws java.io.IOException {", 57L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      final CocktailWriter yyerr = new CocktailWriter (System.err, true);", 73L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      if (yyChild == null) {", 28L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"         yyResult = false;", 26L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"         yyerr.write (\"", 23L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)".check: parent = \");", 20L);
ZfM_29(Zq0A4_172, (STRING)"         writeNode (yyerr, this);", 33L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"         yyerr.writeNl (); yyerr.write (\"selector: \"); yyerr.write (yySelector);", 80L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"         yyerr.write (\", child = \"); writeNode (yyerr, yyChild); yyerr.writeNl ();", 82L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      }", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   }", 4L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   final void yyCheckChild (", 28L);
Zq0A4_192(Zq0A4_81);
ZfM_29(Zq0A4_172, (STRING)" yyChild, String yySelector) throws java.io.IOException {", 57L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      yyCheckChild2 (yyChild, yySelector);", 42L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      yyCheckTree (yyChild);", 28L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   }", 4L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   ", 3L);
Zq0A4_192(Zq0A4_81);
ZfM_29(Zq0A4_172, (STRING)" yyCheck () throws java.io.IOException {", 40L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      return null;", 18L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   }", 4L);
ZfM_33(Zq0A4_172);
Zq0A4_184(W_10->Y13, (Zq0A4_170)Z240);
}
if (ZpmCQ_25(ORD('^'), &Zq0A4_171)) {
Zq0A4dgAd_7(Z197);
}
if (ZpmCQ_25(ORD('q'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)"+", 1L);
Zq0A4_192(Zq0A4_81);
ZfM_29(Zq0A4_172, (STRING)".fields", 7L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   private static int yyState;", 30L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   private static StringBuffer yyString = new StringBuffer (32);", 64L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   private static int yyLength;", 31L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"=", 1L);
Zq0A4_192(Zq0A4_81);
ZfM_29(Zq0A4_172, (STRING)".fields", 7L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   private static boolean yyyIsEqual (String yya) {", 51L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      int yyi;", 14L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      if (yyLength >= 0 && yyString.charAt (yyLength) == ' ') {", 63L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"         if (yyLength != yya.length ()) return false;", 53L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"         for (yyi = 0; yyi < yyLength; yyi ++)", 46L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"            if (yyString.charAt (yyi) != yya.charAt (yyi)) return false;", 72L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      } else {", 14L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"         if (yyLength >= yya.length ()) return false;", 53L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"         for (yyi = 0; yyi <= yyLength; yyi ++)", 47L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"            if (yyString.charAt (yyi) != yya.charAt (yyi)) return false;", 72L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      }", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      return true;", 18L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   }", 4L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   private static boolean yyyIsEqualGoto () {", 45L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      int yyi = 0;", 18L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      while (yyi <= yyLength && yyString.charAt (yyi) == ' ') yyi ++;", 69L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      if (yyi <= yyLength && yyString.charAt (yyi) == 'g') yyi ++; else return false;", 85L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      if (yyi <= yyLength && yyString.charAt (yyi) == 'o') yyi ++; else return false;", 85L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      if (yyi <= yyLength && yyString.charAt (yyi) == 't') yyi ++; else return false;", 85L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      if (yyi <= yyLength && yyString.charAt (yyi) == 'o') yyi ++; else return false;", 85L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      if (yyi <= yyLength && yyString.charAt (yyi) == ' ') yyi ++; else return false;", 85L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      while (yyi <= yyLength && yyString.charAt (yyi) == ' ') yyi ++;", 69L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      yyLine = 0;", 17L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      while (yyi <= yyLength && '0' <= yyString.charAt (yyi) && yyString.charAt (yyi) <= '9')", 93L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"         { yyLine = yyLine * 10 + yyString.charAt (yyi) - '0'; yyi ++; }", 72L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      return true;", 18L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   }", 4L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   private static void yyQuery (", 32L);
Zq0A4_192(Zq0A4_81);
ZfM_29(Zq0A4_172, (STRING)" yyt) throws java.io.IOException {", 34L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      final CocktailWriter out = new CocktailWriter (System.out, true);", 71L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      final int yyyWrite = 1;", 29L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      final int yyyRead = 2;", 28L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      final int yyyQuit = 3;", 28L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      yyState = yyyWrite;", 25L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      char yyCh;", 16L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      for (;;) {", 16L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"         switch (yyState) {", 27L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"            case yyyQuit : return;", 34L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"            case yyyWrite: writeNode (out, yyt); yyState = yyyRead; break;", 74L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"            case yyyRead :", 26L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"               out.write (\"? \"); out.flush (); yyString.setLength (0);", 70L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"               while ((yyCh = (char) System.in.read ()) != ", 59L);
ZfM_29(Zq0A4_172, (STRING)"'\\n')", 5L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"                  if (yyCh != ", 30L);
ZfM_29(Zq0A4_172, (STRING)"'\\r') yyString.append (yyCh);", 29L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"               yyLength = yyString.length () - 1;", 49L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"               if      (yyyIsEqual (\"parent\")) { yyState = yyyWrite; return; }", 78L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"               else if (yyyIsEqual (\"quit\"))   { yyState = yyyQuit; return; }", 77L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"               else if (yyyIsEqualGoto ()) {", 44L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"                  yyTheNode = yyTheTree;", 40L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"                  yyCurLine = Integer.MAX_VALUE;", 48L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"                  ", 18L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)".traverseTD (yyTheTree, yySearch2);", 35L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"                  yyQuery (yyTheNode);", 38L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"               } else if (yyt != null) {", 40L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"                  switch (yyt.yyKind ()) {", 42L);
ZfM_33(Zq0A4_172);
Zq0A4_184(W_10->Y13, (Zq0A4_170)Z241);
ZfM_29(Zq0A4_172, (STRING)"                  default: break;", 33L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"               }", 16L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"            }", 13L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"         }", 10L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      }", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   }", 4L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   public static void query (", 29L);
Zq0A4_192(Zq0A4_81);
ZfM_29(Zq0A4_172, (STRING)" yyt) throws java.io.IOException {", 34L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      yyTheTree = yyt; yyQuery (yyt);", 37L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   }", 4L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   public void query () throws java.io.IOException {", 52L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      query (this);", 19L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   }", 4L);
ZfM_33(Zq0A4_172);
}
if (ZpmCQ_25(ORD('='), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)"   public static boolean isEqual (", 34L);
Zq0A4_192(Zq0A4_81);
ZfM_29(Zq0A4_172, (STRING)" yyt1, ", 7L);
Zq0A4_192(Zq0A4_81);
ZfM_29(Zq0A4_172, (STRING)" yyt2) {", 8L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      yyResult = true;", 22L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      yyIsEqual", 15L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)" (yyt1, yyt2);", 14L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      return yyResult;", 22L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   }", 4L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"+", 1L);
Zq0A4_192(Zq0A4_81);
ZfM_29(Zq0A4_172, (STRING)".methods", 8L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   public boolean equals (Object other) {", 41L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      ", 6L);
Zq0A4_192(Zq0A4_81);
ZfM_29(Zq0A4_172, (STRING)" yyt2;", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      if (! (other instanceof ", 30L);
Zq0A4_192(Zq0A4_81);
ZfM_29(Zq0A4_172, (STRING)")) return false;", 16L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      yyt2 = (", 14L);
Zq0A4_192(Zq0A4_81);
ZfM_29(Zq0A4_172, (STRING)") other;", 8L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      return ", 13L);
Zq0A4_192(Zq0A4_85);
ZfM_29(Zq0A4_172, (STRING)".isEqual (this, yyt2);", 22L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   }", 4L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"=", 1L);
Zq0A4_192(Zq0A4_81);
ZfM_29(Zq0A4_172, (STRING)".methods", 8L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   static void yyIsEqual", 24L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)" (", 2L);
Zq0A4_192(Zq0A4_81);
ZfM_29(Zq0A4_172, (STRING)" yyt1, ", 7L);
Zq0A4_192(Zq0A4_81);
ZfM_29(Zq0A4_172, (STRING)" yyt2) {", 8L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      while (yyt1 != yyt2 && yyResult) {", 40L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"         if (yyt1 == null || yyt2 == null || yyt1.yyKind () != yyt2.yyKind ())", 78L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"            { yyResult = false; return; }", 41L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"         yyt1.yyEqual (yyt2);", 29L);
ZfM_33(Zq0A4_172);
Zq0A4_184(W_10->Y13, (Zq0A4_170)Z242);
ZfM_29(Zq0A4_172, (STRING)"         yyt1 = yyt1.yyGetIterator ();", 38L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"         yyt2 = yyt2.yyGetIterator ();", 38L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      }", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   }", 4L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"+", 1L);
Zq0A4_192(Zq0A4_81);
ZfM_29(Zq0A4_172, (STRING)".methods", 8L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   void yyEqual (", 17L);
Zq0A4_192(Zq0A4_81);
ZfM_29(Zq0A4_172, (STRING)" yyOther) { yyResult &= equalNodeHead (this, yyOther); }", 56L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"=", 1L);
Zq0A4_192(Zq0A4_81);
ZfM_29(Zq0A4_172, (STRING)".methods", 8L);
ZfM_33(Zq0A4_172);
}
if (ZpmCQ_25(ORD('L'), &Zq0A4_171)) {
Z182 = 0;
Zq0A4_184(W_10->Y13, (Zq0A4_170)Z230);
ZfM_29(Zq0A4_172, (STRING)" public static void init", 24L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"(", 1L);
Zq0A4_192(Zq0A4_81);
ZfM_29(Zq0A4_172, (STRING)" yyt) {", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  for (;;) {", 12L);
ZfM_33(Zq0A4_172);
{
SHORTCARD B_7 = 0, B_8 = (Z182 - 1) / Zq0A4dgAc_0;

if (B_7 <= B_8)
for (Z181 = B_7;; Z181 += 1) {
ZfM_29(Zq0A4_172, (STRING)"   yyt.yyIsComp", 15L);
Zq0A4_195((LONGINT)Z181);
ZfM_29(Zq0A4_172, (STRING)" = 0;", 5L);
ZfM_33(Zq0A4_172);
if (ZpmCQ_25(ORD('5'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)"   yyt.yyIsDone", 15L);
Zq0A4_195((LONGINT)Z181);
ZfM_29(Zq0A4_172, (STRING)" = 0;", 5L);
ZfM_33(Zq0A4_172);
}
if (Z181 >= B_8) break;
}
}
ZfM_29(Zq0A4_172, (STRING)"   switch (yyt.yyKind ()) {", 27L);
ZfM_33(Zq0A4_172);
Zq0A4_184(W_10->Y13, (Zq0A4_170)Z243);
ZfM_29(Zq0A4_172, (STRING)"   default: return;", 19L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   }", 4L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  }", 3L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" }", 2L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
}
ZfM_33(Zq0A4_172);
Z186 = FALSE;
if (!ZqnGVQ_4(&W_10->Y6->U_1.V_17.Y16.Y5)) {
Z186 = TRUE;
}
Z179 = W_10->Y14;
while (Z179->U_1.V_1.Y0 == Zq0A4_144) {
if (!ZqnGVQ_4(&Z179->U_1.V_49.Y48.Y6->U_1.V_17.Y16.Y5)) {
Z186 = TRUE;
}
Z179 = Z179->U_1.V_49.Y48.Y12;
}
if (Z186) {
ZfM_29(Zq0A4_172, (STRING)"   public static void begin () {", 32L);
ZfM_33(Zq0A4_172);
Zq0A4dgAd_1(W_10->Y6->U_1.V_17.Y16.Y11);
ZqnGVQ_5(Zq0A4_172, W_10->Y6->U_1.V_17.Y16.Y5);
Z179 = W_10->Y14;
while (Z179->U_1.V_1.Y0 == Zq0A4_144) {
Zq0A4dgAd_1(Z179->U_1.V_49.Y48.Y6->U_1.V_17.Y16.Y11);
ZqnGVQ_5(Zq0A4_172, Z179->U_1.V_49.Y48.Y6->U_1.V_17.Y16.Y5);
Z179 = Z179->U_1.V_49.Y48.Y12;
}
ZfM_29(Zq0A4_172, (STRING)"   }", 4L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
}
Z187 = FALSE;
if (!ZqnGVQ_4(&W_10->Y6->U_1.V_17.Y16.Y6)) {
Z187 = TRUE;
}
Z179 = W_10->Y14;
while (Z179->U_1.V_1.Y0 == Zq0A4_144) {
if (!ZqnGVQ_4(&Z179->U_1.V_49.Y48.Y6->U_1.V_17.Y16.Y6)) {
Z187 = TRUE;
}
Z179 = Z179->U_1.V_49.Y48.Y12;
}
if (Z187) {
ZfM_29(Zq0A4_172, (STRING)"   public static void close () {", 32L);
ZfM_33(Zq0A4_172);
Zq0A4dgAd_1(W_10->Y6->U_1.V_17.Y16.Y12);
ZqnGVQ_5(Zq0A4_172, W_10->Y6->U_1.V_17.Y16.Y6);
Z179 = W_10->Y14;
while (Z179->U_1.V_1.Y0 == Zq0A4_144) {
Zq0A4dgAd_1(Z179->U_1.V_49.Y48.Y6->U_1.V_17.Y16.Y12);
ZqnGVQ_5(Zq0A4_172, Z179->U_1.V_49.Y48.Y6->U_1.V_17.Y16.Y6);
Z179 = Z179->U_1.V_49.Y48.Y12;
}
ZfM_29(Zq0A4_172, (STRING)"   }", 4L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
}
if (Z186) {
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

static void Z206
# ifdef HAVE_ARGS
(Zq0A4_153 Z197)
# else
(Z197)
Zq0A4_153 Z197;
# endif
{
struct S_23 Z198;

if (Z197 == Zq0A4_97) {
return;
}
if (Z197 != NIL && Z197->U_1.V_1.Y0 == Zq0A4_100) {
for (;;) {
{
register Zq0A4_226 *W_11 = &Z197->U_1.V_5.Y4;

if (!((Zq0A4_177 & W_11->Y2) == 0X0L)) {
goto EXIT_9;
}
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      public ", 13L);
Zq0A4_192(W_11->Y1);
ZfM_29(Zq0A4_172, (STRING)" () {", 5L);
ZfM_33(Zq0A4_172);
Z178 = W_11->Y1;
Zq0A4_185(Z197, (Zq0A4_170)Z206);
ZfM_29(Zq0A4_172, (STRING)"      }", 7L);
ZfM_33(Zq0A4_172);
return;
}
} EXIT_9:;
}
if (Z197 != NIL && Z197->U_1.V_1.Y0 == Zq0A4_105) {
{
register Zq0A4_231 *W_12 = &Z197->U_1.V_10.Y9;

ZfM_29(Zq0A4_172, (STRING)"         this.", 14L);
Zq0A4_192(W_12->Y3);
ZfM_29(Zq0A4_172, (STRING)" = null;", 8L);
ZfM_33(Zq0A4_172);
return;
}
}
if (Z197 != NIL && Z197->U_1.V_1.Y0 == Zq0A4_106) {
for (;;) {
{
register Zq0A4_232 *W_13 = &Z197->U_1.V_11.Y10;

if (!((Zq0A4_176 & W_13->Y6) == 0X0L)) {
goto EXIT_10;
}
ZfM_29(Zq0A4_172, (STRING)"         begin", 14L);
Zq0A4_192(W_13->Y5);
ZfM_29(Zq0A4_172, (STRING)" (this.", 7L);
Zq0A4_192(W_13->Y3);
ZfM_29(Zq0A4_172, (STRING)")", 1L);
ZfM_33(Zq0A4_172);
return;
}
} EXIT_10:;
}
}

static void Z249
# ifdef HAVE_ARGS
(Zq0A4_153 Z197)
# else
(Z197)
Zq0A4_153 Z197;
# endif
{
struct S_22 Z198;

if (Z197 == Zq0A4_97) {
return;
}
if (Z197 != NIL && Z197->U_1.V_1.Y0 == Zq0A4_106) {
for (;;) {
{
register Zq0A4_232 *W_14 = &Z197->U_1.V_11.Y10;

if (!(IN(Zq0A4_8, W_14->Y6) && W_14->Y7 == Zp1PEAFi_0)) {
goto EXIT_11;
}
Z184 = TRUE;
return;
}
} EXIT_11:;
}
if (Z197 != NIL && Z197->U_1.V_1.Y0 == Zq0A4_105) {
for (;;) {
{
register Zq0A4_231 *W_15 = &Z197->U_1.V_10.Y9;

if (!(IN(Zq0A4_8, W_15->Y6) && W_15->Y7 == Zp1PEAFi_0)) {
goto EXIT_12;
}
Z184 = TRUE;
return;
}
} EXIT_12:;
}
}

static BOOLEAN Z250
# ifdef HAVE_ARGS
(Zq0A4_153 Z197)
# else
(Z197)
Zq0A4_153 Z197;
# endif
{
struct S_21 Z198;

if (Z197 == Zq0A4_97) {
return FALSE;
}
if (Z197 != NIL && Z197->U_1.V_1.Y0 == Zq0A4_100) {
for (;;) {
{
register Zq0A4_226 *W_16 = &Z197->U_1.V_5.Y4;

Z184 = FALSE;
Zq0A4_185(Z197, (Zq0A4_170)Z249);
if (!Z184) {
goto EXIT_13;
}
return TRUE;
}
} EXIT_13:;
}
return FALSE;
}

static void Z207
# ifdef HAVE_ARGS
(Zq0A4_153 Z197)
# else
(Z197)
Zq0A4_153 Z197;
# endif
{
struct S_20 Z198;

if (Z197 == Zq0A4_97) {
return;
}
if (Z197 != NIL && Z197->U_1.V_1.Y0 == Zq0A4_100) {
for (;;) {
{
register Zq0A4_226 *W_17 = &Z197->U_1.V_5.Y4;

if (!((Zq0A4_177 & W_17->Y2) == 0X0L && Z250(Z197))) {
goto EXIT_14;
}
Z209(Z197);
if (((SET_ELEM (Zq0A4_44) | SET_ELEM (Zq0A4_45)) & W_17->Y2) != 0X0L) {
Zq0A4_185(Z197, (Zq0A4_170)Z207);
}
ZfM_29(Zq0A4_172, (STRING)"      }", 7L);
ZfM_33(Zq0A4_172);
return;
}
} EXIT_14:;
}
if (Z197 != NIL && Z197->U_1.V_1.Y0 == Zq0A4_105) {
{
register Zq0A4_231 *W_18 = &Z197->U_1.V_10.Y9;

if (IN(Zq0A4_8, W_18->Y6)) {
ZfM_29(Zq0A4_172, (STRING)"         this.", 14L);
Zq0A4_192(W_18->Y3);
ZfM_29(Zq0A4_172, (STRING)" =", 2L);
if (W_18->Y7 == Zp1PEAFi_0) {
ZfM_29(Zq0A4_172, (STRING)" ", 1L);
Zq0A4_192(W_18->Y3);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
} else {
Zp1PEAFi_6(Zq0A4_172, W_18->Y7);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
}
} else {
ZfM_29(Zq0A4_172, (STRING)"         this.", 14L);
Zq0A4_192(W_18->Y3);
ZfM_29(Zq0A4_172, (STRING)" = null;", 8L);
ZfM_33(Zq0A4_172);
}
return;
}
}
if (Z197 != NIL && Z197->U_1.V_1.Y0 == Zq0A4_106) {
for (;;) {
{
register Zq0A4_232 *W_19 = &Z197->U_1.V_11.Y10;

if (!((Zq0A4_176 & W_19->Y6) == 0X0L)) {
goto EXIT_15;
}
if (IN(Zq0A4_8, W_19->Y6)) {
ZfM_29(Zq0A4_172, (STRING)"         this.", 14L);
Zq0A4_192(W_19->Y3);
ZfM_29(Zq0A4_172, (STRING)" =", 2L);
if (W_19->Y7 == Zp1PEAFi_0) {
ZfM_29(Zq0A4_172, (STRING)" ", 1L);
Zq0A4_192(W_19->Y3);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
} else {
Zp1PEAFi_6(Zq0A4_172, W_19->Y7);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
}
} else {
ZfM_29(Zq0A4_172, (STRING)"         begin", 14L);
Zq0A4_192(W_19->Y5);
ZfM_29(Zq0A4_172, (STRING)" (this.", 7L);
Zq0A4_192(W_19->Y3);
ZfM_29(Zq0A4_172, (STRING)")", 1L);
ZfM_33(Zq0A4_172);
}
return;
}
} EXIT_15:;
}
}

static void Z234
# ifdef HAVE_ARGS
(Zq0A4_153 Z197)
# else
(Z197)
Zq0A4_153 Z197;
# endif
{
struct S_19 Z198;

if (Z197 == Zq0A4_97) {
return;
}
if (Z197 != NIL && Z197->U_1.V_1.Y0 == Zq0A4_100) {
for (;;) {
{
register Zq0A4_226 *W_20 = &Z197->U_1.V_5.Y4;

if (!((Zq0A4_177 & W_20->Y2) == 0X0L && IN(Zq0A4_44, W_20->Y2))) {
goto EXIT_16;
}
ZfM_29(Zq0A4_172, (STRING)"+", 1L);
Zq0A4_192(W_20->Y1);
ZfM_29(Zq0A4_172, (STRING)".methods", 8L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      void yyTraverseTD () {", 28L);
ZfM_33(Zq0A4_172);
Zq0A4dgAd_6(Z197);
Z178 = W_20->Y1;
Zq0A4_185(Z197, (Zq0A4_170)Z234);
ZfM_29(Zq0A4_172, (STRING)"      }", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"=", 1L);
Zq0A4_192(W_20->Y1);
ZfM_29(Zq0A4_172, (STRING)".methods", 8L);
ZfM_33(Zq0A4_172);
return;
}
} EXIT_16:;
}
if (Z197 != NIL && Z197->U_1.V_1.Y0 == Zq0A4_105) {
for (;;) {
{
register Zq0A4_231 *W_21 = &Z197->U_1.V_10.Y9;

if (!(Z197 != Zq0A4dgAd_0)) {
goto EXIT_17;
}
ZfM_29(Zq0A4_172, (STRING)"         ", 9L);
Zq0A4_192(Zq0A4_85);
ZfM_29(Zq0A4_172, (STRING)".yyTraverseTD (", 15L);
Zq0A4_192(W_21->Y3);
ZfM_29(Zq0A4_172, (STRING)");", 2L);
ZfM_33(Zq0A4_172);
return;
}
} EXIT_17:;
}
}

static void Z235
# ifdef HAVE_ARGS
(Zq0A4_153 Z197)
# else
(Z197)
Zq0A4_153 Z197;
# endif
{
struct S_18 Z198;

if (Z197 == Zq0A4_97) {
return;
}
if (Z197 != NIL && Z197->U_1.V_1.Y0 == Zq0A4_100) {
for (;;) {
{
register Zq0A4_226 *W_22 = &Z197->U_1.V_5.Y4;

if (!((Zq0A4_177 & W_22->Y2) == 0X0L && IN(Zq0A4_44, W_22->Y2))) {
goto EXIT_18;
}
ZfM_29(Zq0A4_172, (STRING)"               case k", 21L);
Zq0A4_192(W_22->Y1);
ZfM_29(Zq0A4_172, (STRING)":", 1L);
ZfM_33(Zq0A4_172);
Zq0A4dgAd_6(Z197);
Z178 = W_22->Y1;
ZfM_29(Zq0A4_172, (STRING)"                  yyStackPtr ++; yyStack [yyStackPtr] = ((", 58L);
Zq0A4_192(Z178);
ZfM_29(Zq0A4_172, (STRING)") yyt).", 7L);
Zq0A4_192(Zq0A4dgAd_0->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
Zq0A4_185(Z197, (Zq0A4_170)Z235);
ZfM_29(Zq0A4_172, (STRING)"                  break;", 24L);
ZfM_33(Zq0A4_172);
return;
}
} EXIT_18:;
}
if (Z197 != NIL && Z197->U_1.V_1.Y0 == Zq0A4_105) {
for (;;) {
{
register Zq0A4_231 *W_23 = &Z197->U_1.V_10.Y9;

if (!(Z197 != Zq0A4dgAd_0)) {
goto EXIT_19;
}
ZfM_29(Zq0A4_172, (STRING)"                  yyStackPtr ++; yyStack [yyStackPtr] = ((", 58L);
Zq0A4_192(Z178);
ZfM_29(Zq0A4_172, (STRING)") yyt).", 7L);
Zq0A4_192(W_23->Y3);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
return;
}
} EXIT_19:;
}
}

static void Z232
# ifdef HAVE_ARGS
(Zq0A4_153 Z197)
# else
(Z197)
Zq0A4_153 Z197;
# endif
{
struct S_17 Z198;

if (Z197 == Zq0A4_97) {
return;
}
if (Z197 != NIL && Z197->U_1.V_1.Y0 == Zq0A4_100) {
for (;;) {
{
register Zq0A4_226 *W_24 = &Z197->U_1.V_5.Y4;

if (!((Zq0A4_177 & W_24->Y2) == 0X0L)) {
goto EXIT_20;
}
Z178 = W_24->Y1;
Zq0A4_185(Z197, (Zq0A4_170)Z232);
return;
}
} EXIT_20:;
}
if (Z197 != NIL && Z197->U_1.V_1.Y0 == Zq0A4_105) {
for (;;) {
{
register Zq0A4_231 *W_25 = &Z197->U_1.V_10.Y9;

if (!IN(Zq0A4_3, W_25->Y6)) {
goto EXIT_21;
}
ZfM_29(Zq0A4_172, (STRING)"+", 1L);
Zq0A4_192(Z178);
ZfM_29(Zq0A4_172, (STRING)".methods", 8L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      ", 6L);
Zq0A4_192(Zq0A4_81);
ZfM_29(Zq0A4_172, (STRING)" yySwapNext (", 13L);
Zq0A4_192(Zq0A4_81);
ZfM_29(Zq0A4_172, (STRING)" yyt) {", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"         ", 9L);
Zq0A4_192(Zq0A4_81);
ZfM_29(Zq0A4_172, (STRING)" yyNext = ", 10L);
Zq0A4_192(W_25->Y3);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"         ", 9L);
Zq0A4_192(W_25->Y3);
ZfM_29(Zq0A4_172, (STRING)" = (", 4L);
Zq0A4_192(W_25->Y4);
ZfM_29(Zq0A4_172, (STRING)") yyt;", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"         return yyNext;", 23L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      }", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"=", 1L);
Zq0A4_192(Z178);
ZfM_29(Zq0A4_172, (STRING)".methods", 8L);
ZfM_33(Zq0A4_172);
return;
}
} EXIT_21:;
}
}

static void Z236
# ifdef HAVE_ARGS
(Zq0A4_153 Z197)
# else
(Z197)
Zq0A4_153 Z197;
# endif
{
struct S_16 Z198;

if (Z197 == Zq0A4_97) {
return;
}
if (Z197 != NIL && Z197->U_1.V_1.Y0 == Zq0A4_100) {
for (;;) {
{
register Zq0A4_226 *W_26 = &Z197->U_1.V_5.Y4;

if (!((Zq0A4_177 & W_26->Y2) == 0X0L)) {
goto EXIT_22;
}
Z178 = W_26->Y1;
Zq0A4_185(Z197, (Zq0A4_170)Z236);
return;
}
} EXIT_22:;
}
if (Z197 != NIL && Z197->U_1.V_1.Y0 == Zq0A4_105) {
for (;;) {
{
register Zq0A4_231 *W_27 = &Z197->U_1.V_10.Y9;

if (!IN(Zq0A4_3, W_27->Y6)) {
goto EXIT_23;
}
ZfM_29(Zq0A4_172, (STRING)"+", 1L);
Zq0A4_192(Z178);
ZfM_29(Zq0A4_172, (STRING)".methods", 8L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      public ", 13L);
Zq0A4_192(Zq0A4_81);
ZfM_29(Zq0A4_172, (STRING)" yyGetNext () {", 15L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"         return ", 16L);
Zq0A4_192(W_27->Y3);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      }", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"=", 1L);
Zq0A4_192(Z178);
ZfM_29(Zq0A4_172, (STRING)".methods", 8L);
ZfM_33(Zq0A4_172);
return;
}
} EXIT_23:;
}
}

static void Z237
# ifdef HAVE_ARGS
(Zq0A4_153 Z197)
# else
(Z197)
Zq0A4_153 Z197;
# endif
{
struct S_15 Z198;

if (Z197 == Zq0A4_97) {
return;
}
if (Z197 != NIL && Z197->U_1.V_1.Y0 == Zq0A4_100) {
for (;;) {
{
register Zq0A4_226 *W_28 = &Z197->U_1.V_5.Y4;

if (!((Zq0A4_177 & W_28->Y2) == 0X0L)) {
goto EXIT_24;
}
Zq0A4dgAd_6(Z197);
Z178 = W_28->Y1;
ZfM_29(Zq0A4_172, (STRING)"+", 1L);
Zq0A4_192(W_28->Y1);
ZfM_29(Zq0A4_172, (STRING)".methods", 8L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      ", 6L);
Zq0A4_192(Zq0A4_81);
ZfM_29(Zq0A4_172, (STRING)" yyCopy () {", 12L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"         ", 9L);
Zq0A4_192(W_28->Y1);
ZfM_29(Zq0A4_172, (STRING)" copy;", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"         if (yyMark == 0) return this.yyMapOldToNew ();", 55L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"         copy = new ", 20L);
Zq0A4_192(W_28->Y1);
ZfM_29(Zq0A4_172, (STRING)" ();", 4L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"         copyNodeHead (this, copy)", 34L);
ZfM_33(Zq0A4_172);
Zq0A4_185(Z197, (Zq0A4_170)Z237);
ZfM_29(Zq0A4_172, (STRING)"         return copy;", 21L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      }", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"=", 1L);
Zq0A4_192(W_28->Y1);
ZfM_29(Zq0A4_172, (STRING)".methods", 8L);
ZfM_33(Zq0A4_172);
return;
}
} EXIT_24:;
}
if (Z197 != NIL && Z197->U_1.V_1.Y0 == Zq0A4_105) {
for (;;) {
{
register Zq0A4_231 *W_29 = &Z197->U_1.V_10.Y9;

if (!(Z197 != Zq0A4dgAd_0)) {
goto EXIT_25;
}
ZfM_29(Zq0A4_172, (STRING)"         copy.", 14L);
Zq0A4_192(W_29->Y3);
ZfM_29(Zq0A4_172, (STRING)" = (", 4L);
Zq0A4_192(W_29->Y4);
ZfM_29(Zq0A4_172, (STRING)") ", 2L);
Zq0A4_192(Zq0A4_85);
ZfM_29(Zq0A4_172, (STRING)".yyCopyAll (", 12L);
Zq0A4_192(W_29->Y3);
ZfM_29(Zq0A4_172, (STRING)");", 2L);
ZfM_33(Zq0A4_172);
return;
}
} EXIT_25:;
}
if (Z197 != NIL && Z197->U_1.V_1.Y0 == Zq0A4_106) {
for (;;) {
{
register Zq0A4_232 *W_30 = &Z197->U_1.V_11.Y10;

if (!((Zq0A4_176 & W_30->Y6) == 0X0L)) {
goto EXIT_26;
}
ZfM_29(Zq0A4_172, (STRING)"         copy", 13L);
Zq0A4_192(W_30->Y5);
ZfM_29(Zq0A4_172, (STRING)" (copy.", 7L);
Zq0A4_192(W_30->Y3);
ZfM_29(Zq0A4_172, (STRING)", ", 2L);
Zq0A4_192(W_30->Y3);
ZfM_29(Zq0A4_172, (STRING)")", 1L);
ZfM_33(Zq0A4_172);
return;
}
} EXIT_26:;
}
}

static void Z238
# ifdef HAVE_ARGS
(Zq0A4_153 Z197)
# else
(Z197)
Zq0A4_153 Z197;
# endif
{
struct S_14 Z198;

if (Z197 == Zq0A4_97) {
return;
}
if (Z197 != NIL && Z197->U_1.V_1.Y0 == Zq0A4_100) {
for (;;) {
{
register Zq0A4_226 *W_31 = &Z197->U_1.V_5.Y4;

if (!((Zq0A4_177 & W_31->Y2) == 0X0L)) {
goto EXIT_27;
}
Zq0A4dgAd_6(Z197);
Z178 = W_31->Y1;
ZfM_29(Zq0A4_172, (STRING)"+", 1L);
Zq0A4_192(W_31->Y1);
ZfM_29(Zq0A4_172, (STRING)".methods", 8L);
ZfM_33(Zq0A4_172);
if (Zq0A4dgAd_0 != Zq0A4_97) {
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      ", 6L);
Zq0A4_192(Zq0A4_81);
ZfM_29(Zq0A4_172, (STRING)" yyGetIterator () {", 19L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"         return ", 16L);
Zq0A4_192(Zq0A4dgAd_0->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      }", 7L);
ZfM_33(Zq0A4_172);
}
ZfM_29(Zq0A4_172, (STRING)"=", 1L);
Zq0A4_192(W_31->Y1);
ZfM_29(Zq0A4_172, (STRING)".methods", 8L);
ZfM_33(Zq0A4_172);
return;
}
} EXIT_27:;
}
}

static void Z239
# ifdef HAVE_ARGS
(Zq0A4_153 Z197)
# else
(Z197)
Zq0A4_153 Z197;
# endif
{
struct S_13 Z198;

if (Z197 == Zq0A4_97) {
return;
}
if (Z197 != NIL && Z197->U_1.V_1.Y0 == Zq0A4_100) {
for (;;) {
{
register Zq0A4_226 *W_32 = &Z197->U_1.V_5.Y4;

if (!((Zq0A4_177 & W_32->Y2) == 0X0L)) {
goto EXIT_28;
}
Zq0A4dgAd_6(Z197);
Z178 = W_32->Y1;
ZfM_29(Zq0A4_172, (STRING)"+", 1L);
Zq0A4_192(W_32->Y1);
ZfM_29(Zq0A4_172, (STRING)".methods", 8L);
ZfM_33(Zq0A4_172);
if (Zq0A4dgAd_0 != Zq0A4_97) {
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      boolean yyHasIterator () { return true; }", 47L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      void yySetIterator (", 26L);
Zq0A4_192(Zq0A4_81);
ZfM_29(Zq0A4_172, (STRING)" yyt) {", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"         ", 9L);
Zq0A4_192(Zq0A4dgAd_0->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)" = (", 4L);
Zq0A4_192(Zq0A4dgAd_0->U_1.V_10.Y9.Y4);
ZfM_29(Zq0A4_172, (STRING)") yyt;", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      }", 7L);
ZfM_33(Zq0A4_172);
}
ZfM_29(Zq0A4_172, (STRING)"=", 1L);
Zq0A4_192(W_32->Y1);
ZfM_29(Zq0A4_172, (STRING)".methods", 8L);
ZfM_33(Zq0A4_172);
return;
}
} EXIT_28:;
}
}

static void Z240
# ifdef HAVE_ARGS
(Zq0A4_153 Z197)
# else
(Z197)
Zq0A4_153 Z197;
# endif
{
struct S_12 Z198;

if (Z197 == Zq0A4_97) {
return;
}
if (Z197 != NIL && Z197->U_1.V_1.Y0 == Zq0A4_100) {
for (;;) {
{
register Zq0A4_226 *W_33 = &Z197->U_1.V_5.Y4;

if (!((Zq0A4_177 & W_33->Y2) == 0X0L && IN(Zq0A4_44, W_33->Y2))) {
goto EXIT_29;
}
Zq0A4dgAd_6(Z197);
Z178 = W_33->Y1;
ZfM_29(Zq0A4_172, (STRING)"+", 1L);
Zq0A4_192(W_33->Y1);
ZfM_29(Zq0A4_172, (STRING)".methods", 8L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      ", 6L);
Zq0A4_192(Zq0A4_81);
ZfM_29(Zq0A4_172, (STRING)" yyCheck () throws java.io.IOException {", 40L);
ZfM_33(Zq0A4_172);
Zq0A4_185(Z197, (Zq0A4_170)Z240);
ZfM_29(Zq0A4_172, (STRING)"         this.yyCheckChild2 (", 29L);
Zq0A4_192(Zq0A4dgAd_0->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)", \"", 3L);
Zq0A4_192(Zq0A4dgAd_0->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)"\");", 3L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"         return ", 16L);
Zq0A4_192(Zq0A4dgAd_0->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      }", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"=", 1L);
Zq0A4_192(W_33->Y1);
ZfM_29(Zq0A4_172, (STRING)".methods", 8L);
ZfM_33(Zq0A4_172);
return;
}
} EXIT_29:;
}
if (Z197 != NIL && Z197->U_1.V_1.Y0 == Zq0A4_105) {
for (;;) {
{
register Zq0A4_231 *W_34 = &Z197->U_1.V_10.Y9;

if (!(Z197 != Zq0A4dgAd_0)) {
goto EXIT_30;
}
ZfM_29(Zq0A4_172, (STRING)"         this.yyCheckChild (", 28L);
Zq0A4_192(W_34->Y3);
ZfM_29(Zq0A4_172, (STRING)", \"", 3L);
Zq0A4_192(W_34->Y3);
ZfM_29(Zq0A4_172, (STRING)"\");", 3L);
ZfM_33(Zq0A4_172);
return;
}
} EXIT_30:;
}
}

static void Z229
# ifdef HAVE_ARGS
(Zq0A4_153 Z197)
# else
(Z197)
Zq0A4_153 Z197;
# endif
{
struct S_11 Z198;

if (Z197 == Zq0A4_97) {
return;
}
if (Z197 != NIL && Z197->U_1.V_1.Y0 == Zq0A4_100) {
for (;;) {
{
register Zq0A4_226 *W_35 = &Z197->U_1.V_5.Y4;

if (!!IN(Zq0A4_48, W_35->Y2)) {
goto EXIT_31;
}
if (!!IN(Zq0A4_17, W_35->Y2)) {
goto EXIT_31;
}
ZfM_29(Zq0A4_172, (STRING)"+", 1L);
Zq0A4_192(W_35->Y1);
ZfM_29(Zq0A4_172, (STRING)".methods", 8L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      public int yyKind () { return k", 37L);
Zq0A4_192(W_35->Y1);
ZfM_29(Zq0A4_172, (STRING)"; }", 3L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"=", 1L);
Zq0A4_192(W_35->Y1);
ZfM_29(Zq0A4_172, (STRING)".methods", 8L);
ZfM_33(Zq0A4_172);
return;
}
} EXIT_31:;
}
}

static void Z233
# ifdef HAVE_ARGS
(Zq0A4_153 Z197)
# else
(Z197)
Zq0A4_153 Z197;
# endif
{
struct S_10 Z198;

if (Z197 == Zq0A4_97) {
return;
}
if (Z197 != NIL && Z197->U_1.V_1.Y0 == Zq0A4_100) {
for (;;) {
{
register Zq0A4_226 *W_36 = &Z197->U_1.V_5.Y4;

if (!!IN(Zq0A4_48, W_36->Y2)) {
goto EXIT_32;
}
if (!IN(Zq0A4_17, W_36->Y2)) {
Z177 = W_36->Y1;
Zq0A4_184(W_36->Y4, (Zq0A4_170)Z252);
ZfM_29(Zq0A4_172, (STRING)"      k", 7L);
Zq0A4_192(Z177);
ZfM_29(Zq0A4_172, (STRING)",", 1L);
ZfM_33(Zq0A4_172);
} else {
ZfM_29(Zq0A4_172, (STRING)"      0,", 8L);
ZfM_33(Zq0A4_172);
}
return;
}
} EXIT_32:;
}
}

static void Z252
# ifdef HAVE_ARGS
(Zq0A4_153 Z197)
# else
(Z197)
Zq0A4_153 Z197;
# endif
{
struct S_9 Z198;

if (Z197 == Zq0A4_97) {
return;
}
if (Z197 != NIL && Z197->U_1.V_1.Y0 == Zq0A4_100) {
for (;;) {
{
register Zq0A4_226 *W_37 = &Z197->U_1.V_5.Y4;

if (!((Zq0A4_177 & W_37->Y2) == 0X0L)) {
goto EXIT_33;
}
Z177 = W_37->Y1;
return;
}
} EXIT_33:;
}
}

static void Z241
# ifdef HAVE_ARGS
(Zq0A4_153 Z253)
# else
(Z253)
Zq0A4_153 Z253;
# endif
{
struct S_8 Z198;

if (Z253 == Zq0A4_97) {
return;
}
if (Z253 != NIL && Z253->U_1.V_1.Y0 == Zq0A4_100) {
for (;;) {
{
register Zq0A4_226 *W_38 = &Z253->U_1.V_5.Y4;

if (!((Zq0A4_177 & W_38->Y2) == 0X0L)) {
goto EXIT_34;
}
if (!(IN(Zq0A4_44, W_38->Y2) || Z254(Z253))) {
goto EXIT_34;
}
Z183 = TRUE;
ZfM_29(Zq0A4_172, (STRING)"                     case k", 27L);
Zq0A4_192(W_38->Y1);
ZfM_29(Zq0A4_172, (STRING)":", 1L);
ZfM_33(Zq0A4_172);
Z178 = W_38->Y1;
Zq0A4_185(Z253, (Zq0A4_170)Z241);
ZfM_29(Zq0A4_172, (STRING)"                        break;", 30L);
ZfM_33(Zq0A4_172);
return;
}
} EXIT_34:;
}
if (Z253 != NIL && Z253->U_1.V_1.Y0 == Zq0A4_105) {
{
register Zq0A4_231 *W_39 = &Z253->U_1.V_10.Y9;

ZfM_29(Zq0A4_172, (STRING)"                        ", 24L);
if (Z183) {
Z183 = FALSE;
} else {
ZfM_29(Zq0A4_172, (STRING)"else ", 5L);
}
ZfM_29(Zq0A4_172, (STRING)"if (yyyIsEqual (\"", 17L);
Zq0A4_192(W_39->Y3);
ZfM_29(Zq0A4_172, (STRING)"\")) ", 4L);
ZfM_29(Zq0A4_172, (STRING)"yyQuery (((", 11L);
Zq0A4_192(Z178);
ZfM_29(Zq0A4_172, (STRING)") yyt).", 7L);
Zq0A4_192(W_39->Y3);
ZfM_29(Zq0A4_172, (STRING)");", 2L);
ZfM_33(Zq0A4_172);
return;
}
}
if (Z253 != NIL && Z253->U_1.V_1.Y0 == Zq0A4_106) {
for (;;) {
{
register Zq0A4_232 *W_40 = &Z253->U_1.V_11.Y10;

if (!ZpmCQ_25((LONGCARD)W_40->Y5, &Zq0A4_93)) {
goto EXIT_35;
}
ZfM_29(Zq0A4_172, (STRING)"                        ", 24L);
if (Z183) {
Z183 = FALSE;
} else {
ZfM_29(Zq0A4_172, (STRING)"else ", 5L);
}
ZfM_29(Zq0A4_172, (STRING)"if (yyyIsEqual (\"", 17L);
Zq0A4_192(W_40->Y3);
ZfM_29(Zq0A4_172, (STRING)"\")) ", 4L);
ZfM_29(Zq0A4_172, (STRING)"yyQuery (((", 11L);
Zq0A4_192(Z178);
ZfM_29(Zq0A4_172, (STRING)") yyt).", 7L);
Zq0A4_192(W_40->Y3);
ZfM_29(Zq0A4_172, (STRING)");", 2L);
ZfM_33(Zq0A4_172);
return;
}
} EXIT_35:;
}
}

static void Z242
# ifdef HAVE_ARGS
(Zq0A4_153 Z197)
# else
(Z197)
Zq0A4_153 Z197;
# endif
{
struct S_7 Z198;

if (Z197 == Zq0A4_97) {
return;
}
if (Z197 != NIL && Z197->U_1.V_1.Y0 == Zq0A4_100) {
for (;;) {
{
register Zq0A4_226 *W_41 = &Z197->U_1.V_5.Y4;

if (!((Zq0A4_177 & W_41->Y2) == 0X0L && ((SET_ELEM (Zq0A4_44) | SET_ELEM (Zq0A4_45)) & W_41->Y2) != 0X0L)) {
goto EXIT_36;
}
ZfM_29(Zq0A4_172, (STRING)"+", 1L);
Zq0A4_192(W_41->Y1);
ZfM_29(Zq0A4_172, (STRING)".methods", 8L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      void yyEqual (", 20L);
Zq0A4_192(Zq0A4_81);
ZfM_29(Zq0A4_172, (STRING)" yyOther) {", 11L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"         ", 9L);
Zq0A4_192(W_41->Y1);
ZfM_29(Zq0A4_172, (STRING)" yyt2 = (", 9L);
Zq0A4_192(W_41->Y1);
ZfM_29(Zq0A4_172, (STRING)") yyOther;", 10L);
ZfM_33(Zq0A4_172);
Zq0A4dgAd_6(Z197);
Z178 = W_41->Y1;
Zq0A4_185(Z197, (Zq0A4_170)Z242);
ZfM_29(Zq0A4_172, (STRING)"         yyResult &= equalNodeHead (a, yyt2);", 45L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      }", 7L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"=", 1L);
Zq0A4_192(W_41->Y1);
ZfM_29(Zq0A4_172, (STRING)".methods", 8L);
ZfM_33(Zq0A4_172);
return;
}
} EXIT_36:;
}
if (Z197 != NIL && Z197->U_1.V_1.Y0 == Zq0A4_105) {
for (;;) {
{
register Zq0A4_231 *W_42 = &Z197->U_1.V_10.Y9;

if (!(Z197 != Zq0A4dgAd_0)) {
goto EXIT_37;
}
ZfM_29(Zq0A4_172, (STRING)"         ", 9L);
Zq0A4_192(Zq0A4_85);
ZfM_29(Zq0A4_172, (STRING)".yyIsEqual", 10L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)" (", 2L);
Zq0A4_192(W_42->Y3);
ZfM_29(Zq0A4_172, (STRING)", yyt2.", 7L);
Zq0A4_192(W_42->Y3);
ZfM_29(Zq0A4_172, (STRING)");", 2L);
ZfM_33(Zq0A4_172);
return;
}
} EXIT_37:;
}
if (Z197 != NIL && Z197->U_1.V_1.Y0 == Zq0A4_106) {
for (;;) {
{
register Zq0A4_232 *W_43 = &Z197->U_1.V_11.Y10;

if (!((Zq0A4_176 & W_43->Y6) == 0X0L)) {
goto EXIT_38;
}
ZfM_29(Zq0A4_172, (STRING)"         yyResult &= (equal", 27L);
Zq0A4_192(W_43->Y5);
ZfM_29(Zq0A4_172, (STRING)"(", 1L);
Zq0A4_192(W_43->Y3);
ZfM_29(Zq0A4_172, (STRING)", yyt2.", 7L);
Zq0A4_192(W_43->Y3);
ZfM_29(Zq0A4_172, (STRING)"));", 3L);
ZfM_33(Zq0A4_172);
return;
}
} EXIT_38:;
}
}

static void Z243
# ifdef HAVE_ARGS
(Zq0A4_153 Z255)
# else
(Z255)
Zq0A4_153 Z255;
# endif
{
struct S_6 Z198;

if (Z255 == Zq0A4_97) {
return;
}
if (Z255 != NIL && Z255->U_1.V_1.Y0 == Zq0A4_100) {
for (;;) {
{
register Zq0A4_226 *W_44 = &Z255->U_1.V_5.Y4;

if (!((Zq0A4_177 & W_44->Y2) == 0X0L && IN(Zq0A4_44, W_44->Y2))) {
goto EXIT_39;
}
if (!Z256(Z255)) {
goto EXIT_39;
}
ZfM_29(Zq0A4_172, (STRING)"   case ", 8L);
Zq0A4_192(W_44->Y1);
ZfM_29(Zq0A4_172, (STRING)":", 1L);
ZfM_33(Zq0A4_172);
Zq0A4dgAd_6(Z255);
Z178 = W_44->Y1;
Z180 = W_44->Y25;
Zq0A4_185(Z255, (Zq0A4_170)Z243);
if (!IN(Zq0A4_8, Zq0A4dgAd_0->U_1.V_10.Y9.Y6)) {
ZfM_29(Zq0A4_172, (STRING)"    return;", 11L);
ZfM_33(Zq0A4_172);
} else {
ZfM_29(Zq0A4_172, (STRING)"    yyt = ((", 12L);
Zq0A4_192(Z178);
ZfM_29(Zq0A4_172, (STRING)") yyt).", 7L);
Zq0A4_192(Zq0A4dgAd_0->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
}
return;
}
} EXIT_39:;
}
if (Z255 != NIL && Z255->U_1.V_1.Y0 == Zq0A4_105) {
for (;;) {
{
register Zq0A4_231 *W_45 = &Z255->U_1.V_10.Y9;

if (!IN(Zq0A4_8, W_45->Y6)) {
goto EXIT_40;
}
ZfM_29(Zq0A4_172, (STRING)"    yyt.yyOffset = ", 19L);
Zq0A4_195((LONGINT)(Z180 + W_45->Y15));
ZfM_29(Zq0A4_172, (STRING)"; yyt.yyParent = yyt;", 21L);
ZfM_33(Zq0A4_172);
if (!(Z255 != Zq0A4dgAd_0)) {
goto EXIT_40;
}
ZfM_29(Zq0A4_172, (STRING)"    init", 8L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"(((", 3L);
Zq0A4_192(Z178);
ZfM_29(Zq0A4_172, (STRING)") yyt).", 7L);
Zq0A4_192(W_45->Y3);
ZfM_29(Zq0A4_172, (STRING)");", 2L);
ZfM_33(Zq0A4_172);
return;
}
} EXIT_40:;
}
}

static void Z230
# ifdef HAVE_ARGS
(Zq0A4_153 Z197)
# else
(Z197)
Zq0A4_153 Z197;
# endif
{
struct S_5 Z198;

if (Z197 == Zq0A4_97) {
return;
}
if (Z197 != NIL && Z197->U_1.V_1.Y0 == Zq0A4_100) {
{
register Zq0A4_226 *W_46 = &Z197->U_1.V_5.Y4;

Z181 = 1;
Zq0A4_185(Z197, (Zq0A4_170)Z230);
Z182 = ZdaDDAD7_4((LONGINT)Z181, (LONGINT)Z182);
return;
}
}
if (Z197 != NIL && Z197->U_1.V_1.Y0 == Zq0A4_105) {
for (;;) {
{
register Zq0A4_231 *W_47 = &Z197->U_1.V_10.Y9;

if (!(((SET_ELEM (Zq0A4_8) | SET_ELEM (Zq0A4_19) | SET_ELEM (Zq0A4_27)) & W_47->Y6) == 0X0L)) {
goto EXIT_41;
}
INC(Z181);
return;
}
} EXIT_41:;
}
if (Z197 != NIL && Z197->U_1.V_1.Y0 == Zq0A4_106) {
for (;;) {
{
register Zq0A4_232 *W_48 = &Z197->U_1.V_11.Y10;

if (!(((SET_ELEM (Zq0A4_8) | SET_ELEM (Zq0A4_19) | SET_ELEM (Zq0A4_27)) & W_48->Y6) == 0X0L)) {
goto EXIT_42;
}
INC(Z181);
return;
}
} EXIT_42:;
}
}

static BOOLEAN Z254
# ifdef HAVE_ARGS
(Zq0A4_153 Z197)
# else
(Z197)
Zq0A4_153 Z197;
# endif
{
struct S_4 Z198;

if (Z197 == Zq0A4_97) {
return FALSE;
}
for (;;) {
{
register Zq0A4_226 *W_49 = &Z197->U_1.V_5.Y4;

Z184 = FALSE;
Zq0A4_185(Z197, (Zq0A4_170)Z259);
if (!Z184) {
goto EXIT_43;
}
return TRUE;
}
} EXIT_43:;
return FALSE;
}

static void Z259
# ifdef HAVE_ARGS
(Zq0A4_153 Z197)
# else
(Z197)
Zq0A4_153 Z197;
# endif
{
struct S_3 Z198;

if (Z197 == Zq0A4_97) {
return;
}
if (Z197 != NIL && Z197->U_1.V_1.Y0 == Zq0A4_106) {
for (;;) {
{
register Zq0A4_232 *W_50 = &Z197->U_1.V_11.Y10;

if (!(W_50->Y8 != Zq0A4_97)) {
goto EXIT_44;
}
Z184 = TRUE;
return;
}
} EXIT_44:;
}
}

static BOOLEAN Z256
# ifdef HAVE_ARGS
(Zq0A4_153 Z197)
# else
(Z197)
Zq0A4_153 Z197;
# endif
{
struct S_2 Z198;

if (Z197 == Zq0A4_97) {
return FALSE;
}
for (;;) {
{
register Zq0A4_226 *W_51 = &Z197->U_1.V_5.Y4;

Z184 = FALSE;
Zq0A4_185(Z197, (Zq0A4_170)Z261);
if (!Z184) {
goto EXIT_45;
}
return TRUE;
}
} EXIT_45:;
return FALSE;
}

static void Z261
# ifdef HAVE_ARGS
(Zq0A4_153 Z197)
# else
(Z197)
Zq0A4_153 Z197;
# endif
{
struct S_1 Z198;

if (Z197 == Zq0A4_97) {
return;
}
if (Z197 != NIL && Z197->U_1.V_1.Y0 == Zq0A4_105) {
for (;;) {
{
register Zq0A4_231 *W_52 = &Z197->U_1.V_10.Y9;

if (!IN(Zq0A4_8, W_52->Y6)) {
goto EXIT_46;
}
Z184 = TRUE;
return;
}
} EXIT_46:;
}
}

void Zq0A4dgAc_5
 ARGS ((void))
{
}

void Zq0A4dgAc_6
 ARGS ((void))
{
}

static void Z264
 ARGS ((void))
{
ZfM_34();
rExit(1L);
}

void BEGIN_TreeJav1 ARGS ((void))
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
BEGIN_General ();
BEGIN_IO ();
BEGIN_StringM ();
BEGIN_Idents ();
BEGIN_Texts ();
BEGIN_Sets ();
BEGIN_Semantic ();
BEGIN_TreeJav2 ();
BEGIN_Tree ();
BEGIN_Strings ();

Zq0A4dgAc_1 = ZfM_1;
Zq0A4dgAc_3 = Z264;
Zq0A4dgAc_5();
}
