#include "SYSTEM_.h"

#ifndef DEFINITION_Pointers
#include "Pointers.h"
#endif

#ifndef DEFINITION_rSystem
#include "rSystem.h"
#endif

#ifndef DEFINITION_General
#include "General.h"
#endif

#ifndef DEFINITION_DynArray
#include "DynArray.h"
#endif

#ifndef DEFINITION_IO
#include "IO.h"
#endif

#ifndef DEFINITION_Checks
#include "Checks.h"
#endif

#ifndef DEFINITION_Strings
#include "Strings.h"
#endif

#ifndef DEFINITION_StringM
#include "StringM.h"
#endif

#ifndef DEFINITION_Idents
#include "Idents.h"
#endif

#ifndef DEFINITION_Lists
#include "Lists.h"
#endif

#ifndef DEFINITION_Texts
#include "Texts.h"
#endif

#ifndef DEFINITION_Sets
#include "Sets.h"
#endif

#ifndef DEFINITION_Pack
#include "Pack.h"
#endif

#ifndef DEFINITION_Position
#include "Position.h"
#endif

#ifndef DEFINITION_Errors
#include "Errors.h"
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

#ifndef DEFINITION_Conflict
#include "Conflict.h"
#endif

#ifndef DEFINITION_Compress
#include "Compress.h"
#endif

#ifndef DEFINITION_GenLRk
#include "GenLRk.h"
#endif

#ifndef DEFINITION_IO
#include "IO.h"
#endif

#ifndef DEFINITION_Strings
#include "Strings.h"
#endif

#ifndef DEFINITION_StringM
#include "StringM.h"
#endif

#ifndef DEFINITION_Lists
#include "Lists.h"
#endif

#ifndef DEFINITION_Texts
#include "Texts.h"
#endif

#ifndef DEFINITION_Tree
#include "Tree.h"
#endif

#ifndef DEFINITION_Layout
#include "Layout.h"
#endif

#ifndef DEFINITION_Idents
#include "Idents.h"
#endif

#ifndef DEFINITION_Generate
#include "Generate.h"
#endif

CARDINAL ZdaDDADFC_0;
struct Generate_1 ZdaDDADFC_1;
CARDINAL ZdaDDADFC_2;

static CHAR Z271 [] = ".md";
static CHAR Z272 [] = ".mi";
static CHAR Z273 [] = ".h";
static CHAR Z274 [] = ".c";
static CHAR Z275 [] = ".cxx";
static CHAR Z276 [] = ".ads";
static CHAR Z277 [] = ".adb";
static CHAR Z278 [] = ".e";
static CHAR Z279 [] = ".java";
static CHAR Z280 [] = "Parser.md";
static CHAR Z281 [] = "Parser.mi";
static CHAR Z282 [] = "ParsDrv.mi";
static CHAR Z283 [] = "Parser.h";
static CHAR Z284 [] = "Parser.c";
static CHAR Z285 [] = "ParsDrv.c";
static CHAR Z286 [] = "Parser.hh";
static CHAR Z287 [] = "Parser.cxx";
static CHAR Z288 [] = "ParsDrv.cxx";
static CHAR Z289 [] = "parser.ads";
static CHAR Z290 [] = "parser.adb";
static CHAR Z291 [] = "parsdrv.adb";
static CHAR Z292 [] = "parser.e";
static CHAR Z293 [] = "parsdrv.e";
static CHAR Z294 [] = "errors.e";
static CHAR Z295 [] = "position.e";
static CHAR Z296 [] = "attribut.e";
static CHAR Z297 [] = "scanattr.e";
static CHAR Z298 [] = "rfile.e";
static CHAR Z299 [] = "Parser.java";
static CHAR Z300 [] = "ParsDrv.java";
#define Z301	FALSE
#define Z302	8000
static struct S_1 {
CHAR A[31 + 1];
} Z303, Z304, Z305;
static struct S_2 {
CHAR A[7 + 1];
} Z306;
static Zp1PEAFD_2 Z307;
static Zfb3DLQ_0 Z308;
static BOOLEAN Z309;
static CARDINAL Z310, Z311;
static Zfb3DLQ_0 Z312;
static ZfM_3 Z329 ARGS ((Zp1PEAFD_2 Z330));
struct S_19 {
CHAR A[255 + 1];
};
static void Z334 ARGS ((Zp1PEAFD_2 Z330, ZfM_3 Z335));
struct S_18 {
CHAR A[255 + 1];
};
static ZfM_3 Z336 ARGS ((CHAR Z330[], LONGCARD O_2));
static void Z340 ARGS ((Zfb3DLQ_0 Z341, CHAR Z342[], LONGCARD O_4, CHAR Z343[], LONGCARD O_3, Zp1PEAFD_2 *Z330));
static void Z344 ARGS ((ZfM_3 Z339, ZfM_3 Z345, Zp1PEAFD_2 Z346, ZmtLFGGBG_0 Z347, ZqnGVQ_0 Z317));
static void Z352 ARGS ((ZfM_3 Z339, ZfM_3 Z335));
static void Z350 ARGS ((ZfM_3 Z335, Zp1PEAFD_2 Z348));
static void Z360 ARGS ((ZfM_3 *Z345, Zfb3DLQ_0 Z183));
static void Z365 ARGS ((Zp1PEAFD_2 *Z364, CHAR Z339[], LONGCARD O_5));
static void Z366 ARGS ((Zp1PEAFD_2 *Z364, INTEGER Z339));
static void Z367 ARGS ((Zp1PEAFD_2 *Z364, Zfb3DLQ_0 Z339));
static void Z368 ARGS ((Zp1PEAFD_2 *Z364, Zfb3DLQ_0 Z183));
static void Z351 ARGS ((ZfM_3 Z345, CARDINAL Z348, Zfb3DLQ_0 Z314));
static void Z354 ARGS ((ZfM_3 Z335, CHAR Z317[], LONGCARD O_6, BOOLEAN Z319));
static void Z373 ARGS ((ZfM_3 Z335, CHAR Z317[], LONGCARD O_7, INTEGER Z319));
static void Z374 ARGS ((ZfM_3 Z335));
static void Z375 ARGS ((ZfM_3 Z335));
static void Z381 ARGS ((ZfM_3 Z335));
struct S_12 {
Zq0A4_35 A[50000 + 1];
};
static void Z392 ARGS ((ZfM_3 Z335));
static void Z356 ARGS ((ZfM_3 Z335));
static void Z355 ARGS ((ZfM_3 Z335));
static void Z399 ARGS ((ZfM_3 Z335));
static void Z357 ARGS ((ZfM_3 Z335));
#define Z402	0
#define Z184	1
#define Z403	2
struct S_9 {
CHAR A[255 + 1];
};
struct S_10 {
CHAR A[15 + 1];
};
struct S_11 {
CHAR A[31 + 1];
};
struct S_8 {
CHAR A[255 + 1];
};
struct S_7 {
CHAR A[255 + 1];
};
struct S_6 {
CHAR A[255 + 1];
};
static void Z439 ARGS ((CHAR Z341[], LONGCARD O_8));
struct S_5 {
CHAR A[255 + 1];
};
static void Z416 ARGS ((ZfM_3 Z335));
static void Z443 ARGS ((ZfM_3 Z335));
static void Z445 ARGS ((ZfM_3 Z335));
static void Z466 ARGS ((ZfM_3 Z335, INTEGER Z441));
static CARDINAL Z472 ARGS ((Zq0A4_35 Z473, Zfb3DLQ_0 Z474));
static Zfb3DLQ_0 Z475 ARGS ((Zq0A4_35 Z376, CARDINAL Z476));
static void Z459 ARGS ((ZfM_3 Z335, ZqnGVQ_0 Z470, ZmtLFGGBG_0 Z400, INTEGER Z479, INTEGER Z480, INTEGER Z460, Zq0A4_35 Z376));
#define Z481	8
static void Z495 ARGS ((ZfM_3 Z335, INTEGER Z476));
static void Z494 ARGS ((ZfM_3 Z335, Zfb3DLQ_0 Z341));
static void Z379 ARGS ((ZfM_3 Z335, CARDINAL Z376));
static void Z380 ARGS ((ZfM_3 Z335, CARDINAL Z376));
static void Z417 ARGS ((ZfM_3 Z314));
static void Z418 ARGS ((ZfM_3 Z314));
static void Z419 ARGS ((ZfM_3 Z314));
static void Z420 ARGS ((ZfM_3 Z314));
static void Z421 ARGS ((ZfM_3 Z314));
static void Z424 ARGS ((ZfM_3 Z314));
static void Z425 ARGS ((ZfM_3 Z314));
static void Z426 ARGS ((ZfM_3 Z314));
static void Z427 ARGS ((ZfM_3 Z314));
static void Z428 ARGS ((ZfM_3 Z314));
static void Z429 ARGS ((ZfM_3 Z314));
static void Z430 ARGS ((ZfM_3 Z314));
static void Z422 ARGS ((ZfM_3 Z314));
static void Z423 ARGS ((ZfM_3 Z314));
static void Z415 ARGS ((ZfM_3 Z511));
static void Y1_417 ARGS ((ZfM_3 Z314));
static void Y2_418 ARGS ((ZfM_3 Z314));
static void Y3_419 ARGS ((ZfM_3 Z314));
static void Y4_420 ARGS ((ZfM_3 Z314));
static void Z512 ARGS ((ZfM_3 Z314));
static void Z513 ARGS ((ZfM_3 Z314));
static void Z514 ARGS ((ZfM_3 Z314));
static void Y5_426 ARGS ((ZfM_3 Z314));
static void Y6_427 ARGS ((ZfM_3 Z314));
static void Y7_428 ARGS ((ZfM_3 Z314));
static void Y8_429 ARGS ((ZfM_3 Z314));
static void Y9_430 ARGS ((ZfM_3 Z314));
static void Z431 ARGS ((ZfM_3 Z335));
static void Z432 ARGS ((ZfM_3 Z335));
static void Z433 ARGS ((ZfM_3 Z335));
struct S_3 {
LONGCARD A[100 + 1];
};
static void Z434 ARGS ((ZfM_3 Z335));
static void Z435 ARGS ((ZfM_3 Z335));

void ZdaDDADFC_3
# ifdef HAVE_ARGS
(ZfM_3 Z314, CHAR Z315)
# else
(Z314, Z315)
ZfM_3 Z314;
CHAR Z315;
# endif
{
ZfM_24(Z314, Z315);
INC(Z311);
}

void ZdaDDADFC_4
# ifdef HAVE_ARGS
(ZfM_3 Z314, CHAR Z317[], LONGCARD O_1)
# else
(Z314, Z317, O_1)
ZfM_3 Z314;
CHAR Z317[];
LONGCARD O_1;
# endif
{
OPEN_ARRAY_LOCALS

ALLOC_OPEN_ARRAYS (O_1 * sizeof (CHAR), 1)
COPY_OPEN_ARRAY (Z317, O_1, CHAR)
ZfM_29(Z314, Z317, O_1);
INC1(Z311, (O_1 - 1) + 1);
FREE_OPEN_ARRAYS
}

void ZdaDDADFC_5
# ifdef HAVE_ARGS
(ZfM_3 Z314, INTEGER Z319, INTEGER Z141)
# else
(Z314, Z319, Z141)
ZfM_3 Z314;
INTEGER Z319, Z141;
# endif
{
ZfM_25(Z314, Z319, (LONGCARD)Z141);
if (Z141 == 0) {
INC1(Z311, 6);
} else {
INC1(Z311, Z141);
}
}

void ZdaDDADFC_6
# ifdef HAVE_ARGS
(ZfM_3 Z314, LONGCARD Z319, INTEGER Z141, INTEGER Z321)
# else
(Z314, Z319, Z141, Z321)
ZfM_3 Z314;
LONGCARD Z319;
INTEGER Z141, Z321;
# endif
{
ZfM_28(Z314, Z319, (LONGCARD)Z141, (LONGCARD)Z321);
INC1(Z311, Z141);
}

void ZdaDDADFC_7
# ifdef HAVE_ARGS
(ZfM_3 Z314)
# else
(Z314)
ZfM_3 Z314;
# endif
{
ZfM_33(Z314);
INC(Z310);
Z311 = 0;
}

void ZdaDDADFC_8
# ifdef HAVE_ARGS
(ZfM_3 Z314, INTEGER Z324)
# else
(Z314, Z324)
ZfM_3 Z314;
INTEGER Z324;
# endif
{
ZibDRNS_2(Z314, Z324);
INC1(Z311, Z324);
}

void ZdaDDADFC_9
# ifdef HAVE_ARGS
(ZfM_3 Z314, Zfb3DLQ_0 Z183)
# else
(Z314, Z183)
ZfM_3 Z314;
Zfb3DLQ_0 Z183;
# endif
{
Zfb3DLQ_7(Z314, Z183);
INC1(Z311, Zp1PEAFi_4(Zfb3DLQ_4(Z183)));
}

void ZdaDDADFC_10
# ifdef HAVE_ARGS
(ZfM_3 Z314, Zp1PEAFD_2 Z225)
# else
(Z314, Z225)
ZfM_3 Z314;
Zp1PEAFD_2 Z225;
# endif
{
Zp1PEAFD_22(Z314, &Z225);
INC(Z310);
Z311 = 0;
}

void ZdaDDADFC_11
# ifdef HAVE_ARGS
(ZfM_3 Z314, ZqnGVQ_0 Z317)
# else
(Z314, Z317)
ZfM_3 Z314;
ZqnGVQ_0 Z317;
# endif
{
ZqnGVQ_5(Z314, Z317);
INC1(Z310, ZijFQQ_13(Z317));
Z311 = 0;
}

void ZdaDDADFC_12
# ifdef HAVE_ARGS
(ZfM_3 Z314, CHAR Z315)
# else
(Z314, Z315)
ZfM_3 Z314;
CHAR Z315;
# endif
{
if (ZpmCQ_25(ORD(':'), &Zq0A4_61) && Z311 > 0) {
ZdaDDADFC_7(Z314);
}
ZfM_29(Z314, (STRING)"yy", 2L);
ZfM_24(Z314, Z315);
INC1(Z311, 3);
}

static ZfM_3 Z329
# ifdef HAVE_ARGS
(Zp1PEAFD_2 Z330)
# else
(Z330)
Zp1PEAFD_2 Z330;
# endif
{
Zp1PEAFD_2 Z331;
struct S_19 Z332;
INTEGER Z333;

if (ZpmCQ_25(ORD('7'), &Zq0A4_61)) {
Zp1PEAFD_13((STRING)"yy", 2L, &Z331);
Zp1PEAFD_5(&Z331, &Z330);
Zp1PEAFD_6(&Z331, '\0');
Zp1PEAFD_14(&Z331, Z332.A, 256L);
} else {
Zp1PEAFD_6(&Z330, '\0');
Zp1PEAFD_14(&Z330, Z332.A, 256L);
}
Z333 = ZfM_20(Z332.A, 256L);
if (Z333 < 0) {
INC(Zq0A4_68);
ZblNKKO_45((STRING)"can not access file", 19L, (LONGCARD)ZblNKKO_14, ZmtLFGGBG_1, (LONGCARD)ZblNKKO_32, ADR (Z332));
}
return Z333;
}

static void Z334
# ifdef HAVE_ARGS
(Zp1PEAFD_2 Z330, ZfM_3 Z335)
# else
(Z330, Z335)
Zp1PEAFD_2 Z330;
ZfM_3 Z335;
# endif
{
Zp1PEAFD_2 Z225, Z331;
struct S_18 Z332;
INTEGER Z333;

ZfM_21(Z335);
if (ZpmCQ_25(ORD('7'), &Zq0A4_61)) {
Zp1PEAFD_13((STRING)"gupd ", 5L, &Z331);
Zp1PEAFD_5(&Z331, &Z330);
Zp1PEAFD_13((STRING)" yy", 3L, &Z225);
Zp1PEAFD_5(&Z331, &Z225);
Zp1PEAFD_5(&Z331, &Z330);
Zp1PEAFD_6(&Z331, '\0');
Zp1PEAFD_14(&Z331, Z332.A, 256L);
Z333 = rSystem(Z332.A, 256L);
}
}

static ZfM_3 Z336
# ifdef HAVE_ARGS
(CHAR Z330[], LONGCARD O_2)
# else
(Z330, O_2)
CHAR Z330[];
LONGCARD O_2;
# endif
{
Zp1PEAFD_2 Z337, Z338;
ZfM_3 Z339;

Zp1PEAFD_3(&Z337, &Zq0A4_63);
Zp1PEAFD_13(Z330, O_2, &Z338);
Zp1PEAFD_5(&Z337, &Z338);
Zp1PEAFD_6(&Z337, '\0');
Zp1PEAFD_14(&Z337, Z330, O_2);
Z339 = ZfM_4(Z330, O_2);
if (Z339 < 0) {
INC(Zq0A4_68);
ZblNKKO_45((STRING)"can not access file", 19L, (LONGCARD)ZblNKKO_14, ZmtLFGGBG_1, (LONGCARD)ZblNKKO_32, ADR1 (Z330));
}
return Z339;
}

static void Z340
# ifdef HAVE_ARGS
(Zfb3DLQ_0 Z341, CHAR Z342[], LONGCARD O_4, CHAR Z343[], LONGCARD O_3, Zp1PEAFD_2 *Z330)
# else
(Z341, Z342, O_4, Z343, O_3, Z330)
Zfb3DLQ_0 Z341;
CHAR Z342[];
LONGCARD O_4;
CHAR Z343[];
LONGCARD O_3;
Zp1PEAFD_2 *Z330;
# endif
{
Zp1PEAFD_2 Z225;
OPEN_ARRAY_LOCALS

ALLOC_OPEN_ARRAYS (O_3 * sizeof (CHAR) + O_4 * sizeof (CHAR), 2)
COPY_OPEN_ARRAY (Z343, O_3, CHAR)
COPY_OPEN_ARRAY (Z342, O_4, CHAR)
if (Z341 == Zfb3DLQ_1) {
Zp1PEAFD_13(Z342, O_4, Z330);
} else {
Zfb3DLQ_3(Z341, Z330);
}
Zp1PEAFD_13(Z343, O_3, &Z225);
Zp1PEAFD_5(Z330, &Z225);
FREE_OPEN_ARRAYS
}

static void Z344
# ifdef HAVE_ARGS
(ZfM_3 Z339, ZfM_3 Z345, Zp1PEAFD_2 Z346, ZmtLFGGBG_0 Z347, ZqnGVQ_0 Z317)
# else
(Z339, Z345, Z346, Z347, Z317)
ZfM_3 Z339, Z345;
Zp1PEAFD_2 Z346;
ZmtLFGGBG_0 Z347;
ZqnGVQ_0 Z317;
# endif
{
Zp1PEAFD_2 Z348;

if (ZqnGVQ_4(&Z317)) {
if (Zp1PEAFD_7(&Z346) >= 3 && Zp1PEAFD_12(&Z346, 3) == '[') {
for (;;) {
if (ZfM_19(Z339)) {
goto EXIT_1;
}
Zp1PEAFD_20(Z339, &Z348);
if (Zp1PEAFD_7(&Z348) >= 2 && Zp1PEAFD_12(&Z348, 1) == '$') {
if (Zp1PEAFD_12(&Z348, 2) == ']') {
goto EXIT_1;
}
if (Zp1PEAFD_12(&Z348, 2) == '@') {
Z350(Z345, Z348);
} else {
ZblNKKO_44((STRING)"missing $] in skeleton?", 23L, (LONGCARD)ZblNKKO_14, ZmtLFGGBG_1);
}
} else {
ZdaDDADFC_10(Z345, Z348);
}
} EXIT_1:;
}
} else {
if (Zp1PEAFD_7(&Z346) >= 3 && Zp1PEAFD_12(&Z346, 3) == '[') {
for (;;) {
if (ZfM_19(Z339)) {
ZblNKKO_44((STRING)"missing $] in skeleton?", 23L, (LONGCARD)ZblNKKO_14, ZmtLFGGBG_1);
goto EXIT_2;
}
Zp1PEAFD_20(Z339, &Z348);
if (Zp1PEAFD_7(&Z348) >= 2 && Zp1PEAFD_12(&Z348, 1) == '$') {
if (Zp1PEAFD_12(&Z348, 2) == ']') {
goto EXIT_2;
}
if (Zp1PEAFD_12(&Z348, 2) != '@') {
ZblNKKO_44((STRING)"missing $] in skeleton?", 23L, (LONGCARD)ZblNKKO_14, ZmtLFGGBG_1);
}
}
} EXIT_2:;
}
Z351(Z345, (LONGCARD)Z347.Y1, Z347.Y0);
ZdaDDADFC_11(Z345, Z317);
Z351(Z345, Z310 + 2, Z308);
}
}

static void Z352
# ifdef HAVE_ARGS
(ZfM_3 Z339, ZfM_3 Z335)
# else
(Z339, Z335)
ZfM_3 Z339, Z335;
# endif
{
Zp1PEAFD_2 Z348;
CHAR Z315;

while (!ZfM_19(Z339)) {
Zp1PEAFD_20(Z339, &Z348);
if (Zp1PEAFD_7(&Z348) >= 2 && Zp1PEAFD_12(&Z348, 1) == '$') {
Z315 = Zp1PEAFD_12(&Z348, 2);
switch (Z315) {
case '-':;
Z344(Z339, Z335, Z348, Zq0A4_80, Zq0A4_73);
break;
case 'E':;
Z344(Z339, Z335, Z348, Zq0A4_81, Zq0A4_74);
if (Zq0A4_62 == Zq0A4_199) {
if (ZpmCQ_25(ORD(','), &Zq0A4_61)) {
Z354(Z335, (STRING)"YYTrialParse", 12L, TRUE);
}
if (ZpmCQ_25(ORD(';'), &Zq0A4_61)) {
Z354(Z335, (STRING)"YYReParse", 9L, TRUE);
}
if (ZpmCQ_25(ORD('&'), &Zq0A4_61)) {
Z354(Z335, (STRING)"YYGetLook", 9L, TRUE);
}
if (ZpmCQ_25(ORD('b'), &Zq0A4_61)) {
Z354(Z335, (STRING)"YYMemoParse", 11L, TRUE);
}
}
break;
case 'I':;
Z355(Z335);
break;
case 'U':;
Z356(Z335);
break;
case '6':;
if (ZpmCQ_25(ORD('f'), &Zq0A4_61)) {
Z357(Z335);
}
break;
case '@':;
Z350(Z335, Z348);
break;
case '#':;
if (Zq0A4_62 == Zq0A4_203) {
if (Zq0A4_70 != Zfb3DLQ_1) {
ZdaDDADFC_4(Z335, (STRING)"package ", 8L);
ZdaDDADFC_9(Z335, Zq0A4_70);
ZdaDDADFC_4(Z335, (STRING)";", 1L);
ZdaDDADFC_7(Z335);
}
}
break;
case ']':;
ZblNKKO_44((STRING)"unpaired $] in skeleton", 23L, (LONGCARD)ZblNKKO_14, ZmtLFGGBG_1);
break;
default:
ZblNKKO_45((STRING)"unknown $ directive in skeleton", 31L, (LONGCARD)ZblNKKO_14, ZmtLFGGBG_1, (LONGCARD)ZblNKKO_28, ADR (Z315));
break;
}
} else {
ZdaDDADFC_10(Z335, Z348);
}
}
}

static void Z350
# ifdef HAVE_ARGS
(ZfM_3 Z335, Zp1PEAFD_2 Z348)
# else
(Z335, Z348)
ZfM_3 Z335;
Zp1PEAFD_2 Z348;
# endif
{
CHAR Z315;
CARDINAL Z359;

Z359 = 3;
for (;;) {
INC(Z359);
if (Z359 > Zp1PEAFD_7(&Z348)) {
ZdaDDADFC_7(Z335);
goto EXIT_3;
}
Z315 = Zp1PEAFD_12(&Z348, (Zp1PEAFD_1)Z359);
switch (Z315) {
case '@':;
if (Zq0A4_72 == Zfb3DLQ_1) {
if (Zp1PEAFD_12(&Z348, (Zp1PEAFD_1)(Z359 + 1)) == '_') {
INC(Z359);
} else {
ZdaDDADFC_4(Z335, Z304.A, 32L);
}
} else {
ZdaDDADFC_9(Z335, Zq0A4_72);
}
break;
case '$':;
if (Zq0A4_71 == Zfb3DLQ_1) {
if (Zp1PEAFD_12(&Z348, (Zp1PEAFD_1)(Z359 + 1)) == '_') {
INC(Z359);
} else {
ZdaDDADFC_4(Z335, Z303.A, 32L);
}
} else {
if (Zq0A4_69 != Zfb3DLQ_1) {
ZdaDDADFC_9(Z335, Zq0A4_69);
ZdaDDADFC_3(Z335, '.');
}
ZdaDDADFC_9(Z335, Zq0A4_71);
}
break;
case '#':;
if (Zq0A4_62 == Zq0A4_203) {
if (Zq0A4_70 == Zfb3DLQ_1) {
if (Zp1PEAFD_12(&Z348, (Zp1PEAFD_1)(Z359 + 1)) == '.') {
INC(Z359);
}
} else {
ZdaDDADFC_9(Z335, Zq0A4_70);
}
} else {
ZdaDDADFC_3(Z335, Z315);
}
break;
default:
ZdaDDADFC_3(Z335, Z315);
break;
}
} EXIT_3:;
}

static void Z360
# ifdef HAVE_ARGS
(ZfM_3 *Z345, Zfb3DLQ_0 Z183)
# else
(Z345, Z183)
ZfM_3 *Z345;
Zfb3DLQ_0 Z183;
# endif
{
CARDINAL Z359;
CHAR Z361;
Zp1PEAFD_2 Z362;

Zfb3DLQ_3(Z183, &Z362);
{
LONGCARD B_1 = 1, B_2 = Zp1PEAFD_7(&Z362);

if (B_1 <= B_2)
for (Z359 = B_1;; Z359 += 1) {
Z361 = Zp1PEAFD_12(&Z362, (Zp1PEAFD_1)Z359);
if (Z361 == '\\') {
ZdaDDADFC_3(*Z345, Z361);
}
ZdaDDADFC_3(*Z345, Z361);
if (Z359 >= B_2) break;
}
}
}

static void Z365
# ifdef HAVE_ARGS
(Zp1PEAFD_2 *Z364, CHAR Z339[], LONGCARD O_5)
# else
(Z364, Z339, O_5)
Zp1PEAFD_2 *Z364;
CHAR Z339[];
LONGCARD O_5;
# endif
{
Zp1PEAFD_2 Z362;

Zp1PEAFD_13(Z339, O_5, &Z362);
Zp1PEAFD_5(Z364, &Z362);
}

static void Z366
# ifdef HAVE_ARGS
(Zp1PEAFD_2 *Z364, INTEGER Z339)
# else
(Z364, Z339)
Zp1PEAFD_2 *Z364;
INTEGER Z339;
# endif
{
Zp1PEAFD_2 Z362;

Zp1PEAFD_18(Z339, &Z362);
Zp1PEAFD_5(Z364, &Z362);
}

static void Z367
# ifdef HAVE_ARGS
(Zp1PEAFD_2 *Z364, Zfb3DLQ_0 Z339)
# else
(Z364, Z339)
Zp1PEAFD_2 *Z364;
Zfb3DLQ_0 Z339;
# endif
{
Zp1PEAFD_2 Z362;

Zfb3DLQ_3(Z339, &Z362);
Zp1PEAFD_5(Z364, &Z362);
}

static void Z368
# ifdef HAVE_ARGS
(Zp1PEAFD_2 *Z364, Zfb3DLQ_0 Z183)
# else
(Z364, Z183)
Zp1PEAFD_2 *Z364;
Zfb3DLQ_0 Z183;
# endif
{
CARDINAL Z359;
CHAR Z361;
Zp1PEAFD_2 Z362;

Zfb3DLQ_3(Z183, &Z362);
{
LONGCARD B_3 = 1, B_4 = Zp1PEAFD_7(&Z362);

if (B_3 <= B_4)
for (Z359 = B_3;; Z359 += 1) {
Z361 = Zp1PEAFD_12(&Z362, (Zp1PEAFD_1)Z359);
if (Z361 == '\\') {
Zp1PEAFD_6(Z364, Z361);
}
Zp1PEAFD_6(Z364, Z361);
if (Z359 >= B_4) break;
}
}
}

void ZdaDDADFC_15
# ifdef HAVE_ARGS
(Zp1PEAFD_2 *Z364, CARDINAL Z348, Zfb3DLQ_0 Z314)
# else
(Z364, Z348, Z314)
Zp1PEAFD_2 *Z364;
CARDINAL Z348;
Zfb3DLQ_0 Z314;
# endif
{
Zp1PEAFD_4(Z364);
switch (Zq0A4_62) {
case Zq0A4_200:;
Z365(Z364, (STRING)"(* line ", 8L);
Z366(Z364, (LONGINT)Z348);
Z365(Z364, (STRING)" \"", 2L);
Z367(Z364, Z314);
Z365(Z364, (STRING)"\" *)", 4L);
break;
case Zq0A4_198:;
case Zq0A4_199:;
if (ZpmCQ_25(ORD('g'), &Zq0A4_61)) {
Z365(Z364, (STRING)"# line ", 7L);
Z366(Z364, (LONGINT)Z348);
Z365(Z364, (STRING)" \"", 2L);
Z368(Z364, Z314);
Zp1PEAFD_6(Z364, '"');
} else {
Z365(Z364, (STRING)"/* line ", 8L);
Z366(Z364, (LONGINT)Z348);
Z365(Z364, (STRING)" \"", 2L);
Z367(Z364, Z314);
Z365(Z364, (STRING)"\" */", 4L);
}
break;
case Zq0A4_203:;
Z365(Z364, (STRING)"/* line ", 8L);
Z366(Z364, (LONGINT)Z348);
Z365(Z364, (STRING)" \"", 2L);
Z367(Z364, Z314);
Z365(Z364, (STRING)"\" */", 4L);
break;
case Zq0A4_201:;
case Zq0A4_202:;
Z365(Z364, (STRING)"-- line ", 8L);
Z366(Z364, (LONGINT)Z348);
Z365(Z364, (STRING)" \"", 2L);
Z367(Z364, Z314);
Zp1PEAFD_6(Z364, '"');
break;
}
}

static void Z351
# ifdef HAVE_ARGS
(ZfM_3 Z345, CARDINAL Z348, Zfb3DLQ_0 Z314)
# else
(Z345, Z348, Z314)
ZfM_3 Z345;
CARDINAL Z348;
Zfb3DLQ_0 Z314;
# endif
{
Zp1PEAFD_2 Z362;

if (Z348 != 0) {
ZdaDDADFC_15(&Z362, Z348, Z314);
ZdaDDADFC_10(Z345, Z362);
}
}

static void Z354
# ifdef HAVE_ARGS
(ZfM_3 Z335, CHAR Z317[], LONGCARD O_6, BOOLEAN Z319)
# else
(Z335, Z317, O_6, Z319)
ZfM_3 Z335;
CHAR Z317[];
LONGCARD O_6;
BOOLEAN Z319;
# endif
{
OPEN_ARRAY_LOCALS

ALLOC_OPEN_ARRAYS (O_6 * sizeof (CHAR), 1)
COPY_OPEN_ARRAY (Z317, O_6, CHAR)
switch (Zq0A4_62) {
case Zq0A4_200:;
case Zq0A4_198:;
case Zq0A4_199:;
case Zq0A4_202:;
case Zq0A4_201:;
case Zq0A4_203:;
ZdaDDADFC_4(Z335, (STRING)"# define ", 9L);
ZdaDDADFC_4(Z335, Z317, O_6);
break;
}
ZdaDDADFC_7(Z335);
FREE_OPEN_ARRAYS
}

static void Z373
# ifdef HAVE_ARGS
(ZfM_3 Z335, CHAR Z317[], LONGCARD O_7, INTEGER Z319)
# else
(Z335, Z317, O_7, Z319)
ZfM_3 Z335;
CHAR Z317[];
LONGCARD O_7;
INTEGER Z319;
# endif
{
OPEN_ARRAY_LOCALS

ALLOC_OPEN_ARRAYS (O_7 * sizeof (CHAR), 1)
COPY_OPEN_ARRAY (Z317, O_7, CHAR)
switch (Zq0A4_62) {
case Zq0A4_200:;
ZdaDDADFC_4(Z335, Z317, O_7);
ZdaDDADFC_4(Z335, (STRING)"	= ", 3L);
ZdaDDADFC_5(Z335, Z319, 0L);
ZdaDDADFC_3(Z335, ';');
break;
case Zq0A4_198:;
ZdaDDADFC_4(Z335, (STRING)"# define ", 9L);
ZdaDDADFC_4(Z335, Z317, O_7);
ZdaDDADFC_4(Z335, (STRING)"	", 1L);
ZdaDDADFC_5(Z335, Z319, 0L);
break;
case Zq0A4_199:;
ZdaDDADFC_4(Z335, (STRING)"static const long ", 18L);
ZdaDDADFC_4(Z335, Z317, O_7);
ZdaDDADFC_4(Z335, (STRING)"	= ", 3L);
ZdaDDADFC_5(Z335, Z319, 0L);
ZdaDDADFC_3(Z335, ';');
break;
case Zq0A4_201:;
ZdaDDADFC_4(Z335, Z317, O_7);
ZdaDDADFC_4(Z335, (STRING)"	: INTEGER is ", 14L);
ZdaDDADFC_5(Z335, Z319, 0L);
ZdaDDADFC_3(Z335, ';');
break;
case Zq0A4_202:;
ZdaDDADFC_4(Z335, Z317, O_7);
ZdaDDADFC_4(Z335, (STRING)"	: constant Integer := ", 23L);
ZdaDDADFC_5(Z335, Z319, 0L);
ZdaDDADFC_3(Z335, ';');
break;
case Zq0A4_203:;
ZdaDDADFC_4(Z335, (STRING)"private static final int ", 25L);
ZdaDDADFC_4(Z335, Z317, O_7);
ZdaDDADFC_4(Z335, (STRING)"	= ", 3L);
ZdaDDADFC_5(Z335, Z319, 0L);
ZdaDDADFC_3(Z335, ';');
break;
}
ZdaDDADFC_7(Z335);
FREE_OPEN_ARRAYS
}

static void Z374
# ifdef HAVE_ARGS
(ZfM_3 Z335)
# else
(Z335)
ZfM_3 Z335;
# endif
{
Z373(Z335, (STRING)"yyFirstTerminal", 15L, 0L);
Z373(Z335, (STRING)"yyLastTerminal", 14L, (LONGINT)ZpmC89LG6_3);
Z373(Z335, (STRING)"yySetSize", 9L, (LONGINT)(ZpmC89LG6_3 + 1));
Z373(Z335, (STRING)"yyFirstSymbol", 13L, 0L);
Z373(Z335, (STRING)"yyLastSymbol", 12L, (LONGINT)(ZpmC89LG6_3 + ZpmC89LG6_1));
Z373(Z335, (STRING)"yyTTableMax", 11L, (LONGINT)ZggFGLABP_20);
Z373(Z335, (STRING)"yyNTableMax", 11L, (LONGINT)ZggFGLABP_28);
Z373(Z335, (STRING)"yyStartState", 12L, 1L);
Z373(Z335, (STRING)"yyFirstReadState", 16L, 1L);
Z373(Z335, (STRING)"yyLastReadState", 15L, (LONGINT)ZggFGLABP_11);
Z373(Z335, (STRING)"yyFirstReadReduceState", 22L, (LONGINT)(ZggFGLABP_11 + 1));
Z373(Z335, (STRING)"yyLastReadReduceState", 21L, (LONGINT)ZggFGLABP_12);
Z373(Z335, (STRING)"yyFirstReduceState", 18L, (LONGINT)(ZggFGLABP_12 + 1));
Z373(Z335, (STRING)"yyLastReduceState", 17L, (LONGINT)(ZggFGLABP_12 + ZpmC89LG6_2));
Z373(Z335, (STRING)"yyLastState", 11L, (LONGINT)(ZggFGLABP_12 + ZpmC89LG6_2 + (CARDINAL)ZggGECF6A_11));
Z373(Z335, (STRING)"yyLastStopState", 15L, (LONGINT)(ZggFGLABP_12 + ZpmC89LG6_5));
switch (Zq0A4_62) {
case Zq0A4_200:;
if (ZpmCQ_25(ORD('u'), &Zq0A4_61)) {
Z373(Z335, (STRING)"yyTDefaultSize", 14L, 0L);
} else {
Z373(Z335, (STRING)"yyTDefaultSize", 14L, (LONGINT)ZggFGLABP_11);
Z354(Z335, (STRING)"YYTDefault", 10L, TRUE);
}
if (ZpmCQ_25(ORD('o'), &Zq0A4_61)) {
Z373(Z335, (STRING)"yyNDefaultSize", 14L, 0L);
Z373(Z335, (STRING)"yyNTable1Max", 12L, (LONGINT)ZggFGLABP_28);
Z373(Z335, (STRING)"yyNTable2Max", 12L, (LONGINT)(ZpmC89LG6_3 + 1));
} else {
Z373(Z335, (STRING)"yyNDefaultSize", 14L, (LONGINT)ZggFGLABP_11);
Z373(Z335, (STRING)"yyNTable1Max", 12L, (LONGINT)(ZpmC89LG6_3 + 1));
Z373(Z335, (STRING)"yyNTable2Max", 12L, (LONGINT)ZggFGLABP_28);
Z354(Z335, (STRING)"YYNDefault", 10L, TRUE);
}
if (ZpmCQ_25(ORD(','), &Zq0A4_61)) {
Z354(Z335, (STRING)"YYTrialParse", 12L, TRUE);
}
if (ZpmCQ_25(ORD(';'), &Zq0A4_61)) {
Z354(Z335, (STRING)"YYReParse", 9L, TRUE);
}
if (ZpmCQ_25(ORD('&'), &Zq0A4_61)) {
Z354(Z335, (STRING)"YYGetLook", 9L, TRUE);
}
if (ZpmCQ_25(ORD('b'), &Zq0A4_61)) {
Z354(Z335, (STRING)"YYMemoParse", 11L, TRUE);
}
break;
case Zq0A4_198:;
case Zq0A4_199:;
if (!ZpmCQ_25(ORD('u'), &Zq0A4_61)) {
Z354(Z335, (STRING)"YYTDefault", 10L, TRUE);
}
if (!ZpmCQ_25(ORD('o'), &Zq0A4_61)) {
Z354(Z335, (STRING)"YYNDefault", 10L, TRUE);
}
if (ZpmCQ_25(ORD(','), &Zq0A4_61)) {
Z354(Z335, (STRING)"YYTrialParse", 12L, TRUE);
}
if (ZpmCQ_25(ORD(';'), &Zq0A4_61)) {
Z354(Z335, (STRING)"YYReParse", 9L, TRUE);
}
if (ZpmCQ_25(ORD('&'), &Zq0A4_61)) {
Z354(Z335, (STRING)"YYGetLook", 9L, TRUE);
}
if (ZpmCQ_25(ORD('b'), &Zq0A4_61)) {
Z354(Z335, (STRING)"YYMemoParse", 11L, TRUE);
}
if (ZpmCQ_25(ORD('4'), &Zq0A4_61)) {
Z354(Z335, (STRING)"YYDEC_TABLE", 11L, TRUE);
}
if (ZpmCQ_25(ORD('6'), &Zq0A4_61)) {
Z354(Z335, (STRING)"YYaccDefault", 12L, TRUE);
}
if (ZpmCQ_25(ORD('O'), &Zq0A4_61)) {
Z373(Z335, (STRING)"yyEpsilon", 9L, (LONGINT)Zq0A4_91);
Z354(Z335, (STRING)"YYCSTree", 8L, TRUE);
}
break;
case Zq0A4_201:;
if (!ZpmCQ_25(ORD('u'), &Zq0A4_61)) {
Z354(Z335, (STRING)"YYTDefault", 10L, TRUE);
}
if (ZpmCQ_25(ORD(','), &Zq0A4_61)) {
Z354(Z335, (STRING)"YYTrialParse", 12L, TRUE);
}
if (ZpmCQ_25(ORD(';'), &Zq0A4_61)) {
Z354(Z335, (STRING)"YYReParse", 9L, TRUE);
}
if (ZpmCQ_25(ORD('&'), &Zq0A4_61)) {
Z354(Z335, (STRING)"YYGetLook", 9L, TRUE);
}
if (ZpmCQ_25(ORD('b'), &Zq0A4_61)) {
Z354(Z335, (STRING)"YYMemoParse", 11L, TRUE);
}
break;
case Zq0A4_202:;
if (!ZpmCQ_25(ORD('u'), &Zq0A4_61)) {
Z354(Z335, (STRING)"YYTDefault", 10L, TRUE);
}
if (!ZpmCQ_25(ORD('o'), &Zq0A4_61)) {
Z354(Z335, (STRING)"YYNDefault", 10L, TRUE);
}
if (ZpmCQ_25(ORD(','), &Zq0A4_61)) {
Z354(Z335, (STRING)"YYTrialParse", 12L, TRUE);
}
if (ZpmCQ_25(ORD(';'), &Zq0A4_61)) {
Z354(Z335, (STRING)"YYReParse", 9L, TRUE);
}
if (ZpmCQ_25(ORD('&'), &Zq0A4_61)) {
Z354(Z335, (STRING)"YYGetLook", 9L, TRUE);
}
if (ZpmCQ_25(ORD('b'), &Zq0A4_61)) {
Z354(Z335, (STRING)"YYMemoParse", 11L, TRUE);
}
break;
case Zq0A4_203:;
if (ZpmCQ_25(ORD('u'), &Zq0A4_61)) {
Z373(Z335, (STRING)"yyTDefaultSize", 14L, 0L);
} else {
Z373(Z335, (STRING)"yyTDefaultSize", 14L, (LONGINT)ZggFGLABP_11);
Z354(Z335, (STRING)"YYTDefault", 10L, TRUE);
}
if (ZpmCQ_25(ORD('o'), &Zq0A4_61)) {
Z373(Z335, (STRING)"yyNDefaultSize", 14L, 0L);
Z373(Z335, (STRING)"yyNTable1Max", 12L, (LONGINT)ZggFGLABP_28);
Z373(Z335, (STRING)"yyNTable2Max", 12L, (LONGINT)(ZpmC89LG6_3 + 1));
} else {
Z373(Z335, (STRING)"yyNDefaultSize", 14L, (LONGINT)ZggFGLABP_11);
Z373(Z335, (STRING)"yyNTable1Max", 12L, (LONGINT)(ZpmC89LG6_3 + 1));
Z373(Z335, (STRING)"yyNTable2Max", 12L, (LONGINT)ZggFGLABP_28);
Z354(Z335, (STRING)"YYNDefault", 10L, TRUE);
}
if (ZpmCQ_25(ORD('4'), &Zq0A4_61)) {
Z354(Z335, (STRING)"YYDEC_TABLE", 11L, TRUE);
}
break;
}
}

static void Z375
# ifdef HAVE_ARGS
(ZfM_3 Z335)
# else
(Z335)
ZfM_3 Z335;
# endif
{
CARDINAL Z376;

{
LONGCARD B_5 = 1, B_6 = ZpmC89LG6_2;

if (B_5 <= B_6)
for (Z376 = B_5;; Z376 += 1) {
if (IN(Zq0A4_47, Zq0A4_95->A[Z376]->U_1.V_18.Y17.Y16->U_1.V_9.Y8.Y5)) {
switch (Zq0A4_62) {
case Zq0A4_200:;
ZdaDDADFC_4(Z335, (STRING)"      | ", 8L);
ZdaDDADFC_5(Z335, (LONGINT)Z376, 0L);
ZdaDDADFC_4(Z335, (STRING)": Copy (\"", 9L);
Z379(Z335, Z376);
ZdaDDADFC_4(Z335, (STRING)"\", Name);", 9L);
ZdaDDADFC_7(Z335);
break;
case Zq0A4_198:;
case Zq0A4_199:;
case Zq0A4_203:;
ZdaDDADFC_3(Z335, '"');
Z380(Z335, Z376);
ZdaDDADFC_4(Z335, (STRING)"\",", 2L);
ZdaDDADFC_7(Z335);
break;
case Zq0A4_201:;
ZdaDDADFC_4(Z335, (STRING)"      when ", 11L);
ZdaDDADFC_5(Z335, (LONGINT)Z376, 0L);
ZdaDDADFC_4(Z335, (STRING)" then Result := \"", 17L);
Z379(Z335, Z376);
ZdaDDADFC_4(Z335, (STRING)"\";", 2L);
ZdaDDADFC_7(Z335);
break;
case Zq0A4_202:;
ZdaDDADFC_4(Z335, (STRING)"      when ", 11L);
ZdaDDADFC_5(Z335, (LONGINT)Z376, 0L);
ZdaDDADFC_4(Z335, (STRING)" =>  return \"", 13L);
Z379(Z335, Z376);
ZdaDDADFC_4(Z335, (STRING)"\";", 2L);
ZdaDDADFC_7(Z335);
break;
}
}
if (Z376 >= B_6) break;
}
}
}

static void Z381
# ifdef HAVE_ARGS
(ZfM_3 Z335)
# else
(Z335)
ZfM_3 Z335;
# endif
{
Zq0A4_35 Z382;
Zp1PEAFD_2 Z225;
CARDINAL Z359, Z383;
CHAR Z384;
LONGINT Z385;
struct S_12 *Z386;

switch (Zq0A4_62) {
case Zq0A4_200:;
Z382 = Zq0A4_137->U_1.V_3.Y2.Y1;
while (Z382->U_1.V_1.Y0 == Zq0A4_6) {
{
register Zq0A4_108 *W_1 = &Z382->U_1.V_6.Y5;

if (IN(Zq0A4_47, W_1->Y7) && !IN(Zq0A4_52, W_1->Y7)) {
Zfb3DLQ_3(W_1->Y9, &Z225);
ZdaDDADFC_4(Z335, (STRING)"      | ", 8L);
ZdaDDADFC_5(Z335, (LONGINT)W_1->Y4, 0L);
ZdaDDADFC_4(Z335, (STRING)": Copy (", 8L);
Z384 = Zp1PEAFD_12(&Z225, 1);
if (Z384 == '"' || Z384 == '\'') {
ZdaDDADFC_9(Z335, W_1->Y9);
} else {
ZdaDDADFC_3(Z335, '"');
ZdaDDADFC_9(Z335, W_1->Y9);
ZdaDDADFC_3(Z335, '"');
}
ZdaDDADFC_4(Z335, (STRING)", Name);", 8L);
ZdaDDADFC_7(Z335);
}
Z382 = W_1->Y1;
}
}
break;
case Zq0A4_198:;
case Zq0A4_199:;
Z385 = ZpmC89LG6_3 + 1;
ZarQdhNDD_0((ADDRESS *)&Z386, &Z385, (LONGINT)sizeof (Zq0A4_35));
{
LONGCARD B_7 = 0, B_8 = ZpmC89LG6_3;

if (B_7 <= B_8)
for (Z383 = B_7;; Z383 += 1) {
Z386->A[Z383] = Zq0A4_2;
if (Z383 >= B_8) break;
}
}
Z382 = Zq0A4_137->U_1.V_3.Y2.Y1;
while (Z382->U_1.V_1.Y0 == Zq0A4_6) {
{
register Zq0A4_108 *W_2 = &Z382->U_1.V_6.Y5;

if (IN(Zq0A4_47, W_2->Y7) && !IN(Zq0A4_52, W_2->Y7)) {
Z386->A[W_2->Y4] = Z382;
}
Z382 = W_2->Y1;
}
}
{
LONGCARD B_9 = 0, B_10 = ZpmC89LG6_3;

if (B_9 <= B_10)
for (Z383 = B_9;; Z383 += 1) {
if (Z386->A[Z383] == Zq0A4_2) {
ZdaDDADFC_4(Z335, (STRING)"0,", 2L);
ZdaDDADFC_7(Z335);
} else {
Zfb3DLQ_3(Z386->A[Z383]->U_1.V_6.Y5.Y9, &Z225);
ZdaDDADFC_4(Z335, (STRING)"\"", 1L);
if (Zp1PEAFD_12(&Z225, 1) == '"' || Zp1PEAFD_12(&Z225, 1) == '\'') {
{
LONGCARD B_11 = 2, B_12 = Zp1PEAFD_7(&Z225) - 1;

if (B_11 <= B_12)
for (Z359 = B_11;; Z359 += 1) {
if (Zp1PEAFD_12(&Z225, (Zp1PEAFD_1)Z359) == '\\' || Zp1PEAFD_12(&Z225, (Zp1PEAFD_1)Z359) == '"') {
ZdaDDADFC_3(Z335, '\\');
}
ZdaDDADFC_3(Z335, Zp1PEAFD_12(&Z225, (Zp1PEAFD_1)Z359));
if (Z359 >= B_12) break;
}
}
} else {
{
LONGCARD B_13 = 1, B_14 = Zp1PEAFD_7(&Z225);

if (B_13 <= B_14)
for (Z359 = B_13;; Z359 += 1) {
if (Zp1PEAFD_12(&Z225, (Zp1PEAFD_1)Z359) == '\\' || Zp1PEAFD_12(&Z225, (Zp1PEAFD_1)Z359) == '"') {
ZdaDDADFC_3(Z335, '\\');
}
ZdaDDADFC_3(Z335, Zp1PEAFD_12(&Z225, (Zp1PEAFD_1)Z359));
if (Z359 >= B_14) break;
}
}
}
ZdaDDADFC_4(Z335, (STRING)"\",", 2L);
ZdaDDADFC_7(Z335);
}
if (Z383 >= B_10) break;
}
}
ZarQdhNDD_3((ADDRESS *)&Z386, &Z385, (LONGINT)sizeof (Zq0A4_35));
break;
case Zq0A4_201:;
Z382 = Zq0A4_137->U_1.V_3.Y2.Y1;
while (Z382->U_1.V_1.Y0 == Zq0A4_6) {
{
register Zq0A4_108 *W_3 = &Z382->U_1.V_6.Y5;

if (IN(Zq0A4_47, W_3->Y7) && !IN(Zq0A4_52, W_3->Y7)) {
Zfb3DLQ_3(W_3->Y9, &Z225);
ZdaDDADFC_4(Z335, (STRING)"      when ", 11L);
ZdaDDADFC_5(Z335, (LONGINT)W_3->Y4, 0L);
ZdaDDADFC_4(Z335, (STRING)" then Result := \"", 17L);
Z384 = Zp1PEAFD_12(&Z225, 1);
if (Z384 == '"' || Z384 == '\'') {
{
LONGCARD B_15 = 2, B_16 = Zp1PEAFD_7(&Z225) - 1;

if (B_15 <= B_16)
for (Z359 = B_15;; Z359 += 1) {
if (Zp1PEAFD_12(&Z225, (Zp1PEAFD_1)Z359) == '%' || Zp1PEAFD_12(&Z225, (Zp1PEAFD_1)Z359) == '"') {
ZdaDDADFC_3(Z335, '%');
}
ZdaDDADFC_3(Z335, Zp1PEAFD_12(&Z225, (Zp1PEAFD_1)Z359));
if (Z359 >= B_16) break;
}
}
} else {
{
LONGCARD B_17 = 1, B_18 = Zp1PEAFD_7(&Z225);

if (B_17 <= B_18)
for (Z359 = B_17;; Z359 += 1) {
if (Zp1PEAFD_12(&Z225, (Zp1PEAFD_1)Z359) == '%' || Zp1PEAFD_12(&Z225, (Zp1PEAFD_1)Z359) == '"') {
ZdaDDADFC_3(Z335, '%');
}
ZdaDDADFC_3(Z335, Zp1PEAFD_12(&Z225, (Zp1PEAFD_1)Z359));
if (Z359 >= B_18) break;
}
}
}
ZdaDDADFC_4(Z335, (STRING)"\";", 2L);
ZdaDDADFC_7(Z335);
}
Z382 = W_3->Y1;
}
}
break;
case Zq0A4_202:;
Z382 = Zq0A4_137->U_1.V_3.Y2.Y1;
while (Z382->U_1.V_1.Y0 == Zq0A4_6) {
{
register Zq0A4_108 *W_4 = &Z382->U_1.V_6.Y5;

if (IN(Zq0A4_47, W_4->Y7) && !IN(Zq0A4_52, W_4->Y7)) {
Zfb3DLQ_3(W_4->Y9, &Z225);
ZdaDDADFC_4(Z335, (STRING)"      when ", 11L);
ZdaDDADFC_5(Z335, (LONGINT)W_4->Y4, 0L);
ZdaDDADFC_4(Z335, (STRING)" => return \"", 12L);
Z384 = Zp1PEAFD_12(&Z225, 1);
if (Z384 == '"' || Z384 == '\'') {
{
LONGCARD B_19 = 2, B_20 = Zp1PEAFD_7(&Z225) - 1;

if (B_19 <= B_20)
for (Z359 = B_19;; Z359 += 1) {
ZdaDDADFC_3(Z335, Zp1PEAFD_12(&Z225, (Zp1PEAFD_1)Z359));
if (Zp1PEAFD_12(&Z225, (Zp1PEAFD_1)Z359) == '"') {
ZdaDDADFC_3(Z335, '"');
}
if (Z359 >= B_20) break;
}
}
} else {
ZdaDDADFC_9(Z335, W_4->Y9);
}
ZdaDDADFC_4(Z335, (STRING)"\";", 2L);
ZdaDDADFC_7(Z335);
}
Z382 = W_4->Y1;
}
}
break;
case Zq0A4_203:;
Z385 = ZpmC89LG6_3 + 1;
ZarQdhNDD_0((ADDRESS *)&Z386, &Z385, (LONGINT)sizeof (Zq0A4_35));
{
LONGCARD B_21 = 0, B_22 = ZpmC89LG6_3;

if (B_21 <= B_22)
for (Z383 = B_21;; Z383 += 1) {
Z386->A[Z383] = Zq0A4_2;
if (Z383 >= B_22) break;
}
}
Z382 = Zq0A4_137->U_1.V_3.Y2.Y1;
while (Z382->U_1.V_1.Y0 == Zq0A4_6) {
{
register Zq0A4_108 *W_5 = &Z382->U_1.V_6.Y5;

if (IN(Zq0A4_47, W_5->Y7) && !IN(Zq0A4_52, W_5->Y7)) {
Z386->A[W_5->Y4] = Z382;
}
Z382 = W_5->Y1;
}
}
{
LONGCARD B_23 = 0, B_24 = ZpmC89LG6_3;

if (B_23 <= B_24)
for (Z383 = B_23;; Z383 += 1) {
if (Z386->A[Z383] == Zq0A4_2) {
ZdaDDADFC_4(Z335, (STRING)"\"\",", 3L);
ZdaDDADFC_7(Z335);
} else {
Zfb3DLQ_3(Z386->A[Z383]->U_1.V_6.Y5.Y9, &Z225);
ZdaDDADFC_4(Z335, (STRING)"\"", 1L);
if (Zp1PEAFD_12(&Z225, 1) == '"' || Zp1PEAFD_12(&Z225, 1) == '\'') {
{
LONGCARD B_25 = 2, B_26 = Zp1PEAFD_7(&Z225) - 1;

if (B_25 <= B_26)
for (Z359 = B_25;; Z359 += 1) {
if (Zp1PEAFD_12(&Z225, (Zp1PEAFD_1)Z359) == '\\' || Zp1PEAFD_12(&Z225, (Zp1PEAFD_1)Z359) == '"') {
ZdaDDADFC_3(Z335, '\\');
}
ZdaDDADFC_3(Z335, Zp1PEAFD_12(&Z225, (Zp1PEAFD_1)Z359));
if (Z359 >= B_26) break;
}
}
} else {
{
LONGCARD B_27 = 1, B_28 = Zp1PEAFD_7(&Z225);

if (B_27 <= B_28)
for (Z359 = B_27;; Z359 += 1) {
if (Zp1PEAFD_12(&Z225, (Zp1PEAFD_1)Z359) == '\\' || Zp1PEAFD_12(&Z225, (Zp1PEAFD_1)Z359) == '"') {
ZdaDDADFC_3(Z335, '\\');
}
ZdaDDADFC_3(Z335, Zp1PEAFD_12(&Z225, (Zp1PEAFD_1)Z359));
if (Z359 >= B_28) break;
}
}
}
ZdaDDADFC_4(Z335, (STRING)"\",", 2L);
ZdaDDADFC_7(Z335);
}
if (Z383 >= B_24) break;
}
}
ZarQdhNDD_3((ADDRESS *)&Z386, &Z385, (LONGINT)sizeof (Zq0A4_35));
break;
}
}

static void Z392
# ifdef HAVE_ARGS
(ZfM_3 Z335)
# else
(Z335)
ZfM_3 Z335;
# endif
{
Zq0A4_35 Z393;

switch (Zq0A4_62) {
case Zq0A4_200:;
break;
case Zq0A4_198:;
case Zq0A4_199:;
case Zq0A4_203:;
Z393 = Zq0A4_137->U_1.V_3.Y2.Y5;
while (Z393->U_1.V_1.Y0 == Zq0A4_9) {
{
register Zq0A4_111 *W_6 = &Z393->U_1.V_9.Y8;

if (IN(Zq0A4_47, W_6->Y5)) {
ZdaDDADFC_3(Z335, '"');
ZdaDDADFC_9(Z335, W_6->Y2);
ZdaDDADFC_4(Z335, (STRING)"\",", 2L);
ZdaDDADFC_7(Z335);
}
Z393 = W_6->Y1;
}
}
break;
case Zq0A4_201:;
break;
case Zq0A4_202:;
break;
}
}

static void Z356
# ifdef HAVE_ARGS
(ZfM_3 Z335)
# else
(Z335)
ZfM_3 Z335;
# endif
{
BOOLEAN Z394;
Zq0A4_35 Z393;

Z394 = TRUE;
Z393 = Zq0A4_137->U_1.V_3.Y2.Y5;
while (Z393->U_1.V_1.Y0 == Zq0A4_9) {
{
register Zq0A4_111 *W_7 = &Z393->U_1.V_9.Y8;

if (IN(Zq0A4_47, W_7->Y5)) {
switch (Zq0A4_62) {
case Zq0A4_200:;
ZdaDDADFC_4(Z335, (STRING)"yyNT", 4L);
ZdaDDADFC_9(Z335, W_7->Y2);
ZdaDDADFC_4(Z335, (STRING)"	= ", 3L);
ZdaDDADFC_5(Z335, (LONGINT)ZggFGLABP_37((LONGCARD)W_7->Y8), 0L);
ZdaDDADFC_4(Z335, (STRING)";", 1L);
ZdaDDADFC_7(Z335);
break;
case Zq0A4_198:;
case Zq0A4_199:;
if (Z394) {
Z394 = FALSE;
} else {
ZdaDDADFC_4(Z335, (STRING)",", 1L);
ZdaDDADFC_7(Z335);
}
ZdaDDADFC_4(Z335, (STRING)"yyNT", 4L);
ZdaDDADFC_9(Z335, W_7->Y2);
ZdaDDADFC_4(Z335, (STRING)"	= ", 3L);
ZdaDDADFC_5(Z335, (LONGINT)ZggFGLABP_37((LONGCARD)W_7->Y8), 0L);
break;
case Zq0A4_201:;
ZdaDDADFC_4(Z335, (STRING)"yyNT", 4L);
ZdaDDADFC_9(Z335, W_7->Y2);
ZdaDDADFC_4(Z335, (STRING)"	: INTEGER is ", 14L);
ZdaDDADFC_5(Z335, (LONGINT)ZggFGLABP_37((LONGCARD)W_7->Y8), 0L);
ZdaDDADFC_4(Z335, (STRING)";", 1L);
ZdaDDADFC_7(Z335);
break;
case Zq0A4_202:;
ZdaDDADFC_4(Z335, (STRING)"yyNT", 4L);
ZdaDDADFC_9(Z335, W_7->Y2);
ZdaDDADFC_4(Z335, (STRING)"	: constant Integer := ", 23L);
ZdaDDADFC_5(Z335, (LONGINT)ZggFGLABP_37((LONGCARD)W_7->Y8), 0L);
ZdaDDADFC_4(Z335, (STRING)";", 1L);
ZdaDDADFC_7(Z335);
break;
case Zq0A4_203:;
ZdaDDADFC_4(Z335, (STRING)"static final int yyNT", 21L);
ZdaDDADFC_9(Z335, W_7->Y2);
ZdaDDADFC_4(Z335, (STRING)"	= ", 3L);
ZdaDDADFC_5(Z335, (LONGINT)ZggFGLABP_37((LONGCARD)W_7->Y8), 0L);
ZdaDDADFC_4(Z335, (STRING)";", 1L);
ZdaDDADFC_7(Z335);
break;
}
}
Z393 = W_7->Y1;
}
}
if (Zq0A4_62 == Zq0A4_198 || Zq0A4_62 == Zq0A4_199) {
ZdaDDADFC_7(Z335);
}
}

static void Z355
# ifdef HAVE_ARGS
(ZfM_3 Z335)
# else
(Z335)
ZfM_3 Z335;
# endif
{
CARDINAL Z237;
Zq0A4_35 Z396;

Z237 = 0;
Z396 = Zq0A4_137->U_1.V_3.Y2.Y3;
while (Z396->U_1.V_1.Y0 == Zq0A4_26) {
{
register Zq0A4_128 *W_8 = &Z396->U_1.V_26.Y25;

if (W_8->Y6 != Zq0A4_2) {
INC(Z237);
switch (Zq0A4_62) {
case Zq0A4_200:;
ZdaDDADFC_4(Z335, (STRING)"yy", 2L);
ZdaDDADFC_9(Z335, W_8->Y2);
ZdaDDADFC_4(Z335, (STRING)"	= ", 3L);
ZdaDDADFC_5(Z335, (LONGINT)Z237, 0L);
ZdaDDADFC_3(Z335, ';');
break;
case Zq0A4_198:;
case Zq0A4_199:;
case Zq0A4_203:;
ZdaDDADFC_4(Z335, (STRING)"# define yy", 11L);
ZdaDDADFC_9(Z335, W_8->Y2);
ZdaDDADFC_4(Z335, (STRING)"	", 1L);
ZdaDDADFC_5(Z335, (LONGINT)Z237, 0L);
break;
case Zq0A4_201:;
ZdaDDADFC_4(Z335, (STRING)"yy", 2L);
ZdaDDADFC_9(Z335, W_8->Y2);
ZdaDDADFC_4(Z335, (STRING)"	: INTEGER is ", 14L);
ZdaDDADFC_5(Z335, (LONGINT)Z237, 0L);
ZdaDDADFC_3(Z335, ';');
break;
case Zq0A4_202:;
ZdaDDADFC_4(Z335, (STRING)"yy", 2L);
ZdaDDADFC_9(Z335, W_8->Y2);
ZdaDDADFC_4(Z335, (STRING)"	: constant Integer := ", 23L);
ZdaDDADFC_5(Z335, (LONGINT)Z237, 0L);
ZdaDDADFC_3(Z335, ';');
break;
}
ZdaDDADFC_7(Z335);
}
Z396 = W_8->Y1;
}
}
}

static void Z399
# ifdef HAVE_ARGS
(ZfM_3 Z335)
# else
(Z335)
ZfM_3 Z335;
# endif
{
CARDINAL Z237;
Zq0A4_35 Z396;

Z237 = 0;
Z396 = Zq0A4_137->U_1.V_3.Y2.Y3;
while (Z396->U_1.V_1.Y0 == Zq0A4_26) {
{
register Zq0A4_128 *W_9 = &Z396->U_1.V_26.Y25;

if (W_9->Y6 != Zq0A4_2) {
INC(Z237);
switch (Zq0A4_62) {
case Zq0A4_200:;
ZdaDDADFC_4(Z335, (STRING)"yyStartLine [", 13L);
ZdaDDADFC_5(Z335, (LONGINT)Z237, 0L);
ZdaDDADFC_4(Z335, (STRING)"] := ", 5L);
ZdaDDADFC_5(Z335, (LONGINT)W_9->Y6->U_1.V_9.Y8.Y3.Y1, 0L);
ZdaDDADFC_3(Z335, ';');
break;
case Zq0A4_198:;
case Zq0A4_199:;
case Zq0A4_202:;
ZdaDDADFC_5(Z335, (LONGINT)W_9->Y6->U_1.V_9.Y8.Y3.Y1, 0L);
ZdaDDADFC_3(Z335, ',');
break;
case Zq0A4_201:;
ZdaDDADFC_4(Z335, (STRING)"yyStartLine.put (", 17L);
ZdaDDADFC_5(Z335, (LONGINT)W_9->Y6->U_1.V_9.Y8.Y3.Y1, 0L);
ZdaDDADFC_4(Z335, (STRING)", ", 2L);
ZdaDDADFC_5(Z335, (LONGINT)Z237, 0L);
ZdaDDADFC_4(Z335, (STRING)");", 2L);
break;
case Zq0A4_203:;
ZdaDDADFC_5(Z335, (LONGINT)W_9->Y6->U_1.V_9.Y8.Y3.Y1, 0L);
ZdaDDADFC_3(Z335, ',');
break;
}
ZdaDDADFC_7(Z335);
}
Z396 = W_9->Y1;
}
}
if (Z237 == 0) {
switch (Zq0A4_62) {
case Zq0A4_200:;
ZdaDDADFC_4(Z335, (STRING)"yyStartLine [1] := ", 19L);
ZdaDDADFC_5(Z335, (LONGINT)Zq0A4_137->U_1.V_3.Y2.Y4->U_1.V_9.Y8.Y3.Y1, 0L);
ZdaDDADFC_3(Z335, ';');
break;
case Zq0A4_198:;
case Zq0A4_199:;
case Zq0A4_202:;
ZdaDDADFC_5(Z335, (LONGINT)Zq0A4_137->U_1.V_3.Y2.Y4->U_1.V_9.Y8.Y3.Y1, 0L);
ZdaDDADFC_3(Z335, ',');
break;
case Zq0A4_201:;
ZdaDDADFC_4(Z335, (STRING)"yyStartLine.put (", 17L);
ZdaDDADFC_5(Z335, (LONGINT)Zq0A4_137->U_1.V_3.Y2.Y4->U_1.V_9.Y8.Y3.Y1, 0L);
ZdaDDADFC_4(Z335, (STRING)", 1);", 5L);
break;
case Zq0A4_203:;
ZdaDDADFC_5(Z335, (LONGINT)Zq0A4_137->U_1.V_3.Y2.Y4->U_1.V_9.Y8.Y3.Y1, 0L);
ZdaDDADFC_3(Z335, ',');
break;
}
ZdaDDADFC_7(Z335);
}
}

static void Z357
# ifdef HAVE_ARGS
(ZfM_3 Z335)
# else
(Z335)
ZfM_3 Z335;
# endif
{
Zq0A4_35 Z203;
ZpmCQ_4 Z404, Z405;
CARDINAL Z406, Z407, Z408, Z359;
Zp1PEAFD_2 Z409, Z410, Z411;
Zfb3DLQ_0 Z183;
struct S_9 Z188;
CHAR Z361;
struct S_10 Z412;
struct S_11 Z317;
SHORTCARD Z413;

Z406 = Zfb3DLQ_6() + ZpmC89LG6_0;
ZpmCQ_5(&Z404, Z406);
ZpmCQ_5(&Z405, 127L);
for (Z361 = 'A'; Z361 <= 'Z'; Z361 += 1) {
ZpmCQ_13(&Z405, ORD(Z361));
}
for (Z361 = 'a'; Z361 <= 'z'; Z361 += 1) {
ZpmCQ_13(&Z405, ORD(Z361));
}
for (Z361 = '0'; Z361 <= '9'; Z361 += 1) {
ZpmCQ_13(&Z405, ORD(Z361));
}
ZpmCQ_13(&Z405, ORD('_'));
Z412.A[0] = '0';
Z412.A[1] = '1';
Z412.A[2] = '2';
Z412.A[3] = '3';
Z412.A[4] = '4';
Z412.A[5] = '5';
Z412.A[6] = '6';
Z412.A[7] = '7';
Z412.A[8] = '8';
Z412.A[9] = '9';
Z412.A[10] = 'A';
Z412.A[11] = 'B';
Z412.A[12] = 'C';
Z412.A[13] = 'D';
Z412.A[14] = 'E';
Z412.A[15] = 'F';
Z203 = Zq0A4_137->U_1.V_3.Y2.Y1;
while (Z203->U_1.V_1.Y0 == Zq0A4_6) {
{
register Zq0A4_108 *W_10 = &Z203->U_1.V_6.Y5;

if (IN(Zq0A4_47, W_10->Y7) && !IN(Zq0A4_52, W_10->Y7)) {
Zfb3DLQ_3(W_10->Y2, &Z409);
Z407 = 1;
Z408 = Zp1PEAFD_7(&Z409);
if (IN(Zq0A4_46, W_10->Y7)) {
Z407 = 2;
DEC(Z408);
}
Z413 = Z402;
Zp1PEAFD_3(&Z410, &Zq0A4_64);
{
LONGCARD B_29 = Z407, B_30 = Z408;

if (B_29 <= B_30)
for (Z359 = B_29;; Z359 += 1) {
Z361 = Zp1PEAFD_12(&Z409, (Zp1PEAFD_1)Z359);
if (ORD(Z361) >= 128) {
if (Z413 != Z402) {
Zp1PEAFD_6(&Z410, '_');
}
Zp1PEAFD_6(&Z410, Z412.A[ORD(Z361) / 16]);
Zp1PEAFD_6(&Z410, Z412.A[ORD(Z361) % 16]);
Z413 = Z403;
} else if (ZpmCQ_25(ORD(Z361), &Z405)) {
if (Z413 == Z403) {
Zp1PEAFD_6(&Z410, '_');
}
Zp1PEAFD_6(&Z410, Z361);
Z413 = Z184;
} else if (Z361 == '-') {
if (Z413 == Z184) {
Zp1PEAFD_6(&Z410, '_');
} else {
if (Z413 != Z402) {
Zp1PEAFD_6(&Z410, '_');
}
Zp1PEAFD_13((STRING)"minus", 5L, &Z411);
Zp1PEAFD_5(&Z410, &Z411);
Z413 = Z403;
}
} else {
switch (Z361) {
case CHR(0):;
(void) strncpy ((char *)Z317.A, "NUL", sizeof (Z317.A));
break;
case CHR(1):;
(void) strncpy ((char *)Z317.A, "SOH", sizeof (Z317.A));
break;
case CHR(2):;
(void) strncpy ((char *)Z317.A, "STX", sizeof (Z317.A));
break;
case CHR(3):;
(void) strncpy ((char *)Z317.A, "ETX", sizeof (Z317.A));
break;
case CHR(4):;
(void) strncpy ((char *)Z317.A, "EOT", sizeof (Z317.A));
break;
case CHR(5):;
(void) strncpy ((char *)Z317.A, "ENQ", sizeof (Z317.A));
break;
case CHR(6):;
(void) strncpy ((char *)Z317.A, "ACK", sizeof (Z317.A));
break;
case CHR(7):;
(void) strncpy ((char *)Z317.A, "BEL", sizeof (Z317.A));
break;
case CHR(8):;
(void) strncpy ((char *)Z317.A, "BS", sizeof (Z317.A));
break;
case CHR(9):;
(void) strncpy ((char *)Z317.A, "HT", sizeof (Z317.A));
break;
case CHR(10):;
(void) strncpy ((char *)Z317.A, "LF", sizeof (Z317.A));
break;
case CHR(11):;
(void) strncpy ((char *)Z317.A, "VT", sizeof (Z317.A));
break;
case CHR(12):;
(void) strncpy ((char *)Z317.A, "FF", sizeof (Z317.A));
break;
case CHR(13):;
(void) strncpy ((char *)Z317.A, "CR", sizeof (Z317.A));
break;
case CHR(14):;
(void) strncpy ((char *)Z317.A, "SO", sizeof (Z317.A));
break;
case CHR(15):;
(void) strncpy ((char *)Z317.A, "SI", sizeof (Z317.A));
break;
case CHR(16):;
(void) strncpy ((char *)Z317.A, "DLE", sizeof (Z317.A));
break;
case CHR(17):;
(void) strncpy ((char *)Z317.A, "DC1", sizeof (Z317.A));
break;
case CHR(18):;
(void) strncpy ((char *)Z317.A, "DC2", sizeof (Z317.A));
break;
case CHR(19):;
(void) strncpy ((char *)Z317.A, "DC3", sizeof (Z317.A));
break;
case CHR(20):;
(void) strncpy ((char *)Z317.A, "DC4", sizeof (Z317.A));
break;
case CHR(21):;
(void) strncpy ((char *)Z317.A, "NAK", sizeof (Z317.A));
break;
case CHR(22):;
(void) strncpy ((char *)Z317.A, "SYN", sizeof (Z317.A));
break;
case CHR(23):;
(void) strncpy ((char *)Z317.A, "ETB", sizeof (Z317.A));
break;
case CHR(24):;
(void) strncpy ((char *)Z317.A, "CAN", sizeof (Z317.A));
break;
case CHR(25):;
(void) strncpy ((char *)Z317.A, "EM", sizeof (Z317.A));
break;
case CHR(26):;
(void) strncpy ((char *)Z317.A, "SUB", sizeof (Z317.A));
break;
case CHR(27):;
(void) strncpy ((char *)Z317.A, "ESC", sizeof (Z317.A));
break;
case CHR(28):;
(void) strncpy ((char *)Z317.A, "FS", sizeof (Z317.A));
break;
case CHR(29):;
(void) strncpy ((char *)Z317.A, "GS", sizeof (Z317.A));
break;
case CHR(30):;
(void) strncpy ((char *)Z317.A, "RS", sizeof (Z317.A));
break;
case CHR(31):;
(void) strncpy ((char *)Z317.A, "US", sizeof (Z317.A));
break;
case ' ':;
(void) strncpy ((char *)Z317.A, "space", sizeof (Z317.A));
break;
case '!':;
(void) strncpy ((char *)Z317.A, "exclamation_mark", sizeof (Z317.A));
break;
case '"':;
(void) strncpy ((char *)Z317.A, "double_quote", sizeof (Z317.A));
break;
case '#':;
(void) strncpy ((char *)Z317.A, "hash_sign", sizeof (Z317.A));
break;
case '$':;
(void) strncpy ((char *)Z317.A, "dollar", sizeof (Z317.A));
break;
case '%':;
(void) strncpy ((char *)Z317.A, "percent", sizeof (Z317.A));
break;
case '&':;
(void) strncpy ((char *)Z317.A, "ampersand", sizeof (Z317.A));
break;
case '\'':;
(void) strncpy ((char *)Z317.A, "quote", sizeof (Z317.A));
break;
case '(':;
(void) strncpy ((char *)Z317.A, "left_parentheses", sizeof (Z317.A));
break;
case ')':;
(void) strncpy ((char *)Z317.A, "right_parentheses", sizeof (Z317.A));
break;
case '*':;
(void) strncpy ((char *)Z317.A, "asterisk", sizeof (Z317.A));
break;
case '+':;
(void) strncpy ((char *)Z317.A, "plus", sizeof (Z317.A));
break;
case ',':;
(void) strncpy ((char *)Z317.A, "comma", sizeof (Z317.A));
break;
case '.':;
(void) strncpy ((char *)Z317.A, "dot", sizeof (Z317.A));
break;
case '/':;
(void) strncpy ((char *)Z317.A, "slash", sizeof (Z317.A));
break;
case ':':;
(void) strncpy ((char *)Z317.A, "colon", sizeof (Z317.A));
break;
case ';':;
(void) strncpy ((char *)Z317.A, "semicolon", sizeof (Z317.A));
break;
case '<':;
(void) strncpy ((char *)Z317.A, "less", sizeof (Z317.A));
break;
case '=':;
(void) strncpy ((char *)Z317.A, "equal", sizeof (Z317.A));
break;
case '>':;
(void) strncpy ((char *)Z317.A, "greater", sizeof (Z317.A));
break;
case '?':;
(void) strncpy ((char *)Z317.A, "question_mark", sizeof (Z317.A));
break;
case '@':;
(void) strncpy ((char *)Z317.A, "at_sign", sizeof (Z317.A));
break;
case '[':;
(void) strncpy ((char *)Z317.A, "left_bracket", sizeof (Z317.A));
break;
case '\\':;
(void) strncpy ((char *)Z317.A, "backslash", sizeof (Z317.A));
break;
case ']':;
(void) strncpy ((char *)Z317.A, "right_bracket", sizeof (Z317.A));
break;
case '^':;
(void) strncpy ((char *)Z317.A, "uparrow", sizeof (Z317.A));
break;
case '`':;
(void) strncpy ((char *)Z317.A, "backquote", sizeof (Z317.A));
break;
case '{':;
(void) strncpy ((char *)Z317.A, "left_curly", sizeof (Z317.A));
break;
case '|':;
(void) strncpy ((char *)Z317.A, "bar", sizeof (Z317.A));
break;
case '}':;
(void) strncpy ((char *)Z317.A, "right_curly", sizeof (Z317.A));
break;
case '~':;
(void) strncpy ((char *)Z317.A, "tilde", sizeof (Z317.A));
break;
case CHR(127):;
(void) strncpy ((char *)Z317.A, "DEL", sizeof (Z317.A));
break;
}
if (Z413 != Z402) {
Zp1PEAFD_6(&Z410, '_');
}
Zp1PEAFD_13(Z317.A, 32L, &Z411);
Zp1PEAFD_5(&Z410, &Z411);
Z413 = Z403;
}
if (Z359 >= B_30) break;
}
}
for (;;) {
Z183 = Zfb3DLQ_2(&Z410);
if (Z183 > Z406) {
INC1(Z406, ZpmC89LG6_0);
ZpmCQ_6(&Z404, Z406);
}
if (!ZpmCQ_25((LONGCARD)Z183, &Z404)) {
goto EXIT_4;
}
Zp1PEAFD_6(&Z410, '_');
} EXIT_4:;
ZpmCQ_13(&Z404, (LONGCARD)Z183);
Zp1PEAFD_14(&Z410, Z188.A, 256L);
Z373(Z335, Z188.A, 256L, (LONGINT)W_10->Y4);
}
Z203 = W_10->Y1;
}
}
ZpmCQ_7(&Z404);
ZpmCQ_7(&Z405);
}

void ZdaDDADFC_16
 ARGS ((void))
{
ZfM_3 Z339, Z345;
Zp1PEAFD_2 Z348;
struct S_8 Z330;
INTEGER Z383;
CHAR Z315;
Zp1PEAFD_2 Z362;

switch (Zq0A4_62) {
case Zq0A4_200:;
(void) strncpy ((char *)Z330.A, (char *)Z281, sizeof (Z330.A));
(void) strncpy ((char *)Z306.A, (char *)Z272, sizeof (Z306.A));
break;
case Zq0A4_198:;
(void) strncpy ((char *)Z330.A, (char *)Z284, sizeof (Z330.A));
(void) strncpy ((char *)Z306.A, (char *)Z274, sizeof (Z306.A));
break;
case Zq0A4_199:;
(void) strncpy ((char *)Z330.A, (char *)Z287, sizeof (Z330.A));
(void) strncpy ((char *)Z306.A, (char *)Z275, sizeof (Z306.A));
break;
case Zq0A4_202:;
(void) strncpy ((char *)Z330.A, (char *)Z290, sizeof (Z330.A));
(void) strncpy ((char *)Z306.A, (char *)Z277, sizeof (Z306.A));
(void) strncpy ((char *)Z304.A, "parser", sizeof (Z304.A));
break;
case Zq0A4_201:;
(void) strncpy ((char *)Z304.A, "parser", sizeof (Z304.A));
Z340(Zq0A4_72, Z304.A, 32L, (STRING)".txt", 4L, &Z307);
Z345 = Z329(Z307);
Z415(Z345);
Z334(Z307, Z345);
(void) strncpy ((char *)Z330.A, (char *)Z292, sizeof (Z330.A));
(void) strncpy ((char *)Z306.A, (char *)Z278, sizeof (Z306.A));
break;
case Zq0A4_203:;
(void) strncpy ((char *)Z330.A, (char *)Z299, sizeof (Z330.A));
(void) strncpy ((char *)Z306.A, (char *)Z279, sizeof (Z306.A));
break;
}
if (Zq0A4_72 == Zfb3DLQ_1) {
Zp1PEAFD_13(Z304.A, 32L, &Z362);
Z312 = Zfb3DLQ_2(&Z362);
} else {
Z312 = Zq0A4_72;
}
if (ZpmCQ_25(ORD('5'), &Zq0A4_61) && ZpmCQ_25(ORD('c'), &Zq0A4_61)) {
Zp1PEAFD_13(Z330.A, 256L, &Z348);
Zp1PEAFD_6(&Z348, 'g');
Zp1PEAFD_6(&Z348, '\0');
Zp1PEAFD_14(&Z348, Z330.A, 256L);
}
Z339 = Z336(Z330.A, 256L);
Z340(Zq0A4_72, Z304.A, 32L, Z306.A, 8L, &Z307);
Z345 = Z329(Z307);
Z308 = Zfb3DLQ_2(&Z307);
Z310 = 0;
while (!ZfM_19(Z339)) {
Zp1PEAFD_20(Z339, &Z348);
if (Zp1PEAFD_7(&Z348) >= 2 && Zp1PEAFD_12(&Z348, 1) == '$') {
Z315 = Zp1PEAFD_12(&Z348, 2);
switch (Z315) {
case '-':;
Z344(Z339, Z345, Z348, Zq0A4_80, Zq0A4_73);
break;
case 'E':;
Z344(Z339, Z345, Z348, Zq0A4_81, Zq0A4_74);
break;
case 'G':;
Z344(Z339, Z345, Z348, Zq0A4_82, Zq0A4_75);
break;
case 'L':;
Z344(Z339, Z345, Z348, Zq0A4_83, Zq0A4_76);
break;
case 'B':;
Z344(Z339, Z345, Z348, Zq0A4_84, Zq0A4_77);
break;
case 'C':;
Z344(Z339, Z345, Z348, Zq0A4_85, Zq0A4_78);
break;
case 'Z':;
Z344(Z339, Z345, Z348, Zq0A4_86, Zq0A4_79);
break;
case 'T':;
Z374(Z345);
break;
case 'X':;
if (ZpmCQ_25(ORD('n'), &Zq0A4_61)) {
Zp1PEAFD_11(&Z348, 3, (Zp1PEAFD_1)Zp1PEAFD_7(&Z348), &Z348);
ZdaDDADFC_10(Z345, Z348);
}
break;
case 'R':;
Z416(Z345);
break;
case 'S':;
if (!ZpmCQ_25(ORD('C'), &Zq0A4_61)) {
Z375(Z345);
}
break;
case 'W':;
Z381(Z345);
break;
case '+':;
Z392(Z345);
break;
case 'I':;
Z355(Z345);
break;
case 'U':;
if (Zq0A4_62 == Zq0A4_203) {
if (!ZpmCQ_25(ORD('4'), &Zq0A4_61)) {
Z356(Z345);
}
} else {
Z356(Z345);
}
break;
case 'J':;
Z399(Z345);
break;
case 'P':;
Z417(Z345);
break;
case 'Q':;
Z418(Z345);
break;
case 'D':;
if (!ZpmCQ_25(ORD('u'), &Zq0A4_61)) {
Z419(Z345);
}
break;
case 'V':;
if (!ZpmCQ_25(ORD('o'), &Zq0A4_61)) {
Z420(Z345);
}
break;
case 'M':;
Z421(Z345);
break;
case '%':;
Z422(Z345);
break;
case '!':;
Z423(Z345);
break;
case 'N':;
if (ZpmCQ_25(ORD('o'), &Zq0A4_61)) {
Z424(Z345);
}
break;
case 'Y':;
if (!ZpmCQ_25(ORD('o'), &Zq0A4_61)) {
Z425(Z345);
}
break;
case 'K':;
Z426(Z345);
break;
case 'H':;
Z427(Z345);
break;
case 'O':;
Z428(Z345);
break;
case 'F':;
Z429(Z345);
break;
case 'A':;
Z430(Z345);
break;
case '@':;
Z350(Z345, Z348);
break;
case '/':;
Z431(Z345);
break;
case '*':;
Z432(Z345);
break;
case '4':;
if (ZpmCQ_25(ORD('6'), &Zq0A4_61)) {
Z433(Z345);
}
break;
case '5':;
if (ZpmCQ_25(ORD('6'), &Zq0A4_61)) {
Z434(Z345);
}
break;
case '6':;
if (ZpmCQ_25(ORD('f'), &Zq0A4_61)) {
Z357(Z345);
}
break;
case '7':;
ZdaDDADFC_3(Z345, '"');
Zp1PEAFD_14(&Zq0A4_63, Z330.A, 256L);
ZdaDDADFC_4(Z345, Z330.A, 256L);
ZdaDDADFC_3(Z345, '"');
ZdaDDADFC_7(Z345);
break;
case '#':;
if (Zq0A4_62 == Zq0A4_203) {
if (Zq0A4_70 != Zfb3DLQ_1) {
ZdaDDADFC_4(Z345, (STRING)"package ", 8L);
ZdaDDADFC_9(Z345, Zq0A4_70);
ZdaDDADFC_4(Z345, (STRING)";", 1L);
ZdaDDADFC_7(Z345);
}
if (ZpmCQ_25(ORD(','), &Zq0A4_61)) {
Z354(Z345, (STRING)"YYTrialParse", 12L, TRUE);
}
if (ZpmCQ_25(ORD(';'), &Zq0A4_61)) {
Z354(Z345, (STRING)"YYReParse", 9L, TRUE);
}
if (ZpmCQ_25(ORD('&'), &Zq0A4_61)) {
Z354(Z345, (STRING)"YYGetLook", 9L, TRUE);
}
if (ZpmCQ_25(ORD('b'), &Zq0A4_61)) {
Z354(Z345, (STRING)"YYMemoParse", 11L, TRUE);
}
}
break;
case '|':;
if (ZpmCQ_25(ORD('O'), &Zq0A4_61)) {
Z435(Z345);
}
break;
case ']':;
ZblNKKO_44((STRING)"unpaired $] in skeleton", 23L, (LONGCARD)ZblNKKO_14, ZmtLFGGBG_1);
break;
default:
ZblNKKO_45((STRING)"unknown $ directive in skeleton", 31L, (LONGCARD)ZblNKKO_14, ZmtLFGGBG_1, (LONGCARD)ZblNKKO_28, ADR (Z315));
break;
}
} else {
ZdaDDADFC_10(Z345, Z348);
}
}
ZfM_5(Z339);
ZfM_21(Z345);
if (Zq0A4_62 == Zq0A4_200 || Zq0A4_62 == Zq0A4_201 || Zq0A4_62 == Zq0A4_202 || Zq0A4_62 == Zq0A4_203) {
if (ZpmCQ_25(ORD('7'), &Zq0A4_61)) {
Zp1PEAFD_13((STRING)"gcpp yy", 7L, &Z348);
} else {
Zp1PEAFD_13((STRING)"gcpp ", 5L, &Z348);
}
Zp1PEAFD_5(&Z348, &Z307);
Zp1PEAFD_6(&Z348, '\0');
Zp1PEAFD_14(&Z348, Z330.A, 256L);
Z383 = rSystem(Z330.A, 256L);
}
Z334(Z307, Z345);
}

void ZdaDDADFC_17
 ARGS ((void))
{
ZfM_3 Z339, Z345;
struct S_7 Z330;

switch (Zq0A4_62) {
case Zq0A4_198:;
(void) strncpy ((char *)Z330.A, (char *)Z283, sizeof (Z330.A));
(void) strncpy ((char *)Z306.A, (char *)Z273, sizeof (Z306.A));
break;
case Zq0A4_199:;
(void) strncpy ((char *)Z330.A, (char *)Z286, sizeof (Z330.A));
(void) strncpy ((char *)Z306.A, (char *)Z273, sizeof (Z306.A));
break;
case Zq0A4_201:;
return;
break;
case Zq0A4_202:;
(void) strncpy ((char *)Z330.A, (char *)Z289, sizeof (Z330.A));
(void) strncpy ((char *)Z306.A, (char *)Z276, sizeof (Z306.A));
(void) strncpy ((char *)Z304.A, "parser", sizeof (Z304.A));
break;
case Zq0A4_200:;
(void) strncpy ((char *)Z330.A, (char *)Z280, sizeof (Z330.A));
(void) strncpy ((char *)Z306.A, (char *)Z271, sizeof (Z306.A));
break;
}
Z339 = Z336(Z330.A, 256L);
Z340(Zq0A4_72, Z304.A, 32L, Z306.A, 8L, &Z307);
Z345 = Z329(Z307);
Z308 = Zfb3DLQ_2(&Z307);
Z310 = 0;
Z352(Z339, Z345);
ZfM_5(Z339);
Z334(Z307, Z345);
}

void ZdaDDADFC_18
 ARGS ((void))
{
ZfM_3 Z339, Z345;
Zp1PEAFD_2 Z225;
struct S_6 Z330;

if (ZpmCQ_25(ORD('c'), &Zq0A4_61)) {
(void) strncpy ((char *)Z330.A, (char *)Z285, sizeof (Z330.A));
(void) strncpy ((char *)Z306.A, (char *)Z274, sizeof (Z306.A));
} else if (ZpmCQ_25(ORD('+'), &Zq0A4_61)) {
(void) strncpy ((char *)Z330.A, (char *)Z288, sizeof (Z330.A));
(void) strncpy ((char *)Z306.A, (char *)Z275, sizeof (Z306.A));
} else if (ZpmCQ_25(ORD('e'), &Zq0A4_61)) {
(void) strncpy ((char *)Z330.A, (char *)Z293, sizeof (Z330.A));
(void) strncpy ((char *)Z306.A, (char *)Z278, sizeof (Z306.A));
(void) strncpy ((char *)Z304.A, "parser", sizeof (Z304.A));
(void) strncpy ((char *)Z305.A, "drv", sizeof (Z305.A));
} else if (ZpmCQ_25(ORD('3'), &Zq0A4_61)) {
(void) strncpy ((char *)Z330.A, (char *)Z291, sizeof (Z330.A));
(void) strncpy ((char *)Z306.A, (char *)Z277, sizeof (Z306.A));
(void) strncpy ((char *)Z304.A, "parser", sizeof (Z304.A));
(void) strncpy ((char *)Z305.A, "drv", sizeof (Z305.A));
} else if (ZpmCQ_25(ORD('j'), &Zq0A4_61)) {
(void) strncpy ((char *)Z330.A, (char *)Z300, sizeof (Z330.A));
(void) strncpy ((char *)Z306.A, (char *)Z279, sizeof (Z306.A));
} else {
(void) strncpy ((char *)Z330.A, (char *)Z282, sizeof (Z330.A));
(void) strncpy ((char *)Z306.A, (char *)Z272, sizeof (Z306.A));
}
Z339 = Z336(Z330.A, 256L);
if (Zq0A4_72 == Zfb3DLQ_1) {
Zp1PEAFD_13(Z304.A, 32L, &Z307);
} else {
Zfb3DLQ_3(Zq0A4_72, &Z307);
}
Zp1PEAFD_13(Z305.A, 32L, &Z225);
Zp1PEAFD_5(&Z307, &Z225);
Zp1PEAFD_13(Z306.A, 8L, &Z225);
Zp1PEAFD_5(&Z307, &Z225);
Z345 = Z329(Z307);
Z352(Z339, Z345);
ZfM_5(Z339);
Z334(Z307, Z345);
}

static void Z439
# ifdef HAVE_ARGS
(CHAR Z341[], LONGCARD O_8)
# else
(Z341, O_8)
CHAR Z341[];
LONGCARD O_8;
# endif
{
ZfM_3 Z339, Z345;
struct S_5 Z330;
CARDINAL Z359;
OPEN_ARRAY_LOCALS

ALLOC_OPEN_ARRAYS (O_8 * sizeof (CHAR), 1)
COPY_OPEN_ARRAY (Z341, O_8, CHAR)
{
LONGCARD B_31 = 0, B_32 = (O_8 - 1);

if (B_31 <= B_32)
for (Z359 = B_31;; Z359 += 1) {
Z330.A[Z359] = Z341[Z359];
if (Z359 >= B_32) break;
}
}
Z330.A[(O_8 - 1) + 1] = '\0';
Z339 = Z336(Z330.A, 256L);
{
LONGCARD B_33 = 0, B_34 = (O_8 - 1);

if (B_33 <= B_34)
for (Z359 = B_33;; Z359 += 1) {
Z330.A[Z359] = Z341[Z359];
if (Z359 >= B_34) break;
}
}
Z330.A[(O_8 - 1) + 1] = '\0';
Z345 = ZfM_20(Z330.A, 256L);
if (Z345 < 0) {
INC(Zq0A4_68);
ZblNKKO_45((STRING)"can not access file", 19L, (LONGCARD)ZblNKKO_14, ZmtLFGGBG_1, (LONGCARD)ZblNKKO_32, ADR1 (Z341));
}
Z352(Z339, Z345);
ZfM_5(Z339);
ZfM_21(Z345);
FREE_OPEN_ARRAYS
}

void ZdaDDADFC_19
 ARGS ((void))
{
Z439(Z294, 8L);
Z439(Z295, 10L);
Z439(Z296, 10L);
Z439(Z297, 10L);
Z439(Z298, 7L);
}

static void Z416
# ifdef HAVE_ARGS
(ZfM_3 Z335)
# else
(Z335)
ZfM_3 Z335;
# endif
{
CARDINAL Z440, Z441, Z376, Z442;
BOOLEAN Z394;

Z440 = 0;
Z441 = 1;
Z443(Z335);
{
LONGCARD B_35 = 1, B_36 = ZpmC89LG6_2;

if (B_35 <= B_36)
for (Z376 = B_35;; Z376 += 1) {
{
register Zq0A4_120 *W_11 = &Zq0A4_95->A[Z376]->U_1.V_18.Y17;

if (IN(Zq0A4_47, W_11->Y16->U_1.V_9.Y8.Y5)) {
if (Z440 >= ZdaDDADFC_0) {
Z445(Z335);
INC(Z441);
Z440 = 0;
}
INC(Z440);
switch (Zq0A4_62) {
case Zq0A4_200:;
ZdaDDADFC_4(Z335, (STRING)"| ", 2L);
break;
case Zq0A4_198:;
case Zq0A4_199:;
case Zq0A4_203:;
ZdaDDADFC_4(Z335, (STRING)"case ", 5L);
break;
case Zq0A4_201:;
ZdaDDADFC_4(Z335, (STRING)"when ", 5L);
break;
case Zq0A4_202:;
ZdaDDADFC_4(Z335, (STRING)"when ", 5L);
break;
}
ZdaDDADFC_5(Z335, (LONGINT)(ZggFGLABP_12 + W_11->Y14), 0L);
if (!ZpmCQ_25(ORD('n'), &Zq0A4_61) && W_11->Y15 != 0) {
switch (Zq0A4_62) {
case Zq0A4_200:;
ZdaDDADFC_4(Z335, (STRING)", ", 2L);
break;
case Zq0A4_198:;
case Zq0A4_199:;
case Zq0A4_203:;
ZdaDDADFC_3(Z335, ':');
ZdaDDADFC_7(Z335);
ZdaDDADFC_4(Z335, (STRING)"case ", 5L);
break;
case Zq0A4_201:;
ZdaDDADFC_4(Z335, (STRING)", ", 2L);
break;
case Zq0A4_202:;
ZdaDDADFC_4(Z335, (STRING)" | ", 3L);
break;
}
ZdaDDADFC_5(Z335, (LONGINT)W_11->Y15, 0L);
}
switch (Zq0A4_62) {
case Zq0A4_200:;
ZdaDDADFC_4(Z335, (STRING)":", 1L);
break;
case Zq0A4_198:;
case Zq0A4_199:;
case Zq0A4_203:;
ZdaDDADFC_4(Z335, (STRING)":", 1L);
break;
case Zq0A4_201:;
ZdaDDADFC_4(Z335, (STRING)" then", 5L);
break;
case Zq0A4_202:;
ZdaDDADFC_4(Z335, (STRING)" =>", 3L);
break;
}
if (Z376 <= ZpmC89LG6_4) {
ZdaDDADFC_7(Z335);
switch (Zq0A4_62) {
case Zq0A4_200:;
case Zq0A4_198:;
case Zq0A4_199:;
case Zq0A4_202:;
case Zq0A4_201:;
ZdaDDADFC_4(Z335, (STRING)"YYACCEPT;", 9L);
ZdaDDADFC_7(Z335);
break;
case Zq0A4_203:;
ZdaDDADFC_4(Z335, (STRING)"YYACCEPT", 8L);
ZdaDDADFC_7(Z335);
break;
}
} else {
if ((Zq0A4_62 == Zq0A4_198 || Zq0A4_62 == Zq0A4_199) && ZpmCQ_25(Z376, &ZggGECF6A_14)) {
ZdaDDADFC_7(Z335);
ZdaDDADFC_4(Z335, (STRING)"yy", 2L);
ZdaDDADFC_5(Z335, (LONGINT)Z376, 0L);
ZdaDDADFC_4(Z335, (STRING)":", 1L);
}
ZdaDDADFC_13(Z335, Z376, FALSE);
}
}
}
if (Z376 >= B_36) break;
}
}
{
LONGCARD B_37 = 1, B_38 = (CARDINAL)ZggGECF6A_11;

if (B_37 <= B_38)
for (Z376 = B_37;; Z376 += 1) {
Z394 = TRUE;
{
register ZggGECF6A_10 *W_12 = &ZggGECF6A_13->A[Z376];

if (Z440 >= ZdaDDADFC_0) {
Z445(Z335);
INC(Z441);
Z440 = 0;
}
INC(Z440);
switch (Zq0A4_62) {
case Zq0A4_200:;
ZdaDDADFC_4(Z335, (STRING)"| ", 2L);
break;
case Zq0A4_198:;
case Zq0A4_199:;
case Zq0A4_203:;
ZdaDDADFC_4(Z335, (STRING)"case ", 5L);
break;
case Zq0A4_201:;
ZdaDDADFC_4(Z335, (STRING)"when ", 5L);
break;
case Zq0A4_202:;
ZdaDDADFC_4(Z335, (STRING)"when ", 5L);
break;
}
ZdaDDADFC_5(Z335, (LONGINT)ZggFGLABP_38((LONGINT)W_12->Y3), 0L);
switch (Zq0A4_62) {
case Zq0A4_200:;
ZdaDDADFC_4(Z335, (STRING)":", 1L);
break;
case Zq0A4_198:;
case Zq0A4_199:;
case Zq0A4_203:;
ZdaDDADFC_4(Z335, (STRING)":", 1L);
ZdaDDADFC_4(Z335, (STRING)" /* STATE ", 10L);
ZdaDDADFC_5(Z335, (LONGINT)W_12->Y1, 0L);
ZdaDDADFC_4(Z335, (STRING)" */", 3L);
break;
case Zq0A4_201:;
ZdaDDADFC_4(Z335, (STRING)" then", 5L);
break;
case Zq0A4_202:;
ZdaDDADFC_4(Z335, (STRING)" =>", 3L);
break;
}
ZdaDDADFC_7(Z335);
if (W_12->Y5 != 0) {
ZdaDoSr_0(Z335, Z376);
} else {
{
register ZiS8_7 *W_13 = &ZiS8_14->A[W_12->Y1];

{
LONGCARD B_39 = W_13->Y0, B_40 = W_13->Y0 + W_13->Y2 + W_13->Y3;

if (B_39 <= B_40)
for (Z442 = B_39;; Z442 += 1) {
{
register ZiS8_8 *W_14 = &ZiS8_17->A[Z442];

if (W_14->Y1 == Zq0A4_95->A[W_14->Y0]->U_1.V_18.Y17.Y12 && ZpmCQ_25((LONGCARD)W_14->Y0, &W_12->Y0)) {
if (Z394) {
switch (Zq0A4_62) {
case Zq0A4_200:;
ZdaDDADFC_4(Z335, (STRING)"IF ", 3L);
break;
case Zq0A4_198:;
case Zq0A4_199:;
case Zq0A4_203:;
ZdaDDADFC_4(Z335, (STRING)"if (", 4L);
break;
case Zq0A4_201:;
ZdaDDADFC_4(Z335, (STRING)"if ", 3L);
break;
case Zq0A4_202:;
ZdaDDADFC_4(Z335, (STRING)"if ", 3L);
break;
}
Z394 = FALSE;
} else {
switch (Zq0A4_62) {
case Zq0A4_200:;
ZdaDDADFC_4(Z335, (STRING)"ELSIF ", 6L);
break;
case Zq0A4_198:;
case Zq0A4_199:;
ZdaDDADFC_4(Z335, (STRING)"else if (", 9L);
break;
case Zq0A4_201:;
ZdaDDADFC_4(Z335, (STRING)"elseif ", 7L);
break;
case Zq0A4_202:;
ZdaDDADFC_4(Z335, (STRING)"elsif ", 6L);
break;
case Zq0A4_203:;
ZdaDDADFC_4(Z335, (STRING)"} else if (", 11L);
break;
}
}
switch (Zq0A4_95->A[W_14->Y0]->U_1.V_1.Y0) {
case Zq0A4_20:;
{
register Zq0A4_122 *W_15 = &Zq0A4_95->A[W_14->Y0]->U_1.V_20.Y19;

ZdaDDADFC_4(Z335, (STRING)"yyPrintResult (", 15L);
switch (Zq0A4_62) {
case Zq0A4_200:;
ZdaDDADFC_5(Z335, (LONGINT)W_15->Y24.Y1, 0L);
ZdaDDADFC_4(Z335, (STRING)",", 1L);
if (W_15->Y22) {
ZdaDDADFC_4(Z335, (STRING)"NOT ", 4L);
}
break;
case Zq0A4_198:;
case Zq0A4_199:;
ZdaDDADFC_4(Z335, (STRING)"* yyStateStackPtr, ", 19L);
ZdaDDADFC_5(Z335, (LONGINT)W_15->Y24.Y1, 0L);
ZdaDDADFC_4(Z335, (STRING)",", 1L);
if (W_15->Y22) {
ZdaDDADFC_4(Z335, (STRING)"! ", 2L);
}
break;
case Zq0A4_201:;
ZdaDDADFC_5(Z335, (LONGINT)W_15->Y24.Y1, 0L);
ZdaDDADFC_4(Z335, (STRING)",", 1L);
if (W_15->Y22) {
ZdaDDADFC_4(Z335, (STRING)"not ", 4L);
}
break;
case Zq0A4_202:;
ZdaDDADFC_5(Z335, (LONGINT)W_15->Y24.Y1, 0L);
ZdaDDADFC_4(Z335, (STRING)",", 1L);
if (W_15->Y22) {
ZdaDDADFC_4(Z335, (STRING)"not ", 4L);
}
break;
case Zq0A4_203:;
ZdaDDADFC_4(Z335, (STRING)"yyStateStack [yyStackPtr], ", 27L);
ZdaDDADFC_5(Z335, (LONGINT)W_15->Y24.Y1, 0L);
ZdaDDADFC_4(Z335, (STRING)",", 1L);
if (W_15->Y22) {
ZdaDDADFC_4(Z335, (STRING)"! ", 2L);
}
break;
}
ZdaDDADFC_4(Z335, (STRING)"(", 1L);
ZdaDDADFC_7(Z335);
Z351(Z335, (LONGCARD)W_15->Y24.Y1, W_15->Y24.Y0);
Z459(Z335, W_15->Y23, W_15->Y24, (LONGINT)W_15->Y12, (LONGINT)W_15->Y12, (LONGINT)W_15->Y19, Zq0A4_95->A[W_14->Y0]);
Z351(Z335, Z310 + 2, Z308);
ZdaDDADFC_4(Z335, (STRING)"))", 2L);
}
break;
case Zq0A4_21:;
{
register Zq0A4_123 *W_16 = &Zq0A4_95->A[W_14->Y0]->U_1.V_21.Y20;

ZdaDDADFC_4(Z335, (STRING)"yyPrintResult (", 15L);
switch (Zq0A4_62) {
case Zq0A4_200:;
ZdaDDADFC_5(Z335, (LONGINT)W_16->Y24.Y1, 0L);
ZdaDDADFC_4(Z335, (STRING)", yyTerminal ", 13L);
if (W_16->Y22) {
ZdaDDADFC_4(Z335, (STRING)"# ", 2L);
} else {
ZdaDDADFC_4(Z335, (STRING)"= ", 2L);
}
break;
case Zq0A4_198:;
case Zq0A4_199:;
ZdaDDADFC_4(Z335, (STRING)"* yyStateStackPtr, ", 19L);
ZdaDDADFC_5(Z335, (LONGINT)W_16->Y24.Y1, 0L);
ZdaDDADFC_4(Z335, (STRING)", yyTerminal ", 13L);
ZdaDDADFC_7(Z335);
if (W_16->Y22) {
ZdaDDADFC_4(Z335, (STRING)"!= ", 3L);
} else {
ZdaDDADFC_4(Z335, (STRING)"== ", 3L);
}
break;
case Zq0A4_201:;
ZdaDDADFC_5(Z335, (LONGINT)W_16->Y24.Y1, 0L);
ZdaDDADFC_4(Z335, (STRING)", yyTerminal ", 13L);
if (W_16->Y22) {
ZdaDDADFC_4(Z335, (STRING)"/= ", 3L);
} else {
ZdaDDADFC_4(Z335, (STRING)"= ", 2L);
}
break;
case Zq0A4_202:;
ZdaDDADFC_5(Z335, (LONGINT)W_16->Y24.Y1, 0L);
ZdaDDADFC_4(Z335, (STRING)", yyTerminal ", 13L);
if (W_16->Y22) {
ZdaDDADFC_4(Z335, (STRING)"/= ", 3L);
} else {
ZdaDDADFC_4(Z335, (STRING)"= ", 2L);
}
break;
case Zq0A4_203:;
ZdaDDADFC_4(Z335, (STRING)"yyStateStack [yyStackPtr], ", 27L);
ZdaDDADFC_5(Z335, (LONGINT)W_16->Y24.Y1, 0L);
ZdaDDADFC_4(Z335, (STRING)", yyTerminal ", 13L);
ZdaDDADFC_7(Z335);
if (W_16->Y22) {
ZdaDDADFC_4(Z335, (STRING)"!= ", 3L);
} else {
ZdaDDADFC_4(Z335, (STRING)"== ", 3L);
}
break;
}
ZdaDDADFC_5(Z335, (LONGINT)W_16->Y25->U_1.V_6.Y5.Y4, 0L);
ZdaDDADFC_4(Z335, (STRING)")", 1L);
}
break;
case Zq0A4_22:;
{
register Zq0A4_124 *W_17 = &Zq0A4_95->A[W_14->Y0]->U_1.V_22.Y21;

ZdaDDADFC_4(Z335, (STRING)"yyPrintResult (", 15L);
switch (Zq0A4_62) {
case Zq0A4_200:;
ZdaDDADFC_5(Z335, (LONGINT)W_17->Y24.Y1, 0L);
ZdaDDADFC_4(Z335, (STRING)", yyTrialParse (", 16L);
ZdaDDADFC_5(Z335, (LONGINT)Zq0A4_95->A[W_14->Y0]->U_1.V_22.Y21.Y26->U_1.V_18.Y17.Y14, 0L);
ZdaDDADFC_4(Z335, (STRING)", yyTerminal, ", 14L);
ZdaDDADFC_5(Z335, (LONGINT)W_17->Y24.Y1, 0L);
if (W_17->Y22) {
ZdaDDADFC_4(Z335, (STRING)") # 0)", 6L);
} else {
ZdaDDADFC_4(Z335, (STRING)") = 0)", 6L);
}
break;
case Zq0A4_198:;
case Zq0A4_199:;
ZdaDDADFC_4(Z335, (STRING)"* yyStateStackPtr, ", 19L);
ZdaDDADFC_5(Z335, (LONGINT)W_17->Y24.Y1, 0L);
ZdaDDADFC_4(Z335, (STRING)", yyTrialParse (", 16L);
ZdaDDADFC_7(Z335);
ZdaDDADFC_5(Z335, (LONGINT)Zq0A4_95->A[W_14->Y0]->U_1.V_22.Y21.Y26->U_1.V_18.Y17.Y14, 0L);
ZdaDDADFC_4(Z335, (STRING)", yyTerminal, ", 14L);
ZdaDDADFC_5(Z335, (LONGINT)W_17->Y24.Y1, 0L);
if (W_17->Y22) {
ZdaDDADFC_4(Z335, (STRING)") != 0)", 7L);
} else {
ZdaDDADFC_4(Z335, (STRING)") == 0)", 7L);
}
break;
case Zq0A4_201:;
ZdaDDADFC_5(Z335, (LONGINT)W_17->Y24.Y1, 0L);
ZdaDDADFC_4(Z335, (STRING)", yyTrialParse (", 16L);
ZdaDDADFC_5(Z335, (LONGINT)Zq0A4_95->A[W_14->Y0]->U_1.V_22.Y21.Y26->U_1.V_18.Y17.Y14, 0L);
ZdaDDADFC_4(Z335, (STRING)", yyTerminal, ", 14L);
ZdaDDADFC_5(Z335, (LONGINT)W_17->Y24.Y1, 0L);
if (W_17->Y22) {
ZdaDDADFC_4(Z335, (STRING)") /= 0)", 7L);
} else {
ZdaDDADFC_4(Z335, (STRING)") = 0)", 6L);
}
break;
case Zq0A4_202:;
ZdaDDADFC_5(Z335, (LONGINT)W_17->Y24.Y1, 0L);
ZdaDDADFC_4(Z335, (STRING)", yyTrialParse (", 16L);
ZdaDDADFC_5(Z335, (LONGINT)Zq0A4_95->A[W_14->Y0]->U_1.V_22.Y21.Y26->U_1.V_18.Y17.Y14, 0L);
ZdaDDADFC_4(Z335, (STRING)", yyTerminal, ", 14L);
ZdaDDADFC_5(Z335, (LONGINT)W_17->Y24.Y1, 0L);
if (W_17->Y22) {
ZdaDDADFC_4(Z335, (STRING)") /= 0)", 7L);
} else {
ZdaDDADFC_4(Z335, (STRING)") = 0)", 6L);
}
break;
case Zq0A4_203:;
ZdaDDADFC_4(Z335, (STRING)"yyStateStack [yyStackPtr], ", 27L);
ZdaDDADFC_5(Z335, (LONGINT)W_17->Y24.Y1, 0L);
ZdaDDADFC_4(Z335, (STRING)", yyTrialParse (", 16L);
ZdaDDADFC_7(Z335);
ZdaDDADFC_5(Z335, (LONGINT)Zq0A4_95->A[W_14->Y0]->U_1.V_22.Y21.Y26->U_1.V_18.Y17.Y14, 0L);
ZdaDDADFC_4(Z335, (STRING)", yyTerminal, ", 14L);
ZdaDDADFC_5(Z335, (LONGINT)W_17->Y24.Y1, 0L);
if (W_17->Y22) {
ZdaDDADFC_4(Z335, (STRING)") != 0)", 7L);
} else {
ZdaDDADFC_4(Z335, (STRING)") == 0)", 7L);
}
break;
}
}
break;
}
switch (Zq0A4_62) {
case Zq0A4_200:;
ZdaDDADFC_4(Z335, (STRING)" THEN", 5L);
break;
case Zq0A4_198:;
case Zq0A4_199:;
ZdaDDADFC_4(Z335, (STRING)")", 1L);
break;
case Zq0A4_201:;
ZdaDDADFC_4(Z335, (STRING)" then", 5L);
break;
case Zq0A4_202:;
ZdaDDADFC_4(Z335, (STRING)" then", 5L);
break;
case Zq0A4_203:;
ZdaDDADFC_4(Z335, (STRING)") {", 3L);
break;
}
ZdaDoSr_2(Z335, ZiS8_28 + W_14->Y0);
}
}
if (Z442 >= B_40) break;
}
}
switch (Zq0A4_62) {
case Zq0A4_200:;
ZdaDDADFC_4(Z335, (STRING)"ELSE", 4L);
break;
case Zq0A4_198:;
case Zq0A4_199:;
ZdaDDADFC_4(Z335, (STRING)"else {", 6L);
break;
case Zq0A4_201:;
ZdaDDADFC_4(Z335, (STRING)"else", 4L);
break;
case Zq0A4_202:;
ZdaDDADFC_4(Z335, (STRING)"else", 4L);
break;
case Zq0A4_203:;
ZdaDDADFC_4(Z335, (STRING)"} else {", 8L);
break;
}
if (W_12->Y2 >= ZiS8_28) {
ZdaDoSr_2(Z335, (LONGCARD)W_12->Y2);
} else {
ZdaDoSr_1(Z335, (LONGCARD)W_12->Y2);
}
}
switch (Zq0A4_62) {
case Zq0A4_200:;
ZdaDDADFC_4(Z335, (STRING)"END;", 4L);
break;
case Zq0A4_198:;
case Zq0A4_199:;
case Zq0A4_203:;
ZdaDDADFC_4(Z335, (STRING)"}", 1L);
break;
case Zq0A4_201:;
ZdaDDADFC_4(Z335, (STRING)"end;", 4L);
break;
case Zq0A4_202:;
ZdaDDADFC_4(Z335, (STRING)"end if;", 7L);
break;
}
ZdaDDADFC_7(Z335);
}
}
if (Z376 >= B_38) break;
}
}
Z466(Z335, (LONGINT)Z441);
}

void ZdaDDADFC_13
# ifdef HAVE_ARGS
(ZfM_3 Z335, CARDINAL Z376, BOOLEAN Z467)
# else
(Z335, Z376, Z467)
ZfM_3 Z335;
CARDINAL Z376;
BOOLEAN Z467;
# endif
{
{
register Zq0A4_120 *W_18 = &Zq0A4_95->A[Z376]->U_1.V_18.Y17;

ZdaDDADFC_4(Z335, (STRING)" ", 1L);
if (!ZpmCQ_25(ORD('C'), &Zq0A4_61)) {
switch (Zq0A4_62) {
case Zq0A4_200:;
ZdaDDADFC_4(Z335, (STRING)"(*\" ", 4L);
Z379(Z335, Z376);
ZdaDDADFC_4(Z335, (STRING)"\"*)", 3L);
break;
case Zq0A4_198:;
case Zq0A4_199:;
case Zq0A4_203:;
ZdaDDADFC_4(Z335, (STRING)"/* ", 3L);
Z380(Z335, Z376);
ZdaDDADFC_4(Z335, (STRING)"*/", 2L);
break;
case Zq0A4_201:;
ZdaDDADFC_4(Z335, (STRING)"-- ", 3L);
Z379(Z335, Z376);
break;
case Zq0A4_202:;
ZdaDDADFC_4(Z335, (STRING)"-- ", 3L);
Z379(Z335, Z376);
break;
}
ZdaDDADFC_7(Z335);
}
switch (Zq0A4_62) {
case Zq0A4_200:;
if (W_18->Y12 > 0) {
ZdaDDADFC_4(Z335, (STRING)"DEC (yyStackPtr, ", 17L);
ZdaDDADFC_5(Z335, (LONGINT)W_18->Y12, 0L);
ZdaDDADFC_4(Z335, (STRING)"); ", 3L);
}
ZdaDDADFC_4(Z335, (STRING)"yyNonterminal := ", 17L);
ZdaDDADFC_4(Z335, (STRING)"yyNT", 4L);
ZdaDDADFC_9(Z335, W_18->Y16->U_1.V_9.Y8.Y2);
ZdaDDADFC_4(Z335, (STRING)";", 1L);
break;
case Zq0A4_198:;
case Zq0A4_199:;
if (W_18->Y12 > 0) {
ZdaDDADFC_4(Z335, (STRING)"yyDecrement (", 13L);
ZdaDDADFC_5(Z335, (LONGINT)W_18->Y12, 0L);
ZdaDDADFC_4(Z335, (STRING)") ", 2L);
}
ZdaDDADFC_4(Z335, (STRING)"yySetNT (yyNT", 13L);
ZdaDDADFC_9(Z335, W_18->Y16->U_1.V_9.Y8.Y2);
ZdaDDADFC_4(Z335, (STRING)")", 1L);
break;
case Zq0A4_201:;
if (W_18->Y12 > 0) {
ZdaDDADFC_4(Z335, (STRING)"yyStackPtr := yyStackPtr - ", 27L);
ZdaDDADFC_5(Z335, (LONGINT)W_18->Y12, 0L);
ZdaDDADFC_4(Z335, (STRING)"; ", 2L);
}
ZdaDDADFC_4(Z335, (STRING)"yyNonterminal := ", 17L);
ZdaDDADFC_4(Z335, (STRING)"yyNT", 4L);
ZdaDDADFC_9(Z335, W_18->Y16->U_1.V_9.Y8.Y2);
ZdaDDADFC_4(Z335, (STRING)";", 1L);
break;
case Zq0A4_202:;
if (W_18->Y12 > 0) {
ZdaDDADFC_4(Z335, (STRING)"yyStackPtr := yyStackPtr - ", 27L);
ZdaDDADFC_5(Z335, (LONGINT)W_18->Y12, 0L);
ZdaDDADFC_4(Z335, (STRING)"; ", 2L);
}
ZdaDDADFC_4(Z335, (STRING)"yyNonterminal := ", 17L);
ZdaDDADFC_4(Z335, (STRING)"yyNT", 4L);
ZdaDDADFC_9(Z335, W_18->Y16->U_1.V_9.Y8.Y2);
ZdaDDADFC_4(Z335, (STRING)";", 1L);
break;
case Zq0A4_203:;
if (Z467) {
if (W_18->Y12 > 0) {
ZdaDDADFC_4(Z335, (STRING)"yyStackPtr -= ", 14L);
ZdaDDADFC_5(Z335, (LONGINT)W_18->Y12, 0L);
ZdaDDADFC_4(Z335, (STRING)"; ", 2L);
}
ZdaDDADFC_4(Z335, (STRING)"yyNonterminal = ", 16L);
ZdaDDADFC_5(Z335, (LONGINT)ZggFGLABP_37((LONGCARD)W_18->Y16->U_1.V_9.Y8.Y8), 0L);
ZdaDDADFC_4(Z335, (STRING)";", 1L);
} else {
if (W_18->Y12 > 0) {
ZdaDDADFC_4(Z335, (STRING)"yyDecrement (", 13L);
ZdaDDADFC_5(Z335, (LONGINT)W_18->Y12, 0L);
ZdaDDADFC_4(Z335, (STRING)") ", 2L);
}
ZdaDDADFC_4(Z335, (STRING)"yySetNT (yyNT", 13L);
ZdaDDADFC_9(Z335, W_18->Y16->U_1.V_9.Y8.Y2);
ZdaDDADFC_4(Z335, (STRING)")", 1L);
}
break;
}
if (Zq0A4_62 == Zq0A4_198 || Zq0A4_62 == Zq0A4_199 || Zq0A4_62 == Zq0A4_203) {
ZdaDDADFC_4(Z335, (STRING)" {", 2L);
}
ZdaDDADFC_7(Z335);
Z309 = TRUE;
Z351(Z335, (LONGCARD)W_18->Y6.Y1, W_18->Y6.Y0);
Z459(Z335, W_18->Y5, W_18->Y6, (LONGINT)W_18->Y12, 0L, (LONGINT)W_18->Y19, Zq0A4_95->A[Z376]);
if (!Z309) {
switch (Zq0A4_62) {
case Zq0A4_200:;
ZdaDDADFC_4(Z335, (STRING)"END;", 4L);
ZdaDDADFC_7(Z335);
break;
case Zq0A4_198:;
case Zq0A4_199:;
break;
case Zq0A4_201:;
ZdaDDADFC_4(Z335, (STRING)"end;", 4L);
ZdaDDADFC_7(Z335);
break;
case Zq0A4_202:;
ZdaDDADFC_4(Z335, (STRING)"end if;", 7L);
ZdaDDADFC_7(Z335);
break;
case Zq0A4_203:;
ZdaDDADFC_4(Z335, (STRING)"}", 1L);
ZdaDDADFC_7(Z335);
break;
}
}
if (!ZqnGVQ_4(&W_18->Y7)) {
if (IN(Zq0A4_53, W_18->Y16->U_1.V_9.Y8.Y5) || ZpmCQ_25(ORD(';'), &Zq0A4_61)) {
switch (Zq0A4_62) {
case Zq0A4_200:;
ZdaDDADFC_4(Z335, (STRING)"IF yyControl.yyActions THEN", 27L);
break;
case Zq0A4_198:;
case Zq0A4_199:;
ZdaDDADFC_4(Z335, (STRING)"} if (yyControl.yyActions) {", 28L);
break;
case Zq0A4_201:;
ZdaDDADFC_4(Z335, (STRING)"if yyControlActions then", 24L);
break;
case Zq0A4_202:;
ZdaDDADFC_4(Z335, (STRING)"if yyControl.yyActions then", 27L);
break;
case Zq0A4_203:;
ZdaDDADFC_4(Z335, (STRING)"} if (yyActions) {", 18L);
break;
}
ZdaDDADFC_7(Z335);
}
Z309 = FALSE;
Z351(Z335, (LONGCARD)W_18->Y8.Y1, W_18->Y8.Y0);
Z459(Z335, W_18->Y7, W_18->Y8, (LONGINT)W_18->Y12, 0L, (LONGINT)W_18->Y19, Zq0A4_95->A[Z376]);
if (IN(Zq0A4_53, W_18->Y16->U_1.V_9.Y8.Y5) || ZpmCQ_25(ORD(';'), &Zq0A4_61)) {
switch (Zq0A4_62) {
case Zq0A4_200:;
ZdaDDADFC_4(Z335, (STRING)"END;", 4L);
ZdaDDADFC_7(Z335);
break;
case Zq0A4_198:;
case Zq0A4_199:;
break;
case Zq0A4_201:;
ZdaDDADFC_4(Z335, (STRING)"end;", 4L);
ZdaDDADFC_7(Z335);
break;
case Zq0A4_202:;
ZdaDDADFC_4(Z335, (STRING)"end if;", 7L);
ZdaDDADFC_7(Z335);
break;
case Zq0A4_203:;
break;
}
}
} else if (ZpmCQ_25(ORD('.'), &Zq0A4_61) && W_18->Y12 > 0) {
switch (Zq0A4_62) {
case Zq0A4_200:;
ZdaDDADFC_4(Z335, (STRING)"yyS := ", 7L);
ZdaDDADFC_12(Z335, 'A');
ZdaDDADFC_4(Z335, (STRING)"^[yyStackPtr + 1];", 18L);
break;
case Zq0A4_198:;
case Zq0A4_199:;
case Zq0A4_203:;
ZdaDDADFC_4(Z335, (STRING)"yyS = ", 6L);
ZdaDDADFC_12(Z335, 'A');
ZdaDDADFC_4(Z335, (STRING)" [0];", 5L);
break;
case Zq0A4_201:;
ZdaDDADFC_4(Z335, (STRING)"yyS := ", 7L);
ZdaDDADFC_12(Z335, 'A');
ZdaDDADFC_4(Z335, (STRING)".item (yyStackPtr + 1);", 23L);
break;
case Zq0A4_202:;
ZdaDDADFC_4(Z335, (STRING)"yyS := ", 7L);
ZdaDDADFC_12(Z335, 'A');
ZdaDDADFC_4(Z335, (STRING)" (yyStackPtr + 1);", 18L);
break;
}
ZdaDDADFC_7(Z335);
}
Z351(Z335, Z310 + 2, Z308);
if (Zq0A4_62 == Zq0A4_198 || Zq0A4_62 == Zq0A4_199 || Zq0A4_62 == Zq0A4_203) {
ZdaDDADFC_4(Z335, (STRING)"} break;", 8L);
ZdaDDADFC_7(Z335);
}
}
}

static void Z443
# ifdef HAVE_ARGS
(ZfM_3 Z335)
# else
(Z335)
ZfM_3 Z335;
# endif
{
switch (Zq0A4_62) {
case Zq0A4_200:;
ZdaDDADFC_4(Z335, (STRING)"CASE yyState OF", 15L);
break;
case Zq0A4_198:;
case Zq0A4_199:;
case Zq0A4_203:;
ZdaDDADFC_4(Z335, (STRING)"switch (yyState) {", 18L);
break;
case Zq0A4_201:;
ZdaDDADFC_4(Z335, (STRING)"inspect yyState", 15L);
break;
case Zq0A4_202:;
ZdaDDADFC_4(Z335, (STRING)"case yyState is", 15L);
break;
}
ZdaDDADFC_7(Z335);
}

static void Z445
# ifdef HAVE_ARGS
(ZfM_3 Z335)
# else
(Z335)
ZfM_3 Z335;
# endif
{
switch (Zq0A4_62) {
case Zq0A4_200:;
ZdaDDADFC_4(Z335, (STRING)"ELSE CASE yyState OF", 20L);
break;
case Zq0A4_198:;
case Zq0A4_199:;
case Zq0A4_203:;
ZdaDDADFC_4(Z335, (STRING)"default: switch (yyState) {", 27L);
break;
case Zq0A4_201:;
ZdaDDADFC_4(Z335, (STRING)"else inspect yyState", 20L);
break;
case Zq0A4_202:;
ZdaDDADFC_4(Z335, (STRING)"when others => case yyState is", 30L);
break;
}
ZdaDDADFC_7(Z335);
}

static void Z466
# ifdef HAVE_ARGS
(ZfM_3 Z335, INTEGER Z441)
# else
(Z335, Z441)
ZfM_3 Z335;
INTEGER Z441;
# endif
{
switch (Zq0A4_62) {
case Zq0A4_200:;
while (Z441 > 0) {
ZdaDDADFC_4(Z335, (STRING)"END;", 4L);
ZdaDDADFC_7(Z335);
DEC(Z441);
}
break;
case Zq0A4_198:;
case Zq0A4_199:;
ZdaDDADFC_4(Z335, (STRING)"default: switch (yyState) {", 27L);
ZdaDDADFC_7(Z335);
ZdaDDADFC_4(Z335, (STRING)"case 1: goto yyAbort;", 21L);
ZdaDDADFC_7(Z335);
ZdaDDADFC_4(Z335, (STRING)"case 2: goto yyRead;", 20L);
ZdaDDADFC_7(Z335);
ZdaDDADFC_4(Z335, (STRING)"case 3: goto yyReduce;", 22L);
ZdaDDADFC_7(Z335);
ZdaDDADFC_4(Z335, (STRING)"}", 1L);
ZdaDDADFC_7(Z335);
while (Z441 > 0) {
ZdaDDADFC_4(Z335, (STRING)"}", 1L);
ZdaDDADFC_7(Z335);
DEC(Z441);
}
break;
case Zq0A4_201:;
while (Z441 > 0) {
ZdaDDADFC_4(Z335, (STRING)"end;", 4L);
ZdaDDADFC_7(Z335);
DEC(Z441);
}
break;
case Zq0A4_202:;
while (Z441 > 0) {
if (Z441 == 1) {
ZdaDDADFC_4(Z335, (STRING)"when others => null;", 20L);
ZdaDDADFC_7(Z335);
}
ZdaDDADFC_4(Z335, (STRING)"end case;", 9L);
ZdaDDADFC_7(Z335);
DEC(Z441);
}
break;
case Zq0A4_203:;
ZdaDDADFC_4(Z335, (STRING)"}", 1L);
ZdaDDADFC_7(Z335);
DEC(Z441);
break;
}
}

static CARDINAL Z472
# ifdef HAVE_ARGS
(Zq0A4_35 Z473, Zfb3DLQ_0 Z474)
# else
(Z473, Z474)
Zq0A4_35 Z473;
Zfb3DLQ_0 Z474;
# endif
{
CARDINAL Z359;

Z359 = 0;
while (Z473->U_1.V_1.Y0 == Zq0A4_26) {
INC(Z359);
if (Z473->U_1.V_26.Y25.Y4 == Z474) {
return Z359;
}
Z473 = Z473->U_1.V_26.Y25.Y1;
}
return 0;
}

static Zfb3DLQ_0 Z475
# ifdef HAVE_ARGS
(Zq0A4_35 Z376, CARDINAL Z476)
# else
(Z376, Z476)
Zq0A4_35 Z376;
CARDINAL Z476;
# endif
{
CARDINAL Z359;
Zq0A4_35 Z477;

{
register Zq0A4_120 *W_19 = &Z376->U_1.V_18.Y17;

if (Z476 <= W_19->Y12) {
Z477 = W_19->Y18->U_1.V_18.Y17.Y2;
{
LONGCARD B_41 = 2, B_42 = Z476;

if (B_41 <= B_42)
for (Z359 = B_41;; Z359 += 1) {
Z477 = Z477->U_1.V_26.Y25.Y1;
if (Z359 >= B_42) break;
}
}
return Z477->U_1.V_26.Y25.Y2;
} else {
return Zfb3DLQ_1;
}
}
}

static void Z459
# ifdef HAVE_ARGS
(ZfM_3 Z335, ZqnGVQ_0 Z470, ZmtLFGGBG_0 Z400, INTEGER Z479, INTEGER Z480, INTEGER Z460, Zq0A4_35 Z376)
# else
(Z335, Z470, Z400, Z479, Z480, Z460, Z376)
ZfM_3 Z335;
ZqnGVQ_0 Z470;
ZmtLFGGBG_0 Z400;
INTEGER Z479, Z480, Z460;
Zq0A4_35 Z376;
# endif
{
CARDINAL Z359, Z482, Z383, Z483, Z484;
INTEGER Z476, Z485;
Zp1PEAFD_2 Z225, Z338;
BOOLEAN Z486, Z487;
CHAR Z488, Z489;
ZmtLFGGBG_0 Z490;
Zfb3DLQ_0 Z474, Z491;
Zq0A4_35 Z492;

while (!ZqnGVQ_4(&Z470)) {
Zp1PEAFi_3((Zp1PEAFi_1)PTRINT(ZijFQQ_8(Z470)), &Z225);
ZijFQQ_9(&Z470);
Z482 = Zp1PEAFD_7(&Z225);
Z359 = 0;
while (Z359 < Z482) {
INC(Z359);
Z489 = Zp1PEAFD_12(&Z225, (Zp1PEAFD_1)Z359);
if (Z489 == '\\' && Z359 < Z482) {
INC(Z359);
ZdaDDADFC_3(Z335, Zp1PEAFD_12(&Z225, (Zp1PEAFD_1)Z359));
} else if (Z489 == '\t') {
ZdaDDADFC_3(Z335, Z489);
INC1(Z400.Y2, Z481 - 1 - (Z400.Y2 + Z359 - 1) % Z481);
} else if (Z489 == '"' || Z489 == '\'') {
Z490 = Z400;
INC1(Z490.Y2, Z359);
Z488 = Z489;
ZdaDDADFC_3(Z335, Z489);
for (;;) {
INC(Z359);
if (Z359 <= Zp1PEAFD_0) {
Z489 = Zp1PEAFD_12(&Z225, (Zp1PEAFD_1)Z359);
ZdaDDADFC_3(Z335, Z489);
if ((Zq0A4_62 == Zq0A4_198 || Zq0A4_62 == Zq0A4_199 || Zq0A4_62 == Zq0A4_203) && Z489 == '\\' || Zq0A4_62 == Zq0A4_201 && Z489 == '%') {
INC(Z359);
ZdaDDADFC_3(Z335, Zp1PEAFD_12(&Z225, (Zp1PEAFD_1)Z359));
}
if (Z489 == Z488) {
goto EXIT_5;
}
} else {
ZblNKKO_44((STRING)"string is too long", 18L, (LONGCARD)ZblNKKO_16, Z490);
return;
}
} EXIT_5:;
} else if (Z489 == '$' && Z359 < Z482) {
INC(Z359);
Z489 = Zp1PEAFD_12(&Z225, (Zp1PEAFD_1)Z359);
Z484 = 0;
Z483 = Z359 + 1;
if (Z489 == '<') {
while (Z359 <= Z482 && Zp1PEAFD_12(&Z225, (Zp1PEAFD_1)Z359) != '>') {
INC(Z359);
}
if (Z359 < Z482) {
Z484 = Z359 - 1;
INC(Z359);
Z489 = Zp1PEAFD_12(&Z225, (Zp1PEAFD_1)Z359);
}
}
if (Z489 == '$') {
ZdaDDADFC_12(Z335, 'S');
if (Z483 < Z484) {
ZdaDDADFC_3(Z335, '.');
{
LONGCARD B_43 = Z483, B_44 = Z484;

if (B_43 <= B_44)
for (Z383 = B_43;; Z383 += 1) {
ZdaDDADFC_3(Z335, Zp1PEAFD_12(&Z225, (Zp1PEAFD_1)Z383));
if (Z383 >= B_44) break;
}
}
} else {
Z494(Z335, Z376->U_1.V_18.Y17.Y16->U_1.V_9.Y8.Y2);
}
} else if ('0' <= Z489 && Z489 <= '9' || Z489 == '-') {
Z490 = Z400;
INC1(Z490.Y2, Z359);
Z476 = 0;
if (Z489 == '-') {
INC(Z359);
Z489 = Zp1PEAFD_12(&Z225, (Zp1PEAFD_1)Z359);
Z486 = TRUE;
} else {
Z486 = FALSE;
}
for (;;) {
if (!('0' <= Z489 && Z489 <= '9')) {
DEC(Z359);
goto EXIT_6;
}
Z476 = Z476 * 10 + (INTEGER)(ORD(Z489) - ORD('0'));
if (Z359 >= Z482) {
goto EXIT_6;
}
INC(Z359);
Z489 = Zp1PEAFD_12(&Z225, (Zp1PEAFD_1)Z359);
} EXIT_6:;
if (Z486) {
Z476 = -Z476;
}
Z485 = Z476;
if (Z460 > 0 && Z476 > 0) {
DEC1(Z476, Z460);
}
if (Z476 > Z479) {
if (!ZpmCQ_25(ORD('s'), &Zq0A4_61)) {
ZblNKKO_44((STRING)"selector out of bounds", 22L, (LONGCARD)ZblNKKO_17, Z490);
}
}
Z495(Z335, Z476 - Z480);
if (Z483 < Z484) {
ZdaDDADFC_3(Z335, '.');
{
LONGCARD B_45 = Z483, B_46 = Z484;

if (B_45 <= B_46)
for (Z383 = B_45;; Z383 += 1) {
ZdaDDADFC_3(Z335, Zp1PEAFD_12(&Z225, (Zp1PEAFD_1)Z383));
if (Z383 >= B_46) break;
}
}
} else if (0 < Z485) {
Z494(Z335, Z475(Z376, (LONGCARD)Z485));
}
} else if ('A' <= Z489 && Z489 <= 'Z' || 'a' <= Z489 && Z489 <= 'z' || Z489 == '_') {
Z490 = Z400;
INC1(Z490.Y2, Z359);
Zp1PEAFD_4(&Z338);
for (;;) {
if (!('A' <= Z489 && Z489 <= 'Z' || 'a' <= Z489 && Z489 <= 'z' || '0' <= Z489 && Z489 <= '9' || Z489 == '_')) {
DEC(Z359);
goto EXIT_7;
}
Zp1PEAFD_6(&Z338, Z489);
if (Z359 >= Z482) {
goto EXIT_7;
}
INC(Z359);
Z489 = Zp1PEAFD_12(&Z225, (Zp1PEAFD_1)Z359);
} EXIT_7:;
Z474 = Zfb3DLQ_2(&Z338);
Z476 = Z472(Z376->U_1.V_18.Y17.Y18->U_1.V_18.Y17.Y2, Z474);
if (Z476 == 0) {
ZblNKKO_45((STRING)"selector not declared", 21L, (LONGCARD)ZblNKKO_16, Z490, (LONGCARD)ZblNKKO_34, ADR (Z474));
INC(Zq0A4_68);
} else {
DEC1(Z476, Z460);
}
if (Z476 > Z479) {
if (!ZpmCQ_25(ORD('s'), &Zq0A4_61)) {
ZblNKKO_45((STRING)"selector out of bounds", 22L, (LONGCARD)ZblNKKO_17, Z490, (LONGCARD)ZblNKKO_34, ADR (Z474));
}
}
Z495(Z335, Z476 - Z480);
} else if (Z489 == '(') {
INC(Z359);
Z489 = Zp1PEAFD_12(&Z225, (Zp1PEAFD_1)Z359);
Z491 = 0;
while (Z489 != ')') {
Z491 = Z491 * 10 + (CARDINAL)(ORD(Z489) - ORD('0'));
INC(Z359);
Z489 = Zp1PEAFD_12(&Z225, (Zp1PEAFD_1)Z359);
}
Z492 = Zq0A4_100(Z491);
if (Z492 != Zq0A4_2 && Z492->U_1.V_1.Y0 == Zq0A4_6) {
ZdaDDADFC_5(Z335, (LONGINT)Z492->U_1.V_6.Y5.Y4, 0L);
} else {
ZdaDDADFC_4(Z335, (STRING)"? /* ", 5L);
ZdaDDADFC_9(Z335, Z491);
ZdaDDADFC_4(Z335, (STRING)" */", 3L);
}
} else {
ZdaDDADFC_3(Z335, '$');
ZdaDDADFC_3(Z335, Z489);
}
} else if (Z489 == '#' && Z359 < Z482) {
INC(Z359);
Z489 = Zp1PEAFD_12(&Z225, (Zp1PEAFD_1)Z359);
if (Z489 == 'S' || Z489 == 'T' || Z489 == 'B' || Z489 == 'R') {
Z487 = TRUE;
switch (Zq0A4_62) {
case Zq0A4_200:;
if (Z309) {
Z309 = FALSE;
} else {
ZdaDDADFC_4(Z335, (STRING)"END; ", 5L);
}
ZdaDDADFC_4(Z335, (STRING)"IF {", 4L);
for (;;) {
if (Z487) {
Z487 = FALSE;
} else if (Z489 == 'S' || Z489 == 'T' || Z489 == 'B' || Z489 == 'R') {
ZdaDDADFC_4(Z335, (STRING)", ", 2L);
}
switch (Z489) {
case 'S':;
ZdaDDADFC_4(Z335, (STRING)"yystandard", 10L);
break;
case 'T':;
ZdaDDADFC_4(Z335, (STRING)"yytrial", 7L);
break;
case 'B':;
ZdaDDADFC_4(Z335, (STRING)"yybuffer", 8L);
break;
case 'R':;
ZdaDDADFC_4(Z335, (STRING)"yyreparse", 9L);
break;
default:
DEC(Z359);
goto EXIT_8;
break;
}
if (Z359 >= Z482) {
goto EXIT_8;
}
INC(Z359);
Z489 = Zp1PEAFD_12(&Z225, (Zp1PEAFD_1)Z359);
} EXIT_8:;
ZdaDDADFC_4(Z335, (STRING)"} * yyControl.yyMode # {} THEN", 30L);
break;
case Zq0A4_198:;
case Zq0A4_199:;
case Zq0A4_203:;
ZdaDDADFC_4(Z335, (STRING)"} if ((", 7L);
if (Zq0A4_62 == Zq0A4_203) {
ZdaDDADFC_4(Z335, (STRING)"(", 1L);
}
for (;;) {
if (Z487) {
Z487 = FALSE;
} else if (Z489 == 'S' || Z489 == 'T' || Z489 == 'B' || Z489 == 'R') {
ZdaDDADFC_4(Z335, (STRING)" | ", 3L);
}
switch (Z489) {
case 'S':;
ZdaDDADFC_4(Z335, (STRING)"yystandard", 10L);
break;
case 'T':;
ZdaDDADFC_4(Z335, (STRING)"yytrial", 7L);
break;
case 'B':;
ZdaDDADFC_4(Z335, (STRING)"yybuffer", 8L);
break;
case 'R':;
ZdaDDADFC_4(Z335, (STRING)"yyreparse", 9L);
break;
default:
DEC(Z359);
goto EXIT_9;
break;
}
if (Z359 >= Z482) {
goto EXIT_9;
}
INC(Z359);
Z489 = Zp1PEAFD_12(&Z225, (Zp1PEAFD_1)Z359);
} EXIT_9:;
if (Zq0A4_62 == Zq0A4_203) {
ZdaDDADFC_4(Z335, (STRING)") & yyMode) != 0) {", 19L);
} else {
ZdaDDADFC_4(Z335, (STRING)") & yyControl.yyMode) {", 23L);
}
ZdaDDADFC_7(Z335);
break;
case Zq0A4_201:;
if (Z309) {
Z309 = FALSE;
} else {
ZdaDDADFC_4(Z335, (STRING)"end; ", 5L);
}
ZdaDDADFC_4(Z335, (STRING)"if", 2L);
for (;;) {
if (Z487) {
Z487 = FALSE;
} else if (Z489 == 'S' || Z489 == 'T' || Z489 == 'B' || Z489 == 'R') {
ZdaDDADFC_4(Z335, (STRING)" or", 3L);
}
if (Z489 == 'S' || Z489 == 'T' || Z489 == 'B' || Z489 == 'R') {
ZdaDDADFC_4(Z335, (STRING)" yyControlMode = ", 17L);
}
switch (Z489) {
case 'S':;
ZdaDDADFC_4(Z335, (STRING)"yystandard", 10L);
break;
case 'T':;
ZdaDDADFC_4(Z335, (STRING)"yytrial", 7L);
break;
case 'B':;
ZdaDDADFC_4(Z335, (STRING)"yybuffering", 11L);
break;
case 'R':;
ZdaDDADFC_4(Z335, (STRING)"yyreparsing", 11L);
break;
default:
DEC(Z359);
goto EXIT_10;
break;
}
if (Z359 >= Z482) {
goto EXIT_10;
}
INC(Z359);
Z489 = Zp1PEAFD_12(&Z225, (Zp1PEAFD_1)Z359);
} EXIT_10:;
ZdaDDADFC_4(Z335, (STRING)" then", 5L);
break;
case Zq0A4_202:;
if (Z309) {
Z309 = FALSE;
} else {
ZdaDDADFC_4(Z335, (STRING)"end if; ", 8L);
}
ZdaDDADFC_4(Z335, (STRING)"if", 2L);
for (;;) {
if (Z487) {
Z487 = FALSE;
} else if (Z489 == 'S' || Z489 == 'T' || Z489 == 'B' || Z489 == 'R') {
ZdaDDADFC_4(Z335, (STRING)" or", 3L);
ZdaDDADFC_7(Z335);
}
if (Z489 == 'S' || Z489 == 'T' || Z489 == 'B' || Z489 == 'R') {
ZdaDDADFC_4(Z335, (STRING)" yyControl.yyMode = ", 20L);
}
switch (Z489) {
case 'S':;
ZdaDDADFC_4(Z335, (STRING)"yystandard", 10L);
break;
case 'T':;
ZdaDDADFC_4(Z335, (STRING)"yytrial", 7L);
break;
case 'B':;
ZdaDDADFC_4(Z335, (STRING)"yybuffering", 11L);
break;
case 'R':;
ZdaDDADFC_4(Z335, (STRING)"yyreparsing", 11L);
break;
default:
DEC(Z359);
goto EXIT_11;
break;
}
if (Z359 >= Z482) {
goto EXIT_11;
}
INC(Z359);
Z489 = Zp1PEAFD_12(&Z225, (Zp1PEAFD_1)Z359);
} EXIT_11:;
ZdaDDADFC_4(Z335, (STRING)" then", 5L);
break;
}
} else {
ZdaDDADFC_3(Z335, '#');
DEC(Z359);
}
} else {
ZdaDDADFC_3(Z335, Z489);
}
}
INC(Z400.Y1);
Z400.Y2 = 0;
ZdaDDADFC_7(Z335);
}
}

static void Z495
# ifdef HAVE_ARGS
(ZfM_3 Z335, INTEGER Z476)
# else
(Z335, Z476)
ZfM_3 Z335;
INTEGER Z476;
# endif
{
switch (Zq0A4_62) {
case Zq0A4_200:;
ZdaDDADFC_12(Z335, 'A');
ZdaDDADFC_4(Z335, (STRING)"^[yyStackPtr", 12L);
if (Z476 >= 0) {
ZdaDDADFC_4(Z335, (STRING)"+", 1L);
}
ZdaDDADFC_5(Z335, Z476, 0L);
ZdaDDADFC_4(Z335, (STRING)"]", 1L);
break;
case Zq0A4_198:;
case Zq0A4_199:;
ZdaDDADFC_12(Z335, 'A');
ZdaDDADFC_4(Z335, (STRING)" [", 2L);
ZdaDDADFC_5(Z335, Z476 - 1, 0L);
ZdaDDADFC_4(Z335, (STRING)"]", 1L);
break;
case Zq0A4_201:;
ZdaDDADFC_12(Z335, 'A');
ZdaDDADFC_4(Z335, (STRING)".item (yyStackPtr", 17L);
if (Z476 >= 0) {
ZdaDDADFC_4(Z335, (STRING)"+", 1L);
}
ZdaDDADFC_5(Z335, Z476, 0L);
ZdaDDADFC_4(Z335, (STRING)")", 1L);
break;
case Zq0A4_202:;
ZdaDDADFC_12(Z335, 'A');
ZdaDDADFC_4(Z335, (STRING)" (yyStackPtr", 12L);
if (Z476 >= 0) {
ZdaDDADFC_4(Z335, (STRING)"+", 1L);
}
ZdaDDADFC_5(Z335, Z476, 0L);
ZdaDDADFC_4(Z335, (STRING)")", 1L);
break;
case Zq0A4_203:;
ZdaDDADFC_12(Z335, 'A');
ZdaDDADFC_4(Z335, (STRING)" [yyStackPtr", 12L);
if (Z476 >= 0) {
ZdaDDADFC_4(Z335, (STRING)"+", 1L);
}
ZdaDDADFC_5(Z335, Z476, 0L);
ZdaDDADFC_4(Z335, (STRING)"]", 1L);
break;
}
}

static void Z494
# ifdef HAVE_ARGS
(ZfM_3 Z335, Zfb3DLQ_0 Z341)
# else
(Z335, Z341)
ZfM_3 Z335;
Zfb3DLQ_0 Z341;
# endif
{
Zq0A4_35 Z496;

Z496 = Zq0A4_97;
while (Z496 != Zq0A4_2 && Z496->U_1.V_32.Y31.Y2 != Z341) {
Z496 = Z496->U_1.V_32.Y31.Y1;
}
if (Z496 != Zq0A4_2) {
ZdaDDADFC_3(Z335, '.');
ZdaDDADFC_9(Z335, Z496->U_1.V_32.Y31.Y3);
}
}

static void Z379
# ifdef HAVE_ARGS
(ZfM_3 Z335, CARDINAL Z376)
# else
(Z335, Z376)
ZfM_3 Z335;
CARDINAL Z376;
# endif
{
CARDINAL Z359;

{
register Zq0A4_120 *W_20 = &Zq0A4_95->A[Z376]->U_1.V_18.Y17;

ZdaDDADFC_14(Z335, (LONGCARD)W_20->Y16->U_1.V_9.Y8.Y8);
ZdaDDADFC_4(Z335, (STRING)" : ", 3L);
{
LONGCARD B_47 = 1, B_48 = W_20->Y12;

if (B_47 <= B_48)
for (Z359 = B_47;; Z359 += 1) {
ZdaDDADFC_14(Z335, (LONGCARD)W_20->Y17->A[Z359]);
ZdaDDADFC_3(Z335, ' ');
if (Z359 >= B_48) break;
}
}
}
}

static void Z380
# ifdef HAVE_ARGS
(ZfM_3 Z335, CARDINAL Z376)
# else
(Z335, Z376)
ZfM_3 Z335;
CARDINAL Z376;
# endif
{
CARDINAL Z359;

{
register Zq0A4_120 *W_21 = &Zq0A4_95->A[Z376]->U_1.V_18.Y17;

ZdaDDADFC_14(Z335, (LONGCARD)W_21->Y16->U_1.V_9.Y8.Y8);
ZdaDDADFC_4(Z335, (STRING)" : ", 3L);
{
LONGCARD B_49 = 1, B_50 = W_21->Y12;

if (B_49 <= B_50)
for (Z359 = B_49;; Z359 += 1) {
if ((Zq0A4_62 == Zq0A4_198 || Zq0A4_62 == Zq0A4_199) && Zp1PEAFi_4(Zfb3DLQ_4(Zq0A4_93->A[W_21->Y17->A[Z359]]->U_1.V_6.Y5.Y2)) + Z311 > 72) {
ZdaDDADFC_4(Z335, (STRING)"\\", 1L);
ZdaDDADFC_7(Z335);
}
ZdaDDADFC_14(Z335, (LONGCARD)W_21->Y17->A[Z359]);
ZdaDDADFC_3(Z335, ' ');
if (Z359 >= B_50) break;
}
}
}
}

void ZdaDDADFC_14
# ifdef HAVE_ARGS
(ZfM_3 Z335, CARDINAL Z500)
# else
(Z335, Z500)
ZfM_3 Z335;
CARDINAL Z500;
# endif
{
Zp1PEAFD_2 Z225;
CARDINAL Z359;
CHAR Z361;

if (Z500 < Zq0A4_91) {
Zfb3DLQ_3(Zq0A4_93->A[Z500]->U_1.V_6.Y5.Y2, &Z225);
} else {
Zfb3DLQ_3(Zq0A4_93->A[Z500]->U_1.V_9.Y8.Y2, &Z225);
}
switch (Zq0A4_62) {
case Zq0A4_200:;
Z361 = Zp1PEAFD_12(&Z225, 1);
if (Z361 == '"') {
ZdaDDADFC_3(Z335, '\'');
} else {
ZdaDDADFC_3(Z335, Z361);
}
{
LONGCARD B_51 = 2, B_52 = Zp1PEAFD_7(&Z225);

if (B_51 <= B_52)
for (Z359 = B_51;; Z359 += 1) {
Z361 = Zp1PEAFD_12(&Z225, (Zp1PEAFD_1)Z359);
if (Z361 == ')' && Zp1PEAFD_12(&Z225, (Zp1PEAFD_1)(Z359 - 1)) == '*' || Z361 == '*' && Zp1PEAFD_12(&Z225, (Zp1PEAFD_1)(Z359 - 1)) == '(') {
ZdaDDADFC_3(Z335, ' ');
}
if (Z361 == '"') {
ZdaDDADFC_3(Z335, '\'');
} else {
ZdaDDADFC_3(Z335, Z361);
}
if (Z359 >= B_52) break;
}
}
break;
case Zq0A4_198:;
case Zq0A4_199:;
case Zq0A4_203:;
Z361 = Zp1PEAFD_12(&Z225, 1);
if (Z361 == '"') {
ZdaDDADFC_3(Z335, '\\');
}
ZdaDDADFC_3(Z335, Z361);
{
LONGCARD B_53 = 2, B_54 = Zp1PEAFD_7(&Z225);

if (B_53 <= B_54)
for (Z359 = B_53;; Z359 += 1) {
Z361 = Zp1PEAFD_12(&Z225, (Zp1PEAFD_1)Z359);
if (Z361 == '/' && Zp1PEAFD_12(&Z225, (Zp1PEAFD_1)(Z359 - 1)) == '*' || Z361 == '*' && Zp1PEAFD_12(&Z225, (Zp1PEAFD_1)(Z359 - 1)) == '/') {
ZdaDDADFC_3(Z335, ' ');
}
if (Z361 == '"' || Z361 == '\\') {
ZdaDDADFC_3(Z335, '\\');
}
ZdaDDADFC_3(Z335, Z361);
if (Z359 >= B_54) break;
}
}
break;
case Zq0A4_201:;
Z361 = Zp1PEAFD_12(&Z225, 1);
if (Z361 == '"') {
ZdaDDADFC_3(Z335, '%');
}
ZdaDDADFC_3(Z335, Z361);
{
LONGCARD B_55 = 2, B_56 = Zp1PEAFD_7(&Z225);

if (B_55 <= B_56)
for (Z359 = B_55;; Z359 += 1) {
Z361 = Zp1PEAFD_12(&Z225, (Zp1PEAFD_1)Z359);
if (Z361 == '"' || Z361 == '%') {
ZdaDDADFC_3(Z335, '%');
}
ZdaDDADFC_3(Z335, Z361);
if (Z359 >= B_56) break;
}
}
break;
case Zq0A4_202:;
{
LONGCARD B_57 = 1, B_58 = Zp1PEAFD_7(&Z225);

if (B_57 <= B_58)
for (Z359 = B_57;; Z359 += 1) {
Z361 = Zp1PEAFD_12(&Z225, (Zp1PEAFD_1)Z359);
ZdaDDADFC_3(Z335, Z361);
if (Z361 == '"') {
ZdaDDADFC_3(Z335, '"');
}
if (Z359 >= B_58) break;
}
}
break;
}
}

static void Z417
# ifdef HAVE_ARGS
(ZfM_3 Z314)
# else
(Z314)
ZfM_3 Z314;
# endif
{
CARDINAL Z359, Z489;
Zmfy8_0 Z501;

switch (Zq0A4_62) {
case Zq0A4_200:;
Zmfy8_4(&Z501, Z314);
{
LONGCARD B_59 = 1, B_60 = ZggFGLABP_11;

if (B_59 <= B_60)
for (Z359 = B_59;; Z359 += 1) {
Zmfy8_6(Z501, ZggFGLABP_14->A[Z359]);
if (Z359 >= B_60) break;
}
}
Zmfy8_8(&Z501);
break;
case Zq0A4_198:;
case Zq0A4_199:;
Z489 = 0;
{
LONGCARD B_61 = 1, B_62 = ZggFGLABP_11;

if (B_61 <= B_62)
for (Z359 = B_61;; Z359 += 1) {
ZdaDDADFC_4(Z314, (STRING)"& yyTComb [", 11L);
ZdaDDADFC_5(Z314, (LONGINT)ZggFGLABP_14->A[Z359], 4L);
ZdaDDADFC_4(Z314, (STRING)"], ", 3L);
INC(Z489);
if (Z489 == 4) {
Z489 = 0;
ZdaDDADFC_7(Z314);
}
if (Z359 >= B_62) break;
}
}
if (Z489 > 0) {
ZdaDDADFC_7(Z314);
}
break;
case Zq0A4_202:;
Z489 = 0;
{
LONGCARD B_63 = 1, B_64 = ZggFGLABP_11;

if (B_63 <= B_64)
for (Z359 = B_63;; Z359 += 1) {
ZdaDDADFC_5(Z314, (LONGINT)ZggFGLABP_14->A[Z359], 5L);
if (Z359 != ZggFGLABP_11) {
ZdaDDADFC_4(Z314, (STRING)", ", 2L);
}
INC(Z489);
if (Z489 == 10) {
Z489 = 0;
ZdaDDADFC_7(Z314);
}
if (Z359 >= B_64) break;
}
}
if (Z489 > 0) {
ZdaDDADFC_7(Z314);
}
break;
case Zq0A4_203:;
if (Z301) {
ZdaDDADFC_4(Z314, (STRING)"    private static final int [] yyTBase = { 0,", 46L);
ZdaDDADFC_7(Z314);
Z489 = 0;
{
LONGCARD B_65 = 1, B_66 = ZggFGLABP_11;

if (B_65 <= B_66)
for (Z359 = B_65;; Z359 += 1) {
ZdaDDADFC_5(Z314, (LONGINT)ZggFGLABP_14->A[Z359], 5L);
ZdaDDADFC_4(Z314, (STRING)", ", 2L);
INC(Z489);
if (Z489 == 10) {
Z489 = 0;
ZdaDDADFC_7(Z314);
}
if (Z359 >= B_66) break;
}
}
if (Z489 > 0) {
ZdaDDADFC_7(Z314);
}
ZdaDDADFC_4(Z314, (STRING)"    };", 6L);
ZdaDDADFC_7(Z314);
} else if (ZggFGLABP_11 >= Z302) {
ZdaDDADFC_4(Z314, (STRING)"    private static int [] yyTBase = new int [", 45L);
ZdaDDADFC_5(Z314, (LONGINT)(ZggFGLABP_11 + 1), 0L);
ZdaDDADFC_4(Z314, (STRING)"];", 2L);
ZdaDDADFC_7(Z314);
} else {
ZdaDDADFC_4(Z314, (STRING)"    private static int [] yyTBase = ", 36L);
ZdaDDADFC_9(Z314, Z312);
ZdaDDADFC_4(Z314, (STRING)"_TBase1.yy;", 11L);
ZdaDDADFC_7(Z314);
}
break;
}
}

static void Z418
# ifdef HAVE_ARGS
(ZfM_3 Z314)
# else
(Z314)
ZfM_3 Z314;
# endif
{
CARDINAL Z359, Z489;
Zmfy8_0 Z501;

switch (Zq0A4_62) {
case Zq0A4_200:;
Zmfy8_4(&Z501, Z314);
{
LONGCARD B_67 = 1, B_68 = ZggFGLABP_11;

if (B_67 <= B_68)
for (Z359 = B_67;; Z359 += 1) {
Zmfy8_6(Z501, ZggFGLABP_22->A[Z359]);
if (Z359 >= B_68) break;
}
}
Zmfy8_8(&Z501);
break;
case Zq0A4_198:;
case Zq0A4_199:;
Z489 = 0;
{
LONGCARD B_69 = 1, B_70 = ZggFGLABP_11;

if (B_69 <= B_70)
for (Z359 = B_69;; Z359 += 1) {
ZdaDDADFC_4(Z314, (STRING)"& yyNComb [", 11L);
ZdaDDADFC_5(Z314, (INTEGER)ZggFGLABP_22->A[Z359] - (INTEGER)ZpmC89LG6_3 - 1, 4L);
ZdaDDADFC_4(Z314, (STRING)"], ", 3L);
INC(Z489);
if (Z489 == 4) {
Z489 = 0;
ZdaDDADFC_7(Z314);
}
if (Z359 >= B_70) break;
}
}
if (Z489 > 0) {
ZdaDDADFC_7(Z314);
}
break;
case Zq0A4_202:;
Z489 = 0;
{
LONGCARD B_71 = 1, B_72 = ZggFGLABP_11;

if (B_71 <= B_72)
for (Z359 = B_71;; Z359 += 1) {
ZdaDDADFC_5(Z314, (LONGINT)ZggFGLABP_22->A[Z359], 5L);
if (Z359 != ZggFGLABP_11) {
ZdaDDADFC_4(Z314, (STRING)", ", 2L);
}
INC(Z489);
if (Z489 == 10) {
Z489 = 0;
ZdaDDADFC_7(Z314);
}
if (Z359 >= B_72) break;
}
}
if (Z489 > 0) {
ZdaDDADFC_7(Z314);
}
break;
case Zq0A4_203:;
if (Z301) {
ZdaDDADFC_4(Z314, (STRING)"    private static final int [] yyNBase = { 0,", 46L);
ZdaDDADFC_7(Z314);
Z489 = 0;
{
LONGCARD B_73 = 1, B_74 = ZggFGLABP_11;

if (B_73 <= B_74)
for (Z359 = B_73;; Z359 += 1) {
ZdaDDADFC_5(Z314, (INTEGER)ZggFGLABP_22->A[Z359] - (INTEGER)ZpmC89LG6_3 - 1, 5L);
ZdaDDADFC_4(Z314, (STRING)", ", 2L);
INC(Z489);
if (Z489 == 10) {
Z489 = 0;
ZdaDDADFC_7(Z314);
}
if (Z359 >= B_74) break;
}
}
if (Z489 != 0) {
ZdaDDADFC_7(Z314);
}
ZdaDDADFC_4(Z314, (STRING)"    };", 6L);
ZdaDDADFC_7(Z314);
} else if (ZggFGLABP_11 >= Z302) {
ZdaDDADFC_4(Z314, (STRING)"    private static int [] yyNBase = new int [", 45L);
ZdaDDADFC_5(Z314, (LONGINT)(ZggFGLABP_11 + 1), 0L);
ZdaDDADFC_4(Z314, (STRING)"];", 2L);
ZdaDDADFC_7(Z314);
} else {
ZdaDDADFC_4(Z314, (STRING)"    private static int [] yyNBase = ", 36L);
ZdaDDADFC_9(Z314, Z312);
ZdaDDADFC_4(Z314, (STRING)"_NBase1.yy;", 11L);
ZdaDDADFC_7(Z314);
}
break;
}
}

static void Z419
# ifdef HAVE_ARGS
(ZfM_3 Z314)
# else
(Z314)
ZfM_3 Z314;
# endif
{
CARDINAL Z359, Z489;
Zmfy8_0 Z501;

switch (Zq0A4_62) {
case Zq0A4_200:;
Zmfy8_4(&Z501, Z314);
{
LONGCARD B_75 = 1, B_76 = ZggFGLABP_11;

if (B_75 <= B_76)
for (Z359 = B_75;; Z359 += 1) {
Zmfy8_6(Z501, ZggFGLABP_39((LONGCARD)ZggFGLABP_15->A[Z359]));
if (Z359 >= B_76) break;
}
}
Zmfy8_8(&Z501);
break;
case Zq0A4_198:;
case Zq0A4_199:;
Z489 = 0;
{
LONGCARD B_77 = 1, B_78 = ZggFGLABP_11;

if (B_77 <= B_78)
for (Z359 = B_77;; Z359 += 1) {
ZdaDDADFC_5(Z314, (LONGINT)ZggFGLABP_39((LONGCARD)ZggFGLABP_15->A[Z359]), 5L);
ZdaDDADFC_4(Z314, (STRING)", ", 2L);
INC(Z489);
if (Z489 == 10) {
Z489 = 0;
ZdaDDADFC_7(Z314);
}
if (Z359 >= B_78) break;
}
}
if (Z489 > 0) {
ZdaDDADFC_7(Z314);
}
break;
case Zq0A4_202:;
Z489 = 0;
{
LONGCARD B_79 = 1, B_80 = ZggFGLABP_11;

if (B_79 <= B_80)
for (Z359 = B_79;; Z359 += 1) {
ZdaDDADFC_5(Z314, (LONGINT)ZggFGLABP_39((LONGCARD)ZggFGLABP_15->A[Z359]), 5L);
if (Z359 != ZggFGLABP_11) {
ZdaDDADFC_4(Z314, (STRING)", ", 2L);
}
INC(Z489);
if (Z489 == 10) {
Z489 = 0;
ZdaDDADFC_7(Z314);
}
if (Z359 >= B_80) break;
}
}
if (Z489 > 0) {
ZdaDDADFC_7(Z314);
}
break;
case Zq0A4_203:;
if (Z301) {
ZdaDDADFC_4(Z314, (STRING)"    private static final int [] yyTDefault = { 0,", 49L);
ZdaDDADFC_7(Z314);
Z489 = 0;
{
LONGCARD B_81 = 1, B_82 = ZggFGLABP_11;

if (B_81 <= B_82)
for (Z359 = B_81;; Z359 += 1) {
ZdaDDADFC_5(Z314, (LONGINT)ZggFGLABP_39((LONGCARD)ZggFGLABP_15->A[Z359]), 5L);
ZdaDDADFC_4(Z314, (STRING)", ", 2L);
INC(Z489);
if (Z489 == 10) {
Z489 = 0;
ZdaDDADFC_7(Z314);
}
if (Z359 >= B_82) break;
}
}
if (Z489 > 0) {
ZdaDDADFC_7(Z314);
}
ZdaDDADFC_4(Z314, (STRING)"    };", 6L);
ZdaDDADFC_7(Z314);
} else if (ZggFGLABP_11 >= Z302) {
ZdaDDADFC_4(Z314, (STRING)"    private static int [] yyTDefault = new int [", 48L);
ZdaDDADFC_5(Z314, (LONGINT)(ZggFGLABP_11 + 1), 0L);
ZdaDDADFC_4(Z314, (STRING)"];", 2L);
ZdaDDADFC_7(Z314);
} else {
ZdaDDADFC_4(Z314, (STRING)"    private static int [] yyTDefault = ", 39L);
ZdaDDADFC_9(Z314, Z312);
ZdaDDADFC_4(Z314, (STRING)"_TDefault1.yy;", 14L);
ZdaDDADFC_7(Z314);
}
break;
}
}

static void Z420
# ifdef HAVE_ARGS
(ZfM_3 Z314)
# else
(Z314)
ZfM_3 Z314;
# endif
{
CARDINAL Z359, Z489;
Zmfy8_0 Z501;

switch (Zq0A4_62) {
case Zq0A4_200:;
Zmfy8_4(&Z501, Z314);
{
LONGCARD B_83 = 1, B_84 = ZggFGLABP_11;

if (B_83 <= B_84)
for (Z359 = B_83;; Z359 += 1) {
Zmfy8_6(Z501, (LONGCARD)ZiS8_14->A[ZggFGLABP_23->A[Z359]].Y5);
if (Z359 >= B_84) break;
}
}
Zmfy8_8(&Z501);
break;
case Zq0A4_198:;
case Zq0A4_199:;
Z489 = 0;
{
LONGCARD B_85 = 1, B_86 = ZggFGLABP_11;

if (B_85 <= B_86)
for (Z359 = B_85;; Z359 += 1) {
ZdaDDADFC_5(Z314, (LONGINT)ZiS8_14->A[ZggFGLABP_23->A[Z359]].Y5, 5L);
ZdaDDADFC_4(Z314, (STRING)", ", 2L);
INC(Z489);
if (Z489 == 10) {
Z489 = 0;
ZdaDDADFC_7(Z314);
}
if (Z359 >= B_86) break;
}
}
if (Z489 > 0) {
ZdaDDADFC_7(Z314);
}
break;
case Zq0A4_202:;
Z489 = 0;
{
LONGCARD B_87 = 1, B_88 = ZggFGLABP_11;

if (B_87 <= B_88)
for (Z359 = B_87;; Z359 += 1) {
ZdaDDADFC_5(Z314, (LONGINT)ZiS8_14->A[ZggFGLABP_23->A[Z359]].Y5, 5L);
if (Z359 != ZggFGLABP_11) {
ZdaDDADFC_4(Z314, (STRING)", ", 2L);
}
INC(Z489);
if (Z489 == 10) {
Z489 = 0;
ZdaDDADFC_7(Z314);
}
if (Z359 >= B_88) break;
}
}
if (Z489 > 0) {
ZdaDDADFC_7(Z314);
}
break;
case Zq0A4_203:;
if (Z301) {
ZdaDDADFC_4(Z314, (STRING)"    private static final int [] yyNDefault = { 0,", 49L);
ZdaDDADFC_7(Z314);
Z489 = 0;
{
LONGCARD B_89 = 1, B_90 = ZggFGLABP_11;

if (B_89 <= B_90)
for (Z359 = B_89;; Z359 += 1) {
ZdaDDADFC_5(Z314, (LONGINT)ZiS8_14->A[ZggFGLABP_23->A[Z359]].Y5, 5L);
ZdaDDADFC_4(Z314, (STRING)", ", 2L);
INC(Z489);
if (Z489 == 10) {
Z489 = 0;
ZdaDDADFC_7(Z314);
}
if (Z359 >= B_90) break;
}
}
if (Z489 > 0) {
ZdaDDADFC_7(Z314);
}
ZdaDDADFC_4(Z314, (STRING)"    };", 6L);
ZdaDDADFC_7(Z314);
} else if (ZggFGLABP_11 >= Z302) {
ZdaDDADFC_4(Z314, (STRING)"    private static int [] yyNDefault = new int [", 48L);
ZdaDDADFC_5(Z314, (LONGINT)(ZggFGLABP_11 + 1), 0L);
ZdaDDADFC_4(Z314, (STRING)"];", 2L);
ZdaDDADFC_7(Z314);
} else {
ZdaDDADFC_4(Z314, (STRING)"    private static int [] yyNDefault = ", 39L);
ZdaDDADFC_9(Z314, Z312);
ZdaDDADFC_4(Z314, (STRING)"_NDefault1.yy;", 14L);
ZdaDDADFC_7(Z314);
}
break;
}
}

static void Z421
# ifdef HAVE_ARGS
(ZfM_3 Z314)
# else
(Z314)
ZfM_3 Z314;
# endif
{
CARDINAL Z359, Z489;
Zmfy8_0 Z501;

switch (Zq0A4_62) {
case Zq0A4_200:;
Zmfy8_4(&Z501, Z314);
{
LONGCARD B_91 = 0, B_92 = ZggFGLABP_20;

if (B_91 <= B_92)
for (Z359 = B_91;; Z359 += 1) {
Zmfy8_6(Z501, (LONGCARD)ZggFGLABP_13->A[Z359].Y0);
Zmfy8_6(Z501, (LONGCARD)ZggFGLABP_13->A[Z359].Y1);
if (Z359 >= B_92) break;
}
}
Zmfy8_8(&Z501);
break;
case Zq0A4_198:;
case Zq0A4_199:;
Z489 = 0;
{
LONGCARD B_93 = 0, B_94 = ZggFGLABP_20;

if (B_93 <= B_94)
for (Z359 = B_93;; Z359 += 1) {
ZdaDDADFC_3(Z314, '{');
ZdaDDADFC_5(Z314, (LONGINT)ZggFGLABP_13->A[Z359].Y0, 4L);
ZdaDDADFC_4(Z314, (STRING)", ", 2L);
ZdaDDADFC_5(Z314, (LONGINT)ZggFGLABP_13->A[Z359].Y1, 4L);
ZdaDDADFC_4(Z314, (STRING)"}, ", 3L);
INC(Z489);
if (Z489 == 5) {
Z489 = 0;
ZdaDDADFC_7(Z314);
}
if (Z359 >= B_94) break;
}
}
if (Z489 > 0) {
ZdaDDADFC_7(Z314);
}
break;
case Zq0A4_202:;
Z489 = 0;
{
LONGCARD B_95 = 0, B_96 = ZggFGLABP_20;

if (B_95 <= B_96)
for (Z359 = B_95;; Z359 += 1) {
ZdaDDADFC_3(Z314, '(');
ZdaDDADFC_5(Z314, (LONGINT)ZggFGLABP_13->A[Z359].Y0, 4L);
ZdaDDADFC_4(Z314, (STRING)", ", 2L);
ZdaDDADFC_5(Z314, (LONGINT)ZggFGLABP_13->A[Z359].Y1, 4L);
ZdaDDADFC_3(Z314, ')');
if (Z359 != ZggFGLABP_20) {
ZdaDDADFC_4(Z314, (STRING)", ", 2L);
}
INC(Z489);
if (Z489 == 5) {
Z489 = 0;
ZdaDDADFC_7(Z314);
}
if (Z359 >= B_96) break;
}
}
if (Z489 > 0) {
ZdaDDADFC_7(Z314);
}
break;
case Zq0A4_203:;
if (Z301) {
ZdaDDADFC_4(Z314, (STRING)"    private static final int [] yyTCombCheck = {", 48L);
ZdaDDADFC_7(Z314);
Z489 = 0;
{
LONGCARD B_97 = 0, B_98 = ZggFGLABP_20;

if (B_97 <= B_98)
for (Z359 = B_97;; Z359 += 1) {
ZdaDDADFC_5(Z314, (LONGINT)ZggFGLABP_13->A[Z359].Y0, 5L);
ZdaDDADFC_4(Z314, (STRING)", ", 2L);
INC(Z489);
if (Z489 == 10) {
Z489 = 0;
ZdaDDADFC_7(Z314);
}
if (Z359 >= B_98) break;
}
}
if (Z489 > 0) {
ZdaDDADFC_7(Z314);
}
ZdaDDADFC_4(Z314, (STRING)"    };", 6L);
ZdaDDADFC_7(Z314);
ZdaDDADFC_4(Z314, (STRING)"    private static final int [] yyTCombNext = {", 47L);
ZdaDDADFC_7(Z314);
Z489 = 0;
{
LONGCARD B_99 = 0, B_100 = ZggFGLABP_20;

if (B_99 <= B_100)
for (Z359 = B_99;; Z359 += 1) {
ZdaDDADFC_5(Z314, (LONGINT)ZggFGLABP_13->A[Z359].Y1, 5L);
ZdaDDADFC_4(Z314, (STRING)", ", 2L);
INC(Z489);
if (Z489 == 10) {
Z489 = 0;
ZdaDDADFC_7(Z314);
}
if (Z359 >= B_100) break;
}
}
if (Z489 > 0) {
ZdaDDADFC_7(Z314);
}
ZdaDDADFC_4(Z314, (STRING)"    };", 6L);
ZdaDDADFC_7(Z314);
} else if (ZggFGLABP_20 >= Z302) {
ZdaDDADFC_4(Z314, (STRING)"    private static int [] yyTCombCheck = new int [", 50L);
ZdaDDADFC_5(Z314, (LONGINT)(ZggFGLABP_20 + 1), 0L);
ZdaDDADFC_4(Z314, (STRING)"];", 2L);
ZdaDDADFC_7(Z314);
ZdaDDADFC_4(Z314, (STRING)"    private static int [] yyTCombNext  = new int [", 50L);
ZdaDDADFC_5(Z314, (LONGINT)(ZggFGLABP_20 + 1), 0L);
ZdaDDADFC_4(Z314, (STRING)"];", 2L);
ZdaDDADFC_7(Z314);
} else {
ZdaDDADFC_4(Z314, (STRING)"    private static int [] yyTCombCheck = ", 41L);
ZdaDDADFC_9(Z314, Z312);
ZdaDDADFC_4(Z314, (STRING)"_TCombCheck1.yy;", 16L);
ZdaDDADFC_7(Z314);
ZdaDDADFC_4(Z314, (STRING)"    private static int [] yyTCombNext  = ", 41L);
ZdaDDADFC_9(Z314, Z312);
ZdaDDADFC_4(Z314, (STRING)"_TCombNext1.yy;", 15L);
ZdaDDADFC_7(Z314);
}
break;
}
}

static void Z424
# ifdef HAVE_ARGS
(ZfM_3 Z314)
# else
(Z314)
ZfM_3 Z314;
# endif
{
CARDINAL Z359, Z489;
Zmfy8_0 Z501;

switch (Zq0A4_62) {
case Zq0A4_200:;
Zmfy8_4(&Z501, Z314);
{
LONGCARD B_101 = ZpmC89LG6_3 + 1, B_102 = ZggFGLABP_28;

if (B_101 <= B_102)
for (Z359 = B_101;; Z359 += 1) {
Zmfy8_6(Z501, (LONGCARD)ZggFGLABP_21->A[Z359].Y1);
if (Z359 >= B_102) break;
}
}
Zmfy8_8(&Z501);
break;
case Zq0A4_198:;
case Zq0A4_199:;
case Zq0A4_203:;
Z489 = 0;
{
LONGCARD B_103 = ZpmC89LG6_3 + 1, B_104 = ZggFGLABP_28;

if (B_103 <= B_104)
for (Z359 = B_103;; Z359 += 1) {
ZdaDDADFC_5(Z314, (LONGINT)ZggFGLABP_21->A[Z359].Y1, 5L);
ZdaDDADFC_4(Z314, (STRING)", ", 2L);
INC(Z489);
if (Z489 == 10) {
Z489 = 0;
ZdaDDADFC_7(Z314);
}
if (Z359 >= B_104) break;
}
}
if (Z489 > 0) {
ZdaDDADFC_7(Z314);
}
break;
case Zq0A4_202:;
Z489 = 0;
{
LONGCARD B_105 = ZpmC89LG6_3 + 1, B_106 = ZggFGLABP_28;

if (B_105 <= B_106)
for (Z359 = B_105;; Z359 += 1) {
ZdaDDADFC_5(Z314, (LONGINT)ZggFGLABP_21->A[Z359].Y1, 5L);
if (Z359 != ZggFGLABP_28) {
ZdaDDADFC_4(Z314, (STRING)", ", 2L);
}
INC(Z489);
if (Z489 == 10) {
Z489 = 0;
ZdaDDADFC_7(Z314);
}
if (Z359 >= B_106) break;
}
}
if (Z489 > 0) {
ZdaDDADFC_7(Z314);
}
break;
}
}

static void Z425
# ifdef HAVE_ARGS
(ZfM_3 Z314)
# else
(Z314)
ZfM_3 Z314;
# endif
{
CARDINAL Z359, Z489;
Zmfy8_0 Z501;

switch (Zq0A4_62) {
case Zq0A4_200:;
Zmfy8_4(&Z501, Z314);
{
LONGCARD B_107 = ZpmC89LG6_3 + 1, B_108 = ZggFGLABP_28;

if (B_107 <= B_108)
for (Z359 = B_107;; Z359 += 1) {
Zmfy8_6(Z501, (LONGCARD)ZggFGLABP_21->A[Z359].Y0);
Zmfy8_6(Z501, (LONGCARD)ZggFGLABP_21->A[Z359].Y1);
if (Z359 >= B_108) break;
}
}
Zmfy8_8(&Z501);
break;
case Zq0A4_198:;
case Zq0A4_199:;
Z489 = 0;
{
LONGCARD B_109 = ZpmC89LG6_3 + 1, B_110 = ZggFGLABP_28;

if (B_109 <= B_110)
for (Z359 = B_109;; Z359 += 1) {
ZdaDDADFC_3(Z314, '{');
ZdaDDADFC_5(Z314, (LONGINT)ZggFGLABP_21->A[Z359].Y0, 4L);
ZdaDDADFC_4(Z314, (STRING)", ", 2L);
ZdaDDADFC_5(Z314, (LONGINT)ZggFGLABP_21->A[Z359].Y1, 4L);
ZdaDDADFC_4(Z314, (STRING)"}, ", 3L);
INC(Z489);
if (Z489 == 5) {
Z489 = 0;
ZdaDDADFC_7(Z314);
}
if (Z359 >= B_110) break;
}
}
if (Z489 > 0) {
ZdaDDADFC_7(Z314);
}
break;
case Zq0A4_202:;
Z489 = 0;
{
LONGCARD B_111 = ZpmC89LG6_3 + 1, B_112 = ZggFGLABP_28;

if (B_111 <= B_112)
for (Z359 = B_111;; Z359 += 1) {
ZdaDDADFC_3(Z314, '(');
ZdaDDADFC_5(Z314, (LONGINT)ZggFGLABP_21->A[Z359].Y0, 4L);
ZdaDDADFC_4(Z314, (STRING)", ", 2L);
ZdaDDADFC_5(Z314, (LONGINT)ZggFGLABP_21->A[Z359].Y1, 4L);
ZdaDDADFC_3(Z314, ')');
if (Z359 != ZggFGLABP_28) {
ZdaDDADFC_4(Z314, (STRING)", ", 2L);
}
INC(Z489);
if (Z489 == 5) {
Z489 = 0;
ZdaDDADFC_7(Z314);
}
if (Z359 >= B_112) break;
}
}
if (Z489 > 0) {
ZdaDDADFC_7(Z314);
}
break;
case Zq0A4_203:;
if (Z301) {
ZdaDDADFC_4(Z314, (STRING)"    private static final int [] yyNCombCheck = {", 48L);
ZdaDDADFC_7(Z314);
Z489 = 0;
{
LONGCARD B_113 = ZpmC89LG6_3 + 1, B_114 = ZggFGLABP_28;

if (B_113 <= B_114)
for (Z359 = B_113;; Z359 += 1) {
ZdaDDADFC_5(Z314, (LONGINT)ZggFGLABP_21->A[Z359].Y0, 5L);
ZdaDDADFC_4(Z314, (STRING)", ", 2L);
INC(Z489);
if (Z489 == 10) {
Z489 = 0;
ZdaDDADFC_7(Z314);
}
if (Z359 >= B_114) break;
}
}
if (Z489 > 0) {
ZdaDDADFC_7(Z314);
}
ZdaDDADFC_4(Z314, (STRING)"    };", 6L);
ZdaDDADFC_7(Z314);
ZdaDDADFC_7(Z314);
ZdaDDADFC_4(Z314, (STRING)"    private static final int [] yyNCombNext = {", 47L);
ZdaDDADFC_7(Z314);
Z489 = 0;
{
LONGCARD B_115 = ZpmC89LG6_3 + 1, B_116 = ZggFGLABP_28;

if (B_115 <= B_116)
for (Z359 = B_115;; Z359 += 1) {
ZdaDDADFC_5(Z314, (LONGINT)ZggFGLABP_21->A[Z359].Y1, 5L);
ZdaDDADFC_4(Z314, (STRING)", ", 2L);
INC(Z489);
if (Z489 == 10) {
Z489 = 0;
ZdaDDADFC_7(Z314);
}
if (Z359 >= B_116) break;
}
}
if (Z489 > 0) {
ZdaDDADFC_7(Z314);
}
ZdaDDADFC_4(Z314, (STRING)"    };", 6L);
ZdaDDADFC_7(Z314);
} else if (ZggFGLABP_28 - ZpmC89LG6_3 > Z302) {
ZdaDDADFC_4(Z314, (STRING)"    private static int [] yyNCombCheck = new int [", 50L);
ZdaDDADFC_5(Z314, (LONGINT)(ZggFGLABP_28 - ZpmC89LG6_3), 0L);
ZdaDDADFC_4(Z314, (STRING)"];", 2L);
ZdaDDADFC_7(Z314);
ZdaDDADFC_4(Z314, (STRING)"    private static int [] yyNCombNext  = new int [", 50L);
ZdaDDADFC_5(Z314, (LONGINT)(ZggFGLABP_28 - ZpmC89LG6_3), 0L);
ZdaDDADFC_4(Z314, (STRING)"];", 2L);
ZdaDDADFC_7(Z314);
} else {
ZdaDDADFC_4(Z314, (STRING)"    private static int [] yyNCombCheck = ", 41L);
ZdaDDADFC_9(Z314, Z312);
ZdaDDADFC_4(Z314, (STRING)"_NCombCheck1.yy;", 16L);
ZdaDDADFC_7(Z314);
ZdaDDADFC_4(Z314, (STRING)"    private static int [] yyNCombNext  = ", 41L);
ZdaDDADFC_9(Z314, Z312);
ZdaDDADFC_4(Z314, (STRING)"_NCombNext1.yy;", 15L);
ZdaDDADFC_7(Z314);
}
break;
}
}

static void Z426
# ifdef HAVE_ARGS
(ZfM_3 Z314)
# else
(Z314)
ZfM_3 Z314;
# endif
{
CARDINAL Z359, Z489;
Zmfy8_0 Z501;

switch (Zq0A4_62) {
case Zq0A4_200:;
Zmfy8_4(&Z501, Z314);
{
LONGCARD B_117 = 1, B_118 = ZpmC89LG6_2;

if (B_117 <= B_118)
for (Z359 = B_117;; Z359 += 1) {
{
register Zq0A4_120 *W_22 = &Zq0A4_95->A[Z359]->U_1.V_18.Y17;

if (IN(Zq0A4_47, W_22->Y16->U_1.V_9.Y8.Y5)) {
Zmfy8_6(Z501, (LONGCARD)W_22->Y12);
}
}
if (Z359 >= B_118) break;
}
}
Zmfy8_8(&Z501);
break;
case Zq0A4_198:;
case Zq0A4_199:;
Z489 = 0;
{
LONGCARD B_119 = 1, B_120 = ZpmC89LG6_2;

if (B_119 <= B_120)
for (Z359 = B_119;; Z359 += 1) {
{
register Zq0A4_120 *W_23 = &Zq0A4_95->A[Z359]->U_1.V_18.Y17;

if (IN(Zq0A4_47, W_23->Y16->U_1.V_9.Y8.Y5)) {
ZdaDDADFC_5(Z314, (LONGINT)W_23->Y12, 5L);
ZdaDDADFC_4(Z314, (STRING)", ", 2L);
INC(Z489);
if (Z489 == 10) {
Z489 = 0;
ZdaDDADFC_7(Z314);
}
}
}
if (Z359 >= B_120) break;
}
}
if (Z489 > 0) {
ZdaDDADFC_7(Z314);
}
break;
case Zq0A4_202:;
Z489 = 0;
{
LONGCARD B_121 = 1, B_122 = ZpmC89LG6_2;

if (B_121 <= B_122)
for (Z359 = B_121;; Z359 += 1) {
{
register Zq0A4_120 *W_24 = &Zq0A4_95->A[Z359]->U_1.V_18.Y17;

if (IN(Zq0A4_47, W_24->Y16->U_1.V_9.Y8.Y5)) {
ZdaDDADFC_5(Z314, (LONGINT)W_24->Y12, 5L);
if (Z359 != ZpmC89LG6_2) {
ZdaDDADFC_4(Z314, (STRING)", ", 2L);
}
INC(Z489);
if (Z489 == 10) {
Z489 = 0;
ZdaDDADFC_7(Z314);
}
}
}
if (Z359 >= B_122) break;
}
}
if (Z489 > 0) {
ZdaDDADFC_7(Z314);
}
break;
case Zq0A4_203:;
if (Z301) {
ZdaDDADFC_4(Z314, (STRING)"    private static final int [] yyLength = {", 44L);
ZdaDDADFC_7(Z314);
Z489 = 0;
{
LONGCARD B_123 = 1, B_124 = ZpmC89LG6_2;

if (B_123 <= B_124)
for (Z359 = B_123;; Z359 += 1) {
{
register Zq0A4_120 *W_25 = &Zq0A4_95->A[Z359]->U_1.V_18.Y17;

if (IN(Zq0A4_47, W_25->Y16->U_1.V_9.Y8.Y5)) {
ZdaDDADFC_5(Z314, (LONGINT)W_25->Y12, 5L);
ZdaDDADFC_4(Z314, (STRING)", ", 2L);
INC(Z489);
if (Z489 == 10) {
Z489 = 0;
ZdaDDADFC_7(Z314);
}
}
}
if (Z359 >= B_124) break;
}
}
if (Z489 > 0) {
ZdaDDADFC_7(Z314);
}
ZdaDDADFC_4(Z314, (STRING)"    };", 6L);
ZdaDDADFC_7(Z314);
} else if (ZpmC89LG6_2 > Z302) {
ZdaDDADFC_4(Z314, (STRING)"    private static int [] yyLength = new int [", 46L);
ZdaDDADFC_5(Z314, (LONGINT)ZpmC89LG6_2, 0L);
ZdaDDADFC_4(Z314, (STRING)"];", 2L);
ZdaDDADFC_7(Z314);
} else {
ZdaDDADFC_4(Z314, (STRING)"    private static int [] yyLength = ", 37L);
ZdaDDADFC_9(Z314, Z312);
ZdaDDADFC_4(Z314, (STRING)"_Length1.yy;", 12L);
ZdaDDADFC_7(Z314);
}
break;
}
}

static void Z427
# ifdef HAVE_ARGS
(ZfM_3 Z314)
# else
(Z314)
ZfM_3 Z314;
# endif
{
CARDINAL Z359;
Zmfy8_0 Z501;

switch (Zq0A4_62) {
case Zq0A4_200:;
Zmfy8_4(&Z501, Z314);
{
LONGCARD B_125 = 1, B_126 = ZpmC89LG6_2;

if (B_125 <= B_126)
for (Z359 = B_125;; Z359 += 1) {
{
register Zq0A4_111 *W_26 = &Zq0A4_95->A[Z359]->U_1.V_18.Y17.Y16->U_1.V_9.Y8;

if (IN(Zq0A4_47, W_26->Y5)) {
Zmfy8_6(Z501, ZggFGLABP_37((LONGCARD)W_26->Y8));
}
}
if (Z359 >= B_126) break;
}
}
Zmfy8_8(&Z501);
break;
case Zq0A4_198:;
case Zq0A4_199:;
{
LONGCARD B_127 = 1, B_128 = ZpmC89LG6_2;

if (B_127 <= B_128)
for (Z359 = B_127;; Z359 += 1) {
{
register Zq0A4_111 *W_27 = &Zq0A4_95->A[Z359]->U_1.V_18.Y17.Y16->U_1.V_9.Y8;

if (IN(Zq0A4_47, W_27->Y5)) {
ZdaDDADFC_4(Z314, (STRING)"yyNT", 4L);
ZdaDDADFC_9(Z314, W_27->Y2);
ZdaDDADFC_3(Z314, ',');
ZdaDDADFC_7(Z314);
}
}
if (Z359 >= B_128) break;
}
}
break;
case Zq0A4_202:;
{
LONGCARD B_129 = 1, B_130 = ZpmC89LG6_2;

if (B_129 <= B_130)
for (Z359 = B_129;; Z359 += 1) {
{
register Zq0A4_111 *W_28 = &Zq0A4_95->A[Z359]->U_1.V_18.Y17.Y16->U_1.V_9.Y8;

if (IN(Zq0A4_47, W_28->Y5)) {
ZdaDDADFC_4(Z314, (STRING)"yyNT", 4L);
ZdaDDADFC_9(Z314, W_28->Y2);
if (Z359 != ZpmC89LG6_2) {
ZdaDDADFC_3(Z314, ',');
}
ZdaDDADFC_7(Z314);
}
}
if (Z359 >= B_130) break;
}
}
break;
case Zq0A4_203:;
if (Z301) {
ZdaDDADFC_4(Z314, (STRING)"    private static final int [] yyLeftHandSide = {", 50L);
ZdaDDADFC_7(Z314);
{
LONGCARD B_131 = 1, B_132 = ZpmC89LG6_2;

if (B_131 <= B_132)
for (Z359 = B_131;; Z359 += 1) {
{
register Zq0A4_111 *W_29 = &Zq0A4_95->A[Z359]->U_1.V_18.Y17.Y16->U_1.V_9.Y8;

if (IN(Zq0A4_47, W_29->Y5)) {
ZdaDDADFC_4(Z314, (STRING)"yyNT", 4L);
ZdaDDADFC_9(Z314, W_29->Y2);
ZdaDDADFC_3(Z314, ',');
ZdaDDADFC_7(Z314);
}
}
if (Z359 >= B_132) break;
}
}
ZdaDDADFC_4(Z314, (STRING)"    };", 6L);
ZdaDDADFC_7(Z314);
} else if (ZpmC89LG6_2 > Z302) {
ZdaDDADFC_4(Z314, (STRING)"    private static int [] yyLeftHandSide = new int [", 52L);
ZdaDDADFC_5(Z314, (LONGINT)ZpmC89LG6_2, 0L);
ZdaDDADFC_4(Z314, (STRING)"];", 2L);
ZdaDDADFC_7(Z314);
} else {
ZdaDDADFC_4(Z314, (STRING)"    private static int [] yyLeftHandSide = ", 43L);
ZdaDDADFC_9(Z314, Z312);
ZdaDDADFC_4(Z314, (STRING)"_LeftHandSide1.yy;", 18L);
ZdaDDADFC_7(Z314);
}
break;
}
}

static void Z428
# ifdef HAVE_ARGS
(ZfM_3 Z314)
# else
(Z314)
ZfM_3 Z314;
# endif
{
LONGINT Z359, Z489;
Zmfy8_0 Z501;

switch (Zq0A4_62) {
case Zq0A4_200:;
Zmfy8_4(&Z501, Z314);
{
LONGINT B_133 = 1, B_134 = ZiS8_12;

if (B_133 <= B_134)
for (Z359 = B_133;; Z359 += 1) {
if (ZiS8_14->A[Z359].Y4 != ZiS8_0) {
Zmfy8_6(Z501, ZggFGLABP_37((LONGCARD)ZiS8_14->A[Z359].Y6));
}
if (Z359 >= B_134) break;
}
}
Zmfy8_8(&Z501);
break;
case Zq0A4_198:;
case Zq0A4_199:;
Z489 = 0;
{
LONGINT B_135 = 1, B_136 = ZiS8_12;

if (B_135 <= B_136)
for (Z359 = B_135;; Z359 += 1) {
if (ZiS8_14->A[Z359].Y4 != ZiS8_0) {
ZdaDDADFC_5(Z314, (LONGINT)ZggFGLABP_37((LONGCARD)ZiS8_14->A[Z359].Y6), 5L);
ZdaDDADFC_4(Z314, (STRING)", ", 2L);
INC(Z489);
if (Z489 == 10) {
Z489 = 0;
ZdaDDADFC_7(Z314);
}
}
if (Z359 >= B_136) break;
}
}
if (Z489 > 0) {
ZdaDDADFC_7(Z314);
}
break;
case Zq0A4_202:;
Z489 = 0;
{
LONGINT B_137 = 1, B_138 = ZiS8_12;

if (B_137 <= B_138)
for (Z359 = B_137;; Z359 += 1) {
if (ZiS8_14->A[Z359].Y4 != ZiS8_0) {
ZdaDDADFC_5(Z314, (LONGINT)ZggFGLABP_37((LONGCARD)ZiS8_14->A[Z359].Y6), 5L);
ZdaDDADFC_4(Z314, (STRING)", ", 2L);
INC(Z489);
if (Z489 == 10) {
Z489 = 0;
ZdaDDADFC_7(Z314);
}
}
if (Z359 >= B_138) break;
}
}
if (Z489 > 0) {
ZdaDDADFC_7(Z314);
}
break;
case Zq0A4_203:;
if (Z301) {
ZdaDDADFC_4(Z314, (STRING)"    private static final int [] yyContinuation = { 0,", 53L);
ZdaDDADFC_7(Z314);
Z489 = 0;
{
LONGINT B_139 = 1, B_140 = ZiS8_12;

if (B_139 <= B_140)
for (Z359 = B_139;; Z359 += 1) {
if (ZiS8_14->A[Z359].Y4 != ZiS8_0) {
ZdaDDADFC_5(Z314, (LONGINT)ZggFGLABP_37((LONGCARD)ZiS8_14->A[Z359].Y6), 5L);
ZdaDDADFC_4(Z314, (STRING)", ", 2L);
INC(Z489);
if (Z489 == 10) {
Z489 = 0;
ZdaDDADFC_7(Z314);
}
}
if (Z359 >= B_140) break;
}
}
if (Z489 > 0) {
ZdaDDADFC_7(Z314);
}
ZdaDDADFC_4(Z314, (STRING)"    };", 6L);
ZdaDDADFC_7(Z314);
} else if (ZggFGLABP_11 >= Z302) {
ZdaDDADFC_4(Z314, (STRING)"    private static int [] yyContinuation = new int [", 52L);
ZdaDDADFC_5(Z314, (LONGINT)(ZggFGLABP_11 + 1), 0L);
ZdaDDADFC_4(Z314, (STRING)"];", 2L);
ZdaDDADFC_7(Z314);
} else {
ZdaDDADFC_4(Z314, (STRING)"    private static int [] yyContinuation = ", 43L);
ZdaDDADFC_9(Z314, Z312);
ZdaDDADFC_4(Z314, (STRING)"_Continuation1.yy;", 18L);
ZdaDDADFC_7(Z314);
}
break;
}
}

static void Z429
# ifdef HAVE_ARGS
(ZfM_3 Z314)
# else
(Z314)
ZfM_3 Z314;
# endif
{
CARDINAL Z359, Z489, Z506;
Zmfy8_0 Z501;

switch (Zq0A4_62) {
case Zq0A4_200:;
Zmfy8_4(&Z501, Z314);
{
LONGCARD B_141 = 1, B_142 = ZpmC89LG6_2;

if (B_141 <= B_142)
for (Z359 = B_141;; Z359 += 1) {
{
register Zq0A4_120 *W_30 = &Zq0A4_95->A[Z359]->U_1.V_18.Y17;

if (W_30->Y15 != 0) {
Zmfy8_6(Z501, ZggFGLABP_12 + W_30->Y14);
}
}
if (Z359 >= B_142) break;
}
}
Zmfy8_8(&Z501);
break;
case Zq0A4_198:;
case Zq0A4_199:;
Z489 = 0;
{
LONGCARD B_143 = 1, B_144 = ZpmC89LG6_2;

if (B_143 <= B_144)
for (Z359 = B_143;; Z359 += 1) {
{
register Zq0A4_120 *W_31 = &Zq0A4_95->A[Z359]->U_1.V_18.Y17;

if (W_31->Y15 != 0) {
ZdaDDADFC_5(Z314, (LONGINT)(ZggFGLABP_12 + W_31->Y14), 5L);
ZdaDDADFC_4(Z314, (STRING)", ", 2L);
INC(Z489);
if (Z489 == 10) {
Z489 = 0;
ZdaDDADFC_7(Z314);
}
}
}
if (Z359 >= B_144) break;
}
}
if (Z489 > 0) {
ZdaDDADFC_7(Z314);
}
break;
case Zq0A4_202:;
Z489 = 0;
{
LONGCARD B_145 = 1, B_146 = ZpmC89LG6_2;

if (B_145 <= B_146)
for (Z359 = B_145;; Z359 += 1) {
{
register Zq0A4_120 *W_32 = &Zq0A4_95->A[Z359]->U_1.V_18.Y17;

if (W_32->Y15 != 0) {
ZdaDDADFC_5(Z314, (LONGINT)(ZggFGLABP_12 + W_32->Y14), 5L);
ZdaDDADFC_4(Z314, (STRING)", ", 2L);
INC(Z489);
if (Z489 == 10) {
Z489 = 0;
ZdaDDADFC_7(Z314);
}
}
}
if (Z359 >= B_146) break;
}
}
if (Z489 > 0) {
ZdaDDADFC_7(Z314);
}
break;
case Zq0A4_203:;
if (Z301) {
ZdaDDADFC_4(Z314, (STRING)"    private static final int [] yyFinalToProd = {", 49L);
ZdaDDADFC_7(Z314);
Z489 = 0;
{
LONGCARD B_147 = 1, B_148 = ZpmC89LG6_2;

if (B_147 <= B_148)
for (Z359 = B_147;; Z359 += 1) {
{
register Zq0A4_120 *W_33 = &Zq0A4_95->A[Z359]->U_1.V_18.Y17;

if (W_33->Y15 != 0) {
ZdaDDADFC_5(Z314, (LONGINT)(ZggFGLABP_12 + W_33->Y14), 5L);
ZdaDDADFC_4(Z314, (STRING)", ", 2L);
INC(Z489);
if (Z489 == 10) {
Z489 = 0;
ZdaDDADFC_7(Z314);
}
}
}
if (Z359 >= B_148) break;
}
}
if (Z489 > 0) {
ZdaDDADFC_7(Z314);
}
ZdaDDADFC_4(Z314, (STRING)"    };", 6L);
ZdaDDADFC_7(Z314);
} else {
Z506 = ZggFGLABP_12 - ZggFGLABP_11;
if (Z506 > Z302) {
ZdaDDADFC_4(Z314, (STRING)"    private static int [] yyFinalToProd = new int [", 51L);
ZdaDDADFC_5(Z314, (LONGINT)Z506, 0L);
ZdaDDADFC_4(Z314, (STRING)"];", 2L);
ZdaDDADFC_7(Z314);
} else {
ZdaDDADFC_4(Z314, (STRING)"    private static int [] yyFinalToProd = ", 42L);
ZdaDDADFC_9(Z314, Z312);
ZdaDDADFC_4(Z314, (STRING)"_FinalToProd1.yy;", 17L);
ZdaDDADFC_7(Z314);
}
}
break;
}
}

static void Z430
# ifdef HAVE_ARGS
(ZfM_3 Z314)
# else
(Z314)
ZfM_3 Z314;
# endif
{
CARDINAL Z359, Z489;
Zmfy8_0 Z501;

switch (Zq0A4_62) {
case Zq0A4_200:;
Zmfy8_4(&Z501, Z314);
{
LONGCARD B_149 = 1, B_150 = (CARDINAL)ZggGECF6A_11;

if (B_149 <= B_150)
for (Z359 = B_149;; Z359 += 1) {
Zmfy8_6(Z501, (LONGCARD)ZggFGLABP_38((LONGINT)ZggGECF6A_13->A[Z359].Y4));
if (Z359 >= B_150) break;
}
}
Zmfy8_8(&Z501);
break;
case Zq0A4_198:;
case Zq0A4_199:;
case Zq0A4_203:;
Z489 = 0;
{
LONGCARD B_151 = 1, B_152 = (CARDINAL)ZggGECF6A_11;

if (B_151 <= B_152)
for (Z359 = B_151;; Z359 += 1) {
ZdaDDADFC_5(Z314, (LONGINT)ZggFGLABP_38((LONGINT)ZggGECF6A_13->A[Z359].Y4), 5L);
ZdaDDADFC_4(Z314, (STRING)", ", 2L);
INC(Z489);
if (Z489 == 10) {
Z489 = 0;
ZdaDDADFC_7(Z314);
}
if (Z359 >= B_152) break;
}
}
if (Z489 > 0) {
ZdaDDADFC_7(Z314);
}
break;
case Zq0A4_202:;
Z489 = 0;
{
LONGCARD B_153 = 1, B_154 = (CARDINAL)ZggGECF6A_11;

if (B_153 <= B_154)
for (Z359 = B_153;; Z359 += 1) {
ZdaDDADFC_5(Z314, (LONGINT)ZggFGLABP_38((LONGINT)ZggGECF6A_13->A[Z359].Y4), 5L);
ZdaDDADFC_4(Z314, (STRING)", ", 2L);
INC(Z489);
if (Z489 == 10) {
Z489 = 0;
ZdaDDADFC_7(Z314);
}
if (Z359 >= B_154) break;
}
}
if (Z489 > 0) {
ZdaDDADFC_7(Z314);
}
break;
}
}

static void Z422
# ifdef HAVE_ARGS
(ZfM_3 Z314)
# else
(Z314)
ZfM_3 Z314;
# endif
{
CARDINAL Z359, Z383;
LONGINT Z508;
CARDINAL Z509;
CARDINAL Z489;

if (Z301) {
return;
}
Z509 = 1;
Z359 = 0;
while (Z359 <= ZggFGLABP_20) {
ZdaDDADFC_4(Z314, (STRING)"class ", 6L);
ZdaDDADFC_9(Z314, Z312);
ZdaDDADFC_4(Z314, (STRING)"_TCombCheck", 11L);
ZdaDDADFC_5(Z314, (LONGINT)Z509, 0L);
ZdaDDADFC_4(Z314, (STRING)" {", 2L);
ZdaDDADFC_7(Z314);
ZdaDDADFC_4(Z314, (STRING)"  static final int [] yy = {", 28L);
ZdaDDADFC_7(Z314);
Z489 = 0;
Z383 = 1;
while (Z383 <= Z302 && Z359 <= ZggFGLABP_20) {
ZdaDDADFC_5(Z314, (LONGINT)ZggFGLABP_13->A[Z359].Y0, 5L);
ZdaDDADFC_4(Z314, (STRING)", ", 2L);
INC(Z489);
if (Z489 == 10) {
Z489 = 0;
ZdaDDADFC_7(Z314);
}
INC(Z359);
INC(Z383);
}
if (Z489 > 0) {
ZdaDDADFC_7(Z314);
}
ZdaDDADFC_4(Z314, (STRING)"  };", 4L);
ZdaDDADFC_7(Z314);
ZdaDDADFC_4(Z314, (STRING)"};", 2L);
ZdaDDADFC_7(Z314);
ZdaDDADFC_7(Z314);
INC(Z509);
}
Z509 = 1;
Z359 = 0;
while (Z359 <= ZggFGLABP_20) {
ZdaDDADFC_4(Z314, (STRING)"class ", 6L);
ZdaDDADFC_9(Z314, Z312);
ZdaDDADFC_4(Z314, (STRING)"_TCombNext", 10L);
ZdaDDADFC_5(Z314, (LONGINT)Z509, 0L);
ZdaDDADFC_4(Z314, (STRING)" {", 2L);
ZdaDDADFC_7(Z314);
ZdaDDADFC_4(Z314, (STRING)"  static final int [] yy = {", 28L);
ZdaDDADFC_7(Z314);
Z489 = 0;
Z383 = 1;
while (Z383 <= Z302 && Z359 <= ZggFGLABP_20) {
ZdaDDADFC_5(Z314, (LONGINT)ZggFGLABP_13->A[Z359].Y1, 5L);
ZdaDDADFC_4(Z314, (STRING)", ", 2L);
INC(Z489);
if (Z489 == 10) {
Z489 = 0;
ZdaDDADFC_7(Z314);
}
INC(Z359);
INC(Z383);
}
if (Z489 > 0) {
ZdaDDADFC_7(Z314);
}
ZdaDDADFC_4(Z314, (STRING)"  };", 4L);
ZdaDDADFC_7(Z314);
ZdaDDADFC_4(Z314, (STRING)"};", 2L);
ZdaDDADFC_7(Z314);
ZdaDDADFC_7(Z314);
INC(Z509);
}
Z509 = 1;
Z359 = ZpmC89LG6_3 + 1;
while (Z359 <= ZggFGLABP_28) {
ZdaDDADFC_4(Z314, (STRING)"class ", 6L);
ZdaDDADFC_9(Z314, Z312);
ZdaDDADFC_4(Z314, (STRING)"_NCombCheck", 11L);
ZdaDDADFC_5(Z314, (LONGINT)Z509, 0L);
ZdaDDADFC_4(Z314, (STRING)" {", 2L);
ZdaDDADFC_7(Z314);
ZdaDDADFC_4(Z314, (STRING)"  static final int [] yy = {", 28L);
ZdaDDADFC_7(Z314);
Z489 = 0;
Z383 = 1;
while (Z383 <= Z302 && Z359 <= ZggFGLABP_28) {
ZdaDDADFC_5(Z314, (LONGINT)ZggFGLABP_21->A[Z359].Y0, 5L);
ZdaDDADFC_4(Z314, (STRING)", ", 2L);
INC(Z489);
if (Z489 == 10) {
Z489 = 0;
ZdaDDADFC_7(Z314);
}
INC(Z359);
INC(Z383);
}
if (Z489 > 0) {
ZdaDDADFC_7(Z314);
}
ZdaDDADFC_4(Z314, (STRING)"  };", 4L);
ZdaDDADFC_7(Z314);
ZdaDDADFC_4(Z314, (STRING)"};", 2L);
ZdaDDADFC_7(Z314);
ZdaDDADFC_7(Z314);
INC(Z509);
}
Z509 = 1;
Z359 = ZpmC89LG6_3 + 1;
while (Z359 <= ZggFGLABP_28) {
ZdaDDADFC_4(Z314, (STRING)"class ", 6L);
ZdaDDADFC_9(Z314, Z312);
ZdaDDADFC_4(Z314, (STRING)"_NCombNext", 10L);
ZdaDDADFC_5(Z314, (LONGINT)Z509, 0L);
ZdaDDADFC_4(Z314, (STRING)" {", 2L);
ZdaDDADFC_7(Z314);
ZdaDDADFC_4(Z314, (STRING)"  static final int [] yy = {", 28L);
ZdaDDADFC_7(Z314);
Z489 = 0;
Z383 = 1;
while (Z383 <= Z302 && Z359 <= ZggFGLABP_28) {
ZdaDDADFC_5(Z314, (LONGINT)ZggFGLABP_21->A[Z359].Y1, 5L);
ZdaDDADFC_4(Z314, (STRING)", ", 2L);
INC(Z489);
if (Z489 == 10) {
Z489 = 0;
ZdaDDADFC_7(Z314);
}
INC(Z359);
INC(Z383);
}
if (Z489 > 0) {
ZdaDDADFC_7(Z314);
}
ZdaDDADFC_4(Z314, (STRING)"  };", 4L);
ZdaDDADFC_7(Z314);
ZdaDDADFC_4(Z314, (STRING)"};", 2L);
ZdaDDADFC_7(Z314);
ZdaDDADFC_7(Z314);
INC(Z509);
}
Z509 = 1;
Z359 = 0;
while (Z359 <= ZggFGLABP_11) {
ZdaDDADFC_4(Z314, (STRING)"class ", 6L);
ZdaDDADFC_9(Z314, Z312);
ZdaDDADFC_4(Z314, (STRING)"_TBase", 6L);
ZdaDDADFC_5(Z314, (LONGINT)Z509, 0L);
ZdaDDADFC_4(Z314, (STRING)" {", 2L);
ZdaDDADFC_7(Z314);
ZdaDDADFC_4(Z314, (STRING)"  static final int [] yy = {", 28L);
if (Z359 == 0) {
ZdaDDADFC_4(Z314, (STRING)" 0,", 3L);
INC(Z359);
}
ZdaDDADFC_7(Z314);
Z489 = 0;
Z383 = 1;
while (Z383 <= Z302 && Z359 <= ZggFGLABP_11) {
ZdaDDADFC_5(Z314, (LONGINT)ZggFGLABP_14->A[Z359], 5L);
ZdaDDADFC_4(Z314, (STRING)", ", 2L);
INC(Z489);
if (Z489 == 10) {
Z489 = 0;
ZdaDDADFC_7(Z314);
}
INC(Z359);
INC(Z383);
}
if (Z489 > 0) {
ZdaDDADFC_7(Z314);
}
ZdaDDADFC_4(Z314, (STRING)"  };", 4L);
ZdaDDADFC_7(Z314);
ZdaDDADFC_4(Z314, (STRING)"};", 2L);
ZdaDDADFC_7(Z314);
ZdaDDADFC_7(Z314);
INC(Z509);
}
Z509 = 1;
Z359 = 0;
while (Z359 <= ZggFGLABP_11) {
ZdaDDADFC_4(Z314, (STRING)"class ", 6L);
ZdaDDADFC_9(Z314, Z312);
ZdaDDADFC_4(Z314, (STRING)"_NBase", 6L);
ZdaDDADFC_5(Z314, (LONGINT)Z509, 0L);
ZdaDDADFC_4(Z314, (STRING)" {", 2L);
ZdaDDADFC_7(Z314);
ZdaDDADFC_4(Z314, (STRING)"  static final int [] yy = {", 28L);
if (Z359 == 0) {
ZdaDDADFC_4(Z314, (STRING)" 0,", 3L);
INC(Z359);
}
ZdaDDADFC_7(Z314);
Z489 = 0;
Z383 = 1;
while (Z383 <= Z302 && Z359 <= ZggFGLABP_11) {
ZdaDDADFC_5(Z314, (INTEGER)ZggFGLABP_22->A[Z359] - (INTEGER)ZpmC89LG6_3 - 1, 5L);
ZdaDDADFC_4(Z314, (STRING)", ", 2L);
INC(Z489);
if (Z489 == 10) {
Z489 = 0;
ZdaDDADFC_7(Z314);
}
INC(Z359);
INC(Z383);
}
if (Z489 > 0) {
ZdaDDADFC_7(Z314);
}
ZdaDDADFC_4(Z314, (STRING)"  };", 4L);
ZdaDDADFC_7(Z314);
ZdaDDADFC_4(Z314, (STRING)"};", 2L);
ZdaDDADFC_7(Z314);
ZdaDDADFC_7(Z314);
INC(Z509);
}
Z509 = 1;
Z359 = 0;
while (Z359 <= ZggFGLABP_11) {
ZdaDDADFC_4(Z314, (STRING)"class ", 6L);
ZdaDDADFC_9(Z314, Z312);
ZdaDDADFC_4(Z314, (STRING)"_TDefault", 9L);
ZdaDDADFC_5(Z314, (LONGINT)Z509, 0L);
ZdaDDADFC_4(Z314, (STRING)" {", 2L);
ZdaDDADFC_7(Z314);
ZdaDDADFC_4(Z314, (STRING)"  static final int [] yy = {", 28L);
if (Z359 == 0) {
ZdaDDADFC_4(Z314, (STRING)" 0,", 3L);
INC(Z359);
}
ZdaDDADFC_7(Z314);
Z489 = 0;
Z383 = 1;
while (Z383 <= Z302 && Z359 <= ZggFGLABP_11) {
ZdaDDADFC_5(Z314, (LONGINT)ZggFGLABP_39((LONGCARD)ZggFGLABP_15->A[Z359]), 5L);
ZdaDDADFC_4(Z314, (STRING)", ", 2L);
INC(Z489);
if (Z489 == 10) {
Z489 = 0;
ZdaDDADFC_7(Z314);
}
INC(Z359);
INC(Z383);
}
if (Z489 > 0) {
ZdaDDADFC_7(Z314);
}
ZdaDDADFC_4(Z314, (STRING)"  };", 4L);
ZdaDDADFC_7(Z314);
ZdaDDADFC_4(Z314, (STRING)"};", 2L);
ZdaDDADFC_7(Z314);
ZdaDDADFC_7(Z314);
INC(Z509);
}
Z509 = 1;
Z359 = 0;
while (Z359 <= ZggFGLABP_11) {
ZdaDDADFC_4(Z314, (STRING)"class ", 6L);
ZdaDDADFC_9(Z314, Z312);
ZdaDDADFC_4(Z314, (STRING)"_NDefault", 9L);
ZdaDDADFC_5(Z314, (LONGINT)Z509, 0L);
ZdaDDADFC_4(Z314, (STRING)" {", 2L);
ZdaDDADFC_7(Z314);
ZdaDDADFC_4(Z314, (STRING)"  static final int [] yy = {", 28L);
if (Z359 == 0) {
ZdaDDADFC_4(Z314, (STRING)" 0,", 3L);
INC(Z359);
}
ZdaDDADFC_7(Z314);
Z489 = 0;
Z383 = 1;
while (Z383 <= Z302 && Z359 <= ZggFGLABP_11) {
ZdaDDADFC_5(Z314, (LONGINT)ZiS8_14->A[ZggFGLABP_23->A[Z359]].Y5, 5L);
ZdaDDADFC_4(Z314, (STRING)", ", 2L);
INC(Z489);
if (Z489 == 10) {
Z489 = 0;
ZdaDDADFC_7(Z314);
}
INC(Z359);
INC(Z383);
}
if (Z489 > 0) {
ZdaDDADFC_7(Z314);
}
ZdaDDADFC_4(Z314, (STRING)"  };", 4L);
ZdaDDADFC_7(Z314);
ZdaDDADFC_4(Z314, (STRING)"};", 2L);
ZdaDDADFC_7(Z314);
ZdaDDADFC_7(Z314);
INC(Z509);
}
Z509 = 1;
Z359 = 1;
while (Z359 <= ZpmC89LG6_2) {
ZdaDDADFC_4(Z314, (STRING)"class ", 6L);
ZdaDDADFC_9(Z314, Z312);
ZdaDDADFC_4(Z314, (STRING)"_Length", 7L);
ZdaDDADFC_5(Z314, (LONGINT)Z509, 0L);
ZdaDDADFC_4(Z314, (STRING)" {", 2L);
ZdaDDADFC_7(Z314);
ZdaDDADFC_4(Z314, (STRING)"  static final int [] yy = {", 28L);
ZdaDDADFC_7(Z314);
Z489 = 0;
Z383 = 1;
while (Z383 <= Z302 && Z359 <= ZpmC89LG6_2) {
{
register Zq0A4_120 *W_34 = &Zq0A4_95->A[Z359]->U_1.V_18.Y17;

if (IN(Zq0A4_47, W_34->Y16->U_1.V_9.Y8.Y5)) {
ZdaDDADFC_5(Z314, (LONGINT)W_34->Y12, 5L);
ZdaDDADFC_4(Z314, (STRING)", ", 2L);
INC(Z489);
if (Z489 == 10) {
Z489 = 0;
ZdaDDADFC_7(Z314);
}
INC(Z383);
}
}
INC(Z359);
}
if (Z489 > 0) {
ZdaDDADFC_7(Z314);
}
ZdaDDADFC_4(Z314, (STRING)"  };", 4L);
ZdaDDADFC_7(Z314);
ZdaDDADFC_4(Z314, (STRING)"};", 2L);
ZdaDDADFC_7(Z314);
ZdaDDADFC_7(Z314);
INC(Z509);
}
Z509 = 1;
Z359 = 1;
while (Z359 <= ZpmC89LG6_2) {
ZdaDDADFC_4(Z314, (STRING)"class ", 6L);
ZdaDDADFC_9(Z314, Z312);
ZdaDDADFC_4(Z314, (STRING)"_LeftHandSide", 13L);
ZdaDDADFC_5(Z314, (LONGINT)Z509, 0L);
ZdaDDADFC_4(Z314, (STRING)" {", 2L);
ZdaDDADFC_7(Z314);
ZdaDDADFC_4(Z314, (STRING)"  static final int [] yy = {", 28L);
ZdaDDADFC_7(Z314);
Z489 = 0;
Z383 = 1;
while (Z383 <= Z302 && Z359 <= ZpmC89LG6_2) {
{
register Zq0A4_111 *W_35 = &Zq0A4_95->A[Z359]->U_1.V_18.Y17.Y16->U_1.V_9.Y8;

if (IN(Zq0A4_47, W_35->Y5)) {
ZdaDDADFC_5(Z314, (LONGINT)ZggFGLABP_37((LONGCARD)W_35->Y8), 5L);
ZdaDDADFC_4(Z314, (STRING)", ", 2L);
INC(Z489);
if (Z489 == 10) {
Z489 = 0;
ZdaDDADFC_7(Z314);
}
INC(Z383);
}
}
INC(Z359);
}
if (Z489 > 0) {
ZdaDDADFC_7(Z314);
}
ZdaDDADFC_4(Z314, (STRING)"  };", 4L);
ZdaDDADFC_7(Z314);
ZdaDDADFC_4(Z314, (STRING)"};", 2L);
ZdaDDADFC_7(Z314);
ZdaDDADFC_7(Z314);
INC(Z509);
}
Z509 = 1;
Z508 = 0;
while (Z508 <= ZiS8_12) {
ZdaDDADFC_4(Z314, (STRING)"class ", 6L);
ZdaDDADFC_9(Z314, Z312);
ZdaDDADFC_4(Z314, (STRING)"_Continuation", 13L);
ZdaDDADFC_5(Z314, (LONGINT)Z509, 0L);
ZdaDDADFC_4(Z314, (STRING)" {", 2L);
ZdaDDADFC_7(Z314);
ZdaDDADFC_4(Z314, (STRING)"  static final int [] yy = {", 28L);
if (Z508 == 0) {
ZdaDDADFC_4(Z314, (STRING)" 0,", 3L);
INC(Z508);
}
ZdaDDADFC_7(Z314);
Z489 = 0;
Z383 = 1;
while (Z383 <= Z302 && Z508 <= ZiS8_12) {
if (ZiS8_14->A[Z508].Y4 != ZiS8_0) {
ZdaDDADFC_5(Z314, (LONGINT)ZggFGLABP_37((LONGCARD)ZiS8_14->A[Z508].Y6), 5L);
ZdaDDADFC_4(Z314, (STRING)", ", 2L);
INC(Z489);
if (Z489 == 10) {
Z489 = 0;
ZdaDDADFC_7(Z314);
}
INC(Z383);
}
INC(Z508);
}
if (Z489 > 0) {
ZdaDDADFC_7(Z314);
}
ZdaDDADFC_4(Z314, (STRING)"  };", 4L);
ZdaDDADFC_7(Z314);
ZdaDDADFC_4(Z314, (STRING)"};", 2L);
ZdaDDADFC_7(Z314);
ZdaDDADFC_7(Z314);
INC(Z509);
}
Z509 = 1;
Z359 = 1;
while (Z359 <= ZpmC89LG6_2) {
ZdaDDADFC_4(Z314, (STRING)"class ", 6L);
ZdaDDADFC_9(Z314, Z312);
ZdaDDADFC_4(Z314, (STRING)"_FinalToProd", 12L);
ZdaDDADFC_5(Z314, (LONGINT)Z509, 0L);
ZdaDDADFC_4(Z314, (STRING)" {", 2L);
ZdaDDADFC_7(Z314);
ZdaDDADFC_4(Z314, (STRING)"  static final int [] yy = {", 28L);
ZdaDDADFC_7(Z314);
Z489 = 0;
Z383 = 1;
while (Z383 <= Z302 && Z359 <= ZpmC89LG6_2) {
{
register Zq0A4_120 *W_36 = &Zq0A4_95->A[Z359]->U_1.V_18.Y17;

if (W_36->Y15 != 0) {
ZdaDDADFC_5(Z314, (LONGINT)(ZggFGLABP_12 + W_36->Y14), 5L);
ZdaDDADFC_4(Z314, (STRING)", ", 2L);
INC(Z489);
if (Z489 == 10) {
Z489 = 0;
ZdaDDADFC_7(Z314);
}
INC(Z383);
}
}
INC(Z359);
}
if (Z489 > 0) {
ZdaDDADFC_7(Z314);
}
ZdaDDADFC_4(Z314, (STRING)"  };", 4L);
ZdaDDADFC_7(Z314);
ZdaDDADFC_4(Z314, (STRING)"};", 2L);
ZdaDDADFC_7(Z314);
INC(Z509);
}
}

static void Z423
# ifdef HAVE_ARGS
(ZfM_3 Z314)
# else
(Z314)
ZfM_3 Z314;
# endif
{
CARDINAL Z359, Z506;
CARDINAL Z509, Z510;

if (Z301) {
return;
}
if (ZggFGLABP_20 >= Z302) {
Z509 = 1;
Z359 = 0;
while (Z359 <= ZggFGLABP_20) {
ZdaDDADFC_4(Z314, (STRING)"        System.arraycopy (", 26L);
ZdaDDADFC_9(Z314, Z312);
ZdaDDADFC_4(Z314, (STRING)"_TCombCheck", 11L);
ZdaDDADFC_5(Z314, (LONGINT)Z509, 0L);
ZdaDDADFC_4(Z314, (STRING)".yy, 0, yyTCombCheck, ", 22L);
ZdaDDADFC_5(Z314, (LONGINT)Z359, 0L);
ZdaDDADFC_4(Z314, (STRING)", ", 2L);
ZdaDDADFC_5(Z314, ZdaDDAD7_3((LONGINT)(ZggFGLABP_20 + 1 - Z359), (LONGINT)Z302), 0L);
ZdaDDADFC_4(Z314, (STRING)");", 2L);
ZdaDDADFC_7(Z314);
INC1(Z359, Z302);
INC(Z509);
}
Z509 = 1;
Z359 = 0;
while (Z359 <= ZggFGLABP_20) {
ZdaDDADFC_4(Z314, (STRING)"        System.arraycopy (", 26L);
ZdaDDADFC_9(Z314, Z312);
ZdaDDADFC_4(Z314, (STRING)"_TCombNext", 10L);
ZdaDDADFC_5(Z314, (LONGINT)Z509, 0L);
ZdaDDADFC_4(Z314, (STRING)".yy, 0, yyTCombNext, ", 21L);
ZdaDDADFC_5(Z314, (LONGINT)Z359, 0L);
ZdaDDADFC_4(Z314, (STRING)", ", 2L);
ZdaDDADFC_5(Z314, ZdaDDAD7_3((LONGINT)(ZggFGLABP_20 + 1 - Z359), (LONGINT)Z302), 0L);
ZdaDDADFC_4(Z314, (STRING)");", 2L);
ZdaDDADFC_7(Z314);
INC1(Z359, Z302);
INC(Z509);
}
}
if (ZggFGLABP_28 - ZpmC89LG6_3 > Z302) {
Z509 = 1;
Z359 = ZpmC89LG6_3 + 1;
while (Z359 <= ZggFGLABP_28) {
ZdaDDADFC_4(Z314, (STRING)"        System.arraycopy (", 26L);
ZdaDDADFC_9(Z314, Z312);
ZdaDDADFC_4(Z314, (STRING)"_NCombCheck", 11L);
ZdaDDADFC_5(Z314, (LONGINT)Z509, 0L);
ZdaDDADFC_4(Z314, (STRING)".yy, 0, yyNCombCheck, ", 22L);
ZdaDDADFC_5(Z314, (LONGINT)(Z359 - ZpmC89LG6_3 - 1), 0L);
ZdaDDADFC_4(Z314, (STRING)", ", 2L);
ZdaDDADFC_5(Z314, ZdaDDAD7_3((LONGINT)(ZggFGLABP_28 + 1 - Z359), (LONGINT)Z302), 0L);
ZdaDDADFC_4(Z314, (STRING)");", 2L);
ZdaDDADFC_7(Z314);
INC1(Z359, Z302);
INC(Z509);
}
Z509 = 1;
Z359 = ZpmC89LG6_3 + 1;
while (Z359 <= ZggFGLABP_28) {
ZdaDDADFC_4(Z314, (STRING)"        System.arraycopy (", 26L);
ZdaDDADFC_9(Z314, Z312);
ZdaDDADFC_4(Z314, (STRING)"_NCombNext", 10L);
ZdaDDADFC_5(Z314, (LONGINT)Z509, 0L);
ZdaDDADFC_4(Z314, (STRING)".yy, 0, yyNCombNext, ", 21L);
ZdaDDADFC_5(Z314, (LONGINT)(Z359 - ZpmC89LG6_3 - 1), 0L);
ZdaDDADFC_4(Z314, (STRING)", ", 2L);
ZdaDDADFC_5(Z314, ZdaDDAD7_3((LONGINT)(ZggFGLABP_28 + 1 - Z359), (LONGINT)Z302), 0L);
ZdaDDADFC_4(Z314, (STRING)");", 2L);
ZdaDDADFC_7(Z314);
INC1(Z359, Z302);
INC(Z509);
}
}
if (ZggFGLABP_11 >= Z302) {
Z509 = 1;
Z359 = 0;
Z510 = Z302 + 1;
while (Z359 <= ZggFGLABP_11) {
ZdaDDADFC_4(Z314, (STRING)"        System.arraycopy (", 26L);
ZdaDDADFC_9(Z314, Z312);
ZdaDDADFC_4(Z314, (STRING)"_TBase", 6L);
ZdaDDADFC_5(Z314, (LONGINT)Z509, 0L);
ZdaDDADFC_4(Z314, (STRING)".yy, 0, yyTBase, ", 17L);
ZdaDDADFC_5(Z314, (LONGINT)Z359, 0L);
ZdaDDADFC_4(Z314, (STRING)", ", 2L);
ZdaDDADFC_5(Z314, ZdaDDAD7_3((LONGINT)(ZggFGLABP_11 + 1 - Z359), (LONGINT)Z510), 0L);
ZdaDDADFC_4(Z314, (STRING)");", 2L);
ZdaDDADFC_7(Z314);
INC1(Z359, Z510);
if (Z509 == 1) {
Z510 = Z302;
}
INC(Z509);
}
Z509 = 1;
Z359 = 0;
Z510 = Z302 + 1;
while (Z359 <= ZggFGLABP_11) {
ZdaDDADFC_4(Z314, (STRING)"        System.arraycopy (", 26L);
ZdaDDADFC_9(Z314, Z312);
ZdaDDADFC_4(Z314, (STRING)"_NBase", 6L);
ZdaDDADFC_5(Z314, (LONGINT)Z509, 0L);
ZdaDDADFC_4(Z314, (STRING)".yy, 0, yyNBase, ", 17L);
ZdaDDADFC_5(Z314, (LONGINT)Z359, 0L);
ZdaDDADFC_4(Z314, (STRING)", ", 2L);
ZdaDDADFC_5(Z314, ZdaDDAD7_3((LONGINT)(ZggFGLABP_11 + 1 - Z359), (LONGINT)Z510), 0L);
ZdaDDADFC_4(Z314, (STRING)");", 2L);
ZdaDDADFC_7(Z314);
INC1(Z359, Z510);
if (Z509 == 1) {
Z510 = Z302;
}
INC(Z509);
}
Z509 = 1;
Z359 = 0;
Z510 = Z302 + 1;
while (Z359 <= ZggFGLABP_11) {
ZdaDDADFC_4(Z314, (STRING)"        System.arraycopy (", 26L);
ZdaDDADFC_9(Z314, Z312);
ZdaDDADFC_4(Z314, (STRING)"_TDefault", 9L);
ZdaDDADFC_5(Z314, (LONGINT)Z509, 0L);
ZdaDDADFC_4(Z314, (STRING)".yy, 0, yyTDefault, ", 20L);
ZdaDDADFC_5(Z314, (LONGINT)Z359, 0L);
ZdaDDADFC_4(Z314, (STRING)", ", 2L);
ZdaDDADFC_5(Z314, ZdaDDAD7_3((LONGINT)(ZggFGLABP_11 + 1 - Z359), (LONGINT)Z510), 0L);
ZdaDDADFC_4(Z314, (STRING)");", 2L);
ZdaDDADFC_7(Z314);
INC1(Z359, Z510);
if (Z509 == 1) {
Z510 = Z302;
}
INC(Z509);
}
Z509 = 1;
Z359 = 0;
Z510 = Z302 + 1;
while (Z359 <= ZggFGLABP_11) {
ZdaDDADFC_4(Z314, (STRING)"        System.arraycopy (", 26L);
ZdaDDADFC_9(Z314, Z312);
ZdaDDADFC_4(Z314, (STRING)"_NDefault", 9L);
ZdaDDADFC_5(Z314, (LONGINT)Z509, 0L);
ZdaDDADFC_4(Z314, (STRING)".yy, 0, yyNDefault, ", 20L);
ZdaDDADFC_5(Z314, (LONGINT)Z359, 0L);
ZdaDDADFC_4(Z314, (STRING)", ", 2L);
ZdaDDADFC_5(Z314, ZdaDDAD7_3((LONGINT)(ZggFGLABP_11 + 1 - Z359), (LONGINT)Z510), 0L);
ZdaDDADFC_4(Z314, (STRING)");", 2L);
ZdaDDADFC_7(Z314);
INC1(Z359, Z510);
if (Z509 == 1) {
Z510 = Z302;
}
INC(Z509);
}
}
if (ZpmC89LG6_2 > Z302) {
Z509 = 1;
Z359 = 1;
while (Z359 <= ZpmC89LG6_2) {
ZdaDDADFC_4(Z314, (STRING)"        System.arraycopy (", 26L);
ZdaDDADFC_9(Z314, Z312);
ZdaDDADFC_4(Z314, (STRING)"_Length", 7L);
ZdaDDADFC_5(Z314, (LONGINT)Z509, 0L);
ZdaDDADFC_4(Z314, (STRING)".yy, 0, yyLength, ", 18L);
ZdaDDADFC_5(Z314, (LONGINT)(Z359 - 1), 0L);
ZdaDDADFC_4(Z314, (STRING)", ", 2L);
ZdaDDADFC_5(Z314, ZdaDDAD7_3((LONGINT)(ZpmC89LG6_2 + 1 - Z359), (LONGINT)Z302), 0L);
ZdaDDADFC_4(Z314, (STRING)");", 2L);
ZdaDDADFC_7(Z314);
INC1(Z359, Z302);
INC(Z509);
}
Z509 = 1;
Z359 = 1;
while (Z359 <= ZpmC89LG6_2) {
ZdaDDADFC_4(Z314, (STRING)"        System.arraycopy (", 26L);
ZdaDDADFC_9(Z314, Z312);
ZdaDDADFC_4(Z314, (STRING)"_LeftHandSide", 13L);
ZdaDDADFC_5(Z314, (LONGINT)Z509, 0L);
ZdaDDADFC_4(Z314, (STRING)".yy, 0, yyLeftHandSide, ", 24L);
ZdaDDADFC_5(Z314, (LONGINT)(Z359 - 1), 0L);
ZdaDDADFC_4(Z314, (STRING)", ", 2L);
ZdaDDADFC_5(Z314, ZdaDDAD7_3((LONGINT)(ZpmC89LG6_2 + 1 - Z359), (LONGINT)Z302), 0L);
ZdaDDADFC_4(Z314, (STRING)");", 2L);
ZdaDDADFC_7(Z314);
INC1(Z359, Z302);
INC(Z509);
}
}
if (ZggFGLABP_11 >= Z302) {
Z509 = 1;
Z359 = 0;
Z510 = Z302 + 1;
while (Z359 <= ZggFGLABP_11) {
ZdaDDADFC_4(Z314, (STRING)"        System.arraycopy (", 26L);
ZdaDDADFC_9(Z314, Z312);
ZdaDDADFC_4(Z314, (STRING)"_Continuation", 13L);
ZdaDDADFC_5(Z314, (LONGINT)Z509, 0L);
ZdaDDADFC_4(Z314, (STRING)".yy, 0, yyContinuation, ", 24L);
ZdaDDADFC_5(Z314, (LONGINT)Z359, 0L);
ZdaDDADFC_4(Z314, (STRING)", ", 2L);
ZdaDDADFC_5(Z314, ZdaDDAD7_3((LONGINT)(ZggFGLABP_11 + 1 - Z359), (LONGINT)Z510), 0L);
ZdaDDADFC_4(Z314, (STRING)");", 2L);
ZdaDDADFC_7(Z314);
INC1(Z359, Z510);
if (Z509 == 1) {
Z510 = Z302;
}
INC(Z509);
}
}
Z506 = ZggFGLABP_12 - ZggFGLABP_11;
if (Z506 > Z302) {
Z509 = 1;
Z359 = 1;
while (Z359 <= Z506) {
ZdaDDADFC_4(Z314, (STRING)"        System.arraycopy (", 26L);
ZdaDDADFC_9(Z314, Z312);
ZdaDDADFC_4(Z314, (STRING)"_FinalToProd", 12L);
ZdaDDADFC_5(Z314, (LONGINT)Z509, 0L);
ZdaDDADFC_4(Z314, (STRING)".yy, 0, yyFinalToProd, ", 23L);
ZdaDDADFC_5(Z314, (LONGINT)(Z359 - 1), 0L);
ZdaDDADFC_4(Z314, (STRING)", ", 2L);
ZdaDDADFC_5(Z314, ZdaDDAD7_3((LONGINT)(Z506 + 1 - Z359), (LONGINT)Z302), 0L);
ZdaDDADFC_4(Z314, (STRING)");", 2L);
ZdaDDADFC_7(Z314);
INC1(Z359, Z302);
INC(Z509);
}
}
}

static void Y1_417
# ifdef HAVE_ARGS
(ZfM_3 Z314)
# else
(Z314)
ZfM_3 Z314;
# endif
{
CARDINAL Z359;

ZdaDDADFC_5(Z314, (LONGINT)(ZggFGLABP_11 + 1), 0L);
ZdaDDADFC_4(Z314, (STRING)" = yyTBase", 10L);
ZdaDDADFC_7(Z314);
ZdaDDADFC_5(Z314, 0L, 0L);
ZdaDDADFC_7(Z314);
{
LONGCARD B_155 = 1, B_156 = ZggFGLABP_11;

if (B_155 <= B_156)
for (Z359 = B_155;; Z359 += 1) {
ZdaDDADFC_5(Z314, (LONGINT)ZggFGLABP_14->A[Z359], 0L);
ZdaDDADFC_7(Z314);
if (Z359 >= B_156) break;
}
}
}

static void Y2_418
# ifdef HAVE_ARGS
(ZfM_3 Z314)
# else
(Z314)
ZfM_3 Z314;
# endif
{
CARDINAL Z359;

ZdaDDADFC_5(Z314, (LONGINT)(ZggFGLABP_11 + 1), 0L);
ZdaDDADFC_4(Z314, (STRING)" = yyNBase", 10L);
ZdaDDADFC_7(Z314);
ZdaDDADFC_5(Z314, 0L, 0L);
ZdaDDADFC_7(Z314);
{
LONGCARD B_157 = 1, B_158 = ZggFGLABP_11;

if (B_157 <= B_158)
for (Z359 = B_157;; Z359 += 1) {
ZdaDDADFC_5(Z314, (LONGINT)ZggFGLABP_22->A[Z359], 0L);
ZdaDDADFC_7(Z314);
if (Z359 >= B_158) break;
}
}
}

static void Y3_419
# ifdef HAVE_ARGS
(ZfM_3 Z314)
# else
(Z314)
ZfM_3 Z314;
# endif
{
CARDINAL Z359;

ZdaDDADFC_5(Z314, (LONGINT)(ZggFGLABP_11 + 1), 0L);
ZdaDDADFC_4(Z314, (STRING)" = yyTDefault", 13L);
ZdaDDADFC_7(Z314);
ZdaDDADFC_5(Z314, 0L, 0L);
ZdaDDADFC_7(Z314);
{
LONGCARD B_159 = 1, B_160 = ZggFGLABP_11;

if (B_159 <= B_160)
for (Z359 = B_159;; Z359 += 1) {
ZdaDDADFC_5(Z314, (LONGINT)ZggFGLABP_39((LONGCARD)ZggFGLABP_15->A[Z359]), 0L);
ZdaDDADFC_7(Z314);
if (Z359 >= B_160) break;
}
}
}

static void Y4_420
# ifdef HAVE_ARGS
(ZfM_3 Z314)
# else
(Z314)
ZfM_3 Z314;
# endif
{
CARDINAL Z359;

ZdaDDADFC_5(Z314, (LONGINT)(ZggFGLABP_11 + 1), 0L);
ZdaDDADFC_4(Z314, (STRING)" = yyNDefault", 13L);
ZdaDDADFC_7(Z314);
ZdaDDADFC_5(Z314, 0L, 0L);
ZdaDDADFC_7(Z314);
{
LONGCARD B_161 = 1, B_162 = ZggFGLABP_11;

if (B_161 <= B_162)
for (Z359 = B_161;; Z359 += 1) {
ZdaDDADFC_5(Z314, (LONGINT)ZiS8_14->A[ZggFGLABP_23->A[Z359]].Y5, 0L);
ZdaDDADFC_7(Z314);
if (Z359 >= B_162) break;
}
}
}

static void Z512
# ifdef HAVE_ARGS
(ZfM_3 Z314)
# else
(Z314)
ZfM_3 Z314;
# endif
{
CARDINAL Z359;

ZdaDDADFC_5(Z314, (LONGINT)(ZggFGLABP_20 + 1), 0L);
ZdaDDADFC_4(Z314, (STRING)" = yyTCheck", 11L);
ZdaDDADFC_7(Z314);
{
LONGCARD B_163 = 0, B_164 = ZggFGLABP_20;

if (B_163 <= B_164)
for (Z359 = B_163;; Z359 += 1) {
ZdaDDADFC_5(Z314, (LONGINT)ZggFGLABP_13->A[Z359].Y0, 0L);
ZdaDDADFC_7(Z314);
if (Z359 >= B_164) break;
}
}
}

static void Z513
# ifdef HAVE_ARGS
(ZfM_3 Z314)
# else
(Z314)
ZfM_3 Z314;
# endif
{
CARDINAL Z359;

ZdaDDADFC_5(Z314, (LONGINT)(ZggFGLABP_20 + 1), 0L);
ZdaDDADFC_4(Z314, (STRING)" = yyTNext", 10L);
ZdaDDADFC_7(Z314);
{
LONGCARD B_165 = 0, B_166 = ZggFGLABP_20;

if (B_165 <= B_166)
for (Z359 = B_165;; Z359 += 1) {
ZdaDDADFC_5(Z314, (LONGINT)ZggFGLABP_13->A[Z359].Y1, 0L);
ZdaDDADFC_7(Z314);
if (Z359 >= B_166) break;
}
}
}

static void Z514
# ifdef HAVE_ARGS
(ZfM_3 Z314)
# else
(Z314)
ZfM_3 Z314;
# endif
{
CARDINAL Z359;

ZdaDDADFC_5(Z314, (LONGINT)(ZggFGLABP_28 - ZpmC89LG6_3), 0L);
ZdaDDADFC_4(Z314, (STRING)" = yyNComb", 10L);
ZdaDDADFC_7(Z314);
if (ZpmCQ_25(ORD('o'), &Zq0A4_61)) {
{
LONGCARD B_167 = ZpmC89LG6_3 + 1, B_168 = ZggFGLABP_28;

if (B_167 <= B_168)
for (Z359 = B_167;; Z359 += 1) {
ZdaDDADFC_5(Z314, (LONGINT)ZggFGLABP_21->A[Z359].Y1, 0L);
ZdaDDADFC_7(Z314);
if (Z359 >= B_168) break;
}
}
} else {
{
LONGCARD B_169 = ZpmC89LG6_3 + 1, B_170 = ZggFGLABP_28;

if (B_169 <= B_170)
for (Z359 = B_169;; Z359 += 1) {
ZdaDDADFC_5(Z314, (LONGINT)ZggFGLABP_21->A[Z359].Y0, 0L);
ZdaDDADFC_4(Z314, (STRING)" ", 1L);
ZdaDDADFC_5(Z314, (LONGINT)ZggFGLABP_21->A[Z359].Y1, 0L);
ZdaDDADFC_7(Z314);
if (Z359 >= B_170) break;
}
}
}
}

static void Y5_426
# ifdef HAVE_ARGS
(ZfM_3 Z314)
# else
(Z314)
ZfM_3 Z314;
# endif
{
CARDINAL Z359;

ZdaDDADFC_5(Z314, (LONGINT)ZpmC89LG6_2, 0L);
ZdaDDADFC_4(Z314, (STRING)" = yyLength", 11L);
ZdaDDADFC_7(Z314);
{
LONGCARD B_171 = 1, B_172 = ZpmC89LG6_2;

if (B_171 <= B_172)
for (Z359 = B_171;; Z359 += 1) {
{
register Zq0A4_120 *W_37 = &Zq0A4_95->A[Z359]->U_1.V_18.Y17;

if (IN(Zq0A4_47, W_37->Y16->U_1.V_9.Y8.Y5)) {
ZdaDDADFC_5(Z314, (LONGINT)W_37->Y12, 0L);
ZdaDDADFC_7(Z314);
}
}
if (Z359 >= B_172) break;
}
}
}

static void Y6_427
# ifdef HAVE_ARGS
(ZfM_3 Z314)
# else
(Z314)
ZfM_3 Z314;
# endif
{
CARDINAL Z359;

ZdaDDADFC_5(Z314, (LONGINT)ZpmC89LG6_2, 0L);
ZdaDDADFC_4(Z314, (STRING)" = yyLeftHandSide", 17L);
ZdaDDADFC_7(Z314);
{
LONGCARD B_173 = 1, B_174 = ZpmC89LG6_2;

if (B_173 <= B_174)
for (Z359 = B_173;; Z359 += 1) {
{
register Zq0A4_111 *W_38 = &Zq0A4_95->A[Z359]->U_1.V_18.Y17.Y16->U_1.V_9.Y8;

if (IN(Zq0A4_47, W_38->Y5)) {
ZdaDDADFC_5(Z314, (LONGINT)ZggFGLABP_37((LONGCARD)W_38->Y8), 0L);
ZdaDDADFC_7(Z314);
}
}
if (Z359 >= B_174) break;
}
}
}

static void Y7_428
# ifdef HAVE_ARGS
(ZfM_3 Z314)
# else
(Z314)
ZfM_3 Z314;
# endif
{
LONGINT Z359;

ZdaDDADFC_5(Z314, (LONGINT)(ZggFGLABP_11 + 1), 0L);
ZdaDDADFC_4(Z314, (STRING)" = yyContinuation", 17L);
ZdaDDADFC_7(Z314);
ZdaDDADFC_5(Z314, 0L, 0L);
ZdaDDADFC_7(Z314);
{
LONGINT B_175 = 1, B_176 = ZiS8_12;

if (B_175 <= B_176)
for (Z359 = B_175;; Z359 += 1) {
if (ZiS8_14->A[Z359].Y4 != ZiS8_0) {
ZdaDDADFC_5(Z314, (LONGINT)ZggFGLABP_37((LONGCARD)ZiS8_14->A[Z359].Y6), 0L);
ZdaDDADFC_7(Z314);
}
if (Z359 >= B_176) break;
}
}
}

static void Y8_429
# ifdef HAVE_ARGS
(ZfM_3 Z314)
# else
(Z314)
ZfM_3 Z314;
# endif
{
CARDINAL Z359;

ZdaDDADFC_5(Z314, (LONGINT)(ZggFGLABP_12 - ZggFGLABP_11), 0L);
ZdaDDADFC_4(Z314, (STRING)" = yyFinalToProd", 16L);
ZdaDDADFC_7(Z314);
{
LONGCARD B_177 = 1, B_178 = ZpmC89LG6_2;

if (B_177 <= B_178)
for (Z359 = B_177;; Z359 += 1) {
{
register Zq0A4_120 *W_39 = &Zq0A4_95->A[Z359]->U_1.V_18.Y17;

if (W_39->Y15 != 0) {
ZdaDDADFC_5(Z314, (LONGINT)(ZggFGLABP_12 + W_39->Y14), 0L);
ZdaDDADFC_7(Z314);
}
}
if (Z359 >= B_178) break;
}
}
}

static void Y9_430
# ifdef HAVE_ARGS
(ZfM_3 Z314)
# else
(Z314)
ZfM_3 Z314;
# endif
{
CARDINAL Z359;

ZdaDDADFC_5(Z314, ZggGECF6A_11, 0L);
ZdaDDADFC_4(Z314, (STRING)" = yyCondition", 14L);
ZdaDDADFC_7(Z314);
{
LONGCARD B_179 = 1, B_180 = (CARDINAL)ZggGECF6A_11;

if (B_179 <= B_180)
for (Z359 = B_179;; Z359 += 1) {
ZdaDDADFC_5(Z314, (LONGINT)ZggFGLABP_38((LONGINT)ZggGECF6A_13->A[Z359].Y4), 0L);
ZdaDDADFC_7(Z314);
if (Z359 >= B_180) break;
}
}
}

static void Z415
# ifdef HAVE_ARGS
(ZfM_3 Z511)
# else
(Z511)
ZfM_3 Z511;
# endif
{
Y1_417(Z511);
Y2_418(Z511);
if (!ZpmCQ_25(ORD('u'), &Zq0A4_61)) {
Y3_419(Z511);
}
if (!ZpmCQ_25(ORD('o'), &Zq0A4_61)) {
Y4_420(Z511);
}
Z512(Z511);
Z513(Z511);
Z514(Z511);
Y5_426(Z511);
Y6_427(Z511);
Y7_428(Z511);
Y8_429(Z511);
Y9_430(Z511);
}

static void Z431
# ifdef HAVE_ARGS
(ZfM_3 Z335)
# else
(Z335)
ZfM_3 Z335;
# endif
{
LONGINT Z413;
CARDINAL Z442, Z489;

{
LONGINT B_181 = 1, B_182 = ZiS8_12;

if (B_181 <= B_182)
for (Z413 = B_181;; Z413 += 1) {
{
register ZiS8_7 *W_40 = &ZiS8_14->A[Z413];

if (W_40->Y4 != ZiS8_0) {
ZdaDDADFC_4(Z335, (STRING)"static yytItem yys", 18L);
ZdaDDADFC_5(Z335, Z413, 0L);
ZdaDDADFC_4(Z335, (STRING)" [] = {", 7L);
Z489 = 0;
{
LONGCARD B_183 = W_40->Y0, B_184 = W_40->Y0 + W_40->Y2 + W_40->Y3;

if (B_183 <= B_184)
for (Z442 = B_183;; Z442 += 1) {
{
register ZiS8_8 *W_41 = &ZiS8_17->A[Z442];

ZdaDDADFC_3(Z335, '{');
ZdaDDADFC_5(Z335, (LONGINT)W_41->Y0, 0L);
ZdaDDADFC_4(Z335, (STRING)", ", 2L);
ZdaDDADFC_5(Z335, (LONGINT)W_41->Y1, 0L);
ZdaDDADFC_4(Z335, (STRING)"}, ", 3L);
}
INC(Z489);
if (Z489 == 6) {
Z489 = 0;
ZdaDDADFC_7(Z335);
}
if (Z442 >= B_184) break;
}
}
ZdaDDADFC_4(Z335, (STRING)"{0}};", 5L);
ZdaDDADFC_7(Z335);
}
}
if (Z413 >= B_182) break;
}
}
}

static void Z432
# ifdef HAVE_ARGS
(ZfM_3 Z335)
# else
(Z335)
ZfM_3 Z335;
# endif
{
LONGINT Z413;

{
LONGINT B_185 = 1, B_186 = ZiS8_12;

if (B_185 <= B_186)
for (Z413 = B_185;; Z413 += 1) {
if (ZiS8_14->A[Z413].Y4 != ZiS8_0) {
ZdaDDADFC_4(Z335, (STRING)"yys", 3L);
ZdaDDADFC_5(Z335, Z413, 0L);
ZdaDDADFC_3(Z335, ',');
ZdaDDADFC_7(Z335);
}
if (Z413 >= B_186) break;
}
}
}

static void Z433
# ifdef HAVE_ARGS
(ZfM_3 Z335)
# else
(Z335)
ZfM_3 Z335;
# endif
{
CARDINAL Z162, Z359, Z383, Z515, Z516, Z489;
struct S_3 Z348;

Z162 = (ZpmC89LG6_3 + 1) / 32;
{
LONGCARD B_187 = 1, B_188 = (CARDINAL)ZggFGLABP_33;

if (B_187 <= B_188)
for (Z359 = B_187;; Z359 += 1) {
{
LONGCARD B_189 = 0, B_190 = Z162;

if (B_189 <= B_190)
for (Z383 = B_189;; Z383 += 1) {
Z348.A[Z383] = 0;
if (Z383 >= B_190) break;
}
}
{
LONGCARD B_191 = ZpmCQ_17(&ZggFGLABP_31->A[Z359]), B_192 = ZpmCQ_18(&ZggFGLABP_31->A[Z359]);

if (B_191 <= B_192)
for (Z515 = B_191;; Z515 += 1) {
if (ZpmCQ_25(Z515, &ZggFGLABP_31->A[Z359])) {
Z516 = ZggFGLABP_37(Z515);
INC1(Z348.A[Z516 / 32], ZdaDDAD7_8(Z516 % 32));
}
if (Z515 >= B_192) break;
}
}
ZdaDDADFC_4(Z335, (STRING)"static unsigned long yyl", 24L);
ZdaDDADFC_5(Z335, (LONGINT)Z359, 0L);
ZdaDDADFC_4(Z335, (STRING)" [] = {", 7L);
ZdaDDADFC_7(Z335);
Z489 = 0;
{
LONGCARD B_193 = 0, B_194 = Z162;

if (B_193 <= B_194)
for (Z383 = B_193;; Z383 += 1) {
ZdaDDADFC_4(Z335, (STRING)"0x", 2L);
ZdaDDADFC_6(Z335, Z348.A[Z383], 8L, 16L);
ZdaDDADFC_4(Z335, (STRING)", ", 2L);
INC(Z489);
if (Z489 == 6) {
Z489 = 0;
ZdaDDADFC_7(Z335);
}
if (Z383 >= B_194) break;
}
}
ZdaDDADFC_4(Z335, (STRING)"};", 2L);
ZdaDDADFC_7(Z335);
if (Z359 >= B_188) break;
}
}
}

static void Z434
# ifdef HAVE_ARGS
(ZfM_3 Z335)
# else
(Z335)
ZfM_3 Z335;
# endif
{
LONGINT Z413;
CARDINAL Z489;

Z489 = 0;
{
LONGINT B_195 = 1, B_196 = ZiS8_12;

if (B_195 <= B_196)
for (Z413 = B_195;; Z413 += 1) {
{
register ZiS8_7 *W_42 = &ZiS8_14->A[Z413];

if (W_42->Y4 != ZiS8_0) {
if (ZggFGLABP_29->A[W_42->Y5] != 0) {
ZdaDDADFC_8(Z335, (LONGINT)(3 - ZdaDDAD7_10((LONGINT)ZggFGLABP_29->A[W_42->Y5])));
ZdaDDADFC_4(Z335, (STRING)"yyl", 3L);
ZdaDDADFC_5(Z335, (LONGINT)ZggFGLABP_29->A[W_42->Y5], 0L);
} else {
ZdaDDADFC_5(Z335, 0L, 7L);
}
ZdaDDADFC_3(Z335, ',');
INC(Z489);
if (Z489 == 8) {
Z489 = 0;
ZdaDDADFC_7(Z335);
}
}
}
if (Z413 >= B_196) break;
}
}
if (Z489 > 0) {
ZdaDDADFC_7(Z335);
}
}

void ZdaDDADFC_20
 ARGS ((void))
{
ZfM_3 Z335;
Zp1PEAFD_2 Z225;
CARDINAL Z376, Z359, Z508;
Zfb3DLQ_0 Z518;

Zp1PEAFD_13(ZdaDDADFC_1.A, 32L, &Z307);
Zp1PEAFD_13((STRING)"Rules.cs", 8L, &Z225);
Zp1PEAFD_5(&Z307, &Z225);
Z335 = Z329(Z307);
ZdaDDADFC_4(Z335, (STRING)"using System;", 13L);
ZdaDDADFC_7(Z335);
ZdaDDADFC_4(Z335, (STRING)"using System.Collections.Generic;", 33L);
ZdaDDADFC_7(Z335);
ZdaDDADFC_4(Z335, (STRING)"using System.Linq;", 18L);
ZdaDDADFC_7(Z335);
ZdaDDADFC_4(Z335, (STRING)"using System.Text;", 18L);
ZdaDDADFC_7(Z335);
ZdaDDADFC_7(Z335);
ZdaDDADFC_4(Z335, (STRING)"namespace CoCoLab.Parser.", 25L);
ZdaDDADFC_4(Z335, ZdaDDADFC_1.A, 32L);
ZdaDDADFC_7(Z335);
ZdaDDADFC_4(Z335, (STRING)"{", 1L);
ZdaDDADFC_7(Z335);
ZdaDDADFC_4(Z335, (STRING)"    public enum Rules", 21L);
ZdaDDADFC_7(Z335);
ZdaDDADFC_4(Z335, (STRING)"    {", 5L);
ZdaDDADFC_7(Z335);
Z518 = Zfb3DLQ_1;
{
LONGCARD B_197 = 1, B_198 = ZpmC89LG6_2;

if (B_197 <= B_198)
for (Z376 = B_197;; Z376 += 1) {
{
register Zq0A4_120 *W_43 = &Zq0A4_95->A[Z376]->U_1.V_18.Y17;

if (IN(Zq0A4_47, W_43->Y16->U_1.V_9.Y8.Y5)) {
ZdaDDADFC_4(Z335, (STRING)"        // ", 11L);
ZdaDDADFC_14(Z335, (LONGCARD)W_43->Y16->U_1.V_9.Y8.Y8);
ZdaDDADFC_4(Z335, (STRING)" : ", 3L);
{
LONGCARD B_199 = 1, B_200 = W_43->Y12;

if (B_199 <= B_200)
for (Z359 = B_199;; Z359 += 1) {
ZdaDDADFC_14(Z335, (LONGCARD)W_43->Y17->A[Z359]);
ZdaDDADFC_3(Z335, ' ');
if (Z359 >= B_200) break;
}
}
ZdaDDADFC_7(Z335);
{
register Zq0A4_111 *W_44 = &W_43->Y16->U_1.V_9.Y8;

if (W_44->Y2 == Z518) {
INC(Z508);
} else {
Z518 = W_44->Y2;
Z508 = 1;
}
ZdaDDADFC_4(Z335, (STRING)"        CCL", 11L);
ZdaDDADFC_5(Z335, (LONGINT)ZdaDDADFC_2, 0L);
ZdaDDADFC_3(Z335, '_');
ZdaDDADFC_9(Z335, W_44->Y2);
ZdaDDADFC_3(Z335, '_');
ZdaDDADFC_5(Z335, (LONGINT)Z508, 0L);
ZdaDDADFC_4(Z335, (STRING)" = ", 3L);
ZdaDDADFC_5(Z335, (LONGINT)Z376, 0L);
ZdaDDADFC_3(Z335, ',');
ZdaDDADFC_7(Z335);
}
}
}
if (Z376 >= B_198) break;
}
}
ZdaDDADFC_4(Z335, (STRING)"    }", 5L);
ZdaDDADFC_7(Z335);
ZdaDDADFC_4(Z335, (STRING)"}", 1L);
ZdaDDADFC_7(Z335);
Z334(Z307, Z335);
}

static void Z435
# ifdef HAVE_ARGS
(ZfM_3 Z335)
# else
(Z335)
ZfM_3 Z335;
# endif
{
CARDINAL Z376, Z359;

{
LONGCARD B_201 = 1, B_202 = ZpmC89LG6_2;

if (B_201 <= B_202)
for (Z376 = B_201;; Z376 += 1) {
{
register Zq0A4_120 *W_45 = &Zq0A4_95->A[Z376]->U_1.V_18.Y17;

if (IN(Zq0A4_47, W_45->Y16->U_1.V_9.Y8.Y5) && W_45->Y12 > 0) {
ZdaDDADFC_4(Z335, (STRING)"/* ", 3L);
ZdaDDADFC_14(Z335, (LONGCARD)W_45->Y16->U_1.V_9.Y8.Y8);
ZdaDDADFC_4(Z335, (STRING)" : ", 3L);
{
LONGCARD B_203 = 1, B_204 = W_45->Y12;

if (B_203 <= B_204)
for (Z359 = B_203;; Z359 += 1) {
ZdaDDADFC_14(Z335, (LONGCARD)W_45->Y17->A[Z359]);
ZdaDDADFC_3(Z335, ' ');
if (Z359 >= B_204) break;
}
}
ZdaDDADFC_4(Z335, (STRING)"*/", 2L);
ZdaDDADFC_7(Z335);
ZdaDDADFC_4(Z335, (STRING)"static unsigned short yyRule", 28L);
ZdaDDADFC_5(Z335, (LONGINT)Z376, 0L);
ZdaDDADFC_4(Z335, (STRING)" [] = { ", 8L);
{
LONGCARD B_205 = 1, B_206 = W_45->Y12;

if (B_205 <= B_206)
for (Z359 = B_205;; Z359 += 1) {
ZdaDDADFC_5(Z335, (LONGINT)W_45->Y17->A[Z359], 0L);
ZdaDDADFC_4(Z335, (STRING)", ", 2L);
if (Z359 >= B_206) break;
}
}
ZdaDDADFC_4(Z335, (STRING)"};", 2L);
ZdaDDADFC_7(Z335);
}
}
if (Z376 >= B_202) break;
}
}
ZdaDDADFC_7(Z335);
ZdaDDADFC_4(Z335, (STRING)"static unsigned short * yyRules [] = { 0,", 41L);
ZdaDDADFC_7(Z335);
{
LONGCARD B_207 = 1, B_208 = ZpmC89LG6_2;

if (B_207 <= B_208)
for (Z376 = B_207;; Z376 += 1) {
{
register Zq0A4_120 *W_46 = &Zq0A4_95->A[Z376]->U_1.V_18.Y17;

if (IN(Zq0A4_47, W_46->Y16->U_1.V_9.Y8.Y5) && W_46->Y12 > 0) {
ZdaDDADFC_4(Z335, (STRING)"  yyRule", 8L);
ZdaDDADFC_5(Z335, (LONGINT)Z376, 0L);
} else {
ZdaDDADFC_4(Z335, (STRING)"  0", 3L);
}
ZdaDDADFC_3(Z335, ',');
ZdaDDADFC_7(Z335);
}
if (Z376 >= B_208) break;
}
}
ZdaDDADFC_4(Z335, (STRING)"};", 2L);
ZdaDDADFC_7(Z335);
}

void BEGIN_Generate ARGS ((void))
{
  static BOOLEAN has_been_called = FALSE;
  if (has_been_called) return;
  has_been_called = TRUE;
BEGIN_IO ();
BEGIN_Idents ();
BEGIN_Strings ();
BEGIN_Texts ();
BEGIN_Pointers ();
BEGIN_rSystem ();
BEGIN_General ();
BEGIN_DynArray ();
BEGIN_IO ();
BEGIN_Checks ();
BEGIN_Strings ();
BEGIN_StringM ();
BEGIN_Idents ();
BEGIN_Lists ();
BEGIN_Texts ();
BEGIN_Sets ();
BEGIN_Pack ();
BEGIN_Position ();
BEGIN_Errors ();
BEGIN_Tree ();
BEGIN_Semantic ();
BEGIN_LR1 ();
BEGIN_Conflict ();
BEGIN_Compress ();
BEGIN_GenLRk ();
BEGIN_IO ();
BEGIN_Strings ();
BEGIN_StringM ();
BEGIN_Lists ();
BEGIN_Texts ();
BEGIN_Tree ();
BEGIN_Layout ();
BEGIN_Idents ();

(void) strncpy ((char *)Z303.A, "Scanner", sizeof (Z303.A));
(void) strncpy ((char *)Z304.A, "Parser", sizeof (Z304.A));
(void) strncpy ((char *)Z305.A, "Drv", sizeof (Z305.A));
ZdaDDADFC_0 = MAX_SHORTCARD;
Z311 = 0;
(void) strncpy ((char *)ZdaDDADFC_1.A, "", sizeof (ZdaDDADFC_1.A));
ZdaDDADFC_2 = 1;
}
