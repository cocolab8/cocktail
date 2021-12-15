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

#ifndef DEFINITION_TreeJav2
#include "TreeJav2.h"
#endif

Zq0A4_153 Zq0A4dgAd_0;
ZfM_3 Zq0A4dgAd_2;
BOOLEAN Zq0A4dgAd_3;
PROC Zq0A4dgAd_4;

static Zfb3DLQ_0 Z147;
static Zq0A4_153 Z148;
static void Z152 ARGS ((CHAR Z153[], LONGCARD O_1));
static BOOLEAN Z156 ARGS ((BYTE Z157[], LONGCARD O_3, BYTE Z158[], LONGCARD O_2));
struct S_13 {
union {
char dummy;
} U_1;
};
static void Z167 ARGS ((Zq0A4_153 Z161));
struct S_12 {
union {
char dummy;
} U_1;
};
static void Z166 ARGS ((Zq0A4_153 Z161));
struct S_11 {
union {
char dummy;
} U_1;
};
static void Z181 ARGS ((Zq0A4_153 Z161));
struct S_10 {
union {
char dummy;
} U_1;
};
static void Z168 ARGS ((Zq0A4_153 Z161));
struct S_8 {
union {
struct {
struct S_9 {
Zq0A4_153 Y0;
} Y0;
} V_1;
} U_1;
};
static void Z169 ARGS ((Zq0A4_153 Z161));
struct S_6 {
union {
struct {
struct S_7 {
Zq0A4_153 Y0;
} Y0;
} V_1;
} U_1;
};
static void Z170 ARGS ((Zq0A4_153 Z161));
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
struct S_3 {
union {
char dummy;
} U_1;
};
static void Z186 ARGS ((Zq0A4_153 Z187));
struct S_2 {
union {
char dummy;
} U_1;
};
static BOOLEAN Z188 ARGS ((Zq0A4_153 Z189));
struct S_1 {
union {
char dummy;
} U_1;
};
static void Z195 ARGS ((void));

void Zq0A4dgAd_1
# ifdef HAVE_ARGS
(ZmtLFGGBG_0 Z150)
# else
(Z150)
ZmtLFGGBG_0 Z150;
# endif
{
if (Z150.Y1 != 0) {
ZfM_29(Zq0A4_172, (STRING)"// line ", 8L);
Zq0A4_195((LONGINT)Z150.Y1);
ZfM_29(Zq0A4_172, (STRING)" \"", 2L);
Zq0A4_192(Z150.Y0);
ZfM_29(Zq0A4_172, (STRING)"\"", 1L);
ZfM_33(Zq0A4_172);
}
}

static void Z152
# ifdef HAVE_ARGS
(CHAR Z153[], LONGCARD O_1)
# else
(Z153, O_1)
CHAR Z153[];
LONGCARD O_1;
# endif
{
OPEN_ARRAY_LOCALS

ALLOC_OPEN_ARRAYS (O_1 * sizeof (CHAR), 1)
COPY_OPEN_ARRAY (Z153, O_1, CHAR)
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)"Error: module TreeJav2, routine ", 32L);
ZfM_29((ZDz6VQCC_4)ZfM_2, Z153, O_1);
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)" failed", 7L);
ZfM_33((ZDz6VQCC_4)ZfM_2);
(*Zq0A4dgAd_4)();
FREE_OPEN_ARRAYS
}

static BOOLEAN Z156
# ifdef HAVE_ARGS
(BYTE Z157[], LONGCARD O_3, BYTE Z158[], LONGCARD O_2)
# else
(Z157, O_3, Z158, O_2)
BYTE Z157[];
LONGCARD O_3;
BYTE Z158[];
LONGCARD O_2;
# endif
{
INTEGER Z159;
OPEN_ARRAY_LOCALS

ALLOC_OPEN_ARRAYS (O_2 * sizeof (WORD) + O_3 * sizeof (WORD), 2)
COPY_OPEN_ARRAY (Z158, O_2, WORD)
COPY_OPEN_ARRAY (Z157, O_3, WORD)
{
LONGINT B_1 = 0, B_2 = (INTEGER)(O_3 - 1);

if (B_1 <= B_2)
for (Z159 = B_1;; Z159 += 1) {
if (Z157[Z159] != Z158[Z159]) {
FREE_OPEN_ARRAYS
return FALSE;
}
if (Z159 >= B_2) break;
}
}
FREE_OPEN_ARRAYS
return TRUE;
}

void Zq0A4dgAd_5
# ifdef HAVE_ARGS
(Zq0A4_153 Z161)
# else
(Z161)
Zq0A4_153 Z161;
# endif
{
struct S_13 Z162;

if (Z161 == Zq0A4_97) {
return;
}
if (Z161 != NIL && Z161->U_1.V_1.Y0 == Zq0A4_127) {
{
register Zq0A4_253 *W_1 = &Z161->U_1.V_32.Y31;

ZfM_29(Zq0A4_172, (STRING)"+", 1L);
Zq0A4_192(Zq0A4_81);
ZfM_29(Zq0A4_172, (STRING)".fields", 7L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   private static CocktailWriter yyout;", 39L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   private static CocktailReader yyin;", 38L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"=", 1L);
Zq0A4_192(Zq0A4_81);
ZfM_29(Zq0A4_172, (STRING)".fields", 7L);
ZfM_33(Zq0A4_172);
if (ZpmCQ_25(ORD(','), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)"   abstract void yyMark0 ();", 28L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   private static void yyMark (", 31L);
Zq0A4_192(Zq0A4_81);
ZfM_29(Zq0A4_172, (STRING)" yyt) {", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      while (yyt != null && ", 28L);
ZfM_29(Zq0A4_172, (STRING)"! (++ yyt.yyMark > 1) ) {", 25L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"         yyt.yyMark0 ();", 24L);
ZfM_33(Zq0A4_172);
Zq0A4_184(W_1->Y13, (Zq0A4_170)Z166);
ZfM_29(Zq0A4_172, (STRING)"         yyt = yyt.yyGetIterator ();", 36L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      }", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   }", 4L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
}
if (ZpmCQ_25(ORD(';'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)"+", 1L);
Zq0A4_192(Zq0A4_81);
ZfM_29(Zq0A4_172, (STRING)".fields", 7L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   private static final int yyInitTreeStoreSize = 32;", 53L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   private static ", 18L);
Zq0A4_192(Zq0A4_81);
ZfM_29(Zq0A4_172, (STRING)" yyTreeStore [] = new ", 22L);
Zq0A4_192(Zq0A4_81);
ZfM_29(Zq0A4_172, (STRING)" [yyInitTreeStoreSize];", 23L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   private static int yyLabelCount;", 35L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   private static int yyRecursionLevel = 0;", 43L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"=", 1L);
Zq0A4_192(Zq0A4_81);
ZfM_29(Zq0A4_172, (STRING)".fields", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   private static int yyMapToLabel (", 36L);
Zq0A4_192(Zq0A4_81);
ZfM_29(Zq0A4_172, (STRING)" yyTree) {", 10L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      for (int yyi = 1; yyi <= yyLabelCount; yyi ++)", 52L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"         if (yyTreeStore [yyi] == yyTree) return yyi;", 53L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      yyLabelCount ++;", 22L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      if (yyLabelCount == yyTreeStore.length)", 45L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"         yyTreeStore = (", 24L);
Zq0A4_192(Zq0A4_81);
ZfM_29(Zq0A4_172, (STRING)" []) DynArrayObject.extend (yyTreeStore);", 41L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      yyTreeStore [yyLabelCount] = yyTree;", 42L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      return yyLabelCount;", 26L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   }", 4L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   private static ", 18L);
Zq0A4_192(Zq0A4_81);
ZfM_29(Zq0A4_172, (STRING)" yyMapToTree (int yyLabel) {", 28L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      return yyTreeStore [yyLabel];", 35L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   }", 4L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
}
if (ZpmCQ_25(ORD('$'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)"   private static void yyWriteSpaces (int yyn) throws java.io.IOException {", 75L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      for (int yyi = 1; yyi <= yyn; yyi ++) yyout.write (' ');", 62L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   }", 4L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   private static void yyWriteSelector (String yys) throws java.io.IOException {", 80L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      yyout.write (yys); yyWriteSpaces (16 - yys.length ()); yyout.write (\" = \");", 81L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   }", 4L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
}
if (ZpmCQ_25(ORD('o'), &Zq0A4_171)) {
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
ZfM_29(Zq0A4_172, (STRING)"   public static void writeNode (", 33L);
ZfM_29(Zq0A4_172, (STRING)"         CocktailWriter yyyout, ", 32L);
Zq0A4_192(Zq0A4_81);
ZfM_29(Zq0A4_172, (STRING)" yyt)", 5L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"         throws java.io.IOException", 35L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   {", 4L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      if (yyt == null) { yyyout.write (\"", 40L);
Zq0A4_192(Zq0A4_88);
ZfM_29(Zq0A4_172, (STRING)"\"); yyyout.writeNl (); return; }", 32L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      yyt.writeNode (yyyout);", 29L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   }", 4L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"+", 1L);
Zq0A4_192(Zq0A4_81);
ZfM_29(Zq0A4_172, (STRING)".methods", 8L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   public void writeNode (CocktailWriter yyyout) throws java.io.IOException", 75L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   {", 4L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      yyout = yyyout;", 21L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      yyout.write (NodeNames [yyKind ()]); yyout.writeNl ();", 60L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      writeNodeHead (this)", 26L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      yWriteNode ();", 20L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   }", 4L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   abstract void yWriteNode () throws java.io.IOException;", 58L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"=", 1L);
Zq0A4_192(Zq0A4_81);
ZfM_29(Zq0A4_172, (STRING)".methods", 8L);
ZfM_33(Zq0A4_172);
Zq0A4_184(W_1->Y13, (Zq0A4_170)Z167);
}
if (ZpmCQ_25(ORD('w'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)"+", 1L);
Zq0A4_192(Zq0A4_81);
ZfM_29(Zq0A4_172, (STRING)".fields", 7L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   private static int yyIndentLevel;", 36L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"=", 1L);
Zq0A4_192(Zq0A4_81);
ZfM_29(Zq0A4_172, (STRING)".fields", 7L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   public static void write (", 29L);
ZfM_29(Zq0A4_172, (STRING)"         CocktailWriter yyyout, ", 32L);
Zq0A4_192(Zq0A4_81);
ZfM_29(Zq0A4_172, (STRING)" yyt)", 5L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"         throws java.io.IOException", 35L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   {", 4L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      int yySaveLevel;", 22L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      yyout = yyyout;", 21L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      if (yyRecursionLevel == 0) yyLabelCount = 0;", 50L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      yyRecursionLevel ++;", 26L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      yyMark (yyt);", 19L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      yySaveLevel = yyIndentLevel;", 34L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      yyIndentLevel = 0;", 24L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      yyWrite (yyt);", 20L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      yyIndentLevel = yySaveLevel;", 34L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      yyRecursionLevel --;", 26L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   }", 4L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   public final void write (", 28L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"         CocktailWriter yyyout)", 31L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"         throws java.io.IOException", 35L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   {", 4L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      ", 6L);
Zq0A4_192(Zq0A4_85);
ZfM_29(Zq0A4_172, (STRING)".write (yyyout, this);", 22L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   }", 4L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   private static void yyIndentSelector (String yys)", 52L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      throws java.io.IOException", 32L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   {", 4L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      yyWriteSpaces (yyIndentLevel); yyWriteSelector (yys);", 59L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   }", 4L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   private static void yyIndentSelectorTree (", 45L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      String yys, ", 18L);
Zq0A4_192(Zq0A4_81);
ZfM_29(Zq0A4_172, (STRING)" yyt)", 5L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      throws java.io.IOException", 32L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   {", 4L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      writeSELECTOR (yys) yyWrite (yyt);", 40L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   }", 4L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"+", 1L);
Zq0A4_192(Zq0A4_81);
ZfM_29(Zq0A4_172, (STRING)".methods", 8L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   String yyWrite () throws java.io.IOException {", 49L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      return null;", 18L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   }", 4L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"=", 1L);
Zq0A4_192(Zq0A4_81);
ZfM_29(Zq0A4_172, (STRING)".methods", 8L);
ZfM_33(Zq0A4_172);
Zq0A4_184(W_1->Y13, (Zq0A4_170)Z168);
ZfM_29(Zq0A4_172, (STRING)"   private static void yyWrite (", 32L);
Zq0A4_192(Zq0A4_81);
ZfM_29(Zq0A4_172, (STRING)" yyt)", 5L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"         throws java.io.IOException", 35L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   {", 4L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      int yyLevel = yyIndentLevel;", 34L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      String yys;", 17L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      for (;;) {", 16L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"         if (yyt == null) {", 27L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"            yyout.write (\" ", 27L);
Zq0A4_192(Zq0A4_88);
ZfM_29(Zq0A4_172, (STRING)"\"); yyout.writeNl ();", 21L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"            break;", 18L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"         } else if (yyt.yyMark == 0) {", 38L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"            yyout.write ('^'); yyout.write (yyMapToLabel (yyt));", 64L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"            yyout.writeNl (); break;", 36L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"         } else if (yyt.yyMark > 1) {", 37L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"            yyout.writeNl (); yyout.write ('0');", 48L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"            yyout.write (yyMapToLabel (yyt)); yyout.write (':');", 64L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"            yyWriteSpaces (yyIndentLevel - 7);", 46L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"         } else {", 17L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"            yyout.write (' ');", 30L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"         }", 10L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"         yyt.yyMark = 0;", 24L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"         yyIndentLevel += 2;", 28L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"         yyout.write (NodeNames [yyt.yyKind ()]); yyout.writeNl ();", 67L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"         writeNodeHead (yyt)", 28L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"         yys = yyt.yyWrite ();", 30L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"         if (yys == null) break;", 32L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"         writeSELECTOR (yys)", 28L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"         yyt = yyt.yyGetIterator ();", 36L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      }", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      yyIndentLevel = yyLevel;", 30L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   }", 4L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
}
if (ZpmCQ_25(ORD('r'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)"   public static ", 17L);
Zq0A4_192(Zq0A4_81);
ZfM_29(Zq0A4_172, (STRING)" read (CocktailReader yyyin) throws java.io.IOException {", 57L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      ", 6L);
Zq0A4_192(Zq0A4_81);
ZfM_29(Zq0A4_172, (STRING)" yyt;", 5L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      yyin = yyyin;", 19L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      if (yyRecursionLevel ++ == 0) yyLabelCount = 0;", 53L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      if (yyKindToIdent == null) { yyInitKindToIdent (); }", 58L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      yyt = yyRead ();", 22L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      yyRecursionLevel --;", 26L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      return yyt;", 17L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   }", 4L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   public static ", 17L);
Zq0A4_192(Zq0A4_81);
ZfM_29(Zq0A4_172, (STRING)" yyRead () throws java.io.IOException {", 39L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      ", 6L);
Zq0A4_192(Zq0A4_81);
ZfM_29(Zq0A4_172, (STRING)" yyt = null;", 12L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      ", 6L);
Zq0A4_192(Zq0A4_81);
ZfM_29(Zq0A4_172, (STRING)" yyfirst = null;", 16L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      ", 6L);
Zq0A4_192(Zq0A4_81);
ZfM_29(Zq0A4_172, (STRING)" yylast = null;", 15L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      int yyKind;", 17L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      String yys;", 17L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      int yyLabel;", 18L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      do {", 10L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"         if (yylast != null) { yyin.skipSpaces (); readSELECTOR () }", 68L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"         yyLabel = 0;", 21L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"         switch (yyin.read ()) {", 32L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"            case '^':", 21L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"               yyLabel = yyin.readI ();", 39L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"               yyin.read ();", 28L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"               yyt = yyMapToTree (yyLabel);", 43L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"               if (yyfirst == null) yyfirst = yyt;", 50L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"               if (yylast != null) yylast.yySetIterator (yyt);", 62L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"               return yyfirst;", 30L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"            case CocktailReader.EolCh:", 38L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"            case '0':", 21L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"               yyLabel = yyin.readI ();", 39L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"               yyin.read ();", 28L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"            default:", 20L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"               yyin.skipSpaces ();", 34L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"               yys = yyin.readL ().toString ();", 47L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"               yyKind = yyMapToKind (yys);", 42L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"               switch (yyKind) {", 32L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"                  case 0: yyt = null; break;", 44L);
ZfM_33(Zq0A4_172);
Zq0A4_184(W_1->Y13, (Zq0A4_170)Z169);
ZfM_29(Zq0A4_172, (STRING)"               }", 16L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"               if (yyfirst == null) yyfirst = yyt;", 50L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"               if (yyLabel > 0 && yyLabel != yyMapToLabel (yyt)) {", 66L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"                  throw new CocktailError (", 43L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"                     \"", 22L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)": error in read ()\"+", 20L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"                     \"label \" + yyLabel + \" mismatched\");", 57L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"               }", 16L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"               break;", 21L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"            }", 13L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"            if (yylast != null) yylast.yySetIterator (yyt);", 59L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"            yylast = yyt;", 25L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"         } while (yylast != null && yylast.yyHasIterator ());", 61L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"         return yyfirst;", 24L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      }", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"+", 1L);
Zq0A4_192(Zq0A4_81);
ZfM_29(Zq0A4_172, (STRING)".fields", 7L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   private static IdentTable yyIds;", 35L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   private static Ident [] yyKindToIdent;", 41L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"=", 1L);
Zq0A4_192(Zq0A4_81);
ZfM_29(Zq0A4_172, (STRING)".fields", 7L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   private static int yyMapToKind (String yys) {", 48L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      Ident yyi = yyIds.makeIdent (yys);", 40L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      for (int yyk = 0; yyk < yyKindToIdent.length; yyk ++)", 59L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"         if (yyKindToIdent [yyk] == yyi) return yyk;", 52L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      return 0;", 15L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   }", 4L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   private static void yyInitKindToIdent () {", 45L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      yyIds = new IdentTable (", 30L);
Zq0A4_195(Zq0A4_68 + 1);
ZfM_29(Zq0A4_172, (STRING)");", 2L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      yyKindToIdent = new Ident [", 33L);
Zq0A4_195(Zq0A4_68 + 1);
ZfM_29(Zq0A4_172, (STRING)"];", 2L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      yyKindToIdent [0] = yyIds.makeIdent (\"", 44L);
Zq0A4_192(Zq0A4_88);
ZfM_29(Zq0A4_172, (STRING)"\");", 3L);
ZfM_33(Zq0A4_172);
Zq0A4_184(W_1->Y13, (Zq0A4_170)Z170);
ZfM_29(Zq0A4_172, (STRING)"   }", 4L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
}
if (ZpmCQ_25(ORD('p'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)"   public void put (java.io.OutputStream s)", 43L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      throws java.io.IOException {", 34L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      java.io.ObjectOutputStream yyOut;", 39L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      if (s instanceof java.io.ObjectOutputStream) {", 52L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"         yyOut = (java.io.ObjectOutputStream) s;", 48L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      } else {", 14L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"         yyOut = new java.io.ObjectOutputStream (s);", 52L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      }", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      yyOut.writeObject (this);", 31L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   }", 4L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   public void put (String fileName)", 36L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      throws java.io.IOException {", 34L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      java.io.ObjectOutputStream yyOut;", 39L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      yyOut = new java.io.ObjectOutputStream (", 46L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"         new java.io.FileOutputStream (fileName));", 50L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      put (yyOut);", 18L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      yyOut.flush ();", 21L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      yyOut.close ();", 21L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   }", 4L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
}
if (ZpmCQ_25(ORD('g'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)"   public static ", 17L);
Zq0A4_192(Zq0A4_81);
ZfM_29(Zq0A4_172, (STRING)" get (java.io.InputStream s)", 28L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      throws java.io.IOException, java.lang.ClassNotFoundException {", 68L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      java.io.ObjectInputStream yyIn;", 37L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      if (s instanceof java.io.ObjectInputStream) {", 51L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"         yyIn = (java.io.ObjectInputStream) s;", 46L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      } else {", 14L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"         yyIn = new java.io.ObjectInputStream (s);", 50L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      }", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      return (", 14L);
Zq0A4_192(Zq0A4_81);
ZfM_29(Zq0A4_172, (STRING)") yyIn.readObject ();", 21L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   }", 4L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   public static ", 17L);
Zq0A4_192(Zq0A4_81);
ZfM_29(Zq0A4_172, (STRING)" get (String fileName)", 22L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      throws java.io.IOException, java.lang.ClassNotFoundException {", 68L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      java.io.ObjectInputStream yyIn;", 37L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      ", 6L);
Zq0A4_192(Zq0A4_81);
ZfM_29(Zq0A4_172, (STRING)" yyt;", 5L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      yyIn = new java.io.ObjectInputStream (new java.io.FileInputStream (fileName));", 84L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      yyt = (", 13L);
Zq0A4_192(Zq0A4_81);
ZfM_29(Zq0A4_172, (STRING)") yyIn.readObject ();", 21L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      yyIn.close ();", 20L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      return yyt;", 17L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   }", 4L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
}
return;
}
}
}

static void Z167
# ifdef HAVE_ARGS
(Zq0A4_153 Z161)
# else
(Z161)
Zq0A4_153 Z161;
# endif
{
struct S_12 Z162;

if (Z161 == Zq0A4_97) {
return;
}
if (Z161 != NIL && Z161->U_1.V_1.Y0 == Zq0A4_100) {
{
register Zq0A4_226 *W_2 = &Z161->U_1.V_5.Y4;

if ((Zq0A4_177 & W_2->Y2) == 0X0L) {
ZfM_29(Zq0A4_172, (STRING)"+", 1L);
Zq0A4_192(W_2->Y1);
ZfM_29(Zq0A4_172, (STRING)".methods", 8L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      void yWriteNode () throws java.io.IOException {", 53L);
ZfM_33(Zq0A4_172);
if (W_2->Y6->U_1.V_1.Y0 == Zq0A4_100 && ((SET_ELEM (Zq0A4_44) | SET_ELEM (Zq0A4_45)) & W_2->Y6->U_1.V_5.Y4.Y2) != 0X0L) {
ZfM_29(Zq0A4_172, (STRING)"         super.yWriteNode ();", 29L);
ZfM_33(Zq0A4_172);
} else {
ZfM_29(Zq0A4_172, (STRING)"         writeNodeHead (this)", 29L);
ZfM_33(Zq0A4_172);
}
Z147 = W_2->Y1;
Zq0A4_185(W_2->Y3, (Zq0A4_170)Z167);
ZfM_29(Zq0A4_172, (STRING)"      }", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"=", 1L);
Zq0A4_192(W_2->Y1);
ZfM_29(Zq0A4_172, (STRING)".methods", 8L);
ZfM_33(Zq0A4_172);
}
return;
}
}
if (Z161 != NIL && Z161->U_1.V_1.Y0 == Zq0A4_105) {
{
register Zq0A4_231 *W_3 = &Z161->U_1.V_10.Y9;

ZfM_29(Zq0A4_172, (STRING)"         ", 9L);
Zq0A4_192(Zq0A4_85);
ZfM_29(Zq0A4_172, (STRING)".yyWriteSelector (\"", 19L);
Zq0A4_192(W_3->Y3);
ZfM_29(Zq0A4_172, (STRING)"\"); ", 4L);
Zq0A4_192(Zq0A4_85);
ZfM_29(Zq0A4_172, (STRING)".yyWriteAddr (", 14L);
Zq0A4_192(W_3->Y3);
ZfM_29(Zq0A4_172, (STRING)");", 2L);
ZfM_29(Zq0A4_172, (STRING)" yyout.writeNl ();", 18L);
ZfM_33(Zq0A4_172);
return;
}
}
if (Z161 != NIL && Z161->U_1.V_1.Y0 == Zq0A4_106) {
{
register Zq0A4_232 *W_4 = &Z161->U_1.V_11.Y10;

if ((Zq0A4_176 & W_4->Y6) == 0X0L) {
ZfM_29(Zq0A4_172, (STRING)"         ", 9L);
Zq0A4_192(Zq0A4_85);
ZfM_29(Zq0A4_172, (STRING)".yyWriteSelector (\"", 19L);
Zq0A4_192(W_4->Y3);
ZfM_29(Zq0A4_172, (STRING)"\"); write", 9L);
Zq0A4_192(W_4->Y5);
ZfM_29(Zq0A4_172, (STRING)" (", 2L);
Zq0A4_192(W_4->Y3);
ZfM_29(Zq0A4_172, (STRING)") yyout.writeNl ();", 19L);
ZfM_33(Zq0A4_172);
}
return;
}
}
}

static void Z166
# ifdef HAVE_ARGS
(Zq0A4_153 Z161)
# else
(Z161)
Zq0A4_153 Z161;
# endif
{
struct S_11 Z162;

if (Z161 == Zq0A4_97) {
return;
}
if (Z161 != NIL && Z161->U_1.V_1.Y0 == Zq0A4_100) {
{
register Zq0A4_226 *W_5 = &Z161->U_1.V_5.Y4;

if ((Zq0A4_177 & W_5->Y2) == 0X0L) {
ZfM_29(Zq0A4_172, (STRING)"+", 1L);
Zq0A4_192(W_5->Y1);
ZfM_29(Zq0A4_172, (STRING)".methods", 8L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      void yyMark0 () {", 23L);
ZfM_33(Zq0A4_172);
Zq0A4dgAd_6(Z161);
Z147 = W_5->Y1;
Zq0A4_185(Z161, (Zq0A4_170)Z166);
ZfM_29(Zq0A4_172, (STRING)"      }", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"=", 1L);
Zq0A4_192(W_5->Y1);
ZfM_29(Zq0A4_172, (STRING)".methods", 8L);
ZfM_33(Zq0A4_172);
}
return;
}
}
if (Z161 != NIL && Z161->U_1.V_1.Y0 == Zq0A4_105) {
{
register Zq0A4_231 *W_6 = &Z161->U_1.V_10.Y9;

if (Z161 != Zq0A4dgAd_0) {
ZfM_29(Zq0A4_172, (STRING)"         ", 9L);
Zq0A4_192(Zq0A4_81);
ZfM_29(Zq0A4_172, (STRING)".yyMark (", 9L);
Zq0A4_192(W_6->Y3);
ZfM_29(Zq0A4_172, (STRING)");", 2L);
ZfM_33(Zq0A4_172);
}
return;
}
}
}

static void Z181
# ifdef HAVE_ARGS
(Zq0A4_153 Z161)
# else
(Z161)
Zq0A4_153 Z161;
# endif
{
struct S_10 Z162;

if (Z161 == Zq0A4_97) {
return;
}
if (Z161 != NIL && Z161->U_1.V_1.Y0 == Zq0A4_100) {
{
register Zq0A4_226 *W_7 = &Z161->U_1.V_5.Y4;

if ((Zq0A4_177 & W_7->Y2) == 0X0L && ((SET_ELEM (Zq0A4_44) | SET_ELEM (Zq0A4_45)) & W_7->Y2) != 0X0L) {
ZfM_29(Zq0A4_172, (STRING)"   case k", 9L);
Zq0A4_192(W_7->Y1);
ZfM_29(Zq0A4_172, (STRING)": yWrite", 8L);
Zq0A4_192(W_7->Y1);
ZfM_29(Zq0A4_172, (STRING)" (yyt); ", 8L);
Zq0A4dgAd_6(Z161);
if (Zq0A4dgAd_0 == Zq0A4_97) {
ZfM_29(Zq0A4_172, (STRING)"break loop;", 11L);
ZfM_33(Zq0A4_172);
} else {
ZfM_29(Zq0A4_172, (STRING)"writeSELECTOR (\"", 16L);
Zq0A4_192(Zq0A4dgAd_0->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)"\")", 2L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"    yyt = ((", 12L);
Zq0A4_192(W_7->Y1);
ZfM_29(Zq0A4_172, (STRING)") yyt).", 7L);
Zq0A4_192(Zq0A4dgAd_0->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)"; break;", 8L);
ZfM_33(Zq0A4_172);
}
}
return;
}
}
}

static void Z168
# ifdef HAVE_ARGS
(Zq0A4_153 Z161)
# else
(Z161)
Zq0A4_153 Z161;
# endif
{
struct S_8 Z162;

if (Z161 == Zq0A4_97) {
return;
}
if (Z161 != NIL && Z161->U_1.V_1.Y0 == Zq0A4_100) {
{
register struct S_9 *W_8 = &Z162.U_1.V_1.Y0;

for (;;) {
{
register Zq0A4_226 *W_9 = &Z161->U_1.V_5.Y4;

if (!((Zq0A4_177 & W_9->Y2) == 0X0L && ((SET_ELEM (Zq0A4_44) | SET_ELEM (Zq0A4_45)) & W_9->Y2) != 0X0L)) {
goto EXIT_1;
}
ZfM_29(Zq0A4_172, (STRING)"+", 1L);
Zq0A4_192(W_9->Y1);
ZfM_29(Zq0A4_172, (STRING)".methods", 8L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      String yyWrite () throws java.io.IOException {", 52L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"         String result = super.yyWrite ();", 42L);
ZfM_33(Zq0A4_172);
Z147 = W_9->Y1;
if (W_9->Y6->U_1.V_1.Y0 == Zq0A4_100 && ((SET_ELEM (Zq0A4_44) | SET_ELEM (Zq0A4_45)) & W_9->Y6->U_1.V_5.Y4.Y2) != 0X0L) {
Zq0A4dgAd_6(W_9->Y6);
W_8->Y0 = Zq0A4dgAd_0;
Zq0A4dgAd_6(Z161);
if (W_8->Y0 != Zq0A4_97 && W_8->Y0 != Zq0A4dgAd_0) {
ZfM_29(Zq0A4_172, (STRING)"         ", 9L);
Zq0A4_192(Zq0A4_81);
ZfM_29(Zq0A4_172, (STRING)".yyIndentSelectorTree (\"", 24L);
Zq0A4_192(W_8->Y0->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)"\",", 2L);
Zq0A4_192(W_8->Y0->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)");", 2L);
ZfM_33(Zq0A4_172);
}
} else {
Zq0A4dgAd_6(Z161);
}
Zq0A4_185(W_9->Y3, (Zq0A4_170)Z168);
ZfM_29(Zq0A4_172, (STRING)"         return result;", 23L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      }", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"=", 1L);
Zq0A4_192(W_9->Y1);
ZfM_29(Zq0A4_172, (STRING)".methods", 8L);
ZfM_33(Zq0A4_172);
return;
}
} EXIT_1:;
}
}
if (Z161 != NIL && Z161->U_1.V_1.Y0 == Zq0A4_105) {
{
register Zq0A4_231 *W_10 = &Z161->U_1.V_10.Y9;

if (Z161 == Zq0A4dgAd_0) {
ZfM_29(Zq0A4_172, (STRING)"         result = \"", 19L);
Zq0A4_192(W_10->Y3);
ZfM_29(Zq0A4_172, (STRING)"\";", 2L);
ZfM_33(Zq0A4_172);
} else {
ZfM_29(Zq0A4_172, (STRING)"         ", 9L);
Zq0A4_192(Zq0A4_81);
ZfM_29(Zq0A4_172, (STRING)".yyIndentSelectorTree (\"", 24L);
Zq0A4_192(W_10->Y3);
ZfM_29(Zq0A4_172, (STRING)"\", ", 3L);
Zq0A4_192(W_10->Y3);
ZfM_29(Zq0A4_172, (STRING)");", 2L);
ZfM_33(Zq0A4_172);
}
return;
}
}
if (Z161 != NIL && Z161->U_1.V_1.Y0 == Zq0A4_106) {
for (;;) {
{
register Zq0A4_232 *W_11 = &Z161->U_1.V_11.Y10;

if (!((Zq0A4_176 & W_11->Y6) == 0X0L)) {
goto EXIT_2;
}
ZfM_29(Zq0A4_172, (STRING)"         ", 9L);
Zq0A4_192(Zq0A4_81);
ZfM_29(Zq0A4_172, (STRING)".writeSELECTOR (\"", 17L);
Zq0A4_192(W_11->Y3);
ZfM_29(Zq0A4_172, (STRING)"\")", 2L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"         write", 14L);
Zq0A4_192(W_11->Y5);
ZfM_29(Zq0A4_172, (STRING)" (", 2L);
Zq0A4_192(W_11->Y3);
ZfM_29(Zq0A4_172, (STRING)") yyout.writeNl ();", 19L);
ZfM_33(Zq0A4_172);
return;
}
} EXIT_2:;
}
}

static void Z169
# ifdef HAVE_ARGS
(Zq0A4_153 Z161)
# else
(Z161)
Zq0A4_153 Z161;
# endif
{
struct S_6 Z162;

if (Z161 == Zq0A4_97) {
return;
}
if (Z161 != NIL && Z161->U_1.V_1.Y0 == Zq0A4_100) {
{
register struct S_7 *W_12 = &Z162.U_1.V_1.Y0;

for (;;) {
{
register Zq0A4_226 *W_13 = &Z161->U_1.V_5.Y4;

if (!((Zq0A4_177 & W_13->Y2) == 0X0L)) {
goto EXIT_3;
}
ZfM_29(Zq0A4_172, (STRING)"                  case k", 24L);
Zq0A4_192(W_13->Y1);
ZfM_29(Zq0A4_172, (STRING)": yyt = new ", 12L);
Zq0A4_192(W_13->Y1);
ZfM_29(Zq0A4_172, (STRING)" (yyin); break;", 15L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"+", 1L);
Zq0A4_192(W_13->Y1);
ZfM_29(Zq0A4_172, (STRING)".constructors", 13L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      ", 6L);
Zq0A4_192(W_13->Y1);
ZfM_29(Zq0A4_172, (STRING)" (CocktailReader yyin) throws java.io.IOException {", 51L);
ZfM_33(Zq0A4_172);
Z147 = W_13->Y1;
if (W_13->Y6->U_1.V_1.Y0 == Zq0A4_100 && ((SET_ELEM (Zq0A4_44) | SET_ELEM (Zq0A4_45)) & W_13->Y6->U_1.V_5.Y4.Y2) != 0X0L) {
ZfM_29(Zq0A4_172, (STRING)"         super (yyin);", 22L);
ZfM_33(Zq0A4_172);
Zq0A4dgAd_6(W_13->Y6);
W_12->Y0 = Zq0A4dgAd_0;
Zq0A4dgAd_6(Z161);
if (W_12->Y0 != Zq0A4_97 && W_12->Y0 != Zq0A4dgAd_0) {
ZfM_29(Zq0A4_172, (STRING)"         yyin.skipSpaces (); readSELECTOR ()", 44L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"         ", 9L);
Zq0A4_192(W_12->Y0->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)" = (", 4L);
Zq0A4_192(W_12->Y0->U_1.V_10.Y9.Y4);
ZfM_29(Zq0A4_172, (STRING)") this.yyRead (); yyin.read ();", 31L);
ZfM_33(Zq0A4_172);
}
} else {
ZfM_29(Zq0A4_172, (STRING)"         readNodeHead (this)", 28L);
ZfM_33(Zq0A4_172);
Zq0A4dgAd_6(Z161);
}
Zq0A4_185(W_13->Y3, (Zq0A4_170)Z169);
ZfM_29(Zq0A4_172, (STRING)"      }", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"=", 1L);
Zq0A4_192(W_13->Y1);
ZfM_29(Zq0A4_172, (STRING)".constructors", 13L);
ZfM_33(Zq0A4_172);
return;
}
} EXIT_3:;
}
}
if (Z161 != NIL && Z161->U_1.V_1.Y0 == Zq0A4_105) {
for (;;) {
{
register Zq0A4_231 *W_14 = &Z161->U_1.V_10.Y9;

if (!(Z161 != Zq0A4dgAd_0)) {
goto EXIT_4;
}
ZfM_29(Zq0A4_172, (STRING)"         yyin.skipSpaces (); readSELECTOR ()", 44L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"         ", 9L);
Zq0A4_192(W_14->Y3);
ZfM_29(Zq0A4_172, (STRING)" = (", 4L);
Zq0A4_192(W_14->Y4);
ZfM_29(Zq0A4_172, (STRING)") this.yyRead (); yyin.read ();", 31L);
ZfM_33(Zq0A4_172);
return;
}
} EXIT_4:;
}
if (Z161 != NIL && Z161->U_1.V_1.Y0 == Zq0A4_106) {
for (;;) {
{
register Zq0A4_232 *W_15 = &Z161->U_1.V_11.Y10;

if (!((Zq0A4_176 & W_15->Y6) == 0X0L)) {
goto EXIT_5;
}
ZfM_29(Zq0A4_172, (STRING)"         yyin.skipSpaces (); readSELECTOR ()", 44L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"         read", 13L);
Zq0A4_192(W_15->Y5);
ZfM_29(Zq0A4_172, (STRING)"(", 1L);
Zq0A4_192(W_15->Y3);
ZfM_29(Zq0A4_172, (STRING)") yyin.read ();", 15L);
ZfM_33(Zq0A4_172);
return;
}
} EXIT_5:;
}
}

static void Z170
# ifdef HAVE_ARGS
(Zq0A4_153 Z161)
# else
(Z161)
Zq0A4_153 Z161;
# endif
{
struct S_5 Z162;

if (Z161 == Zq0A4_97) {
return;
}
if (Z161 != NIL && Z161->U_1.V_1.Y0 == Zq0A4_100) {
{
register Zq0A4_226 *W_16 = &Z161->U_1.V_5.Y4;

if ((Zq0A4_177 & W_16->Y2) == 0X0L) {
ZfM_29(Zq0A4_172, (STRING)"      yyKindToIdent [k", 22L);
Zq0A4_192(W_16->Y1);
ZfM_29(Zq0A4_172, (STRING)"] = yyIds.makeIdent (\"", 22L);
Zq0A4_192(W_16->Y1);
ZfM_29(Zq0A4_172, (STRING)"\");", 3L);
ZfM_33(Zq0A4_172);
}
return;
}
}
}

void Zq0A4dgAd_6
# ifdef HAVE_ARGS
(Zq0A4_153 Z161)
# else
(Z161)
Zq0A4_153 Z161;
# endif
{
struct S_4 Z162;

if (Z161 == Zq0A4_97) {
return;
}
if (Z161 != NIL && Z161->U_1.V_1.Y0 == Zq0A4_100) {
{
register Zq0A4_226 *W_17 = &Z161->U_1.V_5.Y4;

Zq0A4dgAd_0 = Zq0A4_97;
Z148 = Zq0A4_97;
Zq0A4_185(Z161, (Zq0A4_170)Zq0A4dgAd_6);
if (Z148 != Zq0A4_97) {
Zq0A4dgAd_0 = Z148;
}
return;
}
}
if (Z161 != NIL && Z161->U_1.V_1.Y0 == Zq0A4_105) {
{
register Zq0A4_231 *W_18 = &Z161->U_1.V_10.Y9;

Zq0A4dgAd_0 = Z161;
if (IN(Zq0A4_3, W_18->Y6)) {
Z148 = Z161;
}
return;
}
}
}

void Zq0A4dgAd_7
# ifdef HAVE_ARGS
(Zq0A4_153 Z161)
# else
(Z161)
Zq0A4_153 Z161;
# endif
{
struct S_3 Z162;

if (Z161 == Zq0A4_97) {
return;
}
if (Z161 != NIL && Z161->U_1.V_1.Y0 == Zq0A4_127) {
{
register Zq0A4_253 *W_19 = &Z161->U_1.V_32.Y31;

ZfM_29(Zq0A4_172, (STRING)"+", 1L);
Zq0A4_192(Zq0A4_81);
ZfM_29(Zq0A4_172, (STRING)".fields", 7L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   private static int yyLine, yyCurLine;", 40L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   private static ", 18L);
Zq0A4_192(Zq0A4_81);
ZfM_29(Zq0A4_172, (STRING)" yyTheTree, yyTheNode;", 22L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"=", 1L);
Zq0A4_192(Zq0A4_81);
ZfM_29(Zq0A4_172, (STRING)".fields", 7L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   private void yySearch4 (Position yyp) {", 42L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      if (yyLine <= yyp.line && yyp.line < yyCurLine)", 53L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"         { yyTheNode = this; yyCurLine = yyp.line; }", 52L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   }", 4L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   private static ProcTree yySearch2 = new ProcTree () {", 56L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      public void proc (", 24L);
Zq0A4_192(Zq0A4_81);
ZfM_29(Zq0A4_172, (STRING)" yyt) {", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"         yyt.yySearch5 ();", 26L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      }", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   };", 5L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"+", 1L);
Zq0A4_192(Zq0A4_81);
ZfM_29(Zq0A4_172, (STRING)".methods", 8L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   void yySearch5 () {}", 23L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"=", 1L);
Zq0A4_192(Zq0A4_81);
ZfM_29(Zq0A4_172, (STRING)".methods", 8L);
ZfM_33(Zq0A4_172);
Zq0A4_184(W_19->Y13, (Zq0A4_170)Z186);
return;
}
}
}

static void Z186
# ifdef HAVE_ARGS
(Zq0A4_153 Z187)
# else
(Z187)
Zq0A4_153 Z187;
# endif
{
struct S_2 Z162;

if (Z187 == Zq0A4_97) {
return;
}
if (Z187 != NIL && Z187->U_1.V_1.Y0 == Zq0A4_100) {
for (;;) {
{
register Zq0A4_226 *W_20 = &Z187->U_1.V_5.Y4;

if (!((Zq0A4_177 & W_20->Y2) == 0X0L && IN(Zq0A4_45, W_20->Y2))) {
goto EXIT_6;
}
if (!Z188(Z187)) {
goto EXIT_6;
}
Z147 = W_20->Y1;
Zq0A4_185(Z187, (Zq0A4_170)Z186);
return;
}
} EXIT_6:;
}
if (Z187 != NIL && Z187->U_1.V_1.Y0 == Zq0A4_106) {
for (;;) {
{
register Zq0A4_232 *W_21 = &Z187->U_1.V_11.Y10;

if (!(W_21->Y4 == Zq0A4_75)) {
goto EXIT_7;
}
ZfM_29(Zq0A4_172, (STRING)"+", 1L);
Zq0A4_192(Z147);
ZfM_29(Zq0A4_172, (STRING)".methods", 8L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      void yySearch5 () {yySearch4 (", 36L);
Zq0A4_192(W_21->Y3);
ZfM_29(Zq0A4_172, (STRING)");}", 3L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"=", 1L);
Zq0A4_192(Z147);
ZfM_29(Zq0A4_172, (STRING)".methods", 8L);
ZfM_33(Zq0A4_172);
return;
}
} EXIT_7:;
}
}

static BOOLEAN Z188
# ifdef HAVE_ARGS
(Zq0A4_153 Z189)
# else
(Z189)
Zq0A4_153 Z189;
# endif
{
struct S_1 Z162;

for (;;) {
for (;;) {
if (Z189 == Zq0A4_97) {
return FALSE;
}
if (Z189 != NIL && Z189->U_1.V_1.Y0 == Zq0A4_106) {
for (;;) {
{
register Zq0A4_232 *W_22 = &Z189->U_1.V_11.Y10;

if (!(W_22->Y4 == Zq0A4_75)) {
goto EXIT_10;
}
return TRUE;
}
} EXIT_10:;
}
if (Zq0A4_297(Z189, Zq0A4_103)) {
{
register Zq0A4_229 *W_23 = &Z189->U_1.V_8.Y7;

Z189 = W_23->Y1;
goto EXIT_9;
}
}
if (Z189 != NIL && Z189->U_1.V_1.Y0 == Zq0A4_100) {
for (;;) {
{
register Zq0A4_226 *W_24 = &Z189->U_1.V_5.Y4;

if (!(Z188(W_24->Y3) || Z188(W_24->Y6))) {
goto EXIT_11;
}
return TRUE;
}
} EXIT_11:;
}
return FALSE;
} EXIT_9:;
} EXIT_8:;
}

void Zq0A4dgAd_8
 ARGS ((void))
{
}

void Zq0A4dgAd_9
 ARGS ((void))
{
}

static void Z195
 ARGS ((void))
{
ZfM_34();
rExit(1L);
}

void BEGIN_TreeJav2 ARGS ((void))
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

Zq0A4dgAd_2 = ZfM_1;
Zq0A4dgAd_4 = Z195;
Zq0A4dgAd_8();
}
