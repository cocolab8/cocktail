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

#ifndef DEFINITION_Sets
#include "Sets.h"
#endif

#ifndef DEFINITION_Idents
#include "Idents.h"
#endif

#ifndef DEFINITION_Position
#include "Position.h"
#endif

#ifndef DEFINITION_Tree
#include "Tree.h"
#endif

#ifndef DEFINITION_Strings
#include "Strings.h"
#endif

#ifndef DEFINITION_TreeMod2
#include "TreeMod2.h"
#endif

Zq0A4_153 Zq0A4gqDK_1;
ZfM_3 Zq0A4gqDK_3;
BOOLEAN Zq0A4gqDK_4;
PROC Zq0A4gqDK_5;

static Zfb3DLQ_0 Z149;
static Zq0A4_153 Z150;
static CARDINAL Z151;
static CHAR Z152;
static void Z156 ARGS ((CHAR Z157[], LONGCARD O_1));
static BOOLEAN Z160 ARGS ((BYTE Z161[], LONGCARD O_3, BYTE Z162[], LONGCARD O_2));
struct S_21 {
union {
char dummy;
} U_1;
};
struct S_20 {
union {
char dummy;
} U_1;
};
static void Z173 ARGS ((Zq0A4_153 Z167));
struct S_19 {
union {
char dummy;
} U_1;
};
static void Z172 ARGS ((Zq0A4_153 Z167));
struct S_18 {
union {
char dummy;
} U_1;
};
static void Z171 ARGS ((Zq0A4_153 Z167));
struct S_17 {
union {
char dummy;
} U_1;
};
static void Z175 ARGS ((Zq0A4_153 Z167));
struct S_16 {
union {
char dummy;
} U_1;
};
static void Z174 ARGS ((Zq0A4_153 Z167));
struct S_15 {
union {
char dummy;
} U_1;
};
static void Z176 ARGS ((Zq0A4_153 Z167));
struct S_14 {
union {
char dummy;
} U_1;
};
static void Z178 ARGS ((Zq0A4_153 Z167));
struct S_13 {
union {
char dummy;
} U_1;
};
static void Z179 ARGS ((Zq0A4_153 Z167));
struct S_12 {
union {
char dummy;
} U_1;
};
static void Z177 ARGS ((Zq0A4_153 Z167));
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
struct S_9 {
union {
char dummy;
} U_1;
};
static void Z192 ARGS ((Zq0A4_153 Z167));
struct S_8 {
union {
char dummy;
} U_1;
};
static void Z191 ARGS ((Zq0A4_153 Z193));
struct S_7 {
union {
char dummy;
} U_1;
};
static BOOLEAN Z194 ARGS ((Zq0A4_153 Z195));
struct S_6 {
union {
char dummy;
} U_1;
};
static INTEGER Z199 ARGS ((Zq0A4_153 Z200));
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
static void Z203 ARGS ((Zq0A4_153 Z167));
struct S_3 {
union {
char dummy;
} U_1;
};
static void Z204 ARGS ((Zq0A4_153 Z167));
struct S_2 {
union {
char dummy;
} U_1;
};
static void Z205 ARGS ((Zq0A4_153 Z167));
struct S_1 {
union {
char dummy;
} U_1;
};
static void Z210 ARGS ((void));

void Zq0A4gqDK_2
# ifdef HAVE_ARGS
(ZmtLFGGBG_0 Z154)
# else
(Z154)
ZmtLFGGBG_0 Z154;
# endif
{
if (Z154.Y1 != 0) {
ZfM_29(Zq0A4_172, (STRING)"(* line ", 8L);
Zq0A4_195((LONGINT)Z154.Y1);
ZfM_29(Zq0A4_172, (STRING)" \"", 2L);
Zq0A4_192(Z154.Y0);
ZfM_29(Zq0A4_172, (STRING)"\" *)", 4L);
ZfM_33(Zq0A4_172);
}
}

static void Z156
# ifdef HAVE_ARGS
(CHAR Z157[], LONGCARD O_1)
# else
(Z157, O_1)
CHAR Z157[];
LONGCARD O_1;
# endif
{
OPEN_ARRAY_LOCALS

ALLOC_OPEN_ARRAYS (O_1 * sizeof (CHAR), 1)
COPY_OPEN_ARRAY (Z157, O_1, CHAR)
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)"Error: module TreeMod2, routine ", 32L);
ZfM_29((ZDz6VQCC_4)ZfM_2, Z157, O_1);
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)" failed", 7L);
ZfM_33((ZDz6VQCC_4)ZfM_2);
(*Zq0A4gqDK_5)();
FREE_OPEN_ARRAYS
}

static BOOLEAN Z160
# ifdef HAVE_ARGS
(BYTE Z161[], LONGCARD O_3, BYTE Z162[], LONGCARD O_2)
# else
(Z161, O_3, Z162, O_2)
BYTE Z161[];
LONGCARD O_3;
BYTE Z162[];
LONGCARD O_2;
# endif
{
INTEGER Z163;
OPEN_ARRAY_LOCALS

ALLOC_OPEN_ARRAYS (O_2 * sizeof (WORD) + O_3 * sizeof (WORD), 2)
COPY_OPEN_ARRAY (Z162, O_2, WORD)
COPY_OPEN_ARRAY (Z161, O_3, WORD)
{
LONGINT B_1 = 0, B_2 = (INTEGER)(O_3 - 1);

if (B_1 <= B_2)
for (Z163 = B_1;; Z163 += 1) {
if (Z161[Z163] != Z162[Z163]) {
FREE_OPEN_ARRAYS
return FALSE;
}
if (Z163 >= B_2) break;
}
}
FREE_OPEN_ARRAYS
return TRUE;
}

void Zq0A4gqDK_6
 ARGS ((void))
{
struct S_21 Z165;

if (ZpmCQ_25(ORD('<'), &Zq0A4_171)) {
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
}
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"_TreatTVAasChild", 16L);
return;
}

void Zq0A4gqDK_7
# ifdef HAVE_ARGS
(Zq0A4_153 Z167)
# else
(Z167)
Zq0A4_153 Z167;
# endif
{
struct S_20 Z165;

if (Z167 == Zq0A4_97) {
return;
}
if (Z167 != NIL && Z167->U_1.V_1.Y0 == Zq0A4_127) {
{
register Zq0A4_253 *W_1 = &Z167->U_1.V_32.Y31;

ZfM_29(Zq0A4_172, (STRING)"TYPE yytTreePtr	= POINTER TO ", 29L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"VAR yyLabel	: SHORTCARD;", 24L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"VAR yyKind	: SHORTCARD;", 23L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"VAR yyc	: CHAR;", 15L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"VAR yys	: Strings.tString;", 26L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
if (ZpmCQ_25(ORD(','), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)"PROCEDURE yyMark (yyt: ", 23L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)");", 2L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" BEGIN", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  LOOP", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   IF yyt = ", 12L);
Zq0A4_192(Zq0A4_88);
ZfM_29(Zq0A4_172, (STRING)" THEN RETURN; END;", 18L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   INC (yyt^.yyHead.yyMark);", 28L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   IF yyt^.yyHead.yyMark > 1 THEN RETURN; END;", 46L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   CASE yyt^.Kind OF", 20L);
ZfM_33(Zq0A4_172);
Zq0A4_184(W_1->Y13, (Zq0A4_170)Z171);
ZfM_29(Zq0A4_172, (STRING)"   ELSE RETURN;", 15L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   END;", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  END;", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" END yyMark;", 12L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
}
if (ZpmCQ_25(ORD(';'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)"CONST yyInitTreeStoreSize	= 32;", 31L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"VAR yyTreeStoreSize	: LONGINT;", 30L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"VAR yyTreeStorePtr	: POINTER TO ARRAY [0..50000] OF ", 52L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"VAR yyLabelCount	: INTEGER;", 27L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"VAR yyRecursionLevel	: SHORTINT;", 32L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"PROCEDURE yyMapToLabel (yyTree: ", 32L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)"): SHORTCARD;", 13L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" VAR yyi	: INTEGER;", 19L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" BEGIN", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  FOR yyi := 1 TO yyLabelCount DO", 33L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   IF yyTreeStorePtr^[yyi] = yyTree THEN RETURN yyi; END;", 57L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  END;", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  INC (yyLabelCount);", 21L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  IF yyLabelCount = yyTreeStoreSize THEN", 40L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   DynArray.ExtendArray (yyTreeStorePtr, yyTreeStoreSize, SYSTEM.TSIZE (", 72L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)"));", 3L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  END;", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  yyTreeStorePtr^[yyLabelCount] := yyTree;", 42L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  RETURN yyLabelCount;", 22L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" END yyMapToLabel;", 18L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"PROCEDURE yyMapToTree (yyLabel: SHORTCARD): ", 44L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" BEGIN RETURN yyTreeStorePtr^[yyLabel]; END yyMapToTree;", 56L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
}
if (ZpmCQ_25(ORD('$'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)"PROCEDURE yyWriteNl; BEGIN IO.WriteNl (yyf); END yyWriteNl;", 59L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"PROCEDURE yyWriteSelector (yys: ARRAY OF CHAR);", 47L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" BEGIN", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  IO.WriteS (yyf, yys);", 23L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  Layout.WriteSpaces (yyf, 16 - INTEGER (HIGH (yys)));", 54L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  IO.WriteS (yyf, ' = ');", 25L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" END yyWriteSelector;", 21L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"PROCEDURE yyWriteHex (VAR yyx: ARRAY OF SYSTEM.BYTE);", 53L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" VAR yyi	: INTEGER;", 19L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" BEGIN", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  FOR yyi := 0 TO INTEGER (HIGH (yyx)) DO", 41L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   IO.WriteN (yyf, ORD (CHAR (yyx [yyi])), 2, 16);", 50L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   IO.WriteC (yyf, ' ');", 24L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  END;", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" END yyWriteHex;", 16L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"PROCEDURE yyWriteNodeType (yyf: IO.tFile; yyt: ", 47L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)");", 2L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" VAR yyString	: Strings.tString;", 32L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" BEGIN", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  NodeName (yyt, yyString);", 27L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  Strings.WriteL (yyf, yyString);", 33L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" END yyWriteNodeType;", 21L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
}
if (ZpmCQ_25(ORD('o'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)"PROCEDURE yyWriteAddr (yyt: ", 28L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)");", 2L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" BEGIN", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  IF yyt = ", 11L);
Zq0A4_192(Zq0A4_88);
ZfM_29(Zq0A4_172, (STRING)" THEN", 5L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   IO.WriteS (yyf, '", 20L);
Zq0A4_192(Zq0A4_88);
ZfM_29(Zq0A4_172, (STRING)"');", 3L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  ELSE", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   IO.WriteN (yyf, LONGCARD (yyt), 8, 16);", 42L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   IO.WriteS (yyf, \" *\");", 25L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  END;", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  yyWriteNl;", 12L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" END yyWriteAddr;", 17L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
Zq0A4_184(W_1->Y13, (Zq0A4_170)Z172);
ZfM_29(Zq0A4_172, (STRING)"PROCEDURE Write", 15L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"Node (yyyf: IO.tFile; yyt: ", 27L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)");", 2L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" BEGIN", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  yyf := yyyf;", 14L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  IF yyt = ", 11L);
Zq0A4_192(Zq0A4_88);
ZfM_29(Zq0A4_172, (STRING)" THEN", 5L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   IO.WriteS (yyf, '", 20L);
Zq0A4_192(Zq0A4_88);
ZfM_29(Zq0A4_172, (STRING)"'); yyWriteNl; RETURN;", 22L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  END;", 6L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  yyWriteNodeType (yyf, yyt);", 29L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  CASE yyt^.Kind OF", 19L);
ZfM_33(Zq0A4_172);
Zq0A4_184(W_1->Y13, (Zq0A4_170)Z173);
ZfM_29(Zq0A4_172, (STRING)"  ELSE", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  END;", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" END Write", 10L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"Node;", 5L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
}
if (ZpmCQ_25(ORD('w'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)"VAR yyIndentLevel	: SHORTINT;", 29L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"PROCEDURE Write", 15L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)" (yyyf: IO.tFile; yyt: ", 23L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)");", 2L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" VAR yySaveLevel	: SHORTINT;", 28L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" BEGIN", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  yyf := yyyf;", 14L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  IF yyRecursionLevel = 0 THEN yyLabelCount := 0; END;", 54L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  INC (yyRecursionLevel);", 25L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  yyMark (yyt);", 15L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  yySaveLevel := yyIndentLevel;", 31L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  yyIndentLevel := 0;", 21L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  yyWrite", 9L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)" (yyt);", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  yyIndentLevel := yySaveLevel;", 31L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  DEC (yyRecursionLevel);", 25L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" END Write", 10L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"PROCEDURE yyIndentSelector (yys: ARRAY OF CHAR);", 48L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" BEGIN Layout.WriteSpaces (yyf, yyIndentLevel); yyWriteSelector (yys); END yyIndentSelector;", 92L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"PROCEDURE yyIndentSelectorTree (yys: ARRAY OF CHAR; yyt: ", 57L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)");", 2L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" BEGIN writeSELECTOR (yys); yyWrite", 35L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)" (yyt); END yyIndentSelectorTree;", 33L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
Zq0A4_184(W_1->Y13, (Zq0A4_170)Z174);
ZfM_29(Zq0A4_172, (STRING)"PROCEDURE yyWrite", 17L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)" (yyt: ", 7L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)");", 2L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" VAR yyLevel	: SHORTCARD;", 25L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" BEGIN", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  yyLevel := yyIndentLevel;", 27L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  LOOP", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   IF yyt = ", 12L);
Zq0A4_192(Zq0A4_88);
ZfM_29(Zq0A4_172, (STRING)" THEN", 5L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"    IO.WriteS (yyf, ' ", 22L);
Zq0A4_192(Zq0A4_88);
ZfM_29(Zq0A4_172, (STRING)"'); yyWriteNl; EXIT;", 20L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   ELSIF yyt^.yyHead.yyMark = 0 THEN", 36L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"    IO.WriteC (yyf, '^'); IO.WriteI (yyf, yyMapToLabel (yyt), 0); yyWriteNl; EXIT;", 82L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   ELSIF yyt^.yyHead.yyMark > 1 THEN", 36L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"    yyWriteNl; IO.WriteN (yyf, yyMapToLabel (yyt), 6, 10); IO.WriteC (yyf, ':');", 80L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"    Layout.WriteSpaces (yyf, yyIndentLevel - 7);", 48L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   ELSE", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"    IO.WriteC (yyf, ' ');", 25L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   END;", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   yyt^.yyHead.yyMark := 0;", 27L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   INC (yyIndentLevel, 2);", 26L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   CASE yyt^.Kind OF", 20L);
ZfM_33(Zq0A4_172);
Zq0A4_184(W_1->Y13, (Zq0A4_170)Z175);
ZfM_29(Zq0A4_172, (STRING)"   ELSE EXIT;", 13L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   END;", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  END;", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  yyIndentLevel := yyLevel;", 27L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" END yyWrite", 12L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
}
if (ZpmCQ_25(ORD('r'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)"PROCEDURE Read", 14L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)" (yyyf: IO.tFile): ", 19L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" VAR yyt	: ", 11L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" BEGIN", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  yyf := yyyf;", 14L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  IF yyRecursionLevel = 0 THEN yyLabelCount := 0; END;", 54L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  INC (yyRecursionLevel);", 25L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  IF NOT yyIsInitialized THEN", 29L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   yyInitKindToIdent; yyIsInitialized := TRUE;", 46L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  END;", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  yyRead", 8L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)" (SYSTEM.ADR (yyt));", 20L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  DEC (yyRecursionLevel);", 25L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  RETURN yyt;", 13L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" END Read", 9L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"PROCEDURE yyRead", 16L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)" (yyt: yytTreePtr);", 19L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" BEGIN", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  LOOP", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   CASE IO.ReadC (yyf) OF", 25L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   | '^': yyLabel := IO.ReadI (yyf); yyReadNl; yyt^ := yyMapToTree (yyLabel); RETURN;", 85L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   | 12C, '0': yyLabel := IO.ReadI (yyf); yyc := IO.ReadC (yyf);", 64L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"    Layout.SkipSpaces (yyf); Strings.ReadL (yyf, yys);", 54L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"    yyKind := yyMapToKind (yys); yyt^ := Make", 45L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)" (yyKind);", 10L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"    IF yyLabel # yyMapToLabel (yyt^) THEN IO.WriteS (IO.StdError, '", 67L);
Zq0A4_192(Zq0A4_85);
ZfM_29(Zq0A4_172, (STRING)": error in Read", 15L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"'); IO.WriteNl (IO.StdError); yyExit; END;", 42L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   ELSE", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"    Layout.SkipSpaces (yyf); Strings.ReadL (yyf, yys);", 54L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"    yyKind := yyMapToKind (yys);", 32L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"    IF yyKind = 0 THEN yyt^ := ", 31L);
Zq0A4_192(Zq0A4_88);
ZfM_29(Zq0A4_172, (STRING)"; RETURN; END;", 14L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"    yyt^ := Make", 16L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)" (yyKind);", 10L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   END;", 7L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   CASE yyKind OF", 17L);
ZfM_33(Zq0A4_172);
Zq0A4_184(W_1->Y13, (Zq0A4_170)Z176);
ZfM_29(Zq0A4_172, (STRING)"   ELSE RETURN;", 15L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   END;", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  END;", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" END yyRead", 11L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"VAR yyKindToIdent	: ARRAY [0..", 30L);
Zq0A4_195(Zq0A4_68);
ZfM_29(Zq0A4_172, (STRING)"] OF Idents.tIdent;", 19L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"VAR yyIsInitialized	: BOOLEAN;", 30L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"PROCEDURE yyMapToKind (VAR yys: Strings.tString): SHORTCARD;", 60L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" VAR yyi	: Idents.tIdent;", 25L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" VAR yyk	: SHORTCARD;", 21L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" BEGIN", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  yyi := Idents.MakeIdent (yys);", 32L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  FOR yyk := 0 TO ", 18L);
Zq0A4_195(Zq0A4_68);
ZfM_29(Zq0A4_172, (STRING)" DO", 3L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   IF yyKindToIdent [yyk] = yyi THEN RETURN yyk; END;", 53L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  END;", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  RETURN 0;", 11L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" END yyMapToKind;", 17L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"PROCEDURE yyInitKindToIdent2 (yya: ARRAY OF CHAR; yyKind: SHORTCARD);", 69L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" VAR yys	: Strings.tString;", 27L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" BEGIN", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  Strings.ArrayToString (yya, yys);", 35L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  yyKindToIdent [yyKind] := Idents.MakeIdent (yys);", 51L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" END yyInitKindToIdent2;", 24L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"PROCEDURE yyInitKindToIdent;", 28L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" BEGIN", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  yyInitKindToIdent2 ('", 23L);
Zq0A4_192(Zq0A4_88);
ZfM_29(Zq0A4_172, (STRING)"', 0);", 6L);
ZfM_33(Zq0A4_172);
Zq0A4_184(W_1->Y13, (Zq0A4_170)Z177);
ZfM_29(Zq0A4_172, (STRING)" END yyInitKindToIdent;", 23L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"PROCEDURE yyReadNl; BEGIN IO.ReadNl (yyf); END yyReadNl;", 56L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"PROCEDURE yyReadIdent (): Idents.tIdent;", 40L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" VAR yys	: Strings.tString;", 27L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" BEGIN", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  Strings.ReadL (yyf, yys);", 27L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  IO.UnRead (yyf);", 18L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  RETURN Idents.MakeIdent (yys);", 32L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" END yyReadIdent;", 17L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"PROCEDURE yyReadHex (VAR yyx: ARRAY OF SYSTEM.BYTE);", 52L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" VAR yyi	: INTEGER;", 19L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" BEGIN", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  FOR yyi := 0 TO INTEGER (HIGH (yyx)) DO", 41L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   yyx [yyi] := SYSTEM.BYTE (CHR (CARDINAL (IO.ReadN (yyf, 16))));", 66L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  END;", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" END yyReadHex;", 15L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"PROCEDURE yySkip;", 17L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" BEGIN", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  REPEAT UNTIL IO.ReadC (yyf) = '='; yyc := IO.ReadC (yyf);", 59L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" END yySkip;", 12L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"PROCEDURE yyReadSelectorTree (yyt: yytTreePtr);", 47L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" BEGIN", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  readSELECTOR (); yyRead", 25L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)" (yyt);", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" END yyReadSelectorTree;", 24L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
}
ZfM_29(Zq0A4_172, (STRING)"CONST yyNil	= 374C;", 19L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"CONST yyNoLabel	= 375C;", 23L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"CONST yyLabelDef	= 376C;", 24L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"CONST yyLabelUse	= 377C;", 24L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
if (ZpmCQ_25(ORD('p'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)"PROCEDURE Put", 13L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)" (yyyf: IO.tFile; yyt: ", 23L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)");", 2L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" BEGIN", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  yyf := yyyf;", 14L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  IF yyRecursionLevel = 0 THEN yyLabelCount := 0; END;", 54L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  INC (yyRecursionLevel);", 25L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  yyMark (yyt);", 15L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  yyPut", 7L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)" (yyt);", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  DEC (yyRecursionLevel);", 25L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" END Put", 8L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"PROCEDURE yyPut", 15L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)" (yyt: ", 7L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)");", 2L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" BEGIN", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  LOOP", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   IF yyt = ", 12L);
Zq0A4_192(Zq0A4_88);
ZfM_29(Zq0A4_172, (STRING)" THEN", 5L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"    IO.WriteC (yyf, yyNil); RETURN;", 35L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   ELSIF yyt^.yyHead.yyMark = 0 THEN", 36L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"    IO.WriteC (yyf, yyLabelUse); yyLabel := yyMapToLabel (yyt); yyPut (yyLabel);", 80L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"    RETURN;", 11L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   ELSIF yyt^.yyHead.yyMark > 1 THEN", 36L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"    IO.WriteC (yyf, yyLabelDef); yyLabel := yyMapToLabel (yyt); yyPut (yyLabel);", 80L);
ZfM_33(Zq0A4_172);
if (Zq0A4_68 > 251) {
ZfM_29(Zq0A4_172, (STRING)"    yyPut (yyt^.Kind);", 22L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   ELSIF yyt^.Kind > 251 THEN", 29L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"    IO.WriteC (yyf, yyNoLabel); yyPut (yyt^.Kind);", 50L);
ZfM_33(Zq0A4_172);
} else {
ZfM_29(Zq0A4_172, (STRING)"    IO.WriteC (yyf, CHR (yyt^.Kind));", 37L);
ZfM_33(Zq0A4_172);
}
ZfM_29(Zq0A4_172, (STRING)"   ELSE", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"    IO.WriteC (yyf, CHR (yyt^.Kind));", 37L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   END;", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   yyt^.yyHead.yyMark := 0;", 27L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   CASE yyt^.Kind OF", 20L);
ZfM_33(Zq0A4_172);
Zq0A4_184(W_1->Y13, (Zq0A4_170)Z178);
ZfM_29(Zq0A4_172, (STRING)"   ELSE RETURN;", 15L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   END;", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  END;", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" END yyPut", 10L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"PROCEDURE yyPut (VAR yyx: ARRAY OF SYSTEM.BYTE);", 48L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" VAR yyi	: INTEGER;", 19L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" BEGIN", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  yyi := IO.Write (yyf, SYSTEM.ADR (yyx), INTEGER (HIGH (yyx)) + 1);", 68L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" END yyPut;", 11L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"PROCEDURE yyPutIdent (yyi: Idents.tIdent);", 42L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" VAR yys	: Strings.tString;", 27L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" BEGIN", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  Idents.GetString (yyi, yys);", 30L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  Strings.WriteL (yyf, yys);", 28L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" END yyPutIdent;", 16L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
}
if (ZpmCQ_25(ORD('g'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)"PROCEDURE Get", 13L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)" (yyyf: IO.tFile): ", 19L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" VAR yyt	: ", 11L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" BEGIN", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  yyf := yyyf;", 14L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  IF yyRecursionLevel = 0 THEN yyLabelCount := 0; END;", 54L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  INC (yyRecursionLevel);", 25L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  yyGet", 7L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)" (SYSTEM.ADR (yyt));", 20L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  DEC (yyRecursionLevel);", 25L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  RETURN yyt;", 13L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" END Get", 8L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"PROCEDURE yyGet", 15L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)" (yyt: yytTreePtr);", 19L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" BEGIN", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  LOOP", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   yyc := IO.ReadC (yyf);", 25L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   CASE yyc OF", 14L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   | yyNil	: yyt^ := ", 21L);
Zq0A4_192(Zq0A4_88);
ZfM_29(Zq0A4_172, (STRING)"; RETURN;", 9L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   | yyLabelUse	: yyGet (yyLabel); yyt^ := yyMapToTree (yyLabel); RETURN;", 73L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   | yyLabelDef	: yyGet (yyLabel);", 34L);
if (Zq0A4_68 > 251) {
ZfM_29(Zq0A4_172, (STRING)" yyGet (yyKind);", 16L);
} else {
ZfM_29(Zq0A4_172, (STRING)" yyKind := ORD (IO.ReadC (yyf));", 32L);
}
ZfM_29(Zq0A4_172, (STRING)" yyt^ := Make", 13L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)" (yyKind);", 10L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"    IF yyLabel # yyMapToLabel (yyt^) THEN IO.WriteS (IO.StdError, '", 67L);
Zq0A4_192(Zq0A4_85);
ZfM_29(Zq0A4_172, (STRING)": error in Get", 14L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"'); IO.WriteNl (IO.StdError); yyExit; END;", 42L);
ZfM_33(Zq0A4_172);
if (Zq0A4_68 > 251) {
ZfM_29(Zq0A4_172, (STRING)"   | yyNoLabel	: yyGet (yyKind); yyt^ := Make", 45L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)" (yyKind);", 10L);
ZfM_33(Zq0A4_172);
}
ZfM_29(Zq0A4_172, (STRING)"   ELSE yyKind := ORD (yyc); yyt^ := Make", 41L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)" (yyKind);", 10L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   END;", 7L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   CASE yyKind OF", 17L);
ZfM_33(Zq0A4_172);
Zq0A4_184(W_1->Y13, (Zq0A4_170)Z179);
ZfM_29(Zq0A4_172, (STRING)"   ELSE RETURN;", 15L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   END;", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  END;", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" END yyGet", 10L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"PROCEDURE yyGet (VAR yyx: ARRAY OF SYSTEM.BYTE);", 48L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" VAR yyi	: INTEGER;", 19L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" BEGIN", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  yyi := IO.Read (yyf, SYSTEM.ADR (yyx), INTEGER (HIGH (yyx)) + 1);", 67L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" END yyGet;", 11L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"PROCEDURE yyGetIdent (VAR yyi: Idents.tIdent);", 46L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" VAR yys	: Strings.tString;", 27L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" BEGIN", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  Strings.ReadL (yyf, yys);", 27L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  yyi := Idents.MakeIdent (yys);", 32L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" END yyGetIdent;", 16L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
}
return;
}
}
}

static void Z173
# ifdef HAVE_ARGS
(Zq0A4_153 Z167)
# else
(Z167)
Zq0A4_153 Z167;
# endif
{
struct S_19 Z165;

if (Z167 == Zq0A4_97) {
return;
}
if (Z167 != NIL && Z167->U_1.V_1.Y0 == Zq0A4_100) {
for (;;) {
{
register Zq0A4_226 *W_2 = &Z167->U_1.V_5.Y4;

if (!((Zq0A4_177 & W_2->Y2) == 0X0L)) {
goto EXIT_1;
}
if (!(((SET_ELEM (Zq0A4_44) | SET_ELEM (Zq0A4_45)) & W_2->Y2) != 0X0L)) {
goto EXIT_1;
}
ZfM_29(Zq0A4_172, (STRING)"| ", 2L);
Zq0A4_192(W_2->Y1);
ZfM_29(Zq0A4_172, (STRING)": yWriteNode", 12L);
Zq0A4_192(W_2->Y1);
ZfM_29(Zq0A4_172, (STRING)" (yyt);", 7L);
ZfM_33(Zq0A4_172);
return;
}
} EXIT_1:;
}
}

static void Z172
# ifdef HAVE_ARGS
(Zq0A4_153 Z167)
# else
(Z167)
Zq0A4_153 Z167;
# endif
{
struct S_18 Z165;

if (Z167 == Zq0A4_97) {
return;
}
if (Z167 != NIL && Z167->U_1.V_1.Y0 == Zq0A4_100) {
for (;;) {
{
register Zq0A4_226 *W_3 = &Z167->U_1.V_5.Y4;

if (!((Zq0A4_177 & W_3->Y2) == 0X0L && ((SET_ELEM (Zq0A4_44) | SET_ELEM (Zq0A4_45)) & W_3->Y2) != 0X0L)) {
goto EXIT_2;
}
ZfM_29(Zq0A4_172, (STRING)"PROCEDURE yWriteNode", 20L);
Zq0A4_192(W_3->Y1);
ZfM_29(Zq0A4_172, (STRING)" (yyt: ", 7L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)");", 2L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" BEGIN", 6L);
ZfM_33(Zq0A4_172);
if (W_3->Y6->U_1.V_1.Y0 == Zq0A4_100 && ((SET_ELEM (Zq0A4_44) | SET_ELEM (Zq0A4_45)) & W_3->Y6->U_1.V_5.Y4.Y2) != 0X0L) {
ZfM_29(Zq0A4_172, (STRING)"  yWriteNode", 12L);
Zq0A4_192(W_3->Y6->U_1.V_5.Y4.Y1);
ZfM_29(Zq0A4_172, (STRING)" (yyt);", 7L);
ZfM_33(Zq0A4_172);
}
Z149 = W_3->Y1;
Zq0A4_185(W_3->Y3, (Zq0A4_170)Z172);
ZfM_29(Zq0A4_172, (STRING)" END yWriteNode", 15L);
Zq0A4_192(W_3->Y1);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
return;
}
} EXIT_2:;
}
if (Z167 != NIL && Z167->U_1.V_1.Y0 == Zq0A4_105) {
{
register Zq0A4_231 *W_4 = &Z167->U_1.V_10.Y9;

ZfM_29(Zq0A4_172, (STRING)"  yyWriteSelector ('", 20L);
Zq0A4_192(W_4->Y3);
ZfM_29(Zq0A4_172, (STRING)"');", 3L);
ZfM_29(Zq0A4_172, (STRING)" yyWriteAddr (yyt^.", 19L);
Zq0A4_192(Z149);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(W_4->Y3);
ZfM_29(Zq0A4_172, (STRING)");", 2L);
ZfM_33(Zq0A4_172);
return;
}
}
if (Z167 != NIL && Z167->U_1.V_1.Y0 == Zq0A4_106) {
for (;;) {
{
register Zq0A4_232 *W_5 = &Z167->U_1.V_11.Y10;

if (!((Zq0A4_176 & W_5->Y6) == 0X0L)) {
goto EXIT_3;
}
ZfM_29(Zq0A4_172, (STRING)"  yyWriteSelector ('", 20L);
Zq0A4_192(W_5->Y3);
ZfM_29(Zq0A4_172, (STRING)"'); write", 9L);
Zq0A4_192(W_5->Y4);
ZfM_29(Zq0A4_172, (STRING)" (yyt^.", 7L);
Zq0A4_192(Z149);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(W_5->Y3);
ZfM_29(Zq0A4_172, (STRING)") yyWriteNl;", 12L);
ZfM_33(Zq0A4_172);
return;
}
} EXIT_3:;
}
}

static void Z171
# ifdef HAVE_ARGS
(Zq0A4_153 Z167)
# else
(Z167)
Zq0A4_153 Z167;
# endif
{
struct S_17 Z165;

if (Z167 == Zq0A4_97) {
return;
}
if (Z167 != NIL && Z167->U_1.V_1.Y0 == Zq0A4_100) {
for (;;) {
{
register Zq0A4_226 *W_6 = &Z167->U_1.V_5.Y4;

if (!((Zq0A4_177 & W_6->Y2) == 0X0L && IN(Zq0A4_44, W_6->Y2))) {
goto EXIT_4;
}
ZfM_29(Zq0A4_172, (STRING)"| ", 2L);
Zq0A4_192(W_6->Y1);
ZfM_29(Zq0A4_172, (STRING)":", 1L);
ZfM_33(Zq0A4_172);
Zq0A4gqDK_8(Z167);
Z149 = W_6->Y1;
Zq0A4_185(Z167, (Zq0A4_170)Z171);
ZfM_29(Zq0A4_172, (STRING)"yyt := yyt^.", 12L);
Zq0A4_192(Z149);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(Zq0A4gqDK_1->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
return;
}
} EXIT_4:;
}
if (Z167 != NIL && Z167->U_1.V_1.Y0 == Zq0A4_105) {
for (;;) {
{
register Zq0A4_231 *W_7 = &Z167->U_1.V_10.Y9;

if (!(Z167 != Zq0A4gqDK_1)) {
goto EXIT_5;
}
ZfM_29(Zq0A4_172, (STRING)"yyMark (yyt^.", 13L);
Zq0A4_192(Z149);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(W_7->Y3);
ZfM_29(Zq0A4_172, (STRING)");", 2L);
ZfM_33(Zq0A4_172);
return;
}
} EXIT_5:;
}
if (Z167 != NIL && Z167->U_1.V_1.Y0 == Zq0A4_106) {
for (;;) {
{
register Zq0A4_232 *W_8 = &Z167->U_1.V_11.Y10;

if (!((Zq0A4_176 & W_8->Y6) == 0X0L)) {
goto EXIT_6;
}
if (!(W_8->Y4 == Zq0A4_86)) {
goto EXIT_6;
}
ZfM_29(Zq0A4_172, (STRING)"# ifdef SUPPORT_TVA", 19L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"IF ", 3L);
Zq0A4gqDK_6();
ZfM_29(Zq0A4_172, (STRING)" THEN yyMark (yyt^.", 19L);
Zq0A4_192(Z149);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(W_8->Y3);
ZfM_29(Zq0A4_172, (STRING)"); END;", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# endif", 7L);
ZfM_33(Zq0A4_172);
return;
}
} EXIT_6:;
}
}

static void Z175
# ifdef HAVE_ARGS
(Zq0A4_153 Z167)
# else
(Z167)
Zq0A4_153 Z167;
# endif
{
struct S_16 Z165;

if (Z167 == Zq0A4_97) {
return;
}
if (Z167 != NIL && Z167->U_1.V_1.Y0 == Zq0A4_100) {
{
register Zq0A4_226 *W_9 = &Z167->U_1.V_5.Y4;

if ((Zq0A4_177 & W_9->Y2) == 0X0L) {
ZfM_29(Zq0A4_172, (STRING)"| ", 2L);
Zq0A4_192(W_9->Y1);
ZfM_29(Zq0A4_172, (STRING)": ", 2L);
if (((SET_ELEM (Zq0A4_44) | SET_ELEM (Zq0A4_45)) & W_9->Y2) != 0X0L) {
ZfM_29(Zq0A4_172, (STRING)"yWrite", 6L);
Zq0A4_192(W_9->Y1);
ZfM_29(Zq0A4_172, (STRING)" (yyt); ", 8L);
Zq0A4gqDK_8(Z167);
if (Zq0A4gqDK_1 == Zq0A4_97) {
ZfM_29(Zq0A4_172, (STRING)"EXIT;", 5L);
ZfM_33(Zq0A4_172);
} else {
ZfM_29(Zq0A4_172, (STRING)"writeSELECTOR ('", 16L);
Zq0A4_192(Zq0A4gqDK_1->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)"'); ", 4L);
ZfM_29(Zq0A4_172, (STRING)"yyt := yyt^.", 12L);
Zq0A4_192(W_9->Y1);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(Zq0A4gqDK_1->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
}
} else {
ZfM_29(Zq0A4_172, (STRING)"IO.WriteS (yyf, '", 17L);
Zq0A4_192(W_9->Y1);
ZfM_29(Zq0A4_172, (STRING)"'); yyWriteNl; EXIT;", 20L);
ZfM_33(Zq0A4_172);
}
}
return;
}
}
}

static void Z174
# ifdef HAVE_ARGS
(Zq0A4_153 Z167)
# else
(Z167)
Zq0A4_153 Z167;
# endif
{
struct S_15 Z165;

if (Z167 == Zq0A4_97) {
return;
}
if (Z167 != NIL && Z167->U_1.V_1.Y0 == Zq0A4_100) {
for (;;) {
{
register Zq0A4_226 *W_10 = &Z167->U_1.V_5.Y4;

if (!((Zq0A4_177 & W_10->Y2) == 0X0L && ((SET_ELEM (Zq0A4_44) | SET_ELEM (Zq0A4_45)) & W_10->Y2) != 0X0L)) {
goto EXIT_7;
}
ZfM_29(Zq0A4_172, (STRING)"PROCEDURE yWrite", 16L);
Zq0A4_192(W_10->Y1);
ZfM_29(Zq0A4_172, (STRING)" (yyt: ", 7L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)");", 2L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" BEGIN", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  yyWriteNodeType (yyf, yyt);", 29L);
ZfM_33(Zq0A4_172);
Zq0A4gqDK_8(Z167);
Z149 = W_10->Y1;
Zq0A4_185(Z167, (Zq0A4_170)Z174);
ZfM_29(Zq0A4_172, (STRING)" END yWrite", 11L);
Zq0A4_192(W_10->Y1);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
return;
}
} EXIT_7:;
}
if (Z167 != NIL && Z167->U_1.V_1.Y0 == Zq0A4_105) {
for (;;) {
{
register Zq0A4_231 *W_11 = &Z167->U_1.V_10.Y9;

if (!(Z167 != Zq0A4gqDK_1)) {
goto EXIT_8;
}
ZfM_29(Zq0A4_172, (STRING)"  yyIndentSelectorTree ('", 25L);
Zq0A4_192(W_11->Y3);
ZfM_29(Zq0A4_172, (STRING)"', yyt^.", 8L);
Zq0A4_192(Z149);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(W_11->Y3);
ZfM_29(Zq0A4_172, (STRING)");", 2L);
ZfM_33(Zq0A4_172);
return;
}
} EXIT_8:;
}
if (Z167 != NIL && Z167->U_1.V_1.Y0 == Zq0A4_106) {
for (;;) {
{
register Zq0A4_232 *W_12 = &Z167->U_1.V_11.Y10;

if (!((Zq0A4_176 & W_12->Y6) == 0X0L)) {
goto EXIT_9;
}
if (W_12->Y4 == Zq0A4_86) {
ZfM_29(Zq0A4_172, (STRING)"# ifdef SUPPORT_TVA", 19L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"IF ", 3L);
Zq0A4gqDK_6();
ZfM_29(Zq0A4_172, (STRING)" THEN", 5L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  yyIndentSelectorTree (\"", 25L);
Zq0A4_192(W_12->Y3);
ZfM_29(Zq0A4_172, (STRING)"\",", 2L);
ZfM_29(Zq0A4_172, (STRING)" yyt^.", 6L);
Zq0A4_192(Z149);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(W_12->Y3);
ZfM_29(Zq0A4_172, (STRING)");", 2L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"ELSE", 4L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# endif", 7L);
ZfM_33(Zq0A4_172);
}
ZfM_29(Zq0A4_172, (STRING)"  writeSELECTOR ('", 18L);
Zq0A4_192(W_12->Y3);
ZfM_29(Zq0A4_172, (STRING)"'); ", 4L);
ZfM_29(Zq0A4_172, (STRING)"write", 5L);
Zq0A4_192(W_12->Y4);
ZfM_29(Zq0A4_172, (STRING)" (yyt^.", 7L);
Zq0A4_192(Z149);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(W_12->Y3);
ZfM_29(Zq0A4_172, (STRING)") yyWriteNl;", 12L);
ZfM_33(Zq0A4_172);
if (W_12->Y4 == Zq0A4_86) {
ZfM_29(Zq0A4_172, (STRING)"# ifdef SUPPORT_TVA", 19L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"END;", 4L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# endif", 7L);
ZfM_33(Zq0A4_172);
}
return;
}
} EXIT_9:;
}
}

static void Z176
# ifdef HAVE_ARGS
(Zq0A4_153 Z167)
# else
(Z167)
Zq0A4_153 Z167;
# endif
{
struct S_14 Z165;

if (Z167 == Zq0A4_97) {
return;
}
if (Z167 != NIL && Z167->U_1.V_1.Y0 == Zq0A4_100) {
for (;;) {
{
register Zq0A4_226 *W_13 = &Z167->U_1.V_5.Y4;

if (!((Zq0A4_177 & W_13->Y2) == 0X0L && ((SET_ELEM (Zq0A4_44) | SET_ELEM (Zq0A4_45)) & W_13->Y2) != 0X0L)) {
goto EXIT_10;
}
ZfM_29(Zq0A4_172, (STRING)"| ", 2L);
Zq0A4_192(W_13->Y1);
ZfM_29(Zq0A4_172, (STRING)":", 1L);
ZfM_33(Zq0A4_172);
Zq0A4gqDK_8(Z167);
Z149 = W_13->Y1;
Zq0A4_185(Z167, (Zq0A4_170)Z176);
if (Zq0A4gqDK_1 == Zq0A4_97) {
ZfM_29(Zq0A4_172, (STRING)"RETURN;", 7L);
ZfM_33(Zq0A4_172);
} else {
ZfM_29(Zq0A4_172, (STRING)"readSELECTOR (); yyt := SYSTEM.ADR (yyt^^.", 42L);
Zq0A4_192(Z149);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(Zq0A4gqDK_1->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)");", 2L);
ZfM_33(Zq0A4_172);
}
return;
}
} EXIT_10:;
}
if (Z167 != NIL && Z167->U_1.V_1.Y0 == Zq0A4_105) {
for (;;) {
{
register Zq0A4_231 *W_14 = &Z167->U_1.V_10.Y9;

if (!(Z167 != Zq0A4gqDK_1)) {
goto EXIT_11;
}
ZfM_29(Zq0A4_172, (STRING)"yyReadSelectorTree (SYSTEM.ADR (yyt^^.", 38L);
Zq0A4_192(Z149);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(W_14->Y3);
ZfM_29(Zq0A4_172, (STRING)"));", 3L);
ZfM_33(Zq0A4_172);
return;
}
} EXIT_11:;
}
if (Z167 != NIL && Z167->U_1.V_1.Y0 == Zq0A4_106) {
for (;;) {
{
register Zq0A4_232 *W_15 = &Z167->U_1.V_11.Y10;

if (!((Zq0A4_176 & W_15->Y6) == 0X0L)) {
goto EXIT_12;
}
if (W_15->Y4 == Zq0A4_86) {
ZfM_29(Zq0A4_172, (STRING)"# ifdef SUPPORT_TVA", 19L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"IF ", 3L);
Zq0A4gqDK_6();
ZfM_29(Zq0A4_172, (STRING)" THEN", 5L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" yyReadSelectorTree (SYSTEM.ADR (yyt^^.", 39L);
Zq0A4_192(Z149);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(W_15->Y3);
ZfM_29(Zq0A4_172, (STRING)"));", 3L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"ELSE", 4L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# endif", 7L);
ZfM_33(Zq0A4_172);
}
ZfM_29(Zq0A4_172, (STRING)"readSELECTOR (); read", 21L);
Zq0A4_192(W_15->Y4);
ZfM_29(Zq0A4_172, (STRING)" (yyt^^.", 8L);
Zq0A4_192(Z149);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(W_15->Y3);
ZfM_29(Zq0A4_172, (STRING)") yyReadNl;", 11L);
ZfM_33(Zq0A4_172);
if (W_15->Y4 == Zq0A4_86) {
ZfM_29(Zq0A4_172, (STRING)"# ifdef SUPPORT_TVA", 19L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"END;", 4L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# endif", 7L);
ZfM_33(Zq0A4_172);
}
return;
}
} EXIT_12:;
}
}

static void Z178
# ifdef HAVE_ARGS
(Zq0A4_153 Z167)
# else
(Z167)
Zq0A4_153 Z167;
# endif
{
struct S_13 Z165;

if (Z167 == Zq0A4_97) {
return;
}
if (Z167 != NIL && Z167->U_1.V_1.Y0 == Zq0A4_100) {
for (;;) {
{
register Zq0A4_226 *W_16 = &Z167->U_1.V_5.Y4;

if (!((Zq0A4_177 & W_16->Y2) == 0X0L && ((SET_ELEM (Zq0A4_44) | SET_ELEM (Zq0A4_45)) & W_16->Y2) != 0X0L)) {
goto EXIT_13;
}
ZfM_29(Zq0A4_172, (STRING)"| ", 2L);
Zq0A4_192(W_16->Y1);
ZfM_29(Zq0A4_172, (STRING)":", 1L);
ZfM_33(Zq0A4_172);
Zq0A4gqDK_8(Z167);
Z149 = W_16->Y1;
Zq0A4_185(Z167, (Zq0A4_170)Z178);
if (Zq0A4gqDK_1 == Zq0A4_97) {
ZfM_29(Zq0A4_172, (STRING)"RETURN;", 7L);
ZfM_33(Zq0A4_172);
} else {
ZfM_29(Zq0A4_172, (STRING)"yyt := yyt^.", 12L);
Zq0A4_192(Z149);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(Zq0A4gqDK_1->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
}
return;
}
} EXIT_13:;
}
if (Z167 != NIL && Z167->U_1.V_1.Y0 == Zq0A4_105) {
for (;;) {
{
register Zq0A4_231 *W_17 = &Z167->U_1.V_10.Y9;

if (!(Z167 != Zq0A4gqDK_1)) {
goto EXIT_14;
}
ZfM_29(Zq0A4_172, (STRING)"yyPut", 5L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)" (yyt^.", 7L);
Zq0A4_192(Z149);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(W_17->Y3);
ZfM_29(Zq0A4_172, (STRING)");", 2L);
ZfM_33(Zq0A4_172);
return;
}
} EXIT_14:;
}
if (Z167 != NIL && Z167->U_1.V_1.Y0 == Zq0A4_106) {
for (;;) {
{
register Zq0A4_232 *W_18 = &Z167->U_1.V_11.Y10;

if (!((Zq0A4_176 & W_18->Y6) == 0X0L)) {
goto EXIT_15;
}
if (W_18->Y4 == Zq0A4_86) {
ZfM_29(Zq0A4_172, (STRING)"# ifdef SUPPORT_TVA", 19L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"IF ", 3L);
Zq0A4gqDK_6();
ZfM_29(Zq0A4_172, (STRING)" THEN", 5L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" yyPut", 6L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)" (yyt^.", 7L);
Zq0A4_192(Z149);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(W_18->Y3);
ZfM_29(Zq0A4_172, (STRING)");", 2L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"ELSE", 4L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# endif", 7L);
ZfM_33(Zq0A4_172);
}
ZfM_29(Zq0A4_172, (STRING)"put", 3L);
Zq0A4_192(W_18->Y4);
ZfM_29(Zq0A4_172, (STRING)" (yyt^.", 7L);
Zq0A4_192(Z149);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(W_18->Y3);
ZfM_29(Zq0A4_172, (STRING)")", 1L);
ZfM_33(Zq0A4_172);
if (W_18->Y4 == Zq0A4_86) {
ZfM_29(Zq0A4_172, (STRING)"# ifdef SUPPORT_TVA", 19L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"END;", 4L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# endif", 7L);
ZfM_33(Zq0A4_172);
}
return;
}
} EXIT_15:;
}
}

static void Z179
# ifdef HAVE_ARGS
(Zq0A4_153 Z167)
# else
(Z167)
Zq0A4_153 Z167;
# endif
{
struct S_12 Z165;

if (Z167 == Zq0A4_97) {
return;
}
if (Z167 != NIL && Z167->U_1.V_1.Y0 == Zq0A4_100) {
for (;;) {
{
register Zq0A4_226 *W_19 = &Z167->U_1.V_5.Y4;

if (!((Zq0A4_177 & W_19->Y2) == 0X0L && ((SET_ELEM (Zq0A4_44) | SET_ELEM (Zq0A4_45)) & W_19->Y2) != 0X0L)) {
goto EXIT_16;
}
ZfM_29(Zq0A4_172, (STRING)"| ", 2L);
Zq0A4_192(W_19->Y1);
ZfM_29(Zq0A4_172, (STRING)":", 1L);
ZfM_33(Zq0A4_172);
Zq0A4gqDK_8(Z167);
Z149 = W_19->Y1;
Zq0A4_185(Z167, (Zq0A4_170)Z179);
if (Zq0A4gqDK_1 == Zq0A4_97) {
ZfM_29(Zq0A4_172, (STRING)"RETURN;", 7L);
ZfM_33(Zq0A4_172);
} else {
ZfM_29(Zq0A4_172, (STRING)"yyt := SYSTEM.ADR (yyt^^.", 25L);
Zq0A4_192(Z149);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(Zq0A4gqDK_1->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)");", 2L);
ZfM_33(Zq0A4_172);
}
return;
}
} EXIT_16:;
}
if (Z167 != NIL && Z167->U_1.V_1.Y0 == Zq0A4_105) {
for (;;) {
{
register Zq0A4_231 *W_20 = &Z167->U_1.V_10.Y9;

if (!(Z167 != Zq0A4gqDK_1)) {
goto EXIT_17;
}
ZfM_29(Zq0A4_172, (STRING)"yyGet", 5L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)" (SYSTEM.ADR (yyt^^.", 20L);
Zq0A4_192(Z149);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(W_20->Y3);
ZfM_29(Zq0A4_172, (STRING)"));", 3L);
ZfM_33(Zq0A4_172);
return;
}
} EXIT_17:;
}
if (Z167 != NIL && Z167->U_1.V_1.Y0 == Zq0A4_106) {
for (;;) {
{
register Zq0A4_232 *W_21 = &Z167->U_1.V_11.Y10;

if (!((Zq0A4_176 & W_21->Y6) == 0X0L)) {
goto EXIT_18;
}
if (W_21->Y4 == Zq0A4_86) {
ZfM_29(Zq0A4_172, (STRING)"# ifdef SUPPORT_TVA", 19L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"IF ", 3L);
Zq0A4gqDK_6();
ZfM_29(Zq0A4_172, (STRING)" THEN", 5L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" yyGet", 6L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)" (SYSTEM.ADR (yyt^^.", 20L);
Zq0A4_192(Z149);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(W_21->Y3);
ZfM_29(Zq0A4_172, (STRING)"));", 3L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"ELSE", 4L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# endif", 7L);
ZfM_33(Zq0A4_172);
}
ZfM_29(Zq0A4_172, (STRING)"get", 3L);
Zq0A4_192(W_21->Y4);
ZfM_29(Zq0A4_172, (STRING)" (yyt^^.", 8L);
Zq0A4_192(Z149);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(W_21->Y3);
ZfM_29(Zq0A4_172, (STRING)")", 1L);
ZfM_33(Zq0A4_172);
if (W_21->Y4 == Zq0A4_86) {
ZfM_29(Zq0A4_172, (STRING)"# ifdef SUPPORT_TVA", 19L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"END;", 4L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# endif", 7L);
ZfM_33(Zq0A4_172);
}
return;
}
} EXIT_18:;
}
}

static void Z177
# ifdef HAVE_ARGS
(Zq0A4_153 Z167)
# else
(Z167)
Zq0A4_153 Z167;
# endif
{
struct S_11 Z165;

if (Z167 == Zq0A4_97) {
return;
}
if (Z167 != NIL && Z167->U_1.V_1.Y0 == Zq0A4_100) {
{
register Zq0A4_226 *W_22 = &Z167->U_1.V_5.Y4;

if ((Zq0A4_177 & W_22->Y2) == 0X0L) {
ZfM_29(Zq0A4_172, (STRING)"  yyInitKindToIdent2 ('", 23L);
Zq0A4_192(W_22->Y1);
ZfM_29(Zq0A4_172, (STRING)"', ", 3L);
Zq0A4_192(W_22->Y1);
ZfM_29(Zq0A4_172, (STRING)");", 2L);
ZfM_33(Zq0A4_172);
}
return;
}
}
}

void Zq0A4gqDK_8
# ifdef HAVE_ARGS
(Zq0A4_153 Z167)
# else
(Z167)
Zq0A4_153 Z167;
# endif
{
struct S_10 Z165;

if (Z167 == Zq0A4_97) {
return;
}
if (Z167 != NIL && Z167->U_1.V_1.Y0 == Zq0A4_100) {
{
register Zq0A4_226 *W_23 = &Z167->U_1.V_5.Y4;

Zq0A4gqDK_1 = Zq0A4_97;
Z150 = Zq0A4_97;
Zq0A4_185(Z167, (Zq0A4_170)Zq0A4gqDK_8);
if (Z150 != Zq0A4_97) {
Zq0A4gqDK_1 = Z150;
}
return;
}
}
if (Z167 != NIL && Z167->U_1.V_1.Y0 == Zq0A4_105) {
{
register Zq0A4_231 *W_24 = &Z167->U_1.V_10.Y9;

Zq0A4gqDK_1 = Z167;
if (IN(Zq0A4_3, W_24->Y6)) {
Z150 = Z167;
}
return;
}
}
}

void Zq0A4gqDK_9
# ifdef HAVE_ARGS
(Zq0A4_153 Z167)
# else
(Z167)
Zq0A4_153 Z167;
# endif
{
struct S_9 Z165;

if (Z167 == Zq0A4_97) {
return;
}
if (Z167 != NIL && Z167->U_1.V_1.Y0 == Zq0A4_127) {
{
register Zq0A4_253 *W_25 = &Z167->U_1.V_32.Y31;

ZfM_29(Zq0A4_172, (STRING)"VAR yyLine, yyCurLine: CARDINAL;", 32L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"VAR yyTheTree, yyTheNode: ", 26L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"VAR yyFile: Idents.tIdent;", 26L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"PROCEDURE yySearch4 (yyt: ", 26L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)"; yyp: Position.tPosition);", 27L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" BEGIN", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  IF ((yyFile = Idents.NoIdent) OR (yyFile = yyp.File)) AND", 59L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"    (yyLine <= yyp.Line) AND (yyp.Line < yyCurLine) THEN", 56L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   yyTheNode := yyt; yyCurLine := yyp.Line; END;", 48L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" END yySearch4;", 15L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"PROCEDURE yySearch2 (yyt: ", 26L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)");", 2L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" BEGIN", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  CASE yyt^.Kind OF", 19L);
ZfM_33(Zq0A4_172);
Zq0A4_184(W_25->Y13, (Zq0A4_170)Z191);
ZfM_29(Zq0A4_172, (STRING)"  ELSE", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  END;", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" END yySearch2;", 15L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
return;
}
}
}

static void Z192
# ifdef HAVE_ARGS
(Zq0A4_153 Z167)
# else
(Z167)
Zq0A4_153 Z167;
# endif
{
struct S_8 Z165;

if (Z167 == Zq0A4_97) {
return;
}
if (Z167 != NIL && Z167->U_1.V_1.Y0 == Zq0A4_100) {
{
register Zq0A4_226 *W_26 = &Z167->U_1.V_5.Y4;

Zq0A4gqDK_1 = Zq0A4_97;
Zq0A4_185(Z167, (Zq0A4_170)Z192);
return;
}
}
if (Z167 != NIL && Z167->U_1.V_1.Y0 == Zq0A4_105) {
for (;;) {
{
register Zq0A4_231 *W_27 = &Z167->U_1.V_10.Y9;

if (!IN(Zq0A4_3, W_27->Y6)) {
goto EXIT_19;
}
Zq0A4gqDK_1 = Z167;
return;
}
} EXIT_19:;
}
}

static void Z191
# ifdef HAVE_ARGS
(Zq0A4_153 Z193)
# else
(Z193)
Zq0A4_153 Z193;
# endif
{
struct S_7 Z165;

if (Z193 == Zq0A4_97) {
return;
}
if (Z193 != NIL && Z193->U_1.V_1.Y0 == Zq0A4_100) {
for (;;) {
{
register Zq0A4_226 *W_28 = &Z193->U_1.V_5.Y4;

if (!((Zq0A4_177 & W_28->Y2) == 0X0L && IN(Zq0A4_45, W_28->Y2))) {
goto EXIT_20;
}
if (!Z194(Z193)) {
goto EXIT_20;
}
ZfM_29(Zq0A4_172, (STRING)"| ", 2L);
Zq0A4_192(W_28->Y1);
ZfM_29(Zq0A4_172, (STRING)":", 1L);
ZfM_33(Zq0A4_172);
Z149 = W_28->Y1;
Zq0A4_185(Z193, (Zq0A4_170)Z191);
return;
}
} EXIT_20:;
}
if (Z193 != NIL && Z193->U_1.V_1.Y0 == Zq0A4_106) {
for (;;) {
{
register Zq0A4_232 *W_29 = &Z193->U_1.V_11.Y10;

if (!(W_29->Y4 == Zq0A4_75)) {
goto EXIT_21;
}
ZfM_29(Zq0A4_172, (STRING)"yySearch4 (yyt, yyt^.", 21L);
Zq0A4_192(Z149);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(W_29->Y3);
ZfM_29(Zq0A4_172, (STRING)");", 2L);
ZfM_33(Zq0A4_172);
return;
}
} EXIT_21:;
}
}

static BOOLEAN Z194
# ifdef HAVE_ARGS
(Zq0A4_153 Z195)
# else
(Z195)
Zq0A4_153 Z195;
# endif
{
struct S_6 Z165;

for (;;) {
for (;;) {
if (Z195 == Zq0A4_97) {
return FALSE;
}
if (Z195 != NIL && Z195->U_1.V_1.Y0 == Zq0A4_106) {
for (;;) {
{
register Zq0A4_232 *W_30 = &Z195->U_1.V_11.Y10;

if (!(W_30->Y4 == Zq0A4_75)) {
goto EXIT_24;
}
return TRUE;
}
} EXIT_24:;
}
if (Zq0A4_297(Z195, Zq0A4_103)) {
{
register Zq0A4_229 *W_31 = &Z195->U_1.V_8.Y7;

Z195 = W_31->Y1;
goto EXIT_23;
}
}
if (Z195 != NIL && Z195->U_1.V_1.Y0 == Zq0A4_100) {
for (;;) {
{
register Zq0A4_226 *W_32 = &Z195->U_1.V_5.Y4;

if (!(Z194(W_32->Y3) || Z194(W_32->Y6))) {
goto EXIT_25;
}
return TRUE;
}
} EXIT_25:;
}
return FALSE;
} EXIT_23:;
} EXIT_22:;
}

static INTEGER Z199
# ifdef HAVE_ARGS
(Zq0A4_153 Z200)
# else
(Z200)
Zq0A4_153 Z200;
# endif
{
struct S_5 Z165;

for (;;) {
for (;;) {
if (Z200 != NIL && Z200->U_1.V_1.Y0 == Zq0A4_105) {
return Z199(Z200->U_1.V_10.Y9.Y1) + 1;
}
if (Zq0A4_297(Z200, Zq0A4_103)) {
Z200 = Z200->U_1.V_8.Y7.Y1;
goto EXIT_27;
}
if (Z200 != NIL && Z200->U_1.V_1.Y0 == Zq0A4_100) {
return Z199(Z200->U_1.V_5.Y4.Y3) + Z199(Z200->U_1.V_5.Y4.Y6);
}
return 0;
} EXIT_27:;
} EXIT_26:;
}

void Zq0A4gqDK_10
# ifdef HAVE_ARGS
(Zq0A4_153 Z167)
# else
(Z167)
Zq0A4_153 Z167;
# endif
{
struct S_4 Z165;

if (Z167 == Zq0A4_97) {
return;
}
if (Z167 != NIL && Z167->U_1.V_1.Y0 == Zq0A4_127) {
for (;;) {
{
register Zq0A4_253 *W_33 = &Z167->U_1.V_32.Y31;

if (!ZpmCQ_25(ORD('e'), &Zq0A4_171)) {
goto EXIT_28;
}
if (ZpmCQ_25((LONGCARD)Zq0A4gqDK_0, &Zq0A4_171)) {
}
ZfM_29(Zq0A4_172, (STRING)"CONST", 5L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" yyMaxCoord		= 65535;", 21L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" yyIsBusy		= 65535;", 19L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" yyTruncByDepth	= 65535;", 24L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" yyTruncByLength	= 65534;", 25L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"VAR yygInterp	: TclTk.Tcl_Interp;", 33L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"PROCEDURE ArgToString (yyPtr: SYSTEM.ADDRESS; VAR yyString: Strings.tString);", 77L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"VAR", 3L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" yyi	: INTEGER;", 15L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" yyArray	: rSystem.tArrayChar;", 30L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"BEGIN", 5L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" yyArray := yyPtr;", 18L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" Strings.AssignEmpty (yyString);", 32L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" yyi := 0;", 10L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" LOOP", 5L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  IF (yyArray^ [yyi] = 0C) OR (yyi = 255) THEN EXIT; END;", 57L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  Strings.Append (yyString, yyArray^ [yyi]);", 44L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  INC (yyi);", 12L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" END;", 5L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"END ArgToString;", 16L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"PROCEDURE yySearch (yyclass: TclTk.ClientData; yyinterp: TclTk.Tcl_Interp; yyargc: INTEGER; yyargv: Argument.ArgTable): INTEGER;", 128L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"VAR", 3L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" yyTheTree	: ", 13L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" yyString	: Strings.tString;", 28L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" yyArray	: TclTk.TclTk_String;", 30L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"BEGIN", 5L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" ArgToString (yyargv^ [1], yyString);", 37L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" yyTheTree := ", 14L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)" (Strings.StringToInt (yyString));", 34L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" ArgToString (yyargv^ [2], yyString);", 37L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" yyLine := Strings.StringToInt (yyString);", 42L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" ArgToString (yyargv^ [3], yyString);", 37L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" IF Strings.Length (yyString) = 0 THEN yyFile := Idents.NoIdent;", 64L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" ELSE yyFile := Idents.MakeIdent (yyString); END;", 49L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" yyCurLine := 1000000;", 22L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" yyTheNode := yyTheTree;", 24L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" Traverse", 9L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"TD (yyTheTree, yySearch2);", 26L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" Strings.IntToString (INTEGER (yyTheNode), yyString);", 53L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" Strings.StringToArray (yyString, yyArray);", 43L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" TclTk.Tcl_SetResult (yyinterp, yyArray, TclTk.TCL_VOLATILE);", 61L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" RETURN TclTk.TCL_OK;", 21L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"END yySearch;", 13L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"VAR yyphase1	: BOOLEAN;", 23L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"VAR yymaxx, yymaxy: SHORTCARD;", 30L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"PROCEDURE yySetY (yyp, yyt: ", 28L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)"; yyy, yyk: INTEGER; yyl: SHORTCARD): INTEGER;", 46L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"VAR yy, yymax	: INTEGER;", 24L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"BEGIN", 5L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" INC (yyy);", 11L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" yymax := yyy;", 14L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" IF yyphase1 THEN", 17L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  IF (yyt = ", 12L);
Zq0A4_192(Zq0A4_88);
ZfM_29(Zq0A4_172, (STRING)") OR ((yyt^.yyHead.yyMark = 0) AND", 34L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   ((yyt^.yyHead.yyx = yyIsBusy) OR (yyt^.yyHead.yyy >= CARDINAL (yyy)) OR", 74L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"    (yyp^.yyHead.yyy >= yyTruncByLength))) THEN RETURN yymax; END;", 66L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  yyt^.yyHead.yyparent := yyp;", 30L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  yyt^.yyHead.yyx := yyIsBusy;", 30L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" ELSE", 5L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  IF (yyt = ", 12L);
Zq0A4_192(Zq0A4_88);
ZfM_29(Zq0A4_172, (STRING)") OR", 4L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  (yyt^.yyHead.yyMark = 0) OR (yyt^.yyHead.yyparent # yyp) THEN RETURN yymax; END;", 82L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" END;", 5L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" yyt^.yyHead.yyMark := 0;", 25L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" INC (yyl);", 11L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" IF yyl > ", 10L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"_DrawLength THEN yyk := ", 24L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"_DrawDepth; END;", 16L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" INC (yyk);", 11L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" CASE yyt^.Kind OF", 18L);
ZfM_33(Zq0A4_172);
Zq0A4_184(W_33->Y13, (Zq0A4_170)Z203);
ZfM_29(Zq0A4_172, (STRING)" ELSE", 5L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" END;", 5L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" yyt^.yyHead.yyx := 0;", 22L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" IF yyl > ", 10L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"_DrawLength THEN", 16L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  yyt^.yyHead.yyy := yyTruncByLength;", 37L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  RETURN yyy;", 13L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" ELSIF yyk > ", 13L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"_DrawDepth THEN", 15L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  yyt^.yyHead.yyy := yyTruncByDepth;", 36L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  RETURN yyy;", 13L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" ELSE", 5L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  yyt^.yyHead.yyy := yyy;", 25L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  yymaxy := General.Max (yymaxy, yyy);", 38L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  RETURN yymax;", 15L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" END;", 5L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"END yySetY;", 11L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"TYPE yytFirstLast = RECORD yyfirst, yylast: SHORTCARD; END;", 59L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"PROCEDURE yySetX (yyp, yyt: ", 28L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)"; yyx: SHORTCARD; VAR yyout: yytFirstLast): SHORTCARD;", 54L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"VAR", 3L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" yyxin, yyw	: SHORTCARD;", 24L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" yyFirstLast	: yytFirstLast;", 28L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" yyList	: BOOLEAN;", 18L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"BEGIN", 5L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" yyxin := yyx;", 14L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" IF (yyt = ", 11L);
Zq0A4_192(Zq0A4_88);
ZfM_29(Zq0A4_172, (STRING)") OR (yyt^.yyHead.yyMark = 0) OR", 32L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  (yyt^.yyHead.yyparent # yyp) THEN RETURN yyx; END;", 52L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" yyt^.yyHead.yyMark := 0;", 25L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" yyFirstLast.yyfirst := yyMaxCoord;", 35L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" yyList := FALSE;", 17L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" CASE yyt^.Kind OF", 18L);
ZfM_33(Zq0A4_172);
Zq0A4_184(W_33->Y13, (Zq0A4_170)Z204);
ZfM_29(Zq0A4_172, (STRING)" ELSE", 5L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" END;", 5L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" IF NOT yyList THEN", 19L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  IF yyt^.yyHead.yyy >= yyTruncByLength THEN", 44L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   RETURN yyxin;", 16L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  ELSE", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   IF yyFirstLast.yyfirst = yyMaxCoord THEN", 43L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"    yyt^.yyHead.yyx := yyx;", 27L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   ELSE", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"    yyt^.yyHead.yyx := (yyFirstLast.yyfirst + yyFirstLast.yylast) DIV 2;", 72L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   END;", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   yymaxx := General.Max (yymaxx, yyt^.yyHead.yyx);", 51L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   IF yyt^.yyHead.yyparent = yyp THEN", 37L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"    IF yyout.yyfirst = yyMaxCoord THEN yyout.yyfirst := yyt^.yyHead.yyx; END;", 77L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"    yyout.yylast := yyt^.yyHead.yyx;", 36L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   END;", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   INC (yyxin);", 15L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   RETURN General.Max (yyx, yyxin);", 35L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  END;", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" ELSE", 5L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  IF yyt^.yyHead.yyy >= yyTruncByLength THEN", 44L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   RETURN yyxin;", 16L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  ELSE", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   yyt^.yyHead.yyx := yyxin;", 28L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   yymaxx := General.Max (yymaxx, yyxin);", 41L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   IF yyt^.yyHead.yyparent = yyp THEN", 37L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"    IF yyout.yyfirst = yyMaxCoord THEN yyout.yyfirst := yyt^.yyHead.yyx; END;", 77L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"    yyout.yylast := yyt^.yyHead.yyx;", 36L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   END;", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   RETURN General.Max (yyx, yyw);", 33L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  END;", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" END;", 5L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"END yySetX;", 11L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"PROCEDURE yyDrawEdge (yyfrom, yyto: ", 36L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)");", 2L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"VAR", 3L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" yyString, yyTemp	: Strings.tString;", 36L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" yyArray, yyCoord	: TclTk.TclTk_String;", 39L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"BEGIN", 5L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" IF yyto = ", 11L);
Zq0A4_192(Zq0A4_88);
ZfM_29(Zq0A4_172, (STRING)" THEN RETURN; END;", 18L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" Strings.IntToString (yyfrom^.yyHead.yyx, yyString);", 52L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" Strings.Append (yyString, ' ');", 32L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" Strings.IntToString (yyfrom^.yyHead.yyy, yyTemp);", 50L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" Strings.Concatenate (yyString, yyTemp);", 40L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" Strings.Append (yyString, ' ');", 32L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" IF yyto^.yyHead.yyy < yyTruncByLength THEN", 43L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  Strings.IntToString (yyto^.yyHead.yyx, yyTemp);", 49L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  Strings.Concatenate (yyString, yyTemp);", 41L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  Strings.Append (yyString, ' ');", 33L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  Strings.IntToString (yyto^.yyHead.yyy, yyTemp);", 49L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  Strings.Concatenate (yyString, yyTemp);", 41L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" ELSIF yyto^.yyHead.yyy = yyTruncByDepth THEN", 45L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  Strings.IntToString (yyfrom^.yyHead.yyx + 1, yyTemp);", 55L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  Strings.Concatenate (yyString, yyTemp);", 41L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  Strings.Append (yyString, ' ');", 33L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  Strings.IntToString (yyfrom^.yyHead.yyy, yyTemp);", 51L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  Strings.Concatenate (yyString, yyTemp);", 41L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  Strings.Append (yyString, ' ');", 33L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  Strings.Append (yyString, '1');", 33L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" ELSE", 5L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  Strings.IntToString (yyfrom^.yyHead.yyx, yyTemp);", 51L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  Strings.Concatenate (yyString, yyTemp);", 41L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  Strings.Append (yyString, ' ');", 33L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  Strings.IntToString (yyfrom^.yyHead.yyy + 1, yyTemp);", 55L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  Strings.Concatenate (yyString, yyTemp);", 41L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  Strings.Append (yyString, ' ');", 33L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  Strings.Append (yyString, '1');", 33L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" END;", 5L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" Strings.StringToArray (yyString, yyCoord);", 43L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" yyArray := \"draw_edge \";", 25L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" TclTk.Tcl_VarEval (yygInterp, yyArray, yyCoord, NIL);", 54L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"END yyDrawEdge;", 15L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"PROCEDURE yyDrawNode (yyt: ", 27L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)");", 2L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"VAR", 3L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" yyString, yyTemp	: Strings.tString;", 36L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" yyArray, yyCoord	: TclTk.TclTk_String;", 39L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"BEGIN", 5L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" IF yyt^.yyHead.yyy >= yyTruncByLength THEN RETURN; END;", 56L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" Strings.IntToString (yyt^.yyHead.yyx, yyString);", 49L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" Strings.Append (yyString, ' ');", 32L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" Strings.IntToString (yyt^.yyHead.yyy, yyTemp);", 47L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" Strings.Concatenate (yyString, yyTemp);", 40L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" Strings.Append (yyString, ' ');", 32L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" Strings.IntToString (INTEGER (yyt), yyTemp);", 45L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" Strings.Concatenate (yyString, yyTemp);", 40L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" Strings.Append (yyString, ' ');", 32L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" NodeName (yyt, yyTemp);", 24L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" Strings.Concatenate (yyString, yyTemp);", 40L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" Strings.StringToArray (yyString, yyCoord);", 43L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" yyArray := \"draw_node \";", 25L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" TclTk.Tcl_VarEval (yygInterp, yyArray, yyCoord, NIL);", 54L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" CASE yyt^.Kind OF", 18L);
ZfM_33(Zq0A4_172);
Zq0A4_184(W_33->Y13, (Zq0A4_170)Z205);
ZfM_29(Zq0A4_172, (STRING)" ELSE", 5L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" END;", 5L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"END yyDrawNode;", 15L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"PROCEDURE yyPutAttr (yyclass: TclTk.ClientData; yyinterp: TclTk.Tcl_Interp; yyargc: INTEGER; yyargv: Argument.ArgTable): INTEGER;", 129L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"VAR", 3L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" yyf	: IO.tFile;", 16L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" yyString	: Strings.tString;", 28L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"BEGIN", 5L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" yyf := IO.WriteOpen (\"yyNode\");", 32L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" ArgToString (yyargv^ [1], yyString);", 37L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" Write", 6L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"Node (yyf, ", 11L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)" (Strings.StringToInt (yyString)));", 35L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" IO.WriteClose (yyf);", 21L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" RETURN TclTk.TCL_OK;", 21L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"END yyPutAttr;", 14L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"PROCEDURE yyDrawSubTree (yyclass: TclTk.ClientData; yyinterp: TclTk.Tcl_Interp; yyargc: INTEGER; yyargv: Argument.ArgTable): INTEGER;", 133L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"VAR yyString	: Strings.tString;", 31L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"BEGIN", 5L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" ArgToString (yyargv^ [1], yyString);", 37L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" Draw", 5L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)" (", 2L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)" (Strings.StringToInt (yyString)));", 35L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" RETURN TclTk.TCL_OK;", 21L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"END yyDrawSubTree;", 18L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# ifndef DrawAttr", 17L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# define DrawAttr(x, y)", 23L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# endif", 7L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"PROCEDURE yyCallAttr (yyclass: TclTk.ClientData; yyinterp: TclTk.Tcl_Interp; yyargc: INTEGER; yyargv: Argument.ArgTable): INTEGER;", 130L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"VAR yyString	: Strings.tString;", 31L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"BEGIN", 5L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" ArgToString (yyargv^ [1], yyString);", 37L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" DrawAttr (", 11L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)" (Strings.StringToInt (yyString)), yyargv^ [2]);", 48L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" RETURN TclTk.TCL_OK;", 21L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"END yyCallAttr;", 15L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"PROCEDURE yySetParam (yyclass: TclTk.ClientData; yyinterp: TclTk.Tcl_Interp; yyargc: INTEGER; yyargv: Argument.ArgTable): INTEGER;", 130L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"VAR yyString	: Strings.tString;", 31L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"BEGIN", 5L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" ArgToString (yyargv^ [1], yyString);", 37L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" ", 1L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"_DrawDepth := Strings.StringToInt (yyString);", 45L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" ArgToString (yyargv^ [2], yyString);", 37L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" ", 1L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"_DrawLength := Strings.StringToInt (yyString);", 46L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" ArgToString (yyargv^ [3], yyString);", 37L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" ", 1L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"_DrawBoxWidth := Strings.StringToInt (yyString);", 48L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" ArgToString (yyargv^ [4], yyString);", 37L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" ", 1L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"_DrawBoxHeight := Strings.StringToInt (yyString);", 49L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" ArgToString (yyargv^ [5], yyString);", 37L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" Strings.Assign (", 17L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"_DrawFileName, yyString);", 25L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" RETURN TclTk.TCL_OK;", 21L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"END yySetParam;", 15L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"PROCEDURE SetDepth", 18L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)" (yyyDepth: INTEGER);", 21L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"BEGIN", 5L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" ", 1L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"_DrawDepth := yyyDepth;", 23L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"END SetDepth", 12L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"PROCEDURE SetBox", 16L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)" (yyyWidth, yyyHeight: INTEGER);", 32L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"BEGIN", 5L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" ", 1L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"_DrawBoxWidth  := yyyWidth;", 27L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" ", 1L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"_DrawBoxHeight := yyyHeight;", 28L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"END SetBox", 10L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"PROCEDURE yyDrawTree (yyt: ", 27L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)");", 2L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"VAR", 3L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" yyDummy	: yytFirstLast;", 24L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" yyd	: SHORTCARD;", 17L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" yyString, yyTemp	: Strings.tString;", 36L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" yyArray1, yyArray2	: TclTk.TclTk_String;", 41L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# ifdef SUPPORT_TVA", 19L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"VAR yyPrevTreatTVAasChild	: BOOLEAN;", 36L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# endif", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"BEGIN", 5L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# ifdef SUPPORT_TVA", 19L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" yyPrevTreatTVAasChild := ", 26L);
Zq0A4gqDK_6();
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" ", 1L);
Zq0A4gqDK_6();
ZfM_29(Zq0A4_172, (STRING)" := FALSE;", 10L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# endif", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" yyDummy.yyfirst := yyMaxCoord;", 31L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" yymaxx := 0;", 13L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" yymaxy := 0;", 13L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" yyMark (yyt); yyphase1 := TRUE ;", 33L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" yyd := yySetY (", 16L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)" (SYSTEM.ADR (yyt)), yyt, 0, 0, 0);", 35L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" yyMark (yyt); yyphase1 := FALSE;", 33L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" yyd := yySetY (", 16L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)" (SYSTEM.ADR (yyt)), yyt, 0, 0, 0);", 35L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" yyMark (yyt);", 14L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" yyd := yySetX (", 16L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)" (SYSTEM.ADR (yyt)), yyt, 0, yyDummy);", 38L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" yymaxx := General.Max (yymaxx, 16);", 36L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" yymaxy := General.Max (yymaxy, 16);", 36L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" Strings.IntToString (yymaxx, yyString);", 40L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" Strings.Append (yyString, ' ');", 32L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" Strings.IntToString (yymaxy, yyTemp);", 38L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" Strings.Concatenate (yyString, yyTemp);", 40L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" Strings.Append (yyString, ' ');", 32L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" Strings.IntToString (", 22L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"_DrawBoxWidth, yyTemp);", 23L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" Strings.Concatenate (yyString, yyTemp);", 40L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" Strings.Append (yyString, ' ');", 32L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" Strings.IntToString (", 22L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"_DrawBoxHeight, yyTemp);", 24L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" Strings.Concatenate (yyString, yyTemp);", 40L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" Strings.Append (yyString, ' ');", 32L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" Strings.IntToString (", 22L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"_DrawDepth, yyTemp);", 20L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" Strings.Concatenate (yyString, yyTemp);", 40L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" Strings.Append (yyString, ' ');", 32L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" Strings.IntToString (", 22L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"_DrawLength, yyTemp);", 21L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" Strings.Concatenate (yyString, yyTemp);", 40L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" Strings.Append (yyString, ' ');", 32L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" Strings.Concatenate (yyString, ", 32L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"_DrawFileName);", 15L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" Strings.StringToArray (yyString, yyArray2);", 44L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" yyArray1 := \"draw_tree \";", 26L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" TclTk.Tcl_VarEval (yygInterp, yyArray1, yyArray2, NIL);", 56L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" Traverse", 9L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"TD (yyt, yyDrawNode);", 21L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# ifdef SUPPORT_TVA", 19L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" ", 1L);
Zq0A4gqDK_6();
ZfM_29(Zq0A4_172, (STRING)" := yyPrevTreatTVAasChild;", 26L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# endif", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"END yyDrawTree;", 15L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"PROCEDURE Draw", 14L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)" (yyt: ", 7L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)");", 2L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"VAR", 3L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" yyCode	: INTEGER;", 18L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" yyInterp	: TclTk.Tcl_Interp;", 29L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" yyEnvVarPtr	: rSystem.tArrayChar;", 34L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" yyPath	: ARRAY [0..255] OF CHAR;", 33L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" yyArray	: TclTk.TclTk_String;", 30L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" yyString, yyTemp	: Strings.tString;", 36L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"BEGIN", 5L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" TclTk.Tcl_FindExecutable (\"\");", 31L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" yyInterp := TclTk.Tcl_CreateInterp ();", 39L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" yygInterp := yyInterp;", 23L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" yyCode := TclTk.Tcl_Init (yyInterp);", 37L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" IF yyCode # TclTk.TCL_OK THEN", 30L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  Errors.ErrorMessageI (Errors.TclTkError, Errors.Error, Position.NoPosition, Errors.Array, TclTk.Tcl_GetStringResult (yyInterp));", 130L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  TclTk.Tcl_DeleteInterp (yyInterp); TclTk.Tcl_Finalize (); RETURN;", 67L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" END;", 5L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" yyCode := TclTk.Tk_Init (yyInterp);", 36L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" IF yyCode # TclTk.TCL_OK THEN", 30L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  Errors.ErrorMessageI (Errors.TclTkError, Errors.Error, Position.NoPosition, Errors.Array, TclTk.Tcl_GetStringResult (yyInterp));", 130L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  TclTk.Tcl_DeleteInterp (yyInterp); TclTk.Tcl_Finalize (); RETURN;", 67L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" END;", 5L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" yyArray := \"Tk\";", 17L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" TclTk.Tcl_StaticPackage (yyInterp, yyArray, TclTk.Tk_Init, NIL);", 65L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" yyArray := \"put_attr\";", 23L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" TclTk.Tcl_CreateCommand (yyInterp, yyArray, yyPutAttr, NIL, NIL);", 66L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" yyArray := \"search_pos\";", 25L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" TclTk.Tcl_CreateCommand (yyInterp, yyArray, yySearch, NIL, NIL);", 65L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" yyArray := \"draw_subtree\";", 27L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" TclTk.Tcl_CreateCommand (yyInterp, yyArray, yyDrawSubTree, NIL, NIL);", 70L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" yyArray := \"call_attr\";", 24L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" TclTk.Tcl_CreateCommand (yyInterp, yyArray, yyCallAttr, NIL, NIL);", 67L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" yyArray := \"set_param\";", 24L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" TclTk.Tcl_CreateCommand (yyInterp, yyArray, yySetParam, NIL, NIL);", 67L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" yyCode := TclTk.Tcl_EvalFile (yyInterp, \"Tree.tcl\");", 53L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" IF yyCode # TclTk.TCL_OK THEN", 30L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  yyEnvVarPtr := rSystem.GetEnvVar (\"HOME\");", 44L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  IF yyEnvVarPtr # NIL THEN", 27L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   ArgToString (yyEnvVarPtr, yyString);", 39L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   Strings.ArrayToString (\"/.Tree.tcl\", yyTemp);", 48L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   Strings.Concatenate (yyString, yyTemp);", 42L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   Strings.StringToArray (yyString, yyPath);", 44L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   yyCode := TclTk.Tcl_EvalFile (yyInterp, yyPath);", 51L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  END;", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" END;", 5L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" IF yyCode # TclTk.TCL_OK THEN", 30L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  yyEnvVarPtr := rSystem.GetEnvVar (\"CT_DIR\");", 46L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  IF yyEnvVarPtr # NIL THEN", 27L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   ArgToString (yyEnvVarPtr, yyString);", 39L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   Strings.ArrayToString (\"/lib/cg/Tree.tcl\", yyTemp);", 54L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   Strings.Concatenate (yyString, yyTemp);", 42L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   Strings.StringToArray (yyString, yyPath);", 44L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   yyCode := TclTk.Tcl_EvalFile (yyInterp, yyPath);", 51L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  END;", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" END;", 5L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" IF yyCode # TclTk.TCL_OK THEN", 30L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  yyCode := TclTk.Tcl_EvalFile (yyInterp, \"", 43L);
{
LONGCARD B_3 = 1, B_4 = Zp1PEAFD_7(&Zq0A4_89);

if (B_3 <= B_4)
for (Z151 = B_3;; Z151 += 1) {
Z152 = Zp1PEAFD_12(&Zq0A4_89, (Zp1PEAFD_1)Z151);
if (Z152 == '\\') {
ZfM_29(Zq0A4_172, (STRING)"/", 1L);
} else {
ZfM_24(Zq0A4_172, Z152);
}
if (Z151 >= B_4) break;
}
}
ZfM_29(Zq0A4_172, (STRING)"Tree.tcl\");", 11L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" END;", 5L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" IF yyCode # TclTk.TCL_OK THEN", 30L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  Errors.ErrorMessageI (Errors.TclTkError, Errors.Error, Position.NoPosition, Errors.Array, TclTk.Tcl_GetStringResult (yyInterp));", 130L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  TclTk.Tcl_DeleteInterp (yyInterp); TclTk.Tcl_Finalize (); RETURN;", 67L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" END;", 5L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" yyDrawTree (yyt);", 18L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" TclTk.Tk_MainLoop ();", 22L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" TclTk.Tcl_DeleteInterp (yyInterp);", 35L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"END Draw", 8L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
if (ZpmCQ_25((LONGCARD)Zq0A4gqDK_0, &Zq0A4_171)) {
}
ZfM_33(Zq0A4_172);
return;
}
} EXIT_28:;
}
}

static void Z203
# ifdef HAVE_ARGS
(Zq0A4_153 Z167)
# else
(Z167)
Zq0A4_153 Z167;
# endif
{
struct S_3 Z165;

if (Z167 == Zq0A4_97) {
return;
}
if (Z167 != NIL && Z167->U_1.V_1.Y0 == Zq0A4_100) {
for (;;) {
{
register Zq0A4_226 *W_34 = &Z167->U_1.V_5.Y4;

if (!((Zq0A4_177 & W_34->Y2) == 0X0L && IN(Zq0A4_44, W_34->Y2))) {
goto EXIT_29;
}
ZfM_29(Zq0A4_172, (STRING)"| ", 2L);
Zq0A4_192(W_34->Y1);
ZfM_29(Zq0A4_172, (STRING)":", 1L);
ZfM_33(Zq0A4_172);
Z192(Z167);
Z149 = W_34->Y1;
Zq0A4_185(Z167, (Zq0A4_170)Z203);
if (Zq0A4gqDK_1 != Zq0A4_97) {
ZfM_29(Zq0A4_172, (STRING)"yymax := yySetY (yyt, yyt^.", 27L);
Zq0A4_192(Z149);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(Zq0A4gqDK_1->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)", yymax", 7L);
if (Z199(Z167) != 1) {
ZfM_29(Zq0A4_172, (STRING)" - 1", 4L);
}
ZfM_29(Zq0A4_172, (STRING)", yyk - 1, yyl);", 16L);
ZfM_33(Zq0A4_172);
}
return;
}
} EXIT_29:;
}
if (Z167 != NIL && Z167->U_1.V_1.Y0 == Zq0A4_105) {
for (;;) {
{
register Zq0A4_231 *W_35 = &Z167->U_1.V_10.Y9;

if (!(Z167 != Zq0A4gqDK_1)) {
goto EXIT_30;
}
ZfM_29(Zq0A4_172, (STRING)"yy := yySetY (yyt, yyt^.", 24L);
Zq0A4_192(Z149);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(W_35->Y3);
ZfM_29(Zq0A4_172, (STRING)", yyy, yyk, 0);", 15L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"yymax := General.Max (yymax, yy);", 33L);
ZfM_33(Zq0A4_172);
return;
}
} EXIT_30:;
}
}

static void Z204
# ifdef HAVE_ARGS
(Zq0A4_153 Z167)
# else
(Z167)
Zq0A4_153 Z167;
# endif
{
struct S_2 Z165;

if (Z167 == Zq0A4_97) {
return;
}
if (Z167 != NIL && Z167->U_1.V_1.Y0 == Zq0A4_100) {
for (;;) {
{
register Zq0A4_226 *W_36 = &Z167->U_1.V_5.Y4;

if (!((Zq0A4_177 & W_36->Y2) == 0X0L && IN(Zq0A4_44, W_36->Y2))) {
goto EXIT_31;
}
ZfM_29(Zq0A4_172, (STRING)"| ", 2L);
Zq0A4_192(W_36->Y1);
ZfM_29(Zq0A4_172, (STRING)":", 1L);
ZfM_33(Zq0A4_172);
Z192(Z167);
Z149 = W_36->Y1;
if (Zq0A4gqDK_1 != Zq0A4_97) {
ZfM_29(Zq0A4_172, (STRING)"yyw := yySetX (yyt, yyt^.", 25L);
Zq0A4_192(Z149);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(Zq0A4gqDK_1->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)", yyx, yyFirstLast);", 20L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"INC (yyx);", 10L);
ZfM_33(Zq0A4_172);
Zq0A4_185(Z167, (Zq0A4_170)Z204);
ZfM_29(Zq0A4_172, (STRING)"yyList := TRUE;", 15L);
ZfM_33(Zq0A4_172);
} else {
Zq0A4_185(Z167, (Zq0A4_170)Z204);
}
return;
}
} EXIT_31:;
}
if (Z167 != NIL && Z167->U_1.V_1.Y0 == Zq0A4_105) {
for (;;) {
{
register Zq0A4_231 *W_37 = &Z167->U_1.V_10.Y9;

if (!(Z167 != Zq0A4gqDK_1)) {
goto EXIT_32;
}
ZfM_29(Zq0A4_172, (STRING)"yyx := yySetX (yyt, yyt^.", 25L);
Zq0A4_192(Z149);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(W_37->Y3);
ZfM_29(Zq0A4_172, (STRING)", yyx, yyFirstLast);", 20L);
ZfM_33(Zq0A4_172);
return;
}
} EXIT_32:;
}
}

static void Z205
# ifdef HAVE_ARGS
(Zq0A4_153 Z167)
# else
(Z167)
Zq0A4_153 Z167;
# endif
{
struct S_1 Z165;

if (Z167 == Zq0A4_97) {
return;
}
if (Z167 != NIL && Z167->U_1.V_1.Y0 == Zq0A4_100) {
for (;;) {
{
register Zq0A4_226 *W_38 = &Z167->U_1.V_5.Y4;

if (!((Zq0A4_177 & W_38->Y2) == 0X0L && IN(Zq0A4_44, W_38->Y2))) {
goto EXIT_33;
}
ZfM_29(Zq0A4_172, (STRING)"| ", 2L);
Zq0A4_192(W_38->Y1);
ZfM_29(Zq0A4_172, (STRING)":", 1L);
ZfM_33(Zq0A4_172);
Z149 = W_38->Y1;
Zq0A4_185(Z167, (Zq0A4_170)Z205);
return;
}
} EXIT_33:;
}
if (Z167 != NIL && Z167->U_1.V_1.Y0 == Zq0A4_105) {
{
register Zq0A4_231 *W_39 = &Z167->U_1.V_10.Y9;

ZfM_29(Zq0A4_172, (STRING)"yyDrawEdge (yyt, yyt^.", 22L);
Zq0A4_192(Z149);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(W_39->Y3);
ZfM_29(Zq0A4_172, (STRING)");", 2L);
ZfM_33(Zq0A4_172);
return;
}
}
}

void Zq0A4gqDK_11
 ARGS ((void))
{
}

void Zq0A4gqDK_12
 ARGS ((void))
{
}

static void Z210
 ARGS ((void))
{
ZfM_34();
rExit(1L);
}

void BEGIN_TreeMod2 ARGS ((void))
{
  static BOOLEAN has_been_called = FALSE;
  if (has_been_called) return;
  has_been_called = TRUE;
BEGIN_IO ();
BEGIN_Tree ();
BEGIN_Position ();
BEGIN_rSystem ();
BEGIN_IO ();
BEGIN_Tree ();
BEGIN_IO ();
BEGIN_Sets ();
BEGIN_Idents ();
BEGIN_Position ();
BEGIN_Tree ();
BEGIN_Strings ();

Zq0A4gqDK_3 = ZfM_1;
Zq0A4gqDK_5 = Z210;
Zq0A4gqDK_11();
}
