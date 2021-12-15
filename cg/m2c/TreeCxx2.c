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

#ifndef DEFINITION_TreeCxx1
#include "TreeCxx1.h"
#endif

#ifndef DEFINITION_Tree
#include "Tree.h"
#endif

#ifndef DEFINITION_Strings
#include "Strings.h"
#endif

#ifndef DEFINITION_TreeCxx2
#include "TreeCxx2.h"
#endif

Zq0A4_153 Zq0A4dpZf_2;
ZfM_3 Zq0A4dpZf_4;
BOOLEAN Zq0A4dpZf_5;
PROC Zq0A4dpZf_6;

static Zfb3DLQ_0 Z155;
static Zq0A4_153 Z156;
static BOOLEAN Z157;
static void Z161 ARGS ((CHAR Z162[], LONGCARD O_1));
static BOOLEAN Z165 ARGS ((BYTE Z166[], LONGCARD O_3, BYTE Z167[], LONGCARD O_2));
struct S_30 {
union {
char dummy;
} U_1;
};
static void Z176 ARGS ((Zq0A4_153 Z170));
struct S_29 {
union {
char dummy;
} U_1;
};
static void Z175 ARGS ((Zq0A4_153 Z170));
struct S_28 {
union {
char dummy;
} U_1;
};
static void Z178 ARGS ((Zq0A4_153 Z170));
struct S_26 {
union {
struct {
struct S_27 {
Zq0A4_153 Y0;
} Y0;
} V_1;
} U_1;
};
static void Z179 ARGS ((Zq0A4_153 Z170));
struct S_23 {
union {
struct {
struct S_24 {
struct S_25 {
Zq0A4_153 Y0;
} Y0;
} Y0;
} V_1;
} U_1;
};
static void Z180 ARGS ((Zq0A4_153 Z170));
struct S_22 {
union {
char dummy;
} U_1;
};
static void Z181 ARGS ((Zq0A4_153 Z170));
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
static void Z198 ARGS ((Zq0A4_153 Z170));
struct S_19 {
union {
char dummy;
} U_1;
};
static void Z199 ARGS ((Zq0A4_153 Z170));
struct S_18 {
union {
char dummy;
} U_1;
};
struct S_16 {
union {
struct {
struct S_17 {
Zq0A4_153 Y0;
} Y0;
} V_1;
} U_1;
};
struct S_15 {
union {
char dummy;
} U_1;
};
struct S_14 {
union {
char dummy;
} U_1;
};
struct S_13 {
union {
char dummy;
} U_1;
};
static void Z207 ARGS ((Zq0A4_153 Z208));
struct S_12 {
union {
char dummy;
} U_1;
};
static BOOLEAN Z209 ARGS ((Zq0A4_153 Z210));
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
static void Z214 ARGS ((Zq0A4_153 Z170));
struct S_9 {
union {
char dummy;
} U_1;
};
static void Z215 ARGS ((Zq0A4_153 Z170));
struct S_8 {
union {
char dummy;
} U_1;
};
static void Z216 ARGS ((Zq0A4_153 Z170));
struct S_7 {
union {
char dummy;
} U_1;
};
static void Z222 ARGS ((Zq0A4_153 Z170));
struct S_6 {
union {
char dummy;
} U_1;
};
static void Z220 ARGS ((Zq0A4_153 Z170));
struct S_5 {
union {
char dummy;
} U_1;
};
static void Z221 ARGS ((Zq0A4_153 Z170));
struct S_4 {
union {
char dummy;
} U_1;
};
static void Z223 ARGS ((Zq0A4_153 Z170));
struct S_3 {
union {
char dummy;
} U_1;
};
static void Z224 ARGS ((Zq0A4_153 Z170));
struct S_2 {
union {
char dummy;
} U_1;
};
static void Z219 ARGS ((Zq0A4_153 Z170));
struct S_1 {
union {
char dummy;
} U_1;
};
static void Z227 ARGS ((void));

void Zq0A4dpZf_3
# ifdef HAVE_ARGS
(ZmtLFGGBG_0 Z159)
# else
(Z159)
ZmtLFGGBG_0 Z159;
# endif
{
if (Z159.Y1 != 0) {
ZfM_29(Zq0A4_172, (STRING)"// line ", 8L);
Zq0A4_195((LONGINT)Z159.Y1);
ZfM_29(Zq0A4_172, (STRING)" \"", 2L);
Zq0A4_192(Z159.Y0);
ZfM_29(Zq0A4_172, (STRING)"\"", 1L);
ZfM_33(Zq0A4_172);
}
}

static void Z161
# ifdef HAVE_ARGS
(CHAR Z162[], LONGCARD O_1)
# else
(Z162, O_1)
CHAR Z162[];
LONGCARD O_1;
# endif
{
OPEN_ARRAY_LOCALS

ALLOC_OPEN_ARRAYS (O_1 * sizeof (CHAR), 1)
COPY_OPEN_ARRAY (Z162, O_1, CHAR)
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)"Error: module TreeCxx2, routine ", 32L);
ZfM_29((ZDz6VQCC_4)ZfM_2, Z162, O_1);
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)" failed", 7L);
ZfM_33((ZDz6VQCC_4)ZfM_2);
(*Zq0A4dpZf_6)();
FREE_OPEN_ARRAYS
}

static BOOLEAN Z165
# ifdef HAVE_ARGS
(BYTE Z166[], LONGCARD O_3, BYTE Z167[], LONGCARD O_2)
# else
(Z166, O_3, Z167, O_2)
BYTE Z166[];
LONGCARD O_3;
BYTE Z167[];
LONGCARD O_2;
# endif
{
INTEGER Z168;
OPEN_ARRAY_LOCALS

ALLOC_OPEN_ARRAYS (O_2 * sizeof (WORD) + O_3 * sizeof (WORD), 2)
COPY_OPEN_ARRAY (Z167, O_2, WORD)
COPY_OPEN_ARRAY (Z166, O_3, WORD)
{
LONGINT B_1 = 0, B_2 = (INTEGER)(O_3 - 1);

if (B_1 <= B_2)
for (Z168 = B_1;; Z168 += 1) {
if (Z166[Z168] != Z167[Z168]) {
FREE_OPEN_ARRAYS
return FALSE;
}
if (Z168 >= B_2) break;
}
}
FREE_OPEN_ARRAYS
return TRUE;
}

void Zq0A4dpZf_7
# ifdef HAVE_ARGS
(Zq0A4_153 Z170)
# else
(Z170)
Zq0A4_153 Z170;
# endif
{
struct S_30 Z171;

if (Z170 == Zq0A4_97) {
return;
}
if (Z170 != NIL && Z170->U_1.V_1.Y0 == Zq0A4_127) {
{
register Zq0A4_253 *W_1 = &Z170->U_1.V_32.Y31;

if (ZpmCQ_25(ORD(','), &Zq0A4_171) && !ZpmCQ_25(ORD('<'), &Zq0A4_171) || ZpmCQ_25(ORD('_'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)"// yyMark", 9L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"void ", 5L);
Zq0A4_192(Zq0A4_87);
ZfM_29(Zq0A4_172, (STRING)"::yyMarkTree () {", 17L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" for (", 6L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)" yyt = this; yyt && ++ yyt->yyMark <= 1; yyt = yyt->yyGetIterator ())", 69L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  yyt->yyMarkNode ();", 21L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"}", 1L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"void ", 5L);
Zq0A4_192(Zq0A4_87);
ZfM_29(Zq0A4_172, (STRING)"::yyMarkNode () {}", 18L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
Zq0A4_184(W_1->Y13, (Zq0A4_170)Z175);
}
if (ZpmCQ_25(ORD('r'), &Zq0A4_171) || ZpmCQ_25(ORD('g'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)"# define yyMapToTree(yyLabel) yyTreeStorePtr [yyLabel].yyPtr;", 61L);
ZfM_33(Zq0A4_172);
}
if (ZpmCQ_25(ORD(';'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)"// yyTreeStore", 14L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# define yyInitTreeStoreSize 64", 31L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# define yyTreeStoreHashSize 256", 32L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"typedef struct { ", 17L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)" yyPtr; yytLabel yyNext; } yytTreeStore;", 40L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"static unsigned long yyTreeStoreSize = yyInitTreeStoreSize;", 59L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"static yytTreeStore * yyTreeStorePtr = 0;", 41L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"static yytLabel yyLabelCount;", 29L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"static int yyRecursionLevel = 0;", 32L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"static yytLabel yyTreeStoreHash [yyTreeStoreHashSize];", 54L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"static void yyBeginTreeStore () {", 33L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" if (yyRecursionLevel ++ == 0) {", 32L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  MakeArray ((char * *) & yyTreeStorePtr, & yyTreeStoreSize,", 60L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   (unsigned long) sizeof (yytTreeStore));", 42L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  yyLabelCount = 0;", 19L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  for (register int yyi = 0; yyi < yyTreeStoreHashSize; yyi ++)", 63L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   yyTreeStoreHash [yyi] = 0;", 29L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" }", 2L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"}", 1L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"static void yyCloseTreeStore () {", 33L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" if (-- yyRecursionLevel == 0) {", 32L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  ReleaseArray ((char * *) & yyTreeStorePtr, & yyTreeStoreSize,", 63L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   (unsigned long) sizeof (yytTreeStore));", 42L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" }", 2L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"}", 1L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"static yytLabel yyMapToLabel (", 30L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)" yyt) {", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" long yyhash = (((long) yyt) >> 4) & (yyTreeStoreHashSize - 1);", 63L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" register yytLabel yyi = yyTreeStoreHash [yyhash];", 50L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" for (; yyi; yyi = yyTreeStorePtr [yyi].yyNext)", 47L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  if (yyTreeStorePtr [yyi].yyPtr == yyt) return yyi;", 52L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" if (++ yyLabelCount == (yytLabel) yyTreeStoreSize)", 51L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  ExtendArray ((char * *) & yyTreeStorePtr, & yyTreeStoreSize,", 62L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   (unsigned long) sizeof (yytTreeStore));", 42L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" yyTreeStorePtr [yyLabelCount].yyPtr = yyt;", 43L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" yyTreeStorePtr [yyLabelCount].yyNext = yyTreeStoreHash [yyhash];", 65L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" yyTreeStoreHash [yyhash] = yyLabelCount;", 41L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" return yyLabelCount;", 21L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"}", 1L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
}
if (ZpmCQ_25(ORD('$'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)"static void xxWriteNl () { putc ('\\n', yyf); }", 46L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"static void yyWriteSpaces (int yyn) {", 37L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" for (int yyi = 1; yyi <= yyn; yyi ++) fputc (' ', yyf);", 56L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"}", 1L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"static void yyWriteSelector (char * yys) {", 42L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" fputs (yys, yyf); yyWriteSpaces (16 - strlen (yys)); fputs (\" = \", yyf);", 73L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"}", 1L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"static void yyWriteHex (unsigned char * yyx, int yysize) {", 58L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" for (register int yyi = 0; yyi < yysize; yyi ++)", 49L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  fprintf (yyf, \"%02x \", yyx [yyi]);", 36L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"}", 1L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
}
if (ZpmCQ_25(ORD('o'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)"// WriteNode", 12L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"void WriteNode (FILE * yyf, ", 28L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)" yyt) {", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" if (yyt == ", 12L);
Zq0A4_192(Zq0A4_88);
ZfM_29(Zq0A4_172, (STRING)") { ", 4L);
ZfM_29(Zq0A4_172, (STRING)"fputs (\"", 8L);
Zq0A4_192(Zq0A4_88);
ZfM_29(Zq0A4_172, (STRING)"\", yyf); xxWriteNl (); return; }", 32L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" yyt->WriteNode (yyf);", 22L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"}", 1L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"void ", 5L);
Zq0A4_192(Zq0A4_87);
ZfM_29(Zq0A4_172, (STRING)"::WriteNode (FILE * yyyf) {", 27L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" yyf = yyyf;", 12L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" fputs (NodeName [Kind], yyf); xxWriteNl ();", 44L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" writeNodeHead (this)", 21L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" yyWriteNode ();", 16L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"}", 1L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"static void yyWriteAddr (", 25L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)" yyt) {", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" if (yyt == ", 12L);
Zq0A4_192(Zq0A4_88);
ZfM_29(Zq0A4_172, (STRING)") fputs (\"", 10L);
Zq0A4_192(Zq0A4_88);
ZfM_29(Zq0A4_172, (STRING)"\", yyf);", 8L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" else fprintf (yyf, \"%p *\", yyt);", 33L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" xxWriteNl ();", 14L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"}", 1L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"void ", 5L);
Zq0A4_192(Zq0A4_87);
ZfM_29(Zq0A4_172, (STRING)"::yyWriteNode () {}", 19L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
Zq0A4_184(W_1->Y13, (Zq0A4_170)Z176);
}
if (ZpmCQ_25(ORD('w'), &Zq0A4_171) || ZpmCQ_25((LONGCARD)Zq0A4dpZf_1, &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)"static int yyIndentLevel;", 25L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
}
if (ZpmCQ_25(ORD('w'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)"// Write", 8L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"static void yyIndentSelector (char * yys) {", 43L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" yyWriteSpaces (yyIndentLevel); yyWriteSelector (yys);", 54L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"}", 1L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"static void yyWrite (", 21L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)" yyt) {", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" int yyLevel = yyIndentLevel;", 29L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" for (;;) {", 11L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  if (yyt == ", 13L);
Zq0A4_192(Zq0A4_88);
ZfM_29(Zq0A4_172, (STRING)") {", 3L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   fputs (\" ", 12L);
Zq0A4_192(Zq0A4_88);
ZfM_29(Zq0A4_172, (STRING)"\\n\", yyf);", 10L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   break;", 9L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  } else if (yyt->yyMark == 0) {", 32L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   fprintf (yyf, \"^%d\\n\", yyMapToLabel (yyt));", 46L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   break;", 9L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  } else if (yyt->yyMark > 1) {", 31L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   fprintf (yyf, \"\\n%06d:\", yyMapToLabel (yyt));", 48L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   yyWriteSpaces (yyIndentLevel - 7);", 37L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  } else {", 10L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   fputc (' ', yyf);", 20L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  }", 3L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  yyt->yyMark = 0;", 18L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  yyIndentLevel += 2;", 21L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  fputs (NodeName [yyt->Kind], yyf); xxWriteNl ();", 50L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  writeNodeHead (yyt)", 21L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  // yyWrite returns the selector name if the node type has an iterator", 71L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  char * yys = yyt->yyWrite ();", 31L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  if (yys == 0) break;", 22L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  writeSELECTOR (yys)", 21L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  yyt = yyt->yyGetIterator ();", 30L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" }", 2L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" yyIndentLevel = yyLevel;", 25L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"}", 1L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"void Write (FILE * yyyf, ", 25L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)" yyt) {", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" yyf = yyyf;", 12L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" if (yyt == ", 12L);
Zq0A4_192(Zq0A4_88);
ZfM_29(Zq0A4_172, (STRING)") fputs (\" ", 11L);
Zq0A4_192(Zq0A4_88);
ZfM_29(Zq0A4_172, (STRING)"\\n\", yyf);", 10L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" else yyt->Write (yyyf);", 24L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"}", 1L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"void ", 5L);
Zq0A4_192(Zq0A4_87);
ZfM_29(Zq0A4_172, (STRING)"::Write (FILE * yyyf) {", 23L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" int yySaveLevel = yyIndentLevel;", 33L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" yyf = yyyf;", 12L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" try {", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  yyBeginTreeStore ();", 22L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  this->yyMarkTree ();", 22L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  yyIndentLevel = 0;", 20L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  ", 2L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"::yyWrite (this);", 17L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  yyIndentLevel = yySaveLevel;", 30L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  yyCloseTreeStore ();", 22L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" } catch (...) {", 16L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  yyIndentLevel = yySaveLevel;", 30L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  yyCloseTreeStore ();", 22L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  throw;", 8L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" }", 2L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" if (ferror (yyyf)) {", 21L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  ErrorsObj->ErrorMessageI (xxTreeIOError, xxError, NoPosition,", 63L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   xxString, \"", 14L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"::Write\");", 10L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  throw ErrorsObj->CodeToText (xxTreeIOError);", 46L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" }", 2L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"}", 1L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"static void yyIndentSelectorTree (char * yys, ", 46L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)" yyt) {", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" writeSELECTOR (yys) yyWrite (yyt);", 35L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"}", 1L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"char * ", 7L);
Zq0A4_192(Zq0A4_87);
ZfM_29(Zq0A4_172, (STRING)"::yyWrite () { return 0; }", 26L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
Zq0A4_184(W_1->Y13, (Zq0A4_170)Z178);
}
if (ZpmCQ_25(ORD('r'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)"// Read", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"static tIdent yyKindToIdent [", 29L);
Zq0A4_195(Zq0A4_68 + 1);
ZfM_29(Zq0A4_172, (STRING)"];", 2L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"static bool yyIsInitialized = false;", 36L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"static yytKind yyMapToKind (char * yys) {", 41L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" tIdent yyi = Idents_PREFIX MakeIdent (yys);", 44L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" for (yytKind yyk = 0; yyk < ", 29L);
Zq0A4_195(Zq0A4_68 + 1);
ZfM_29(Zq0A4_172, (STRING)"; yyk ++)", 9L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  if (yyKindToIdent [yyk] == yyi) return yyk;", 45L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" return 0;", 10L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"}", 1L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"static void yyReadNl () { while (fgetc (yyf) != ", 48L);
ZfM_29(Zq0A4_172, (STRING)"'\\n'); }", 8L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"static tIdent yyReadIdent () {", 30L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" char yys [1024];", 17L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" fgets (yys, 1024, yyf);", 24L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" ungetc ('\\n', yyf);", 20L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" return Idents_PREFIX MakeIdent (yys, strlen (yys) - 1);", 56L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"}", 1L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"static void yyReadHex (unsigned char * yyx, int yysize) {", 57L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" register int yyi; int yyk;", 27L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" for (yyi = 0; yyi < yysize; yyi ++) {", 38L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  fscanf (yyf, \"%x%*c\", & yyk); yyx [yyi] = (unsigned char) yyk;", 64L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" }", 2L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"}", 1L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"void yySkip () { fscanf (yyf, \" %*s =%*c\"); }", 45L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"static ", 7L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)" yyRead () {", 12L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" ", 1L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)" yyt = ", 7L);
Zq0A4_192(Zq0A4_88);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" ", 1L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)" yyfirst = ", 11L);
Zq0A4_192(Zq0A4_88);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" ", 1L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)" yylast = ", 10L);
Zq0A4_192(Zq0A4_88);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" yytLabel yyLabel;", 18L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" char yys [1024];", 17L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" yytKind yyKind;", 16L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" for (;;) {", 11L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  switch (getc (yyf)) {", 23L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  case '^':", 11L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   fscanf (yyf, \"%hd%*c\", & yyLabel);", 37L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   yyt = yyMapToTree (yyLabel);", 31L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"yyExit:", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   if (yyfirst == ", 18L);
Zq0A4_192(Zq0A4_88);
ZfM_29(Zq0A4_172, (STRING)") yyfirst = yyt;", 16L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   if (yylast) yylast->yySetIterator (yyt);", 43L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   return yyfirst;", 18L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  case '\\n':", 12L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  case '0':", 11L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   fscanf (yyf, \"%hd%*c %s%*c\", & yyLabel, yys);", 48L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   yyKind = yyMapToKind (yys);", 30L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   yyt = Make (yyKind);", 23L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   if (yyLabel != yyMapToLabel (yyt)) {", 39L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"    ErrorsObj->ErrorMessageI (xxTreeIOError, xxError, NoPosition,", 65L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"     xxString, \"", 16L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"::Read\");", 9L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"    throw ErrorsObj->CodeToText (xxTreeIOError);", 48L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   }", 4L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   break;", 9L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  case EOF:", 11L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   yyt = ", 9L);
Zq0A4_192(Zq0A4_88);
ZfM_29(Zq0A4_172, (STRING)"; goto yyExit;", 14L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  default:", 10L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   fscanf (yyf, \"%s%*c\", yys);", 30L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   yyKind = yyMapToKind (yys);", 30L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   if (yyKind == 0) { yyt = ", 28L);
Zq0A4_192(Zq0A4_88);
ZfM_29(Zq0A4_172, (STRING)"; goto yyExit; }", 16L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   yyt = Make (yyKind);", 23L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  }", 3L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  if (yyfirst == ", 17L);
Zq0A4_192(Zq0A4_88);
ZfM_29(Zq0A4_172, (STRING)") yyfirst = yyt;", 16L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  if (yylast) yylast->yySetIterator (yyt);", 42L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  readNodeHead (yyt)", 20L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  yyt->yyRead ();", 17L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  if (! yyt->yyHasIterator ()) break;", 37L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  yylast = yyt;", 15L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  readSELECTOR ()", 17L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" }", 2L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" return yyfirst;", 16L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"}", 1L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"static ", 7L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)" yyReadSelectorTree () {", 24L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" readSELECTOR (); return yyRead ();", 35L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"}", 1L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)" Read (FILE * yyyf) {", 21L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" ", 1L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)" yyt;", 5L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" yyf = yyyf;", 12L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" try {", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  if (! yyIsInitialized) {", 26L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   for (int yyi = 0; yyi < ", 27L);
Zq0A4_195(Zq0A4_68 + 1);
ZfM_29(Zq0A4_172, (STRING)"; yyi ++)", 9L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"    yyKindToIdent [yyi] = Idents_PREFIX MakeIdent (NodeName [yyi]);", 67L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   yyIsInitialized = true;", 26L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  }", 3L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  yyBeginTreeStore ();", 22L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  yyt = yyRead ();", 18L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  yyCloseTreeStore ();", 22L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" } catch (...) {", 16L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  yyCloseTreeStore ();", 22L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  throw;", 8L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" }", 2L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" if (ferror (yyyf)) {", 21L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  ErrorsObj->ErrorMessageI (xxTreeIOError, xxError, NoPosition,", 63L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   xxString, \"", 14L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"::Read\");", 9L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  throw ErrorsObj->CodeToText (xxTreeIOError);", 46L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" }", 2L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" return yyt;", 12L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"}", 1L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"void ", 5L);
Zq0A4_192(Zq0A4_87);
ZfM_29(Zq0A4_172, (STRING)"::yyRead () {}", 14L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
Zq0A4_184(W_1->Y13, (Zq0A4_170)Z179);
}
if (ZpmCQ_25(ORD('p'), &Zq0A4_171) || ZpmCQ_25(ORD('g'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)"# define yyNil	(unsigned char) 0374", 35L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# define yyNoLabel	(unsigned char) 0375", 39L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# define yyLabelDef	(unsigned char) 0376", 40L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# define yyLabelUse	(unsigned char) 0377", 40L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
}
if (ZpmCQ_25(ORD('p'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)"static void yyPut (char * yyx, int yysize) {", 44L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" fwrite (yyx, 1, yysize, yyf);", 30L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"}", 1L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"static void yyPutIdent (tIdent yyi) {", 37L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" Idents_PREFIX WriteIdent (yyf, yyi); fputc ('\\n', yyf);", 56L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"}", 1L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"static void yyPutTree (", 23L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)" yyt) {", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" yytLabel yyLabel;", 18L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" for (;;) {", 11L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  if (yyt == ", 13L);
Zq0A4_192(Zq0A4_88);
ZfM_29(Zq0A4_172, (STRING)") {", 3L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   putc (yyNil, yyf); return;", 29L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  } else if (yyt->yyMark == 0) {", 32L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   putc (yyLabelUse, yyf); yyLabel = yyMapToLabel (yyt);", 56L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   yyPut ((char *) & yyLabel, sizeof yyLabel); return;", 54L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  } else if (yyt->yyMark > 1) {", 31L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   putc (yyLabelDef, yyf); yyLabel = yyMapToLabel (yyt);", 56L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   yyPut ((char *) & yyLabel, sizeof yyLabel);", 46L);
ZfM_33(Zq0A4_172);
if (Zq0A4_68 > 251) {
ZfM_29(Zq0A4_172, (STRING)"   yyPut ((char *) & yyt->Kind, sizeof (yytKind));", 50L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  } else if (yyt->Kind > 251) {", 31L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   putc (yyNoLabel, yyf);", 25L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   yyPut ((char *) & yyt->Kind, sizeof (yytKind));", 50L);
ZfM_33(Zq0A4_172);
} else {
ZfM_29(Zq0A4_172, (STRING)"   putc ((char) yyt->Kind, yyf);", 32L);
ZfM_33(Zq0A4_172);
}
ZfM_29(Zq0A4_172, (STRING)"  } else {", 10L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   putc ((char) yyt->Kind, yyf);", 32L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  }", 3L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  yyt->yyMark = 0;", 18L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  putNodeHead (yyt)", 19L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  switch (yyt->Kind) {", 22L);
ZfM_33(Zq0A4_172);
Zq0A4_184(W_1->Y13, (Zq0A4_170)Z180);
ZfM_29(Zq0A4_172, (STRING)"  default: return;", 18L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  }", 3L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" }", 2L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"}", 1L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"void Put (FILE * yyf, ", 22L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)" yyt) {", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" if (yyt == ", 12L);
Zq0A4_192(Zq0A4_88);
ZfM_29(Zq0A4_172, (STRING)") putc (yyNil, yyf);", 20L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" else yyt->Put (yyf);", 21L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"}", 1L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"void ", 5L);
Zq0A4_192(Zq0A4_87);
ZfM_29(Zq0A4_172, (STRING)"::Put (FILE * yyyf) {", 21L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" yyf = yyyf;", 12L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" try {", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  this->yyMarkTree ();", 22L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  yyBeginTreeStore ();", 22L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  yyPutTree (this);", 19L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  yyCloseTreeStore ();", 22L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" } catch (...) {", 16L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  yyCloseTreeStore ();", 22L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  throw;", 8L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" }", 2L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" if (ferror (yyyf)) {", 21L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  ErrorsObj->ErrorMessageI (xxTreeIOError, xxError, NoPosition,", 63L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   xxString, \"", 14L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"::Put\");", 8L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  throw ErrorsObj->CodeToText (xxTreeIOError);", 46L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" }", 2L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"}", 1L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
}
if (ZpmCQ_25(ORD('g'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)"static void yyGet (char * yyx, int yysize) {", 44L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" fread (yyx, 1, yysize, yyf);", 29L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"}", 1L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"static void yyGetIdent (tIdent * yyi) {", 39L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" char yys [1024];", 17L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" fgets (yys, 1024, yyf);", 24L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" * yyi = Idents_PREFIX MakeIdent (yys, strlen (yys) - 1);", 57L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"}", 1L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"static ", 7L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)" yyGetTree () {", 15L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" ", 1L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)" yyt = ", 7L);
Zq0A4_192(Zq0A4_88);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" ", 1L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)" yyfirst = ", 11L);
Zq0A4_192(Zq0A4_88);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" ", 1L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)" yylast = ", 10L);
Zq0A4_192(Zq0A4_88);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" yytLabel yyLabel;", 18L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" yytKind yyKind;", 16L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" do {", 5L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  switch (yyKind = (yytKind) getc (yyf)) {", 42L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  case yyNil:", 13L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   yyt = ", 9L);
Zq0A4_192(Zq0A4_88);
ZfM_29(Zq0A4_172, (STRING)"; goto yyExit;", 14L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  case yyLabelUse:", 18L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   if (feof (yyf)) yyt = ", 25L);
Zq0A4_192(Zq0A4_88);
ZfM_29(Zq0A4_172, (STRING)";", 1L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   else {", 9L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"    yyGet ((char *) & yyLabel, sizeof yyLabel);", 47L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"    yyt = yyMapToTree (yyLabel);", 32L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   }", 4L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"yyExit:", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   if (yyfirst == ", 18L);
Zq0A4_192(Zq0A4_88);
ZfM_29(Zq0A4_172, (STRING)") yyfirst = yyt;", 16L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   if (yylast) yylast->yySetIterator (yyt);", 43L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   return yyfirst;", 18L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  case yyLabelDef:", 18L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   yyGet ((char *) & yyLabel, sizeof yyLabel);", 46L);
ZfM_33(Zq0A4_172);
if (Zq0A4_68 > 251) {
ZfM_29(Zq0A4_172, (STRING)"   yyGet ((char *) & yyKind, sizeof yyKind);", 44L);
ZfM_33(Zq0A4_172);
} else {
ZfM_29(Zq0A4_172, (STRING)"   yyKind = (yytKind) getc (yyf);", 33L);
ZfM_33(Zq0A4_172);
}
ZfM_29(Zq0A4_172, (STRING)"   yyt = Make (yyKind);", 23L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   if (yyLabel != yyMapToLabel (yyt)) {", 39L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"    ErrorsObj->ErrorMessageI (xxTreeIOError, xxError, NoPosition,", 65L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"     xxString, \"", 16L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"::Get\");", 8L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"    throw ErrorsObj->CodeToText (xxTreeIOError);", 48L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   }", 4L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   break;", 9L);
ZfM_33(Zq0A4_172);
if (Zq0A4_68 > 251) {
ZfM_29(Zq0A4_172, (STRING)"  case yyNoLabel:", 17L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   yyGet ((char *) & yyKind, sizeof yyKind);", 44L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   yyt = Make (yyKind); break;", 30L);
ZfM_33(Zq0A4_172);
}
ZfM_29(Zq0A4_172, (STRING)"  default:", 10L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   yyt = Make (yyKind);", 23L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  }", 3L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  if (yyfirst == ", 17L);
Zq0A4_192(Zq0A4_88);
ZfM_29(Zq0A4_172, (STRING)") yyfirst = yyt;", 16L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  if (yylast) yylast->yySetIterator (yyt);", 42L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  getNodeHead (yyt)", 19L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  switch (yyKind) {", 19L);
ZfM_33(Zq0A4_172);
Zq0A4_184(W_1->Y13, (Zq0A4_170)Z181);
ZfM_29(Zq0A4_172, (STRING)"  }", 3L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  yylast = yyt;", 15L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" } while (yylast->yyHasIterator ());", 36L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" return yyfirst;", 16L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"}", 1L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)" Get (FILE * yyyf) {", 20L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" ", 1L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)" yyt;", 5L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" yyf = yyyf;", 12L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" try {", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  yyBeginTreeStore ();", 22L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  yyt = yyGetTree ();", 21L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  yyCloseTreeStore ();", 22L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" } catch (...) {", 16L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  yyCloseTreeStore ();", 22L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  throw;", 8L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" }", 2L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" if (ferror (yyf)) {", 20L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  ErrorsObj->ErrorMessageI (xxTreeIOError, xxError, NoPosition,", 63L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   xxString, \"", 14L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"::Get\");", 8L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  throw ErrorsObj->CodeToText (xxTreeIOError);", 46L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" }", 2L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" return yyt;", 12L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"}", 1L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
}
return;
}
}
}

static void Z176
# ifdef HAVE_ARGS
(Zq0A4_153 Z170)
# else
(Z170)
Zq0A4_153 Z170;
# endif
{
struct S_29 Z171;

if (Z170 == Zq0A4_97) {
return;
}
if (Z170 != NIL && Z170->U_1.V_1.Y0 == Zq0A4_100) {
for (;;) {
{
register Zq0A4_226 *W_2 = &Z170->U_1.V_5.Y4;

if (!((Zq0A4_177 & W_2->Y2) == 0X0L)) {
goto EXIT_1;
}
if (!(Zq0A4dpZf_11(W_2->Y3) > 0)) {
goto EXIT_1;
}
ZfM_29(Zq0A4_172, (STRING)"void ", 5L);
Zq0A4_192(W_2->Y1);
ZfM_29(Zq0A4_172, (STRING)"::yyWriteNode () {", 18L);
ZfM_33(Zq0A4_172);
if (W_2->Y6->U_1.V_1.Y0 == Zq0A4_100 && ((SET_ELEM (Zq0A4_44) | SET_ELEM (Zq0A4_45)) & W_2->Y6->U_1.V_5.Y4.Y2) != 0X0L) {
ZfM_29(Zq0A4_172, (STRING)" ", 1L);
Zq0A4_192(W_2->Y6->U_1.V_5.Y4.Y1);
ZfM_29(Zq0A4_172, (STRING)"::yyWriteNode ();", 17L);
ZfM_33(Zq0A4_172);
}
Zq0A4_185(W_2->Y3, (Zq0A4_170)Z176);
ZfM_29(Zq0A4_172, (STRING)"}", 1L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
return;
}
} EXIT_1:;
}
if (Z170 != NIL && Z170->U_1.V_1.Y0 == Zq0A4_105) {
{
register Zq0A4_231 *W_3 = &Z170->U_1.V_10.Y9;

ZfM_29(Zq0A4_172, (STRING)" yyWriteSelector (\"", 19L);
Zq0A4_192(W_3->Y3);
ZfM_29(Zq0A4_172, (STRING)"\"); yyWriteAddr (", 17L);
Zq0A4_192(W_3->Y3);
ZfM_29(Zq0A4_172, (STRING)");", 2L);
ZfM_33(Zq0A4_172);
return;
}
}
if (Z170 != NIL && Z170->U_1.V_1.Y0 == Zq0A4_106) {
for (;;) {
{
register Zq0A4_232 *W_4 = &Z170->U_1.V_11.Y10;

if (!((Zq0A4_176 & W_4->Y6) == 0X0L)) {
goto EXIT_2;
}
ZfM_29(Zq0A4_172, (STRING)" yyWriteSelector (\"", 19L);
Zq0A4_192(W_4->Y3);
ZfM_29(Zq0A4_172, (STRING)"\"); write", 9L);
Zq0A4_192(W_4->Y5);
ZfM_29(Zq0A4_172, (STRING)" (", 2L);
Zq0A4_192(W_4->Y3);
ZfM_29(Zq0A4_172, (STRING)") xxWriteNl ();", 15L);
ZfM_33(Zq0A4_172);
return;
}
} EXIT_2:;
}
}

static void Z175
# ifdef HAVE_ARGS
(Zq0A4_153 Z170)
# else
(Z170)
Zq0A4_153 Z170;
# endif
{
struct S_28 Z171;

if (Z170 == Zq0A4_97) {
return;
}
if (Z170 != NIL && Z170->U_1.V_1.Y0 == Zq0A4_100) {
for (;;) {
{
register Zq0A4_226 *W_5 = &Z170->U_1.V_5.Y4;

if (!((Zq0A4_177 & W_5->Y2) == 0X0L)) {
goto EXIT_3;
}
if (!(Zq0A4dpZf_10(Z170) > 1 || Zq0A4dpZe_6(Z170))) {
goto EXIT_3;
}
ZfM_29(Zq0A4_172, (STRING)"void ", 5L);
Zq0A4_192(W_5->Y1);
ZfM_29(Zq0A4_172, (STRING)"::yyMarkNode () {", 17L);
ZfM_33(Zq0A4_172);
Zq0A4dpZf_8(Z170);
Zq0A4_185(Z170, (Zq0A4_170)Z175);
ZfM_29(Zq0A4_172, (STRING)"}", 1L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
return;
}
} EXIT_3:;
}
if (Z170 != NIL && Z170->U_1.V_1.Y0 == Zq0A4_105) {
for (;;) {
{
register Zq0A4_231 *W_6 = &Z170->U_1.V_10.Y9;

if (!(Z170 != Zq0A4dpZf_2)) {
goto EXIT_4;
}
ZfM_29(Zq0A4_172, (STRING)" ", 1L);
Zq0A4_192(W_6->Y3);
ZfM_29(Zq0A4_172, (STRING)"->yyMarkTree ();", 16L);
ZfM_33(Zq0A4_172);
return;
}
} EXIT_4:;
}
if (Z170 != NIL && Z170->U_1.V_1.Y0 == Zq0A4_106) {
for (;;) {
{
register Zq0A4_232 *W_7 = &Z170->U_1.V_11.Y10;

if (!((Zq0A4_176 & W_7->Y6) == 0X0L)) {
goto EXIT_5;
}
if (!(W_7->Y4 == Zq0A4_86)) {
goto EXIT_5;
}
ZfM_29(Zq0A4_172, (STRING)"# ifdef SUPPORT_TVA", 19L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" if (", 5L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"_TreatTVAasChild) ", 18L);
Zq0A4_192(W_7->Y3);
ZfM_29(Zq0A4_172, (STRING)"->yyMarkTree ();", 16L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# endif", 7L);
ZfM_33(Zq0A4_172);
return;
}
} EXIT_5:;
}
}

static void Z178
# ifdef HAVE_ARGS
(Zq0A4_153 Z170)
# else
(Z170)
Zq0A4_153 Z170;
# endif
{
struct S_26 Z171;

if (Z170 == Zq0A4_97) {
return;
}
if (Z170 != NIL && Z170->U_1.V_1.Y0 == Zq0A4_100) {
{
register struct S_27 *W_8 = &Z171.U_1.V_1.Y0;

for (;;) {
{
register Zq0A4_226 *W_9 = &Z170->U_1.V_5.Y4;

if (!((Zq0A4_177 & W_9->Y2) == 0X0L)) {
goto EXIT_6;
}
if (!(Zq0A4dpZf_11(W_9->Y3) > 0)) {
goto EXIT_6;
}
W_8->Y0 = Zq0A4_97;
ZfM_29(Zq0A4_172, (STRING)"char * ", 7L);
Zq0A4_192(W_9->Y1);
ZfM_29(Zq0A4_172, (STRING)"::yyWrite () {", 14L);
ZfM_33(Zq0A4_172);
if (W_9->Y6->U_1.V_1.Y0 == Zq0A4_100 && ((SET_ELEM (Zq0A4_44) | SET_ELEM (Zq0A4_45)) & W_9->Y6->U_1.V_5.Y4.Y2) != 0X0L) {
Zq0A4dpZf_8(W_9->Y6);
W_8->Y0 = Zq0A4dpZf_2;
Zq0A4dpZf_8(Z170);
ZfM_29(Zq0A4_172, (STRING)" ", 1L);
if (W_8->Y0 != Zq0A4_97 && W_8->Y0 == Zq0A4dpZf_2) {
ZfM_29(Zq0A4_172, (STRING)"char * yyResult = ", 18L);
}
Zq0A4_192(W_9->Y6->U_1.V_5.Y4.Y1);
ZfM_29(Zq0A4_172, (STRING)"::yyWrite ();", 13L);
ZfM_33(Zq0A4_172);
if (W_8->Y0 != Zq0A4_97 && W_8->Y0 != Zq0A4dpZf_2) {
ZfM_29(Zq0A4_172, (STRING)" yyIndentSelectorTree (\"", 24L);
Zq0A4_192(W_8->Y0->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)"\", ", 3L);
Zq0A4_192(W_8->Y0->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)");", 2L);
ZfM_33(Zq0A4_172);
}
} else {
Zq0A4dpZf_8(Z170);
}
Zq0A4_185(W_9->Y3, (Zq0A4_170)Z178);
if (Zq0A4dpZf_2 == Zq0A4_97) {
ZfM_29(Zq0A4_172, (STRING)" return 0;", 10L);
ZfM_33(Zq0A4_172);
} else {
if (Zq0A4dpZf_2 == W_8->Y0) {
ZfM_29(Zq0A4_172, (STRING)" return yyResult;", 17L);
ZfM_33(Zq0A4_172);
} else {
ZfM_29(Zq0A4_172, (STRING)" return \"", 9L);
Zq0A4_192(Zq0A4dpZf_2->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)"\";", 2L);
ZfM_33(Zq0A4_172);
}
}
ZfM_29(Zq0A4_172, (STRING)"}", 1L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
return;
}
} EXIT_6:;
}
}
if (Z170 != NIL && Z170->U_1.V_1.Y0 == Zq0A4_105) {
for (;;) {
{
register Zq0A4_231 *W_10 = &Z170->U_1.V_10.Y9;

if (!(Z170 != Zq0A4dpZf_2)) {
goto EXIT_7;
}
ZfM_29(Zq0A4_172, (STRING)" yyIndentSelectorTree (\"", 24L);
Zq0A4_192(W_10->Y3);
ZfM_29(Zq0A4_172, (STRING)"\", ", 3L);
Zq0A4_192(W_10->Y3);
ZfM_29(Zq0A4_172, (STRING)");", 2L);
ZfM_33(Zq0A4_172);
return;
}
} EXIT_7:;
}
if (Z170 != NIL && Z170->U_1.V_1.Y0 == Zq0A4_106) {
for (;;) {
{
register Zq0A4_232 *W_11 = &Z170->U_1.V_11.Y10;

if (!((Zq0A4_176 & W_11->Y6) == 0X0L)) {
goto EXIT_8;
}
if (W_11->Y4 == Zq0A4_86) {
ZfM_29(Zq0A4_172, (STRING)"# ifdef SUPPORT_TVA", 19L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" if (", 5L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"_TreatTVAasChild)", 17L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  yyIndentSelectorTree (\"", 25L);
Zq0A4_192(W_11->Y3);
ZfM_29(Zq0A4_172, (STRING)"\", ", 3L);
Zq0A4_192(W_11->Y3);
ZfM_29(Zq0A4_172, (STRING)");", 2L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" else", 5L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# endif", 7L);
ZfM_33(Zq0A4_172);
}
ZfM_29(Zq0A4_172, (STRING)" { writeSELECTOR (\"", 19L);
Zq0A4_192(W_11->Y3);
ZfM_29(Zq0A4_172, (STRING)"\") write", 8L);
Zq0A4_192(W_11->Y5);
ZfM_29(Zq0A4_172, (STRING)" (", 2L);
Zq0A4_192(W_11->Y3);
ZfM_29(Zq0A4_172, (STRING)") xxWriteNl (); }", 17L);
ZfM_33(Zq0A4_172);
return;
}
} EXIT_8:;
}
}

static void Z179
# ifdef HAVE_ARGS
(Zq0A4_153 Z170)
# else
(Z170)
Zq0A4_153 Z170;
# endif
{
struct S_23 Z171;

if (Z170 == Zq0A4_97) {
return;
}
if (Z170 != NIL && Z170->U_1.V_1.Y0 == Zq0A4_100) {
{
register struct S_24 *W_12 = &Z171.U_1.V_1.Y0;

for (;;) {
{
register Zq0A4_226 *W_13 = &Z170->U_1.V_5.Y4;

if (!((Zq0A4_177 & W_13->Y2) == 0X0L)) {
goto EXIT_9;
}
if (!(Zq0A4dpZf_11(W_13->Y3) > 0)) {
goto EXIT_9;
}
ZfM_29(Zq0A4_172, (STRING)"void ", 5L);
Zq0A4_192(W_13->Y1);
ZfM_29(Zq0A4_172, (STRING)"::yyRead () {", 13L);
ZfM_33(Zq0A4_172);
if (W_13->Y6->U_1.V_1.Y0 == Zq0A4_100 && ((SET_ELEM (Zq0A4_44) | SET_ELEM (Zq0A4_45)) & W_13->Y6->U_1.V_5.Y4.Y2) != 0X0L) {
{
register struct S_25 *W_14 = &W_12->Y0;

ZfM_29(Zq0A4_172, (STRING)" ", 1L);
Zq0A4_192(W_13->Y6->U_1.V_5.Y4.Y1);
ZfM_29(Zq0A4_172, (STRING)"::yyRead ();", 12L);
ZfM_33(Zq0A4_172);
Zq0A4dpZf_8(W_13->Y6);
W_14->Y0 = Zq0A4dpZf_2;
Zq0A4dpZf_8(Z170);
if (W_14->Y0 != Zq0A4_97 && W_14->Y0 != Zq0A4dpZf_2) {
ZfM_29(Zq0A4_172, (STRING)" ", 1L);
Zq0A4_192(W_14->Y0->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)" = (class ", 10L);
Zq0A4_192(W_14->Y0->U_1.V_10.Y9.Y4);
ZfM_29(Zq0A4_172, (STRING)" *) yyReadSelectorTree ();", 26L);
ZfM_33(Zq0A4_172);
}
}
} else {
Zq0A4dpZf_8(Z170);
}
Zq0A4_185(W_13->Y3, (Zq0A4_170)Z179);
ZfM_29(Zq0A4_172, (STRING)"}", 1L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
return;
}
} EXIT_9:;
}
}
if (Z170 != NIL && Z170->U_1.V_1.Y0 == Zq0A4_105) {
for (;;) {
{
register Zq0A4_231 *W_15 = &Z170->U_1.V_10.Y9;

if (!(Z170 != Zq0A4dpZf_2)) {
goto EXIT_10;
}
ZfM_29(Zq0A4_172, (STRING)" ", 1L);
Zq0A4_192(W_15->Y3);
ZfM_29(Zq0A4_172, (STRING)" = (class ", 10L);
Zq0A4_192(W_15->Y4);
ZfM_29(Zq0A4_172, (STRING)" *) yyReadSelectorTree ();", 26L);
ZfM_33(Zq0A4_172);
return;
}
} EXIT_10:;
}
if (Z170 != NIL && Z170->U_1.V_1.Y0 == Zq0A4_106) {
for (;;) {
{
register Zq0A4_232 *W_16 = &Z170->U_1.V_11.Y10;

if (!((Zq0A4_176 & W_16->Y6) == 0X0L)) {
goto EXIT_11;
}
if (W_16->Y4 == Zq0A4_86) {
ZfM_29(Zq0A4_172, (STRING)"# ifdef SUPPORT_TVA", 19L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" if (", 5L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"_TreatTVAasChild)", 17L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  ", 2L);
Zq0A4_192(W_16->Y3);
ZfM_29(Zq0A4_172, (STRING)" = (", 4L);
Zq0A4_192(W_16->Y4);
ZfM_29(Zq0A4_172, (STRING)") yyReadSelectorTree ();", 24L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" else", 5L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# endif", 7L);
ZfM_33(Zq0A4_172);
}
ZfM_29(Zq0A4_172, (STRING)" { readSELECTOR () read", 23L);
Zq0A4_192(W_16->Y5);
ZfM_29(Zq0A4_172, (STRING)" (", 2L);
Zq0A4_192(W_16->Y3);
ZfM_29(Zq0A4_172, (STRING)") yyReadNl (); }", 16L);
ZfM_33(Zq0A4_172);
return;
}
} EXIT_11:;
}
}

static void Z180
# ifdef HAVE_ARGS
(Zq0A4_153 Z170)
# else
(Z170)
Zq0A4_153 Z170;
# endif
{
struct S_22 Z171;

if (Z170 == Zq0A4_97) {
return;
}
if (Z170 != NIL && Z170->U_1.V_1.Y0 == Zq0A4_100) {
for (;;) {
{
register Zq0A4_226 *W_17 = &Z170->U_1.V_5.Y4;

if (!((Zq0A4_177 & W_17->Y2) == 0X0L && ((SET_ELEM (Zq0A4_44) | SET_ELEM (Zq0A4_45)) & W_17->Y2) != 0X0L)) {
goto EXIT_12;
}
ZfM_29(Zq0A4_172, (STRING)"  case k", 8L);
Zq0A4_192(W_17->Y1);
ZfM_29(Zq0A4_172, (STRING)":", 1L);
ZfM_33(Zq0A4_172);
Zq0A4dpZf_8(Z170);
Z155 = W_17->Y1;
Zq0A4_185(Z170, (Zq0A4_170)Z180);
if (Zq0A4dpZf_2 == Zq0A4_97) {
ZfM_29(Zq0A4_172, (STRING)"   return;", 10L);
ZfM_33(Zq0A4_172);
} else {
ZfM_29(Zq0A4_172, (STRING)"   yyt = ((class ", 17L);
Zq0A4_192(W_17->Y1);
ZfM_29(Zq0A4_172, (STRING)" *) yyt)->", 10L);
Zq0A4_192(Zq0A4dpZf_2->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)"; break;", 8L);
ZfM_33(Zq0A4_172);
}
return;
}
} EXIT_12:;
}
if (Z170 != NIL && Z170->U_1.V_1.Y0 == Zq0A4_105) {
for (;;) {
{
register Zq0A4_231 *W_18 = &Z170->U_1.V_10.Y9;

if (!(Z170 != Zq0A4dpZf_2)) {
goto EXIT_13;
}
ZfM_29(Zq0A4_172, (STRING)"   yyPutTree (((class ", 22L);
Zq0A4_192(Z155);
ZfM_29(Zq0A4_172, (STRING)" *) yyt)->", 10L);
Zq0A4_192(W_18->Y3);
ZfM_29(Zq0A4_172, (STRING)");", 2L);
ZfM_33(Zq0A4_172);
return;
}
} EXIT_13:;
}
if (Z170 != NIL && Z170->U_1.V_1.Y0 == Zq0A4_106) {
for (;;) {
{
register Zq0A4_232 *W_19 = &Z170->U_1.V_11.Y10;

if (!((Zq0A4_176 & W_19->Y6) == 0X0L)) {
goto EXIT_14;
}
if (W_19->Y4 == Zq0A4_86) {
ZfM_29(Zq0A4_172, (STRING)"# ifdef SUPPORT_TVA", 19L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   if (", 7L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"_TreatTVAasChild)", 17L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"    yyPutTree (((class ", 23L);
Zq0A4_192(Z155);
ZfM_29(Zq0A4_172, (STRING)" *) yyt)->", 10L);
Zq0A4_192(W_19->Y3);
ZfM_29(Zq0A4_172, (STRING)");", 2L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   else", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# endif", 7L);
ZfM_33(Zq0A4_172);
}
ZfM_29(Zq0A4_172, (STRING)"   { put", 8L);
Zq0A4_192(W_19->Y4);
ZfM_29(Zq0A4_172, (STRING)" (((class ", 10L);
Zq0A4_192(Z155);
ZfM_29(Zq0A4_172, (STRING)" *) yyt)->", 10L);
Zq0A4_192(W_19->Y3);
ZfM_29(Zq0A4_172, (STRING)") }", 3L);
ZfM_33(Zq0A4_172);
return;
}
} EXIT_14:;
}
}

static void Z181
# ifdef HAVE_ARGS
(Zq0A4_153 Z170)
# else
(Z170)
Zq0A4_153 Z170;
# endif
{
struct S_21 Z171;

if (Z170 == Zq0A4_97) {
return;
}
if (Z170 != NIL && Z170->U_1.V_1.Y0 == Zq0A4_100) {
for (;;) {
{
register Zq0A4_226 *W_20 = &Z170->U_1.V_5.Y4;

if (!((Zq0A4_177 & W_20->Y2) == 0X0L && ((SET_ELEM (Zq0A4_44) | SET_ELEM (Zq0A4_45)) & W_20->Y2) != 0X0L)) {
goto EXIT_15;
}
ZfM_29(Zq0A4_172, (STRING)"  case k", 8L);
Zq0A4_192(W_20->Y1);
ZfM_29(Zq0A4_172, (STRING)":", 1L);
ZfM_33(Zq0A4_172);
Zq0A4dpZf_8(Z170);
Z155 = W_20->Y1;
Zq0A4_185(Z170, (Zq0A4_170)Z181);
ZfM_29(Zq0A4_172, (STRING)"   break;", 9L);
ZfM_33(Zq0A4_172);
return;
}
} EXIT_15:;
}
if (Z170 != NIL && Z170->U_1.V_1.Y0 == Zq0A4_105) {
for (;;) {
{
register Zq0A4_231 *W_21 = &Z170->U_1.V_10.Y9;

if (!(Z170 != Zq0A4dpZf_2)) {
goto EXIT_16;
}
ZfM_29(Zq0A4_172, (STRING)"   ((class ", 11L);
Zq0A4_192(Z155);
ZfM_29(Zq0A4_172, (STRING)" *) yyt)->", 10L);
Zq0A4_192(W_21->Y3);
ZfM_29(Zq0A4_172, (STRING)" = (class ", 10L);
Zq0A4_192(W_21->Y4);
ZfM_29(Zq0A4_172, (STRING)" *) yyGetTree ();", 17L);
ZfM_33(Zq0A4_172);
return;
}
} EXIT_16:;
}
if (Z170 != NIL && Z170->U_1.V_1.Y0 == Zq0A4_106) {
for (;;) {
{
register Zq0A4_232 *W_22 = &Z170->U_1.V_11.Y10;

if (!((Zq0A4_176 & W_22->Y6) == 0X0L)) {
goto EXIT_17;
}
if (W_22->Y4 == Zq0A4_86) {
ZfM_29(Zq0A4_172, (STRING)"# ifdef SUPPORT_TVA", 19L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   if (", 7L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"_TreatTVAasChild)", 17L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"    ((class ", 12L);
Zq0A4_192(Z155);
ZfM_29(Zq0A4_172, (STRING)" *) yyt)->", 10L);
Zq0A4_192(W_22->Y3);
ZfM_29(Zq0A4_172, (STRING)" = yyGetTree ();", 16L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   else", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# endif", 7L);
ZfM_33(Zq0A4_172);
}
ZfM_29(Zq0A4_172, (STRING)"   { get", 8L);
Zq0A4_192(W_22->Y4);
ZfM_29(Zq0A4_172, (STRING)" (((class ", 10L);
Zq0A4_192(Z155);
ZfM_29(Zq0A4_172, (STRING)" *) yyt)->", 10L);
Zq0A4_192(W_22->Y3);
ZfM_29(Zq0A4_172, (STRING)") }", 3L);
ZfM_33(Zq0A4_172);
return;
}
} EXIT_17:;
}
}

void Zq0A4dpZf_8
# ifdef HAVE_ARGS
(Zq0A4_153 Z170)
# else
(Z170)
Zq0A4_153 Z170;
# endif
{
struct S_20 Z171;

if (Z170 == Zq0A4_97) {
return;
}
if (Z170 != NIL && Z170->U_1.V_1.Y0 == Zq0A4_100) {
for (;;) {
{
register Zq0A4_226 *W_23 = &Z170->U_1.V_5.Y4;

Zq0A4dpZf_2 = Zq0A4_97;
Z156 = Zq0A4_97;
Zq0A4_185(Z170, (Zq0A4_170)Zq0A4dpZf_8);
if (!(Z156 != Zq0A4_97)) {
goto EXIT_18;
}
Zq0A4dpZf_2 = Z156;
return;
}
} EXIT_18:;
}
if (Z170 != NIL && Z170->U_1.V_1.Y0 == Zq0A4_105) {
for (;;) {
{
register Zq0A4_231 *W_24 = &Z170->U_1.V_10.Y9;

Zq0A4dpZf_2 = Z170;
if (!IN(Zq0A4_3, W_24->Y6)) {
goto EXIT_19;
}
Z156 = Z170;
return;
}
} EXIT_19:;
}
}

static void Z198
# ifdef HAVE_ARGS
(Zq0A4_153 Z170)
# else
(Z170)
Zq0A4_153 Z170;
# endif
{
struct S_19 Z171;

if (Z170 == Zq0A4_97) {
return;
}
if (Z170 != NIL && Z170->U_1.V_1.Y0 == Zq0A4_100) {
{
register Zq0A4_226 *W_25 = &Z170->U_1.V_5.Y4;

Z156 = Zq0A4_97;
Zq0A4_185(Z170, (Zq0A4_170)Z198);
return;
}
}
if (Z170 != NIL && Z170->U_1.V_1.Y0 == Zq0A4_105) {
for (;;) {
{
register Zq0A4_231 *W_26 = &Z170->U_1.V_10.Y9;

if (!IN(Zq0A4_3, W_26->Y6)) {
goto EXIT_20;
}
Z156 = Z170;
return;
}
} EXIT_20:;
}
}

static void Z199
# ifdef HAVE_ARGS
(Zq0A4_153 Z170)
# else
(Z170)
Zq0A4_153 Z170;
# endif
{
struct S_18 Z171;

if (Z170 == Zq0A4_97) {
return;
}
if (Z170 != NIL && Z170->U_1.V_1.Y0 == Zq0A4_100) {
{
register Zq0A4_226 *W_27 = &Z170->U_1.V_5.Y4;

Zq0A4dpZf_2 = Zq0A4_97;
Zq0A4_185(Z170, (Zq0A4_170)Z199);
return;
}
}
if (Z170 != NIL && Z170->U_1.V_1.Y0 == Zq0A4_105) {
for (;;) {
{
register Zq0A4_231 *W_28 = &Z170->U_1.V_10.Y9;

if (!IN(Zq0A4_3, W_28->Y6)) {
goto EXIT_21;
}
Zq0A4dpZf_2 = Z170;
return;
}
} EXIT_21:;
}
}

BOOLEAN Zq0A4dpZf_9
# ifdef HAVE_ARGS
(Zq0A4_153 Z170)
# else
(Z170)
Zq0A4_153 Z170;
# endif
{
struct S_16 Z171;

if (Z170 == Zq0A4_97) {
return FALSE;
}
if (Z170 != NIL && Z170->U_1.V_1.Y0 == Zq0A4_100) {
{
register struct S_17 *W_29 = &Z171.U_1.V_1.Y0;

for (;;) {
{
register Zq0A4_226 *W_30 = &Z170->U_1.V_5.Y4;

Zq0A4dpZf_8(Z170);
if (!(Zq0A4dpZf_2 != Zq0A4_97)) {
goto EXIT_22;
}
W_29->Y0 = Zq0A4dpZf_2;
Zq0A4dpZf_2 = Zq0A4_97;
Zq0A4dpZf_8(W_30->Y6);
if (!(Zq0A4dpZf_2 != W_29->Y0)) {
goto EXIT_22;
}
return TRUE;
}
} EXIT_22:;
}
}
return FALSE;
}

INTEGER Zq0A4dpZf_10
# ifdef HAVE_ARGS
(Zq0A4_153 Z201)
# else
(Z201)
Zq0A4_153 Z201;
# endif
{
struct S_15 Z171;

for (;;) {
for (;;) {
if (Z201 != NIL && Z201->U_1.V_1.Y0 == Zq0A4_105) {
return Zq0A4dpZf_10(Z201->U_1.V_10.Y9.Y1) + 1;
}
if (Zq0A4_297(Z201, Zq0A4_103)) {
Z201 = Z201->U_1.V_8.Y7.Y1;
goto EXIT_24;
}
if (Z201 != NIL && Z201->U_1.V_1.Y0 == Zq0A4_100) {
return Zq0A4dpZf_10(Z201->U_1.V_5.Y4.Y3) + Zq0A4dpZf_10(Z201->U_1.V_5.Y4.Y6);
}
return 0;
} EXIT_24:;
} EXIT_23:;
}

INTEGER Zq0A4dpZf_11
# ifdef HAVE_ARGS
(Zq0A4_153 Z205)
# else
(Z205)
Zq0A4_153 Z205;
# endif
{
struct S_14 Z171;

for (;;) {
for (;;) {
if (Z205 != NIL && Z205->U_1.V_1.Y0 == Zq0A4_105) {
return Zq0A4dpZf_11(Z205->U_1.V_10.Y9.Y1) + 1;
}
if (Z205 != NIL && Z205->U_1.V_1.Y0 == Zq0A4_106) {
for (;;) {
{
register Zq0A4_232 *W_31 = &Z205->U_1.V_11.Y10;

if (!((Zq0A4_176 & W_31->Y6) == 0X0L)) {
goto EXIT_27;
}
return Zq0A4dpZf_11(Z205->U_1.V_11.Y10.Y1) + 1;
}
} EXIT_27:;
}
if (Zq0A4_297(Z205, Zq0A4_103)) {
Z205 = Z205->U_1.V_8.Y7.Y1;
goto EXIT_26;
}
if (Z205 != NIL && Z205->U_1.V_1.Y0 == Zq0A4_100) {
return Zq0A4dpZf_11(Z205->U_1.V_5.Y4.Y3) + Zq0A4dpZf_11(Z205->U_1.V_5.Y4.Y6);
}
return 0;
} EXIT_26:;
} EXIT_25:;
}

void Zq0A4dpZf_12
# ifdef HAVE_ARGS
(Zq0A4_153 Z170)
# else
(Z170)
Zq0A4_153 Z170;
# endif
{
struct S_13 Z171;

if (Z170 == Zq0A4_97) {
return;
}
if (Z170 != NIL && Z170->U_1.V_1.Y0 == Zq0A4_127) {
{
register Zq0A4_253 *W_32 = &Z170->U_1.V_32.Y31;

ZfM_29(Zq0A4_172, (STRING)"// Search", 9L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"static unsigned long yyLine, yyCurLine;", 39L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"static ", 7L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)" yyTheTree, yyNode;", 19L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"static tIdent yyFile;", 21L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"static void yySearch4 (", 23L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)" yyt, tPosition yyp) {", 22L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" if ((yyFile == Idents_PREFIX NoIdent || yyFile == yyp.FileName) &&", 67L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   yyLine <= yyp.Line && yyp.Line < yyCurLine)", 46L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  { yyNode = yyt; yyCurLine = yyp.Line; }", 41L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"}", 1L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"static void yySearch2 (", 23L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)" yyt) {", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" switch (yyt->Kind) {", 21L);
ZfM_33(Zq0A4_172);
Zq0A4_184(W_32->Y13, (Zq0A4_170)Z207);
ZfM_29(Zq0A4_172, (STRING)" }", 2L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"}", 1L);
ZfM_33(Zq0A4_172);
return;
}
}
}

static void Z207
# ifdef HAVE_ARGS
(Zq0A4_153 Z208)
# else
(Z208)
Zq0A4_153 Z208;
# endif
{
struct S_12 Z171;

if (Z208 == Zq0A4_97) {
return;
}
if (Z208 != NIL && Z208->U_1.V_1.Y0 == Zq0A4_100) {
for (;;) {
{
register Zq0A4_226 *W_33 = &Z208->U_1.V_5.Y4;

if (!((Zq0A4_177 & W_33->Y2) == 0X0L && IN(Zq0A4_45, W_33->Y2))) {
goto EXIT_28;
}
if (!Z209(Z208)) {
goto EXIT_28;
}
ZfM_29(Zq0A4_172, (STRING)" case k", 7L);
Zq0A4_192(W_33->Y1);
ZfM_29(Zq0A4_172, (STRING)":", 1L);
ZfM_33(Zq0A4_172);
Z155 = W_33->Y1;
Zq0A4_185(Z208, (Zq0A4_170)Z207);
ZfM_29(Zq0A4_172, (STRING)"  break;", 8L);
ZfM_33(Zq0A4_172);
return;
}
} EXIT_28:;
}
if (Z208 != NIL && Z208->U_1.V_1.Y0 == Zq0A4_106) {
for (;;) {
{
register Zq0A4_232 *W_34 = &Z208->U_1.V_11.Y10;

if (!(W_34->Y4 == Zq0A4_75)) {
goto EXIT_29;
}
ZfM_29(Zq0A4_172, (STRING)"  yySearch4 (yyt, ((class ", 26L);
Zq0A4_192(Z155);
ZfM_29(Zq0A4_172, (STRING)" *) yyt)->", 10L);
Zq0A4_192(W_34->Y3);
ZfM_29(Zq0A4_172, (STRING)");", 2L);
ZfM_33(Zq0A4_172);
return;
}
} EXIT_29:;
}
}

static BOOLEAN Z209
# ifdef HAVE_ARGS
(Zq0A4_153 Z210)
# else
(Z210)
Zq0A4_153 Z210;
# endif
{
struct S_11 Z171;

for (;;) {
for (;;) {
if (Z210 == Zq0A4_97) {
return FALSE;
}
if (Z210 != NIL && Z210->U_1.V_1.Y0 == Zq0A4_106) {
for (;;) {
{
register Zq0A4_232 *W_35 = &Z210->U_1.V_11.Y10;

if (!(W_35->Y4 == Zq0A4_75)) {
goto EXIT_32;
}
return TRUE;
}
} EXIT_32:;
}
if (Zq0A4_297(Z210, Zq0A4_103)) {
{
register Zq0A4_229 *W_36 = &Z210->U_1.V_8.Y7;

Z210 = W_36->Y1;
goto EXIT_31;
}
}
if (Z210 != NIL && Z210->U_1.V_1.Y0 == Zq0A4_100) {
for (;;) {
{
register Zq0A4_226 *W_37 = &Z210->U_1.V_5.Y4;

if (!(Z209(W_37->Y3) || Z209(W_37->Y6))) {
goto EXIT_33;
}
return TRUE;
}
} EXIT_33:;
}
return FALSE;
} EXIT_31:;
} EXIT_30:;
}

void Zq0A4dpZf_13
# ifdef HAVE_ARGS
(Zq0A4_153 Z170)
# else
(Z170)
Zq0A4_153 Z170;
# endif
{
CARDINAL Z196;
CHAR Z212;
struct S_10 Z171;

if (Z170 == Zq0A4_97) {
return;
}
if (Z170 != NIL && Z170->U_1.V_1.Y0 == Zq0A4_127) {
{
register Zq0A4_253 *W_38 = &Z170->U_1.V_32.Y31;

if (ZpmCQ_25(ORD('e'), &Zq0A4_171)) {
if (ZpmCQ_25((LONGCARD)Zq0A4dpZf_0, &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)"# ifdef DRAWTREE", 16L);
ZfM_33(Zq0A4_172);
}
ZfM_29(Zq0A4_172, (STRING)"# include <tk.h>", 16L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# if (TCL_MAJOR_VERSION >= 8) && (TCL_MINOR_VERSION >= 4)", 57L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"#  define AST_CONST const", 25L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# else", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"#  define AST_CONST", 19L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# endif", 7L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# define yyMaxCoord		65535", 26L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# define yyIsBusy		65535", 24L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# define yyTruncByDepth		65535", 30L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# define yyTruncByLength	65534", 30L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"static Tcl_Interp * yygInterp;", 30L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"static ", 7L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)" atot (AST_CONST char * yys)", 28L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"{", 1L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" ", 1L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)" yyt;", 5L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" sscanf (yys, \"%p\", & yyt);", 27L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" return yyt;", 12L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"}", 1L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"static int yySearch (ClientData yyclass, Tcl_Interp * yyinterp, int yyargc, AST_CONST char * yyargv [])", 103L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"{", 1L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" ", 1L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)" yyTheTree = atot (yyargv [1]);", 31L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" char yyArray [32];", 19L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" yyLine = atol (yyargv [2]);", 28L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" yyFile = yyargv [3][0] == '\\0' ? Idents_PREFIX NoIdent :", 57L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  Idents_PREFIX MakeIdent (yyargv [3]);", 39L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" yyCurLine = 1000000;", 21L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" yyNode = yyTheTree;", 20L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" yyTheTree->TraverseTD (yySearch2);", 35L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" sprintf (yyArray, \"%p\", yyNode);", 33L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" Tcl_SetResult (yyinterp, yyArray, TCL_VOLATILE);", 49L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" return TCL_OK;", 15L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"}", 1L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"static bool yyphase1;", 21L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"static int yymaxx, yymaxy;", 26L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"static int yySetY (", 19L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)" yyp, ", 6L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)" yyt, int yyy, int yyk, int yyl)", 32L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"{", 1L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" int yy, yymax = ++ yyy;", 24L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" if (yyphase1) {", 16L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  if (yyt == ", 13L);
Zq0A4_192(Zq0A4_88);
ZfM_29(Zq0A4_172, (STRING)" || (yyt->yyMark == 0 &&", 24L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   (yyt->yyx == yyIsBusy || yyt->yyy >= (unsigned short) yyy ||", 63L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"    yyp->yyy >= yyTruncByLength)))", 34L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   return yymax;", 16L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  yyt->yyparent = yyp;", 22L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  yyt->yyx = yyIsBusy;", 22L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" } else {", 9L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  if (yyt == ", 13L);
Zq0A4_192(Zq0A4_88);
ZfM_29(Zq0A4_172, (STRING)" || yyt->yyMark == 0 || yyt->yyparent != yyp) return yymax;", 59L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" }", 2L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" yyt->yyMark = 0;", 17L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" if (++ yyl > ", 14L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"_DrawLength) yyk = ", 19L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"_DrawDepth;", 11L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" yyk ++;", 8L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" yyt->yyy = (unsigned short) (yyk <= ", 37L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"_DrawDepth ? 0 : yyTruncByDepth);", 33L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" switch (yyt->Kind) {", 21L);
ZfM_33(Zq0A4_172);
Zq0A4_184(W_38->Y13, (Zq0A4_170)Z214);
ZfM_29(Zq0A4_172, (STRING)" }", 2L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" yyt->yyx = 0;", 14L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" if (yyl > ", 11L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"_DrawLength) {", 14L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  yyt->yyy = yyTruncByLength;", 29L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  return yyy;", 13L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" } else if (yyk > ", 18L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"_DrawDepth) {", 13L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  yyt->yyy = yyTruncByDepth;", 28L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  return yyy;", 13L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" } else {", 9L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  yyt->yyy = (unsigned short) yyy;", 34L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  yymaxy = Max (yymaxy, yyy);", 29L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  return yymax;", 15L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" }", 2L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"}", 1L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"typedef struct { unsigned short yyfirst, yylast; } yytFirstLast;", 64L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"static int yySetX (", 19L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)" yyp, ", 6L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)" yyt, int yyx,  yytFirstLast * yyout)", 37L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"{", 1L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" int yyxin = yyx, yyw;", 22L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" yytFirstLast yyFirstLast;", 26L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" if (yyt == ", 12L);
Zq0A4_192(Zq0A4_88);
ZfM_29(Zq0A4_172, (STRING)" || yyt->yyMark == 0 ||", 23L);
ZfM_29(Zq0A4_172, (STRING)" yyt->yyparent != yyp) return yyx;", 34L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" yyt->yyMark = 0;", 17L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" yyFirstLast.yyfirst = yyMaxCoord;", 34L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" yyFirstLast.yylast = 0;", 24L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" switch (yyt->Kind) {", 21L);
ZfM_33(Zq0A4_172);
Zq0A4_184(W_38->Y13, (Zq0A4_170)Z215);
ZfM_29(Zq0A4_172, (STRING)" }", 2L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" if (yyt->yyy >= yyTruncByLength) {", 35L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  return yyxin;", 15L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" } else {", 9L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  yyt->yyx = (unsigned short) (yyFirstLast.yyfirst == yyMaxCoord ? yyx :", 72L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   (yyFirstLast.yyfirst + yyFirstLast.yylast) / 2);", 51L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  yymaxx = Max ((unsigned short) yymaxx, yyt->yyx);", 51L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  if (yyt->yyparent == yyp) {", 29L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   if (yyout->yyfirst == yyMaxCoord) yyout->yyfirst = yyt->yyx;", 63L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   yyout->yylast = yyt->yyx;", 28L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  }", 3L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  yyxin ++;", 11L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  return Max (yyx, yyxin);", 26L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" }", 2L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"yyList:", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" if (yyt->yyy >= yyTruncByLength) {", 35L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  return yyxin;", 15L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" } else {", 9L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  yyt->yyx = (unsigned short) yyxin;", 36L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  yymaxx = Max (yymaxx, yyxin);", 31L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  if (yyt->yyparent == yyp) {", 29L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   if (yyout->yyfirst == yyMaxCoord) yyout->yyfirst = yyt->yyx;", 63L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   yyout->yylast = yyt->yyx;", 28L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  }", 3L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  return Max (yyx, yyw);", 24L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" }", 2L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"}", 1L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"static void yyDrawEdge (", 24L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)" yyfrom, ", 9L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)" yyto)", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"{", 1L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" char yyCoord [32];", 19L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" if (yyto == ", 13L);
Zq0A4_192(Zq0A4_88);
ZfM_29(Zq0A4_172, (STRING)") return;", 9L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" if (yyto->yyy < yyTruncByLength)", 33L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  sprintf (yyCoord, \"%d %d %d %d\", yyfrom->yyx, yyfrom->yyy,", 60L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   yyto->yyx, yyto->yyy);", 25L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" else if (yyto->yyy == yyTruncByDepth)", 38L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  sprintf (yyCoord, \"%d %d %d %d 1\", yyfrom->yyx, yyfrom->yyy,", 62L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   yyfrom->yyx + 1, yyfrom->yyy);", 33L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" else", 5L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  sprintf (yyCoord, \"%d %d %d %d 1\", yyfrom->yyx, yyfrom->yyy,", 62L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   yyfrom->yyx, yyfrom->yyy + 1);", 33L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" Tcl_VarEval (yygInterp, \"draw_edge \", yyCoord, NULL);", 54L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"}", 1L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"static void yyDrawNode (", 24L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)" yyt)", 5L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"{", 1L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" char yyCoord [32];", 19L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" if (yyt->yyy >= yyTruncByLength) return;", 41L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" sprintf (yyCoord, \"%d %d %p \", yyt->yyx, yyt->yyy, yyt);", 57L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" Tcl_VarEval (yygInterp, \"draw_node \", yyCoord, NodeName [yyt->Kind], NULL);", 76L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" switch (yyt->Kind) {", 21L);
ZfM_33(Zq0A4_172);
Zq0A4_184(W_38->Y13, (Zq0A4_170)Z216);
ZfM_29(Zq0A4_172, (STRING)" }", 2L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"}", 1L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"static int yyPutAttr (ClientData yyclass, Tcl_Interp * yyinterp, int yyargc, AST_CONST char * yyargv [])", 104L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"{", 1L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" FILE * yyf = fopen (\"yyNode\", \"w\");", 36L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" if (yyf) {", 11L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  atot (yyargv [1])->WriteNode (yyf);", 37L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  fclose (yyf);", 15L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" } else {", 9L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  Tcl_SetResult (yyinterp, ErrorsObj->CodeToText (xxDrawTreeyyNode), TCL_STATIC);", 81L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" }", 2L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" return TCL_OK;", 15L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"}", 1L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"static void yyDrawTree (", 24L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)" yyt);", 6L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"static int yyDrawSubTree (ClientData yyclass, Tcl_Interp * yyinterp, int yyargc, AST_CONST char * yyargv [])", 108L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"{", 1L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" atot (yyargv [1])->Draw ();", 28L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" return TCL_OK;", 15L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"}", 1L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# ifndef DrawAttr", 17L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# define DrawAttr(x, y)", 23L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# endif", 7L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"static int yyCallAttr (ClientData yyclass, Tcl_Interp * yyinterp, int yyargc, AST_CONST char * yyargv [])", 105L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"{", 1L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" DrawAttr (atot (yyargv [1]), (char *) yyargv [2]);", 51L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" return TCL_OK;", 15L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"}", 1L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"static int yySetParam (ClientData yyclass, Tcl_Interp * yyinterp, int yyargc, AST_CONST char * yyargv [])", 105L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"{", 1L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" ", 1L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"_DrawDepth     = atoi (yyargv [1]);", 35L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" ", 1L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"_DrawLength    = atoi (yyargv [2]);", 35L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" ", 1L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"_DrawBoxWidth  = atoi (yyargv [3]);", 35L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" ", 1L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"_DrawBoxHeight = atoi (yyargv [4]);", 35L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" strncpy (", 10L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"_DrawFileName, yyargv [5], 256);", 32L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" ", 1L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"_DrawFileName [255] = '\\0';", 27L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" return TCL_OK;", 15L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"}", 1L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
}
if (ZpmCQ_25(ORD('e'), &Zq0A4_171) || Zq0A4_179) {
ZfM_29(Zq0A4_172, (STRING)"void SetDepth (int yyDepth)", 27L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"{", 1L);
ZfM_33(Zq0A4_172);
}
if (ZpmCQ_25(ORD('e'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)" ", 1L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"_DrawDepth = yyDepth;", 21L);
ZfM_33(Zq0A4_172);
}
if (ZpmCQ_25(ORD('e'), &Zq0A4_171) || Zq0A4_179) {
ZfM_29(Zq0A4_172, (STRING)"}", 1L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"void SetBox (int yyWidth, int yyHeight)", 39L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"{", 1L);
ZfM_33(Zq0A4_172);
}
if (ZpmCQ_25(ORD('e'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)" ", 1L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"_DrawBoxWidth  = yyWidth;", 25L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" ", 1L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"_DrawBoxHeight = yyHeight;", 26L);
ZfM_33(Zq0A4_172);
}
if (ZpmCQ_25(ORD('e'), &Zq0A4_171) || Zq0A4_179) {
ZfM_29(Zq0A4_172, (STRING)"}", 1L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
}
if (ZpmCQ_25(ORD('e'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)"static void yyDrawTree (", 24L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)" yyt)", 5L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"{", 1L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# ifdef SUPPORT_TVA", 19L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" bool yyPrevTreatTVAasChild = ", 30L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"_TreatTVAasChild;", 17L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" ", 1L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"_TreatTVAasChild = false;", 25L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# endif", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" char yyString [128];", 21L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" yytFirstLast yyDummy;", 22L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" yyDummy.yyfirst = yyMaxCoord;", 30L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" yymaxx = yymaxy = 0;", 21L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" yyt->yyMarkTree (); yyphase1 = true;", 37L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" yySetY (yyt, yyt, 0, 0, 0);", 28L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" yyt->yyMarkTree (); yyphase1 = false;", 38L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" yySetY (yyt, yyt, 0, 0, 0);", 28L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" yyt->yyMarkTree ();", 20L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" yySetX (yyt, yyt, 0, & yyDummy);", 33L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" yymaxx = Max (yymaxx, 16);", 27L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" yymaxy = Max (yymaxy, 16);", 27L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" sprintf (yyString, \"%d %d %d %d %d %d {%s}\", yymaxx, yymaxy, ", 62L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"_DrawBoxWidth, ", 15L);
ZfM_33(Zq0A4_172);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"_DrawBoxHeight, ", 16L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"_DrawDepth, ", 12L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"_DrawLength, ", 13L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"_DrawFileName);", 15L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" Tcl_VarEval (yygInterp, \"draw_tree \", yyString, NULL);", 55L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" yyt->TraverseTD (yyDrawNode);", 30L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# ifdef SUPPORT_TVA", 19L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" ", 1L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"_TreatTVAasChild = yyPrevTreatTVAasChild;", 41L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# endif", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"}", 1L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
}
if (ZpmCQ_25(ORD('e'), &Zq0A4_171) || Zq0A4_179) {
ZfM_29(Zq0A4_172, (STRING)"void Draw (", 11L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)" yyt)", 5L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"{", 1L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" if (yyt) yyt->Draw ();", 23L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"}", 1L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"void ", 5L);
Zq0A4_192(Zq0A4_87);
ZfM_29(Zq0A4_172, (STRING)"::Draw ()", 9L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"{", 1L);
ZfM_33(Zq0A4_172);
}
if (ZpmCQ_25(ORD('e'), &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)" int yyCode;", 12L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" Tcl_Interp * yyInterp;", 23L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  char yyPath [256], * yyp;", 27L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" Tcl_FindExecutable (\"\");", 25L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" yygInterp = yyInterp = Tcl_CreateInterp ();", 44L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" yyCode = Tcl_Init (yyInterp);", 30L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" if (yyCode != TCL_OK) {", 24L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  ErrorsObj->ErrorMessageI (xxTclTkError, xxError, NoPosition, xxString, yyInterp->result);", 91L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  goto yyReturn;", 16L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" }", 2L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" yyCode = Tk_Init (yyInterp);", 29L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" if (yyCode != TCL_OK) {", 24L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  ErrorsObj->ErrorMessageI (xxTclTkError, xxError, NoPosition, xxString, yyInterp->result);", 91L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  goto yyReturn;", 16L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" }", 2L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" Tcl_StaticPackage (yyInterp, \"Tk\", Tk_Init, (Tcl_PackageInitProc *) NULL);", 75L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"", 1L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" Tcl_CreateCommand (yyInterp, \"put_attr\", yyPutAttr, (ClientData) this, NULL);", 78L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" Tcl_CreateCommand (yyInterp, \"search_pos\", yySearch, (ClientData) this, NULL);", 79L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" Tcl_CreateCommand (yyInterp, \"draw_subtree\", yyDrawSubTree, (ClientData) this, NULL);", 86L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" Tcl_CreateCommand (yyInterp, \"call_attr\", yyCallAttr, (ClientData) this, NULL);", 80L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" Tcl_CreateCommand (yyInterp, \"set_param\", yySetParam, (ClientData) this, NULL);", 80L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" yyCode = Tcl_EvalFile (yyInterp, \"Tree.tcl\");", 46L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" if (yyCode != TCL_OK) {", 24L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  yyp = (char *) getenv (\"HOME\");", 33L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  if (yyp) {", 12L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   strcat (strcpy (yyPath, yyp), \"/.Tree.tcl\");", 47L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   yyCode = Tcl_EvalFile (yyInterp, yyPath);", 44L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  }", 3L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" }", 2L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" if (yyCode != TCL_OK) {", 24L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  yyp = (char *) getenv (\"CT_DIR\");", 35L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  if (yyp) {", 12L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   strcat (strcpy (yyPath, yyp), \"/lib/cg/Tree.tcl\");", 53L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   yyCode = Tcl_EvalFile (yyInterp, yyPath);", 44L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  }", 3L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" }", 2L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" if (yyCode != TCL_OK) {", 24L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  yyCode = Tcl_EvalFile (yyInterp, \"", 36L);
{
LONGCARD B_3 = 1, B_4 = Zp1PEAFD_7(&Zq0A4_89);

if (B_3 <= B_4)
for (Z196 = B_3;; Z196 += 1) {
Z212 = Zp1PEAFD_12(&Zq0A4_89, (Zp1PEAFD_1)Z196);
if (Z212 == '\\') {
ZfM_29(Zq0A4_172, (STRING)"/", 1L);
} else {
ZfM_24(Zq0A4_172, Z212);
}
if (Z196 >= B_4) break;
}
}
ZfM_29(Zq0A4_172, (STRING)"Tree.tcl\");", 11L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" }", 2L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" if (yyCode != TCL_OK) {", 24L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  ErrorsObj->ErrorMessageI (xxTclTkError, xxError, NoPosition, xxString, yyInterp->result);", 91L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  goto yyReturn;", 16L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" }", 2L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" yyDrawTree (this);", 19L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" Tk_MainLoop ();", 16L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" yyReturn: Tcl_DeleteInterp (yyInterp);", 39L);
ZfM_33(Zq0A4_172);
}
if (ZpmCQ_25(ORD('e'), &Zq0A4_171) || Zq0A4_179) {
ZfM_29(Zq0A4_172, (STRING)"}", 1L);
ZfM_33(Zq0A4_172);
if (ZpmCQ_25((LONGCARD)Zq0A4dpZf_0, &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)"# endif", 7L);
ZfM_33(Zq0A4_172);
}
ZfM_33(Zq0A4_172);
}
if (ZpmCQ_25((LONGCARD)Zq0A4dpZf_1, &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)"// XML", 6L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"static void yyWriteXML (", 24L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)" yyt);", 6L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"static void yyWriteAddrXML (void * yyp) {", 41L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" if (yyp) fprintf (yyf, \"%p\", yyp);", 35L);
ZfM_29(Zq0A4_172, (STRING)" else fputc ('0', yyf);", 23L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"}", 1L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"static void yyWriteCharXML (char yyc) {", 39L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" switch (yyc) {", 15L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" case '\\'':", 11L);
ZfM_29(Zq0A4_172, (STRING)" fputs (\"&apos;\", yyf); break;", 30L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" case '<' :", 11L);
ZfM_29(Zq0A4_172, (STRING)" fputs (\"&lt;\", yyf); break;", 28L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" case '&' :", 11L);
ZfM_29(Zq0A4_172, (STRING)" fputs (\"&amp;\", yyf); break;", 29L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" case '\\t':", 11L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" case '\\n':", 11L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" case '\\r': fputc (yyc, yyf); break;", 36L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" default  : if (yyc < ' ')", 26L);
ZfM_29(Zq0A4_172, (STRING)" fprintf (yyf, \"#%02d#\", yyc);", 30L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"	     else fputc (yyc, yyf);", 28L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" }", 2L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"}", 1L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"static void yyWriteStringXML (char * yys) {", 43L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" for (; * yys; yys ++) yyWriteCharXML (* yys);", 46L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"}", 1L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"static void yyWriteSelectorXML (char * yys) {", 45L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# ifdef BEAUTY", 14L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" register int yyi = 16 - strlen (yys);", 38L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" fputs (yys, yyf);", 18L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" while (yyi -- > 0) putc (' ', yyf);", 36L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" fputs (\" = \", yyf);", 20L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# else", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" fputs (yys, yyf);", 18L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" fputc ('=', yyf);", 18L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# endif", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"}", 1L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"static void yyIndentXML () {", 28L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" register int yyi;", 18L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" for (yyi = 1; yyi <= yyIndentLevel; yyi ++) putc (' ', yyf);", 61L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"}", 1L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"static void yyIndentSelectorXML (char * yys) {", 46L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" yyIndentXML (); yyWriteSelectorXML (yys);", 42L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"}", 1L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"static void yyIndentSelectorListXML (char * yys, char * yytype, ", 64L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)" yyt) {", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" if (yyt)", 9L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" switch (yyt->Kind) {", 21L);
ZfM_33(Zq0A4_172);
Zq0A4_184(W_38->Y13, (Zq0A4_170)Z219);
ZfM_29(Zq0A4_172, (STRING)"  yyIndentSelectorXML (yys); fprintf (yyf, \"<%s> \", yytype);", 60L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  yyWriteXML (yyt);", 19L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  yyIndentXML (); fprintf (yyf, \"</%s>\\n\", yytype);", 51L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  return;", 9L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" }", 2L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" yyIndentSelectorXML (yys);", 27L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" yyWriteXML (yyt);", 18L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"}", 1L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"static void yyCloseBeginTag () { fputs (\">\\n\", yyf); }", 54L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"static void yyWriteEndTagNext (", 31L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)" yyt, char * yys, ", 18L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)" yyn) {", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" yyIndentLevel -= 2;", 20L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" yyIndentXML ();", 16L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" fputs (\"</\", yyf);", 19L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" fputs (NodeName [yyt->Kind], yyf);", 35L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" fputs (\">\\n\", yyf);", 20L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" yyIndentSelectorXML (yys);", 27L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" yyWriteXML (yyn);", 18L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"}", 1L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"static void yyCloseBeginTagNext (char * yys, ", 45L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)" yyn) {", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" fputs (\"/>\\n\", yyf);", 21L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" yyIndentLevel -= 2;", 20L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" yyIndentSelectorXML (yys);", 27L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" yyWriteXML (yyn);", 18L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"}", 1L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"static void yyWriteQuote () { putc ('\\'', yyf); }", 49L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"static void yyWriteNlSelectorQuote (char * yys) {", 49L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" xxWriteNl (); yyIndentSelectorXML (yys); yyWriteQuote ();", 58L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"}", 1L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
}
if (ZpmCQ_25((LONGCARD)Zq0A4dpZf_1, &Zq0A4_171) || Zq0A4_179) {
ZfM_29(Zq0A4_172, (STRING)"void WriteXML (FILE * yyyf, ", 28L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)" yyt) {", 7L);
ZfM_33(Zq0A4_172);
}
if (ZpmCQ_25((LONGCARD)Zq0A4dpZf_1, &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)" try {", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# ifdef SUPPORT_TVA", 19L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  bool yyPrevTreatTVAasChild = ", 31L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"_TreatTVAasChild;", 17L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  ", 2L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"_TreatTVAasChild = false;", 25L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  yyt->yyMarkTree ();", 21L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  ", 2L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"_TreatTVAasChild = yyPrevTreatTVAasChild;", 41L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# else", 6L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  yyt->yyMarkTree ();", 21L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"# endif", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  yyf = yyyf;", 13L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  yyIndentLevel = 0;", 20L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  yyBeginTreeStore ();", 22L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  fputs (\"<XML_TREE>\\n\", yyf);", 30L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  yyWriteXML (yyt);", 19L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  fputs (\"</XML_TREE>\\n\", yyf);", 31L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  yyCloseTreeStore ();", 22L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" } catch (...) {", 16L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  yyCloseTreeStore ();", 22L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  throw;", 8L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" }", 2L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" if (ferror (yyyf)) {", 21L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  ErrorsObj->ErrorMessageI (xxTreeIOError, xxError, NoPosition,", 63L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"   xxString, \"", 14L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"::WriteXML\");", 13L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  throw ErrorsObj->CodeToText (xxTreeIOError);", 46L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" }", 2L);
ZfM_33(Zq0A4_172);
}
if (ZpmCQ_25((LONGCARD)Zq0A4dpZf_1, &Zq0A4_171) || Zq0A4_179) {
ZfM_29(Zq0A4_172, (STRING)"}", 1L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
}
if (ZpmCQ_25((LONGCARD)Zq0A4dpZf_1, &Zq0A4_171)) {
ZfM_29(Zq0A4_172, (STRING)"void ", 5L);
Zq0A4_192(Zq0A4_87);
ZfM_29(Zq0A4_172, (STRING)"::WriteXML (FILE * yyf) {", 25L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" ", 1L);
Zq0A4_192(Zq0A4_80);
ZfM_29(Zq0A4_172, (STRING)"::WriteXML (yyf, this);", 23L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"}", 1L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
}
if (ZpmCQ_25((LONGCARD)Zq0A4dpZf_1, &Zq0A4_171)) {
Zq0A4_184(W_38->Y13, (Zq0A4_170)Z220);
Zq0A4_184(W_38->Y13, (Zq0A4_170)Z221);
ZfM_29(Zq0A4_172, (STRING)"static void yyWriteXML (", 24L);
Zq0A4_192(Zq0A4_86);
ZfM_29(Zq0A4_172, (STRING)" yyt) {", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" int yyLevel = yyIndentLevel;", 29L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" if (yyt == ", 12L);
Zq0A4_192(Zq0A4_88);
ZfM_29(Zq0A4_172, (STRING)") { fputs (\"<", 13L);
Zq0A4_192(Zq0A4_88);
ZfM_29(Zq0A4_172, (STRING)"/>\\n\", yyf); return; }", 22L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" if (yyt->yyMark == 0) {", 24L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  fprintf (yyf, \"", 17L);
ZfM_29(Zq0A4_172, (STRING)"<XML_REF XML_LABEL='%d'/>\\n", 27L);
ZfM_29(Zq0A4_172, (STRING)"\", yyMapToLabel (yyt)); return; }", 33L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" fputc ('<', yyf);", 18L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" fputs (NodeName [yyt->Kind], yyf);", 35L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" yyIndentLevel += 2;", 20L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" if (yyt->yyMark > 1) {", 23L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  yyWriteNlSelectorQuote (\"XML_LABEL\");", 39L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  fprintf (yyf, \"%d\", yyMapToLabel (yyt));", 42L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  yyWriteQuote ();", 18L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" }", 2L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" yyt->yyMark = 0;", 17L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" writeNodeHead (yyt)", 20L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" switch (yyt->Kind) {", 21L);
ZfM_33(Zq0A4_172);
Zq0A4_184(W_38->Y13, (Zq0A4_170)Z222);
ZfM_29(Zq0A4_172, (STRING)" }", 2L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" yyIndentLevel = yyLevel;", 25L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" fputs (\"/>\\n\", yyf);", 21L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" return;", 8L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"yyEndTag:", 9L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" yyIndentLevel = yyLevel;", 25L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" yyIndentXML ();", 16L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" fputs (\"</\", yyf);", 19L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" fputs (NodeName [yyt->Kind], yyf);", 35L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" fputs (\">\\n\", yyf);", 20L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"}", 1L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
}
return;
}
}
}

static void Z214
# ifdef HAVE_ARGS
(Zq0A4_153 Z170)
# else
(Z170)
Zq0A4_153 Z170;
# endif
{
struct S_9 Z171;

if (Z170 == Zq0A4_97) {
return;
}
if (Z170 != NIL && Z170->U_1.V_1.Y0 == Zq0A4_100) {
for (;;) {
{
register Zq0A4_226 *W_39 = &Z170->U_1.V_5.Y4;

if (!((Zq0A4_177 & W_39->Y2) == 0X0L && IN(Zq0A4_44, W_39->Y2))) {
goto EXIT_34;
}
ZfM_29(Zq0A4_172, (STRING)" case k", 7L);
Zq0A4_192(W_39->Y1);
ZfM_29(Zq0A4_172, (STRING)":", 1L);
ZfM_33(Zq0A4_172);
Z199(Z170);
Z155 = W_39->Y1;
Zq0A4_185(Z170, (Zq0A4_170)Z214);
if (Zq0A4dpZf_2 != Zq0A4_97) {
ZfM_29(Zq0A4_172, (STRING)"  yymax = yySetY (yyt, ((class ", 31L);
Zq0A4_192(Z155);
ZfM_29(Zq0A4_172, (STRING)" *) yyt)->", 10L);
Zq0A4_192(Zq0A4dpZf_2->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)", yymax", 7L);
if (Zq0A4dpZf_10(Z170) != 1) {
ZfM_29(Zq0A4_172, (STRING)" - 1", 4L);
}
ZfM_29(Zq0A4_172, (STRING)", yyk - 1, yyl);", 16L);
ZfM_33(Zq0A4_172);
}
ZfM_29(Zq0A4_172, (STRING)"  break;", 8L);
ZfM_33(Zq0A4_172);
return;
}
} EXIT_34:;
}
if (Z170 != NIL && Z170->U_1.V_1.Y0 == Zq0A4_105) {
for (;;) {
{
register Zq0A4_231 *W_40 = &Z170->U_1.V_10.Y9;

if (!(Z170 != Zq0A4dpZf_2)) {
goto EXIT_35;
}
ZfM_29(Zq0A4_172, (STRING)"  yy = yySetY (yyt, ((class ", 28L);
Zq0A4_192(Z155);
ZfM_29(Zq0A4_172, (STRING)" *) yyt)->", 10L);
Zq0A4_192(W_40->Y3);
ZfM_29(Zq0A4_172, (STRING)", yyy, yyk, 0);", 15L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"  yymax = Max (yymax, yy);", 26L);
ZfM_33(Zq0A4_172);
return;
}
} EXIT_35:;
}
}

static void Z215
# ifdef HAVE_ARGS
(Zq0A4_153 Z170)
# else
(Z170)
Zq0A4_153 Z170;
# endif
{
struct S_8 Z171;

if (Z170 == Zq0A4_97) {
return;
}
if (Z170 != NIL && Z170->U_1.V_1.Y0 == Zq0A4_100) {
for (;;) {
{
register Zq0A4_226 *W_41 = &Z170->U_1.V_5.Y4;

if (!((Zq0A4_177 & W_41->Y2) == 0X0L && IN(Zq0A4_44, W_41->Y2))) {
goto EXIT_36;
}
ZfM_29(Zq0A4_172, (STRING)" case k", 7L);
Zq0A4_192(W_41->Y1);
ZfM_29(Zq0A4_172, (STRING)":", 1L);
ZfM_33(Zq0A4_172);
Z199(Z170);
Z155 = W_41->Y1;
if (Zq0A4dpZf_2 != Zq0A4_97) {
ZfM_29(Zq0A4_172, (STRING)"  yyw = yySetX (yyt, ((class ", 29L);
Zq0A4_192(Z155);
ZfM_29(Zq0A4_172, (STRING)" *) yyt)->", 10L);
Zq0A4_192(Zq0A4dpZf_2->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)", yyx ++, & yyFirstLast);", 25L);
ZfM_33(Zq0A4_172);
Zq0A4_185(Z170, (Zq0A4_170)Z215);
ZfM_29(Zq0A4_172, (STRING)"  goto yyList;", 14L);
ZfM_33(Zq0A4_172);
} else {
Zq0A4_185(Z170, (Zq0A4_170)Z215);
ZfM_29(Zq0A4_172, (STRING)"  break;", 8L);
ZfM_33(Zq0A4_172);
}
return;
}
} EXIT_36:;
}
if (Z170 != NIL && Z170->U_1.V_1.Y0 == Zq0A4_105) {
for (;;) {
{
register Zq0A4_231 *W_42 = &Z170->U_1.V_10.Y9;

if (!(Z170 != Zq0A4dpZf_2)) {
goto EXIT_37;
}
ZfM_29(Zq0A4_172, (STRING)"  yyx = yySetX (yyt, ((class ", 29L);
Zq0A4_192(Z155);
ZfM_29(Zq0A4_172, (STRING)" *) yyt)->", 10L);
Zq0A4_192(W_42->Y3);
ZfM_29(Zq0A4_172, (STRING)", yyx, & yyFirstLast);", 22L);
ZfM_33(Zq0A4_172);
return;
}
} EXIT_37:;
}
}

static void Z216
# ifdef HAVE_ARGS
(Zq0A4_153 Z170)
# else
(Z170)
Zq0A4_153 Z170;
# endif
{
struct S_7 Z171;

if (Z170 == Zq0A4_97) {
return;
}
if (Z170 != NIL && Z170->U_1.V_1.Y0 == Zq0A4_100) {
for (;;) {
{
register Zq0A4_226 *W_43 = &Z170->U_1.V_5.Y4;

if (!((Zq0A4_177 & W_43->Y2) == 0X0L && IN(Zq0A4_44, W_43->Y2))) {
goto EXIT_38;
}
ZfM_29(Zq0A4_172, (STRING)" case k", 7L);
Zq0A4_192(W_43->Y1);
ZfM_29(Zq0A4_172, (STRING)":", 1L);
ZfM_33(Zq0A4_172);
Z155 = W_43->Y1;
Zq0A4_185(Z170, (Zq0A4_170)Z216);
ZfM_29(Zq0A4_172, (STRING)"  break;", 8L);
ZfM_33(Zq0A4_172);
return;
}
} EXIT_38:;
}
if (Z170 != NIL && Z170->U_1.V_1.Y0 == Zq0A4_105) {
{
register Zq0A4_231 *W_44 = &Z170->U_1.V_10.Y9;

ZfM_29(Zq0A4_172, (STRING)"  yyDrawEdge (yyt, ((class ", 27L);
Zq0A4_192(Z155);
ZfM_29(Zq0A4_172, (STRING)" *) yyt)->", 10L);
Zq0A4_192(W_44->Y3);
ZfM_29(Zq0A4_172, (STRING)");", 2L);
ZfM_33(Zq0A4_172);
return;
}
}
}

static void Z222
# ifdef HAVE_ARGS
(Zq0A4_153 Z170)
# else
(Z170)
Zq0A4_153 Z170;
# endif
{
struct S_6 Z171;

if (Z170 == Zq0A4_97) {
return;
}
if (Z170 != NIL && Z170->U_1.V_1.Y0 == Zq0A4_100) {
for (;;) {
{
register Zq0A4_226 *W_45 = &Z170->U_1.V_5.Y4;

if (!((Zq0A4_177 & W_45->Y2) == 0X0L)) {
goto EXIT_39;
}
if (!(((SET_ELEM (Zq0A4_44) | SET_ELEM (Zq0A4_45)) & W_45->Y2) != 0X0L)) {
goto EXIT_39;
}
ZfM_29(Zq0A4_172, (STRING)"case k", 6L);
Zq0A4_192(W_45->Y1);
ZfM_29(Zq0A4_172, (STRING)":", 1L);
if (IN(Zq0A4_45, W_45->Y2)) {
ZfM_29(Zq0A4_172, (STRING)" yWrite", 7L);
Zq0A4_192(W_45->Y1);
ZfM_29(Zq0A4_172, (STRING)"AXML ((class ", 13L);
Zq0A4_192(W_45->Y1);
ZfM_29(Zq0A4_172, (STRING)" *) yyt);", 9L);
}
if (IN(Zq0A4_44, W_45->Y2)) {
Z198(Z170);
ZfM_33(Zq0A4_172);
if (Zq0A4dpZf_10(Z170) == 1 && Z156 != Zq0A4_97) {
ZfM_29(Zq0A4_172, (STRING)" yyCloseBeginTagNext (\"", 23L);
Zq0A4_192(Z156->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)"\",", 2L);
ZfM_29(Zq0A4_172, (STRING)" ((class ", 9L);
Zq0A4_192(W_45->Y1);
ZfM_29(Zq0A4_172, (STRING)" *) yyt)->", 10L);
Zq0A4_192(Z156->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)"); return;", 10L);
ZfM_33(Zq0A4_172);
} else {
ZfM_29(Zq0A4_172, (STRING)" yyCloseBeginTag (); yWrite", 27L);
Zq0A4_192(W_45->Y1);
ZfM_29(Zq0A4_172, (STRING)"XML ((class ", 12L);
Zq0A4_192(W_45->Y1);
ZfM_29(Zq0A4_172, (STRING)" *) yyt);", 9L);
if (Z156 != Zq0A4_97) {
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)" yyWriteEndTagNext (yyt, \"", 26L);
Zq0A4_192(Z156->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)"\",", 2L);
ZfM_29(Zq0A4_172, (STRING)" ((class ", 9L);
Zq0A4_192(W_45->Y1);
ZfM_29(Zq0A4_172, (STRING)" *) yyt)->", 10L);
Zq0A4_192(Z156->U_1.V_10.Y9.Y3);
ZfM_29(Zq0A4_172, (STRING)"); return;", 10L);
ZfM_33(Zq0A4_172);
} else {
ZfM_29(Zq0A4_172, (STRING)" goto yyEndTag;", 15L);
ZfM_33(Zq0A4_172);
}
}
} else {
ZfM_29(Zq0A4_172, (STRING)" break;", 7L);
ZfM_33(Zq0A4_172);
}
return;
}
} EXIT_39:;
}
}

static void Z220
# ifdef HAVE_ARGS
(Zq0A4_153 Z170)
# else
(Z170)
Zq0A4_153 Z170;
# endif
{
struct S_5 Z171;

if (Z170 == Zq0A4_97) {
return;
}
if (Z170 != NIL && Z170->U_1.V_1.Y0 == Zq0A4_100) {
for (;;) {
{
register Zq0A4_226 *W_46 = &Z170->U_1.V_5.Y4;

if (!((Zq0A4_177 & W_46->Y2) == 0X0L)) {
goto EXIT_40;
}
if (!IN(Zq0A4_45, W_46->Y2)) {
goto EXIT_40;
}
ZfM_29(Zq0A4_172, (STRING)"static void yWrite", 18L);
Zq0A4_192(W_46->Y1);
ZfM_29(Zq0A4_172, (STRING)"AXML (class ", 12L);
Zq0A4_192(W_46->Y1);
ZfM_29(Zq0A4_172, (STRING)" * yyt)", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"{", 1L);
ZfM_33(Zq0A4_172);
if (W_46->Y6->U_1.V_1.Y0 == Zq0A4_100 && IN(Zq0A4_45, W_46->Y6->U_1.V_5.Y4.Y2)) {
ZfM_29(Zq0A4_172, (STRING)" yWrite", 7L);
Zq0A4_192(W_46->Y6->U_1.V_5.Y4.Y1);
ZfM_29(Zq0A4_172, (STRING)"AXML ((class ", 13L);
Zq0A4_192(W_46->Y6->U_1.V_5.Y4.Y1);
ZfM_29(Zq0A4_172, (STRING)" *) yyt);", 9L);
ZfM_33(Zq0A4_172);
}
Zq0A4_185(W_46->Y3, (Zq0A4_170)Z223);
ZfM_29(Zq0A4_172, (STRING)"}", 1L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
return;
}
} EXIT_40:;
}
}

static void Z221
# ifdef HAVE_ARGS
(Zq0A4_153 Z170)
# else
(Z170)
Zq0A4_153 Z170;
# endif
{
struct S_4 Z171;

if (Z170 == Zq0A4_97) {
return;
}
if (Z170 != NIL && Z170->U_1.V_1.Y0 == Zq0A4_100) {
for (;;) {
{
register Zq0A4_226 *W_47 = &Z170->U_1.V_5.Y4;

if (!((Zq0A4_177 & W_47->Y2) == 0X0L)) {
goto EXIT_41;
}
if (!IN(Zq0A4_44, W_47->Y2)) {
goto EXIT_41;
}
Z198(Z170);
if (!(Zq0A4dpZf_10(Z170) > 1 || Z156 == Zq0A4_97)) {
goto EXIT_41;
}
ZfM_29(Zq0A4_172, (STRING)"static void yWrite", 18L);
Zq0A4_192(W_47->Y1);
ZfM_29(Zq0A4_172, (STRING)"XML (class ", 11L);
Zq0A4_192(W_47->Y1);
ZfM_29(Zq0A4_172, (STRING)" * yyt)", 7L);
ZfM_33(Zq0A4_172);
ZfM_29(Zq0A4_172, (STRING)"{", 1L);
ZfM_33(Zq0A4_172);
if (W_47->Y6->U_1.V_1.Y0 == Zq0A4_100 && IN(Zq0A4_44, W_47->Y6->U_1.V_5.Y4.Y2)) {
Z198(W_47->Y6);
if (Zq0A4dpZf_10(W_47->Y6) > 1 || Z156 == Zq0A4_97) {
ZfM_29(Zq0A4_172, (STRING)" yWrite", 7L);
Zq0A4_192(W_47->Y6->U_1.V_5.Y4.Y1);
ZfM_29(Zq0A4_172, (STRING)"XML ((class ", 12L);
Zq0A4_192(W_47->Y6->U_1.V_5.Y4.Y1);
ZfM_29(Zq0A4_172, (STRING)" *) yyt);", 9L);
ZfM_33(Zq0A4_172);
}
}
Z198(Z170);
Zq0A4_185(W_47->Y3, (Zq0A4_170)Z224);
ZfM_29(Zq0A4_172, (STRING)"}", 1L);
ZfM_33(Zq0A4_172);
ZfM_33(Zq0A4_172);
return;
}
} EXIT_41:;
}
}

static void Z223
# ifdef HAVE_ARGS
(Zq0A4_153 Z170)
# else
(Z170)
Zq0A4_153 Z170;
# endif
{
struct S_3 Z171;

if (Z170 == Zq0A4_97) {
return;
}
if (Z170 != NIL && Z170->U_1.V_1.Y0 == Zq0A4_106) {
for (;;) {
{
register Zq0A4_232 *W_48 = &Z170->U_1.V_11.Y10;

if (!((Zq0A4_176 & W_48->Y6) == 0X0L)) {
goto EXIT_42;
}
if (!(W_48->Y4 != Zq0A4_86)) {
goto EXIT_42;
}
ZfM_29(Zq0A4_172, (STRING)" yyWriteNlSelectorQuote (\"", 26L);
Zq0A4_192(W_48->Y3);
ZfM_29(Zq0A4_172, (STRING)"\");", 3L);
ZfM_29(Zq0A4_172, (STRING)" write", 6L);
Zq0A4_192(W_48->Y4);
ZfM_29(Zq0A4_172, (STRING)" (yyt->", 7L);
Zq0A4_192(W_48->Y3);
ZfM_29(Zq0A4_172, (STRING)")", 1L);
ZfM_29(Zq0A4_172, (STRING)" yyWriteQuote ();", 17L);
ZfM_33(Zq0A4_172);
return;
}
} EXIT_42:;
}
}

static void Z224
# ifdef HAVE_ARGS
(Zq0A4_153 Z170)
# else
(Z170)
Zq0A4_153 Z170;
# endif
{
struct S_2 Z171;

if (Z170 == Zq0A4_97) {
return;
}
if (Z170 != NIL && Z170->U_1.V_1.Y0 == Zq0A4_105) {
for (;;) {
{
register Zq0A4_231 *W_49 = &Z170->U_1.V_10.Y9;

if (!(Z170 != Z156)) {
goto EXIT_43;
}
ZfM_29(Zq0A4_172, (STRING)" yyIndentSelectorListXML (\"", 27L);
Zq0A4_192(W_49->Y3);
ZfM_29(Zq0A4_172, (STRING)"\", \"", 4L);
Zq0A4_192(W_49->Y4);
ZfM_29(Zq0A4_172, (STRING)"\",", 2L);
ZfM_29(Zq0A4_172, (STRING)" yyt->", 6L);
Zq0A4_192(W_49->Y3);
ZfM_29(Zq0A4_172, (STRING)");", 2L);
ZfM_33(Zq0A4_172);
return;
}
} EXIT_43:;
}
}

static void Z219
# ifdef HAVE_ARGS
(Zq0A4_153 Z170)
# else
(Z170)
Zq0A4_153 Z170;
# endif
{
struct S_1 Z171;

if (Z170 == Zq0A4_97) {
return;
}
if (Z170 != NIL && Z170->U_1.V_1.Y0 == Zq0A4_100) {
for (;;) {
{
register Zq0A4_226 *W_50 = &Z170->U_1.V_5.Y4;

if (!((Zq0A4_177 & W_50->Y2) == 0X0L)) {
goto EXIT_44;
}
Z157 = FALSE;
Zq0A4_185(Z170, (Zq0A4_170)Z219);
if (!Z157) {
goto EXIT_44;
}
ZfM_29(Zq0A4_172, (STRING)" case k", 7L);
Zq0A4_192(W_50->Y1);
ZfM_29(Zq0A4_172, (STRING)":", 1L);
ZfM_33(Zq0A4_172);
return;
}
} EXIT_44:;
}
if (Z170 != NIL && Z170->U_1.V_1.Y0 == Zq0A4_105) {
for (;;) {
{
register Zq0A4_231 *W_51 = &Z170->U_1.V_10.Y9;

if (!IN(Zq0A4_3, W_51->Y6)) {
goto EXIT_45;
}
Z157 = TRUE;
return;
}
} EXIT_45:;
}
}

void Zq0A4dpZf_14
 ARGS ((void))
{
}

void Zq0A4dpZf_15
 ARGS ((void))
{
}

static void Z227
 ARGS ((void))
{
ZfM_34();
rExit(1L);
}

void BEGIN_TreeCxx2 ARGS ((void))
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
BEGIN_TreeCxx1 ();
BEGIN_Tree ();
BEGIN_Strings ();

Zq0A4dpZf_4 = ZfM_1;
Zq0A4dpZf_6 = Z227;
Zq0A4dpZf_14();
}
