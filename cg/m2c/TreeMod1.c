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

#ifndef DEFINITION_TreeMod2
#include "TreeMod2.h"
#endif

#ifndef DEFINITION_Tree
#include "Tree.h"
#endif

#ifndef DEFINITION_Strings
#include "Strings.h"
#endif

#ifndef DEFINITION_TreeMod1
#include "TreeMod1.h"
#endif

ZfM_3 Zq0A4gqDJ_1;
BOOLEAN Zq0A4gqDJ_2;
PROC Zq0A4gqDJ_3;

static INTEGER Z171, Z172;
static Zfb3DLQ_0 Z173, Z174;
static Zq0A4_153 Z175;
static SHORTCARD Z176;
static SHORTCARD Z177, Z178;
static BOOLEAN Z179, Z180;
static void Z181 ARGS ((CHAR Z182[], LONGCARD O_1));
static BOOLEAN Z185 ARGS ((BYTE Z186[], LONGCARD O_3, BYTE Z187[], LONGCARD O_2));
struct S_33 {
union {
char dummy;
} U_1;
};
static void Z202 ARGS ((Zq0A4_153 Z190));
struct S_32 {
union {
char dummy;
} U_1;
};
static void Z203 ARGS ((Zq0A4_153 Z190));
struct S_31 {
union {
char dummy;
} U_1;
};
static void Z208 ARGS ((Zq0A4_153 Z190));
struct S_30 {
union {
char dummy;
} U_1;
};
static void Z209 ARGS ((Zq0A4_153 Z190));
struct S_29 {
union {
char dummy;
} U_1;
};
static void Z210 ARGS ((Zq0A4_153 Z190));
struct S_28 {
union {
char dummy;
} U_1;
};
static void Z211 ARGS ((Zq0A4_153 Z190));
struct S_27 {
union {
char dummy;
} U_1;
};
struct S_26 {
union {
char dummy;
} U_1;
};
static void Z225 ARGS ((Zq0A4_153 Z190));
struct S_25 {
union {
char dummy;
} U_1;
};
static void Z226 ARGS ((Zq0A4_153 Z190));
struct S_24 {
union {
char dummy;
} U_1;
};
static void Z227 ARGS ((Zq0A4_153 Z190));
struct S_23 {
union {
char dummy;
} U_1;
};
static void Z228 ARGS ((Zq0A4_153 Z190));
struct S_22 {
union {
char dummy;
} U_1;
};
static void Z229 ARGS ((Zq0A4_153 Z190));
struct S_21 {
union {
char dummy;
} U_1;
};
static void Z230 ARGS ((Zq0A4_153 Z190));
struct S_20 {
union {
char dummy;
} U_1;
};
static void Z231 ARGS ((Zq0A4_153 Z190));
struct S_19 {
union {
char dummy;
} U_1;
};
static void Z232 ARGS ((Zq0A4_153 Z190));
struct S_18 {
union {
char dummy;
} U_1;
};
static void Z233 ARGS ((Zq0A4_153 Z190));
struct S_17 {
union {
char dummy;
} U_1;
};
static void Z234 ARGS ((Zq0A4_153 Z190));
struct S_16 {
union {
char dummy;
} U_1;
};
static void Z235 ARGS ((Zq0A4_153 Z190));
struct S_15 {
union {
char dummy;
} U_1;
};
static void Z244 ARGS ((Zq0A4_153 Z190));
struct S_14 {
union {
char dummy;
} U_1;
};
static void Z246 ARGS ((Zq0A4_153 Z190));
struct S_13 {
union {
char dummy;
} U_1;
};
static void Z236 ARGS ((Zq0A4_153 Z247));
struct S_12 {
union {
char dummy;
} U_1;
};
static void Z237 ARGS ((Zq0A4_153 Z190));
struct S_11 {
union {
char dummy;
} U_1;
};
static void Z238 ARGS ((Zq0A4_153 Z249));
struct S_10 {
union {
char dummy;
} U_1;
};
static void Z243 ARGS ((Zq0A4_153 Z190));
struct S_9 {
union {
char dummy;
} U_1;
};
static void Z224 ARGS ((Zq0A4_153 Z190));
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
static void Z219 ARGS ((Zq0A4_153 Z190));
struct S_6 {
union {
char dummy;
} U_1;
};
static void Z206 ARGS ((Zq0A4_153 Z190));
struct S_5 {
union {
char dummy;
} U_1;
};
static BOOLEAN Z248 ARGS ((Zq0A4_153 Z190));
struct S_4 {
union {
char dummy;
} U_1;
};
static void Z254 ARGS ((Zq0A4_153 Z190));
struct S_3 {
union {
char dummy;
} U_1;
};
static BOOLEAN Z250 ARGS ((Zq0A4_153 Z190));
struct S_2 {
union {
char dummy;
} U_1;
};
static void Z255 ARGS ((Zq0A4_153 Z190));
struct S_1 {
union {
char dummy;
} U_1;
};
static void Z258 ARGS ((void));

static void Z181
# ifdef HAVE_ARGS
(CHAR Z182[], LONGCARD O_1)
# else
(Z182, O_1)
CHAR Z182[];
LONGCARD O_1;
# endif
{
OPEN_ARRAY_LOCALS

ALLOC_OPEN_ARRAYS (O_1 * sizeof (CHAR), 1)
COPY_OPEN_ARRAY (Z182, O_1, CHAR)
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)"Error: module TreeMod1, routine ", 32L);
ZfM_29((ZDz6VQCC_4)ZfM_2, Z182, O_1);
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)" failed", 7L);
ZfM_33((ZDz6VQCC_4)ZfM_2);
(*Zq0A4gqDJ_3)();
FREE_OPEN_ARRAYS
}

static BOOLEAN Z185
# ifdef HAVE_ARGS
(BYTE Z186[], LONGCARD O_3, BYTE Z187[], LONGCARD O_2)
# else
(Z186, O_3, Z187, O_2)
BYTE Z186[];
LONGCARD O_3;
BYTE Z187[];
LONGCARD O_2;
# endif
{
INTEGER Z188;
OPEN_ARRAY_LOCALS

ALLOC_OPEN_ARRAYS (O_2 * sizeof (WORD) + O_3 * sizeof (WORD), 2)
COPY_OPEN_ARRAY (Z187, O_2, WORD)
COPY_OPEN_ARRAY (Z186, O_3, WORD)
{
LONGINT B_1 = 0, B_2 = (INTEGER)(O_3 - 1);

if (B_1 <= B_2)
for (Z188 = B_1;; Z188 += 1) {
if (Z186[Z188] != Z187[Z188]) {
FREE_OPEN_ARRAYS
return FALSE;
}
if (Z188 >= B_2) break;
}
}
FREE_OPEN_ARRAYS
return TRUE;
}

void Zq0A4gqDJ_4
# ifdef HAVE_ARGS
(Zq0A4_153 Z190)
# else
(Z190)
Zq0A4_153 Z190;
# endif
{
struct S_33 Z191;

if (Z190 == Zq0A4_97) {
return;
}
if (Z190 != NIL && Z190->U_1.V_1.Y0 == Zq0A4_127) {
{
register Zq0A4_253 *W_1 = &Z190->U_1.V_32.Y31;

ZfM_29(Zq0A4_172, (STRING)"DEFINITION MODULE ", 18L);
Zq0A4_192(Zq0A4_85);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
if (ZpmCQ_25(ORD('<'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)"FROM ", 5L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)" IMPORT ", 8L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)", tProcTree;", 12L);
ZfM_33(Zq0A4_172);
}
ZfM_29(Zq0A4_172, (STRING)"IMPORT SYSTEM, Strings, IO;", 27L);
ZfM_33(Zq0A4_172);
Zq0A4gqDK_2(W_1->Y6->U_1.V_17.Y16.Y8);
ZqnGVQ_5(Zq0A4_172, W_1->Y6->U_1.V_17.Y16.Y2);
Z175 = W_1->Y14;
while (Z175->U_1.V_1.Y0 == Zq0A4_144) {
Zq0A4gqDK_2(Z175->U_1.V_49.Y48.Y6->U_1.V_17.Y16.Y8);
ZqnGVQ_5(Zq0A4_172, Z175->U_1.V_49.Y48.Y6->U_1.V_17.Y16.Y2);
Z175 = Z175->U_1.V_49.Y48.Y12;
}
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"CONST", 5L);
ZfM_33(Zq0A4_172);
Zq0A4_192(Zq0A4_85);
ZfM_29(Zq0A4_172, (STRING)"ModuleDoesNotMatchEvaluatorModule", 33L);
Zq0A4_195((LONGINT)ZpmC89LG6_1);
ZfM_29(Zq0A4_172, (STRING)" = 0;", 5L);
ZfM_33(Zq0A4_172);
if (!ZpmCQ_25(ORD('0'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)"Generate", 8L);
Zq0A4_192(Zq0A4_85);
ZfM_29(Zq0A4_172, (STRING)"ModuleWithoutOption0 = 0;", 25L);
ZfM_33(Zq0A4_172);
}
if (ZpmCQ_25(ORD('L'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)"Generate", 8L);
Zq0A4_192(Zq0A4_85);
ZfM_29(Zq0A4_172, (STRING)"ModuleWithOptionL = 0;", 22L);
ZfM_33(Zq0A4_172);
}
ZfM_33(Zq0A4_172);
if (!ZpmCQ_25(ORD('<'), &Zq0A4_171)) {
Zq0A4_192(Zq0A4_88);
ZfM_29(Zq0A4_172, (STRING)" = NIL;", 7L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
Zq0A4_184(W_1->Y13, (Zq0A4_170)Z202);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"yyBlockSize = 20480;", 20L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"TYPE ", 5L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)" = POINTER TO yyNode;", 21L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"tProcTree = PROCEDURE (", 23L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)");", 2L);
ZfM_33(Zq0A4_172);
Zq0A4_184(W_1->Y13, (Zq0A4_170)Z203);
}
Zq0A4gqDK_2(W_1->Y6->U_1.V_17.Y16.Y7);
ZqnGVQ_5(Zq0A4_172, W_1->Y6->U_1.V_17.Y16.Y1);
Z175 = W_1->Y14;
while (Z175->U_1.V_1.Y0 == Zq0A4_144) {
Zq0A4gqDK_2(Z175->U_1.V_49.Y48.Y6->U_1.V_17.Y16.Y7);
ZqnGVQ_5(Zq0A4_172, Z175->U_1.V_49.Y48.Y6->U_1.V_17.Y16.Y1);
Z175 = Z175->U_1.V_49.Y48.Y12;
}
ZfM_33(Zq0A4_172);
if (!ZpmCQ_25(ORD('<'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)"# ifndef yyNodeHead", 19L);
ZfM_33(Zq0A4_172);
if (ZpmCQ_25(ORD('e'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)"# define yyNodeHead yyx, yyy: SHORTCARD; yyparent: ", 51L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
} else {
ZfM_29(Zq0A4_172, (STRING)"# define yyNodeHead", 19L);
ZfM_33(Zq0A4_172);
}
ZfM_29(Zq0A4_172, (STRING)"# endif", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"TYPE", 4L);
ZfM_33(Zq0A4_172);
if (ZpmCQ_25(ORD('L'), &Zq0A4_171)) {
Z178 = 0;
Zq0A4_184(W_1->Y13, (Zq0A4_170)Z206);
ZfM_29(Zq0A4_172, (STRING)"yytNodeHead = RECORD yyKind, yyMark, yyOffset: SHORTCARD; yyParent: ", 68L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)"; yyIsComp0", 11L);
if (ZpmCQ_25(ORD('5'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)", yyIsDone0", 11L);
}
{
SHORTCARD B_3 = 1, B_4 = (Z178 - 1) / Zq0A4gqDJ_0;

if (B_3 <= B_4)
for (Z177 = B_3;; Z177 += 1) {
ZfM_29(Zq0A4_172, (STRING)", yyIsComp", 10L);
Zq0A4_195((LONGINT)Z177);
if (ZpmCQ_25(ORD('5'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)", yyIsDone", 10L);
Zq0A4_195((LONGINT)Z177);
}
if (Z177 >= B_4) break;
}
}
ZfM_29(Zq0A4_172, (STRING)": BITSET; yyNodeHead END;", 25L);
ZfM_33(Zq0A4_172);
} else {
ZfM_29(Zq0A4_172, (STRING)"yytNodeHead = RECORD yyKind, yyMark: SHORTCARD; yyNodeHead END;", 63L);
ZfM_33(Zq0A4_172);
}
ZfM_29(Zq0A4_172, (STRING)"yytBlockPtr = POINTER TO yytBlock;", 34L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"yytBlock	= RECORD", 17L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"		     yyBlock	: ARRAY [1..yyBlockSize] OF CHAR;", 48L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"		     yySuccessor: yytBlockPtr;", 32L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"		  END;", 8L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
Zq0A4_184(W_1->Y13, (Zq0A4_170)Z208);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"yyNode = RECORD", 15L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"CASE : SHORTCARD OF", 19L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"| 0: Kind: SHORTCARD;", 21L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"| ", 2L);
Zq0A4_195(Zq0A4_68 + 1);
ZfM_29(Zq0A4_172, (STRING)": yyHead: yytNodeHead;", 22L);
ZfM_33(Zq0A4_172);
Zq0A4_184(W_1->Y13, (Zq0A4_170)Z209);
ZfM_29(Zq0A4_172, (STRING)"END;", 4L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"END;", 4L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"VAR ", 4L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"Root	: ", 7L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"VAR HeapUsed	: LONGCARD;", 24L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"VAR yyBlockList	: yytBlockPtr;", 30L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"VAR yyPoolFreePtr, yyPoolMaxPtr	: SYSTEM.ADDRESS;", 49L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"VAR yyNodeSize	: ARRAY [0..", 27L);
Zq0A4_195(Zq0A4_68);
ZfM_29(Zq0A4_172, (STRING)"] OF SHORTCARD;", 15L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"VAR yyTypeRange	: ARRAY [0..", 28L);
Zq0A4_195(Zq0A4_68);
ZfM_29(Zq0A4_172, (STRING)"] OF SHORTCARD;", 15L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"VAR yyExit	: PROC;", 18L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"VAR ", 4L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"_CheckReportNoTree, ", 20L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"_CheckReportNodes	: BOOLEAN;", 28L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"VAR ", 4L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"_DrawDepth: INTEGER;", 20L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"VAR ", 4L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"_DrawLength, ", 13L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"_DrawBoxWidth, ", 15L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"_DrawBoxHeight: SHORTCARD;", 26L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"VAR ", 4L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"_DrawFileName: Strings.tString;", 31L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# ifdef SUPPORT_TVA", 19L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"VAR ", 4L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"_TreatTVAasChild	: BOOLEAN;", 27L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# endif", 7L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"PROCEDURE yyAlloc	(): ", 22L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
}
if (ZpmCQ_25(ORD('_'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)"PROCEDURE NodeName	(yyt: ", 25L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)"; VAR yyName: Strings.tString);", 31L);
ZfM_33(Zq0A4_172);
}
if (!ZpmCQ_25(ORD('<'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)"PROCEDURE Make", 14L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"	(Kind: SHORTCARD): ", 20L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"PROCEDURE IsType	(Tree: ", 24L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)"; Kind: SHORTCARD): BOOLEAN;", 28L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
}
if (ZpmCQ_25(ORD('n'), &Zq0A4_171)) {
Zq0A4_184(W_1->Y13, (Zq0A4_170)Z210);
ZfM_33(Zq0A4_172);
}
if (ZpmCQ_25(ORD('m'), &Zq0A4_171)) {
Zq0A4_184(W_1->Y13, (Zq0A4_170)Z211);
ZfM_33(Zq0A4_172);
}
if (ZpmCQ_25(ORD('f'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)"PROCEDURE Release", 17L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"	(Tree: ", 8L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)");", 2L);
ZfM_33(Zq0A4_172);
}
if (ZpmCQ_25(ORD('F'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)"PROCEDURE Release", 17L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"Module;", 7L);
ZfM_33(Zq0A4_172);
}
if (ZpmCQ_25(ORD('o'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)"PROCEDURE Write", 15L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"Node	(f: IO.tFile; Tree: ", 25L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)");", 2L);
ZfM_33(Zq0A4_172);
}
if (ZpmCQ_25(ORD('w'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)"PROCEDURE Write", 15L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"	(f: IO.tFile; Tree: ", 21L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)");", 2L);
ZfM_33(Zq0A4_172);
}
if (ZpmCQ_25(ORD('r'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)"PROCEDURE Read", 14L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"	(f: IO.tFile): ", 16L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
}
if (ZpmCQ_25(ORD('p'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)"PROCEDURE Put", 13L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"	(f: IO.tFile; Tree: ", 21L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)");", 2L);
ZfM_33(Zq0A4_172);
}
if (ZpmCQ_25(ORD('g'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)"PROCEDURE Get", 13L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"	(f: IO.tFile): ", 16L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
}
if (ZpmCQ_25(ORD('t'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)"PROCEDURE Traverse", 18L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"TD	(Tree: ", 10L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)"; Proc: tProcTree);", 19L);
ZfM_33(Zq0A4_172);
}
if (ZpmCQ_25(ORD('b'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)"PROCEDURE Traverse", 18L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"BU	(Tree: ", 10L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)"; Proc: tProcTree);", 19L);
ZfM_33(Zq0A4_172);
}
if (ZpmCQ_25(ORD('R'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)"PROCEDURE Reverse", 17L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"	(Tree: ", 8L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)"): ", 3L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"PROCEDURE Forall", 16L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"	(Tree: ", 8L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)"; Proc: tProcTree);", 19L);
ZfM_33(Zq0A4_172);
}
if (ZpmCQ_25(ORD('y'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)"PROCEDURE Copy", 14L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"	(Tree: ", 8L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)"): ", 3L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
}
if (ZpmCQ_25(ORD('k'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)"PROCEDURE Check", 15L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"	(Tree: ", 8L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)"): BOOLEAN;", 11L);
ZfM_33(Zq0A4_172);
}
if (ZpmCQ_25(ORD('q'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)"PROCEDURE Query", 15L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"	(Tree: ", 8L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)");", 2L);
ZfM_33(Zq0A4_172);
}
if (ZpmCQ_25(ORD('e'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)"PROCEDURE Draw", 14L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"	(yyt: ", 7L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)");", 2L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"PROCEDURE SetDepth", 18L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"	(yyyDepth: INTEGER);", 21L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"PROCEDURE SetBox", 16L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"	(yyyWidth, yyyHeight: INTEGER);", 32L);
ZfM_33(Zq0A4_172);
}
if (ZpmCQ_25(ORD('='), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)"PROCEDURE IsEqual", 17L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"	(Tree1, Tree2: ", 16L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)"): BOOLEAN;", 11L);
ZfM_33(Zq0A4_172);
}
if (ZpmCQ_25(ORD('L'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)"PROCEDURE Init", 14L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"	(Tree: ", 8L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)");", 2L);
ZfM_33(Zq0A4_172);
}
if (!ZpmCQ_25(ORD('<'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)"PROCEDURE Configure", 19L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)" (VAR Parameter, Value: ARRAY OF CHAR);", 39L);
ZfM_33(Zq0A4_172);
}
ZfM_29(Zq0A4_172, (STRING)"PROCEDURE Begin", 15L);
Zq0A4_192(Zq0A4_85);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"PROCEDURE Close", 15L);
Zq0A4_192(Zq0A4_85);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"END ", 4L);
Zq0A4_192(Zq0A4_85);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
ZfM_33(Zq0A4_172);
return;
}
}
}

static void Z202
# ifdef HAVE_ARGS
(Zq0A4_153 Z190)
# else
(Z190)
Zq0A4_153 Z190;
# endif
{
struct S_32 Z191;

if (Z190 == Zq0A4_97) {
return;
}
if (Z190 != NIL && Z190->U_1.V_1.Y0 == Zq0A4_100) {
for (;;) {
{
register Zq0A4_226 *W_2 = &Z190->U_1.V_5.Y4;

if (!!IN(Zq0A4_48, W_2->Y2)) {
goto EXIT_1;
}
INC(Z171);
if (!!IN(Zq0A4_17, W_2->Y2)) {
goto EXIT_1;
}
Zq0A4_192(W_2->Y1);
ZfM_29(Zq0A4_172, (STRING)" = ", 3L);
Zq0A4_195(Z171);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
return;
}
} EXIT_1:;
}
}

static void Z203
# ifdef HAVE_ARGS
(Zq0A4_153 Z190)
# else
(Z190)
Zq0A4_153 Z190;
# endif
{
struct S_31 Z191;

if (Z190 == Zq0A4_97) {
return;
}
if (Z190 != NIL && Z190->U_1.V_1.Y0 == Zq0A4_100) {
for (;;) {
{
register Zq0A4_226 *W_3 = &Z190->U_1.V_5.Y4;

if (!((Zq0A4_177 & W_3->Y2) == 0X0L)) {
goto EXIT_2;
}
if (!(W_3->Y6->U_1.V_1.Y0 == Zq0A4_99)) {
goto EXIT_2;
}
ZfM_29(Zq0A4_172, (STRING)"t", 1L);
Zq0A4_192(W_3->Y1);
ZfM_29(Zq0A4_172, (STRING)" = ", 3L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
return;
}
} EXIT_2:;
}
}

static void Z208
# ifdef HAVE_ARGS
(Zq0A4_153 Z190)
# else
(Z190)
Zq0A4_153 Z190;
# endif
{
struct S_30 Z191;

if (Z190 == Zq0A4_97) {
return;
}
if (Z190 != NIL && Z190->U_1.V_1.Y0 == Zq0A4_100) {
for (;;) {
{
register Zq0A4_226 *W_4 = &Z190->U_1.V_5.Y4;

if (!((Zq0A4_177 & W_4->Y2) == 0X0L)) {
goto EXIT_3;
}
ZfM_29(Zq0A4_172, (STRING)"y", 1L);
Zq0A4_192(W_4->Y1);
ZfM_29(Zq0A4_172, (STRING)" = RECORD yyHead: yytNodeHead; ", 31L);
Zq0A4_185(Z190, (Zq0A4_170)Z208);
ZfM_29(Zq0A4_172, (STRING)"END;", 4L);
ZfM_33(Zq0A4_172);
return;
}
} EXIT_3:;
}
if (Z190 != NIL && Z190->U_1.V_1.Y0 == Zq0A4_105) {
{
register Zq0A4_231 *W_5 = &Z190->U_1.V_10.Y9;

Zq0A4_192(W_5->Y3);
ZfM_29(Zq0A4_172, (STRING)": ", 2L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)"; ", 2L);
return;
}
}
if (Z190 != NIL && Z190->U_1.V_1.Y0 == Zq0A4_106) {
for (;;) {
{
register Zq0A4_232 *W_6 = &Z190->U_1.V_11.Y10;

if (!((Zq0A4_176 & W_6->Y6) == 0X0L)) {
goto EXIT_4;
}
Zq0A4_192(W_6->Y3);
ZfM_29(Zq0A4_172, (STRING)": ", 2L);
Zq0A4_192(W_6->Y4);
ZfM_29(Zq0A4_172, (STRING)"; ", 2L);
return;
}
} EXIT_4:;
}
}

static void Z209
# ifdef HAVE_ARGS
(Zq0A4_153 Z190)
# else
(Z190)
Zq0A4_153 Z190;
# endif
{
struct S_29 Z191;

if (Z190 == Zq0A4_97) {
return;
}
if (Z190 != NIL && Z190->U_1.V_1.Y0 == Zq0A4_100) {
for (;;) {
{
register Zq0A4_226 *W_7 = &Z190->U_1.V_5.Y4;

if (!((Zq0A4_177 & W_7->Y2) == 0X0L)) {
goto EXIT_5;
}
ZfM_29(Zq0A4_172, (STRING)"| ", 2L);
Zq0A4_192(W_7->Y1);
ZfM_29(Zq0A4_172, (STRING)": ", 2L);
Zq0A4_192(W_7->Y1);
ZfM_29(Zq0A4_172, (STRING)": y", 3L);
Zq0A4_192(W_7->Y1);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
return;
}
} EXIT_5:;
}
}

static void Z210
# ifdef HAVE_ARGS
(Zq0A4_153 Z190)
# else
(Z190)
Zq0A4_153 Z190;
# endif
{
struct S_28 Z191;

if (Z190 == Zq0A4_97) {
return;
}
if (Z190 != NIL && Z190->U_1.V_1.Y0 == Zq0A4_100) {
for (;;) {
{
register Zq0A4_226 *W_8 = &Z190->U_1.V_5.Y4;

if (!((Zq0A4_177 & W_8->Y2) == 0X0L)) {
goto EXIT_6;
}
ZfM_29(Zq0A4_172, (STRING)"PROCEDURE n", 11L);
Zq0A4_192(W_8->Y1);
ZfM_29(Zq0A4_172, (STRING)" (): ", 5L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
return;
}
} EXIT_6:;
}
}

static void Z211
# ifdef HAVE_ARGS
(Zq0A4_153 Z190)
# else
(Z190)
Zq0A4_153 Z190;
# endif
{
struct S_27 Z191;

if (Z190 == Zq0A4_97) {
return;
}
if (Z190 != NIL && Z190->U_1.V_1.Y0 == Zq0A4_100) {
for (;;) {
{
register Zq0A4_226 *W_9 = &Z190->U_1.V_5.Y4;

if (!((Zq0A4_177 & W_9->Y2) == 0X0L)) {
goto EXIT_7;
}
Z172 = 0;
ZfM_29(Zq0A4_172, (STRING)"PROCEDURE m", 11L);
Zq0A4_192(W_9->Y1);
ZfM_29(Zq0A4_172, (STRING)" (", 2L);
Zq0A4_185(Z190, (Zq0A4_170)Z211);
ZfM_29(Zq0A4_172, (STRING)"): ", 3L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
return;
}
} EXIT_7:;
}
if (Z190 != NIL && Z190->U_1.V_1.Y0 == Zq0A4_105) {
for (;;) {
{
register Zq0A4_231 *W_10 = &Z190->U_1.V_10.Y9;

if (!(IN(Zq0A4_8, W_10->Y6) && W_10->Y7 == Zp1PEAFi_0)) {
goto EXIT_8;
}
if (Z172 > 0) {
ZfM_29(Zq0A4_172, (STRING)"; ", 2L);
}
ZfM_29(Zq0A4_172, (STRING)"p", 1L);
Zq0A4_192(W_10->Y3);
ZfM_29(Zq0A4_172, (STRING)": ", 2L);
Zq0A4_192(Zq0A4_86);
INC(Z172);
return;
}
} EXIT_8:;
}
if (Z190 != NIL && Z190->U_1.V_1.Y0 == Zq0A4_106) {
for (;;) {
{
register Zq0A4_232 *W_11 = &Z190->U_1.V_11.Y10;

if (!(IN(Zq0A4_8, W_11->Y6) && W_11->Y7 == Zp1PEAFi_0)) {
goto EXIT_9;
}
if (Z172 > 0) {
ZfM_29(Zq0A4_172, (STRING)"; ", 2L);
}
ZfM_29(Zq0A4_172, (STRING)"p", 1L);
Zq0A4_192(W_11->Y3);
ZfM_29(Zq0A4_172, (STRING)": ", 2L);
Zq0A4_192(W_11->Y4);
INC(Z172);
return;
}
} EXIT_9:;
}
}

void Zq0A4gqDJ_5
# ifdef HAVE_ARGS
(Zq0A4_153 Z190)
# else
(Z190)
Zq0A4_153 Z190;
# endif
{
struct S_26 Z191;

if (Z190 == Zq0A4_97) {
return;
}
if (Z190 != NIL && Z190->U_1.V_1.Y0 == Zq0A4_127) {
{
register Zq0A4_253 *W_12 = &Z190->U_1.V_32.Y31;

ZfM_29(Zq0A4_172, (STRING)"IMPLEMENTATION MODULE ", 22L);
Zq0A4_192(Zq0A4_85);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"IMPORT SYSTEM, rSystem, General, rMemory, DynArray, IO, Layout, StringM, Strings, Idents, Texts, Sets, Position, Errors;", 120L);
ZfM_33(Zq0A4_172);
if (ZpmCQ_25(ORD('e'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)"IMPORT Argument, TclTk;", 23L);
ZfM_33(Zq0A4_172);
}
if (ZpmCQ_25(ORD('<'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)"IMPORT ", 7L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"FROM ", 5L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)" IMPORT ", 8L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)", ", 2L);
Zq0A4_192(Zq0A4_88);
ZfM_29(Zq0A4_172, (STRING)", tProcTree, Make", 17L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)", IsType, yyExit,", 17L);
ZfM_33(Zq0A4_172);
if (ZpmCQ_25(ORD('o'), &Zq0A4_171) || ZpmCQ_25(ORD('w'), &Zq0A4_171) || ZpmCQ_25(ORD('e'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)"NodeName,", 9L);
ZfM_33(Zq0A4_172);
}
if (ZpmCQ_25(ORD('k'), &Zq0A4_171) || ZpmCQ_25(ORD('q'), &Zq0A4_171) || ZpmCQ_25(ORD('e'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)"Write", 5L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"Node,", 5L);
ZfM_33(Zq0A4_172);
}
if (ZpmCQ_25(ORD('q'), &Zq0A4_171) || ZpmCQ_25(ORD('e'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)"Traverse", 8L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"TD,", 3L);
ZfM_33(Zq0A4_172);
}
if (ZpmCQ_25(ORD('k'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)"yyTypeRange, ", 13L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"_CheckReportNoTree, ", 20L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"_CheckReportNodes,", 18L);
ZfM_33(Zq0A4_172);
}
if (ZpmCQ_25(ORD('F'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)"yytBlockPtr, yytBlock, yyBlockList, HeapUsed,", 45L);
ZfM_33(Zq0A4_172);
}
if (ZpmCQ_25(ORD('e'), &Zq0A4_171)) {
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"_DrawDepth, ", 12L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"_DrawLength, ", 13L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"_DrawBoxWidth, ", 15L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"_DrawBoxHeight, ", 16L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"_DrawFileName,", 14L);
ZfM_33(Zq0A4_172);
}
Zq0A4_184(W_12->Y13, (Zq0A4_170)Z219);
ZfM_29(Zq0A4_172, (STRING)"yyAlloc, yyPoolFreePtr, yyPoolMaxPtr, yyNodeSize;", 49L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
}
Zq0A4gqDK_2(W_12->Y6->U_1.V_17.Y16.Y9);
ZqnGVQ_5(Zq0A4_172, W_12->Y6->U_1.V_17.Y16.Y3);
Z175 = W_12->Y14;
while (Z175->U_1.V_1.Y0 == Zq0A4_144) {
Zq0A4gqDK_2(Z175->U_1.V_49.Y48.Y6->U_1.V_17.Y16.Y9);
ZqnGVQ_5(Zq0A4_172, Z175->U_1.V_49.Y48.Y6->U_1.V_17.Y16.Y3);
Z175 = Z175->U_1.V_49.Y48.Y12;
}
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"VAR yyf	: IO.tFile;", 19L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
Zq0A4gqDK_2(W_12->Y6->U_1.V_17.Y16.Y10);
ZqnGVQ_5(Zq0A4_172, W_12->Y6->U_1.V_17.Y16.Y4);
Z175 = W_12->Y14;
while (Z175->U_1.V_1.Y0 == Zq0A4_144) {
Zq0A4gqDK_2(Z175->U_1.V_49.Y48.Y6->U_1.V_17.Y16.Y10);
ZqnGVQ_5(Zq0A4_172, Z175->U_1.V_49.Y48.Y6->U_1.V_17.Y16.Y4);
Z175 = Z175->U_1.V_49.Y48.Y12;
}
ZfM_29(Zq0A4_172, (STRING)"# include \"yy", 13L);
Zq0A4_192(Zq0A4_85);
ZfM_29(Zq0A4_172, (STRING)".h\"", 3L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# ifndef yyALLOC", 16L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# define yyALLOC(ptr, size)	ptr := yyPoolFreePtr; \\", 51L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  IF SYSTEM.ADDRESS (ptr) >= yyPoolMaxPtr THEN ptr := yyAlloc (); END; \\", 72L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  INC (yyPoolFreePtr, size);", 28L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# endif", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# ifndef yyFREE", 15L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# define yyFREE(ptr, size)	", 27L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# endif", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# define ", 9L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"_InitHead(ptr, kind) ptr^.Kind := kind; \\", 41L);
ZfM_33(Zq0A4_172);
if (ZpmCQ_25(ORD('L'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)"   ptr^.yyHead.yyParent := ", 27L);
Zq0A4_192(Zq0A4_88);
ZfM_29(Zq0A4_172, (STRING)"; \\", 3L);
ZfM_33(Zq0A4_172);
}
ZfM_29(Zq0A4_172, (STRING)"   ptr^.yyHead.yyMark := 0;", 27L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
if (!ZpmCQ_25(ORD('<'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)"VAR yyMaxSize, yyi	: SHORTCARD;", 31L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"PROCEDURE yyAlloc (): ", 22L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" VAR yyBlockPtr	: yytBlockPtr;", 30L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" BEGIN", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  yyBlockPtr	:= yyBlockList;", 28L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  yyBlockList	:= rMemory.Alloc (SYSTEM.TSIZE (yytBlock));", 57L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  yyBlockList^.yySuccessor := yyBlockPtr;", 41L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  yyPoolFreePtr	:= SYSTEM.ADR (yyBlockList^.yyBlock);", 53L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  yyPoolMaxPtr	:= yyPoolFreePtr + (yyBlockSize - yyMaxSize + 1);", 64L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  INC (HeapUsed, yyBlockSize);", 30L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  RETURN yyPoolFreePtr;", 23L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" END yyAlloc;", 13L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
}
if (ZpmCQ_25(ORD('_'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)"PROCEDURE NodeName (yyt: ", 25L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)"; VAR yyName: Strings.tString);", 31L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"BEGIN", 5L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" CASE yyt^.Kind OF", 18L);
ZfM_33(Zq0A4_172);
Zq0A4_184(W_12->Y13, (Zq0A4_170)Z224);
ZfM_29(Zq0A4_172, (STRING)" ELSE Strings.ArrayToString (\"UNKNOWN\", yyName);", 48L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" END;", 5L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"END NodeName;", 13L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
}
if (!ZpmCQ_25(ORD('<'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)"PROCEDURE Make", 14L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)" (yyKind: SHORTCARD): ", 22L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" VAR yyt	: ", 11L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" BEGIN", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  yyALLOC (yyt, yyNodeSize [yyKind])", 36L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  ", 2L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"_InitHead (yyt, yyKind)", 23L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  RETURN yyt;", 13L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" END Make", 9L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"PROCEDURE IsType (yyTree: ", 26L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)"; yyKind: SHORTCARD): BOOLEAN;", 30L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" BEGIN", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  RETURN (yyTree # ", 19L);
Zq0A4_192(Zq0A4_88);
ZfM_29(Zq0A4_172, (STRING)") AND (yyKind <= yyTree^.Kind) AND (yyTree^.Kind <= yyTypeRange [yyKind]);", 74L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" END IsType;", 12L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
}
if (ZpmCQ_25(ORD('n'), &Zq0A4_171)) {
Zq0A4_184(W_12->Y13, (Zq0A4_170)Z225);
}
ZfM_33(Zq0A4_172);
if (ZpmCQ_25(ORD('m'), &Zq0A4_171)) {
Zq0A4_184(W_12->Y13, (Zq0A4_170)Z226);
}
Zq0A4gqDK_7(Z190);
if (ZpmCQ_25(ORD('f'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)"PROCEDURE Release", 17L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)" (yyt: ", 7L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)");", 2L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# ifdef SUPPORT_TVA", 19L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" VAR yyPrevTreatTVAasChild	: BOOLEAN;", 37L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# endif", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" BEGIN", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# ifdef SUPPORT_TVA", 19L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  yyPrevTreatTVAasChild := ", 27L);
Zq0A4gqDK_6();
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  ", 2L);
Zq0A4gqDK_6();
ZfM_29(Zq0A4_172, (STRING)" := FALSE;", 10L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  yyMark (yyt);", 15L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  ", 2L);
Zq0A4gqDK_6();
ZfM_29(Zq0A4_172, (STRING)" := yyPrevTreatTVAasChild;", 26L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# else", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  yyMark (yyt);", 15L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# endif", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  yyRelease", 11L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)" (yyt);", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" END Release", 12L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"PROCEDURE yyRelease", 19L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)" (yyt: ", 7L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)");", 2L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" VAR yyStack	: ARRAY [0 .. ", 27L);
if (ZpmC89LG6_2 > 0) {
Zq0A4_195((LONGINT)(ZpmC89LG6_2 - 1));
} else {
ZfM_29(Zq0A4_172, (STRING)"0", 1L);
}
ZfM_29(Zq0A4_172, (STRING)"] OF ", 5L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)"; yyn: CARDINAL;", 16L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" BEGIN", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  LOOP", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   IF yyt = ", 12L);
Zq0A4_192(Zq0A4_88);
ZfM_29(Zq0A4_172, (STRING)" THEN RETURN; END;", 18L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   yyn := 0;", 12L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   CASE yyt^.Kind OF", 20L);
ZfM_33(Zq0A4_172);
Zq0A4_184(W_12->Y13, (Zq0A4_170)Z227);
ZfM_29(Zq0A4_172, (STRING)"   ELSE", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   END;", 7L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   DEC (yyt^.yyHead.yyMark);", 28L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   IF yyt^.yyHead.yyMark = 0 THEN", 33L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"    CASE yyt^.Kind OF", 21L);
ZfM_33(Zq0A4_172);
Zq0A4_184(W_12->Y13, (Zq0A4_170)Z228);
ZfM_29(Zq0A4_172, (STRING)"    ELSE", 8L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"    END;", 8L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"    yyFREE (yyt, yyNodeSize [yyt^.Kind])", 40L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   END;", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   IF yyn = 0 THEN RETURN; END;", 31L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   WHILE yyn > 1 DO DEC (yyn); yyRelease", 40L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)" (yyStack [yyn]); END;", 22L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   yyt := yyStack [0];", 22L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  END;", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" END yyRelease", 14L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
}
if (ZpmCQ_25(ORD('F'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)"PROCEDURE Release", 17L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"Module;", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" VAR yyBlockPtr	: yytBlockPtr;", 30L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" BEGIN", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  WHILE yyBlockList # NIL DO", 28L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   yyBlockPtr	:= yyBlockList;", 29L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   yyBlockList	:= yyBlockList^.yySuccessor;", 43L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   rMemory.Free (SYSTEM.TSIZE (yytBlock), yyBlockPtr);", 54L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  END;", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  yyPoolFreePtr	:= NIL;", 23L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  yyPoolMaxPtr	:= NIL;", 22L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  HeapUsed	:= 0;", 16L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" END Release", 12L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"Module;", 7L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
}
if (ZpmCQ_25(ORD('t'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)"VAR yyProc	: tProcTree;", 23L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"PROCEDURE Traverse", 18L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"TD (yyt: ", 9L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)"; yyyProc: tProcTree);", 22L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# ifdef SUPPORT_TVA", 19L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" VAR yyPrevTreatTVAasChild	: BOOLEAN;", 37L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# endif", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" BEGIN", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# ifdef SUPPORT_TVA", 19L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  yyPrevTreatTVAasChild := ", 27L);
Zq0A4gqDK_6();
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  ", 2L);
Zq0A4gqDK_6();
ZfM_29(Zq0A4_172, (STRING)" := FALSE;", 10L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  yyMark (yyt);", 15L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  ", 2L);
Zq0A4gqDK_6();
ZfM_29(Zq0A4_172, (STRING)" := yyPrevTreatTVAasChild;", 26L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# else", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  yyMark (yyt);", 15L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# endif", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  yyProc := yyyProc;", 20L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  yyTraverse", 12L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"TD (yyt);", 9L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" END Traverse", 13L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"TD;", 3L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"PROCEDURE yyTraverse", 20L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"TD (yyt: ", 9L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)");", 2L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" BEGIN", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  LOOP", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   IF (yyt = ", 13L);
Zq0A4_192(Zq0A4_88);
ZfM_29(Zq0A4_172, (STRING)") OR (yyt^.yyHead.yyMark = 0) THEN RETURN; END;", 47L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   yyt^.yyHead.yyMark := 0;", 27L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   yyProc (yyt);", 16L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   CASE yyt^.Kind OF", 20L);
ZfM_33(Zq0A4_172);
Zq0A4_184(W_12->Y13, (Zq0A4_170)Z229);
ZfM_29(Zq0A4_172, (STRING)"   ELSE RETURN;", 15L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   END;", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  END;", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" END yyTraverse", 15L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"TD;", 3L);
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
ZfM_29(Zq0A4_172, (STRING)"PROCEDURE Traverse", 18L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"BU (yyt: ", 9L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)"; yyProc: tProcTree);", 21L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" CONST yyIsStacked = 32768;", 27L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" VAR yys	: ", 11L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)"; yyi	: INTEGER;", 16L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  yyStack	: POINTER TO ARRAY [0..100000] OF ", 44L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  yyStackPtr, yyStackSize	: LONGINT;", 36L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# ifdef SUPPORT_TVA", 19L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" VAR yyPrevTreatTVAasChild	: BOOLEAN;", 37L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# endif", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" BEGIN", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  yyStackPtr := 1;", 18L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  yyStackSize := yyInitStackSize;", 33L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  DynArray.MakeArray (yyStack, yyStackSize, SYSTEM.TSIZE (", 58L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)"));", 3L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# ifdef SUPPORT_TVA", 19L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  yyPrevTreatTVAasChild := ", 27L);
Zq0A4gqDK_6();
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  ", 2L);
Zq0A4gqDK_6();
ZfM_29(Zq0A4_172, (STRING)" := FALSE;", 10L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  yyMark (yyt);", 15L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  ", 2L);
Zq0A4gqDK_6();
ZfM_29(Zq0A4_172, (STRING)" := yyPrevTreatTVAasChild;", 26L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# else", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  yyMark (yyt);", 15L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# endif", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  yyStack^ [1] := yyt;", 22L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  IF yyt # ", 11L);
Zq0A4_192(Zq0A4_88);
ZfM_29(Zq0A4_172, (STRING)" THEN INC (yyt^.yyHead.yyMark, yyIsStacked); END;", 49L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  WHILE yyStackPtr > 0 DO", 25L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   yyt := yyStack^ [yyStackPtr];", 32L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   IF (yyt = ", 13L);
Zq0A4_192(Zq0A4_88);
ZfM_29(Zq0A4_172, (STRING)") OR (yyt^.yyHead.yyMark = 0) THEN", 34L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"    DEC (yyStackPtr);", 21L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   ELSIF yyt^.yyHead.yyMark > yyIsStacked THEN", 46L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"    yyi := yyStackPtr + 1;", 26L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"    yyt^.yyHead.yyMark := yyIsStacked;", 38L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"    IF yyStackPtr + ", 20L);
Zq0A4_195((LONGINT)ZpmC89LG6_2);
ZfM_29(Zq0A4_172, (STRING)" >= yyStackSize THEN", 20L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"     DynArray.ExtendArray (yyStack, yyStackSize, SYSTEM.TSIZE (", 63L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)"));", 3L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"    END;", 8L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"    CASE yyt^.Kind OF", 21L);
ZfM_33(Zq0A4_172);
Zq0A4_184(W_12->Y13, (Zq0A4_170)Z230);
ZfM_29(Zq0A4_172, (STRING)"    ELSE", 8L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"    END;", 8L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"    WHILE yyi <= yyStackPtr DO", 30L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"     yys := yyStack^ [yyi];", 27L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"     IF yys # ", 14L);
Zq0A4_192(Zq0A4_88);
ZfM_29(Zq0A4_172, (STRING)" THEN", 5L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      IF yys^.yyHead.yyMark >= yyIsStacked THEN yyStack^ [yyi] := ", 66L);
Zq0A4_192(Zq0A4_88);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      ELSE INC (yys^.yyHead.yyMark, yyIsStacked);", 49L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"      END;", 10L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"     END;", 9L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"     INC (yyi);", 15L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"    END;", 8L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   ELSE", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"    yyt^.yyHead.yyMark := 0; DEC (yyStackPtr); yyProc (yyt);", 60L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   END;", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  END;", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  DynArray.ReleaseArray (yyStack, yyStackSize, SYSTEM.TSIZE (", 61L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)"));", 3L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" END Traverse", 13L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"BU;", 3L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
}
if (ZpmCQ_25(ORD('R'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)"PROCEDURE Reverse", 17L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)" (yyOld: ", 9L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)"): ", 3L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" VAR yyNew, yyNext, yyTail	: ", 29L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" BEGIN", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  yyNew	:= yyOld;", 17L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  yyTail	:= yyOld;", 18L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  LOOP", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   CASE yyOld^.Kind OF", 22L);
ZfM_33(Zq0A4_172);
Zq0A4_184(W_12->Y13, (Zq0A4_170)Z231);
ZfM_29(Zq0A4_172, (STRING)"   ELSE EXIT;", 13L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   END;", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   yyNew	:= yyOld;", 18L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   yyOld	:= yyNext;", 19L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  END;", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  CASE yyTail^.Kind OF", 22L);
ZfM_33(Zq0A4_172);
Zq0A4_184(W_12->Y13, (Zq0A4_170)Z232);
ZfM_29(Zq0A4_172, (STRING)"  ELSE", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  END;", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  RETURN yyNew;", 15L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" END Reverse", 12L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"PROCEDURE Forall", 16L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)" (yyt: ", 7L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)"; yyProc: tProcTree);", 21L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" VAR yyyt	: ", 12L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" BEGIN", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  LOOP", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   IF yyt = ", 12L);
Zq0A4_192(Zq0A4_88);
ZfM_29(Zq0A4_172, (STRING)" THEN RETURN; END;", 18L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   yyyt := yyt;", 15L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   CASE yyt^.Kind OF", 20L);
ZfM_33(Zq0A4_172);
Zq0A4_184(W_12->Y13, (Zq0A4_170)Z233);
ZfM_29(Zq0A4_172, (STRING)"   ELSE RETURN;", 15L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   END;", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   yyProc (yyyt);", 17L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  END;", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" END Forall", 11L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
}
if (ZpmCQ_25(ORD('y'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)"CONST yyInitOldToNewStoreSize	= 32;", 35L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"TYPE yytOldToNew = RECORD yyOld, yyNew: ", 40L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)"; END;", 6L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"VAR yyOldToNewStoreSize	: LONGINT;", 34L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"VAR yyOldToNewStorePtr	: POINTER TO ARRAY [0..50000] OF yytOldToNew;", 68L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"VAR yyOldToNewCount	: INTEGER;", 30L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"PROCEDURE yyStoreOldToNew (yyOld, yyNew: ", 41L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)");", 2L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" BEGIN", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  INC (yyOldToNewCount);", 24L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  IF (yyOldToNewCount = yyOldToNewStoreSize) THEN", 49L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   DynArray.ExtendArray (yyOldToNewStorePtr, yyOldToNewStoreSize, SYSTEM.TSIZE (yytOldToNew));", 94L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  END;", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  yyOldToNewStorePtr^[yyOldToNewCount].yyOld := yyOld;", 54L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  yyOldToNewStorePtr^[yyOldToNewCount].yyNew := yyNew;", 54L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" END yyStoreOldToNew;", 21L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"PROCEDURE yyMapOldToNew (yyOld: ", 32L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)"): ", 3L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" VAR yyi: INTEGER;", 18L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" BEGIN", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  FOR yyi := 1 TO yyOldToNewCount DO", 36L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   IF yyOldToNewStorePtr^[yyi].yyOld = yyOld THEN", 49L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"    RETURN yyOldToNewStorePtr^[yyi].yyNew;", 42L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   END;", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  END;", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  RETURN ", 9L);
Zq0A4_192(Zq0A4_88);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" END yyMapOldToNew;", 19L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"PROCEDURE yyCopy", 16L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)" (yyt: ", 7L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)"; yyNew: yytTreePtr);", 21L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" BEGIN", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  LOOP", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   IF yyt = ", 12L);
Zq0A4_192(Zq0A4_88);
ZfM_29(Zq0A4_172, (STRING)" THEN yyNew^ := ", 16L);
Zq0A4_192(Zq0A4_88);
ZfM_29(Zq0A4_172, (STRING)"; RETURN; END;", 14L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   IF yyt^.yyHead.yyMark = 0 THEN yyNew^ := yyMapOldToNew (yyt); RETURN; END;", 77L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   yyNew^ := Make", 17L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)" (yyt^.Kind);", 13L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   IF yyt^.yyHead.yyMark > 1 THEN yyStoreOldToNew (yyt, yyNew^); END;", 69L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   yyt^.yyHead.yyMark := 0;", 27L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   CASE yyt^.Kind OF", 20L);
ZfM_33(Zq0A4_172);
Zq0A4_184(W_12->Y13, (Zq0A4_170)Z234);
ZfM_29(Zq0A4_172, (STRING)"   ELSE", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   END;", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  END;", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" END yyCopy", 11L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"PROCEDURE Copy", 14L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)" (yyt: ", 7L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)"): ", 3L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" VAR yyNew	: ", 13L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# ifdef SUPPORT_TVA", 19L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" VAR yyPrevTreatTVAasChild	: BOOLEAN;", 37L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# endif", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" BEGIN", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# ifdef SUPPORT_TVA", 19L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  yyPrevTreatTVAasChild := ", 27L);
Zq0A4gqDK_6();
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  ", 2L);
Zq0A4gqDK_6();
ZfM_29(Zq0A4_172, (STRING)" := FALSE;", 10L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  yyMark (yyt);", 15L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  ", 2L);
Zq0A4gqDK_6();
ZfM_29(Zq0A4_172, (STRING)" := yyPrevTreatTVAasChild;", 26L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# else", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  yyMark (yyt);", 15L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# endif", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  yyOldToNewCount := 0;", 23L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  yyCopy", 8L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)" (yyt, SYSTEM.ADR (yyNew));", 27L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  RETURN yyNew;", 15L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" END Copy", 9L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
}
if (ZpmCQ_25(ORD('k'), &Zq0A4_171) || ZpmCQ_25(ORD('='), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)"VAR yyResult	: BOOLEAN;", 23L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
}
if (ZpmCQ_25(ORD('k'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)"PROCEDURE Check", 15L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)" (yyt: ", 7L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)"): BOOLEAN;", 11L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# ifdef SUPPORT_TVA", 19L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" VAR yyPrevTreatTVAasChild	: BOOLEAN;", 37L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# endif", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" BEGIN", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# ifdef SUPPORT_TVA", 19L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  yyPrevTreatTVAasChild := ", 27L);
Zq0A4gqDK_6();
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  ", 2L);
Zq0A4gqDK_6();
ZfM_29(Zq0A4_172, (STRING)" := FALSE;", 10L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  yyMark (yyt);", 15L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  ", 2L);
Zq0A4gqDK_6();
ZfM_29(Zq0A4_172, (STRING)" := yyPrevTreatTVAasChild;", 26L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# else", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  yyMark (yyt);", 15L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# endif", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  yyResult := TRUE;", 19L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  yyCheck", 9L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)" (yyt);", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  RETURN yyResult;", 18L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" END Check", 10L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"PROCEDURE yyCheckChild2 (yyParent, yyChild: ", 44L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)"; yyType: SHORTCARD; yySelector: ARRAY OF CHAR);", 48L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" CONST yyf	= IO.StdError;", 25L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" BEGIN", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  IF (yyChild = ", 16L);
Zq0A4_192(Zq0A4_88);
ZfM_29(Zq0A4_172, (STRING)") AND ", 6L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"_CheckReportNoTree OR", 21L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"    (yyChild # ", 15L);
Zq0A4_192(Zq0A4_88);
ZfM_29(Zq0A4_172, (STRING)") AND ((yyType > yyChild^.Kind) OR (yyChild^.Kind > yyTypeRange [yyType])) THEN", 79L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   yyResult := FALSE;", 21L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   IO.WriteS (yyf, 'CheckTree error');", 38L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   IO.WriteNl (yyf);", 20L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   IO.WriteS (yyf, '   addr of parent: ');", 42L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   IO.WriteN (yyf, LONGCARD (yyParent), 8, 16);", 47L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   IO.WriteNl (yyf);", 20L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   IO.WriteS (yyf, '   name of child : ');", 42L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   IO.WriteS (yyf, yySelector);", 31L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   IO.WriteNl (yyf);", 20L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   IF yyChild = ", 16L);
Zq0A4_192(Zq0A4_88);
ZfM_29(Zq0A4_172, (STRING)" THEN", 5L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"    IO.WriteS (yyf, '   value of child: NoTree');", 49L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"    IO.WriteNl (yyf);", 21L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   ELSE", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"    IO.WriteS (yyf, '   addr of child : ');", 43L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"    IO.WriteN (yyf, LONGCARD (yyChild), 8, 16);", 47L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"    IO.WriteNl (yyf);", 21L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   END;", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   IF ", 6L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"_CheckReportNodes THEN", 22L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"    IO.WriteS (yyf, '   parent node   :');", 42L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"    IO.WriteNl (yyf);", 21L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"    Write", 9L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"Node (yyf, yyParent);", 21L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"    IO.WriteS (yyf, '   child node    :');", 42L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"    IO.WriteNl (yyf);", 21L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"    Write", 9L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"Node (yyf, yyChild);", 20L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   END;", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   IO.WriteNl (yyf);", 20L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  END;", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" END yyCheckChild2;", 19L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"PROCEDURE yyCheckChild (yyParent, yyChild: ", 43L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)"; yyType: SHORTCARD; yySelector: ARRAY OF CHAR);", 48L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" BEGIN", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  yyCheckChild2 (yyParent, yyChild, yyType, yySelector);", 56L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  yyCheck", 9L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)" (yyChild);", 11L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" END yyCheckChild;", 18L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"PROCEDURE yyCheck", 17L);
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
ZfM_29(Zq0A4_172, (STRING)" THEN IF ", 9L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"_CheckReportNoTree THEN yyResult := FALSE; END; RETURN; END;", 60L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   IF yyt^.yyHead.yyMark = 0 THEN RETURN; END;", 46L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   yyt^.yyHead.yyMark := 0;", 27L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   CASE yyt^.Kind OF", 20L);
ZfM_33(Zq0A4_172);
Zq0A4_184(W_12->Y13, (Zq0A4_170)Z235);
ZfM_29(Zq0A4_172, (STRING)"   ELSE RETURN;", 15L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   END;", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  END;", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" END yyCheck", 12L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
}
if (ZpmCQ_25(ORD('^'), &Zq0A4_171)) {
Zq0A4gqDK_9(Z190);
}
if (ZpmCQ_25(ORD('q'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)"CONST yyyWrite = 1; yyyRead = 2; yyyQuit = 3;", 45L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"VAR yyString	: ARRAY [0..31] OF CHAR;", 37L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"VAR yyyLength	: INTEGER;", 24L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"VAR yyCh	: CHAR;", 16L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"VAR yyState	: INTEGER;", 22L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"PROCEDURE yyyIsEqual (yya: ARRAY OF CHAR): BOOLEAN;", 51L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" VAR yyi	: INTEGER;", 19L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" BEGIN", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  IF (yyyLength >= 0) AND (yyString [yyyLength] = ' ') THEN", 59L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   IF yyyLength - 1 # INTEGER (HIGH (yya)) THEN RETURN FALSE; END;", 66L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   FOR yyi := 0 TO yyyLength - 1 DO", 35L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"    IF yyString [yyi] # yya [yyi] THEN RETURN FALSE; END;", 57L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   END;", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  ELSE", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   IF yyyLength > INTEGER (HIGH (yya)) THEN RETURN FALSE; END;", 62L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   FOR yyi := 0 TO yyyLength DO", 31L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"    IF yyString [yyi] # yya [yyi] THEN RETURN FALSE; END;", 57L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   END;", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  END;", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  RETURN TRUE;", 14L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" END yyyIsEqual;", 16L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"PROCEDURE yyyIsEqualGoto (): BOOLEAN;", 37L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" VAR yyi	: INTEGER;", 19L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" BEGIN", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  yyi := 0;", 11L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  WHILE (yyi <= yyyLength) AND (yyString [yyi] = ' ') DO INC (yyi); END;", 72L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  IF (yyi <= yyyLength) AND (yyString [yyi] = 'g') THEN INC (yyi); ELSE RETURN FALSE; END;", 90L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  IF (yyi <= yyyLength) AND (yyString [yyi] = 'o') THEN INC (yyi); ELSE RETURN FALSE; END;", 90L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  IF (yyi <= yyyLength) AND (yyString [yyi] = 't') THEN INC (yyi); ELSE RETURN FALSE; END;", 90L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  IF (yyi <= yyyLength) AND (yyString [yyi] = 'o') THEN INC (yyi); ELSE RETURN FALSE; END;", 90L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  IF (yyi <= yyyLength) AND (yyString [yyi] = ' ') THEN INC (yyi); ELSE RETURN FALSE; END;", 90L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  WHILE (yyi <= yyyLength) AND (yyString [yyi] = ' ') DO INC (yyi); END;", 72L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  yyLine := 0;", 14L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  WHILE (yyi <= yyyLength) AND ('0' <= yyString [yyi]) AND (yyString [yyi] <= '9') DO", 85L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   yyLine := yyLine * 10 + ORD (yyString [yyi]) - ORD ('0'); INC (yyi); END;", 76L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  RETURN TRUE;", 14L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" END yyyIsEqualGoto;", 20L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"PROCEDURE yyQuery", 17L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)" (yyt: ", 7L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)");", 2L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" BEGIN", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  yyState := yyyWrite;", 22L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  LOOP", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   CASE yyState OF", 18L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   | yyyQuit : RETURN;", 22L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   | yyyWrite: Write", 20L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"Node (IO.StdOutput, yyt); yyState := yyyRead;", 45L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   | yyyRead : IO.WriteS (IO.StdOutput, '? '); yyyLength := -1; yyCh := IO.ReadC (IO.StdInput);", 95L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"    WHILE yyCh # 12C DO INC (yyyLength); yyString [yyyLength] := yyCh; yyCh := IO.ReadC (IO.StdInput); END;", 107L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"    IF    yyyIsEqual ('parent') THEN yyState := yyyWrite; RETURN;", 65L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"    ELSIF yyyIsEqual ('quit'  ) THEN yyState := yyyQuit ; RETURN;", 65L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"    ELSIF yyyIsEqualGoto () THEN", 32L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"     yyFile := Idents.NoIdent;", 30L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"     yyTheNode := yyTheTree;", 28L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"     yyCurLine := MAX (CARDINAL);", 33L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"     Traverse", 13L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"TD (yyTheTree, yySearch2);", 26L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"     yyQuery", 12L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)" (yyTheNode);", 13L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"    ELSIF yyt # ", 16L);
Zq0A4_192(Zq0A4_88);
ZfM_29(Zq0A4_172, (STRING)" THEN", 5L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"     CASE yyt^.Kind OF", 22L);
ZfM_33(Zq0A4_172);
Zq0A4_184(W_12->Y13, (Zq0A4_170)Z236);
ZfM_29(Zq0A4_172, (STRING)"     ELSE", 9L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"     END;", 9L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"    END;", 8L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   END;", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  END;", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" END yyQuery", 12L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"PROCEDURE Query", 15L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)" (yyt: ", 7L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)");", 2L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" BEGIN", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  yyTheTree := yyt; yyQuery", 27L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)" (yyt);", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" END Query", 10L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
}
if (ZpmCQ_25(ORD('='), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)"PROCEDURE yyIsEqual (yya, yyb: ARRAY OF SYSTEM.BYTE): BOOLEAN;", 62L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" VAR yyi	: INTEGER;", 19L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" BEGIN", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  FOR yyi := 0 TO INTEGER (HIGH (yya)) DO", 41L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   IF yya [yyi] # yyb [yyi] THEN RETURN FALSE; END;", 51L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  END;", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  RETURN TRUE;", 14L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" END yyIsEqual;", 15L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"PROCEDURE yyIsEqual", 19L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)" (yyt1, yyt2: ", 14L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)");", 2L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" BEGIN", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  LOOP", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   IF (yyt1 = yyt2) OR NOT yyResult THEN RETURN; END;", 53L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   IF (yyt1 = ", 14L);
Zq0A4_192(Zq0A4_88);
ZfM_29(Zq0A4_172, (STRING)") OR (yyt2 = ", 13L);
Zq0A4_192(Zq0A4_88);
ZfM_29(Zq0A4_172, (STRING)") OR (yyt1^.Kind # yyt2^.Kind) THEN yyResult := FALSE; RETURN; END;", 67L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   CASE yyt1^.Kind OF", 21L);
ZfM_33(Zq0A4_172);
Zq0A4_184(W_12->Y13, (Zq0A4_170)Z237);
ZfM_29(Zq0A4_172, (STRING)"   ELSE RETURN;", 15L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   END;", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  END;", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" END yyIsEqual", 14L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"PROCEDURE IsEqual", 17L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)" (yyt1, yyt2: ", 14L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)"): BOOLEAN;", 11L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" BEGIN", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  yyResult := TRUE;", 19L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  yyIsEqual", 11L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)" (yyt1, yyt2);", 14L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  RETURN yyResult;", 18L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" END IsEqual", 12L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
}
Zq0A4gqDK_10(Z190);
if (ZpmCQ_25(ORD('L'), &Zq0A4_171)) {
Z178 = 0;
Zq0A4_184(W_12->Y13, (Zq0A4_170)Z206);
ZfM_29(Zq0A4_172, (STRING)"PROCEDURE Init", 14L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)" (yyt: ", 7L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)");", 2L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" BEGIN", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  LOOP", 6L);
ZfM_33(Zq0A4_172);
{
SHORTCARD B_5 = 0, B_6 = (Z178 - 1) / Zq0A4gqDJ_0;

if (B_5 <= B_6)
for (Z177 = B_5;; Z177 += 1) {
ZfM_29(Zq0A4_172, (STRING)"   yyt^.yyHead.yyIsComp", 23L);
Zq0A4_195((LONGINT)Z177);
ZfM_29(Zq0A4_172, (STRING)" := {};", 7L);
ZfM_33(Zq0A4_172);
if (ZpmCQ_25(ORD('5'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)"   yyt^.yyHead.yyIsDone", 23L);
Zq0A4_195((LONGINT)Z177);
ZfM_29(Zq0A4_172, (STRING)" := {};", 7L);
ZfM_33(Zq0A4_172);
}
if (Z177 >= B_6) break;
}
}
ZfM_29(Zq0A4_172, (STRING)"   CASE yyt^.Kind OF", 20L);
ZfM_33(Zq0A4_172);
Zq0A4_184(W_12->Y13, (Zq0A4_170)Z238);
ZfM_29(Zq0A4_172, (STRING)"   ELSE RETURN;", 15L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   END;", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  END;", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" END Init", 9L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
}
if (!ZpmCQ_25(ORD('<'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)"PROCEDURE Configure", 19L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)" (VAR yyParameter, yyValue: ARRAY OF CHAR);", 43L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" PROCEDURE yyIsEqual (VAR yya, yyb: ARRAY OF CHAR): BOOLEAN;", 60L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  VAR yyi: INTEGER;", 19L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  BEGIN", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   IF HIGH (yya) # HIGH (yyb) THEN RETURN FALSE; END;", 53L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   FOR yyi := 0 TO INTEGER (HIGH (yya)) DO", 42L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"    IF yya [yyi] # yyb [yyi] THEN RETURN FALSE; END;", 52L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   END;", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   RETURN TRUE;", 15L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  END yyIsEqual;", 16L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" VAR yyString: Strings.tString;", 31L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" BEGIN", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  Strings.ArrayToString (yyValue, yyString);", 44L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"     IF yyIsEqual (yyParameter, \"CheckReportNoTree\") THEN", 57L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   ", 3L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"_CheckReportNoTree := Strings.StringToInt (yyString) # 0;", 57L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  ELSIF yyIsEqual (yyParameter, \"CheckReportNodes\") THEN", 56L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   ", 3L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"_CheckReportNodes := Strings.StringToInt (yyString) # 0;", 56L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  ELSIF yyIsEqual (yyParameter, \"DrawBoxHeight\") THEN", 53L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   ", 3L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"_DrawBoxHeight := Strings.StringToInt (yyString);", 49L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  ELSIF yyIsEqual (yyParameter, \"DrawBoxWidth\") THEN", 52L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   ", 3L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"_DrawBoxWidth := Strings.StringToInt (yyString);", 48L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  ELSIF yyIsEqual (yyParameter, \"DrawDepth\") THEN", 49L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   ", 3L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"_DrawDepth := Strings.StringToInt (yyString);", 45L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  ELSIF yyIsEqual (yyParameter, \"DrawLength\") THEN", 50L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   ", 3L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"_DrawLength := Strings.StringToInt (yyString);", 46L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  ELSIF yyIsEqual (yyParameter, \"DrawFileName\") THEN", 52L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   Strings.Assign (", 19L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"_DrawFileName, yyString);", 25L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  ELSIF yyIsEqual (yyParameter, \"TreatTVAasChild\") THEN", 55L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# ifdef SUPPORT_TVA", 19L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   ", 3L);
Zq0A4gqDK_6();
ZfM_29(Zq0A4_172, (STRING)" := Strings.StringToInt (yyString) # 0;", 39L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# endif", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  ELSE", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   Errors.ErrorMessageI (Errors.ConfigureUnknownParam, Errors.Error,", 68L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" Position.NoPosition, Errors.Array, SYSTEM.ADR (yyParameter));", 62L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" END;", 5L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" END Configure", 14L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
}
ZfM_29(Zq0A4_172, (STRING)"PROCEDURE Begin", 15L);
Zq0A4_192(Zq0A4_85);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" BEGIN", 6L);
ZfM_33(Zq0A4_172);
Zq0A4gqDK_2(W_12->Y6->U_1.V_17.Y16.Y11);
ZqnGVQ_5(Zq0A4_172, W_12->Y6->U_1.V_17.Y16.Y5);
Z175 = W_12->Y14;
while (Z175->U_1.V_1.Y0 == Zq0A4_144) {
Zq0A4gqDK_2(Z175->U_1.V_49.Y48.Y6->U_1.V_17.Y16.Y11);
ZqnGVQ_5(Zq0A4_172, Z175->U_1.V_49.Y48.Y6->U_1.V_17.Y16.Y5);
Z175 = Z175->U_1.V_49.Y48.Y12;
}
ZfM_29(Zq0A4_172, (STRING)" END Begin", 10L);
Zq0A4_192(Zq0A4_85);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"PROCEDURE Close", 15L);
Zq0A4_192(Zq0A4_85);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" BEGIN", 6L);
ZfM_33(Zq0A4_172);
Zq0A4gqDK_2(W_12->Y6->U_1.V_17.Y16.Y12);
ZqnGVQ_5(Zq0A4_172, W_12->Y6->U_1.V_17.Y16.Y6);
Z175 = W_12->Y14;
while (Z175->U_1.V_1.Y0 == Zq0A4_144) {
Zq0A4gqDK_2(Z175->U_1.V_49.Y48.Y6->U_1.V_17.Y16.Y12);
ZqnGVQ_5(Zq0A4_172, Z175->U_1.V_49.Y48.Y6->U_1.V_17.Y16.Y6);
Z175 = Z175->U_1.V_49.Y48.Y12;
}
ZfM_29(Zq0A4_172, (STRING)" END Close", 10L);
Zq0A4_192(Zq0A4_85);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
if (!ZpmCQ_25(ORD('<'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)"PROCEDURE xxExit;", 17L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" BEGIN", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  IO.CloseIO; rSystem.rExit (1);", 32L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" END xxExit;", 12L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
}
ZfM_29(Zq0A4_172, (STRING)"BEGIN", 5L);
ZfM_33(Zq0A4_172);
if (ZpmCQ_25(ORD('r'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)" yyIsInitialized := FALSE;", 26L);
ZfM_33(Zq0A4_172);
}
if (!ZpmCQ_25(ORD('<'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)" yyBlockList	:= NIL;", 20L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" yyPoolFreePtr	:= NIL;", 22L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" yyPoolMaxPtr	:= NIL;", 21L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" HeapUsed	:= 0;", 15L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" yyExit	:= xxExit;", 18L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" ", 1L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"_CheckReportNoTree	:= TRUE;", 27L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" ", 1L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"_CheckReportNodes	:= TRUE;", 26L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" ", 1L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"_DrawDepth	:= 6;", 16L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" ", 1L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"_DrawLength	:= 256;", 19L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" ", 1L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"_DrawBoxWidth	:= 60;", 20L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" ", 1L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"_DrawBoxHeight	:= 20;", 21L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" Strings.AssignEmpty (", 22L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"_DrawFileName);", 15L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# ifdef SUPPORT_TVA", 19L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" ", 1L);
Zq0A4gqDK_6();
ZfM_29(Zq0A4_172, (STRING)" := FALSE;", 10L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# endif", 7L);
ZfM_33(Zq0A4_172);
Zq0A4_184(W_12->Y13, (Zq0A4_170)Z243);
ZfM_29(Zq0A4_172, (STRING)" yyMaxSize	:= 0;", 16L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" FOR yyi := 1 TO ", 17L);
Zq0A4_195(Zq0A4_68);
ZfM_29(Zq0A4_172, (STRING)" DO", 3L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  yyNodeSize [yyi] := LONGINT (BITSET (yyNodeSize [yyi] + CARDINAL (General.MaxAlign) - 1) * General.AlignMask);", 112L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  yyMaxSize := General.Max (yyNodeSize [yyi], yyMaxSize);", 57L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" END;", 5L);
ZfM_33(Zq0A4_172);
Zq0A4_184(W_12->Y13, (Zq0A4_170)Z244);
}
if (ZpmCQ_25(ORD(';'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)" yyRecursionLevel := 0;", 23L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" yyTreeStoreSize := yyInitTreeStoreSize;", 40L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" DynArray.MakeArray (yyTreeStorePtr, yyTreeStoreSize, SYSTEM.TSIZE (", 68L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)"));", 3L);
ZfM_33(Zq0A4_172);
}
if (ZpmCQ_25(ORD('y'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)" yyOldToNewStoreSize := yyInitOldToNewStoreSize;", 48L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" DynArray.MakeArray (yyOldToNewStorePtr, yyOldToNewStoreSize, SYSTEM.TSIZE (yytOldToNew));", 90L);
ZfM_33(Zq0A4_172);
}
ZfM_29(Zq0A4_172, (STRING)" Begin", 6L);
Zq0A4_192(Zq0A4_85);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"END ", 4L);
Zq0A4_192(Zq0A4_85);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
ZfM_33(Zq0A4_172);
return;
}
}
}

static void Z225
# ifdef HAVE_ARGS
(Zq0A4_153 Z190)
# else
(Z190)
Zq0A4_153 Z190;
# endif
{
struct S_25 Z191;

if (Z190 == Zq0A4_97) {
return;
}
if (Z190 != NIL && Z190->U_1.V_1.Y0 == Zq0A4_100) {
for (;;) {
{
register Zq0A4_226 *W_13 = &Z190->U_1.V_5.Y4;

if (!((Zq0A4_177 & W_13->Y2) == 0X0L)) {
goto EXIT_10;
}
ZfM_29(Zq0A4_172, (STRING)"PROCEDURE n", 11L);
Zq0A4_192(W_13->Y1);
ZfM_29(Zq0A4_172, (STRING)" (): ", 5L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" VAR yyt	: ", 11L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" BEGIN", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  yyALLOC (yyt, yyNodeSize [", 28L);
Zq0A4_192(W_13->Y1);
ZfM_29(Zq0A4_172, (STRING)"])", 2L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  ", 2L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"_InitHead (yyt, ", 16L);
Zq0A4_192(W_13->Y1);
ZfM_29(Zq0A4_172, (STRING)")", 1L);
ZfM_33(Zq0A4_172);
Z174 = W_13->Y1;
Zq0A4_185(Z190, (Zq0A4_170)Z225);
ZfM_29(Zq0A4_172, (STRING)"  RETURN yyt;", 13L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" END n", 6L);
Zq0A4_192(W_13->Y1);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
return;
}
} EXIT_10:;
}
if (Z190 != NIL && Z190->U_1.V_1.Y0 == Zq0A4_105) {
{
register Zq0A4_231 *W_14 = &Z190->U_1.V_10.Y9;

ZfM_29(Zq0A4_172, (STRING)"  yyt^.", 7L);
Zq0A4_192(Z174);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(W_14->Y3);
ZfM_29(Zq0A4_172, (STRING)" := ", 4L);
Zq0A4_192(Zq0A4_88);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
return;
}
}
if (Z190 != NIL && Z190->U_1.V_1.Y0 == Zq0A4_106) {
for (;;) {
{
register Zq0A4_232 *W_15 = &Z190->U_1.V_11.Y10;

if (!((Zq0A4_176 & W_15->Y6) == 0X0L)) {
goto EXIT_11;
}
ZfM_29(Zq0A4_172, (STRING)"  begin", 7L);
Zq0A4_192(W_15->Y4);
ZfM_29(Zq0A4_172, (STRING)"(yyt^.", 6L);
Zq0A4_192(Z174);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(W_15->Y3);
ZfM_29(Zq0A4_172, (STRING)")", 1L);
ZfM_33(Zq0A4_172);
return;
}
} EXIT_11:;
}
}

static void Z226
# ifdef HAVE_ARGS
(Zq0A4_153 Z190)
# else
(Z190)
Zq0A4_153 Z190;
# endif
{
struct S_24 Z191;

if (Z190 == Zq0A4_97) {
return;
}
if (Z190 != NIL && Z190->U_1.V_1.Y0 == Zq0A4_100) {
for (;;) {
{
register Zq0A4_226 *W_16 = &Z190->U_1.V_5.Y4;

if (!((Zq0A4_177 & W_16->Y2) == 0X0L)) {
goto EXIT_12;
}
Z211(Z190);
ZfM_29(Zq0A4_172, (STRING)" VAR yyt	: ", 11L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" BEGIN", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  yyALLOC (yyt, yyNodeSize [", 28L);
Zq0A4_192(W_16->Y1);
ZfM_29(Zq0A4_172, (STRING)"])", 2L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  ", 2L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"_InitHead (yyt, ", 16L);
Zq0A4_192(W_16->Y1);
ZfM_29(Zq0A4_172, (STRING)")", 1L);
ZfM_33(Zq0A4_172);
if (((SET_ELEM (Zq0A4_44) | SET_ELEM (Zq0A4_45)) & W_16->Y2) != 0X0L) {
ZfM_29(Zq0A4_172, (STRING)"  WITH yyt^.", 12L);
Zq0A4_192(W_16->Y1);
ZfM_29(Zq0A4_172, (STRING)" DO", 3L);
ZfM_33(Zq0A4_172);
Zq0A4_185(Z190, (Zq0A4_170)Z226);
ZfM_29(Zq0A4_172, (STRING)"  END;", 6L);
ZfM_33(Zq0A4_172);
}
ZfM_29(Zq0A4_172, (STRING)"  RETURN yyt;", 13L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" END m", 6L);
Zq0A4_192(W_16->Y1);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
return;
}
} EXIT_12:;
}
if (Z190 != NIL && Z190->U_1.V_1.Y0 == Zq0A4_105) {
{
register Zq0A4_231 *W_17 = &Z190->U_1.V_10.Y9;

if (IN(Zq0A4_8, W_17->Y6)) {
if (W_17->Y7 == Zp1PEAFi_0) {
ZfM_29(Zq0A4_172, (STRING)"   ", 3L);
Zq0A4_192(W_17->Y3);
ZfM_29(Zq0A4_172, (STRING)" := p", 5L);
Zq0A4_192(W_17->Y3);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
} else {
ZfM_29(Zq0A4_172, (STRING)"   ", 3L);
Zq0A4_192(W_17->Y3);
ZfM_29(Zq0A4_172, (STRING)" :=", 3L);
Zp1PEAFi_6(Zq0A4_172, W_17->Y7);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
}
} else {
ZfM_29(Zq0A4_172, (STRING)"   ", 3L);
Zq0A4_192(W_17->Y3);
ZfM_29(Zq0A4_172, (STRING)" := ", 4L);
Zq0A4_192(Zq0A4_88);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
}
return;
}
}
if (Z190 != NIL && Z190->U_1.V_1.Y0 == Zq0A4_106) {
for (;;) {
{
register Zq0A4_232 *W_18 = &Z190->U_1.V_11.Y10;

if (!((Zq0A4_176 & W_18->Y6) == 0X0L)) {
goto EXIT_13;
}
if (IN(Zq0A4_8, W_18->Y6)) {
if (W_18->Y7 == Zp1PEAFi_0) {
ZfM_29(Zq0A4_172, (STRING)"   ", 3L);
Zq0A4_192(W_18->Y3);
ZfM_29(Zq0A4_172, (STRING)" := p", 5L);
Zq0A4_192(W_18->Y3);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
} else {
ZfM_29(Zq0A4_172, (STRING)"   ", 3L);
Zq0A4_192(W_18->Y3);
ZfM_29(Zq0A4_172, (STRING)" :=", 3L);
Zp1PEAFi_6(Zq0A4_172, W_18->Y7);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
}
} else {
ZfM_29(Zq0A4_172, (STRING)"   begin", 8L);
Zq0A4_192(W_18->Y4);
ZfM_29(Zq0A4_172, (STRING)"(", 1L);
Zq0A4_192(W_18->Y3);
ZfM_29(Zq0A4_172, (STRING)")", 1L);
ZfM_33(Zq0A4_172);
}
return;
}
} EXIT_13:;
}
}

static void Z227
# ifdef HAVE_ARGS
(Zq0A4_153 Z190)
# else
(Z190)
Zq0A4_153 Z190;
# endif
{
struct S_23 Z191;

if (Z190 == Zq0A4_97) {
return;
}
if (Z190 != NIL && Z190->U_1.V_1.Y0 == Zq0A4_100) {
for (;;) {
{
register Zq0A4_226 *W_19 = &Z190->U_1.V_5.Y4;

if (!((Zq0A4_177 & W_19->Y2) == 0X0L && IN(Zq0A4_44, W_19->Y2))) {
goto EXIT_14;
}
ZfM_29(Zq0A4_172, (STRING)"| ", 2L);
Zq0A4_192(W_19->Y1);
ZfM_29(Zq0A4_172, (STRING)":", 1L);
ZfM_33(Zq0A4_172);
Zq0A4gqDK_8(Z190);
Z174 = W_19->Y1;
ZfM_29(Zq0A4_172, (STRING)"yyStack [yyn] := yyt^.", 22L);
Zq0A4_192(Z174);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(Zq0A4gqDK_1->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)"; INC (yyn);", 12L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"yyt^.", 5L);
Zq0A4_192(Z174);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(Zq0A4gqDK_1->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)" := ", 4L);
Zq0A4_192(Zq0A4_88);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
Zq0A4_185(Z190, (Zq0A4_170)Z227);
return;
}
} EXIT_14:;
}
if (Z190 != NIL && Z190->U_1.V_1.Y0 == Zq0A4_105) {
for (;;) {
{
register Zq0A4_231 *W_20 = &Z190->U_1.V_10.Y9;

if (!(Z190 != Zq0A4gqDK_1)) {
goto EXIT_15;
}
ZfM_29(Zq0A4_172, (STRING)"yyStack [yyn] := yyt^.", 22L);
Zq0A4_192(Z174);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(W_20->Y3);
ZfM_29(Zq0A4_172, (STRING)"; INC (yyn);", 12L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"yyt^.", 5L);
Zq0A4_192(Z174);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(W_20->Y3);
ZfM_29(Zq0A4_172, (STRING)" := ", 4L);
Zq0A4_192(Zq0A4_88);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
return;
}
} EXIT_15:;
}
}

static void Z228
# ifdef HAVE_ARGS
(Zq0A4_153 Z190)
# else
(Z190)
Zq0A4_153 Z190;
# endif
{
struct S_22 Z191;

if (Z190 == Zq0A4_97) {
return;
}
if (Z190 != NIL && Z190->U_1.V_1.Y0 == Zq0A4_100) {
for (;;) {
{
register Zq0A4_226 *W_21 = &Z190->U_1.V_5.Y4;

if (!((Zq0A4_177 & W_21->Y2) == 0X0L && IN(Zq0A4_45, W_21->Y2))) {
goto EXIT_16;
}
ZfM_29(Zq0A4_172, (STRING)"| ", 2L);
Zq0A4_192(W_21->Y1);
ZfM_29(Zq0A4_172, (STRING)":", 1L);
ZfM_33(Zq0A4_172);
Z174 = W_21->Y1;
Zq0A4_185(Z190, (Zq0A4_170)Z228);
return;
}
} EXIT_16:;
}
if (Z190 != NIL && Z190->U_1.V_1.Y0 == Zq0A4_106) {
for (;;) {
{
register Zq0A4_232 *W_22 = &Z190->U_1.V_11.Y10;

if (!((Zq0A4_176 & W_22->Y6) == 0X0L)) {
goto EXIT_17;
}
ZfM_29(Zq0A4_172, (STRING)"close", 5L);
Zq0A4_192(W_22->Y4);
ZfM_29(Zq0A4_172, (STRING)" (yyt^.", 7L);
Zq0A4_192(Z174);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(W_22->Y3);
ZfM_29(Zq0A4_172, (STRING)")", 1L);
ZfM_33(Zq0A4_172);
return;
}
} EXIT_17:;
}
}

static void Z229
# ifdef HAVE_ARGS
(Zq0A4_153 Z190)
# else
(Z190)
Zq0A4_153 Z190;
# endif
{
struct S_21 Z191;

if (Z190 == Zq0A4_97) {
return;
}
if (Z190 != NIL && Z190->U_1.V_1.Y0 == Zq0A4_100) {
for (;;) {
{
register Zq0A4_226 *W_23 = &Z190->U_1.V_5.Y4;

if (!((Zq0A4_177 & W_23->Y2) == 0X0L && IN(Zq0A4_44, W_23->Y2))) {
goto EXIT_18;
}
ZfM_29(Zq0A4_172, (STRING)"| ", 2L);
Zq0A4_192(W_23->Y1);
ZfM_29(Zq0A4_172, (STRING)":", 1L);
ZfM_33(Zq0A4_172);
Zq0A4gqDK_8(Z190);
Z174 = W_23->Y1;
Zq0A4_185(Z190, (Zq0A4_170)Z229);
ZfM_29(Zq0A4_172, (STRING)"yyt := yyt^.", 12L);
Zq0A4_192(Z174);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(Zq0A4gqDK_1->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
return;
}
} EXIT_18:;
}
if (Z190 != NIL && Z190->U_1.V_1.Y0 == Zq0A4_105) {
for (;;) {
{
register Zq0A4_231 *W_24 = &Z190->U_1.V_10.Y9;

if (!(Z190 != Zq0A4gqDK_1)) {
goto EXIT_19;
}
ZfM_29(Zq0A4_172, (STRING)"yyTraverse", 10L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"TD (yyt^.", 9L);
Zq0A4_192(Z174);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(W_24->Y3);
ZfM_29(Zq0A4_172, (STRING)");", 2L);
ZfM_33(Zq0A4_172);
return;
}
} EXIT_19:;
}
}

static void Z230
# ifdef HAVE_ARGS
(Zq0A4_153 Z190)
# else
(Z190)
Zq0A4_153 Z190;
# endif
{
struct S_20 Z191;

if (Z190 == Zq0A4_97) {
return;
}
if (Z190 != NIL && Z190->U_1.V_1.Y0 == Zq0A4_100) {
for (;;) {
{
register Zq0A4_226 *W_25 = &Z190->U_1.V_5.Y4;

if (!((Zq0A4_177 & W_25->Y2) == 0X0L && IN(Zq0A4_44, W_25->Y2))) {
goto EXIT_20;
}
ZfM_29(Zq0A4_172, (STRING)"| ", 2L);
Zq0A4_192(W_25->Y1);
ZfM_29(Zq0A4_172, (STRING)":", 1L);
ZfM_33(Zq0A4_172);
Zq0A4gqDK_8(Z190);
Z174 = W_25->Y1;
ZfM_29(Zq0A4_172, (STRING)"INC (yyStackPtr); yyStack^ [yyStackPtr] := yyt^.", 48L);
Zq0A4_192(Z174);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(Zq0A4gqDK_1->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
Zq0A4_185(Z190, (Zq0A4_170)Z230);
return;
}
} EXIT_20:;
}
if (Z190 != NIL && Z190->U_1.V_1.Y0 == Zq0A4_105) {
for (;;) {
{
register Zq0A4_231 *W_26 = &Z190->U_1.V_10.Y9;

if (!(Z190 != Zq0A4gqDK_1)) {
goto EXIT_21;
}
ZfM_29(Zq0A4_172, (STRING)"INC (yyStackPtr); yyStack^ [yyStackPtr] := yyt^.", 48L);
Zq0A4_192(Z174);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(W_26->Y3);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
return;
}
} EXIT_21:;
}
}

static void Z231
# ifdef HAVE_ARGS
(Zq0A4_153 Z190)
# else
(Z190)
Zq0A4_153 Z190;
# endif
{
struct S_19 Z191;

if (Z190 == Zq0A4_97) {
return;
}
if (Z190 != NIL && Z190->U_1.V_1.Y0 == Zq0A4_100) {
for (;;) {
{
register Zq0A4_226 *W_27 = &Z190->U_1.V_5.Y4;

if (!((Zq0A4_177 & W_27->Y2) == 0X0L)) {
goto EXIT_22;
}
Z174 = W_27->Y1;
Zq0A4_185(Z190, (Zq0A4_170)Z231);
return;
}
} EXIT_22:;
}
if (Z190 != NIL && Z190->U_1.V_1.Y0 == Zq0A4_105) {
for (;;) {
{
register Zq0A4_231 *W_28 = &Z190->U_1.V_10.Y9;

if (!IN(Zq0A4_3, W_28->Y6)) {
goto EXIT_23;
}
ZfM_29(Zq0A4_172, (STRING)"| ", 2L);
Zq0A4_192(Z174);
ZfM_29(Zq0A4_172, (STRING)": yyNext := yyOld^.", 19L);
Zq0A4_192(Z174);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(W_28->Y3);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_29(Zq0A4_172, (STRING)" yyOld^.", 8L);
Zq0A4_192(Z174);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(W_28->Y3);
ZfM_29(Zq0A4_172, (STRING)" := yyNew;", 10L);
ZfM_33(Zq0A4_172);
return;
}
} EXIT_23:;
}
}

static void Z232
# ifdef HAVE_ARGS
(Zq0A4_153 Z190)
# else
(Z190)
Zq0A4_153 Z190;
# endif
{
struct S_18 Z191;

if (Z190 == Zq0A4_97) {
return;
}
if (Z190 != NIL && Z190->U_1.V_1.Y0 == Zq0A4_100) {
for (;;) {
{
register Zq0A4_226 *W_29 = &Z190->U_1.V_5.Y4;

if (!((Zq0A4_177 & W_29->Y2) == 0X0L)) {
goto EXIT_24;
}
Z174 = W_29->Y1;
Zq0A4_185(Z190, (Zq0A4_170)Z232);
return;
}
} EXIT_24:;
}
if (Z190 != NIL && Z190->U_1.V_1.Y0 == Zq0A4_105) {
for (;;) {
{
register Zq0A4_231 *W_30 = &Z190->U_1.V_10.Y9;

if (!IN(Zq0A4_3, W_30->Y6)) {
goto EXIT_25;
}
ZfM_29(Zq0A4_172, (STRING)"| ", 2L);
Zq0A4_192(Z174);
ZfM_29(Zq0A4_172, (STRING)": yyTail^.", 10L);
Zq0A4_192(Z174);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(W_30->Y3);
ZfM_29(Zq0A4_172, (STRING)" := yyOld;", 10L);
ZfM_33(Zq0A4_172);
return;
}
} EXIT_25:;
}
}

static void Z233
# ifdef HAVE_ARGS
(Zq0A4_153 Z190)
# else
(Z190)
Zq0A4_153 Z190;
# endif
{
struct S_17 Z191;

if (Z190 == Zq0A4_97) {
return;
}
if (Z190 != NIL && Z190->U_1.V_1.Y0 == Zq0A4_100) {
for (;;) {
{
register Zq0A4_226 *W_31 = &Z190->U_1.V_5.Y4;

if (!((Zq0A4_177 & W_31->Y2) == 0X0L)) {
goto EXIT_26;
}
Z174 = W_31->Y1;
Zq0A4_185(Z190, (Zq0A4_170)Z233);
return;
}
} EXIT_26:;
}
if (Z190 != NIL && Z190->U_1.V_1.Y0 == Zq0A4_105) {
for (;;) {
{
register Zq0A4_231 *W_32 = &Z190->U_1.V_10.Y9;

if (!IN(Zq0A4_3, W_32->Y6)) {
goto EXIT_27;
}
ZfM_29(Zq0A4_172, (STRING)"| ", 2L);
Zq0A4_192(Z174);
ZfM_29(Zq0A4_172, (STRING)": yyt := yyt^.", 14L);
Zq0A4_192(Z174);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(W_32->Y3);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
return;
}
} EXIT_27:;
}
}

static void Z234
# ifdef HAVE_ARGS
(Zq0A4_153 Z190)
# else
(Z190)
Zq0A4_153 Z190;
# endif
{
struct S_16 Z191;

if (Z190 == Zq0A4_97) {
return;
}
if (Z190 != NIL && Z190->U_1.V_1.Y0 == Zq0A4_100) {
for (;;) {
{
register Zq0A4_226 *W_33 = &Z190->U_1.V_5.Y4;

if (!((Zq0A4_177 & W_33->Y2) == 0X0L)) {
goto EXIT_28;
}
ZfM_29(Zq0A4_172, (STRING)"| ", 2L);
Zq0A4_192(W_33->Y1);
ZfM_29(Zq0A4_172, (STRING)": yyNew^^.", 10L);
Zq0A4_192(W_33->Y1);
ZfM_29(Zq0A4_172, (STRING)" := yyt^.", 9L);
Zq0A4_192(W_33->Y1);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
Zq0A4gqDK_8(Z190);
Z174 = W_33->Y1;
Zq0A4_185(Z190, (Zq0A4_170)Z234);
if (Zq0A4gqDK_1 == Zq0A4_97) {
ZfM_29(Zq0A4_172, (STRING)"RETURN;", 7L);
ZfM_33(Zq0A4_172);
} else {
ZfM_29(Zq0A4_172, (STRING)"yyt := yyt^.", 12L);
Zq0A4_192(W_33->Y1);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(Zq0A4gqDK_1->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"yyNew := SYSTEM.ADR (yyNew^^.", 29L);
Zq0A4_192(W_33->Y1);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(Zq0A4gqDK_1->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)");", 2L);
ZfM_33(Zq0A4_172);
}
return;
}
} EXIT_28:;
}
if (Z190 != NIL && Z190->U_1.V_1.Y0 == Zq0A4_105) {
for (;;) {
{
register Zq0A4_231 *W_34 = &Z190->U_1.V_10.Y9;

if (!(Z190 != Zq0A4gqDK_1)) {
goto EXIT_29;
}
ZfM_29(Zq0A4_172, (STRING)"yyCopy", 6L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)" (yyt^.", 7L);
Zq0A4_192(Z174);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(W_34->Y3);
ZfM_29(Zq0A4_172, (STRING)", SYSTEM.ADR (yyNew^^.", 22L);
Zq0A4_192(Z174);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(W_34->Y3);
ZfM_29(Zq0A4_172, (STRING)"));", 3L);
ZfM_33(Zq0A4_172);
return;
}
} EXIT_29:;
}
if (Z190 != NIL && Z190->U_1.V_1.Y0 == Zq0A4_106) {
for (;;) {
{
register Zq0A4_232 *W_35 = &Z190->U_1.V_11.Y10;

if (!((Zq0A4_176 & W_35->Y6) == 0X0L)) {
goto EXIT_30;
}
ZfM_29(Zq0A4_172, (STRING)"copy", 4L);
Zq0A4_192(W_35->Y4);
ZfM_29(Zq0A4_172, (STRING)" (yyNew^^.", 10L);
Zq0A4_192(Z174);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(W_35->Y3);
ZfM_29(Zq0A4_172, (STRING)", ", 2L);
ZfM_29(Zq0A4_172, (STRING)"yyt^.", 5L);
Zq0A4_192(Z174);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(W_35->Y3);
ZfM_29(Zq0A4_172, (STRING)")", 1L);
ZfM_33(Zq0A4_172);
return;
}
} EXIT_30:;
}
}

static void Z235
# ifdef HAVE_ARGS
(Zq0A4_153 Z190)
# else
(Z190)
Zq0A4_153 Z190;
# endif
{
struct S_15 Z191;

if (Z190 == Zq0A4_97) {
return;
}
if (Z190 != NIL && Z190->U_1.V_1.Y0 == Zq0A4_100) {
for (;;) {
{
register Zq0A4_226 *W_36 = &Z190->U_1.V_5.Y4;

if (!((Zq0A4_177 & W_36->Y2) == 0X0L && IN(Zq0A4_44, W_36->Y2))) {
goto EXIT_31;
}
ZfM_29(Zq0A4_172, (STRING)"| ", 2L);
Zq0A4_192(W_36->Y1);
ZfM_29(Zq0A4_172, (STRING)":", 1L);
ZfM_33(Zq0A4_172);
Zq0A4gqDK_8(Z190);
Z174 = W_36->Y1;
Zq0A4_185(Z190, (Zq0A4_170)Z235);
ZfM_29(Zq0A4_172, (STRING)"yyCheckChild2 (yyt, yyt^.", 25L);
Zq0A4_192(Z174);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(Zq0A4gqDK_1->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)", ", 2L);
Zq0A4_192(Zq0A4gqDK_1->U_1.V_10.Y9.Y4);
ZfM_29(Zq0A4_172, (STRING)", \"", 3L);
Zq0A4_192(Zq0A4gqDK_1->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)"\");", 3L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"yyt := yyt^.", 12L);
Zq0A4_192(Z174);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(Zq0A4gqDK_1->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
return;
}
} EXIT_31:;
}
if (Z190 != NIL && Z190->U_1.V_1.Y0 == Zq0A4_105) {
for (;;) {
{
register Zq0A4_231 *W_37 = &Z190->U_1.V_10.Y9;

if (!(Z190 != Zq0A4gqDK_1)) {
goto EXIT_32;
}
ZfM_29(Zq0A4_172, (STRING)"yyCheckChild (yyt, yyt^.", 24L);
Zq0A4_192(Z174);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(W_37->Y3);
ZfM_29(Zq0A4_172, (STRING)", ", 2L);
Zq0A4_192(W_37->Y4);
ZfM_29(Zq0A4_172, (STRING)", \"", 3L);
Zq0A4_192(W_37->Y3);
ZfM_29(Zq0A4_172, (STRING)"\");", 3L);
ZfM_33(Zq0A4_172);
return;
}
} EXIT_32:;
}
}

static void Z244
# ifdef HAVE_ARGS
(Zq0A4_153 Z190)
# else
(Z190)
Zq0A4_153 Z190;
# endif
{
struct S_14 Z191;

if (Z190 == Zq0A4_97) {
return;
}
if (Z190 != NIL && Z190->U_1.V_1.Y0 == Zq0A4_100) {
for (;;) {
{
register Zq0A4_226 *W_38 = &Z190->U_1.V_5.Y4;

if (!((Zq0A4_177 & W_38->Y2) == 0X0L)) {
goto EXIT_33;
}
Z173 = W_38->Y1;
Zq0A4_184(W_38->Y4, (Zq0A4_170)Z246);
ZfM_29(Zq0A4_172, (STRING)" yyTypeRange [", 14L);
Zq0A4_192(W_38->Y1);
ZfM_29(Zq0A4_172, (STRING)"] := ", 5L);
Zq0A4_192(Z173);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
return;
}
} EXIT_33:;
}
}

static void Z246
# ifdef HAVE_ARGS
(Zq0A4_153 Z190)
# else
(Z190)
Zq0A4_153 Z190;
# endif
{
struct S_13 Z191;

if (Z190 == Zq0A4_97) {
return;
}
if (Z190 != NIL && Z190->U_1.V_1.Y0 == Zq0A4_100) {
{
register Zq0A4_226 *W_39 = &Z190->U_1.V_5.Y4;

Z173 = W_39->Y1;
return;
}
}
}

static void Z236
# ifdef HAVE_ARGS
(Zq0A4_153 Z247)
# else
(Z247)
Zq0A4_153 Z247;
# endif
{
struct S_12 Z191;

if (Z247 == Zq0A4_97) {
return;
}
if (Z247 != NIL && Z247->U_1.V_1.Y0 == Zq0A4_100) {
for (;;) {
{
register Zq0A4_226 *W_40 = &Z247->U_1.V_5.Y4;

if (!((Zq0A4_177 & W_40->Y2) == 0X0L)) {
goto EXIT_34;
}
if (!(IN(Zq0A4_44, W_40->Y2) || Z248(Z247))) {
goto EXIT_34;
}
Z179 = TRUE;
ZfM_29(Zq0A4_172, (STRING)"| ", 2L);
Zq0A4_192(W_40->Y1);
ZfM_29(Zq0A4_172, (STRING)":", 1L);
ZfM_33(Zq0A4_172);
Z174 = W_40->Y1;
Zq0A4_185(Z247, (Zq0A4_170)Z236);
ZfM_29(Zq0A4_172, (STRING)"END;", 4L);
ZfM_33(Zq0A4_172);
return;
}
} EXIT_34:;
}
if (Z247 != NIL && Z247->U_1.V_1.Y0 == Zq0A4_105) {
{
register Zq0A4_231 *W_41 = &Z247->U_1.V_10.Y9;

if (Z179) {
Z179 = FALSE;
} else {
ZfM_29(Zq0A4_172, (STRING)"ELS", 3L);
}
ZfM_29(Zq0A4_172, (STRING)"IF yyyIsEqual ('", 16L);
Zq0A4_192(W_41->Y3);
ZfM_29(Zq0A4_172, (STRING)"') THEN yyQuery", 15L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)" (yyt^.", 7L);
Zq0A4_192(Z174);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(W_41->Y3);
ZfM_29(Zq0A4_172, (STRING)");", 2L);
ZfM_33(Zq0A4_172);
return;
}
}
if (Z247 != NIL && Z247->U_1.V_1.Y0 == Zq0A4_106) {
for (;;) {
{
register Zq0A4_232 *W_42 = &Z247->U_1.V_11.Y10;

if (!(W_42->Y4 == Zq0A4_86)) {
goto EXIT_35;
}
if (Z179) {
Z179 = FALSE;
} else {
ZfM_29(Zq0A4_172, (STRING)"ELS", 3L);
}
ZfM_29(Zq0A4_172, (STRING)"IF yyyIsEqual ('", 16L);
Zq0A4_192(W_42->Y3);
ZfM_29(Zq0A4_172, (STRING)"') THEN yyQuery", 15L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)" (yyt^.", 7L);
Zq0A4_192(Z174);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(W_42->Y3);
ZfM_29(Zq0A4_172, (STRING)");", 2L);
ZfM_33(Zq0A4_172);
return;
}
} EXIT_35:;
}
}

static void Z237
# ifdef HAVE_ARGS
(Zq0A4_153 Z190)
# else
(Z190)
Zq0A4_153 Z190;
# endif
{
struct S_11 Z191;

if (Z190 == Zq0A4_97) {
return;
}
if (Z190 != NIL && Z190->U_1.V_1.Y0 == Zq0A4_100) {
for (;;) {
{
register Zq0A4_226 *W_43 = &Z190->U_1.V_5.Y4;

if (!((Zq0A4_177 & W_43->Y2) == 0X0L && ((SET_ELEM (Zq0A4_44) | SET_ELEM (Zq0A4_45)) & W_43->Y2) != 0X0L)) {
goto EXIT_36;
}
ZfM_29(Zq0A4_172, (STRING)"| ", 2L);
Zq0A4_192(W_43->Y1);
ZfM_29(Zq0A4_172, (STRING)":", 1L);
ZfM_33(Zq0A4_172);
Zq0A4gqDK_8(Z190);
Z174 = W_43->Y1;
Zq0A4_185(Z190, (Zq0A4_170)Z237);
if (Zq0A4gqDK_1 == Zq0A4_97) {
ZfM_29(Zq0A4_172, (STRING)"RETURN;", 7L);
ZfM_33(Zq0A4_172);
} else {
ZfM_29(Zq0A4_172, (STRING)"yyt1 := yyt1^.", 14L);
Zq0A4_192(Z174);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(Zq0A4gqDK_1->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"yyt2 := yyt2^.", 14L);
Zq0A4_192(Z174);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(Zq0A4gqDK_1->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
}
return;
}
} EXIT_36:;
}
if (Z190 != NIL && Z190->U_1.V_1.Y0 == Zq0A4_105) {
for (;;) {
{
register Zq0A4_231 *W_44 = &Z190->U_1.V_10.Y9;

if (!(Z190 != Zq0A4gqDK_1)) {
goto EXIT_37;
}
ZfM_29(Zq0A4_172, (STRING)"yyIsEqual", 9L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)" (yyt1^.", 8L);
Zq0A4_192(Z174);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(W_44->Y3);
ZfM_29(Zq0A4_172, (STRING)", yyt2^.", 8L);
Zq0A4_192(Z174);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(W_44->Y3);
ZfM_29(Zq0A4_172, (STRING)");", 2L);
ZfM_33(Zq0A4_172);
return;
}
} EXIT_37:;
}
if (Z190 != NIL && Z190->U_1.V_1.Y0 == Zq0A4_106) {
for (;;) {
{
register Zq0A4_232 *W_45 = &Z190->U_1.V_11.Y10;

if (!((Zq0A4_176 & W_45->Y6) == 0X0L)) {
goto EXIT_38;
}
ZfM_29(Zq0A4_172, (STRING)"yyResult := yyResult AND (equal", 31L);
Zq0A4_192(W_45->Y4);
ZfM_29(Zq0A4_172, (STRING)" (yyt1^.", 8L);
Zq0A4_192(Z174);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(W_45->Y3);
ZfM_29(Zq0A4_172, (STRING)", yyt2^.", 8L);
Zq0A4_192(Z174);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(W_45->Y3);
ZfM_29(Zq0A4_172, (STRING)"));", 3L);
ZfM_33(Zq0A4_172);
return;
}
} EXIT_38:;
}
}

static void Z238
# ifdef HAVE_ARGS
(Zq0A4_153 Z249)
# else
(Z249)
Zq0A4_153 Z249;
# endif
{
struct S_10 Z191;

if (Z249 == Zq0A4_97) {
return;
}
if (Z249 != NIL && Z249->U_1.V_1.Y0 == Zq0A4_100) {
for (;;) {
{
register Zq0A4_226 *W_46 = &Z249->U_1.V_5.Y4;

if (!((Zq0A4_177 & W_46->Y2) == 0X0L && IN(Zq0A4_44, W_46->Y2))) {
goto EXIT_39;
}
if (!Z250(Z249)) {
goto EXIT_39;
}
ZfM_29(Zq0A4_172, (STRING)"| ", 2L);
Zq0A4_192(W_46->Y1);
ZfM_29(Zq0A4_172, (STRING)":", 1L);
ZfM_33(Zq0A4_172);
Zq0A4gqDK_8(Z249);
Z174 = W_46->Y1;
Z176 = W_46->Y25;
Zq0A4_185(Z249, (Zq0A4_170)Z238);
if (!IN(Zq0A4_8, Zq0A4gqDK_1->U_1.V_10.Y9.Y6)) {
ZfM_29(Zq0A4_172, (STRING)"RETURN;", 7L);
ZfM_33(Zq0A4_172);
} else {
ZfM_29(Zq0A4_172, (STRING)"yyt := yyt^.", 12L);
Zq0A4_192(Z174);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(Zq0A4gqDK_1->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
}
return;
}
} EXIT_39:;
}
if (Z249 != NIL && Z249->U_1.V_1.Y0 == Zq0A4_105) {
for (;;) {
{
register Zq0A4_231 *W_47 = &Z249->U_1.V_10.Y9;

if (!IN(Zq0A4_8, W_47->Y6)) {
goto EXIT_40;
}
ZfM_29(Zq0A4_172, (STRING)"WITH yyt^.", 10L);
Zq0A4_192(Z174);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(W_47->Y3);
ZfM_29(Zq0A4_172, (STRING)"^.yyHead DO yyOffset := ", 24L);
Zq0A4_195((LONGINT)(Z176 + W_47->Y15));
ZfM_29(Zq0A4_172, (STRING)"; yyParent := yyt; END;", 23L);
ZfM_33(Zq0A4_172);
if (!(Z249 != Zq0A4gqDK_1)) {
goto EXIT_40;
}
ZfM_29(Zq0A4_172, (STRING)"Init", 4L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)" (yyt^.", 7L);
Zq0A4_192(Z174);
ZfM_29(Zq0A4_172, (STRING)".", 1L);
Zq0A4_192(W_47->Y3);
ZfM_29(Zq0A4_172, (STRING)");", 2L);
ZfM_33(Zq0A4_172);
return;
}
} EXIT_40:;
}
}

static void Z243
# ifdef HAVE_ARGS
(Zq0A4_153 Z190)
# else
(Z190)
Zq0A4_153 Z190;
# endif
{
struct S_9 Z191;

if (Z190 == Zq0A4_97) {
return;
}
if (Z190 != NIL && Z190->U_1.V_1.Y0 == Zq0A4_100) {
for (;;) {
{
register Zq0A4_226 *W_48 = &Z190->U_1.V_5.Y4;

if (!((Zq0A4_177 & W_48->Y2) == 0X0L)) {
goto EXIT_41;
}
ZfM_29(Zq0A4_172, (STRING)" yyNodeSize [", 13L);
Zq0A4_192(W_48->Y1);
ZfM_29(Zq0A4_172, (STRING)"] := SYSTEM.TSIZE (y", 20L);
Zq0A4_192(W_48->Y1);
ZfM_29(Zq0A4_172, (STRING)");", 2L);
ZfM_33(Zq0A4_172);
return;
}
} EXIT_41:;
}
}

static void Z224
# ifdef HAVE_ARGS
(Zq0A4_153 Z190)
# else
(Z190)
Zq0A4_153 Z190;
# endif
{
struct S_8 Z191;

if (Z190 == Zq0A4_97) {
return;
}
if (Z190 != NIL && Z190->U_1.V_1.Y0 == Zq0A4_100) {
for (;;) {
{
register Zq0A4_226 *W_49 = &Z190->U_1.V_5.Y4;

if (!!IN(Zq0A4_48, W_49->Y2)) {
goto EXIT_42;
}
if (!!IN(Zq0A4_17, W_49->Y2)) {
goto EXIT_42;
}
ZfM_29(Zq0A4_172, (STRING)"| ", 2L);
Zq0A4_192(W_49->Y1);
ZfM_29(Zq0A4_172, (STRING)": Strings.ArrayToString (\"", 26L);
Zq0A4_192(W_49->Y1);
ZfM_29(Zq0A4_172, (STRING)"\", yyName);", 11L);
ZfM_33(Zq0A4_172);
return;
}
} EXIT_42:;
}
}

void Zq0A4gqDJ_6
# ifdef HAVE_ARGS
(Zq0A4_153 Z190)
# else
(Z190)
Zq0A4_153 Z190;
# endif
{
struct S_7 Z191;

if (Z190 == Zq0A4_97) {
return;
}
if (Z190 != NIL && Z190->U_1.V_1.Y0 == Zq0A4_127) {
{
register Zq0A4_253 *W_50 = &Z190->U_1.V_32.Y31;

ZfM_29(Zq0A4_172, (STRING)"FROM ", 5L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)" IMPORT", 7L);
ZfM_33(Zq0A4_172);
if (!ZpmCQ_25(ORD('<'), &Zq0A4_171)) {
Zq0A4_192(Zq0A4_88);
ZfM_29(Zq0A4_172, (STRING)", ", 2L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)", ", 2L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"Root, Make", 10L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)",", 1L);
ZfM_33(Zq0A4_172);
}
Zq0A4_184(W_50->Y13, (Zq0A4_170)Zq0A4gqDJ_6);
if (ZpmCQ_25(ORD('f'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)"Release", 7L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)",", 1L);
ZfM_33(Zq0A4_172);
}
if (ZpmCQ_25(ORD('F'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)"Release", 7L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"Module,", 7L);
ZfM_33(Zq0A4_172);
}
if (ZpmCQ_25(ORD('o'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)"Write", 5L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"Node,", 5L);
ZfM_33(Zq0A4_172);
}
if (ZpmCQ_25(ORD('w'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)"Write", 5L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)",", 1L);
ZfM_33(Zq0A4_172);
}
if (ZpmCQ_25(ORD('r'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)"Read", 4L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)",", 1L);
ZfM_33(Zq0A4_172);
}
if (ZpmCQ_25(ORD('p'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)"Put", 3L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)",", 1L);
ZfM_33(Zq0A4_172);
}
if (ZpmCQ_25(ORD('g'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)"Get", 3L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)",", 1L);
ZfM_33(Zq0A4_172);
}
if (ZpmCQ_25(ORD('t'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)"Traverse", 8L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"TD,", 3L);
ZfM_33(Zq0A4_172);
}
if (ZpmCQ_25(ORD('b'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)"Traverse", 8L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"BU,", 3L);
ZfM_33(Zq0A4_172);
}
if (ZpmCQ_25(ORD('R'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)"Reverse", 7L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)",", 1L);
ZfM_33(Zq0A4_172);
}
if (ZpmCQ_25(ORD('y'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)"Copy", 4L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)",", 1L);
ZfM_33(Zq0A4_172);
}
if (ZpmCQ_25(ORD('k'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)"Check", 5L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)",", 1L);
ZfM_33(Zq0A4_172);
}
if (ZpmCQ_25(ORD('q'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)"Query", 5L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)",", 1L);
ZfM_33(Zq0A4_172);
}
if (ZpmCQ_25(ORD('='), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)"IsEqual", 7L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)",", 1L);
ZfM_33(Zq0A4_172);
}
if (ZpmCQ_25(ORD('L'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)"Init", 4L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)",", 1L);
ZfM_33(Zq0A4_172);
}
ZfM_29(Zq0A4_172, (STRING)"Begin", 5L);
Zq0A4_192(Zq0A4_85);
ZfM_29(Zq0A4_172, (STRING)",", 1L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"Close", 5L);
Zq0A4_192(Zq0A4_85);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
return;
}
}
if (Z190 != NIL && Z190->U_1.V_1.Y0 == Zq0A4_100) {
for (;;) {
{
register Zq0A4_226 *W_51 = &Z190->U_1.V_5.Y4;

if (!((Zq0A4_177 & W_51->Y2) == 0X0L)) {
goto EXIT_43;
}
Zq0A4_192(W_51->Y1);
ZfM_29(Zq0A4_172, (STRING)", ", 2L);
if (ZpmCQ_25(ORD('n'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)"n", 1L);
Zq0A4_192(W_51->Y1);
ZfM_29(Zq0A4_172, (STRING)", ", 2L);
}
if (ZpmCQ_25(ORD('m'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)"m", 1L);
Zq0A4_192(W_51->Y1);
ZfM_29(Zq0A4_172, (STRING)",", 1L);
ZfM_33(Zq0A4_172);
}
return;
}
} EXIT_43:;
}
}

static void Z219
# ifdef HAVE_ARGS
(Zq0A4_153 Z190)
# else
(Z190)
Zq0A4_153 Z190;
# endif
{
struct S_6 Z191;

if (Z190 == Zq0A4_97) {
return;
}
if (Z190 != NIL && Z190->U_1.V_1.Y0 == Zq0A4_100) {
for (;;) {
{
register Zq0A4_226 *W_52 = &Z190->U_1.V_5.Y4;

if (!((Zq0A4_177 & W_52->Y2) == 0X0L)) {
goto EXIT_44;
}
Zq0A4_192(W_52->Y1);
ZfM_29(Zq0A4_172, (STRING)", ", 2L);
ZfM_33(Zq0A4_172);
return;
}
} EXIT_44:;
}
}

static void Z206
# ifdef HAVE_ARGS
(Zq0A4_153 Z190)
# else
(Z190)
Zq0A4_153 Z190;
# endif
{
struct S_5 Z191;

if (Z190 == Zq0A4_97) {
return;
}
if (Z190 != NIL && Z190->U_1.V_1.Y0 == Zq0A4_100) {
{
register Zq0A4_226 *W_53 = &Z190->U_1.V_5.Y4;

Z177 = 1;
Zq0A4_185(Z190, (Zq0A4_170)Z206);
Z178 = ZdaDDAD7_4((LONGINT)Z177, (LONGINT)Z178);
return;
}
}
if (Z190 != NIL && Z190->U_1.V_1.Y0 == Zq0A4_105) {
for (;;) {
{
register Zq0A4_231 *W_54 = &Z190->U_1.V_10.Y9;

if (!(((SET_ELEM (Zq0A4_8) | SET_ELEM (Zq0A4_19) | SET_ELEM (Zq0A4_27)) & W_54->Y6) == 0X0L)) {
goto EXIT_45;
}
INC(Z177);
return;
}
} EXIT_45:;
}
if (Z190 != NIL && Z190->U_1.V_1.Y0 == Zq0A4_106) {
for (;;) {
{
register Zq0A4_232 *W_55 = &Z190->U_1.V_11.Y10;

if (!(((SET_ELEM (Zq0A4_8) | SET_ELEM (Zq0A4_19) | SET_ELEM (Zq0A4_27)) & W_55->Y6) == 0X0L)) {
goto EXIT_46;
}
INC(Z177);
return;
}
} EXIT_46:;
}
}

static BOOLEAN Z248
# ifdef HAVE_ARGS
(Zq0A4_153 Z190)
# else
(Z190)
Zq0A4_153 Z190;
# endif
{
struct S_4 Z191;

if (Z190 == Zq0A4_97) {
return FALSE;
}
for (;;) {
{
register Zq0A4_226 *W_56 = &Z190->U_1.V_5.Y4;

Z180 = FALSE;
Zq0A4_185(Z190, (Zq0A4_170)Z254);
if (!Z180) {
goto EXIT_47;
}
return TRUE;
}
} EXIT_47:;
return FALSE;
}

static void Z254
# ifdef HAVE_ARGS
(Zq0A4_153 Z190)
# else
(Z190)
Zq0A4_153 Z190;
# endif
{
struct S_3 Z191;

if (Z190 == Zq0A4_97) {
return;
}
if (Z190 != NIL && Z190->U_1.V_1.Y0 == Zq0A4_106) {
for (;;) {
{
register Zq0A4_232 *W_57 = &Z190->U_1.V_11.Y10;

if (!(W_57->Y4 == Zq0A4_86)) {
goto EXIT_48;
}
Z180 = TRUE;
return;
}
} EXIT_48:;
}
}

static BOOLEAN Z250
# ifdef HAVE_ARGS
(Zq0A4_153 Z190)
# else
(Z190)
Zq0A4_153 Z190;
# endif
{
struct S_2 Z191;

if (Z190 == Zq0A4_97) {
return FALSE;
}
for (;;) {
{
register Zq0A4_226 *W_58 = &Z190->U_1.V_5.Y4;

Z180 = FALSE;
Zq0A4_185(Z190, (Zq0A4_170)Z255);
if (!Z180) {
goto EXIT_49;
}
return TRUE;
}
} EXIT_49:;
return FALSE;
}

static void Z255
# ifdef HAVE_ARGS
(Zq0A4_153 Z190)
# else
(Z190)
Zq0A4_153 Z190;
# endif
{
struct S_1 Z191;

if (Z190 == Zq0A4_97) {
return;
}
if (Z190 != NIL && Z190->U_1.V_1.Y0 == Zq0A4_105) {
for (;;) {
{
register Zq0A4_231 *W_59 = &Z190->U_1.V_10.Y9;

if (!IN(Zq0A4_8, W_59->Y6)) {
goto EXIT_50;
}
Z180 = TRUE;
return;
}
} EXIT_50:;
}
}

void Zq0A4gqDJ_7
 ARGS ((void))
{
Z171 = 0;
}

void Zq0A4gqDJ_8
 ARGS ((void))
{
}

static void Z258
 ARGS ((void))
{
ZfM_34();
rExit(1L);
}

void BEGIN_TreeMod1 ARGS ((void))
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
BEGIN_IO ();
BEGIN_StringM ();
BEGIN_Idents ();
BEGIN_Texts ();
BEGIN_Sets ();
BEGIN_Semantic ();
BEGIN_TreeMod2 ();
BEGIN_Tree ();
BEGIN_Strings ();

Zq0A4gqDJ_1 = ZfM_1;
Zq0A4gqDJ_3 = Z258;
Zq0A4gqDJ_7();
}
