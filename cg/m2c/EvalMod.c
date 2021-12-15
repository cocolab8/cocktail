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

#ifndef DEFINITION_Texts
#include "Texts.h"
#endif

#ifndef DEFINITION_Sets
#include "Sets.h"
#endif

#ifndef DEFINITION_Semantic
#include "Semantic.h"
#endif

#ifndef DEFINITION_TreeMod1
#include "TreeMod1.h"
#endif

#ifndef DEFINITION_TreeMod2
#include "TreeMod2.h"
#endif

#ifndef DEFINITION_EvalMod3
#include "EvalMod3.h"
#endif

#ifndef DEFINITION_Tree
#include "Tree.h"
#endif

#ifndef DEFINITION_EvalMod
#include "EvalMod.h"
#endif

Zq0A4_153 ZbpA7nqD_0;
ZfM_3 ZbpA7nqD_1;
BOOLEAN ZbpA7nqD_2;
PROC ZbpA7nqD_3;

static SHORTCARD Z171;
static Zq0A4_153 Z172, Z173, Z174;
static void Z175 ARGS ((CHAR Z176[], LONGCARD O_1));
static BOOLEAN Z179 ARGS ((BYTE Z180[], LONGCARD O_3, BYTE Z181[], LONGCARD O_2));
struct S_6 {
union {
char dummy;
} U_1;
};
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
static void Z202 ARGS ((Zq0A4_153 Z184));
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
static void Z249 ARGS ((void));

static void Z175
# ifdef HAVE_ARGS
(CHAR Z176[], LONGCARD O_1)
# else
(Z176, O_1)
CHAR Z176[];
LONGCARD O_1;
# endif
{
OPEN_ARRAY_LOCALS

ALLOC_OPEN_ARRAYS (O_1 * sizeof (CHAR), 1)
COPY_OPEN_ARRAY (Z176, O_1, CHAR)
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)"Error: module EvalMod, routine ", 31L);
ZfM_29((ZDz6VQCC_4)ZfM_2, Z176, O_1);
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)" failed", 7L);
ZfM_33((ZDz6VQCC_4)ZfM_2);
(*ZbpA7nqD_3)();
FREE_OPEN_ARRAYS
}

static BOOLEAN Z179
# ifdef HAVE_ARGS
(BYTE Z180[], LONGCARD O_3, BYTE Z181[], LONGCARD O_2)
# else
(Z180, O_3, Z181, O_2)
BYTE Z180[];
LONGCARD O_3;
BYTE Z181[];
LONGCARD O_2;
# endif
{
INTEGER Z182;
OPEN_ARRAY_LOCALS

ALLOC_OPEN_ARRAYS (O_2 * sizeof (WORD) + O_3 * sizeof (WORD), 2)
COPY_OPEN_ARRAY (Z181, O_2, WORD)
COPY_OPEN_ARRAY (Z180, O_3, WORD)
{
LONGINT B_1 = 0, B_2 = (INTEGER)(O_3 - 1);

if (B_1 <= B_2)
for (Z182 = B_1;; Z182 += 1) {
if (Z180[Z182] != Z181[Z182]) {
FREE_OPEN_ARRAYS
return FALSE;
}
if (Z182 >= B_2) break;
}
}
FREE_OPEN_ARRAYS
return TRUE;
}

void ZbpA7nqD_4
# ifdef HAVE_ARGS
(Zq0A4_153 Z184)
# else
(Z184)
Zq0A4_153 Z184;
# endif
{
struct S_6 Z185;

if (Z184 == Zq0A4_97) {
return;
}
if (Z184 != NIL && Z184->U_1.V_1.Y0 == Zq0A4_127) {
{
register Zq0A4_253 *W_1 = &Z184->U_1.V_32.Y31;

ZfM_29(Zq0A4_172, (STRING)"DEFINITION MODULE ", 18L);
Zq0A4_192(W_1->Y7);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"IMPORT ", 7L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
Zq0A4gqDK_2(W_1->Y8->U_1.V_17.Y16.Y8);
ZqnGVQ_5(Zq0A4_172, W_1->Y8->U_1.V_17.Y16.Y2);
Z172 = W_1->Y14;
while (Z172->U_1.V_1.Y0 == Zq0A4_144) {
Zq0A4gqDK_2(Z172->U_1.V_49.Y48.Y8->U_1.V_17.Y16.Y8);
ZqnGVQ_5(Zq0A4_172, Z172->U_1.V_49.Y48.Y8->U_1.V_17.Y16.Y2);
Z172 = Z172->U_1.V_49.Y48.Y12;
}
Zq0A4gqDK_2(W_1->Y8->U_1.V_17.Y16.Y7);
ZqnGVQ_5(Zq0A4_172, W_1->Y8->U_1.V_17.Y16.Y1);
Z172 = W_1->Y14;
while (Z172->U_1.V_1.Y0 == Zq0A4_144) {
Zq0A4gqDK_2(Z172->U_1.V_49.Y48.Y8->U_1.V_17.Y16.Y7);
ZqnGVQ_5(Zq0A4_172, Z172->U_1.V_49.Y48.Y8->U_1.V_17.Y16.Y1);
Z172 = Z172->U_1.V_49.Y48.Y12;
}
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"PROCEDURE Eval (yyt: ", 21L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)");", 2L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"PROCEDURE Begin", 15L);
Zq0A4_192(W_1->Y7);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"PROCEDURE Close", 15L);
Zq0A4_192(W_1->Y7);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"END ", 4L);
Zq0A4_192(W_1->Y7);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
ZfM_33(Zq0A4_172);
return;
}
}
}

void ZbpA7nqD_5
# ifdef HAVE_ARGS
(Zq0A4_153 Z184)
# else
(Z184)
Zq0A4_153 Z184;
# endif
{
struct S_5 Z185;

if (Z184 == Zq0A4_97) {
return;
}
if (Z184 != NIL && Z184->U_1.V_1.Y0 == Zq0A4_127) {
{
register Zq0A4_253 *W_2 = &Z184->U_1.V_32.Y31;

ZfM_29(Zq0A4_172, (STRING)"# define DEP(a, b) a", 20L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# define SELF yyt", 17L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"IMPLEMENTATION MODULE ", 22L);
Zq0A4_192(W_2->Y7);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"IMPORT SYSTEM, ", 15L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
if (ZpmCQ_25(ORD('Y'), &Zq0A4_171) || ZpmCQ_25(ORD('Z'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)"IMPORT Layout, Strings, Idents, Texts, Sets;", 44L);
ZfM_33(Zq0A4_172);
}
if (ZpmCQ_25(ORD('Y'), &Zq0A4_171) || ZpmCQ_25(ORD('Z'), &Zq0A4_171) || ZpmCQ_25(ORD('L'), &Zq0A4_171) || ZpmCQ_25(ORD('9'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)"IMPORT IO;", 10L);
ZfM_33(Zq0A4_172);
}
if (ZpmCQ_25(ORD('9'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)"IMPORT Pointers;", 16L);
ZfM_33(Zq0A4_172);
}
if (ZpmCQ_25(ORD('K'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)"IMPORT DynArray;", 16L);
ZfM_33(Zq0A4_172);
}
Zq0A4gqDK_2(W_2->Y8->U_1.V_17.Y16.Y9);
ZqnGVQ_5(Zq0A4_172, W_2->Y8->U_1.V_17.Y16.Y3);
Z172 = W_2->Y14;
while (Z172->U_1.V_1.Y0 == Zq0A4_144) {
Zq0A4gqDK_2(Z172->U_1.V_49.Y48.Y8->U_1.V_17.Y16.Y9);
ZqnGVQ_5(Zq0A4_172, Z172->U_1.V_49.Y48.Y8->U_1.V_17.Y16.Y3);
Z172 = Z172->U_1.V_49.Y48.Y12;
}
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"VAR yyb	: BOOLEAN;", 18L);
ZfM_33(Zq0A4_172);
if (ZpmCQ_25(ORD('X'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)"# include \"yy", 13L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)".h\"", 3L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# define yyWrite", 16L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"(a) ", 4L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)".Write", 6L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)" (yyf, a)", 9L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"VAR yyf	: IO.tFile;", 19L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"PROCEDURE yyWriteHex (VAR yyx: ARRAY OF SYSTEM.BYTE);", 53L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" VAR yyi	: INTEGER;", 19L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" BEGIN", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  IF yyTrace THEN", 17L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   FOR yyi := 0 TO INTEGER (HIGH (yyx)) DO", 42L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"    IO.WriteN (yyf, ORD (CHAR (yyx [yyi])), 2, 16);", 51L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"    IO.WriteC (yyf, ' ');", 25L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   END;", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  END;", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" END yyWriteHex;", 16L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"PROCEDURE yyWriteNl;", 20L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" BEGIN IF yyTrace THEN", 22L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  IO.WriteNl (IO.StdOutput); IO.WriteFlush (IO.StdOutput);", 58L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" END; END yyWriteNl;", 20L);
ZfM_33(Zq0A4_172);
}
if (ZpmCQ_25(ORD('Y'), &Zq0A4_171) || ZpmCQ_25(ORD('Z'), &Zq0A4_171)) {
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"CONST yyTrace = TRUE;", 21L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"PROCEDURE yyWriteS (yys: ARRAY OF CHAR);", 40L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" BEGIN", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  IO.WriteS (IO.StdOutput, yys); Layout.WriteSpaces (IO.StdOutput, 15 - INTEGER (HIGH (yys)));", 94L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" END yyWriteS;", 14L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"PROCEDURE yyWriteType (yyt: ", 28L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)");", 2L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" BEGIN", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  CASE yyt^.Kind OF", 19L);
ZfM_33(Zq0A4_172);
Zq0A4_184(W_2->Y13, (Zq0A4_170)Z202);
ZfM_29(Zq0A4_172, (STRING)"  ELSE", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  END;", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" END yyWriteType;", 17L);
ZfM_33(Zq0A4_172);
}
if (ZpmCQ_25(ORD('X'), &Zq0A4_171)) {
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"PROCEDURE yyWriteEval (yyt: ", 28L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)"; yys: ARRAY OF CHAR);", 22L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" BEGIN", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  IF yyTrace THEN", 17L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   yyWriteType (yyt);", 21L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   IO.WriteS (IO.StdOutput, ' e ');", 35L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   IO.WriteS (IO.StdOutput, yys);", 33L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   Layout.WriteSpaces (IO.StdOutput, 23 - INTEGER (HIGH (yys)));", 64L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   IO.WriteS (IO.StdOutput, ' = ');", 35L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   IO.WriteFlush (IO.StdOutput);", 32L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  END;", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" END yyWriteEval;", 17L);
ZfM_33(Zq0A4_172);
} else if (ZpmCQ_25(ORD('Y'), &Zq0A4_171)) {
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"PROCEDURE yyWriteEval (yyt: ", 28L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)"; yys: ARRAY OF CHAR);", 22L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" BEGIN", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  IF yyTrace THEN", 17L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   yyWriteType (yyt);", 21L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   IO.WriteS (IO.StdOutput, ' e ');", 35L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   IO.WriteS (IO.StdOutput, yys);", 33L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   IO.WriteNl (IO.StdOutput);", 29L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   IO.WriteFlush (IO.StdOutput);", 32L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  END;", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" END yyWriteEval;", 17L);
ZfM_33(Zq0A4_172);
}
if (ZpmCQ_25(ORD('Z'), &Zq0A4_171)) {
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"PROCEDURE yyWriteVisit (yyt: ", 29L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)"; yys: ARRAY OF CHAR);", 22L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" BEGIN", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  IF yyTrace THEN", 17L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   yyWriteType (yyt);", 21L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   IO.WriteS (IO.StdOutput, ' v ');", 35L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   IO.WriteS (IO.StdOutput, yys);", 33L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   IO.WriteNl (IO.StdOutput);", 29L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   IO.WriteFlush (IO.StdOutput);", 32L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  END;", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" END yyWriteVisit;", 18L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"PROCEDURE yyVisitParent (yyt: ", 30L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)");", 2L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" BEGIN yyWriteVisit (yyt, 'parent'); END yyVisitParent;", 55L);
ZfM_33(Zq0A4_172);
}
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# ifdef YYCHECK", 15L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"CONST yyCheck1 = ", 17L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"ModuleDoesNotMatchEvaluatorModule", 33L);
ZfM_28(Zq0A4_172, ZpmC89LG6_1, 0L, 10L);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# endif", 7L);
ZfM_33(Zq0A4_172);
return;
}
}
}

void ZbpA7nqD_6
# ifdef HAVE_ARGS
(Zq0A4_153 Z184)
# else
(Z184)
Zq0A4_153 Z184;
# endif
{
struct S_4 Z185;

if (Z184 == Zq0A4_97) {
return;
}
if (Z184 != NIL && Z184->U_1.V_1.Y0 == Zq0A4_127) {
{
register Zq0A4_253 *W_3 = &Z184->U_1.V_32.Y31;

ZbpA7nqD_5(Z184);
ZfM_29(Zq0A4_172, (STRING)"CONST yyCheck2 = ", 17L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)".Generate", 9L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"ModuleWithoutOption0;", 21L);
ZfM_33(Zq0A4_172);
if (!ZpmCQ_25(ORD('9'), &Zq0A4_171)) {
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"PROCEDURE Eval (yyt: ", 21L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)");", 2L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" BEGIN ", 7L);
if (Zq0A4_70 > 0) {
ZfM_29(Zq0A4_172, (STRING)"yyVisit1 (yyt); ", 16L);
}
ZfM_29(Zq0A4_172, (STRING)"END Eval;", 9L);
ZfM_33(Zq0A4_172);
} else {
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"VAR yyMinLow: SYSTEM.ADDRESS;", 29L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"PROCEDURE Eval (yyt: ", 21L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)");", 2L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" VAR yyHigh: BOOLEAN;", 21L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" BEGIN", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  yyMinLow := SYSTEM.ADR (yyHigh);", 34L);
ZfM_33(Zq0A4_172);
if (Zq0A4_70 > 0) {
ZfM_29(Zq0A4_172, (STRING)"  yyVisit1 (yyt);", 17L);
ZfM_33(Zq0A4_172);
}
ZfM_29(Zq0A4_172, (STRING)"  IO.WriteS (IO.StdOutput, 'Stacksize ');", 41L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  IO.WriteI (IO.StdOutput, Pointers.PTRDIFF (SYSTEM.ADR (yyHigh), yyMinLow), 0);", 80L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  IO.WriteNl (IO.StdOutput);", 28L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" END Eval;", 10L);
ZfM_33(Zq0A4_172);
}
ZfM_33(Zq0A4_172);
{
SHORTCARD B_3 = 1, B_4 = Zq0A4_70;

if (B_3 <= B_4)
for (Z171 = B_3;; Z171 += 1) {
ZfM_29(Zq0A4_172, (STRING)"PROCEDURE yyVisit", 17L);
Zq0A4_195((LONGINT)Z171);
ZfM_29(Zq0A4_172, (STRING)" (yyt: ", 7L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)");", 2L);
ZfM_33(Zq0A4_172);
Zq0A4gqDK_2(W_3->Y8->U_1.V_17.Y16.Y10);
ZqnGVQ_5(Zq0A4_172, W_3->Y8->U_1.V_17.Y16.Y4);
Z172 = W_3->Y14;
while (Z172->U_1.V_1.Y0 == Zq0A4_144) {
Zq0A4gqDK_2(Z172->U_1.V_49.Y48.Y8->U_1.V_17.Y16.Y10);
ZqnGVQ_5(Zq0A4_172, Z172->U_1.V_49.Y48.Y8->U_1.V_17.Y16.Y4);
Z172 = Z172->U_1.V_49.Y48.Y12;
}
if (ZpmCQ_25(ORD('9'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)" VAR yyLow: BOOLEAN;", 20L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" BEGIN", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  IF Pointers.PTRDIFF (yyMinLow, SYSTEM.ADR (yyLow)) > 0 THEN", 61L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   yyMinLow := SYSTEM.ADR (yyLow);", 34L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  END;", 6L);
ZfM_33(Zq0A4_172);
} else {
ZfM_29(Zq0A4_172, (STRING)" BEGIN", 6L);
ZfM_33(Zq0A4_172);
}
ZfM_29(Zq0A4_172, (STRING)"  CASE yyt^.Kind OF", 19L);
ZfM_33(Zq0A4_172);
if (IN(Zq0A4_56, Zq0A4_69)) {
Zq0A4_184(W_3->Y13, (Zq0A4_170)ZbpA7nqD_7);
}
ZfM_29(Zq0A4_172, (STRING)"  ELSE", 6L);
ZfM_33(Zq0A4_172);
if (ZpmCQ_25(ORD('Z'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)"   yyVisitParent (yyt);", 23L);
ZfM_33(Zq0A4_172);
}
ZfM_29(Zq0A4_172, (STRING)"  END;", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" END yyVisit", 12L);
Zq0A4_195((LONGINT)Z171);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
if (Z171 >= B_4) break;
}
}
ZfM_29(Zq0A4_172, (STRING)"PROCEDURE Begin", 15L);
Zq0A4_192(W_3->Y7);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" BEGIN", 6L);
ZfM_33(Zq0A4_172);
Zq0A4gqDK_2(W_3->Y8->U_1.V_17.Y16.Y11);
ZqnGVQ_5(Zq0A4_172, W_3->Y8->U_1.V_17.Y16.Y5);
Z172 = W_3->Y14;
while (Z172->U_1.V_1.Y0 == Zq0A4_144) {
Zq0A4gqDK_2(Z172->U_1.V_49.Y48.Y8->U_1.V_17.Y16.Y11);
ZqnGVQ_5(Zq0A4_172, Z172->U_1.V_49.Y48.Y8->U_1.V_17.Y16.Y5);
Z172 = Z172->U_1.V_49.Y48.Y12;
}
ZfM_29(Zq0A4_172, (STRING)" END Begin", 10L);
Zq0A4_192(W_3->Y7);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"PROCEDURE Close", 15L);
Zq0A4_192(W_3->Y7);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" BEGIN", 6L);
ZfM_33(Zq0A4_172);
Zq0A4gqDK_2(W_3->Y8->U_1.V_17.Y16.Y12);
ZqnGVQ_5(Zq0A4_172, W_3->Y8->U_1.V_17.Y16.Y6);
Z172 = W_3->Y14;
while (Z172->U_1.V_1.Y0 == Zq0A4_144) {
Zq0A4gqDK_2(Z172->U_1.V_49.Y48.Y8->U_1.V_17.Y16.Y12);
ZqnGVQ_5(Zq0A4_172, Z172->U_1.V_49.Y48.Y8->U_1.V_17.Y16.Y6);
Z172 = Z172->U_1.V_49.Y48.Y12;
}
ZfM_29(Zq0A4_172, (STRING)" END Close", 10L);
Zq0A4_192(W_3->Y7);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"BEGIN", 5L);
ZfM_33(Zq0A4_172);
if (ZpmCQ_25(ORD('X'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)" yyf := IO.StdOutput;", 21L);
ZfM_33(Zq0A4_172);
}
ZfM_29(Zq0A4_172, (STRING)"END ", 4L);
Zq0A4_192(W_3->Y7);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
ZfM_33(Zq0A4_172);
return;
}
}
}

static void Z202
# ifdef HAVE_ARGS
(Zq0A4_153 Z184)
# else
(Z184)
Zq0A4_153 Z184;
# endif
{
struct S_3 Z185;

if (Z184 == Zq0A4_97) {
return;
}
if (Z184 != NIL && Z184->U_1.V_1.Y0 == Zq0A4_100) {
for (;;) {
{
register Zq0A4_226 *W_4 = &Z184->U_1.V_5.Y4;

if (!((Zq0A4_177 & W_4->Y2) == 0X0L)) {
goto EXIT_1;
}
if (!IN(Zq0A4_42, W_4->Y2)) {
goto EXIT_1;
}
ZfM_29(Zq0A4_172, (STRING)"| ", 2L);
Zq0A4_192(Zq0A4_279->U_1.V_32.Y31.Y5);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(W_4->Y1);
ZfM_29(Zq0A4_172, (STRING)": yyWriteS ('", 13L);
Zq0A4_192(W_4->Y1);
ZfM_29(Zq0A4_172, (STRING)"');", 3L);
ZfM_33(Zq0A4_172);
return;
}
} EXIT_1:;
}
}

void ZbpA7nqD_7
# ifdef HAVE_ARGS
(Zq0A4_153 Z184)
# else
(Z184)
Zq0A4_153 Z184;
# endif
{
struct S_1 Z185;

if (Z184 == Zq0A4_97) {
return;
}
if (Z184 != NIL) {
switch (Z184->U_1.V_1.Y0) {
case Zq0A4_100:;
for (;;) {
{
register Zq0A4_226 *W_5 = &Z184->U_1.V_5.Y4;

if (!((Zq0A4_177 & W_5->Y2) == 0X0L)) {
goto EXIT_2;
}
if (W_5->Y24 == W_5->Y14 || W_5->Y22 < Z171) {
return;
}
ZfM_29(Zq0A4_172, (STRING)"| ", 2L);
Zq0A4_192(Zq0A4_279->U_1.V_32.Y31.Y5);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(W_5->Y1);
ZfM_29(Zq0A4_172, (STRING)":", 1L);
ZfM_33(Zq0A4_172);
ZbpA7nqD_0 = Z184;
for (;;) {
if (W_5->Y24 == W_5->Y14) {
goto EXIT_3;
}
INC(W_5->Y24);
{
register Zq0A4_199 *W_6 = &W_5->Y15->A[W_5->Y15->A[W_5->Y24 - 1].Y4 - 1];

if (IN(Zq0A4_20, W_6->Y3) && W_6->Y1->U_1.V_10.Y9.Y11 > Z171) {
DEC(W_5->Y24);
goto EXIT_3;
}
if (SET_IS_SUBSET1(SET_ELEM (Zq0A4_6) | SET_ELEM (Zq0A4_21) | SET_ELEM (Zq0A4_26), W_6->Y3) && !IN(Zq0A4_1, W_6->Y3)) {
if (ZpmCQ_25(ORD('X'), &Zq0A4_171) && IN(Zq0A4_42, Z184->U_1.V_5.Y4.Y2)) {
ZfM_29(Zq0A4_172, (STRING)"yyWriteEval (yyt, '", 19L);
Zq0A4_192(W_6->Y0->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)":", 1L);
Zq0A4_192(W_6->Y1->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)"');", 3L);
ZfM_33(Zq0A4_172);
if (W_6->Y2 != (Zq0A4_153)ADR (W_6->Y2)) {
ZbpA7nqD_7(W_6->Y2);
}
ZfM_33(Zq0A4_172);
if (W_6->Y1->U_1.V_1.Y0 == Zq0A4_105 || W_6->Y1->U_1.V_11.Y10.Y4 == Zq0A4_86) {
ZfM_29(Zq0A4_172, (STRING)"write", 5L);
Zq0A4_192(Zq0A4_86);
} else {
ZfM_29(Zq0A4_172, (STRING)"write", 5L);
Zq0A4_192(W_6->Y1->U_1.V_10.Y9.Y4);
}
ZfM_29(Zq0A4_172, (STRING)" (yyt^.", 7L);
Zq0A4_192(W_5->Y1);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(W_6->Y0->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)"^.", 2L);
Zq0A4_192(W_6->Y0->U_1.V_10.Y9.Y4);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(W_6->Y1->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)") yyWriteNl;", 12L);
ZfM_33(Zq0A4_172);
} else if (ZpmCQ_25(ORD('Y'), &Zq0A4_171) && IN(Zq0A4_42, Z184->U_1.V_5.Y4.Y2)) {
ZfM_29(Zq0A4_172, (STRING)"yyWriteEval (yyt, '", 19L);
Zq0A4_192(W_6->Y0->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)":", 1L);
Zq0A4_192(W_6->Y1->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)"');", 3L);
ZfM_33(Zq0A4_172);
if (W_6->Y2 != (Zq0A4_153)ADR (W_6->Y2)) {
ZbpA7nqD_7(W_6->Y2);
}
} else {
if (W_6->Y2 != (Zq0A4_153)ADR (W_6->Y2)) {
ZbpA7nqD_7(W_6->Y2);
}
}
}
if (SET_IS_SUBSET1(SET_ELEM (Zq0A4_7) | SET_ELEM (Zq0A4_20) | SET_ELEM (Zq0A4_26), W_6->Y3) && ((SET_ELEM (Zq0A4_27) | SET_ELEM (Zq0A4_1)) & W_6->Y3) == 0X0L) {
if (ZpmCQ_25(ORD('X'), &Zq0A4_171) && IN(Zq0A4_42, Z184->U_1.V_5.Y4.Y2)) {
ZfM_29(Zq0A4_172, (STRING)"yyWriteEval (yyt, '", 19L);
Zq0A4_192(W_6->Y1->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)"');", 3L);
ZfM_33(Zq0A4_172);
if (W_6->Y2 != (Zq0A4_153)ADR (W_6->Y2)) {
ZbpA7nqD_7(W_6->Y2);
}
ZfM_33(Zq0A4_172);
if (IN(Zq0A4_19, W_6->Y3)) {
ZfM_29(Zq0A4_172, (STRING)"writeBOOLEAN (yyb) yyWriteNl;", 29L);
ZfM_33(Zq0A4_172);
} else if (W_6->Y1->U_1.V_1.Y0 == Zq0A4_105 || W_6->Y1->U_1.V_11.Y10.Y4 == Zq0A4_86) {
ZfM_29(Zq0A4_172, (STRING)"write", 5L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)" (yyt^.", 7L);
Zq0A4_192(W_5->Y1);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(W_6->Y1->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)") yyWriteNl;", 12L);
ZfM_33(Zq0A4_172);
} else {
ZfM_29(Zq0A4_172, (STRING)"write", 5L);
Zq0A4_192(W_6->Y1->U_1.V_10.Y9.Y4);
ZfM_29(Zq0A4_172, (STRING)" (yyt^.", 7L);
Zq0A4_192(W_5->Y1);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(W_6->Y1->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)") yyWriteNl;", 12L);
ZfM_33(Zq0A4_172);
}
} else if (ZpmCQ_25(ORD('Y'), &Zq0A4_171) && IN(Zq0A4_42, Z184->U_1.V_5.Y4.Y2)) {
ZfM_29(Zq0A4_172, (STRING)"yyWriteEval (yyt, '", 19L);
Zq0A4_192(W_6->Y1->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)"');", 3L);
ZfM_33(Zq0A4_172);
if (W_6->Y2 != (Zq0A4_153)ADR (W_6->Y2)) {
ZbpA7nqD_7(W_6->Y2);
}
} else {
if (W_6->Y2 != (Zq0A4_153)ADR (W_6->Y2)) {
ZbpA7nqD_7(W_6->Y2);
}
}
}
if (SET_IS_SUBSET1(SET_ELEM (Zq0A4_7) | SET_ELEM (Zq0A4_21) | SET_ELEM (Zq0A4_26), W_6->Y3) && W_6->Y1->U_1.V_10.Y9.Y11 <= W_6->Y0->U_1.V_10.Y9.Y8->U_1.V_5.Y4.Y22) {
if (ZpmCQ_25(ORD('Z'), &Zq0A4_171) && IN(Zq0A4_42, Z184->U_1.V_5.Y4.Y2)) {
ZfM_29(Zq0A4_172, (STRING)"yyWriteVisit (yyt, '", 20L);
Zq0A4_192(W_6->Y0->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)" ", 1L);
Zq0A4_195((LONGINT)W_6->Y1->U_1.V_10.Y9.Y11);
ZfM_29(Zq0A4_172, (STRING)"');", 3L);
ZfM_33(Zq0A4_172);
}
ZfM_29(Zq0A4_172, (STRING)"yyVisit", 7L);
Zq0A4_195((LONGINT)W_6->Y1->U_1.V_10.Y9.Y11);
ZfM_29(Zq0A4_172, (STRING)" (yyt^.", 7L);
Zq0A4_192(W_5->Y1);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(W_6->Y0->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)");", 2L);
ZfM_33(Zq0A4_172);
}
}
} EXIT_3:;
if (ZpmCQ_25(ORD('Z'), &Zq0A4_171) && IN(Zq0A4_42, Z184->U_1.V_5.Y4.Y2)) {
ZfM_29(Zq0A4_172, (STRING)"yyVisitParent (yyt);", 20L);
ZfM_33(Zq0A4_172);
}
return;
}
} EXIT_2:;
break;
case Zq0A4_137:;
{
register Zq0A4_263 *W_7 = &Z184->U_1.V_42.Y41;

Zq0A4gqDK_2(W_7->Y2);
ZbpA7nqD_7(W_7->Y4);
ZfM_29(Zq0A4_172, (STRING)":=", 2L);
ZbpA7nqD_7(W_7->Y5);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
return;
}
break;
case Zq0A4_138:;
{
register Zq0A4_264 *W_8 = &Z184->U_1.V_43.Y42;

Zq0A4gqDK_2(W_8->Y2);
ZbpA7nqD_7(W_8->Y4);
ZfM_29(Zq0A4_172, (STRING)":=", 2L);
ZbpA7nqD_7(W_8->Y5);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
return;
}
break;
case Zq0A4_139:;
{
register Zq0A4_265 *W_9 = &Z184->U_1.V_44.Y43;

Zq0A4gqDK_2(W_9->Y2);
ZbpA7nqD_7(W_9->Y5);
ZfM_33(Zq0A4_172);
return;
}
break;
case Zq0A4_141:;
{
register Zq0A4_267 *W_10 = &Z184->U_1.V_46.Y45;

Zq0A4gqDK_2(W_10->Y2);
if (W_10->Y4 != Zq0A4_97) {
if (ZpmCQ_25(ORD('X'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)"yyb := ", 7L);
ZbpA7nqD_7(W_10->Y4);
ZfM_29(Zq0A4_172, (STRING)"; IF NOT yyb THEN ", 18L);
} else {
ZfM_29(Zq0A4_172, (STRING)"IF NOT (", 8L);
ZbpA7nqD_7(W_10->Y4);
ZfM_29(Zq0A4_172, (STRING)") THEN ", 7L);
}
ZbpA7nqD_7(W_10->Y5);
ZfM_33(Zq0A4_172);
if (W_10->Y6->U_1.V_1.Y0 == Zq0A4_141) {
ZfM_29(Zq0A4_172, (STRING)"ELSE", 4L);
ZfM_33(Zq0A4_172);
ZbpA7nqD_7(W_10->Y6);
}
ZfM_29(Zq0A4_172, (STRING)" END;", 5L);
ZfM_33(Zq0A4_172);
} else {
if (ZpmCQ_25(ORD('X'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)"yyb := FALSE; ", 14L);
}
ZbpA7nqD_7(W_10->Y5);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
ZbpA7nqD_7(W_10->Y6);
}
return;
}
break;
case Zq0A4_116:;
{
register Zq0A4_242 *W_11 = &Z184->U_1.V_21.Y20;

Z173 = Zq0A4_183(ZbpA7nqD_0, W_11->Y2);
if (Z173 != Zq0A4_97) {
Z174 = Z173->U_1.V_10.Y9.Y8;
Z173 = Zq0A4_183(Z174, W_11->Y3);
if (!IN(Zq0A4_1, Z173->U_1.V_11.Y10.Y6)) {
ZfM_29(Zq0A4_172, (STRING)"yyt^.", 5L);
Zq0A4_192(ZbpA7nqD_0->U_1.V_5.Y4.Y1);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(W_11->Y2);
ZfM_29(Zq0A4_172, (STRING)"^.", 2L);
Zq0A4_192(Z174->U_1.V_5.Y4.Y1);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(W_11->Y3);
}
} else {
Zq0A4_192(W_11->Y2);
ZfM_29(Zq0A4_172, (STRING)":", 1L);
Zq0A4_192(W_11->Y3);
}
ZbpA7nqD_7(W_11->Y1);
return;
}
break;
case Zq0A4_117:;
{
register Zq0A4_243 *W_12 = &Z184->U_1.V_22.Y21;

Z173 = Zq0A4_183(ZbpA7nqD_0, W_12->Y2);
if (Z173 != Zq0A4_97) {
if (!IN(Zq0A4_1, Z173->U_1.V_11.Y10.Y6)) {
ZfM_29(Zq0A4_172, (STRING)"yyt^.", 5L);
Zq0A4_192(ZbpA7nqD_0->U_1.V_5.Y4.Y1);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(W_12->Y2);
}
} else {
Zq0A4_192(W_12->Y2);
}
ZbpA7nqD_7(W_12->Y1);
return;
}
break;
case Zq0A4_118:;
{
register struct S_2 *W_13 = &Z185.U_1.V_1.Y0;

{
register Zq0A4_244 *W_14 = &Z184->U_1.V_23.Y22;

W_13->Y0 = Zq0A4_182(Zq0A4_279->U_1.V_32.Y31.Y13, W_14->Y3);
if (W_13->Y0 != Zq0A4_97) {
Z173 = Zq0A4_183(W_13->Y0, W_14->Y4);
if (Z173 != Zq0A4_97) {
{
register Zq0A4_232 *W_15 = &Z173->U_1.V_11.Y10;

W_13->Y1 = ZbpA7nqDL_5(W_13->Y0, (LONGINT)W_15->Y10);
if (IN(Zq0A4_7, W_15->Y6)) {
ZfM_29(Zq0A4_172, (STRING)"REMOTE_SYN (yyIsComp", 20L);
Zq0A4_195(W_13->Y1 / Zq0A4gqDJ_0);
ZfM_29(Zq0A4_172, (STRING)", ", 2L);
Zq0A4_195(W_13->Y1 % Zq0A4gqDJ_0);
ZfM_29(Zq0A4_172, (STRING)", yyS", 5L);
Zq0A4_195(W_13->Y1);
ZfM_29(Zq0A4_172, (STRING)", ", 2L);
ZbpA7nqD_7(W_14->Y2);
ZfM_29(Zq0A4_172, (STRING)", ", 2L);
Zq0A4_192(Z184->U_1.V_23.Y22.Y3);
ZfM_29(Zq0A4_172, (STRING)", ", 2L);
Zq0A4_192(W_14->Y4);
ZfM_29(Zq0A4_172, (STRING)")", 1L);
} else if (IN(Zq0A4_6, W_15->Y6)) {
ZfM_29(Zq0A4_172, (STRING)"REMOTE_INH (yyIsComp", 20L);
Zq0A4_195(W_13->Y1 / Zq0A4gqDJ_0);
ZfM_29(Zq0A4_172, (STRING)", ", 2L);
Zq0A4_195(W_13->Y1 % Zq0A4gqDJ_0);
ZfM_29(Zq0A4_172, (STRING)", ", 2L);
Zq0A4_195(W_13->Y1);
ZfM_29(Zq0A4_172, (STRING)", ", 2L);
ZbpA7nqD_7(W_14->Y2);
ZfM_29(Zq0A4_172, (STRING)", ", 2L);
Zq0A4_192(Z184->U_1.V_23.Y22.Y3);
ZfM_29(Zq0A4_172, (STRING)", ", 2L);
Zq0A4_192(W_14->Y4);
ZfM_29(Zq0A4_172, (STRING)")", 1L);
} else {
ZbpA7nqD_7(W_14->Y2);
ZfM_29(Zq0A4_172, (STRING)"^.", 2L);
Zq0A4_192(Z184->U_1.V_23.Y22.Y3);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(W_14->Y4);
}
}
}
}
ZbpA7nqD_7(W_14->Y1);
return;
}
}
break;
case Zq0A4_119:;
{
register Zq0A4_245 *W_16 = &Z184->U_1.V_24.Y23;

Zp1PEAFi_6(Zq0A4_172, W_16->Y2);
ZbpA7nqD_7(W_16->Y1);
return;
}
break;
case Zq0A4_120:;
{
register Zq0A4_246 *W_17 = &Z184->U_1.V_25.Y24;

ZbpA7nqD_7(W_17->Y2);
ZbpA7nqD_7(W_17->Y1);
return;
}
break;
case Zq0A4_123:;
{
register Zq0A4_249 *W_18 = &Z184->U_1.V_28.Y27;

Zp1PEAFi_6(Zq0A4_172, W_18->Y1);
ZbpA7nqD_7(W_18->Y2);
return;
}
break;
default:
break;
}
}
}

void ZbpA7nqD_8
 ARGS ((void))
{
}

void ZbpA7nqD_9
 ARGS ((void))
{
}

static void Z249
 ARGS ((void))
{
ZfM_34();
rExit(1L);
}

void BEGIN_EvalMod ARGS ((void))
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
BEGIN_Texts ();
BEGIN_Sets ();
BEGIN_Semantic ();
BEGIN_TreeMod1 ();
BEGIN_TreeMod2 ();
BEGIN_EvalMod3 ();
BEGIN_Tree ();

ZbpA7nqD_1 = ZfM_1;
ZbpA7nqD_3 = Z249;
ZbpA7nqD_8();
}
