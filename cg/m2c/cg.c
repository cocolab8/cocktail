#include "SYSTEM_.h"

#ifndef DEFINITION_rSystem
#include "rSystem.h"
#endif

#ifndef DEFINITION_rMemory
#include "rMemory.h"
#endif

#ifndef DEFINITION_Position
#include "Position.h"
#endif

#ifndef DEFINITION_IO
#include "IO.h"
#endif

#ifndef DEFINITION_Strings
#include "Strings.h"
#endif

#ifndef DEFINITION_Idents
#include "Idents.h"
#endif

#ifndef DEFINITION_Sets
#include "Sets.h"
#endif

#ifndef DEFINITION_Errors
#include "Errors.h"
#endif

#ifndef DEFINITION_Scanner
#include "Scanner.h"
#endif

#ifndef DEFINITION_Parser
#include "Parser.h"
#endif

#ifndef DEFINITION_Tree
#include "Tree.h"
#endif

#ifndef DEFINITION_Tree2
#include "Tree2.h"
#endif

#ifndef DEFINITION_Semantic
#include "Semantic.h"
#endif

#ifndef DEFINITION_Order
#include "Order.h"
#endif

#ifndef DEFINITION_Dialog
#include "Dialog.h"
#endif

#ifndef DEFINITION_Sets
#include "Sets.h"
#endif

#ifndef DEFINITION_GramMod
#include "GramMod.h"
#endif

#ifndef DEFINITION_TreeMod1
#include "TreeMod1.h"
#endif

#ifndef DEFINITION_EvalMod
#include "EvalMod.h"
#endif

#ifndef DEFINITION_EvalMod2
#include "EvalMod2.h"
#endif

#ifndef DEFINITION_EvalMod3
#include "EvalMod3.h"
#endif

#ifndef DEFINITION_EvalMod4
#include "EvalMod4.h"
#endif

#ifndef DEFINITION_GramC
#include "GramC.h"
#endif

#ifndef DEFINITION_GramYacc
#include "GramYacc.h"
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

#ifndef DEFINITION_EvalC2
#include "EvalC2.h"
#endif

#ifndef DEFINITION_EvalC3
#include "EvalC3.h"
#endif

#ifndef DEFINITION_EvalC4
#include "EvalC4.h"
#endif

#ifndef DEFINITION_GramAda
#include "GramAda.h"
#endif

#ifndef DEFINITION_GramJava
#include "GramJava.h"
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

#ifndef DEFINITION_EvalJav2
#include "EvalJav2.h"
#endif

#ifndef DEFINITION_EvalJav3
#include "EvalJav3.h"
#endif

#ifndef DEFINITION_EvalJav4
#include "EvalJav4.h"
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

#ifndef DEFINITION_EvalCxx2
#include "EvalCxx2.h"
#endif

#ifndef DEFINITION_EvalCxx3
#include "EvalCxx3.h"
#endif

#ifndef DEFINITION_EvalCxx4
#include "EvalCxx4.h"
#endif

#define Z257	208
static CHAR Z258 [] = ".md";
static CHAR Z259 [] = ".mi";
static CHAR Z260 [] = ".imp";
static CHAR Z261 [] = ".h";
static CHAR Z262 [] = ".c";
static CHAR Z263 [] = ".cxx";
static CHAR Z264 [] = ".java";
static Zp1PEAFD_2 Z265, Z266, Z267, Z268, Z269;
static struct S_1 {
CHAR A[255 + 1];
} Z270, Z271;
static struct S_2 {
CHAR A[1023 + 1];
} Z272;
static SHORTCARD Z273, Z274;
static CHAR Z275;
static ZpmCQ_4 Z276;
static BOOLEAN Z277;
static ZDz6VQCC_5 Z278;
static void Z279 ARGS ((void));
static void Z285 ARGS ((void));
static void Z290 ARGS ((Zq0A4_153 Z287));
static ZfM_3 Z283 ARGS ((Zp1PEAFD_2 Z294));
static void Z284 ARGS ((Zp1PEAFD_2 Z294, ZfM_3 Z199));
static INTEGER Z296 ARGS ((CHAR Z275));
static void Z297 ARGS ((INTEGER Z295));
static BOOLEAN Z299 ARGS ((CHAR Z300[], LONGCARD O_1, CARDINAL Z301));
struct S_4 {
CHAR A[128 + 1];
};
struct S_5 {
CHAR A[10 + 1];
};
struct S_6 {
BITSET A[32 + 1];
};
struct S_7 {
CHAR A[32 + 1];
};


static void Z279
 ARGS ((void))
{
ZfM_3 Z280;
Zp1PEAFD_2 Z281;
Zfb3DLQ_0 Z273;
INTEGER Z274;
ZpmCQ_4 Z282;

ZpmCQ_5(&Z282, ZpmCQ_16(&Zq0A4_92));
ZpmCQ_30(&Z282, Zq0A4_92);
if (ZpmCQ_25(ORD('*'), &Zq0A4_171)) {
Zp1PEAFD_13((STRING)"TypeTab.cxx", 11L, &Z268);
} else if (ZpmCQ_25(ORD('+'), &Zq0A4_171)) {
Zp1PEAFD_13((STRING)"TypeTab.cx", 10L, &Z268);
} else if (ZpmCQ_25(ORD('c'), &Zq0A4_171)) {
Zp1PEAFD_13((STRING)"TypeTab.c", 9L, &Z268);
} else if (ZpmCQ_25(ORD('J'), &Zq0A4_171)) {
Zp1PEAFD_13((STRING)"TypeTab.j", 9L, &Z268);
} else {
Zp1PEAFD_13((STRING)"TypeTab.m", 9L, &Z268);
}
Zp1PEAFD_3(&Z269, &Zq0A4_89);
Zp1PEAFD_5(&Z269, &Z268);
Zp1PEAFD_6(&Z269, '\0');
Zp1PEAFD_14(&Z269, Z271.A, 256L);
Z280 = ZfM_4(Z271.A, 256L);
if (Z280 < 0) {
ZblNKKO_45((STRING)"can not access file", 19L, (LONGCARD)ZblNKKO_16, ZmtLFGGBG_1, (LONGCARD)ZblNKKO_32, ADR (Z271));
INC(Zq0A4_0);
return;
}
Zp1PEAFD_13((STRING)"yy", 2L, &Z269);
Zfb3DLQ_3(Zq0A4_85, &Zq0A4_90);
Zp1PEAFD_5(&Z269, &Zq0A4_90);
Zp1PEAFD_13((STRING)".h", 2L, &Z268);
Zp1PEAFD_5(&Z269, &Z268);
Zq0A4_172 = Z283(Z269);
while (!ZfM_19(Z280)) {
Zp1PEAFD_20(Z280, &Z281);
Z273 = Zfb3DLQ_2(&Z281);
if (Z273 <= ZpmC89LG6_0 && ZpmCQ_25((LONGCARD)Z273, &Z282)) {
ZpmCQ_14(&Z282, (LONGCARD)Z273);
ZfM_29(Zq0A4_172, (STRING)"# ifndef begin", 14L);
Zq0A4_192(Z273);
ZfM_33(Zq0A4_172);
Zp1PEAFD_20(Z280, &Z281);
Zp1PEAFD_22(Zq0A4_172, &Z281);
ZfM_29(Zq0A4_172, (STRING)"# endif", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# ifndef close", 14L);
Zq0A4_192(Z273);
ZfM_33(Zq0A4_172);
Zp1PEAFD_20(Z280, &Z281);
Zp1PEAFD_22(Zq0A4_172, &Z281);
ZfM_29(Zq0A4_172, (STRING)"# endif", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# ifndef read", 13L);
Zq0A4_192(Z273);
ZfM_33(Zq0A4_172);
Zp1PEAFD_20(Z280, &Z281);
Zp1PEAFD_22(Zq0A4_172, &Z281);
ZfM_29(Zq0A4_172, (STRING)"# endif", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# ifndef write", 14L);
Zq0A4_192(Z273);
ZfM_33(Zq0A4_172);
Zp1PEAFD_20(Z280, &Z281);
Zp1PEAFD_22(Zq0A4_172, &Z281);
ZfM_29(Zq0A4_172, (STRING)"# endif", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# ifndef get", 12L);
Zq0A4_192(Z273);
ZfM_33(Zq0A4_172);
Zp1PEAFD_20(Z280, &Z281);
Zp1PEAFD_22(Zq0A4_172, &Z281);
ZfM_29(Zq0A4_172, (STRING)"# endif", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# ifndef put", 12L);
Zq0A4_192(Z273);
ZfM_33(Zq0A4_172);
Zp1PEAFD_20(Z280, &Z281);
Zp1PEAFD_22(Zq0A4_172, &Z281);
ZfM_29(Zq0A4_172, (STRING)"# endif", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# ifndef copy", 13L);
Zq0A4_192(Z273);
ZfM_33(Zq0A4_172);
Zp1PEAFD_20(Z280, &Z281);
Zp1PEAFD_22(Zq0A4_172, &Z281);
ZfM_29(Zq0A4_172, (STRING)"# endif", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# ifndef equal", 14L);
Zq0A4_192(Z273);
ZfM_33(Zq0A4_172);
Zp1PEAFD_20(Z280, &Z281);
Zp1PEAFD_22(Zq0A4_172, &Z281);
ZfM_29(Zq0A4_172, (STRING)"# endif", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# ifndef writeXML", 17L);
Zq0A4_192(Z273);
ZfM_33(Zq0A4_172);
Zp1PEAFD_20(Z280, &Z281);
Zp1PEAFD_22(Zq0A4_172, &Z281);
ZfM_29(Zq0A4_172, (STRING)"# endif", 7L);
ZfM_33(Zq0A4_172);
} else {
for (Z274 = 1; Z274 <= 9; Z274 += 1) {
ZfM_16(Z280);
}
}
}
ZfM_5(Z280);
if (Zq0A4_86 <= ZpmC89LG6_0) {
ZpmCQ_14(&Z282, (LONGCARD)Zq0A4_86);
}
while (!ZpmCQ_26(Z282)) {
Z273 = ZpmCQ_20(&Z282);
if (ZpmCQ_25(ORD('c'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)"# ifndef begin", 14L);
Zq0A4_192(Z273);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# define begin", 14L);
Zq0A4_192(Z273);
ZfM_29(Zq0A4_172, (STRING)"(a)", 3L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# endif", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# ifndef close", 14L);
Zq0A4_192(Z273);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# define close", 14L);
Zq0A4_192(Z273);
ZfM_29(Zq0A4_172, (STRING)"(a)", 3L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# endif", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# ifndef read", 13L);
Zq0A4_192(Z273);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# define read", 13L);
Zq0A4_192(Z273);
ZfM_29(Zq0A4_172, (STRING)"(a)	\\", 5L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  yyReadHex ((unsigned char *) & a, sizeof (a));", 48L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# endif", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# ifndef write", 14L);
Zq0A4_192(Z273);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# define write", 14L);
Zq0A4_192(Z273);
ZfM_29(Zq0A4_172, (STRING)"(a)	\\", 5L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  yyWriteHex ((unsigned char *) & a, sizeof (a));", 49L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# endif", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# ifndef get", 12L);
Zq0A4_192(Z273);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# define get", 12L);
Zq0A4_192(Z273);
ZfM_29(Zq0A4_172, (STRING)"(a)	yyGet ((char *) & a, sizeof (a));", 37L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# endif", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# ifndef put", 12L);
Zq0A4_192(Z273);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# define put", 12L);
Zq0A4_192(Z273);
ZfM_29(Zq0A4_172, (STRING)"(a)	yyPut ((char *) & a, sizeof (a));", 37L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# endif", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# ifndef copy", 13L);
Zq0A4_192(Z273);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# define copy", 13L);
Zq0A4_192(Z273);
ZfM_29(Zq0A4_172, (STRING)"(a, b)", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# endif", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# ifndef equal", 14L);
Zq0A4_192(Z273);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# define equal", 14L);
Zq0A4_192(Z273);
ZfM_29(Zq0A4_172, (STRING)"(a, b)	\\", 8L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  memcmp ((char *) & a, (char *) & b, sizeof (a)) == 0", 54L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# endif", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# ifndef writeXML", 17L);
Zq0A4_192(Z273);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# define writeXML", 17L);
Zq0A4_192(Z273);
ZfM_29(Zq0A4_172, (STRING)"(a)	\\", 5L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  yyWriteHex ((unsigned char *) & a, sizeof (a));", 49L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# endif", 7L);
ZfM_33(Zq0A4_172);
} else if (ZpmCQ_25(ORD('J'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)"# ifndef begin", 14L);
Zq0A4_192(Z273);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# define begin", 14L);
Zq0A4_192(Z273);
ZfM_29(Zq0A4_172, (STRING)"(a)", 3L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# endif", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# ifndef close", 14L);
Zq0A4_192(Z273);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# define close", 14L);
Zq0A4_192(Z273);
ZfM_29(Zq0A4_172, (STRING)"(a)", 3L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# endif", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# ifndef read", 13L);
Zq0A4_192(Z273);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# define read", 13L);
Zq0A4_192(Z273);
ZfM_29(Zq0A4_172, (STRING)"(a)	a = new ", 12L);
Zq0A4_192(Z273);
ZfM_29(Zq0A4_172, (STRING)" (yyin.readL ().toString ());", 29L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# endif", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# ifndef write", 14L);
Zq0A4_192(Z273);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# define write", 14L);
Zq0A4_192(Z273);
ZfM_29(Zq0A4_172, (STRING)"(a)	yyout.write (a == null ? \"null\" : a.toString ());", 53L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# endif", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# ifndef get", 12L);
Zq0A4_192(Z273);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# define get", 12L);
Zq0A4_192(Z273);
ZfM_29(Zq0A4_172, (STRING)"(a)	**not used**", 16L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# endif", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# ifndef put", 12L);
Zq0A4_192(Z273);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# define put", 12L);
Zq0A4_192(Z273);
ZfM_29(Zq0A4_172, (STRING)"(a)	**not used**", 16L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# endif", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# ifndef copy", 13L);
Zq0A4_192(Z273);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# define copy", 13L);
Zq0A4_192(Z273);
ZfM_29(Zq0A4_172, (STRING)"(a, b)	a = (b);", 15L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# endif", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# ifndef equal", 14L);
Zq0A4_192(Z273);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# define equal", 14L);
Zq0A4_192(Z273);
ZfM_29(Zq0A4_172, (STRING)"(a, b)	(a.equals (b))", 21L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# endif", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# ifndef writeXML", 17L);
Zq0A4_192(Z273);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# define writeXML", 17L);
Zq0A4_192(Z273);
ZfM_29(Zq0A4_172, (STRING)"(a)	**not used**", 16L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# endif", 7L);
ZfM_33(Zq0A4_172);
} else {
ZfM_29(Zq0A4_172, (STRING)"# ifndef begin", 14L);
Zq0A4_192(Z273);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# define begin", 14L);
Zq0A4_192(Z273);
ZfM_29(Zq0A4_172, (STRING)"(a)", 3L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# endif", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# ifndef close", 14L);
Zq0A4_192(Z273);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# define close", 14L);
Zq0A4_192(Z273);
ZfM_29(Zq0A4_172, (STRING)"(a)", 3L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# endif", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# ifndef read", 13L);
Zq0A4_192(Z273);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# define read", 13L);
Zq0A4_192(Z273);
ZfM_29(Zq0A4_172, (STRING)"(a)	yyReadHex (a);", 18L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# endif", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# ifndef write", 14L);
Zq0A4_192(Z273);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# define write", 14L);
Zq0A4_192(Z273);
ZfM_29(Zq0A4_172, (STRING)"(a)	yyWriteHex (a);", 19L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# endif", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# ifndef get", 12L);
Zq0A4_192(Z273);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# define get", 12L);
Zq0A4_192(Z273);
ZfM_29(Zq0A4_172, (STRING)"(a)	yyGet (a);", 14L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# endif", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# ifndef put", 12L);
Zq0A4_192(Z273);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# define put", 12L);
Zq0A4_192(Z273);
ZfM_29(Zq0A4_172, (STRING)"(a)	yyPut (a);", 14L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# endif", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# ifndef copy", 13L);
Zq0A4_192(Z273);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# define copy", 13L);
Zq0A4_192(Z273);
ZfM_29(Zq0A4_172, (STRING)"(a, b)", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# endif", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# ifndef equal", 14L);
Zq0A4_192(Z273);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# define equal", 14L);
Zq0A4_192(Z273);
ZfM_29(Zq0A4_172, (STRING)"(a, b)	yyIsEqual (a, b)", 23L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# endif", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# ifndef writeXML", 17L);
Zq0A4_192(Z273);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# define writeXML", 17L);
Zq0A4_192(Z273);
ZfM_29(Zq0A4_172, (STRING)"(a)	yyWriteHex (a);", 19L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# endif", 7L);
ZfM_33(Zq0A4_172);
}
}
ZpmCQ_5(&Z282, ZpmCQ_16(&Zq0A4_93));
ZpmCQ_30(&Z282, Zq0A4_93);
if (!ZpmCQ_25(ORD('J'), &Zq0A4_171)) {
ZpmCQ_13(&Z282, (LONGCARD)Zq0A4_86);
}
while (!ZpmCQ_26(Z282)) {
Z273 = ZpmCQ_20(&Z282);
if (ZpmCQ_25(ORD('c'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)"# ifndef begin", 14L);
Zq0A4_192(Z273);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# define begin", 14L);
Zq0A4_192(Z273);
ZfM_29(Zq0A4_172, (STRING)"(a)	a = ", 8L);
Zq0A4_192(Zq0A4_88);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# endif", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# ifndef close", 14L);
Zq0A4_192(Z273);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# define close", 14L);
Zq0A4_192(Z273);
ZfM_29(Zq0A4_172, (STRING)"(a)", 3L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# endif", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# ifndef read", 13L);
Zq0A4_192(Z273);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# define read", 13L);
Zq0A4_192(Z273);
ZfM_29(Zq0A4_172, (STRING)"(a)	fscanf (yyf, \"%p +\", (void * *) & a);", 41L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# endif", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# ifndef write", 14L);
Zq0A4_192(Z273);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# define write", 14L);
Zq0A4_192(Z273);
ZfM_29(Zq0A4_172, (STRING)"(a)	fprintf (yyf, \"%p +\", (void *) a);", 38L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# endif", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# ifndef get", 12L);
Zq0A4_192(Z273);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# define get", 12L);
Zq0A4_192(Z273);
ZfM_29(Zq0A4_172, (STRING)"(a)	yyGet ((char *) & a, sizeof (a));", 37L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# endif", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# ifndef put", 12L);
Zq0A4_192(Z273);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# define put", 12L);
Zq0A4_192(Z273);
ZfM_29(Zq0A4_172, (STRING)"(a)	yyPut ((char *) & a, sizeof (a));", 37L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# endif", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# ifndef copy", 13L);
Zq0A4_192(Z273);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# define copy", 13L);
Zq0A4_192(Z273);
ZfM_29(Zq0A4_172, (STRING)"(a, b)	a = b;", 13L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# endif", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# ifndef equal", 14L);
Zq0A4_192(Z273);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# define equal", 14L);
Zq0A4_192(Z273);
ZfM_29(Zq0A4_172, (STRING)"(a, b)	a == b", 13L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# endif", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# ifndef writeXML", 17L);
Zq0A4_192(Z273);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# define writeXML", 17L);
Zq0A4_192(Z273);
ZfM_29(Zq0A4_172, (STRING)"(a)	yyWriteAddrXML ((void *) a);", 32L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# endif", 7L);
ZfM_33(Zq0A4_172);
} else if (ZpmCQ_25(ORD('J'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)"# ifndef begin", 14L);
Zq0A4_192(Z273);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# define begin", 14L);
Zq0A4_192(Z273);
ZfM_29(Zq0A4_172, (STRING)"(a)	a = null;", 13L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# endif", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# ifndef close", 14L);
Zq0A4_192(Z273);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# define close", 14L);
Zq0A4_192(Z273);
ZfM_29(Zq0A4_172, (STRING)"(a)	a = null;", 13L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# endif", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# ifndef read", 13L);
Zq0A4_192(Z273);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# define read", 13L);
Zq0A4_192(Z273);
ZfM_29(Zq0A4_172, (STRING)"(a)	a = (", 9L);
Zq0A4_192(Z273);
ZfM_29(Zq0A4_172, (STRING)") this.read (yyin);", 19L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# endif", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# ifndef write", 14L);
Zq0A4_192(Z273);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# define write", 14L);
Zq0A4_192(Z273);
ZfM_29(Zq0A4_172, (STRING)"(a)	", 4L);
Zq0A4_192(Zq0A4_85);
ZfM_29(Zq0A4_172, (STRING)".write (yyout, a);", 18L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# endif", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# ifndef get", 12L);
Zq0A4_192(Z273);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# define get", 12L);
Zq0A4_192(Z273);
ZfM_29(Zq0A4_172, (STRING)"(a)	**not used**", 16L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# endif", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# ifndef put", 12L);
Zq0A4_192(Z273);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# define put", 12L);
Zq0A4_192(Z273);
ZfM_29(Zq0A4_172, (STRING)"(a)	**not used**", 16L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# endif", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# ifndef copy", 13L);
Zq0A4_192(Z273);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# define copy", 13L);
Zq0A4_192(Z273);
ZfM_29(Zq0A4_172, (STRING)"(a, b)	a = b;", 13L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# endif", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# ifndef equal", 14L);
Zq0A4_192(Z273);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# define equal", 14L);
Zq0A4_192(Z273);
ZfM_29(Zq0A4_172, (STRING)"(a, b)	a == b", 13L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# endif", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# ifndef writeXML", 17L);
Zq0A4_192(Z273);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# define writeXML", 17L);
Zq0A4_192(Z273);
ZfM_29(Zq0A4_172, (STRING)"(a)	**not used**", 16L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# endif", 7L);
ZfM_33(Zq0A4_172);
} else {
ZfM_29(Zq0A4_172, (STRING)"# ifndef begin", 14L);
Zq0A4_192(Z273);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# define begin", 14L);
Zq0A4_192(Z273);
ZfM_29(Zq0A4_172, (STRING)"(a)	a := ", 9L);
Zq0A4_192(Zq0A4_88);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# endif", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# ifndef close", 14L);
Zq0A4_192(Z273);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# define close", 14L);
Zq0A4_192(Z273);
ZfM_29(Zq0A4_172, (STRING)"(a)", 3L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# endif", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# ifndef read", 13L);
Zq0A4_192(Z273);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# define read", 13L);
Zq0A4_192(Z273);
ZfM_29(Zq0A4_172, (STRING)"(a)	a := SYSTEM.ADDRESS (IO.ReadN (yyf, 16)); yyc := IO.ReadC (yyf); yyc := IO.ReadC (yyf);", 91L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# endif", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# ifndef write", 14L);
Zq0A4_192(Z273);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# define write", 14L);
Zq0A4_192(Z273);
ZfM_29(Zq0A4_172, (STRING)"(a)	IO.WriteN (yyf, LONGCARD (a), 8, 16); IO.WriteS (yyf, \" +\");", 64L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# endif", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# ifndef get", 12L);
Zq0A4_192(Z273);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# define get", 12L);
Zq0A4_192(Z273);
ZfM_29(Zq0A4_172, (STRING)"(a)	yyGet (a);", 14L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# endif", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# ifndef put", 12L);
Zq0A4_192(Z273);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# define put", 12L);
Zq0A4_192(Z273);
ZfM_29(Zq0A4_172, (STRING)"(a)	yyPut (a);", 14L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# endif", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# ifndef copy", 13L);
Zq0A4_192(Z273);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# define copy", 13L);
Zq0A4_192(Z273);
ZfM_29(Zq0A4_172, (STRING)"(a, b)	a := b;", 14L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# endif", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# ifndef equal", 14L);
Zq0A4_192(Z273);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# define equal", 14L);
Zq0A4_192(Z273);
ZfM_29(Zq0A4_172, (STRING)"(a, b)	a = b", 12L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# endif", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# ifndef writeXML", 17L);
Zq0A4_192(Z273);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# define writeXML", 17L);
Zq0A4_192(Z273);
ZfM_29(Zq0A4_172, (STRING)"(a)	IO.WriteN (yyf, LONGCARD (a), 8, 16);", 41L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# endif", 7L);
ZfM_33(Zq0A4_172);
}
}
if (ZpmCQ_25(ORD('c'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)"# ifndef readSELECTOR", 21L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# define readSELECTOR()	yySkip ();", 34L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# endif", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# ifndef writeSELECTOR", 22L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# define writeSELECTOR(a)	yyIndentSelector (a);", 47L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# endif", 7L);
ZfM_33(Zq0A4_172);
} else if (ZpmCQ_25(ORD('J'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)"# ifndef readSELECTOR", 21L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# define readSELECTOR()          yyin.skipToChar ('='); yyin.read ();", 69L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# endif", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# ifndef writeSELECTOR", 22L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# define writeSELECTOR(a)	yyIndentSelector (a);", 47L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# endif", 7L);
ZfM_33(Zq0A4_172);
} else {
ZfM_29(Zq0A4_172, (STRING)"# ifndef readSELECTOR", 21L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# define readSELECTOR()	yySkip;", 31L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# endif", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# ifndef writeSELECTOR", 22L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# define writeSELECTOR(a)	yyIndentSelector (a);", 47L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# endif", 7L);
ZfM_33(Zq0A4_172);
}
Z284(Z269, Zq0A4_172);
ZpmCQ_7(&Z282);
}

static void Z285
 ARGS ((void))
{
ZfM_3 Z286;
Zp1PEAFD_2 Z281;
Zq0A4_153 Z287;

Z286 = ZfM_4((STRING)"TraceTab", 8L);
if (Z286 >= 0) {
while (!ZfM_19(Z286)) {
Zp1PEAFD_20(Z286, &Z281);
Z287 = Zq0A4_182(Zq0A4_279->U_1.V_32.Y31.Y13, Zfb3DLQ_2(&Z281));
if (Z287 != Zq0A4_97) {
Z290(Z287);
Zq0A4_184(Z287->U_1.V_5.Y4.Y4, (Zq0A4_170)Z290);
}
}
ZfM_5(Z286);
}
}

static void Z290
# ifdef HAVE_ARGS
(Zq0A4_153 Z287)
# else
(Z287)
Zq0A4_153 Z287;
# endif
{
INCL(Z287->U_1.V_5.Y4.Y2, Zq0A4_42);
}

static ZfM_3 Z283
# ifdef HAVE_ARGS
(Zp1PEAFD_2 Z294)
# else
(Z294)
Zp1PEAFD_2 Z294;
# endif
{
Zp1PEAFD_2 Z269;
INTEGER Z295;

if (ZpmCQ_25(ORD('7'), &Zq0A4_171)) {
Zp1PEAFD_13((STRING)"xx", 2L, &Z269);
Zp1PEAFD_5(&Z269, &Z294);
Zp1PEAFD_6(&Z269, '\0');
Zp1PEAFD_14(&Z269, Z271.A, 256L);
} else {
Zp1PEAFD_6(&Z294, '\0');
Zp1PEAFD_14(&Z294, Z271.A, 256L);
}
Z295 = ZfM_20(Z271.A, 256L);
if (Z295 < 0) {
INC(Zq0A4_0);
ZblNKKO_45((STRING)"can not open file", 17L, (LONGCARD)ZblNKKO_14, ZmtLFGGBG_1, (LONGCARD)ZblNKKO_32, ADR (Z271));
}
return Z295;
}

static void Z284
# ifdef HAVE_ARGS
(Zp1PEAFD_2 Z294, ZfM_3 Z199)
# else
(Z294, Z199)
Zp1PEAFD_2 Z294;
ZfM_3 Z199;
# endif
{
Zp1PEAFD_2 Z269;

ZfM_21(Z199);
if (ZpmCQ_25(ORD('7'), &Zq0A4_171)) {
Zp1PEAFD_13((STRING)"gupd ", 5L, &Z269);
Zp1PEAFD_5(&Z269, &Z294);
Zp1PEAFD_13((STRING)" xx", 3L, &Z268);
Zp1PEAFD_5(&Z269, &Z268);
Zp1PEAFD_5(&Z269, &Z294);
Zp1PEAFD_6(&Z269, '\0');
Zp1PEAFD_14(&Z269, Z271.A, 256L);
Z274 = rSystem(Z271.A, 256L);
}
}

static INTEGER Z296
# ifdef HAVE_ARGS
(CHAR Z275)
# else
(Z275)
CHAR Z275;
# endif
{
switch (Z275) {
case '0':;
case '1':;
case '2':;
case '3':;
case '4':;
case '5':;
case '6':;
case '7':;
case '8':;
case '9':;
return ORD(Z275) - ORD('0');
break;
case 'A':;
case 'B':;
case 'C':;
case 'D':;
case 'E':;
case 'F':;
return ORD(Z275) - ORD('A') + 10;
break;
case 'a':;
case 'b':;
case 'c':;
case 'd':;
case 'e':;
case 'f':;
return ORD(Z275) - ORD('a') + 10;
break;
}
return 0;
}

static void Z297
# ifdef HAVE_ARGS
(INTEGER Z295)
# else
(Z295)
INTEGER Z295;
# endif
{
INC(Zq0A4_0);
switch (Z295) {
case 1:;
ZblNKKO_44((STRING)"cannot open license file: ctlicens.dat", 38L, (LONGCARD)ZblNKKO_14, Zq0A4_279->U_1.V_32.Y31.Y13->U_1.V_5.Y4.Y7);
break;
case 2:;
ZblNKKO_44((STRING)"sorry, the license is expired", 29L, (LONGCARD)ZblNKKO_14, Zq0A4_279->U_1.V_32.Y31.Y13->U_1.V_5.Y4.Y7);
break;
case 3:;
ZblNKKO_44((STRING)"sorry, the problem is too big for demo version", 46L, (LONGCARD)ZblNKKO_15, Zq0A4_279->U_1.V_32.Y31.Y13->U_1.V_5.Y4.Y7);
break;
case 4:;
ZblNKKO_44((STRING)"license file ctlicens.dat seems corrupted", 41L, (LONGCARD)ZblNKKO_14, Zq0A4_279->U_1.V_32.Y31.Y13->U_1.V_5.Y4.Y7);
break;
}
}

static BOOLEAN Z299
# ifdef HAVE_ARGS
(CHAR Z300[], LONGCARD O_1, CARDINAL Z301)
# else
(Z300, O_1, Z301)
CHAR Z300[];
LONGCARD O_1;
CARDINAL Z301;
# endif
{
Zp1PEAFD_2 Z269, Z268;
struct S_4 Z271;
ZfM_3 Z302;
struct S_5 Z303;
ZDz6VQCC_5 Z304;
struct S_6 Z305;
struct S_7 Z306;
CHAR Z275;
CARDINAL Z273, Z307;
BITSET Z281, Z287;
OPEN_ARRAY_LOCALS

ALLOC_OPEN_ARRAYS (O_1 * sizeof (CHAR), 1)
COPY_OPEN_ARRAY (Z300, O_1, CHAR)
if (rtpqy()) {
FREE_OPEN_ARRAYS
return TRUE;
}
Zp1PEAFD_3(&Z269, &Zq0A4_89);
Zp1PEAFD_6(&Z269, '.');
Zp1PEAFD_6(&Z269, '.');
Zp1PEAFD_6(&Z269, DirectorySeparator());
Zp1PEAFD_13((STRING)"ctlicens.dat", 12L, &Z268);
Zp1PEAFD_5(&Z269, &Z268);
Zp1PEAFD_6(&Z269, '\0');
Zp1PEAFD_14(&Z269, Z271.A, 129L);
Z302 = ZfM_4(Z271.A, 129L);
if (Z302 < 0) {
Z297(1L);
FREE_OPEN_ARRAYS
return FALSE;
}
for (;;) {
if (ZfM_19(Z302)) {
Z297(4L);
FREE_OPEN_ARRAYS
return FALSE;
}
Z273 = 0;
Z275 = ZfM_7(Z302);
while (Z275 != '\n' && Z275 != '\r') {
Z305.A[Z273] = (BITSET)(Z296(Z275) * 16 + Z296(ZfM_7(Z302)));
INC(Z273);
Z275 = ZfM_7(Z302);
}
if (Z275 == '\r') {
Z275 = ZfM_7(Z302);
}
if (Z275 != '\n') {
Z297(4L);
FREE_OPEN_ARRAYS
return FALSE;
}
Z307 = Z273 - 1;
Z281 = (BITSET)ORD('j');
{
LONGCARD B_1 = 0, B_2 = Z307;

if (B_1 <= B_2)
for (Z273 = B_1;; Z273 += 1) {
Z287 = Z305.A[Z273] ^ Z281;
Z281 = Z281 ^ Z287;
Z306.A[Z273] = CHR((CARDINAL)Z287);
if (Z273 >= B_2) break;
}
}
if (Z306.A[0] == Z300[0] && Z306.A[1] == Z300[1] && Z306.A[2] == Z300[2]) {
goto EXIT_1;
}
} EXIT_1:;
ZfM_5(Z302);
Zp1PEAFD_4(&Z268);
for (Z273 = 5; Z273 <= 12; Z273 += 1) {
Zp1PEAFD_6(&Z268, Z306.A[Z273]);
}
(void) strncpy ((char *)Z303.A, "%Y%m%d", sizeof (Z303.A));
Z304 = rtpqx(Z303.A, 11L);
Z273 = 0;
for (;;) {
Z303.A[Z273] = Z304->A[Z273];
if (Z303.A[Z273] == '\0' || Z273 == 10) {
goto EXIT_2;
}
INC(Z273);
} EXIT_2:;
Zp1PEAFD_13(Z303.A, 11L, &Z269);
if (!Zp1PEAFD_9(&Z269, &Z268)) {
Z297(2L);
FREE_OPEN_ARRAYS
return FALSE;
}
Z307 = 0;
for (Z273 = 14; Z273 <= 19; Z273 += 1) {
if (Z306.A[Z273] != ' ') {
Z307 = Z307 * 10 + ORD(Z306.A[Z273]) - ORD('0');
}
}
if (Z301 > Z307) {
Z297(3L);
FREE_OPEN_ARRAYS
return FALSE;
}
FREE_OPEN_ARRAYS
return TRUE;
}

void BEGIN_MODULE ARGS ((void))
{
BEGIN_rSystem ();
BEGIN_rMemory ();
BEGIN_Position ();
BEGIN_IO ();
BEGIN_Strings ();
BEGIN_Idents ();
BEGIN_Sets ();
BEGIN_Errors ();
BEGIN_Scanner ();
BEGIN_Parser ();
BEGIN_Tree ();
BEGIN_Tree2 ();
BEGIN_Semantic ();
BEGIN_Order ();
BEGIN_Dialog ();
BEGIN_Sets ();
BEGIN_GramMod ();
BEGIN_TreeMod1 ();
BEGIN_EvalMod ();
BEGIN_EvalMod2 ();
BEGIN_EvalMod3 ();
BEGIN_EvalMod4 ();
BEGIN_GramC ();
BEGIN_GramYacc ();
BEGIN_TreeC1 ();
BEGIN_TreeC2 ();
BEGIN_EvalC ();
BEGIN_EvalC2 ();
BEGIN_EvalC3 ();
BEGIN_EvalC4 ();
BEGIN_GramAda ();
BEGIN_GramJava ();
BEGIN_TreeJav1 ();
BEGIN_TreeJav2 ();
BEGIN_EvalJava ();
BEGIN_EvalJav2 ();
BEGIN_EvalJav3 ();
BEGIN_EvalJav4 ();
BEGIN_TreeCxx1 ();
BEGIN_TreeCxx2 ();
BEGIN_EvalCxx ();
BEGIN_EvalCxx2 ();
BEGIN_EvalCxx3 ();
BEGIN_EvalCxx4 ();

Zp1PEAFD_4(&Zq0A4_89);
Zq0A4_175.A[0] = '\0';
Zpky9FDA_2 = GetArgCount() - 1;
Z277 = FALSE;
Zpky9FDA_1 = 0;
for (;;) {
INC(Zpky9FDA_1);
if (Zpky9FDA_1 > Zpky9FDA_2) {
goto EXIT_3;
}
GetArgument(Zpky9FDA_1, Z270.A, 256L);
if (Z270.A[0] == '-') {
if (Z270.A[1] == 'l') {
Zp1PEAFD_4(&Zq0A4_89);
Z274 = 2;
for (;;) {
Z275 = Z270.A[Z274];
if (Z275 == '\0') {
goto EXIT_4;
}
Zp1PEAFD_6(&Zq0A4_89, Z275);
INC(Z274);
} EXIT_4:;
Zp1PEAFD_6(&Zq0A4_89, DirectorySeparator());
} else {
Z274 = 0;
for (;;) {
INC(Z274);
Z275 = Z270.A[Z274];
if (Z275 == '\0') {
goto EXIT_5;
} else if (Z275 == '?') {
ZpmCQ_13(&Zq0A4_171, ORD('h'));
ZpmCQ_13(&Zq0A4_171, ORD('H'));
} else {
if (Z275 == '+' && ZpmCQ_25(ORD('+'), &Zq0A4_171) && ZpmCQ_25(ORD('c'), &Zq0A4_171)) {
ZpmCQ_13(&Zq0A4_171, ORD('*'));
ZpmCQ_14(&Zq0A4_171, ORD('+'));
} else {
ZpmCQ_13(&Zq0A4_171, ORD(Z275));
}
}
} EXIT_5:;
Z277 = TRUE;
}
} else if (Z270.A[0] == '+') {
Z274 = 0;
for (;;) {
INC(Z274);
Z275 = Z270.A[Z274];
if (Z275 == '\0') {
goto EXIT_6;
} else {
ZpmCQ_13(&Zq0A4_171, ORD(Z275) - ORD('A'));
}
} EXIT_6:;
Z277 = TRUE;
} else if (Z270.A[0] == '?') {
ZpmCQ_13(&Zq0A4_171, ORD('h'));
ZpmCQ_13(&Zq0A4_171, ORD('H'));
Z277 = TRUE;
} else {
Z274 = 0;
do {
Z275 = Z270.A[Z274];
Zq0A4_175.A[Z274] = Z275;
INC(Z274);
} while (!(Z275 == '\0'));
goto EXIT_3;
}
} EXIT_3:;
if (!Z277) {
ZpmCQ_13(&Zq0A4_171, ORD('a'));
ZpmCQ_13(&Zq0A4_171, ORD('A'));
}
if (ZpmCQ_25(ORD('a'), &Zq0A4_171)) {
ZpmCQ_5(&Z276, 127L);
for (Z275 = 'a'; Z275 <= 'z'; Z275 += 1) {
ZpmCQ_13(&Z276, ORD(Z275));
}
ZpmCQ_13(&Z276, ORD('F'));
ZpmCQ_13(&Z276, ORD('R'));
ZpmCQ_13(&Z276, ORD('='));
ZpmCQ_13(&Z276, ORD('_'));
ZpmCQ_14(&Z276, ORD('c'));
ZpmCQ_14(&Z276, ORD('e'));
ZpmCQ_14(&Z276, ORD('h'));
ZpmCQ_14(&Z276, ORD('u'));
ZpmCQ_14(&Z276, ORD('x'));
ZpmCQ_14(&Z276, ORD('z'));
ZpmCQ_8(&Zq0A4_171, Z276);
ZpmCQ_7(&Z276);
}
if (ZpmCQ_25(ORD('+'), &Zq0A4_171)) {
ZpmCQ_13(&Zq0A4_171, ORD('c'));
ZpmCQ_13(&Zq0A4_171, ORD('F'));
}
if (ZpmCQ_25(ORD('J') - ORD('A'), &Zq0A4_171)) {
ZpmCQ_13(&Zq0A4_171, ORD('i'));
}
if (ZpmCQ_25(ORD('D') - ORD('A'), &Zq0A4_171)) {
ZpmCQ_13(&Zq0A4_171, ORD('e'));
}
if (ZpmCQ_25(ORD('E') - ORD('A'), &Zq0A4_171)) {
ZpmCQ_13(&Zq0A4_171, ORD('='));
}
if (ZpmCQ_25(ORD('I') - ORD('A'), &Zq0A4_171)) {
ZpmCQ_13(&Zq0A4_171, ORD('v'));
}
if (ZpmCQ_25(ORD('A'), &Zq0A4_171)) {
ZpmCQ_13(&Zq0A4_171, ORD('D'));
ZpmCQ_13(&Zq0A4_171, ORD('I'));
}
if (ZpmCQ_25(ORD('T'), &Zq0A4_171) || ZpmCQ_25(ORD('X'), &Zq0A4_171) || ZpmCQ_25(ORD('Y'), &Zq0A4_171) || ZpmCQ_25(ORD('Z'), &Zq0A4_171)) {
ZpmCQ_13(&Zq0A4_171, ORD('I'));
}
if (ZpmCQ_25(ORD('J'), &Zq0A4_171)) {
if (ZpmCQ_25(ORD('i'), &Zq0A4_171)) {
ZpmCQ_13(&Zq0A4_171, ORD('d'));
}
if (ZpmCQ_25(ORD('d'), &Zq0A4_171)) {
ZpmCQ_13(&Zq0A4_171, ORD('i'));
}
if (ZpmCQ_25(ORD('I'), &Zq0A4_171)) {
ZpmCQ_13(&Zq0A4_171, ORD('D'));
}
if (ZpmCQ_25(ORD('D'), &Zq0A4_171)) {
ZpmCQ_13(&Zq0A4_171, ORD('I'));
}
}
if (ZpmCQ_25(ORD('I'), &Zq0A4_171) || ZpmCQ_25(ORD('V'), &Zq0A4_171) || ZpmCQ_25(ORD('M'), &Zq0A4_171) || ZpmCQ_25(ORD('P'), &Zq0A4_171) || ZpmCQ_25(ORD('S'), &Zq0A4_171) || ZpmCQ_25(ORD('N'), &Zq0A4_171) || ZpmCQ_25(ORD('O'), &Zq0A4_171) || ZpmCQ_25(ORD('G'), &Zq0A4_171) || ZpmCQ_25(ORD('E'), &Zq0A4_171) || ZpmCQ_25(ORD('C'), &Zq0A4_171) || ZpmCQ_25(ORD('J') - ORD('A'), &Zq0A4_171) || ZpmCQ_25(ORD('0'), &Zq0A4_171) || ZpmCQ_25(ORD('x'), &Zq0A4_171) || ZpmCQ_25(ORD('z'), &Zq0A4_171) || ZpmCQ_25(ORD('u'), &Zq0A4_171)) {
ZpmCQ_13(&Zq0A4_171, ORD('.'));
}
if (ZpmCQ_25(ORD('x'), &Zq0A4_171) || ZpmCQ_25(ORD('z'), &Zq0A4_171) || ZpmCQ_25(ORD('u'), &Zq0A4_171)) {
ZpmCQ_13(&Zq0A4_171, ORD('B'));
}
if (ZpmCQ_25(ORD('T'), &Zq0A4_171)) {
ZpmCQ_13(&Zq0A4_171, ORD('X'));
ZpmCQ_13(&Zq0A4_171, ORD('Z'));
}
if (ZpmCQ_25(ORD('X'), &Zq0A4_171)) {
ZpmCQ_13(&Zq0A4_171, ORD('Y'));
}
if (ZpmCQ_25(ORD('L'), &Zq0A4_171)) {
ZpmCQ_14(&Zq0A4_171, ORD('K'));
ZpmCQ_14(&Zq0A4_171, ORD('0'));
}
if (ZpmCQ_25(ORD('K'), &Zq0A4_171)) {
ZpmCQ_14(&Zq0A4_171, ORD('0'));
if (ZpmCQ_25(ORD('D'), &Zq0A4_171)) {
ZpmCQ_13(&Zq0A4_171, ORD('I'));
}
}
if (ZpmCQ_25(ORD('h'), &Zq0A4_171)) {
ZpmCQ_14(&Zq0A4_171, ORD('h'));
Zq0A4_172 = ZfM_1;
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"usage: cg [-options] [+options] [-l<directory>] [<files>]", 57L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"options for tree/graph module", 29L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" a generate all except -ceh (default)", 37L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" n generate node constructors    procedures n<node> (node)", 58L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" m generate node constructors    procedures m<node> (make)", 58L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" f generate node/graph destroyer procedure ReleaseTREE (free)", 61L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" F generate general    destroyer procedure ReleaseTREEModule (FREE)", 67L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" o generate text   node  writer  procedure WriteTREENode (output)", 65L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" r generate text   graph reader  procedure ReadTREE", 51L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" w generate text   graph writer  procedure WriteTREE", 52L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"+X generate XML    graph writer  procedure WriteTREEXML", 55L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" g generate binary graph reader  procedure GetTREE", 50L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" p generate binary graph writer  procedure PutTREE", 50L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" t generate top down  traversal  procedure TraverseTREETD", 57L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" b generate bottom up traversal  procedure TraverseTREEBU", 57L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" R generate list reverser        procedure ReverseTREE", 54L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" R generate list iterator        procedure ForallTREE", 53L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" y generate graph copy           procedure CopyTREE", 51L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" = generate tree equality test   procedure IsEqualTREE", 54L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" k generate graph type checker   procedure CheckTREE", 52L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" q generate text  graph browser  procedure QueryTREE", 52L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" e generate graphic browser      procedure DrawTREE", 51L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" _ generate array TREE_NodeName", 31L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" d generate header file or definition module", 44L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" i generate implementation part or module", 41L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" s generate import statements", 29L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" : generate lines not longer than 80 characters", 47L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" 4 generate tree/graph description in file TREE.TS", 50L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" 6 generate # line directives", 29L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" 7 touch output files only if necessary", 39L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" 8 report storage consumption", 29L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" c   generate C    source code (default: Modula-2)", 50L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" c+  generate C++  source code (using C   data structure: union)", 64L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" c++ generate C++  source code (using C++ data structure: class)", 64L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" J   generate Java source code", 30L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" h print help information for tree/graph module", 47L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" H print help information for attribute evaluator module", 56L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"+H print advanced help", 22L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" -l<dir> specify the directory dir where cg finds its tables", 60L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"options for scanner and parser interface", 40L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" x generate scanner specification", 33L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" z generate parser  specification for lark", 42L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" u generate parser  specification for yacc", 42L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" v omit actions in the generated parser specifications", 54L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" j allow undefined node types; define implicitly as terminals", 61L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"+I allow incomplete attribute computation rules", 47L);
ZfM_33(Zq0A4_172);
}
if (ZpmCQ_25(ORD('H'), &Zq0A4_171)) {
ZpmCQ_14(&Zq0A4_171, ORD('H'));
Zq0A4_172 = ZfM_1;
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"usage: cg [-options] [+options] [-l<directory>] [<files>]", 57L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"options for evaluator module", 28L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" A generate all, same as -DI (default)", 38L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" D generate header file or definition module", 44L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" I generate implementation part or module", 41L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" K generate an evaluator based on a stack automaton (default: recursive procedures)", 83L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" L generate a (lazy) evaluator for WAG (default: OAG)", 53L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" W suppress warnings", 20L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" B allow missing attribute computations in extended node types", 62L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" V print visit sequences", 24L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" M print summary of all node types (rules) from source", 54L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" P print dependency relations DP", 32L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" S print dependency relations SNC", 33L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" N print dependency relations DNC", 33L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" O print dependency relations OAG", 33L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" G print attribute instances sorted by declaration order", 56L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" E print attribute instances sorted by evaluation order", 55L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" C print dependencies introduced for total order", 48L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" T generate evaluator with trace output (all actions, T = XZ)", 61L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" U trace only node types specified in file TraceTab", 51L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" X trace attribute evaluation actions with    values", 52L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" Y trace attribute evaluation actions without values", 52L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" Z trace visit actions", 22L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" Q browse internal data structure with text browser", 51L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" 0 optimize attribute storage", 29L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" 1 print inserted copy rules", 28L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" 2 print inherited attribute computation rules", 46L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" 3 print attribute storage assignment", 37L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" 5 generate source code to check for cyclic dependencies", 56L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" 6 generate # line directives", 29L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" 7 touch output files only if necessary", 39L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" 8 report storage consumption", 29L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" 9 generate source code to measure stack size", 45L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" c generate C    source code (default: Modula-2)", 48L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" + generate C++  source code", 28L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" J generate Java source code", 28L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" h print help information for tree/graph module", 47L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" H print help information for attribute evaluator module", 56L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"+H print advanced help", 22L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" -l<dir> specify the directory dir where cg finds its tables", 60L);
ZfM_33(Zq0A4_172);
}
if (ZpmCQ_25(ORD('H') - ORD('A'), &Zq0A4_171)) {
ZpmCQ_14(&Zq0A4_171, ORD('H') - ORD('A'));
Zq0A4_172 = ZfM_1;
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"usage: cg [-options] [+options] [-l<directory>] [<files>]", 57L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"advanced options", 16L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" +H print advanced help", 23L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" +D generate graphic browser procedure DrawTREE enclosed in #ifdef DRAWTREE", 75L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" +G browse internal data structure with graphical browser", 57L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" +E generate tree equality test procedure IsEqualTREE", 53L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" +I suppress informations", 25L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" +J start dialog system", 23L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" +P generate empty bodies for procedures not selected", 53L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" +X generate XML writer procedure WriteTREEXML", 46L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" -. run order", 13L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" -, generate procedure yyMark", 29L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" -; generate 'TreeStore'", 24L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" -/ follow as early as possible strategy instead of as late as possible", 71L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" -@ print messages (do not store)", 33L);
ZfM_33(Zq0A4_172);
}
if (!ZpmCQ_26(Zq0A4_171)) {
if (Zp1PEAFD_7(&Zq0A4_89) == 0) {
Z278 = GetEnvVar((STRING)"CT_DIR", 6L);
if (Z278 != NIL) {
Z273 = 0;
for (;;) {
Z270.A[Z273] = Z278->A[Z273];
if (Z270.A[Z273] == '\0' || Z273 == 255) {
goto EXIT_7;
}
INC(Z273);
} EXIT_7:;
Zp1PEAFD_13(Z270.A, 256L, &Zq0A4_89);
Zp1PEAFD_6(&Zq0A4_89, DirectorySeparator());
Zp1PEAFD_13((STRING)"lib", 3L, &Z268);
Zp1PEAFD_5(&Zq0A4_89, &Z268);
Zp1PEAFD_6(&Zq0A4_89, DirectorySeparator());
Zp1PEAFD_13((STRING)"cg", 2L, &Z268);
Zp1PEAFD_5(&Zq0A4_89, &Z268);
Zp1PEAFD_6(&Zq0A4_89, DirectorySeparator());
}
}
if (ZpmCQ_25(ORD('c'), &Zq0A4_171) || ZpmCQ_25(ORD('J'), &Zq0A4_171)) {
Zp1PEAFD_13((STRING)"int", 3L, &Z268);
} else {
Zp1PEAFD_13((STRING)"INTEGER", 7L, &Z268);
}
Zq0A4_79 = Zfb3DLQ_2(&Z268);
Zpky9FDA_9.Y0 = ZmtLFGGBG_1;
if (Zq0A4_175.A[0] != '\0') {
Zpky9FDA_12(Zq0A4_175.A, 256L);
Zp1PEAFD_13(Zq0A4_175.A, 256L, &Z268);
} else {
Zp1PEAFD_13((STRING)"-", 1L, &Z268);
}
Zpky9FDA_9.Y0.Y0 = Zfb3DLQ_2(&Z268);
ZblNKKO_41((BOOLEAN)(!ZpmCQ_25(ORD('@'), &Zq0A4_171)));
INC1(Zq0A4_0, ZmfDOBA_56());
if (Zq0A4_71 != Zfb3DLQ_1) {
ZpmCQ_13(&Zq0A4_171, ORD('<'));
}
if (ZpmCQ_25(ORD('q'), &Zq0A4_171) || ZpmCQ_25(ORD('e'), &Zq0A4_171)) {
if (!ZpmCQ_25(ORD('<'), &Zq0A4_171)) {
ZpmCQ_13(&Zq0A4_171, ORD('o'));
ZpmCQ_13(&Zq0A4_171, ORD('t'));
}
ZpmCQ_13(&Zq0A4_171, ORD('^'));
}
if (ZpmCQ_25(ORD('w'), &Zq0A4_171) || ZpmCQ_25(ORD('p'), &Zq0A4_171) || ZpmCQ_25(ORD('f'), &Zq0A4_171) || ZpmCQ_25(ORD('k'), &Zq0A4_171) || ZpmCQ_25(ORD('t'), &Zq0A4_171) || ZpmCQ_25(ORD('b'), &Zq0A4_171) || ZpmCQ_25(ORD('y'), &Zq0A4_171) || ZpmCQ_25(ORD('e'), &Zq0A4_171) || ZpmCQ_25(ORD('X') - ORD('A'), &Zq0A4_171)) {
ZpmCQ_13(&Zq0A4_171, ORD(','));
}
if (!ZpmCQ_25(ORD('<'), &Zq0A4_171)) {
if (ZpmCQ_25(ORD('k'), &Zq0A4_171)) {
ZpmCQ_13(&Zq0A4_171, ORD('o'));
}
if (ZpmCQ_25(ORD('o'), &Zq0A4_171) || ZpmCQ_25(ORD('w'), &Zq0A4_171) || ZpmCQ_25(ORD('r'), &Zq0A4_171) || ZpmCQ_25(ORD('e'), &Zq0A4_171) || ZpmCQ_25(ORD('X') - ORD('A'), &Zq0A4_171)) {
ZpmCQ_13(&Zq0A4_171, ORD('_'));
}
}
if (!ZpmCQ_25(ORD('+'), &Zq0A4_171)) {
if (ZpmCQ_25(ORD('w'), &Zq0A4_171) || ZpmCQ_25(ORD('r'), &Zq0A4_171) || ZpmCQ_25(ORD('p'), &Zq0A4_171) || ZpmCQ_25(ORD('g'), &Zq0A4_171) || ZpmCQ_25(ORD('X') - ORD('A'), &Zq0A4_171)) {
ZpmCQ_13(&Zq0A4_171, ORD(';'));
}
if (ZpmCQ_25(ORD('w'), &Zq0A4_171) || ZpmCQ_25(ORD('o'), &Zq0A4_171) || ZpmCQ_25(ORD('X') - ORD('A'), &Zq0A4_171)) {
ZpmCQ_13(&Zq0A4_171, ORD('$'));
}
}
if (ZpmCQ_25(ORD('+'), &Zq0A4_171) && !ZpmCQ_25(ORD('<'), &Zq0A4_171)) {
ZpmCQ_13(&Zq0A4_171, ORD(';'));
ZpmCQ_13(&Zq0A4_171, ORD('$'));
}
ZpmC89LG6_6(Zq0A4_279);
if (ZpmCQ_25(ORD('i'), &Zq0A4_171) && !Z299((STRING)"ast", 3L, (LONGCARD)Zq0A4_68)) {
INC(Zq0A4_0);
}
if (ZpmCQ_25(ORD('I'), &Zq0A4_171) && !Z299((STRING)"ag ", 3L, (LONGCARD)Zq0A4_68)) {
INC(Zq0A4_0);
}
if (Zq0A4_0 > 0) {
ZblNKKO_46((ZDz6VQCC_4)ZfM_2);
ZfM_34();
rExit(1L);
}
}
Zq0A4_179 = ZpmCQ_25(ORD('P') - ORD('A'), &Zq0A4_171);
if (ZpmCQ_25(ORD('x'), &Zq0A4_171)) {
if (Zq0A4_279->U_1.V_32.Y31.Y2 == Zfb3DLQ_1) {
Zp1PEAFD_13((STRING)"Scanner", 7L, &Z269);
} else {
Zq0A4_197(Zq0A4_279->U_1.V_32.Y31.Y2, &Z269);
}
Zp1PEAFD_13((STRING)".rpp", 4L, &Z268);
Zp1PEAFD_5(&Z269, &Z268);
Zq0A4_172 = Z283(Z269);
Zq0A4_173.Y0 = Zfb3DLQ_2(&Z269);
Zq0A4_173.Y1 = 1;
Zq0A4_174 = ZmtLFGGBG_1;
if (ZpmCQ_25(ORD('*'), &Zq0A4_171)) {
ZdnD8e_4(Zq0A4_279);
} else if (ZpmCQ_25(ORD('c'), &Zq0A4_171)) {
ZdnD8e_4(Zq0A4_279);
} else if (ZpmCQ_25(ORD('-'), &Zq0A4_171)) {
ZdnD8cZz_4(Zq0A4_279);
} else if (ZpmCQ_25(ORD('J'), &Zq0A4_171)) {
ZdnD8lgAA_4(Zq0A4_279);
} else {
ZdnD8oqD_4(Zq0A4_279);
}
Z284(Z269, Zq0A4_172);
}
if (ZpmCQ_25(ORD('z'), &Zq0A4_171)) {
Zq0A4_197(Zq0A4_279->U_1.V_32.Y31.Y3, &Zq0A4_90);
Zp1PEAFD_3(&Z269, &Zq0A4_90);
Zp1PEAFD_13((STRING)".lrk", 4L, &Z268);
Zp1PEAFD_5(&Z269, &Z268);
Zq0A4_172 = Z283(Z269);
Zq0A4_173.Y0 = Zfb3DLQ_2(&Z269);
Zq0A4_173.Y1 = 1;
Zq0A4_174 = ZmtLFGGBG_1;
if (ZpmCQ_25(ORD('*'), &Zq0A4_171)) {
ZdnD8e_3(Zq0A4_279);
} else if (ZpmCQ_25(ORD('c'), &Zq0A4_171)) {
ZdnD8e_3(Zq0A4_279);
} else if (ZpmCQ_25(ORD('-'), &Zq0A4_171)) {
ZdnD8cZz_3(Zq0A4_279);
} else if (ZpmCQ_25(ORD('J'), &Zq0A4_171)) {
ZdnD8lgAA_3(Zq0A4_279);
} else {
ZdnD8oqD_3(Zq0A4_279);
}
Z284(Z269, Zq0A4_172);
} else if (ZpmCQ_25(ORD('u'), &Zq0A4_171)) {
Zq0A4_197(Zq0A4_279->U_1.V_32.Y31.Y3, &Zq0A4_90);
Zp1PEAFD_3(&Z269, &Zq0A4_90);
Zp1PEAFD_13((STRING)".y", 2L, &Z268);
Zp1PEAFD_5(&Z269, &Z268);
Zq0A4_172 = Z283(Z269);
Zq0A4_173.Y0 = Zfb3DLQ_2(&Z269);
Zq0A4_173.Y1 = 1;
Zq0A4_174 = ZmtLFGGBG_1;
ZdnD80oy0_3(Zq0A4_279);
Z284(Z269, Zq0A4_172);
}
if (ZpmCQ_25(ORD('.'), &Zq0A4_171)) {
ZlvG3A_4(Zq0A4_279);
}
ZblNKKO_46((ZDz6VQCC_4)ZfM_2);
ZblNKKO_41((BOOLEAN)(!ZpmCQ_25(ORD('@'), &Zq0A4_171)));
if (ZpmCQ_25(ORD('Q'), &Zq0A4_171)) {
Zq0A4_356(Zq0A4_279);
}
if (ZpmCQ_25(ORD('J') - ORD('A'), &Zq0A4_171)) {
Zab47EG_0(Zq0A4_279);
}
if (Zq0A4_0 > 0) {
ZfM_34();
rExit(1L);
}
if (ZpmCQ_25(ORD('i'), &Zq0A4_171) || ZpmCQ_25(ORD('X'), &Zq0A4_171)) {
Z279();
}
if (!(ZpmCQ_25(ORD('+'), &Zq0A4_171) && ZpmCQ_25(ORD('<'), &Zq0A4_171)) && !ZpmCQ_25(ORD('J'), &Zq0A4_171)) {
if (ZpmCQ_25(ORD('d'), &Zq0A4_171)) {
Zq0A4_197(Zq0A4_85, &Zq0A4_90);
Zp1PEAFD_3(&Z269, &Zq0A4_90);
if (ZpmCQ_25(ORD('*'), &Zq0A4_171)) {
Zp1PEAFD_13(Z261, 2L, &Z268);
} else if (ZpmCQ_25(ORD('+'), &Zq0A4_171)) {
Zp1PEAFD_13(Z261, 2L, &Z268);
} else if (ZpmCQ_25(ORD('c'), &Zq0A4_171)) {
Zp1PEAFD_13(Z261, 2L, &Z268);
} else {
Zp1PEAFD_13(Z258, 3L, &Z268);
}
Zp1PEAFD_5(&Z269, &Z268);
Zp1PEAFD_3(&Z265, &Z269);
Zq0A4_172 = Z283(Z269);
if (ZpmCQ_25(ORD('*'), &Zq0A4_171)) {
Zq0A4dpZe_4(Zq0A4_279);
} else if (ZpmCQ_25(ORD('c'), &Zq0A4_171)) {
Zq0A4dt_4(Zq0A4_279);
} else {
Zq0A4gqDJ_4(Zq0A4_279);
}
Z284(Z269, Zq0A4_172);
if (!ZpmCQ_25(ORD('c'), &Zq0A4_171)) {
Zp1PEAFD_13((STRING)"gcpp ", 5L, &Z269);
Zp1PEAFD_5(&Z269, &Z265);
Zp1PEAFD_6(&Z269, '\0');
Zp1PEAFD_14(&Z269, Z271.A, 256L);
Z274 = rSystem(Z271.A, 256L);
}
}
}
if (ZpmCQ_25(ORD('4'), &Zq0A4_171)) {
Zfb3DLQ_3(Zq0A4_72, &Z269);
Zp1PEAFD_13((STRING)".TS", 3L, &Z268);
Zp1PEAFD_5(&Z269, &Z268);
Zq0A4_172 = Z283(Z269);
ZfM_25(Zq0A4_172, (LONGINT)Z257, 1L);
ZfM_33(Zq0A4_172);
if (Zq0A4_82 != Zfb3DLQ_1) {
Zfb3DLQ_7(Zq0A4_172, Zq0A4_82);
ZfM_24(Zq0A4_172, '.');
}
Zfb3DLQ_7(Zq0A4_172, Zq0A4_85);
ZfM_33(Zq0A4_172);
Zfb3DLQ_7(Zq0A4_172, Zq0A4_178);
ZfM_33(Zq0A4_172);
if (ZpmCQ_25(ORD('L'), &Zq0A4_171)) {
ZfM_24(Zq0A4_172, 'L');
} else {
ZfM_24(Zq0A4_172, ' ');
}
ZfM_33(Zq0A4_172);
Zq0A4L_2(Zq0A4_172, Zq0A4_279->U_1.V_32.Y31.Y13);
Z284(Z269, Zq0A4_172);
}
if (ZpmCQ_25(ORD('i'), &Zq0A4_171)) {
Zq0A4_197(Zq0A4_85, &Zq0A4_90);
Zp1PEAFD_3(&Z269, &Zq0A4_90);
if (ZpmCQ_25(ORD('*'), &Zq0A4_171)) {
Zp1PEAFD_13(Z263, 4L, &Z268);
} else if (ZpmCQ_25(ORD('+'), &Zq0A4_171)) {
Zp1PEAFD_13(Z263, 4L, &Z268);
} else if (ZpmCQ_25(ORD('c'), &Zq0A4_171)) {
Zp1PEAFD_13(Z262, 2L, &Z268);
} else if (ZpmCQ_25(ORD('J'), &Zq0A4_171)) {
Zp1PEAFD_13(Z264, 5L, &Z268);
} else {
Zp1PEAFD_13(Z259, 3L, &Z268);
}
Zp1PEAFD_5(&Z269, &Z268);
Zp1PEAFD_3(&Z266, &Z269);
Zq0A4_172 = Z283(Z269);
if (ZpmCQ_25(ORD('*'), &Zq0A4_171)) {
Zq0A4dpZe_5(Zq0A4_279);
} else if (ZpmCQ_25(ORD('c'), &Zq0A4_171)) {
Zq0A4dt_5(Zq0A4_279);
} else if (ZpmCQ_25(ORD('J'), &Zq0A4_171)) {
Zq0A4dgAc_4(Zq0A4_279);
} else {
Zq0A4gqDJ_5(Zq0A4_279);
}
Z284(Z269, Zq0A4_172);
if (!ZpmCQ_25(ORD('c'), &Zq0A4_171)) {
if (ZpmCQ_25(ORD('J'), &Zq0A4_171)) {
Zp1PEAFD_13((STRING)"gcppt ", 6L, &Z269);
} else {
Zp1PEAFD_13((STRING)"gcpp ", 5L, &Z269);
}
Zp1PEAFD_5(&Z269, &Z266);
Zp1PEAFD_6(&Z269, '\0');
Zp1PEAFD_14(&Z269, Z271.A, 256L);
Z274 = rSystem(Z271.A, 256L);
}
}
if (ZpmCQ_25(ORD('s'), &Zq0A4_171) && !ZpmCQ_25(ORD('c'), &Zq0A4_171) && !ZpmCQ_25(ORD('J'), &Zq0A4_171)) {
Zfb3DLQ_3(Zq0A4_85, &Zq0A4_90);
Zp1PEAFD_3(&Z269, &Zq0A4_90);
Zp1PEAFD_13(Z260, 4L, &Z268);
Zp1PEAFD_5(&Z269, &Z268);
Zq0A4_172 = Z283(Z269);
Zq0A4gqDJ_6(Zq0A4_279);
Z284(Z269, Zq0A4_172);
}
if (ZpmCQ_25(ORD('U'), &Zq0A4_171)) {
Z285();
} else if (!ZpmCQ_26(Zq0A4_171)) {
Zq0A4_184(Zq0A4_279->U_1.V_32.Y31.Y13, (Zq0A4_170)Z290);
}
if (ZpmCQ_25(ORD('I'), &Zq0A4_171)) {
Zq0A4_197(Zq0A4_279->U_1.V_32.Y31.Y7, &Zq0A4_90);
Zp1PEAFD_3(&Z269, &Zq0A4_90);
if (ZpmCQ_25(ORD('*'), &Zq0A4_171)) {
Zp1PEAFD_13(Z263, 4L, &Z268);
} else if (ZpmCQ_25(ORD('+'), &Zq0A4_171)) {
Zp1PEAFD_13(Z263, 4L, &Z268);
} else if (ZpmCQ_25(ORD('c'), &Zq0A4_171)) {
Zp1PEAFD_13(Z262, 2L, &Z268);
} else if (ZpmCQ_25(ORD('J'), &Zq0A4_171)) {
Zp1PEAFD_13(Z264, 5L, &Z268);
} else {
Zp1PEAFD_13(Z259, 3L, &Z268);
}
Zp1PEAFD_5(&Z269, &Z268);
Zp1PEAFD_3(&Z267, &Z269);
Zq0A4_172 = Z283(Z269);
if (ZpmCQ_25(ORD('*'), &Zq0A4_171)) {
if (ZpmCQ_25(ORD('K'), &Zq0A4_171)) {
ZbpA7dpZa_3(Zq0A4_279);
} else if (ZpmCQ_25(ORD('L'), &Zq0A4_171)) {
ZbpA7dpZg_4(Zq0A4_279);
} else if (ZpmCQ_25(ORD('0'), &Zq0A4_171)) {
ZbpA7dpZf_3(Zq0A4_279);
} else {
ZbpA7dpZ_9(Zq0A4_279);
}
} else if (ZpmCQ_25(ORD('c'), &Zq0A4_171)) {
if (ZpmCQ_25(ORD('K'), &Zq0A4_171)) {
ZbpA7dw_3(Zq0A4_279);
} else if (ZpmCQ_25(ORD('L'), &Zq0A4_171)) {
ZbpA7dv_4(Zq0A4_279);
} else if (ZpmCQ_25(ORD('0'), &Zq0A4_171)) {
ZbpA7du_3(Zq0A4_279);
} else {
ZbpA7d_10(Zq0A4_279);
}
} else if (ZpmCQ_25(ORD('J'), &Zq0A4_171)) {
if (ZpmCQ_25(ORD('K'), &Zq0A4_171)) {
ZblNKKO_44((STRING)"option K not supported for Java", 31L, (LONGCARD)ZblNKKO_16, ZmtLFGGBG_1);
INC(Zq0A4_0);
} else if (ZpmCQ_25(ORD('L'), &Zq0A4_171)) {
ZblNKKO_44((STRING)"option L not supported for Java", 31L, (LONGCARD)ZblNKKO_16, ZmtLFGGBG_1);
INC(Zq0A4_0);
} else if (ZpmCQ_25(ORD('0'), &Zq0A4_171)) {
ZblNKKO_44((STRING)"option 0 not supported for Java", 31L, (LONGCARD)ZblNKKO_16, ZmtLFGGBG_1);
INC(Zq0A4_0);
} else {
ZbpA7kgAA_5(Zq0A4_279);
}
} else {
if (ZpmCQ_25(ORD('K'), &Zq0A4_171)) {
ZbpA7nqDM_3(Zq0A4_279);
} else if (ZpmCQ_25(ORD('L'), &Zq0A4_171)) {
ZbpA7nqDL_4(Zq0A4_279);
} else if (ZpmCQ_25(ORD('0'), &Zq0A4_171)) {
ZbpA7nqDK_3(Zq0A4_279);
} else {
ZbpA7nqD_6(Zq0A4_279);
}
}
Z284(Z269, Zq0A4_172);
if (!ZpmCQ_25(ORD('c'), &Zq0A4_171)) {
if (ZpmCQ_25(ORD('J'), &Zq0A4_171)) {
Zp1PEAFD_13((STRING)"gcppt ", 6L, &Z269);
} else {
Zp1PEAFD_13((STRING)"gcpp ", 5L, &Z269);
}
Zp1PEAFD_5(&Z269, &Z267);
Zp1PEAFD_6(&Z269, '\0');
Zp1PEAFD_14(&Z269, Z271.A, 256L);
Z274 = rSystem(Z271.A, 256L);
}
}
if (ZpmCQ_25(ORD('D'), &Zq0A4_171) && !ZpmCQ_25(ORD('J'), &Zq0A4_171)) {
Zq0A4_197(Zq0A4_279->U_1.V_32.Y31.Y7, &Zq0A4_90);
Zp1PEAFD_3(&Z269, &Zq0A4_90);
if (ZpmCQ_25(ORD('*'), &Zq0A4_171)) {
Zp1PEAFD_13(Z261, 2L, &Z268);
} else if (ZpmCQ_25(ORD('+'), &Zq0A4_171)) {
Zp1PEAFD_13(Z261, 2L, &Z268);
} else if (ZpmCQ_25(ORD('c'), &Zq0A4_171)) {
Zp1PEAFD_13(Z261, 2L, &Z268);
} else {
Zp1PEAFD_13(Z258, 3L, &Z268);
}
Zp1PEAFD_5(&Z269, &Z268);
Zq0A4_172 = Z283(Z269);
if (ZpmCQ_25(ORD('*'), &Zq0A4_171)) {
if (ZpmCQ_25(ORD('L'), &Zq0A4_171)) {
ZbpA7dpZg_3(Zq0A4_279);
} else {
ZbpA7dpZ_6(Zq0A4_279);
}
} else if (ZpmCQ_25(ORD('c'), &Zq0A4_171)) {
if (ZpmCQ_25(ORD('L'), &Zq0A4_171)) {
ZbpA7dv_3(Zq0A4_279);
} else {
ZbpA7d_7(Zq0A4_279);
}
} else {
if (ZpmCQ_25(ORD('L'), &Zq0A4_171)) {
ZbpA7nqDL_3(Zq0A4_279);
} else {
ZbpA7nqD_4(Zq0A4_279);
}
}
Z284(Z269, Zq0A4_172);
}
if (!ZpmCQ_25(ORD('c'), &Zq0A4_171)) {
if (ZpmCQ_25(ORD('i'), &Zq0A4_171) || ZpmCQ_25(ORD('X'), &Zq0A4_171)) {
Zp1PEAFD_13((STRING)"grm yy", 6L, &Z269);
Zfb3DLQ_3(Zq0A4_85, &Zq0A4_90);
Zp1PEAFD_5(&Z269, &Zq0A4_90);
Zp1PEAFD_13((STRING)".h", 2L, &Z268);
Zp1PEAFD_5(&Z269, &Z268);
Zp1PEAFD_6(&Z269, '\0');
Zp1PEAFD_14(&Z269, Z271.A, 256L);
Z274 = rSystem(Z271.A, 256L);
}
}
if (ZpmCQ_25(ORD('8'), &Zq0A4_171)) {
ZfM_33((ZDz6VQCC_4)ZfM_2);
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)"Memory", 6L);
ZfM_25((ZDz6VQCC_4)ZfM_2, (LONGINT)ZDtgCFKU_0, 8L);
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)"  Heap", 6L);
ZfM_25((ZDz6VQCC_4)ZfM_2, (LONGINT)Zq0A4_280, 8L);
ZfM_33((ZDz6VQCC_4)ZfM_2);
}
ZblNKKO_46((ZDz6VQCC_4)ZfM_2);
ZfM_34();
if (Zq0A4_0 > 0) {
rExit(1L);
}
rExit(0L);
}
