#include "SYSTEM_.h"

#ifndef DEFINITION_rSystem
#include "rSystem.h"
#endif

#ifndef DEFINITION_Strings
#include "Strings.h"
#endif

#ifndef DEFINITION_General
#include "General.h"
#endif

#ifndef DEFINITION_Idents
#include "Idents.h"
#endif

#ifndef DEFINITION_Position
#include "Position.h"
#endif

#ifndef DEFINITION_Errors
#include "Errors.h"
#endif

#ifndef DEFINITION_IO
#include "IO.h"
#endif

#ifndef DEFINITION_StdIO
#include "StdIO.h"
#endif

#ifndef DEFINITION_Scanner
#include "Scanner.h"
#endif

#ifndef DEFINITION_Parser
#include "Parser.h"
#endif

#ifndef DEFINITION_Classes
#include "Classes.h"
#endif

#ifndef DEFINITION_Eval
#include "Eval.h"
#endif

#ifndef DEFINITION_Tree
#include "Tree.h"
#endif

#ifndef DEFINITION_Tree0
#include "Tree0.h"
#endif

#ifndef DEFINITION_Dfa
#include "Dfa.h"
#endif

#ifndef DEFINITION_GenTabs
#include "GenTabs.h"
#endif

#ifndef DEFINITION_ScanGen
#include "ScanGen.h"
#endif

#ifndef DEFINITION_Times
#include "Times.h"
#endif

#ifndef DEFINITION_Strings
#include "Strings.h"
#endif

static struct S_1 {
CHAR A[255 + 1];
} Z207;
static SHORTCARD Z208;
static SHORTCARD Z209, Z210;
static BOOLEAN Z211, Z212, Z213, Z214, Z215;
static BOOLEAN Z216;
static ZDz6VQCC_5 Z217;
static Zp1PEAFD_2 Z218;
static struct S_2 {
CHAR A[255 + 1];
} Z219;
static void Z220 ARGS ((CHAR Z207[], LONGCARD O_1));
static INTEGER Z230 ARGS ((CHAR Z221));
static void Z231 ARGS ((INTEGER Z210));
static BOOLEAN Z232 ARGS ((CHAR Z233[], LONGCARD O_2, CARDINAL Z234));
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
static void Z239 ARGS ((void));


static void Z220
# ifdef HAVE_ARGS
(CHAR Z207[], LONGCARD O_1)
# else
(Z207, O_1)
CHAR Z207[];
LONGCARD O_1;
# endif
{
CHAR Z221;
CARDINAL Z209, Z222, Z223;

Z222 = 1;
Z221 = Z207[0];
do {
if (Z221 == '-') {
Z221 = Z207[Z222];
INC(Z222);
if (Z221 == 'l') {
Zp1PEAFD_4(&Zpky9jaD_40);
for (;;) {
Z221 = Z207[Z222];
INC(Z222);
if (ORD(Z221) <= ORD(' ')) {
goto EXIT_1;
}
Zp1PEAFD_6(&Zpky9jaD_40, Z221);
} EXIT_1:;
Zp1PEAFD_6(&Zpky9jaD_40, DirectorySeparator());
} else if (Z221 == 'f') {
Zp1PEAFD_4(&Zpky9jaD_39);
for (;;) {
Z221 = Z207[Z222];
INC(Z222);
if (ORD(Z221) <= ORD(' ')) {
goto EXIT_2;
}
Zp1PEAFD_6(&Zpky9jaD_39, Z221);
} EXIT_2:;
} else {
while (ORD(Z221) > ORD(' ')) {
switch (Z221) {
case '?':;
Z214 = TRUE;
break;
case 'h':;
Z214 = TRUE;
break;
case 'c':;
Zpky9jaD_38 = Zpky9jaD_56;
break;
case '+':;
Zpky9jaD_38 = Zpky9jaD_57;
break;
case 'm':;
Zpky9jaD_38 = Zpky9jaD_55;
break;
case 'e':;
Zpky9jaD_38 = Zpky9jaD_58;
break;
case 'u':;
Zpky9jaD_38 = Zpky9jaD_59;
break;
case 'j':;
Zpky9jaD_38 = Zpky9jaD_60;
break;
case 'd':;
Z211 = TRUE;
break;
case 's':;
Z212 = TRUE;
break;
case 'r':;
Z213 = TRUE;
break;
case 'a':;
Z211 = TRUE;
Z212 = TRUE;
break;
case 'i':;
Zaf1_7 = 255;
break;
case 'k':;
Z221 = Z207[Z222];
INC(Z222);
switch (Z221) {
case '1':;
Zpky9jaD_41 = 1;
Zaf1_7 = 255;
break;
case '2':;
Zpky9jaD_41 = 2;
Zaf1_7 = 65535;
break;
case '4':;
Zpky9jaD_41 = 4;
Zaf1_7 = (LONGCARD)4294967295;
break;
default:
DEC(Z222);
ZblNKKO_44((STRING)"illegal value for option -k", 27L, (LONGCARD)ZblNKKO_16, ZmtLFGGBG_1);
break;
}
break;
case 'z':;
Zpky9jaD_45 = TRUE;
Z221 = Z207[Z222];
INC(Z222);
Z223 = 0;
while ('0' <= Z221 && Z221 <= '9') {
Z223 = Z223 * 10 + ORD(Z221) - ORD('0');
Z221 = Z207[Z222];
INC(Z222);
}
DEC(Z222);
Zgd7EPBB_9 = ZdaDDAD7_4((LONGINT)Z223, 256L);
break;
case 'o':;
Z208 = 16000;
break;
case 'n':;
Z208 = 0;
break;
case 'w':;
Z215 = FALSE;
break;
case 'g':;
Zpky9jaD_42 = TRUE;
break;
case 'b':;
Zgd7EPBB_19 = FALSE;
break;
case 't':;
Zpky9jaD_43 = TRUE;
break;
case 'x':;
ZmfDOBA_0 = TRUE;
break;
case 'v':;
ZmfDOBA_1 = FALSE;
break;
case 'p':;
ZdaDwjxF_13 = TRUE;
break;
case 'y':;
Zpky9jaD_44 = TRUE;
break;
case 'G':;
Z216 = TRUE;
break;
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
Z210 = Z210 * 10 + ORD(Z221) - ORD('0');
break;
default:
break;
}
Z221 = Z207[Z222];
INC(Z222);
}
}
} else if (Z221 == '?') {
Z214 = TRUE;
} else if (ORD(Z221) > ORD(' ')) {
Z209 = 0;
do {
Z219.A[Z209] = Z221;
INC(Z209);
Z221 = Z207[Z222];
INC(Z222);
} while (!(ORD(Z221) <= ORD(' ')));
Z219.A[Z209] = '\0';
} else if (Z221 != '\0') {
Z221 = Z207[Z222];
INC(Z222);
}
} while (!(Z221 == '\0'));
}

static INTEGER Z230
# ifdef HAVE_ARGS
(CHAR Z221)
# else
(Z221)
CHAR Z221;
# endif
{
switch (Z221) {
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
return ORD(Z221) - ORD('0');
break;
case 'A':;
case 'B':;
case 'C':;
case 'D':;
case 'E':;
case 'F':;
return ORD(Z221) - ORD('A') + 10;
break;
case 'a':;
case 'b':;
case 'c':;
case 'd':;
case 'e':;
case 'f':;
return ORD(Z221) - ORD('a') + 10;
break;
}
return 0;
}

static void Z231
# ifdef HAVE_ARGS
(INTEGER Z210)
# else
(Z210)
INTEGER Z210;
# endif
{
switch (Z210) {
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

static BOOLEAN Z232
# ifdef HAVE_ARGS
(CHAR Z233[], LONGCARD O_2, CARDINAL Z234)
# else
(Z233, O_2, Z234)
CHAR Z233[];
LONGCARD O_2;
CARDINAL Z234;
# endif
{
Zp1PEAFD_2 Z235, Z218;
struct S_4 Z236;
ZfM_3 Z237;
struct S_5 Z171;
ZDz6VQCC_5 Z238;
struct S_6 Z201;
struct S_7 Z203;
CHAR Z221;
CARDINAL Z209, Z202;
BITSET Z212, Z200;
OPEN_ARRAY_LOCALS

ALLOC_OPEN_ARRAYS (O_2 * sizeof (CHAR), 1)
COPY_OPEN_ARRAY (Z233, O_2, CHAR)
if (rtpqy()) {
FREE_OPEN_ARRAYS
return TRUE;
}
Zp1PEAFD_3(&Z235, &Zpky9jaD_40);
Zp1PEAFD_6(&Z235, '.');
Zp1PEAFD_6(&Z235, '.');
Zp1PEAFD_6(&Z235, DirectorySeparator());
Zp1PEAFD_13((STRING)"ctlicens.dat", 12L, &Z218);
Zp1PEAFD_5(&Z235, &Z218);
Zp1PEAFD_6(&Z235, '\0');
Zp1PEAFD_14(&Z235, Z236.A, 129L);
Z237 = ZfM_4(Z236.A, 129L);
if (Z237 < 0) {
Z231(1L);
FREE_OPEN_ARRAYS
return FALSE;
}
for (;;) {
if (ZfM_19(Z237)) {
FREE_OPEN_ARRAYS
return FALSE;
}
Z209 = 0;
Z221 = ZfM_7(Z237);
while (Z221 != '\n' && Z221 != '\r') {
Z201.A[Z209] = (BITSET)(Z230(Z221) * 16 + Z230(ZfM_7(Z237)));
INC(Z209);
Z221 = ZfM_7(Z237);
}
if (Z221 == '\r') {
Z221 = ZfM_7(Z237);
}
if (Z221 != '\n') {
Z231(4L);
FREE_OPEN_ARRAYS
return FALSE;
}
Z202 = Z209 - 1;
Z212 = (BITSET)ORD('j');
{
LONGCARD B_1 = 0, B_2 = Z202;

if (B_1 <= B_2)
for (Z209 = B_1;; Z209 += 1) {
Z200 = Z201.A[Z209] ^ Z212;
Z212 = Z212 ^ Z200;
Z203.A[Z209] = CHR((CARDINAL)Z200);
if (Z209 >= B_2) break;
}
}
if (Z203.A[0] == Z233[0] && Z203.A[1] == Z233[1] && Z203.A[2] == Z233[2]) {
goto EXIT_3;
}
} EXIT_3:;
ZfM_5(Z237);
Zp1PEAFD_4(&Z218);
for (Z209 = 5; Z209 <= 12; Z209 += 1) {
Zp1PEAFD_6(&Z218, Z203.A[Z209]);
}
(void) strncpy ((char *)Z171.A, "%Y%m%d", sizeof (Z171.A));
Z238 = rtpqx(Z171.A, 11L);
Z209 = 0;
for (;;) {
Z171.A[Z209] = Z238->A[Z209];
if (Z171.A[Z209] == '\0' || Z209 == 10) {
goto EXIT_4;
}
INC(Z209);
} EXIT_4:;
Zp1PEAFD_13(Z171.A, 11L, &Z235);
if (!Zp1PEAFD_9(&Z235, &Z218)) {
Z231(2L);
FREE_OPEN_ARRAYS
return FALSE;
}
Z202 = 0;
for (Z209 = 14; Z209 <= 19; Z209 += 1) {
if (Z203.A[Z209] != ' ') {
Z202 = Z202 * 10 + ORD(Z203.A[Z209]) - ORD('0');
}
}
if (Z234 > Z202) {
Z231(3L);
FREE_OPEN_ARRAYS
return FALSE;
}
FREE_OPEN_ARRAYS
return TRUE;
}

static void Z239
 ARGS ((void))
{
Zp1BbM_23((STRING)"usage: rex [-options] [-k{124}] [-f<file>] [-l<directory>] [<file>]", 67L);
Zp1BbM_27();
Zp1BbM_27();
Zp1BbM_23((STRING)" a generate all (= ds)", 22L);
Zp1BbM_27();
Zp1BbM_23((STRING)" c generate a lexical analyzer in C", 35L);
Zp1BbM_27();
Zp1BbM_23((STRING)" + generate a lexical analyzer in C++", 37L);
Zp1BbM_27();
Zp1BbM_23((STRING)" m generate a lexical analyzer in Modula (default)", 50L);
Zp1BbM_27();
Zp1BbM_23((STRING)" u generate a lexical analyzer in Ada", 37L);
Zp1BbM_27();
Zp1BbM_23((STRING)" e generate a lexical analyzer in Eiffel", 40L);
Zp1BbM_27();
Zp1BbM_23((STRING)" j generate a lexical analyzer in Java", 38L);
Zp1BbM_27();
Zp1BbM_23((STRING)" d generate a header file or definition module", 46L);
Zp1BbM_27();
Zp1BbM_23((STRING)" s generate support modules:", 28L);
Zp1BbM_27();
Zp1BbM_23((STRING)"   . a source module for input", 30L);
Zp1BbM_27();
Zp1BbM_23((STRING)"   . a main program to be used as test driver", 45L);
Zp1BbM_27();
Zp1BbM_23((STRING)" v do not predefine rules for skipping of white space", 53L);
Zp1BbM_27();
Zp1BbM_23((STRING)" x require explicit definitions for used identifiers", 52L);
Zp1BbM_27();
Zp1BbM_23((STRING)"   (default: undefined identifiers are treated as strings)", 58L);
Zp1BbM_27();
Zp1BbM_23((STRING)" y do not generate dummy labels", 31L);
Zp1BbM_27();
Zp1BbM_23((STRING)"   (might cause compiler messages such as 'statement not reached')", 66L);
Zp1BbM_27();
Zp1BbM_23((STRING)"   (default: generate dummy labels)", 35L);
Zp1BbM_27();
Zp1BbM_23((STRING)"   (might cause compiler messages such as 'label not used')", 59L);
Zp1BbM_27();
Zp1BbM_23((STRING)" r reduce number of generated case/switch labels", 48L);
Zp1BbM_27();
Zp1BbM_23((STRING)" i use ISO 8 bit code (default: ASCII 7 bit code)", 49L);
Zp1BbM_27();
Zp1BbM_23((STRING)" -k<n> generate scanner for characters having n bytes (default: 1)", 66L);
Zp1BbM_27();
Zp1BbM_23((STRING)"   (n > 1 implies -z and disables CHARACTER_SET)", 48L);
Zp1BbM_27();
Zp1BbM_23((STRING)" -z[<n>] map characters to classes at run time,", 47L);
Zp1BbM_27();
Zp1BbM_23((STRING)"   use an array of n elements, n >= 256 (default: 16384)", 56L);
Zp1BbM_27();
Zp1BbM_23((STRING)" o optimize table size", 22L);
Zp1BbM_27();
Zp1BbM_23((STRING)" n do not optimize table size", 29L);
Zp1BbM_27();
Zp1BbM_23((STRING)" w suppress warnings", 20L);
Zp1BbM_27();
Zp1BbM_23((STRING)" g generate # line directives", 29L);
Zp1BbM_27();
Zp1BbM_23((STRING)" b do not map characters to classes during generation (implies -k1)", 67L);
Zp1BbM_27();
Zp1BbM_23((STRING)" t touch output files only if necessary", 39L);
Zp1BbM_27();
Zp1BbM_23((STRING)" p print information about ambiguous rules", 42L);
Zp1BbM_27();
Zp1BbM_23((STRING)" 1 print statistics about the generated lexical analyzer", 56L);
Zp1BbM_27();
Zp1BbM_23((STRING)" h print help information", 25L);
Zp1BbM_27();
Zp1BbM_23((STRING)" -f<file> specify a file to be used as skeleton for the scanner", 63L);
Zp1BbM_27();
Zp1BbM_23((STRING)" -l<dir>  specify the directory dir where rex finds its data files", 66L);
Zp1BbM_27();
}

void BEGIN_MODULE ARGS ((void))
{
BEGIN_rSystem ();
BEGIN_Strings ();
BEGIN_General ();
BEGIN_Idents ();
BEGIN_Position ();
BEGIN_Errors ();
BEGIN_IO ();
BEGIN_StdIO ();
BEGIN_Scanner ();
BEGIN_Parser ();
BEGIN_Classes ();
BEGIN_Eval ();
BEGIN_Tree ();
BEGIN_Tree0 ();
BEGIN_Dfa ();
BEGIN_GenTabs ();
BEGIN_ScanGen ();
BEGIN_Times ();
BEGIN_Strings ();

Z211 = FALSE;
Z212 = FALSE;
Z213 = FALSE;
Z214 = FALSE;
Z215 = TRUE;
Zpky9jaD_42 = FALSE;
Zgd7EPBB_19 = TRUE;
Zpky9jaD_43 = FALSE;
Zpky9jaD_44 = FALSE;
Zpky9jaD_45 = FALSE;
Z216 = FALSE;
Zpky9jaD_41 = 1;
Z208 = 40;
Z210 = 0;
Zgd7EPBB_9 = 1024 * 16;
Zpky9jaD_38 = Zpky9jaD_55;
ZmfDOBA_0 = FALSE;
ZmfDOBA_1 = TRUE;
ZdaDwjxF_13 = FALSE;
Zp1PEAFD_4(&Zpky9jaD_40);
Zp1PEAFD_4(&Zpky9jaD_39);
Z219.A[0] = '\0';
Z217 = GetEnvVar((STRING)"REX", 3L);
if (Z217 != NIL) {
Z209 = 0;
for (;;) {
Z207.A[Z209] = Z217->A[Z209];
if (Z207.A[Z209] == '\0' || Z209 == 255) {
goto EXIT_5;
}
INC(Z209);
} EXIT_5:;
Z220(Z207.A, 256L);
}
{
SHORTCARD B_3 = 1, B_4 = GetArgCount() - 1;

if (B_3 <= B_4)
for (Z209 = B_3;; Z209 += 1) {
GetArgument((LONGINT)Z209, Z207.A, 256L);
Z220(Z207.A, 256L);
if (Z209 >= B_4) break;
}
}
if (Z214) {
Z239();
} else {
if (Zp1PEAFD_7(&Zpky9jaD_40) == 0) {
Z217 = GetEnvVar((STRING)"CT_DIR", 6L);
if (Z217 != NIL) {
Z209 = 0;
for (;;) {
Z207.A[Z209] = Z217->A[Z209];
if (Z207.A[Z209] == '\0' || Z209 == 255) {
goto EXIT_6;
}
INC(Z209);
} EXIT_6:;
Zp1PEAFD_13(Z207.A, 256L, &Zpky9jaD_40);
Zp1PEAFD_6(&Zpky9jaD_40, DirectorySeparator());
Zp1PEAFD_13((STRING)"lib", 3L, &Z218);
Zp1PEAFD_5(&Zpky9jaD_40, &Z218);
Zp1PEAFD_6(&Zpky9jaD_40, DirectorySeparator());
Zp1PEAFD_13((STRING)"rex", 3L, &Z218);
Zp1PEAFD_5(&Zpky9jaD_40, &Z218);
Zp1PEAFD_6(&Zpky9jaD_40, DirectorySeparator());
}
}
if (!Zgd7EPBB_19) {
Zpky9jaD_41 = 1;
Zaf1_7 = 255;
}
if (Zpky9jaD_41 > 1) {
Zpky9jaD_45 = TRUE;
}
Zpky9FDA_12();
Zpky9FDA_10.Y0 = ZmtLFGGBG_1;
if (Z219.A[0] != '\0') {
Zpky9FDA_13(Z219.A, 256L);
Zp1PEAFD_13(Z219.A, 256L, &Z218);
} else {
Zp1PEAFD_13((STRING)"-", 1L, &Z218);
}
Zpky9FDA_10.Y0.Y0 = Zfb3DLQ_2(&Z218);
if (ZmfDOBA_53() == 0 && Zpky9FDA_1 == 0) {
if (Z210 >= 19) {
Zq0A4J_71((ZDz6VQCC_4)ZfM_1, Zq0A4J_37);
}
if (Z210 >= 2) {
ZqrGCB_2((STRING)"Parser		", 8L);
}
Zgd7EPBB_21();
if (Z210 >= 18) {
Zgd7EPBB_22();
}
if (Z210 >= 2) {
ZqrGCB_2((STRING)"ComputeClasses	", 15L);
}
ZbpA7_1();
ZbpA7_0(Zq0A4J_37);
if (Z210 >= 17) {
Zq0A4J_71((ZDz6VQCC_4)ZfM_1, Zq0A4J_37);
}
if (Z216) {
Zq0A4J_73(Zq0A4J_37);
}
if (Z210 >= 2) {
ZqrGCB_2((STRING)"Eval		", 6L);
}
ZdaDwjxF_12 = ZdaDwjxF_9 + Zq0A4J_37->U_1.V_8.Y7.Y3;
ZdaDwjxF_7 = Zq0A4J_37->U_1.V_8.Y7.Y4;
ZdaDwjxF_6 = Zq0A4J_37->U_1.V_8.Y7.Y1;
Zgd7EPBB_25();
Zq0A4J_69();
if (Z210 >= 16) {
Zq0A4_28(ZdaDwjxF_6);
}
if (!Z232((STRING)"rex", 3L, (LONGCARD)ZdaDwjxF_10)) {
ZfM_34();
rExit(1L);
}
ZdaDwjxF_21(Z210, Z213, Z215, Z208);
Zpky9jaD_50(Z213, Z215);
} else {
ZfM_34();
rExit(1L);
}
}
if (Z211) {
Zpky9jaD_51();
}
if (Z212) {
Zpky9jaD_52();
}
ZfM_34();
rExit(0L);
}
