#include "SYSTEM_.h"

#ifndef DEFINITION_rSystem
#include "rSystem.h"
#endif

#ifndef DEFINITION_rMemory
#include "rMemory.h"
#endif

#ifndef DEFINITION_General
#include "General.h"
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

#ifndef DEFINITION_Position
#include "Position.h"
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

#ifndef DEFINITION_Semantic
#include "Semantic.h"
#endif

#ifndef DEFINITION_LR1
#include "LR1.h"
#endif

#ifndef DEFINITION_LRk
#include "LRk.h"
#endif

#ifndef DEFINITION_Conflict
#include "Conflict.h"
#endif

#ifndef DEFINITION_Explain
#include "Explain.h"
#endif

#ifndef DEFINITION_Compress
#include "Compress.h"
#endif

#ifndef DEFINITION_Generate
#include "Generate.h"
#endif

#ifndef DEFINITION_LarkTime
#include "LarkTime.h"
#endif

#ifndef DEFINITION_Delta
#include "Delta.h"
#endif

static CHAR Z263 [] = ".dbg";
static CHAR Z264 [] = ".cft";
static CHAR Z265 [] = ".dlt";
static Zp1PEAFD_2 Z266, Z267, Z268;
static struct S_1 {
CHAR A[255 + 1];
} Z269, Z270;
static CARDINAL Z271, Z272, Z273;
static ZfM_3 Z274;
static BOOLEAN Z275;
static ZDz6VQCC_5 Z276;
static void Z277 ARGS ((CHAR Z269[], LONGCARD O_1));
static INTEGER Z281 ARGS ((CHAR Z278));
static void Z282 ARGS ((INTEGER Z283));
static BOOLEAN Z284 ARGS ((CHAR Z285[], LONGCARD O_2, CARDINAL Z286));
struct S_3 {
CHAR A[128 + 1];
};
struct S_4 {
CHAR A[10 + 1];
};
struct S_5 {
BITSET A[32 + 1];
};
struct S_6 {
CHAR A[32 + 1];
};


static void Z277
# ifdef HAVE_ARGS
(CHAR Z269[], LONGCARD O_1)
# else
(Z269, O_1)
CHAR Z269[];
LONGCARD O_1;
# endif
{
CHAR Z278;
CARDINAL Z273, Z279, Z280;

Z280 = 1;
Z278 = Z269[0];
do {
if (Z278 == '-') {
Z278 = Z269[Z280];
INC(Z280);
if (Z278 == 'l') {
Zp1PEAFD_4(&Zq0A4_63);
for (;;) {
Z278 = Z269[Z280];
INC(Z280);
if (ORD(Z278) <= ORD(' ')) {
goto EXIT_1;
}
Zp1PEAFD_6(&Zq0A4_63, Z278);
} EXIT_1:;
Zp1PEAFD_6(&Zq0A4_63, DirectorySeparator());
} else if (Z278 == 'f') {
ZpmCQ_13(&Zq0A4_61, ORD('f'));
if (ORD(Z269[Z280]) > ORD('A')) {
Zp1PEAFD_4(&Zq0A4_64);
for (;;) {
Z278 = Z269[Z280];
INC(Z280);
if (ORD(Z278) <= ORD(' ')) {
goto EXIT_2;
}
Zp1PEAFD_6(&Zq0A4_64, Z278);
} EXIT_2:;
}
} else if (Z278 == 'k') {
if (ORD(Z269[Z280]) > ORD(' ')) {
ZiSr_7 = 0;
for (;;) {
Z278 = Z269[Z280];
INC(Z280);
if (ORD(Z278) < ORD('0') || ORD('9') < ORD(Z278)) {
goto EXIT_3;
}
ZiSr_7 = 10 * ZiSr_7 + ORD(Z278) - ORD('0');
} EXIT_3:;
}
} else if (Z278 == 'n') {
ZpmCQ_13(&Zq0A4_61, ORD('n'));
if (ORD(Z269[Z280]) > ORD(' ')) {
ZdaDDADFC_0 = 0;
for (;;) {
Z278 = Z269[Z280];
INC(Z280);
if (ORD(Z278) < ORD('0') || ORD('9') < ORD(Z278)) {
goto EXIT_4;
}
ZdaDDADFC_0 = 10 * ZdaDDADFC_0 + ORD(Z278) - ORD('0');
} EXIT_4:;
}
} else if (Z278 == 'N') {
ZpmCQ_13(&Zq0A4_61, ORD('N'));
Z278 = Z269[Z280];
INC(Z280);
Z273 = 0;
while (ORD(Z278) > ORD(' ')) {
ZdaDDADFC_1.A[Z273] = Z278;
INC(Z273);
Z278 = Z269[Z280];
INC(Z280);
}
ZdaDDADFC_1.A[Z273] = '\0';
} else if (Z278 == 'O') {
ZpmCQ_13(&Zq0A4_61, ORD('O'));
if (ORD(Z269[Z280]) > ORD(' ')) {
ZdaDDADFC_2 = 0;
for (;;) {
Z278 = Z269[Z280];
INC(Z280);
if (ORD(Z278) < ORD('0') || ORD('9') < ORD(Z278)) {
goto EXIT_5;
}
ZdaDDADFC_2 = 10 * ZdaDDADFC_2 + ORD(Z278) - ORD('0');
} EXIT_5:;
}
} else {
while (ORD(Z278) > ORD(' ')) {
if (Z278 == '?') {
ZpmCQ_13(&Zq0A4_61, ORD('h'));
} else {
ZpmCQ_13(&Zq0A4_61, ORD(Z278));
Z275 = TRUE;
}
Z278 = Z269[Z280];
INC(Z280);
}
}
} else if (Z278 == '?') {
ZpmCQ_13(&Zq0A4_61, ORD('h'));
} else if (ORD(Z278) > ORD(' ')) {
Z273 = 0;
Z279 = 0;
do {
Zq0A4_65.A[Z273] = Z278;
INC(Z273);
Zq0A4_66.A[Z279] = Z278;
INC(Z279);
if (Z278 == '\\') {
Zq0A4_66.A[Z279] = '\\';
INC(Z279);
}
Z278 = Z269[Z280];
INC(Z280);
} while (!(ORD(Z278) <= ORD(' ')));
Zq0A4_65.A[Z273] = '\0';
Zq0A4_66.A[Z279] = '\0';
} else if (Z278 != '\0') {
Z278 = Z269[Z280];
INC(Z280);
}
} while (!(Z278 == '\0'));
}

static INTEGER Z281
# ifdef HAVE_ARGS
(CHAR Z278)
# else
(Z278)
CHAR Z278;
# endif
{
switch (Z278) {
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
return ORD(Z278) - ORD('0');
break;
case 'A':;
case 'B':;
case 'C':;
case 'D':;
case 'E':;
case 'F':;
return ORD(Z278) - ORD('A') + 10;
break;
case 'a':;
case 'b':;
case 'c':;
case 'd':;
case 'e':;
case 'f':;
return ORD(Z278) - ORD('a') + 10;
break;
}
return 0;
}

static void Z282
# ifdef HAVE_ARGS
(INTEGER Z283)
# else
(Z283)
INTEGER Z283;
# endif
{
switch (Z283) {
case 1:;
ZblNKKO_44((STRING)"cannot open license file: ctlicens.dat", 38L, (LONGCARD)ZblNKKO_14, ZmtLFGGBG_1);
break;
case 2:;
ZblNKKO_44((STRING)"sorry, the license is expired", 29L, (LONGCARD)ZblNKKO_14, ZmtLFGGBG_1);
break;
case 3:;
ZblNKKO_44((STRING)"sorry, the problem is too big for demo version", 46L, (LONGCARD)ZblNKKO_15, ZmtLFGGBG_1);
break;
case 4:;
ZblNKKO_44((STRING)"license file ctlicens.dat seems corrupted", 41L, (LONGCARD)ZblNKKO_14, ZmtLFGGBG_1);
break;
}
}

static BOOLEAN Z284
# ifdef HAVE_ARGS
(CHAR Z285[], LONGCARD O_2, CARDINAL Z286)
# else
(Z285, O_2, Z286)
CHAR Z285[];
LONGCARD O_2;
CARDINAL Z286;
# endif
{
Zp1PEAFD_2 Z267, Z266;
struct S_3 Z270;
ZfM_3 Z287;
struct S_4 Z288;
ZDz6VQCC_5 Z289;
struct S_5 Z290;
struct S_6 Z291;
CHAR Z278;
CARDINAL Z273, Z292;
BITSET Z293, Z294;
OPEN_ARRAY_LOCALS

ALLOC_OPEN_ARRAYS (O_2 * sizeof (CHAR), 1)
COPY_OPEN_ARRAY (Z285, O_2, CHAR)
if (rtpqy()) {
FREE_OPEN_ARRAYS
return TRUE;
}
Zp1PEAFD_3(&Z267, &Zq0A4_63);
Zp1PEAFD_6(&Z267, '.');
Zp1PEAFD_6(&Z267, '.');
Zp1PEAFD_6(&Z267, DirectorySeparator());
Zp1PEAFD_13((STRING)"ctlicens.dat", 12L, &Z266);
Zp1PEAFD_5(&Z267, &Z266);
Zp1PEAFD_6(&Z267, '\0');
Zp1PEAFD_14(&Z267, Z270.A, 129L);
Z287 = ZfM_4(Z270.A, 129L);
if (Z287 < 0) {
Z282(1L);
FREE_OPEN_ARRAYS
return FALSE;
}
for (;;) {
if (ZfM_19(Z287)) {
Z282(4L);
FREE_OPEN_ARRAYS
return FALSE;
}
Z273 = 0;
Z278 = ZfM_7(Z287);
while (Z278 != '\n' && Z278 != '\r') {
Z290.A[Z273] = (BITSET)(Z281(Z278) * 16 + Z281(ZfM_7(Z287)));
INC(Z273);
Z278 = ZfM_7(Z287);
}
if (Z278 == '\r') {
Z278 = ZfM_7(Z287);
}
if (Z278 != '\n') {
Z282(4L);
FREE_OPEN_ARRAYS
return FALSE;
}
Z292 = Z273 - 1;
Z293 = (BITSET)ORD('j');
{
LONGCARD B_1 = 0, B_2 = Z292;

if (B_1 <= B_2)
for (Z273 = B_1;; Z273 += 1) {
Z294 = Z290.A[Z273] ^ Z293;
Z293 = Z293 ^ Z294;
Z291.A[Z273] = CHR((CARDINAL)Z294);
if (Z273 >= B_2) break;
}
}
if (Z291.A[0] == Z285[0] && Z291.A[1] == Z285[1] && Z291.A[2] == Z285[2]) {
goto EXIT_6;
}
} EXIT_6:;
ZfM_5(Z287);
Zp1PEAFD_4(&Z266);
for (Z273 = 5; Z273 <= 12; Z273 += 1) {
Zp1PEAFD_6(&Z266, Z291.A[Z273]);
}
(void) strncpy ((char *)Z288.A, "%Y%m%d", sizeof (Z288.A));
Z289 = rtpqx(Z288.A, 11L);
Z273 = 0;
for (;;) {
Z288.A[Z273] = Z289->A[Z273];
if (Z288.A[Z273] == '\0' || Z273 == 10) {
goto EXIT_7;
}
INC(Z273);
} EXIT_7:;
Zp1PEAFD_13(Z288.A, 11L, &Z267);
if (!Zp1PEAFD_9(&Z267, &Z266)) {
Z282(2L);
FREE_OPEN_ARRAYS
return FALSE;
}
Z292 = 0;
for (Z273 = 14; Z273 <= 19; Z273 += 1) {
if (Z291.A[Z273] != ' ') {
Z292 = Z292 * 10 + ORD(Z291.A[Z273]) - ORD('0');
}
}
if (Z286 > Z292) {
Z282(3L);
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
BEGIN_General ();
BEGIN_IO ();
BEGIN_Strings ();
BEGIN_Idents ();
BEGIN_Sets ();
BEGIN_Position ();
BEGIN_Errors ();
BEGIN_Scanner ();
BEGIN_Parser ();
BEGIN_Tree ();
BEGIN_Semantic ();
BEGIN_LR1 ();
BEGIN_LRk ();
BEGIN_Conflict ();
BEGIN_Explain ();
BEGIN_Compress ();
BEGIN_Generate ();
BEGIN_LarkTime ();
BEGIN_Delta ();

Z275 = FALSE;
Zp1PEAFD_4(&Zq0A4_63);
Zp1PEAFD_13((STRING)"t_", 2L, &Zq0A4_64);
Zq0A4_65.A[0] = '\0';
Zq0A4_66.A[0] = '\0';
Z276 = GetEnvVar((STRING)"LARK", 4L);
if (Z276 != NIL) {
Z273 = 0;
for (;;) {
Z269.A[Z273] = Z276->A[Z273];
if (Z269.A[Z273] == '\0' || Z273 == 255) {
goto EXIT_8;
}
INC(Z273);
} EXIT_8:;
Z277(Z269.A, 256L);
}
{
LONGCARD B_3 = 1, B_4 = GetArgCount() - 1;

if (B_3 <= B_4)
for (Z273 = B_3;; Z273 += 1) {
GetArgument((LONGINT)Z273, Z269.A, 256L);
Z277(Z269.A, 256L);
if (Z273 >= B_4) break;
}
}
if (!Z275) {
ZpmCQ_13(&Zq0A4_61, ORD('a'));
}
if (ZpmCQ_25(ORD('a'), &Zq0A4_61)) {
ZpmCQ_13(&Zq0A4_61, ORD('d'));
ZpmCQ_13(&Zq0A4_61, ORD('i'));
ZpmCQ_13(&Zq0A4_61, ORD('p'));
}
if (ZpmCQ_25(ORD('e'), &Zq0A4_61)) {
ZpmCQ_13(&Zq0A4_61, ORD('o'));
ZpmCQ_14(&Zq0A4_61, ORD('6'));
}
if (ZpmCQ_25(ORD('v'), &Zq0A4_61)) {
ZpmCQ_13(&Zq0A4_61, ORD('w'));
ZpmCQ_13(&Zq0A4_61, ORD('U'));
}
if (ZpmCQ_25(ORD('w'), &Zq0A4_61)) {
ZpmCQ_13(&Zq0A4_61, ORD('V'));
ZpmCQ_13(&Zq0A4_61, ORD('W'));
ZpmCQ_13(&Zq0A4_61, ORD('X'));
}
if (ZpmCQ_25(ORD('U'), &Zq0A4_61) || ZpmCQ_25(ORD('V'), &Zq0A4_61) || ZpmCQ_25(ORD('W'), &Zq0A4_61) || ZpmCQ_25(ORD('X'), &Zq0A4_61)) {
ZpmCQ_13(&Zq0A4_61, ORD('|'));
}
if (ZpmCQ_25(ORD('A'), &Zq0A4_61)) {
ZpmCQ_13(&Zq0A4_61, ORD('y'));
}
if (ZpmCQ_25(ORD('P'), &Zq0A4_61)) {
ZpmCQ_13(&Zq0A4_61, ORD('x'));
ZpmCQ_13(&Zq0A4_61, ORD('z'));
}
if (ZpmCQ_25(ORD('T'), &Zq0A4_61)) {
ZpmCQ_13(&Zq0A4_61, ORD('t'));
}
if (ZpmCQ_25(ORD('5'), &Zq0A4_61)) {
ZpmCQ_14(&Zq0A4_61, ORD('C'));
}
if (ZpmCQ_25(ORD('N'), &Zq0A4_61)) {
ZpmCQ_13(&Zq0A4_61, ORD('O'));
}
if (ZpmCQ_25(ORD('O'), &Zq0A4_61)) {
ZpmCQ_13(&Zq0A4_61, ORD('4'));
}
if (ZpmCQ_25(ORD('4'), &Zq0A4_61)) {
ZpmCQ_13(&Zq0A4_61, ORD('n'));
}
if (ZpmCQ_25(ORD('h'), &Zq0A4_61)) {
ZpmCQ_14(&Zq0A4_61, ORD('h'));
Z274 = ZfM_1;
ZfM_33(Z274);
ZfM_29(Z274, (STRING)"usage: lark [-options] [-l<directory>] [<file>]", 47L);
ZfM_33(Z274);
ZfM_33(Z274);
ZfM_29(Z274, (STRING)" c generate C         source code", 33L);
ZfM_33(Z274);
ZfM_29(Z274, (STRING)" + generate C++       source code", 33L);
ZfM_33(Z274);
ZfM_29(Z274, (STRING)" j generate Java      source code", 33L);
ZfM_33(Z274);
ZfM_29(Z274, (STRING)" m generate Modula-2  source code (default)", 43L);
ZfM_33(Z274);
ZfM_29(Z274, (STRING)" 3 generate Ada       source code", 33L);
ZfM_33(Z274);
ZfM_29(Z274, (STRING)" e generate Eiffel 3  source code", 33L);
ZfM_33(Z274);
ZfM_33(Z274);
ZfM_29(Z274, (STRING)" a generate all = -dip (default)", 32L);
ZfM_33(Z274);
ZfM_29(Z274, (STRING)" d generate header file or definition module", 44L);
ZfM_33(Z274);
ZfM_29(Z274, (STRING)" i generate implementation part or module", 41L);
ZfM_33(Z274);
ZfM_29(Z274, (STRING)" p generate main program to be used as test driver", 50L);
ZfM_33(Z274);
ZfM_29(Z274, (STRING)" 5 generate parser with graphical visualization", 47L);
ZfM_33(Z274);
ZfM_29(Z274, (STRING)" -f[<prefix>] generate constant declarations for tokens in header file", 70L);
ZfM_33(Z274);
ZfM_29(Z274, (STRING)"   using prefix (default: t_)", 29L);
ZfM_33(Z274);
ZfM_29(Z274, (STRING)" g generate # line directives", 29L);
ZfM_33(Z274);
ZfM_29(Z274, (STRING)" : generate lines not longer than 80 characters", 47L);
ZfM_33(Z274);
ZfM_29(Z274, (STRING)" J report undefined tokens and multiply defined nonterminals as error (default: warning)", 88L);
ZfM_33(Z274);
ZfM_29(Z274, (STRING)" 2 suppress reporting of multiply defined nonterminals", 54L);
ZfM_33(Z274);
ZfM_29(Z274, (STRING)" s suppress informations and warnings", 37L);
ZfM_33(Z274);
ZfM_29(Z274, (STRING)" r suppress elimination of LR(0) reductions", 43L);
ZfM_33(Z274);
ZfM_29(Z274, (STRING)" u use fast and large    terminal tables  (default: slow and small)", 67L);
ZfM_33(Z274);
ZfM_29(Z274, (STRING)" o use fast and large nonterminal tables  (default: slow and small)", 67L);
ZfM_33(Z274);
ZfM_29(Z274, (STRING)" 4 use tables to decrement stack pointers (default: inline code)", 64L);
ZfM_33(Z274);
ZfM_29(Z274, (STRING)" 6 use alternate algorithm for table compression", 48L);
ZfM_33(Z274);
ZfM_29(Z274, (STRING)" b memorize previous trial parses and avoid repetition of same trial parses", 75L);
ZfM_33(Z274);
ZfM_29(Z274, (STRING)" v explain all LR conflicts in file with suffix .dbg", 52L);
ZfM_33(Z274);
ZfM_29(Z274, (STRING)" w explain implicitly and dynamically repaired conflicts, only", 62L);
ZfM_33(Z274);
ZfM_29(Z274, (STRING)" D explain new conflicts, only - old conflicts are read from file with suffix .cft", 82L);
ZfM_33(Z274);
ZfM_29(Z274, (STRING)"   current set of conflicts is written to new version of this file", 66L);
ZfM_33(Z274);
ZfM_29(Z274, (STRING)"   differences between previous and current runs are written to file with suffix .dlt", 85L);
ZfM_33(Z274);
ZfM_29(Z274, (STRING)" h print help information", 25L);
ZfM_33(Z274);
ZfM_33(Z274);
ZfM_29(Z274, (STRING)" n reduce the number of case labels in switch, case, or inspect statements", 74L);
ZfM_33(Z274);
ZfM_29(Z274, (STRING)"   by mapping so-called shift-reduce states to reduce states", 60L);
ZfM_33(Z274);
ZfM_29(Z274, (STRING)"   (increases run time a little bit but decreases code size,", 60L);
ZfM_33(Z274);
ZfM_29(Z274, (STRING)"   might be necessary due to compiler restrictions)", 51L);
ZfM_33(Z274);
ZfM_33(Z274);
ZfM_29(Z274, (STRING)" -n<mmm> generate switch or case statements with at most mmm case labels", 72L);
ZfM_33(Z274);
ZfM_29(Z274, (STRING)"       (might be necessary due to compiler restrictions)", 56L);
ZfM_33(Z274);
ZfM_33(Z274);
ZfM_29(Z274, (STRING)" t print statistics about the generated parser", 46L);
ZfM_33(Z274);
ZfM_29(Z274, (STRING)" x print a list of terminals and their encoding", 47L);
ZfM_33(Z274);
ZfM_29(Z274, (STRING)" y print a readable version of the generated automaton (states and items)", 73L);
ZfM_33(Z274);
ZfM_29(Z274, (STRING)" z print a list of nonterminals and rules", 41L);
ZfM_33(Z274);
ZfM_29(Z274, (STRING)" 0 construct an LALR(1) parser (based on an LR(0) automaton) (default)", 70L);
ZfM_33(Z274);
ZfM_29(Z274, (STRING)" 1 construct an   LR(1) parser (based on an LR(1) automaton)", 60L);
ZfM_33(Z274);
ZfM_29(Z274, (STRING)"01 construct an LALR(1) parser and extend it locally to LR(1) where necessary", 77L);
ZfM_33(Z274);
ZfM_29(Z274, (STRING)" -k2 construct an LALR(2) parser (which uses 2 tokens lookahead) (default: 1)", 77L);
ZfM_33(Z274);
ZfM_29(Z274, (STRING)" 7 touch output files only if necessary", 39L);
ZfM_33(Z274);
ZfM_29(Z274, (STRING)" 8 report storage consumption", 29L);
ZfM_33(Z274);
ZfM_29(Z274, (STRING)" -l<dir> specify the directory dir where lark finds its data files", 66L);
ZfM_33(Z274);
ZfM_22((ZDz6VQCC_4)ZfM_1);
}
if (ZpmCQ_25(ORD('H'), &Zq0A4_61)) {
ZpmCQ_14(&Zq0A4_61, ORD('H'));
Z274 = ZfM_1;
ZfM_33(Z274);
ZfM_29(Z274, (STRING)" A print full automaton (invalid states, PRED, defaults, etc.)", 62L);
ZfM_33(Z274);
ZfM_29(Z274, (STRING)" B print full automaton before CheckConflicts1", 46L);
ZfM_33(Z274);
ZfM_29(Z274, (STRING)" P print full symbol info (PATH, LS, etc.)", 42L);
ZfM_33(Z274);
ZfM_29(Z274, (STRING)" L print info about lane trace algorithm", 40L);
ZfM_33(Z274);
ZfM_29(Z274, (STRING)" Q or q browse internal data structure with text browser", 56L);
ZfM_33(Z274);
ZfM_29(Z274, (STRING)" G browse internal data structure with graphical browser", 56L);
ZfM_33(Z274);
ZfM_29(Z274, (STRING)" R print step-time", 18L);
ZfM_33(Z274);
ZfM_29(Z274, (STRING)" S print messages (do not store)", 32L);
ZfM_33(Z274);
ZfM_29(Z274, (STRING)" T print full statistics", 24L);
ZfM_33(Z274);
ZfM_29(Z274, (STRING)" U explain explicitly  repaired conflicts", 41L);
ZfM_33(Z274);
ZfM_29(Z274, (STRING)" V explain implicitly  repaired conflicts", 41L);
ZfM_33(Z274);
ZfM_29(Z274, (STRING)" W explain LALR(2)     repaired conflicts", 41L);
ZfM_33(Z274);
ZfM_29(Z274, (STRING)" X explain dynamically repaired conflicts", 41L);
ZfM_33(Z274);
ZfM_29(Z274, (STRING)" Y print a list of terminals and their encoding", 47L);
ZfM_33(Z274);
ZfM_29(Z274, (STRING)" Z print a list of nonterminals and rules", 41L);
ZfM_33(Z274);
ZfM_29(Z274, (STRING)" E disable LR1(k) analysis", 26L);
ZfM_33(Z274);
ZfM_29(Z274, (STRING)" F disable LR(k)  analysis", 26L);
ZfM_33(Z274);
ZfM_29(Z274, (STRING)" C disable generation of comments and rules", 43L);
ZfM_33(Z274);
ZfM_29(Z274, (STRING)" N<name> specify parser name   for concrete syntax tree", 55L);
ZfM_33(Z274);
ZfM_29(Z274, (STRING)" O<nnn>  specify parser number for concrete syntax tree (default: 1)", 68L);
ZfM_33(Z274);
ZfM_22((ZDz6VQCC_4)ZfM_1);
}
if (ZpmCQ_26(Zq0A4_61)) {
ZfM_34();
rExit(0L);
}
if (Zp1PEAFD_7(&Zq0A4_63) == 0) {
Z276 = GetEnvVar((STRING)"CT_DIR", 6L);
if (Z276 != NIL) {
Z273 = 0;
for (;;) {
Z269.A[Z273] = Z276->A[Z273];
if (Z269.A[Z273] == '\0' || Z273 == 255) {
goto EXIT_9;
}
INC(Z273);
} EXIT_9:;
Zp1PEAFD_13(Z269.A, 256L, &Zq0A4_63);
Zp1PEAFD_6(&Zq0A4_63, DirectorySeparator());
Zp1PEAFD_13((STRING)"lib", 3L, &Z266);
Zp1PEAFD_5(&Zq0A4_63, &Z266);
Zp1PEAFD_6(&Zq0A4_63, DirectorySeparator());
Zp1PEAFD_13((STRING)"lark", 4L, &Z266);
Zp1PEAFD_5(&Zq0A4_63, &Z266);
Zp1PEAFD_6(&Zq0A4_63, DirectorySeparator());
}
}
if (ZpmCQ_25(ORD('+'), &Zq0A4_61)) {
Zq0A4_62 = Zq0A4_199;
} else if (ZpmCQ_25(ORD('c'), &Zq0A4_61)) {
Zq0A4_62 = Zq0A4_198;
} else if (ZpmCQ_25(ORD('e'), &Zq0A4_61)) {
Zq0A4_62 = Zq0A4_201;
} else if (ZpmCQ_25(ORD('3'), &Zq0A4_61)) {
Zq0A4_62 = Zq0A4_202;
} else if (ZpmCQ_25(ORD('j'), &Zq0A4_61)) {
Zq0A4_62 = Zq0A4_203;
} else {
ZpmCQ_14(&Zq0A4_61, ORD('6'));
Zq0A4_62 = Zq0A4_200;
}
ZblNKKO_41((BOOLEAN)(!ZpmCQ_25(ORD('S'), &Zq0A4_61)));
Zpky9FDA_11.Y0 = ZmtLFGGBG_1;
if (Zq0A4_65.A[0] != '\0') {
Zpky9FDA_14(Zq0A4_65.A, 256L);
Zp1PEAFD_13(Zq0A4_65.A, 256L, &Z266);
} else {
Zp1PEAFD_13((STRING)"-", 1L, &Z266);
}
Zpky9FDA_11.Y0.Y0 = Zfb3DLQ_2(&Z266);
INC1(Zq0A4_68, ZmfDOBA_45());
ZibDGtrGC_0((STRING)"CompParser	", 11L);
ZpmC89LG6_11(Zq0A4_137);
ZibDGtrGC_0((STRING)"CompSemantics	", 14L);
ZblNKKO_46((ZDz6VQCC_4)ZfM_2);
if (Zq0A4_68 > 0) {
ZfM_34();
rExit(1L);
}
ZblNKKO_41(FALSE);
if (!Z284((STRING)"lark", 4L, ZpmC89LG6_0 + ZpmC89LG6_1 + ZpmC89LG6_2)) {
ZfM_34();
rExit(1L);
}
ZblNKKO_41((BOOLEAN)(!ZpmCQ_25(ORD('S'), &Zq0A4_61)));
ZiS8_44();
if (ZpmCQ_25(ORD('0'), &Zq0A4_61) && ZpmCQ_25(ORD('1'), &Zq0A4_61)) {
ZpmCQ_14(&Zq0A4_61, ORD('0'));
ZpmCQ_14(&Zq0A4_61, ORD('1'));
} else if (!ZpmCQ_25(ORD('0'), &Zq0A4_61) && !ZpmCQ_25(ORD('1'), &Zq0A4_61)) {
ZpmCQ_13(&Zq0A4_61, ORD('0'));
}
if (ZpmCQ_25(ORD('1'), &Zq0A4_61)) {
ZiS8_52();
ZibDGtrGC_0((STRING)"CompLR1		", 9L);
if (ZpmCQ_25(ORD('|'), &Zq0A4_61)) {
ZiS8_46();
ZibDGtrGC_0((STRING)"CompPred	", 9L);
}
} else if (ZpmCQ_25(ORD('0'), &Zq0A4_61)) {
ZiS8_45();
ZibDGtrGC_0((STRING)"CompLR0		", 9L);
ZiS8_46();
ZibDGtrGC_0((STRING)"CompPred	", 9L);
} else {
ZiS8_45();
ZibDGtrGC_0((STRING)"CompLR0		", 9L);
ZiS8_46();
ZibDGtrGC_0((STRING)"CompPred	", 9L);
ZiS8_51();
ZibDGtrGC_0((STRING)"CompReduce	", 11L);
ZiS8_52();
ZibDGtrGC_0((STRING)"CompLR1		", 9L);
ZiS8_53();
ZibDGtrGC_0((STRING)"CompReachable1	", 15L);
if (ZiS8_29 < ZiS8_30) {
ZiS8_50();
ZiS8_47();
ZiS8_46();
ZibDGtrGC_0((STRING)"CompPred	", 9L);
}
}
if (ZpmCQ_25(ORD('B'), &Zq0A4_61)) {
ZiS8_58();
}
ZggGECF6A_16();
ZibDGtrGC_0((STRING)"CompConflicts1	", 15L);
ZiS8_54();
ZibDGtrGC_0((STRING)"CompOptimizeLR0	", 16L);
ZiS8_55();
ZibDGtrGC_0((STRING)"CompReachable2	", 15L);
ZpmC89LG6_12(Zq0A4_137);
ZggFGLABP_35();
ZggFGLABP_36();
ZggFGLABP_40();
if (ZpmCQ_25(ORD('q'), &Zq0A4_61) || ZpmCQ_25(ORD('Q'), &Zq0A4_61)) {
Zq0A4_191(Zq0A4_137);
}
if (ZpmCQ_25(ORD('G'), &Zq0A4_61)) {
Zq0A4_192(Zq0A4_137);
}
if (ZpmCQ_25(ORD('|'), &Zq0A4_61)) {
if (Zq0A4_65.A[0] != '\0') {
Z272 = 0;
Z273 = 0;
while (Zq0A4_65.A[Z273] != '\0') {
if (Zq0A4_65.A[Z273] == '/' || Zq0A4_65.A[Z273] == '\\') {
Z272 = Z273 + 1;
}
INC(Z273);
}
Z271 = 9999;
Z273 = 0;
for (;;) {
Z270.A[Z273] = Zq0A4_65.A[Z272];
if (Z270.A[Z273] == '\0') {
goto EXIT_10;
}
if (Z270.A[Z273] == '.') {
Z271 = Z273;
}
INC(Z273);
INC(Z272);
} EXIT_10:;
if (Z271 != 9999) {
Z273 = Z271;
}
Z270.A[Z273] = '\0';
Zp1PEAFD_13(Z270.A, 256L, &Z267);
} else if (Zq0A4_72 == Zfb3DLQ_1) {
Zp1PEAFD_13((STRING)"Parser", 6L, &Z267);
} else {
Zfb3DLQ_3(Zq0A4_72, &Z267);
}
Zp1PEAFD_3(&Z268, &Z267);
Zp1PEAFD_13(Z263, 4L, &Z266);
Zp1PEAFD_5(&Z267, &Z266);
Zp1PEAFD_14(&Z267, Z270.A, 256L);
ZbrRF74A_0 = ZfM_20(Z270.A, 256L);
if (ZbrRF74A_0 < 0) {
ZblNKKO_45((STRING)"can not open file", 17L, (LONGCARD)ZblNKKO_14, ZmtLFGGBG_1, (LONGCARD)ZblNKKO_32, ADR (Z270));
}
if (ZpmCQ_25(ORD('D'), &Zq0A4_61)) {
Zp1PEAFD_3(&Z267, &Z268);
Zp1PEAFD_13(Z265, 4L, &Z266);
Zp1PEAFD_5(&Z267, &Z266);
Zp1PEAFD_14(&Z267, Z270.A, 256L);
ZaeBJF_1 = ZfM_20(Z270.A, 256L);
if (ZaeBJF_1 < 0) {
ZblNKKO_45((STRING)"can not open file", 17L, (LONGCARD)ZblNKKO_14, ZmtLFGGBG_1, (LONGCARD)ZblNKKO_32, ADR (Z270));
}
Zp1PEAFD_3(&Z267, &Z268);
Zp1PEAFD_13(Z264, 4L, &Z266);
Zp1PEAFD_5(&Z267, &Z266);
Zp1PEAFD_14(&Z267, Z270.A, 256L);
ZaeBJF_0 = ZfM_4(Z270.A, 256L);
if (ZaeBJF_0 >= 0) {
ZaeBJF_2();
ZfM_5(ZaeBJF_0);
}
ZaeBJF_0 = ZfM_20(Z270.A, 256L);
if (ZaeBJF_0 < 0) {
ZblNKKO_45((STRING)"can not open file", 17L, (LONGCARD)ZblNKKO_14, ZmtLFGGBG_1, (LONGCARD)ZblNKKO_32, ADR (Z270));
}
ZaeBJF_9(Zq0A4_137);
ZibDGtrGC_0((STRING)"CompDelta	", 10L);
}
ZggGECF6A_17();
ZibDGtrGC_0((STRING)"CompConflicts2	", 15L);
ZiSr_15();
ZfM_21(ZbrRF74A_0);
if (ZpmCQ_25(ORD('D'), &Zq0A4_61)) {
ZaeBJF_4();
ZfM_21(ZaeBJF_1);
ZfM_21(ZaeBJF_0);
}
} else {
ZiSr_15();
}
if (ZpmCQ_25(ORD('i'), &Zq0A4_61)) {
if (ZpmCQ_25(ORD('6'), &Zq0A4_61)) {
ZggFGLABP_42();
ZibDGtrGC_0((STRING)"CompTDefaults	", 14L);
} else {
ZggFGLABP_41();
ZibDGtrGC_0((STRING)"CompTDefaults	", 14L);
}
ZggFGLABP_44();
ZibDGtrGC_0((STRING)"CompressTTable	", 15L);
ZggFGLABP_43();
ZibDGtrGC_0((STRING)"CompNDefaults	", 14L);
ZggFGLABP_45();
ZibDGtrGC_0((STRING)"CompressNTable	", 15L);
}
if (ZpmCQ_25(ORD('y'), &Zq0A4_61)) {
ZiS8_58();
}
ZiS8_56();
if (ZpmCQ_25(ORD('d'), &Zq0A4_61) && Zq0A4_62 != Zq0A4_203) {
ZdaDDADFC_17();
}
if (ZpmCQ_25(ORD('i'), &Zq0A4_61)) {
ZdaDDADFC_16();
ZibDGtrGC_0((STRING)"CompGenParser	", 14L);
}
if (ZpmCQ_25(ORD('p'), &Zq0A4_61)) {
ZdaDDADFC_18();
}
if (ZpmCQ_25(ORD('O'), &Zq0A4_61)) {
ZdaDDADFC_20();
}
ZblNKKO_46((ZDz6VQCC_4)ZfM_2);
ZiS8_61();
if (ZpmCQ_25(ORD('t'), &Zq0A4_61)) {
ZiS8_62();
}
if (ZpmCQ_25(ORD('8'), &Zq0A4_61) && !ZpmCQ_25(ORD('s'), &Zq0A4_61)) {
ZblNKKO_45((STRING)"memory used", 11L, (LONGCARD)ZblNKKO_20, ZmtLFGGBG_1, (LONGCARD)ZblNKKO_24, ADR (ZDtgCFKU_0));
ZblNKKO_45((STRING)"heap   used", 11L, (LONGCARD)ZblNKKO_20, ZmtLFGGBG_1, (LONGCARD)ZblNKKO_24, ADR (Zq0A4_138));
}
ZfM_34();
if (Zq0A4_68 > 0) {
rExit(1L);
} else {
rExit(0L);
}
}
