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

#ifndef DEFINITION_Sets
#include "Sets.h"
#endif

#ifndef DEFINITION_Tree
#include "Tree.h"
#endif

#ifndef DEFINITION_Puma0
#include "Puma0.h"
#endif

ZfM_3 ZmzL8F_0;
BOOLEAN ZmzL8F_1;
PROC ZmzL8F_2;

static ZpmCQ_4 Z138;
static void Z139 ARGS ((Zfb3DLQ_0 Z140));
static void Z141 ARGS ((BITSET Z142));
static void Z143 ARGS ((CHAR Z144[], LONGCARD O_1));
static BOOLEAN Z147 ARGS ((BYTE Z148[], LONGCARD O_3, BYTE Z149[], LONGCARD O_2));
struct S_2 {
union {
char dummy;
} U_1;
};
struct S_1 {
union {
char dummy;
} U_1;
};
static void Z176 ARGS ((void));

static void Z139
# ifdef HAVE_ARGS
(Zfb3DLQ_0 Z140)
# else
(Z140)
Zfb3DLQ_0 Z140;
# endif
{
if (!ZpmCQ_25((LONGCARD)Z140, &Z138)) {
ZfM_29(Zq0A4_172, (STRING)"i [", 3L);
Zq0A4_195((LONGINT)Z140);
ZfM_29(Zq0A4_172, (STRING)"] = MakeIdent (\"", 16L);
Zq0A4_192(Z140);
ZfM_29(Zq0A4_172, (STRING)"\");", 3L);
ZfM_33(Zq0A4_172);
ZpmCQ_13(&Z138, (LONGCARD)Z140);
}
}

static void Z141
# ifdef HAVE_ARGS
(BITSET Z142)
# else
(Z142)
BITSET Z142;
# endif
{
ZfM_29(Zq0A4_172, (STRING)"0x", 2L);
ZfM_28(Zq0A4_172, (LONGCARD)Z142, 8L, 16L);
}

static void Z143
# ifdef HAVE_ARGS
(CHAR Z144[], LONGCARD O_1)
# else
(Z144, O_1)
CHAR Z144[];
LONGCARD O_1;
# endif
{
OPEN_ARRAY_LOCALS

ALLOC_OPEN_ARRAYS (O_1 * sizeof (CHAR), 1)
COPY_OPEN_ARRAY (Z144, O_1, CHAR)
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)"Error: module Puma0, routine ", 29L);
ZfM_29((ZDz6VQCC_4)ZfM_2, Z144, O_1);
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)" failed", 7L);
ZfM_33((ZDz6VQCC_4)ZfM_2);
(*ZmzL8F_2)();
FREE_OPEN_ARRAYS
}

static BOOLEAN Z147
# ifdef HAVE_ARGS
(BYTE Z148[], LONGCARD O_3, BYTE Z149[], LONGCARD O_2)
# else
(Z148, O_3, Z149, O_2)
BYTE Z148[];
LONGCARD O_3;
BYTE Z149[];
LONGCARD O_2;
# endif
{
INTEGER Z150;
OPEN_ARRAY_LOCALS

ALLOC_OPEN_ARRAYS (O_2 * sizeof (WORD) + O_3 * sizeof (WORD), 2)
COPY_OPEN_ARRAY (Z149, O_2, WORD)
COPY_OPEN_ARRAY (Z148, O_3, WORD)
{
LONGINT B_1 = 0, B_2 = (INTEGER)(O_3 - 1);

if (B_1 <= B_2)
for (Z150 = B_1;; Z150 += 1) {
if (Z148[Z150] != Z149[Z150]) {
FREE_OPEN_ARRAYS
return FALSE;
}
if (Z150 >= B_2) break;
}
}
FREE_OPEN_ARRAYS
return TRUE;
}

void ZmzL8F_3
# ifdef HAVE_ARGS
(Zq0A4_153 Z152)
# else
(Z152)
Zq0A4_153 Z152;
# endif
{
struct S_2 Z154;

if (Z152 == Zq0A4_97) {
return;
}
{
register Zq0A4_253 *W_1 = &Z152->U_1.V_32.Y31;

ZfM_29(Zq0A4_172, (STRING)"# define DEFINITION_Tree3", 25L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# include \"ratc.h\"", 18L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# ifndef DEFINITION_Tree", 24L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# include \"Tree.h\"", 18L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# endif", 7L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# define Tree_tTree Zq0A4_171", 29L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"extern Tree_tTree GetTree ARGS ((void));", 40L);
ZfM_33(Zq0A4_172);
return;
}
}

void ZmzL8F_4
# ifdef HAVE_ARGS
(Zq0A4_153 Z158)
# else
(Z158)
Zq0A4_153 Z158;
# endif
{
struct S_1 Z154;

for (;;) {
for (;;) {
if (Z158 == Zq0A4_97) {
return;
}
if (Z158 != NIL && Z158->U_1.V_1.Y0 == Zq0A4_127) {
{
register Zq0A4_253 *W_2 = &Z158->U_1.V_32.Y31;

ZpmCQ_5(&Z138, (LONGCARD)Zfb3DLQ_6());
ZfM_29(Zq0A4_172, (STRING)"# include \"SYSTEM_.h\"", 21L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# ifndef DEFINITION_Tree3", 25L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# include \"Tree3.h\"", 19L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# endif", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# ifndef DEFINITION_Strings", 27L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# include \"Strings.h\"", 21L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# endif", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# ifndef DEFINITION_Idents", 26L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# include \"Idents.h\"", 20L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# endif", 7L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# define Idents_tIdent	Zfb3DLQ_0", 32L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# define Idents_MakeIdent	Zfb3DLQ_2", 35L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# define Strings_tString	Zp1PEAFD_2", 35L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# define Chars		Z0", 18L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# define Length		Z1", 19L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# define Tree_Class		Zq0A4_55", 29L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# define Tree_mNoClass	Zq0A4_362", 32L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# define Tree_mClass	Zq0A4_363", 30L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# define Tree_mNoAttribute	Zq0A4_365", 36L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# define Tree_mChild	Zq0A4_367", 30L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# define Tree_mAttribute	Zq0A4_368", 34L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# define Kind		Z0", 17L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# define Class		Z4", 18L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# define Extensions		Z4", 23L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# define Next		Z5", 17L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# define BaseClass		Z6", 22L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"static void CompBaseClass", 25L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# ifdef HAVE_ARGS", 17L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" (Tree_tTree t, Tree_tTree b)", 29L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# else", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" (t, b) Tree_tTree t, b;", 24L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# endif", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"{", 1L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" if (t->U_1.V_1.Kind == Tree_Class) {", 37L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  t->U_1.V_5.Class.BaseClass = b;", 33L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  CompBaseClass (t->U_1.V_5.Class.Next, b);", 43L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  CompBaseClass (t->U_1.V_5.Class.Extensions, t);", 49L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" }", 2L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"}", 1L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"static Idents_tIdent MakeIdent", 30L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# ifdef HAVE_ARGS", 17L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" (char * t)", 11L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# else", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" (t) char * t;", 14L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# endif", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"{", 1L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" Strings_tString s;", 19L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" (void) strcpy (s.Chars.A + 1, t);", 34L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" s.Length = strlen (t);", 23L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" return Idents_MakeIdent (& s);", 31L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"}", 1L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"Tree_tTree GetTree ARGS ((void))", 32L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"{", 1L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" Idents_tIdent i [", 18L);
Zq0A4_195((LONGINT)Zfb3DLQ_6());
ZfM_29(Zq0A4_172, (STRING)"];", 2L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" Tree_tTree a, c [32], * p = c;", 31L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" Tree_tTree nc = Tree_mNoClass ();", 34L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" Tree_tTree na = Tree_mNoAttribute ();", 38L);
ZfM_33(Zq0A4_172);
ZmzL8F_4(W_2->Y13);
ZfM_29(Zq0A4_172, (STRING)" CompBaseClass (* p, nc);", 25L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" return * p;", 12L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"}", 1L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"void BEGIN_Tree3 ARGS ((void)) {}", 33L);
ZfM_33(Zq0A4_172);
ZpmCQ_7(&Z138);
return;
}
}
if (Z158 != NIL && Z158->U_1.V_1.Y0 == Zq0A4_100) {
if (Z158->U_1.V_5.Y4.Y4 != NIL && Z158->U_1.V_5.Y4.Y4->U_1.V_1.Y0 == Zq0A4_99) {
{
register Zq0A4_226 *W_3 = &Z158->U_1.V_5.Y4;

ZmzL8F_4(W_3->Y5);
ZmzL8F_4(W_3->Y3);
Z139(W_3->Y1);
ZfM_29(Zq0A4_172, (STRING)"* p = Tree_mClass (i [", 22L);
Zq0A4_195((LONGINT)W_3->Y1);
ZfM_29(Zq0A4_172, (STRING)"], ", 3L);
Z141(W_3->Y2);
ZfM_29(Zq0A4_172, (STRING)", a, nc, * p);", 14L);
ZfM_33(Zq0A4_172);
return;
}
}
{
register Zq0A4_226 *W_4 = &Z158->U_1.V_5.Y4;

ZmzL8F_4(W_4->Y5);
ZfM_29(Zq0A4_172, (STRING)"p ++;", 5L);
ZfM_33(Zq0A4_172);
ZmzL8F_4(W_4->Y4);
ZfM_29(Zq0A4_172, (STRING)"p --;", 5L);
ZfM_33(Zq0A4_172);
ZmzL8F_4(W_4->Y3);
Z139(W_4->Y1);
ZfM_29(Zq0A4_172, (STRING)"* p = Tree_mClass (i [", 22L);
Zq0A4_195((LONGINT)W_4->Y1);
ZfM_29(Zq0A4_172, (STRING)"], ", 3L);
Z141(W_4->Y2);
ZfM_29(Zq0A4_172, (STRING)", a, p [1], * p);", 17L);
ZfM_33(Zq0A4_172);
return;
}
}
if (Z158 != NIL && Z158->U_1.V_1.Y0 == Zq0A4_105) {
if (Z158->U_1.V_10.Y9.Y1 != NIL && Z158->U_1.V_10.Y9.Y1->U_1.V_1.Y0 == Zq0A4_102) {
{
register Zq0A4_231 *W_5 = &Z158->U_1.V_10.Y9;

Z139(W_5->Y3);
Z139(W_5->Y4);
ZfM_29(Zq0A4_172, (STRING)"a = Tree_mChild (na, i [", 24L);
Zq0A4_195((LONGINT)W_5->Y3);
ZfM_29(Zq0A4_172, (STRING)"], i [", 6L);
Zq0A4_195((LONGINT)W_5->Y4);
ZfM_29(Zq0A4_172, (STRING)"], ", 3L);
Z141(W_5->Y6);
ZfM_29(Zq0A4_172, (STRING)");", 2L);
ZfM_33(Zq0A4_172);
return;
}
}
{
register Zq0A4_231 *W_6 = &Z158->U_1.V_10.Y9;

ZmzL8F_4(W_6->Y1);
Z139(W_6->Y3);
Z139(W_6->Y4);
ZfM_29(Zq0A4_172, (STRING)"a = Tree_mChild (a, i [", 23L);
Zq0A4_195((LONGINT)W_6->Y3);
ZfM_29(Zq0A4_172, (STRING)"], i [", 6L);
Zq0A4_195((LONGINT)W_6->Y4);
ZfM_29(Zq0A4_172, (STRING)"], ", 3L);
Z141(W_6->Y6);
ZfM_29(Zq0A4_172, (STRING)");", 2L);
ZfM_33(Zq0A4_172);
return;
}
}
if (Z158 != NIL && Z158->U_1.V_1.Y0 == Zq0A4_106) {
if (Z158->U_1.V_11.Y10.Y1 != NIL && Z158->U_1.V_11.Y10.Y1->U_1.V_1.Y0 == Zq0A4_102) {
{
register Zq0A4_232 *W_7 = &Z158->U_1.V_11.Y10;

Z139(W_7->Y3);
Z139(W_7->Y4);
ZfM_29(Zq0A4_172, (STRING)"a = Tree_mAttribute (na, i [", 28L);
Zq0A4_195((LONGINT)W_7->Y3);
ZfM_29(Zq0A4_172, (STRING)"], i [", 6L);
Zq0A4_195((LONGINT)W_7->Y4);
ZfM_29(Zq0A4_172, (STRING)"], ", 3L);
Z141(W_7->Y6);
ZfM_29(Zq0A4_172, (STRING)");", 2L);
ZfM_33(Zq0A4_172);
return;
}
}
{
register Zq0A4_232 *W_8 = &Z158->U_1.V_11.Y10;

ZmzL8F_4(W_8->Y1);
Z139(W_8->Y3);
Z139(W_8->Y4);
ZfM_29(Zq0A4_172, (STRING)"a = Tree_mAttribute (a, i [", 27L);
Zq0A4_195((LONGINT)W_8->Y3);
ZfM_29(Zq0A4_172, (STRING)"], i [", 6L);
Zq0A4_195((LONGINT)W_8->Y4);
ZfM_29(Zq0A4_172, (STRING)"], ", 3L);
Z141(W_8->Y6);
ZfM_29(Zq0A4_172, (STRING)");", 2L);
ZfM_33(Zq0A4_172);
return;
}
}
if (Zq0A4_297(Z158, Zq0A4_103)) {
{
register Zq0A4_229 *W_9 = &Z158->U_1.V_8.Y7;

Z158 = W_9->Y1;
goto EXIT_2;
}
}
if (Z158 != NIL && Z158->U_1.V_1.Y0 == Zq0A4_102) {
{
register Zq0A4_228 *W_10 = &Z158->U_1.V_7.Y6;

ZfM_29(Zq0A4_172, (STRING)"a = na;", 7L);
ZfM_33(Zq0A4_172);
return;
}
}
if (Z158 != NIL && Z158->U_1.V_1.Y0 == Zq0A4_99) {
{
register Zq0A4_225 *W_11 = &Z158->U_1.V_4.Y3;

ZfM_29(Zq0A4_172, (STRING)"* p = nc;", 9L);
ZfM_33(Zq0A4_172);
return;
}
}
return;
} EXIT_2:;
} EXIT_1:;
}

void ZmzL8F_5
 ARGS ((void))
{
}

void ZmzL8F_6
 ARGS ((void))
{
}

static void Z176
 ARGS ((void))
{
ZfM_34();
rExit(1L);
}

void BEGIN_Puma0 ARGS ((void))
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
BEGIN_Sets ();
BEGIN_Tree ();

ZmzL8F_0 = ZfM_1;
ZmzL8F_2 = Z176;
ZmzL8F_5();
}
