#include "SYSTEM_.h"

#ifndef DEFINITION_General
#include "General.h"
#endif

#ifndef DEFINITION_Checks
#include "Checks.h"
#endif

#ifndef DEFINITION_rSystem
#include "rSystem.h"
#endif

#ifndef DEFINITION_IO
#include "IO.h"
#endif

#ifndef DEFINITION_Texts
#include "Texts.h"
#endif

#ifndef DEFINITION_Sets
#include "Sets.h"
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

#ifndef DEFINITION_Errors
#include "Errors.h"
#endif

#ifndef DEFINITION_Scanner
#include "Scanner.h"
#endif

#ifndef DEFINITION_DefTable
#include "DefTable.h"
#endif

#ifndef DEFINITION_Dfa
#include "Dfa.h"
#endif

#ifndef DEFINITION_ScanTabs
#include "ScanTabs.h"
#endif

#ifndef DEFINITION_GenTabs
#include "GenTabs.h"
#endif

#ifndef DEFINITION_Tree
#include "Tree.h"
#endif

#ifndef DEFINITION_Classes
#include "Classes.h"
#endif

#ifndef DEFINITION_UniCode
#include "UniCode.h"
#endif

#ifndef DEFINITION_IO
#include "IO.h"
#endif

#ifndef DEFINITION_Lists
#include "Lists.h"
#endif

#ifndef DEFINITION_Texts
#include "Texts.h"
#endif

#ifndef DEFINITION_Strings
#include "Strings.h"
#endif

#ifndef DEFINITION_Idents
#include "Idents.h"
#endif

#ifndef DEFINITION_Errors
#include "Errors.h"
#endif

#ifndef DEFINITION_Position
#include "Position.h"
#endif

#ifndef DEFINITION_ScanGen
#include "ScanGen.h"
#endif

ZqnGVQ_0 Zpky9jaD_9, Zpky9jaD_10, Zpky9jaD_11, Zpky9jaD_12, Zpky9jaD_13, Zpky9jaD_14, Zpky9jaD_15, Zpky9jaD_16, Zpky9jaD_17, Zpky9jaD_18, Zpky9jaD_19;
CARDINAL Zpky9jaD_20, Zpky9jaD_21, Zpky9jaD_22, Zpky9jaD_23, Zpky9jaD_24, Zpky9jaD_25, Zpky9jaD_26, Zpky9jaD_27;
Zfb3DLQ_0 Zpky9jaD_28, Zpky9jaD_29, Zpky9jaD_30, Zpky9jaD_31, Zpky9jaD_32, Zpky9jaD_33, Zpky9jaD_34, Zpky9jaD_35;
Zfb3DLQ_0 Zpky9jaD_36, Zpky9jaD_37;
Zpky9jaD_8 Zpky9jaD_38;
Zp1PEAFD_2 Zpky9jaD_39, Zpky9jaD_40;
SHORTCARD Zpky9jaD_41;
BOOLEAN Zpky9jaD_42, Zpky9jaD_43, Zpky9jaD_44, Zpky9jaD_45;
BITSET Zpky9jaD_46;
BOOLEAN Zpky9jaD_47;
Zfb3DLQ_0 Zpky9jaD_48;

static CHAR Z218 [] = "Scanner.md";
static CHAR Z219 [] = "Scanner.mi";
static CHAR Z220 [] = "Source.md";
static CHAR Z221 [] = "Source.mi";
static CHAR Z222 [] = "ScanDrv.mi";
static CHAR Z223 [] = "Scanner.h";
static CHAR Z224 [] = "Scanner.c";
static CHAR Z225 [] = "Source.h";
static CHAR Z226 [] = "Source.c";
static CHAR Z227 [] = "ScanDrv.c";
static CHAR Z228 [] = "Scanner.hh";
static CHAR Z229 [] = "Scanner.cxx";
static CHAR Z230 [] = "ScanDrv.cxx";
static CHAR Z231 [] = "Source.hh";
static CHAR Z232 [] = "Source.cxx";
static CHAR Z233 [] = "scanner.e";
static CHAR Z234 [] = "scanner.doc";
static CHAR Z235 [] = "buffer.e";
static CHAR Z236 [] = "source.e";
static CHAR Z237 [] = "scandrv.e";
static CHAR Z238 [] = "scanattr.e";
static CHAR Z239 [] = "attribut.e";
static CHAR Z240 [] = "position.e";
static CHAR Z241 [] = "rfile.e";
static CHAR Z242 [] = "scanner.ads";
static CHAR Z243 [] = "scanner.adb";
static CHAR Z244 [] = "source.ads";
static CHAR Z245 [] = "source.adb";
static CHAR Z246 [] = "scandrv.adb";
static CHAR Z247 [] = "Scanner.java";
static CHAR Z248 [] = "ScanDrv.java";
static CHAR Z249 [] = ".md";
static CHAR Z250 [] = ".mi";
static CHAR Z251 [] = ".h";
static CHAR Z252 [] = ".c";
static CHAR Z253 [] = ".cxx";
static CHAR Z254 [] = ".e";
static CHAR Z255 [] = ".doc";
static CHAR Z256 [] = ".ads";
static CHAR Z257 [] = ".adb";
static CHAR Z258 [] = ".java";
static CHAR Z259 [] = "";
static ZqnGVQ_0 Z260, Z261, Z262, Z263, Z264, Z265, Z266;
static Zp1PEAFD_2 Z267;
static Zfb3DLQ_0 Z268;
static CARDINAL Z269, Z270, Z271;
static struct S_1 {
CHAR A[9 + 1];
} Z172, Z272, Z273;
static void Z276 ARGS ((ZfM_3 Z275, Zp1PEAFD_2 Z277));
static void Z278 ARGS ((ZfM_3 Z275, ZqnGVQ_0 Z279));
static ZfM_3 Z280 ARGS ((Zp1PEAFD_2 Z281));
struct S_11 {
CHAR A[255 + 1];
};
static void Z287 ARGS ((Zp1PEAFD_2 Z281, ZfM_3 Z288));
struct S_10 {
CHAR A[255 + 1];
};
static void Z289 ARGS ((ZfM_3 Z290, Zp1PEAFD_2 Z291));
static void Z295 ARGS ((CHAR Z296[], LONGCARD O_2, Zp1PEAFD_2 Z297, CHAR Z298[], LONGCARD O_1));
struct S_9 {
CHAR A[255 + 1];
};
static void Z306 ARGS ((ZfM_3 Z299, ZfM_3 Z290, Zp1PEAFD_2 Z307, CARDINAL Z308, Zfb3DLQ_0 Z309, ZqnGVQ_0 Z279));
struct S_6 {
CHAR A[255 + 1];
};
struct S_5 {
CHAR A[255 + 1];
};
static void Z338 ARGS ((ZfM_3 Z290));
static void Z303 ARGS ((ZfM_3 Z290));
static void Z327 ARGS ((ZfM_3 Z290));
static void Z343 ARGS ((ZfM_3 Z290, BOOLEAN Z329, BOOLEAN Z330));
static void Z372 ARGS ((ZfM_3 Z290, Zp1PEAFD_2 Z394));
static void Z367 ARGS ((ZfM_3 Z290, Zp1PEAFD_2 Z394, LONGCARD Z395));
static void Z366 ARGS ((ZfM_3 Z290, Zp1PEAFD_2 Z394, LONGCARD Z395));
static void Z364 ARGS ((ZfM_3 Z290, Zp1PEAFD_2 Z394, CHAR Z395));
static void Z390 ARGS ((ZfM_3 Z290, Zp1PEAFD_2 Z394, INTEGER Z395));
static void Z344 ARGS ((ZfM_3 Z290, INTEGER Z381));
static void Z345 ARGS ((ZfM_3 Z290, ZpmCQ_4 Z396));
static CARDINAL Z387 ARGS ((void));
static void Z388 ARGS ((ZfM_3 Z290, CARDINAL Z381));
static void Z389 ARGS ((ZfM_3 Z290, CARDINAL Z381));
static void Z400 ARGS ((Zp1PEAFD_2 *Z399, CHAR Z299[], LONGCARD O_3));
static void Z401 ARGS ((Zp1PEAFD_2 *Z399, INTEGER Z299));
static void Z402 ARGS ((Zp1PEAFD_2 *Z399, Zfb3DLQ_0 Z299));
static void Z403 ARGS ((Zp1PEAFD_2 *Z399, Zfb3DLQ_0 Z362));
static void Z310 ARGS ((ZfM_3 Z290, CARDINAL Z291, Zfb3DLQ_0 Z275));
static void Z406 ARGS ((CHAR Z407[], LONGCARD O_4, ZqnGVQ_0 *Z279));
static void Z408 ARGS ((CHAR Z409[], LONGCARD O_6, CHAR Z410[], LONGCARD O_5, ZqnGVQ_0 *Z279));

void Zpky9jaD_53
# ifdef HAVE_ARGS
(ZfM_3 Z275)
# else
(Z275)
ZfM_3 Z275;
# endif
{
ZfM_33(Z275);
INC(Z269);
}

static void Z276
# ifdef HAVE_ARGS
(ZfM_3 Z275, Zp1PEAFD_2 Z277)
# else
(Z275, Z277)
ZfM_3 Z275;
Zp1PEAFD_2 Z277;
# endif
{
Zp1PEAFD_22(Z275, &Z277);
INC(Z269);
}

static void Z278
# ifdef HAVE_ARGS
(ZfM_3 Z275, ZqnGVQ_0 Z279)
# else
(Z275, Z279)
ZfM_3 Z275;
ZqnGVQ_0 Z279;
# endif
{
ZqnGVQ_5(Z275, Z279);
INC1(Z269, ZijFQQ_13(Z279));
}

static ZfM_3 Z280
# ifdef HAVE_ARGS
(Zp1PEAFD_2 Z281)
# else
(Z281)
Zp1PEAFD_2 Z281;
# endif
{
Zp1PEAFD_2 Z267;
struct S_11 Z282;
INTEGER Z283;

if (Zpky9jaD_43) {
Zp1PEAFD_13((STRING)"yy", 2L, &Z267);
Zp1PEAFD_5(&Z267, &Z281);
Zp1PEAFD_6(&Z267, '\0');
Zp1PEAFD_14(&Z267, Z282.A, 256L);
} else {
Zp1PEAFD_6(&Z281, '\0');
Zp1PEAFD_14(&Z281, Z282.A, 256L);
}
Z283 = ZfM_20(Z282.A, 256L);
if (Z283 < 0) {
ZblNKKO_45((STRING)"can not access file", 19L, (LONGCARD)ZblNKKO_14, ZmtLFGGBG_1, (LONGCARD)ZblNKKO_32, ADR (Z282));
}
return Z283;
}

static void Z287
# ifdef HAVE_ARGS
(Zp1PEAFD_2 Z281, ZfM_3 Z288)
# else
(Z281, Z288)
Zp1PEAFD_2 Z281;
ZfM_3 Z288;
# endif
{
Zp1PEAFD_2 Z277, Z267;
struct S_10 Z282;
INTEGER Z283;

ZfM_21(Z288);
if (Zpky9jaD_43) {
Zp1PEAFD_13((STRING)"gupd ", 5L, &Z267);
Zp1PEAFD_5(&Z267, &Z281);
Zp1PEAFD_13((STRING)" yy", 3L, &Z277);
Zp1PEAFD_5(&Z267, &Z277);
Zp1PEAFD_5(&Z267, &Z281);
Zp1PEAFD_6(&Z267, '\0');
Zp1PEAFD_14(&Z267, Z282.A, 256L);
Z283 = rSystem(Z282.A, 256L);
}
}

static void Z289
# ifdef HAVE_ARGS
(ZfM_3 Z290, Zp1PEAFD_2 Z291)
# else
(Z290, Z291)
ZfM_3 Z290;
Zp1PEAFD_2 Z291;
# endif
{
CHAR Z292;
CARDINAL Z293;

Z293 = 3;
for (;;) {
INC(Z293);
if (Z293 > Zp1PEAFD_7(&Z291)) {
Zpky9jaD_53(Z290);
goto EXIT_1;
}
Z292 = Zp1PEAFD_12(&Z291, (Zp1PEAFD_1)Z293);
switch (Z292) {
case '@':;
if (Zpky9jaD_37 == Zfb3DLQ_1) {
ZfM_29(Z290, Z172.A, 10L);
} else {
Zfb3DLQ_7(Z290, Zpky9jaD_37);
}
break;
case '$':;
if (Zpky9jaD_37 == Zfb3DLQ_1) {
if (Zp1PEAFD_12(&Z291, (Zp1PEAFD_1)(Z293 + 1)) == '_') {
INC(Z293);
}
} else {
Zfb3DLQ_7(Z290, Zpky9jaD_37);
}
break;
default:
ZfM_24(Z290, Z292);
break;
}
} EXIT_1:;
}

static void Z295
# ifdef HAVE_ARGS
(CHAR Z296[], LONGCARD O_2, Zp1PEAFD_2 Z297, CHAR Z298[], LONGCARD O_1)
# else
(Z296, O_2, Z297, Z298, O_1)
CHAR Z296[];
LONGCARD O_2;
Zp1PEAFD_2 Z297;
CHAR Z298[];
LONGCARD O_1;
# endif
{
ZfM_3 Z299, Z290;
Zp1PEAFD_2 Z300, Z267, Z291;
struct S_9 Z282;
INTEGER Z283;
OPEN_ARRAY_LOCALS

ALLOC_OPEN_ARRAYS (O_1 * sizeof (CHAR) + O_2 * sizeof (CHAR), 2)
COPY_OPEN_ARRAY (Z298, O_1, CHAR)
COPY_OPEN_ARRAY (Z296, O_2, CHAR)
Zp1PEAFD_13(Z296, O_2, &Z300);
Zp1PEAFD_3(&Z267, &Zpky9jaD_40);
Zp1PEAFD_5(&Z267, &Z300);
Zp1PEAFD_6(&Z267, '\0');
Zp1PEAFD_14(&Z267, Z282.A, 256L);
Z299 = ZfM_4(Z282.A, 256L);
if (Z299 < 0) {
ZblNKKO_45((STRING)"can not access file", 19L, (LONGCARD)ZblNKKO_14, ZmtLFGGBG_1, (LONGCARD)ZblNKKO_32, ADR (Z282));
}
Zp1PEAFD_13(Z298, O_1, &Z300);
Zp1PEAFD_5(&Z297, &Z300);
Z290 = Z280(Z297);
while (!ZfM_19(Z299)) {
Zp1PEAFD_20(Z299, &Z291);
if (Zp1PEAFD_7(&Z291) >= 2 && Zp1PEAFD_12(&Z291, 1) == '$') {
switch (Zp1PEAFD_12(&Z291, 2)) {
case '@':;
Z289(Z290, Z291);
break;
case '#':;
if (Zpky9jaD_36 != Zfb3DLQ_1) {
ZfM_29(Z290, (STRING)"package ", 8L);
Zfb3DLQ_7(Z290, Zpky9jaD_36);
ZfM_29(Z290, (STRING)";", 1L);
Zpky9jaD_53(Z290);
}
break;
case 'V':;
Z303(Z290);
break;
}
} else {
Z276(Z290, Z291);
}
}
ZfM_5(Z299);
Z287(Z297, Z290);
if (Zpky9jaD_38 == Zpky9jaD_60) {
Zp1PEAFD_13((STRING)"gcpp ", 5L, &Z300);
Zp1PEAFD_5(&Z300, &Z297);
Zp1PEAFD_6(&Z300, '\0');
Zp1PEAFD_14(&Z300, Z282.A, 256L);
Z283 = rSystem(Z282.A, 256L);
}
FREE_OPEN_ARRAYS
}

static void Z306
# ifdef HAVE_ARGS
(ZfM_3 Z299, ZfM_3 Z290, Zp1PEAFD_2 Z307, CARDINAL Z308, Zfb3DLQ_0 Z309, ZqnGVQ_0 Z279)
# else
(Z299, Z290, Z307, Z308, Z309, Z279)
ZfM_3 Z299, Z290;
Zp1PEAFD_2 Z307;
CARDINAL Z308;
Zfb3DLQ_0 Z309;
ZqnGVQ_0 Z279;
# endif
{
Zp1PEAFD_2 Z291;

if (ZqnGVQ_4(&Z279)) {
if (Zp1PEAFD_7(&Z307) >= 3 && Zp1PEAFD_12(&Z307, 3) == '[') {
for (;;) {
if (ZfM_19(Z299)) {
goto EXIT_2;
}
Zp1PEAFD_20(Z299, &Z291);
if (Zp1PEAFD_7(&Z291) >= 2 && Zp1PEAFD_12(&Z291, 1) == '$') {
if (Zp1PEAFD_12(&Z291, 2) == ']') {
goto EXIT_2;
}
if (Zp1PEAFD_12(&Z291, 2) == '@') {
Z289(Z290, Z291);
} else {
ZblNKKO_44((STRING)"missing $] in skeleton?", 23L, (LONGCARD)ZblNKKO_14, ZmtLFGGBG_1);
}
} else {
Z276(Z290, Z291);
}
} EXIT_2:;
}
} else {
if (Zp1PEAFD_7(&Z307) >= 3 && Zp1PEAFD_12(&Z307, 3) == '[') {
for (;;) {
if (ZfM_19(Z299)) {
ZblNKKO_44((STRING)"missing $] in skeleton?", 23L, (LONGCARD)ZblNKKO_14, ZmtLFGGBG_1);
goto EXIT_3;
}
Zp1PEAFD_20(Z299, &Z291);
if (Zp1PEAFD_7(&Z291) >= 2 && Zp1PEAFD_12(&Z291, 1) == '$') {
if (Zp1PEAFD_12(&Z291, 2) == ']') {
goto EXIT_3;
}
if (Zp1PEAFD_12(&Z291, 2) != '@') {
ZblNKKO_44((STRING)"missing $] in skeleton?", 23L, (LONGCARD)ZblNKKO_14, ZmtLFGGBG_1);
}
}
} EXIT_3:;
}
Z310(Z290, Z308, Z309);
Z278(Z290, Z279);
Z310(Z290, Z269 + 2, Z268);
}
}

void Zpky9jaD_52
 ARGS ((void))
{
Zp1PEAFD_2 Z312, Z313, Z314;

Zfb3DLQ_3(Zpky9jaD_37, &Z312);
Zp1PEAFD_13(Z272.A, 10L, &Z314);
Zp1PEAFD_5(&Z312, &Z314);
if (Zpky9jaD_37 == Zfb3DLQ_1) {
Zp1PEAFD_13(Z172.A, 10L, &Z313);
} else {
Zfb3DLQ_3(Zpky9jaD_37, &Z313);
}
Zp1PEAFD_13(Z273.A, 10L, &Z314);
Zp1PEAFD_5(&Z313, &Z314);
switch (Zpky9jaD_38) {
case Zpky9jaD_55:;
Z295(Z220, 9L, Z312, Z249, 3L);
Z295(Z221, 9L, Z312, Z250, 3L);
Z295(Z222, 10L, Z313, Z250, 3L);
break;
case Zpky9jaD_56:;
Z295(Z225, 8L, Z312, Z251, 2L);
Z295(Z226, 8L, Z312, Z252, 2L);
Z295(Z227, 9L, Z313, Z252, 2L);
break;
case Zpky9jaD_57:;
Z295(Z231, 9L, Z312, Z251, 2L);
Z295(Z232, 10L, Z312, Z253, 4L);
Z295(Z230, 11L, Z313, Z253, 4L);
break;
case Zpky9jaD_58:;
Z295(Z236, 8L, Z312, Z254, 2L);
Z295(Z237, 9L, Z313, Z254, 2L);
Zp1PEAFD_13(Z239, 10L, &Z314);
Z295(Z239, 10L, Z314, Z259, 1L);
Zp1PEAFD_13(Z238, 10L, &Z314);
Z295(Z238, 10L, Z314, Z259, 1L);
Zp1PEAFD_13(Z240, 10L, &Z314);
Z295(Z240, 10L, Z314, Z259, 1L);
Zp1PEAFD_13(Z241, 7L, &Z314);
Z295(Z241, 7L, Z314, Z259, 1L);
break;
case Zpky9jaD_59:;
Z295(Z244, 10L, Z312, Z256, 4L);
Z295(Z245, 10L, Z312, Z257, 4L);
Z295(Z246, 11L, Z313, Z257, 4L);
break;
case Zpky9jaD_60:;
Z295(Z248, 12L, Z313, Z258, 5L);
break;
}
}

void Zpky9jaD_51
 ARGS ((void))
{
ZfM_3 Z299, Z290;
Zp1PEAFD_2 Z300, Z277, Z291;
struct S_6 Z282;

switch (Zpky9jaD_38) {
case Zpky9jaD_55:;
Zp1PEAFD_13(Z218, 10L, &Z300);
break;
case Zpky9jaD_56:;
Zp1PEAFD_13(Z223, 9L, &Z300);
break;
case Zpky9jaD_57:;
Zp1PEAFD_13(Z228, 10L, &Z300);
break;
case Zpky9jaD_58:;
return;
Zp1PEAFD_13(Z234, 11L, &Z300);
break;
case Zpky9jaD_59:;
Zp1PEAFD_13(Z242, 11L, &Z300);
break;
case Zpky9jaD_60:;
return;
break;
}
Zp1PEAFD_3(&Z267, &Zpky9jaD_40);
Zp1PEAFD_5(&Z267, &Z300);
Zp1PEAFD_6(&Z267, '\0');
Zp1PEAFD_14(&Z267, Z282.A, 256L);
Z299 = ZfM_4(Z282.A, 256L);
if (Z299 < 0) {
ZblNKKO_45((STRING)"can not access file", 19L, (LONGCARD)ZblNKKO_14, ZmtLFGGBG_1, (LONGCARD)ZblNKKO_32, ADR (Z282));
}
if (Zpky9jaD_37 == Zfb3DLQ_1) {
Zp1PEAFD_13(Z172.A, 10L, &Z267);
} else {
Zfb3DLQ_3(Zpky9jaD_37, &Z267);
}
switch (Zpky9jaD_38) {
case Zpky9jaD_55:;
Zp1PEAFD_13(Z249, 3L, &Z300);
break;
case Zpky9jaD_56:;
case Zpky9jaD_57:;
Zp1PEAFD_13(Z251, 2L, &Z300);
break;
case Zpky9jaD_58:;
Zp1PEAFD_13(Z255, 4L, &Z300);
break;
case Zpky9jaD_59:;
Zp1PEAFD_13(Z256, 4L, &Z300);
break;
}
Zp1PEAFD_5(&Z267, &Z300);
Z290 = Z280(Z267);
Z268 = Zfb3DLQ_2(&Z267);
Z269 = 0;
while (!ZfM_19(Z299)) {
Zp1PEAFD_20(Z299, &Z291);
if (Zp1PEAFD_7(&Z291) >= 2 && Zp1PEAFD_12(&Z291, 1) == '$') {
switch (Zp1PEAFD_12(&Z291, 2)) {
case '-':;
Z306(Z299, Z290, Z291, Zpky9jaD_20, Zpky9jaD_28, Zpky9jaD_9);
break;
case 'E':;
Z306(Z299, Z290, Z291, Zpky9jaD_21, Zpky9jaD_29, Zpky9jaD_10);
break;
case 'V':;
Z303(Z290);
break;
case 'W':;
Z327(Z290);
break;
case '@':;
Z289(Z290, Z291);
break;
case ']':;
ZblNKKO_44((STRING)"unpaired $] in interface skeleton", 33L, (LONGCARD)ZblNKKO_14, ZmtLFGGBG_1);
break;
}
} else {
Z276(Z290, Z291);
}
}
ZfM_5(Z299);
Z287(Z267, Z290);
}

void Zpky9jaD_50
# ifdef HAVE_ARGS
(BOOLEAN Z329, BOOLEAN Z330)
# else
(Z329, Z330)
BOOLEAN Z329, Z330;
# endif
{
ZfM_3 Z299, Z290;
struct S_5 Z282;
Zp1PEAFD_2 Z300, Z291, Z331, Z314, Z332;
INTEGER Z283;
CHAR Z292;

if (Zp1PEAFD_7(&Zpky9jaD_39) == 0) {
switch (Zpky9jaD_38) {
case Zpky9jaD_55:;
Zp1PEAFD_13(Z219, 10L, &Z300);
break;
case Zpky9jaD_56:;
Zp1PEAFD_13(Z224, 9L, &Z300);
break;
case Zpky9jaD_57:;
Zp1PEAFD_13(Z229, 11L, &Z300);
break;
case Zpky9jaD_58:;
Zp1PEAFD_13(Z233, 9L, &Z300);
break;
case Zpky9jaD_59:;
Zp1PEAFD_13(Z243, 11L, &Z300);
break;
case Zpky9jaD_60:;
Zp1PEAFD_13(Z247, 12L, &Z300);
break;
}
Zp1PEAFD_3(&Z267, &Zpky9jaD_40);
Zp1PEAFD_5(&Z267, &Z300);
} else {
Zp1PEAFD_3(&Z267, &Zpky9jaD_39);
}
Zp1PEAFD_6(&Z267, '\0');
Zp1PEAFD_14(&Z267, Z282.A, 256L);
Z299 = ZfM_4(Z282.A, 256L);
if (Z299 < 0) {
ZblNKKO_45((STRING)"can not access file", 19L, (LONGCARD)ZblNKKO_14, ZmtLFGGBG_1, (LONGCARD)ZblNKKO_32, ADR (Z282));
}
if (Zpky9jaD_37 == Zfb3DLQ_1) {
Zp1PEAFD_13(Z172.A, 10L, &Z267);
} else {
Zfb3DLQ_3(Zpky9jaD_37, &Z267);
}
switch (Zpky9jaD_38) {
case Zpky9jaD_55:;
Zp1PEAFD_13(Z250, 3L, &Z300);
break;
case Zpky9jaD_56:;
Zp1PEAFD_13(Z252, 2L, &Z300);
break;
case Zpky9jaD_57:;
Zp1PEAFD_13(Z253, 4L, &Z300);
break;
case Zpky9jaD_58:;
Zp1PEAFD_13(Z254, 2L, &Z300);
break;
case Zpky9jaD_59:;
Zp1PEAFD_13(Z257, 4L, &Z300);
break;
case Zpky9jaD_60:;
Zp1PEAFD_13(Z258, 5L, &Z300);
break;
}
Zp1PEAFD_5(&Z267, &Z300);
Z290 = Z280(Z267);
Z268 = Zfb3DLQ_2(&Z267);
Z269 = 0;
if (Zpky9jaD_37 == Zfb3DLQ_1) {
Zp1PEAFD_13(Z172.A, 10L, &Z332);
Zpky9jaD_48 = Zfb3DLQ_2(&Z332);
} else {
Zpky9jaD_48 = Zpky9jaD_37;
}
while (!ZfM_19(Z299)) {
Zp1PEAFD_20(Z299, &Z291);
if (Zp1PEAFD_7(&Z291) >= 2 && Zp1PEAFD_12(&Z291, 1) == '$') {
Z292 = Zp1PEAFD_12(&Z291, 2);
switch (Z292) {
case 'G':;
Z306(Z299, Z290, Z291, Zpky9jaD_22, Zpky9jaD_30, Zpky9jaD_11);
break;
case 'C':;
Z338(Z290);
break;
case 'V':;
Z303(Z290);
break;
case 'W':;
Z327(Z290);
break;
case 'M':;
if (Z329) {
Z291.Y0.A[1] = ' ';
Z291.Y0.A[2] = ' ';
Z276(Z290, Z291);
}
break;
case 'L':;
Z306(Z299, Z290, Z291, Zpky9jaD_23, Zpky9jaD_31, Zpky9jaD_12);
break;
case 'J':;
if (ZdaDwjxF_14) {
Z291.Y0.A[1] = ' ';
Z291.Y0.A[2] = ' ';
Z276(Z290, Z291);
}
break;
case 'A':;
Z343(Z290, Z329, Z330);
break;
case 'N':;
if (Z329) {
Z344(Z290, (LONGINT)(ZdaDwjxF_11 + 1));
} else {
Z345(Z290, ZdaDwjxF_17->A[0].Y5);
}
break;
case 'P':;
if (Z329) {
Z344(Z290, (LONGINT)ZdaDwjxF_16);
} else {
Z344(Z290, (LONGINT)ZpmCQ_19(&ZdaDwjxF_17->A[ZdaDwjxF_16].Y5));
}
break;
case 'D':;
Z306(Z299, Z290, Z291, Zpky9jaD_26, Zpky9jaD_34, Zpky9jaD_15);
break;
case 'O':;
if (Z329) {
Z344(Z290, (LONGINT)ZdaDwjxF_15);
} else {
Z344(Z290, (LONGINT)ZpmCQ_19(&ZdaDwjxF_17->A[ZdaDwjxF_15].Y5));
}
break;
case '-':;
Z306(Z299, Z290, Z291, Zpky9jaD_20, Zpky9jaD_28, Zpky9jaD_9);
break;
case 'X':;
Z306(Z299, Z290, Z291, Zpky9jaD_21, Zpky9jaD_29, Zpky9jaD_10);
break;
case 'E':;
Z306(Z299, Z290, Z291, Zpky9jaD_27, Zpky9jaD_35, Zpky9jaD_16);
break;
case 'I':;
Z306(Z299, Z290, Z291, Zpky9jaD_24, Zpky9jaD_32, Zpky9jaD_13);
break;
case 'F':;
Z306(Z299, Z290, Z291, Zpky9jaD_25, Zpky9jaD_33, Zpky9jaD_14);
break;
case 'T':;
Zpky9wjxF_47(Z290);
break;
case 'B':;
Zpky9wjxF_48(Z290);
break;
case 'U':;
Zpky9wjxF_49(Z290);
break;
case 'R':;
Zpky9wjxF_50(Z290);
break;
case 'Q':;
if (Z329) {
Zpky9wjxF_51(Z290);
}
break;
case 'H':;
Zpky9wjxF_55(Z290, Z329);
break;
case 'K':;
Zpky9wjxF_56(Z290, Z329);
break;
case '@':;
Z289(Z290, Z291);
break;
case '#':;
if (Zpky9jaD_36 != Zfb3DLQ_1) {
ZfM_29(Z290, (STRING)"package ", 8L);
Zfb3DLQ_7(Z290, Zpky9jaD_36);
ZfM_29(Z290, (STRING)";", 1L);
Zpky9jaD_53(Z290);
}
break;
case 'Y':;
if (Zaf1_7 >= (ZrxAagD3_3)Zgd7EPBB_9) {
Zpky9wjxF_52(Z290);
}
break;
case 'S':;
if (Zaf1_7 >= (ZrxAagD3_3)Zgd7EPBB_9) {
Zpky9wjxF_53(Z290);
}
break;
case 'Z':;
if (Zpky9jaD_45) {
Zpky9wjxF_54(Z290);
}
break;
case ']':;
ZblNKKO_44((STRING)"unpaired $] in scanner skeleton", 31L, (LONGCARD)ZblNKKO_14, ZmtLFGGBG_1);
break;
default:
ZblNKKO_45((STRING)"unknown $ directive in skeleton", 31L, (LONGCARD)ZblNKKO_14, ZmtLFGGBG_1, (LONGCARD)ZblNKKO_28, ADR (Z292));
break;
}
} else {
Z276(Z290, Z291);
}
}
ZfM_5(Z299);
Z287(Z267, Z290);
if (Zpky9jaD_38 == Zpky9jaD_58) {
Zfb3DLQ_3(Zpky9jaD_37, &Z331);
Zp1PEAFD_13(Z235, 8L, &Z314);
Zp1PEAFD_5(&Z331, &Z314);
Z295(Z235, 8L, Z331, Z259, 1L);
}
if (Zpky9jaD_38 == Zpky9jaD_55 || Zpky9jaD_38 == Zpky9jaD_59 || Zpky9jaD_38 == Zpky9jaD_58 || Zpky9jaD_38 == Zpky9jaD_60) {
Zp1PEAFD_13((STRING)"gcpp ", 5L, &Z300);
Zp1PEAFD_5(&Z300, &Z267);
Zp1PEAFD_6(&Z300, '\0');
Zp1PEAFD_14(&Z300, Z282.A, 256L);
Z283 = rSystem(Z282.A, 256L);
}
}

static void Z338
# ifdef HAVE_ARGS
(ZfM_3 Z290)
# else
(Z290)
ZfM_3 Z290;
# endif
{
Zae5ojx8B_1 Z361;
Zp1PEAFD_2 Z277;
Zfb3DLQ_0 Z362;
LONGCARD Z363;

Zp1PEAFD_13((STRING)"yyFirstCh", 9L, &Z277);
Z364(Z290, Z277, CHR(Zaf1_1));
if (Zpky9jaD_38 == Zpky9jaD_55) {
if (Zaf1_7 < 256) {
Zp1PEAFD_13((STRING)"yyLastCh", 8L, &Z277);
Z364(Z290, Z277, CHR(Zaf1_7));
} else {
ZblNKKO_44((STRING)"can not generate multibyte scanner in Modula-2", 46L, (LONGCARD)ZblNKKO_16, ZmtLFGGBG_1);
}
}
Zp1PEAFD_13((STRING)"yyEolCh", 7L, &Z277);
Z364(Z290, Z277, Zq0A4_29.A[CHR(Zaf1_4)]);
Zp1PEAFD_13((STRING)"yyEobCh", 7L, &Z277);
Z364(Z290, Z277, Zq0A4_29.A[CHR(Zaf1_5)]);
Zp1PEAFD_13((STRING)"yyDStateCount", 13L, &Z277);
Z366(Z290, Z277, (LONGCARD)Zaf1_8);
Zp1PEAFD_13((STRING)"yyTableSize", 11L, &Z277);
Z366(Z290, Z277, Zpky9wjxF_40);
Zp1PEAFD_13((STRING)"yyEobState", 10L, &Z277);
Z366(Z290, Z277, ZpmCQ_19(&ZdaDwjxF_17->A[ZdaDwjxF_15].Y5));
Zp1PEAFD_13((STRING)"yyDefaultState", 14L, &Z277);
Z366(Z290, Z277, ZpmCQ_19(&ZdaDwjxF_17->A[ZdaDwjxF_16].Y5));
if (Zpky9jaD_45) {
Zp1PEAFD_13((STRING)"yyToClassArraySize", 18L, &Z277);
Z367(Z290, Z277, ZdaDDAD7_5(Zaf1_7, (LONGCARD)(Zgd7EPBB_9 - 1)) + 1);
if (Zaf1_7 >= (ZrxAagD3_3)Zgd7EPBB_9) {
Zp1PEAFD_13((STRING)"yyToClassRangeSize", 18L, &Z277);
Z366(Z290, Z277, (LONGCARD)(Zgd7EPBB_12 + 1));
}
} else {
Zp1PEAFD_13((STRING)"yyToClassArraySize", 18L, &Z277);
Z366(Z290, Z277, 0L);
}
{
LONGINT B_1 = 1, B_2 = Zae5ojx8B_3;

if (B_1 <= B_2)
for (Z361 = B_1;; Z361 += 1) {
if (Zae5ojx8B_7(Z361) == Zae5ojx8B_12) {
Zae5ojx8B_9(Z361, &Z362, &Z363);
Zfb3DLQ_3(Z362, &Z277);
Z366(Z290, Z277, Z363);
}
if (Z361 >= B_2) break;
}
}
}

static void Z303
# ifdef HAVE_ARGS
(ZfM_3 Z290)
# else
(Z290)
ZfM_3 Z290;
# endif
{
Zp1PEAFD_2 Z277, Z369;

if (Zpky9jaD_37 == Zfb3DLQ_1) {
Zp1PEAFD_13((STRING)"xxMaxCharacter", 14L, &Z277);
} else {
Zfb3DLQ_3(Zpky9jaD_37, &Z277);
Zp1PEAFD_6(&Z277, '_');
Zp1PEAFD_13((STRING)"xxMaxCharacter", 14L, &Z369);
Zp1PEAFD_5(&Z277, &Z369);
}
Z367(Z290, Z277, Zaf1_7);
}

static void Z327
# ifdef HAVE_ARGS
(ZfM_3 Z290)
# else
(Z290)
ZfM_3 Z290;
# endif
{
Zp1PEAFD_2 Z277;

if (IN(Zpky9jaD_2, Zpky9jaD_46)) {
Zp1PEAFD_13((STRING)"xxGetWord", 9L, &Z277);
Z372(Z290, Z277);
}
if (IN(Zpky9jaD_3, Zpky9jaD_46)) {
Zp1PEAFD_13((STRING)"xxGetLower", 10L, &Z277);
Z372(Z290, Z277);
}
if (IN(Zpky9jaD_4, Zpky9jaD_46)) {
Zp1PEAFD_13((STRING)"xxGetUpper", 10L, &Z277);
Z372(Z290, Z277);
}
if (IN(Zpky9jaD_5, Zpky9jaD_46)) {
Zp1PEAFD_13((STRING)"xxinput", 7L, &Z277);
Z372(Z290, Z277);
}
if (IN(Zpky9jaD_6, Zpky9jaD_46)) {
Zp1PEAFD_13((STRING)"xxyyPush", 8L, &Z277);
Z372(Z290, Z277);
}
if (IN(Zpky9jaD_7, Zpky9jaD_46)) {
Zp1PEAFD_13((STRING)"xxyyPop", 7L, &Z277);
Z372(Z290, Z277);
}
}

static void Z343
# ifdef HAVE_ARGS
(ZfM_3 Z290, BOOLEAN Z329, BOOLEAN Z330)
# else
(Z290, Z329, Z330)
ZfM_3 Z290;
BOOLEAN Z329, Z330;
# endif
{
SHORTCARD Z378, Z379, Z380;
Zp1PEAFD_2 Z277, Z369;
CARDINAL Z381;
Zaf1_6 Z382;
ZpmCQ_4 Z383, Z384;

ZpmCQ_5(&Z383, (LONGCARD)ZdaDwjxF_11);
ZpmCQ_5(&Z384, Zpky9FDA_10.Y0.Y1);
if (Z329) {
Z278(Z290, Z261);
} else {
Z278(Z290, Z260);
}
{
SHORTCARD B_3 = 1, B_4 = ZdaDwjxF_11 - 2;

if (B_3 <= B_4)
for (Z379 = B_3;; Z379 += 1) {
if (!ZpmCQ_26(ZdaDwjxF_17->A[Z379].Y5)) {
if (Z329) {
Z344(Z290, (LONGINT)Z379);
} else {
Z345(Z290, ZdaDwjxF_17->A[Z379].Y5);
}
if (ZdaDwjxF_17->A[Z379].Y2 == ZdaDwjxF_1) {
if (ZpmCQ_15(&ZdaDwjxF_17->A[Z379].Y4) == 1) {
Z278(Z290, Z262);
ZfM_25(Z290, (LONGINT)ZpmCQ_19(&ZdaDwjxF_17->A[Z379].Y4), 0L);
Z278(Z290, Z263);
} else {
Z278(Z290, Z264);
Z345(Z290, ZdaDwjxF_17->A[Z379].Y4);
switch (Zpky9jaD_38) {
case Zpky9jaD_56:;
case Zpky9jaD_57:;
Z381 = Z387();
Z388(Z290, Z381);
Z278(Z290, Z265);
Z389(Z290, Z381);
break;
default:
Z278(Z290, Z265);
break;
}
}
} else if (ZdaDwjxF_17->A[Z379].Y2 > 0) {
switch (Zpky9jaD_38) {
case Zpky9jaD_58:;
ZfM_29(Z290, (STRING)"yyChBufferIndex := yyChBufferIndex - ", 37L);
ZfM_25(Z290, (LONGINT)ZdaDwjxF_17->A[Z379].Y2, 0L);
ZfM_29(Z290, (STRING)";", 1L);
Zpky9jaD_53(Z290);
break;
default:
Zp1PEAFD_13((STRING)"yyChBufferIndex", 15L, &Z277);
Z390(Z290, Z277, (LONGINT)ZdaDwjxF_17->A[Z379].Y2);
break;
}
switch (Zpky9jaD_38) {
case Zpky9jaD_56:;
if (Zpky9jaD_37 == Zfb3DLQ_1) {
Zp1PEAFD_13((STRING)"TokenLength", 11L, &Z277);
} else {
Zfb3DLQ_3(Zpky9jaD_37, &Z277);
Zp1PEAFD_6(&Z277, '_');
Zp1PEAFD_13((STRING)"TokenLength", 11L, &Z369);
Zp1PEAFD_5(&Z277, &Z369);
}
break;
case Zpky9jaD_60:;
Zp1PEAFD_13((STRING)"tokenLength", 11L, &Z277);
break;
default:
Zp1PEAFD_13((STRING)"TokenLength", 11L, &Z277);
break;
}
Z390(Z290, Z277, (LONGINT)ZdaDwjxF_17->A[Z379].Y2);
} else if (ZdaDwjxF_17->A[Z379].Y2 < 0) {
ZfM_29(Z290, (STRING)"yyLess (", 8L);
ZfM_25(Z290, (LONGINT)(-ZdaDwjxF_17->A[Z379].Y2), 0L);
ZfM_29(Z290, (STRING)");", 2L);
Zpky9jaD_53(Z290);
}
Z378 = ZdaDwjxF_17->A[Z379].Y1;
if (ZdaDwjxF_19->A[Z378].Y3 == Zpky9jaD_0) {
ZfM_29(Z290, (STRING)"yySetPosition", 13L);
Zpky9jaD_53(Z290);
}
Z310(Z290, ZdaDwjxF_19->A[Z378].Y2, ZdaDwjxF_19->A[Z378].Y1);
switch (Zpky9jaD_38) {
case Zpky9jaD_56:;
case Zpky9jaD_57:;
case Zpky9jaD_60:;
ZfM_24(Z290, '{');
break;
default:
break;
}
Z278(Z290, ZdaDwjxF_19->A[Z378].Y0);
Z310(Z290, Z269 + 2, Z268);
switch (Zpky9jaD_38) {
case Zpky9jaD_56:;
case Zpky9jaD_57:;
ZfM_29(Z290, (STRING)"} ", 2L);
if (!Zpky9jaD_44) {
INC(Z271);
ZfM_29(Z290, (STRING)"yyy", 3L);
ZfM_25(Z290, (LONGINT)Z271, 0L);
ZfM_29(Z290, (STRING)": ", 2L);
}
break;
case Zpky9jaD_60:;
ZfM_29(Z290, (STRING)"} ", 2L);
if (!Zpky9jaD_44) {
INC(Z271);
ZfM_29(Z290, (STRING)"case yyDStateCount + ", 21L);
ZfM_25(Z290, (LONGINT)Z271, 0L);
ZfM_29(Z290, (STRING)": ", 2L);
}
break;
default:
break;
}
Z278(Z290, Z266);
} else if (ZdaDwjxF_17->A[Z379].Y0.Y1 != 0 && Z330) {
ZblNKKO_44((STRING)"pattern will never match", 24L, (LONGCARD)ZblNKKO_17, ZdaDwjxF_17->A[Z379].Y0);
ZpmCQ_32(&Z384);
{
SHORTCARD B_5 = 1, B_6 = Zaf1_8;

if (B_5 <= B_6)
for (Z382 = B_5;; Z382 += 1) {
Zaf1_19(Z382, &Z383);
if (ZpmCQ_25((LONGCARD)Z379, &Z383)) {
for (;;) {
Z380 = ZpmCQ_20(&Z383);
if (Z380 == Z379) {
goto EXIT_4;
}
if (!ZpmCQ_25(ZdaDwjxF_17->A[Z380].Y0.Y1, &Z384)) {
ZblNKKO_45((STRING)"because of pattern at position", 30L, (LONGCARD)ZblNKKO_20, ZdaDwjxF_17->A[Z379].Y0, (LONGCARD)ZblNKKO_36, ADR (ZdaDwjxF_17->A[Z380].Y0));
ZpmCQ_13(&Z384, ZdaDwjxF_17->A[Z380].Y0.Y1);
}
} EXIT_4:;
}
if (Z382 >= B_6) break;
}
}
}
if (Z379 >= B_4) break;
}
}
ZpmCQ_7(&Z383);
ZpmCQ_7(&Z384);
}

static void Z372
# ifdef HAVE_ARGS
(ZfM_3 Z290, Zp1PEAFD_2 Z394)
# else
(Z290, Z394)
ZfM_3 Z290;
Zp1PEAFD_2 Z394;
# endif
{
ZfM_29(Z290, (STRING)"# define ", 9L);
Zp1PEAFD_21(Z290, &Z394);
Zpky9jaD_53(Z290);
}

static void Z367
# ifdef HAVE_ARGS
(ZfM_3 Z290, Zp1PEAFD_2 Z394, LONGCARD Z395)
# else
(Z290, Z394, Z395)
ZfM_3 Z290;
Zp1PEAFD_2 Z394;
LONGCARD Z395;
# endif
{
ZfM_29(Z290, (STRING)"# define ", 9L);
Zp1PEAFD_21(Z290, &Z394);
ZfM_24(Z290, '\t');
ZfM_32(Z290, Z395, 0L);
Zpky9jaD_53(Z290);
}

static void Z366
# ifdef HAVE_ARGS
(ZfM_3 Z290, Zp1PEAFD_2 Z394, LONGCARD Z395)
# else
(Z290, Z394, Z395)
ZfM_3 Z290;
Zp1PEAFD_2 Z394;
LONGCARD Z395;
# endif
{
switch (Zpky9jaD_38) {
case Zpky9jaD_55:;
Zp1PEAFD_21(Z290, &Z394);
ZfM_29(Z290, (STRING)"	= ", 3L);
ZfM_32(Z290, Z395, 0L);
ZfM_24(Z290, ';');
Zpky9jaD_53(Z290);
break;
case Zpky9jaD_56:;
Z367(Z290, Z394, Z395);
break;
case Zpky9jaD_57:;
ZfM_29(Z290, (STRING)"static const long ", 18L);
Zp1PEAFD_21(Z290, &Z394);
ZfM_29(Z290, (STRING)"	= ", 3L);
ZfM_32(Z290, Z395, 0L);
ZfM_24(Z290, ';');
Zpky9jaD_53(Z290);
break;
case Zpky9jaD_58:;
Zp1PEAFD_21(Z290, &Z394);
ZfM_29(Z290, (STRING)" : INTEGER is ", 14L);
ZfM_32(Z290, Z395, 0L);
ZfM_24(Z290, ';');
Zpky9jaD_53(Z290);
break;
case Zpky9jaD_59:;
Zp1PEAFD_21(Z290, &Z394);
ZfM_29(Z290, (STRING)" : constant Integer := ", 23L);
ZfM_32(Z290, Z395, 0L);
ZfM_24(Z290, ';');
Zpky9jaD_53(Z290);
break;
case Zpky9jaD_60:;
ZfM_29(Z290, (STRING)"    static final int ", 21L);
Zp1PEAFD_21(Z290, &Z394);
ZfM_29(Z290, (STRING)"	= ", 3L);
ZfM_32(Z290, Z395, 0L);
ZfM_24(Z290, ';');
Zpky9jaD_53(Z290);
break;
}
}

static void Z364
# ifdef HAVE_ARGS
(ZfM_3 Z290, Zp1PEAFD_2 Z394, CHAR Z395)
# else
(Z290, Z394, Z395)
ZfM_3 Z290;
Zp1PEAFD_2 Z394;
CHAR Z395;
# endif
{
switch (Zpky9jaD_38) {
case Zpky9jaD_55:;
Zp1PEAFD_21(Z290, &Z394);
ZfM_29(Z290, (STRING)"	= ", 3L);
ZfM_28(Z290, ORD(Z395), 1L, 8L);
ZfM_29(Z290, (STRING)"C;", 2L);
Zpky9jaD_53(Z290);
break;
case Zpky9jaD_56:;
ZfM_29(Z290, (STRING)"# define ", 9L);
Zp1PEAFD_21(Z290, &Z394);
ZfM_29(Z290, (STRING)"	(yytusChar) '\\", 15L);
ZfM_28(Z290, ORD(Z395), 1L, 8L);
ZfM_24(Z290, '\'');
Zpky9jaD_53(Z290);
break;
case Zpky9jaD_57:;
ZfM_29(Z290, (STRING)"static const yytusChar ", 23L);
Zp1PEAFD_21(Z290, &Z394);
ZfM_29(Z290, (STRING)"	= (yytusChar) '\\", 17L);
ZfM_28(Z290, ORD(Z395), 1L, 8L);
ZfM_29(Z290, (STRING)"';", 2L);
Zpky9jaD_53(Z290);
break;
case Zpky9jaD_58:;
Zp1PEAFD_21(Z290, &Z394);
ZfM_29(Z290, (STRING)" : CHARACTER is '%/", 19L);
ZfM_25(Z290, (LONGINT)ORD(Z395), 0L);
ZfM_29(Z290, (STRING)"/';", 3L);
Zpky9jaD_53(Z290);
break;
case Zpky9jaD_59:;
Zp1PEAFD_21(Z290, &Z394);
ZfM_29(Z290, (STRING)" : constant Character := Character'val (", 40L);
ZfM_25(Z290, (LONGINT)ORD(Z395), 0L);
ZfM_29(Z290, (STRING)");", 2L);
Zpky9jaD_53(Z290);
break;
case Zpky9jaD_60:;
ZfM_29(Z290, (STRING)"    static final yytChar ", 25L);
Zp1PEAFD_21(Z290, &Z394);
ZfM_29(Z290, (STRING)"	= (yytChar) '\\", 15L);
ZfM_28(Z290, ORD(Z395), 1L, 8L);
ZfM_29(Z290, (STRING)"';", 2L);
Zpky9jaD_53(Z290);
break;
}
}

static void Z390
# ifdef HAVE_ARGS
(ZfM_3 Z290, Zp1PEAFD_2 Z394, INTEGER Z395)
# else
(Z290, Z394, Z395)
ZfM_3 Z290;
Zp1PEAFD_2 Z394;
INTEGER Z395;
# endif
{
switch (Zpky9jaD_38) {
case Zpky9jaD_55:;
ZfM_29(Z290, (STRING)"DEC (", 5L);
Zp1PEAFD_21(Z290, &Z394);
ZfM_29(Z290, (STRING)", ", 2L);
ZfM_25(Z290, Z395, 0L);
ZfM_29(Z290, (STRING)");", 2L);
Zpky9jaD_53(Z290);
break;
case Zpky9jaD_56:;
case Zpky9jaD_57:;
case Zpky9jaD_60:;
Zp1PEAFD_21(Z290, &Z394);
ZfM_29(Z290, (STRING)" -= ", 4L);
ZfM_25(Z290, Z395, 0L);
ZfM_24(Z290, ';');
Zpky9jaD_53(Z290);
break;
case Zpky9jaD_58:;
case Zpky9jaD_59:;
Zp1PEAFD_21(Z290, &Z394);
ZfM_29(Z290, (STRING)" := ", 4L);
Zp1PEAFD_21(Z290, &Z394);
ZfM_29(Z290, (STRING)" - ", 3L);
ZfM_25(Z290, Z395, 0L);
ZfM_24(Z290, ';');
Zpky9jaD_53(Z290);
break;
}
}

static void Z344
# ifdef HAVE_ARGS
(ZfM_3 Z290, INTEGER Z381)
# else
(Z290, Z381)
ZfM_3 Z290;
INTEGER Z381;
# endif
{
switch (Zpky9jaD_38) {
case Zpky9jaD_55:;
ZfM_29(Z290, (STRING)"| ", 2L);
ZfM_25(Z290, Z381, 0L);
ZfM_24(Z290, ':');
Zpky9jaD_53(Z290);
break;
case Zpky9jaD_56:;
case Zpky9jaD_57:;
case Zpky9jaD_60:;
ZfM_29(Z290, (STRING)"case ", 5L);
ZfM_25(Z290, Z381, 0L);
ZfM_24(Z290, ':');
Zpky9jaD_53(Z290);
break;
case Zpky9jaD_58:;
ZfM_29(Z290, (STRING)"when ", 5L);
ZfM_25(Z290, Z381, 0L);
ZfM_29(Z290, (STRING)" then", 5L);
Zpky9jaD_53(Z290);
break;
case Zpky9jaD_59:;
ZfM_29(Z290, (STRING)"when ", 5L);
ZfM_25(Z290, Z381, 0L);
ZfM_29(Z290, (STRING)" =>", 3L);
Zpky9jaD_53(Z290);
break;
}
}

static void Z345
# ifdef HAVE_ARGS
(ZfM_3 Z290, ZpmCQ_4 Z396)
# else
(Z290, Z396)
ZfM_3 Z290;
ZpmCQ_4 Z396;
# endif
{
BOOLEAN Z397;

switch (Zpky9jaD_38) {
case Zpky9jaD_55:;
Z397 = TRUE;
ZfM_24(Z290, '|');
while (!ZpmCQ_26(Z396)) {
if (Z397) {
Z397 = FALSE;
} else {
ZfM_24(Z290, ',');
}
ZfM_25(Z290, (LONGINT)ZpmCQ_20(&Z396), 0L);
Zpky9jaD_53(Z290);
}
ZfM_24(Z290, ':');
Zpky9jaD_53(Z290);
break;
case Zpky9jaD_56:;
case Zpky9jaD_57:;
case Zpky9jaD_60:;
while (!ZpmCQ_26(Z396)) {
ZfM_29(Z290, (STRING)"case ", 5L);
ZfM_25(Z290, (LONGINT)ZpmCQ_20(&Z396), 0L);
ZfM_29(Z290, (STRING)":;", 2L);
Zpky9jaD_53(Z290);
}
break;
case Zpky9jaD_58:;
Z397 = TRUE;
ZfM_29(Z290, (STRING)"when ", 5L);
while (!ZpmCQ_26(Z396)) {
if (Z397) {
Z397 = FALSE;
} else {
ZfM_24(Z290, ',');
}
ZfM_25(Z290, (LONGINT)ZpmCQ_20(&Z396), 0L);
Zpky9jaD_53(Z290);
}
ZfM_29(Z290, (STRING)"then", 4L);
Zpky9jaD_53(Z290);
break;
case Zpky9jaD_59:;
Z397 = TRUE;
ZfM_29(Z290, (STRING)"when ", 5L);
while (!ZpmCQ_26(Z396)) {
if (Z397) {
Z397 = FALSE;
} else {
ZfM_24(Z290, '|');
}
ZfM_25(Z290, (LONGINT)ZpmCQ_20(&Z396), 0L);
Zpky9jaD_53(Z290);
}
ZfM_29(Z290, (STRING)"=>", 2L);
Zpky9jaD_53(Z290);
break;
}
}

static CARDINAL Z387
 ARGS ((void))
{
INC(Z270);
return Z270;
}

static void Z388
# ifdef HAVE_ARGS
(ZfM_3 Z290, CARDINAL Z381)
# else
(Z290, Z381)
ZfM_3 Z290;
CARDINAL Z381;
# endif
{
ZfM_29(Z290, (STRING)"goto yyL", 8L);
ZfM_25(Z290, (LONGINT)Z381, 0L);
ZfM_24(Z290, ';');
Zpky9jaD_53(Z290);
}

static void Z389
# ifdef HAVE_ARGS
(ZfM_3 Z290, CARDINAL Z381)
# else
(Z290, Z381)
ZfM_3 Z290;
CARDINAL Z381;
# endif
{
ZfM_29(Z290, (STRING)"yyL", 3L);
ZfM_25(Z290, (LONGINT)Z381, 0L);
ZfM_29(Z290, (STRING)": ;", 3L);
Zpky9jaD_53(Z290);
}

static void Z400
# ifdef HAVE_ARGS
(Zp1PEAFD_2 *Z399, CHAR Z299[], LONGCARD O_3)
# else
(Z399, Z299, O_3)
Zp1PEAFD_2 *Z399;
CHAR Z299[];
LONGCARD O_3;
# endif
{
Zp1PEAFD_2 Z332;

Zp1PEAFD_13(Z299, O_3, &Z332);
Zp1PEAFD_5(Z399, &Z332);
}

static void Z401
# ifdef HAVE_ARGS
(Zp1PEAFD_2 *Z399, INTEGER Z299)
# else
(Z399, Z299)
Zp1PEAFD_2 *Z399;
INTEGER Z299;
# endif
{
Zp1PEAFD_2 Z332;

Zp1PEAFD_18(Z299, &Z332);
Zp1PEAFD_5(Z399, &Z332);
}

static void Z402
# ifdef HAVE_ARGS
(Zp1PEAFD_2 *Z399, Zfb3DLQ_0 Z299)
# else
(Z399, Z299)
Zp1PEAFD_2 *Z399;
Zfb3DLQ_0 Z299;
# endif
{
Zp1PEAFD_2 Z332;

Zfb3DLQ_3(Z299, &Z332);
Zp1PEAFD_5(Z399, &Z332);
}

static void Z403
# ifdef HAVE_ARGS
(Zp1PEAFD_2 *Z399, Zfb3DLQ_0 Z362)
# else
(Z399, Z362)
Zp1PEAFD_2 *Z399;
Zfb3DLQ_0 Z362;
# endif
{
CARDINAL Z293;
CHAR Z404;
Zp1PEAFD_2 Z332;

Zfb3DLQ_3(Z362, &Z332);
{
LONGCARD B_7 = 1, B_8 = Zp1PEAFD_7(&Z332);

if (B_7 <= B_8)
for (Z293 = B_7;; Z293 += 1) {
Z404 = Zp1PEAFD_12(&Z332, (Zp1PEAFD_1)Z293);
if (Z404 == '\\') {
Zp1PEAFD_6(Z399, Z404);
}
Zp1PEAFD_6(Z399, Z404);
if (Z293 >= B_8) break;
}
}
}

void Zpky9jaD_54
# ifdef HAVE_ARGS
(Zp1PEAFD_2 *Z399, CARDINAL Z291, Zfb3DLQ_0 Z275)
# else
(Z399, Z291, Z275)
Zp1PEAFD_2 *Z399;
CARDINAL Z291;
Zfb3DLQ_0 Z275;
# endif
{
Zp1PEAFD_4(Z399);
switch (Zpky9jaD_38) {
case Zpky9jaD_55:;
Z400(Z399, (STRING)"(* line ", 8L);
Z401(Z399, (LONGINT)Z291);
Z400(Z399, (STRING)" \"", 2L);
Z402(Z399, Z275);
Z400(Z399, (STRING)"\" *)", 4L);
break;
case Zpky9jaD_56:;
case Zpky9jaD_57:;
if (Zpky9jaD_42) {
Z400(Z399, (STRING)"# line ", 7L);
Z401(Z399, (LONGINT)Z291);
Z400(Z399, (STRING)" \"", 2L);
Z403(Z399, Z275);
Zp1PEAFD_6(Z399, '"');
} else {
Z400(Z399, (STRING)"/* line ", 8L);
Z401(Z399, (LONGINT)Z291);
Z400(Z399, (STRING)" \"", 2L);
Z402(Z399, Z275);
Z400(Z399, (STRING)"\" */", 4L);
}
break;
case Zpky9jaD_60:;
Z400(Z399, (STRING)"/* line ", 8L);
Z401(Z399, (LONGINT)Z291);
Z400(Z399, (STRING)" \"", 2L);
Z402(Z399, Z275);
Z400(Z399, (STRING)"\" */", 4L);
break;
case Zpky9jaD_58:;
case Zpky9jaD_59:;
Z400(Z399, (STRING)"-- line ", 8L);
Z401(Z399, (LONGINT)Z291);
Z400(Z399, (STRING)" \"", 2L);
Z402(Z399, Z275);
Zp1PEAFD_6(Z399, '"');
break;
}
}

static void Z310
# ifdef HAVE_ARGS
(ZfM_3 Z290, CARDINAL Z291, Zfb3DLQ_0 Z275)
# else
(Z290, Z291, Z275)
ZfM_3 Z290;
CARDINAL Z291;
Zfb3DLQ_0 Z275;
# endif
{
Zp1PEAFD_2 Z332;

if (Z291 != 0) {
Zpky9jaD_54(&Z332, Z291, Z275);
Zp1PEAFD_22(Z290, &Z332);
INC(Z269);
}
}

static void Z406
# ifdef HAVE_ARGS
(CHAR Z407[], LONGCARD O_4, ZqnGVQ_0 *Z279)
# else
(Z407, O_4, Z279)
CHAR Z407[];
LONGCARD O_4;
ZqnGVQ_0 *Z279;
# endif
{
Zp1PEAFD_2 Z277;
OPEN_ARRAY_LOCALS

ALLOC_OPEN_ARRAYS (O_4 * sizeof (CHAR), 1)
COPY_OPEN_ARRAY (Z407, O_4, CHAR)
Zp1PEAFD_13(Z407, O_4, &Z277);
ZqnGVQ_2(Z279, &Z277);
FREE_OPEN_ARRAYS
}

static void Z408
# ifdef HAVE_ARGS
(CHAR Z409[], LONGCARD O_6, CHAR Z410[], LONGCARD O_5, ZqnGVQ_0 *Z279)
# else
(Z409, O_6, Z410, O_5, Z279)
CHAR Z409[];
LONGCARD O_6;
CHAR Z410[];
LONGCARD O_5;
ZqnGVQ_0 *Z279;
# endif
{
Zp1PEAFD_2 Z411, Z369;
OPEN_ARRAY_LOCALS

ALLOC_OPEN_ARRAYS (O_5 * sizeof (CHAR) + O_6 * sizeof (CHAR), 2)
COPY_OPEN_ARRAY (Z410, O_5, CHAR)
COPY_OPEN_ARRAY (Z409, O_6, CHAR)
Zp1PEAFD_13(Z409, O_6, &Z411);
if (Zpky9jaD_37 != Zfb3DLQ_1) {
Zfb3DLQ_3(Zpky9jaD_37, &Z369);
Zp1PEAFD_5(&Z411, &Z369);
Zp1PEAFD_6(&Z411, '_');
}
Zp1PEAFD_13(Z410, O_5, &Z369);
Zp1PEAFD_5(&Z411, &Z369);
ZqnGVQ_2(Z279, &Z411);
FREE_OPEN_ARRAYS
}

void Zpky9jaD_49
 ARGS ((void))
{
(void) strncpy ((char *)Z172.A, "Scanner", sizeof (Z172.A));
(void) strncpy ((char *)Z272.A, "Source", sizeof (Z272.A));
(void) strncpy ((char *)Z273.A, "Drv", sizeof (Z273.A));
switch (Zpky9jaD_38) {
case Zpky9jaD_55:;
Z406((STRING)"CASE yyStateStack^ [TokenLength] OF", 35L, &Z260);
Z406((STRING)"CASE yyAction [yyStateStack^ [TokenLength]] OF", 46L, &Z261);
Z406((STRING)"yyRestart := FALSE; EXIT;", 25L, &Z266);
Z406((STRING)"(* BlankAction *)", 17L, &Zpky9jaD_17);
Z406((STRING)"WHILE yyChBufferPtr^ [yyChBufferIndex] = ' ' DO INC (yyChBufferIndex); END;", 75L, &Zpky9jaD_17);
Z406((STRING)"(* TabAction *)", 15L, &Zpky9jaD_18);
Z406((STRING)"yyTab;", 6L, &Zpky9jaD_18);
Z406((STRING)"(* EolAction *)", 15L, &Zpky9jaD_19);
Z406((STRING)"yyEol (0);", 10L, &Zpky9jaD_19);
Z406((STRING)"WHILE yyStateStack^ [TokenLength] # ", 36L, &Z262);
Z406((STRING)" DO", 3L, &Z263);
Z406((STRING)"   DEC (yyChBufferIndex);", 25L, &Z263);
Z406((STRING)"   DEC (TokenLength);", 21L, &Z263);
Z406((STRING)"END;", 4L, &Z263);
Z406((STRING)"LOOP", 4L, &Z264);
Z406((STRING)"   CASE yyStateStack^ [TokenLength] OF", 38L, &Z264);
Z406((STRING)"      EXIT;", 11L, &Z265);
Z406((STRING)"   ELSE", 7L, &Z265);
Z406((STRING)"      DEC (yyChBufferIndex);", 28L, &Z265);
Z406((STRING)"      DEC (TokenLength);", 24L, &Z265);
Z406((STRING)"   END;", 7L, &Z265);
Z406((STRING)"END;", 4L, &Z265);
break;
case Zpky9jaD_56:;
Z406((STRING)"switch (* -- yyStatePtr) {", 26L, &Z260);
Z406((STRING)"switch (yyAction [* -- yyStatePtr]) {", 37L, &Z261);
Z406((STRING)"goto yyBegin;", 13L, &Z266);
Z406((STRING)"/* BlankAction */", 17L, &Zpky9jaD_17);
Z406((STRING)"while (* yyChBufferIndexReg ++ == ' ') ;", 40L, &Zpky9jaD_17);
Z408((STRING)"", 1L, (STRING)"TokenPtr = (yytChar *) -- yyChBufferIndexReg;", 45L, &Zpky9jaD_17);
Z406((STRING)"yyState = yyStartState;", 23L, &Zpky9jaD_17);
Z406((STRING)"yyStatePtr = & yyStateStack [1];", 32L, &Zpky9jaD_17);
Z406((STRING)"goto yyContinue;", 16L, &Zpky9jaD_17);
Z406((STRING)"/* TabAction */", 15L, &Zpky9jaD_18);
Z406((STRING)"yyTab;", 6L, &Zpky9jaD_18);
Z406((STRING)"/* EolAction */", 15L, &Zpky9jaD_19);
Z406((STRING)"yyEol (0);", 10L, &Zpky9jaD_19);
Z406((STRING)"while (* yyStatePtr != ", 23L, &Z262);
Z406((STRING)") {", 3L, &Z263);
Z406((STRING)"   yyChBufferIndex --;", 22L, &Z263);
Z408((STRING)"   ", 3L, (STRING)"TokenLength --;", 15L, &Z263);
Z406((STRING)"   yyStatePtr --;", 17L, &Z263);
Z406((STRING)"}", 1L, &Z263);
Z406((STRING)"for (;;) {", 10L, &Z264);
Z406((STRING)"   switch (* yyStatePtr) {", 26L, &Z264);
Z406((STRING)"   default:", 11L, &Z265);
Z406((STRING)"      yyChBufferIndex --;", 25L, &Z265);
Z408((STRING)"      ", 6L, (STRING)"TokenLength --;", 15L, &Z265);
Z406((STRING)"      yyStatePtr --;", 20L, &Z265);
Z406((STRING)"   }", 4L, &Z265);
Z406((STRING)"}", 1L, &Z265);
break;
case Zpky9jaD_57:;
Z406((STRING)"switch (* -- yyStatePtr) {", 26L, &Z260);
Z406((STRING)"switch (yyAction [* -- yyStatePtr]) {", 37L, &Z261);
Z406((STRING)"goto yyBegin;", 13L, &Z266);
Z406((STRING)"/* BlankAction */", 17L, &Zpky9jaD_17);
Z406((STRING)"while (* yyChBufferIndexReg ++ == ' ') ;", 40L, &Zpky9jaD_17);
Z406((STRING)"TokenPtr = (yytChar *) -- yyChBufferIndexReg;", 45L, &Zpky9jaD_17);
Z406((STRING)"yyState = yyStartState;", 23L, &Zpky9jaD_17);
Z406((STRING)"yyStatePtr = & yyStateStack [1];", 32L, &Zpky9jaD_17);
Z406((STRING)"goto yyContinue;", 16L, &Zpky9jaD_17);
Z406((STRING)"/* TabAction */", 15L, &Zpky9jaD_18);
Z406((STRING)"yyTab;", 6L, &Zpky9jaD_18);
Z406((STRING)"/* EolAction */", 15L, &Zpky9jaD_19);
Z406((STRING)"yyEol (0);", 10L, &Zpky9jaD_19);
Z406((STRING)"while (* yyStatePtr != ", 23L, &Z262);
Z406((STRING)") {", 3L, &Z263);
Z406((STRING)"   yyChBufferIndex --;", 22L, &Z263);
Z406((STRING)"   TokenLength --;", 18L, &Z263);
Z406((STRING)"   yyStatePtr --;", 17L, &Z263);
Z406((STRING)"}", 1L, &Z263);
Z406((STRING)"for (;;) {", 10L, &Z264);
Z406((STRING)"   switch (* yyStatePtr) {", 26L, &Z264);
Z406((STRING)"   default:", 11L, &Z265);
Z406((STRING)"      yyChBufferIndex --;", 25L, &Z265);
Z406((STRING)"      TokenLength --;", 21L, &Z265);
Z406((STRING)"      yyStatePtr --;", 20L, &Z265);
Z406((STRING)"   }", 4L, &Z265);
Z406((STRING)"}", 1L, &Z265);
break;
case Zpky9jaD_58:;
(void) strncpy ((char *)Z172.A, "scanner", sizeof (Z172.A));
(void) strncpy ((char *)Z272.A, "source", sizeof (Z272.A));
(void) strncpy ((char *)Z273.A, "drv", sizeof (Z273.A));
Z406((STRING)"        inspect yyStateStack.item (TokenLength)", 47L, &Z260);
Z406((STRING)"        inspect yyAction.item (yyStateStack.item (TokenLength))", 63L, &Z261);
Z406((STRING)"           yyfinish_L4 := TRUE;", 31L, &Z266);
Z406((STRING)"-- BlankAction", 14L, &Zpky9jaD_17);
Z406((STRING)"           from until yyChBuffer.item (yyChBufferIndex) /= ' ' loop", 67L, &Zpky9jaD_17);
Z406((STRING)"              yyChBufferIndex := yyChBufferIndex + 1;", 53L, &Zpky9jaD_17);
Z406((STRING)"           end;", 15L, &Zpky9jaD_17);
Z406((STRING)"-- TabAction", 12L, &Zpky9jaD_18);
Z406((STRING)"           yyLineStart := yyLineStart - ((yyTabSpace - 1 - (yyChBufferIndex - yyLineStart - 2) \\\\ yyTabSpace));", 111L, &Zpky9jaD_18);
Z406((STRING)"-- EolAction", 12L, &Zpky9jaD_19);
Z406((STRING)"           yyLineCount := yyLineCount + 1;", 42L, &Zpky9jaD_19);
Z406((STRING)"           yyLineStart := yyChBufferIndex - 1;", 46L, &Zpky9jaD_19);
Z406((STRING)"           from until yyStateStack.item (TokenLength) = ", 56L, &Z262);
Z406((STRING)"loop", 4L, &Z263);
Z406((STRING)"   yyChBufferIndex := yyChBufferIndex - 1;", 42L, &Z263);
Z406((STRING)"   TokenLength := TokenLength - 1;", 34L, &Z263);
Z406((STRING)"end;", 4L, &Z263);
Z406((STRING)"from yyfinish_L1 := FALSE until yyfinish_L1 loop", 48L, &Z264);
Z406((STRING)"   inspect yyStateStack.item (TokenLength)", 42L, &Z264);
Z406((STRING)"      yyfinish_L1 := TRUE;", 26L, &Z265);
Z406((STRING)"   else", 7L, &Z265);
Z406((STRING)"      yyChBufferIndex := yyChBufferIndex - 1;", 45L, &Z265);
Z406((STRING)"      TokenLength := TokenLength - 1;", 37L, &Z265);
Z406((STRING)"   end;", 7L, &Z265);
Z406((STRING)"end;", 4L, &Z265);
break;
case Zpky9jaD_59:;
(void) strncpy ((char *)Z172.A, "scanner", sizeof (Z172.A));
(void) strncpy ((char *)Z272.A, "source", sizeof (Z272.A));
(void) strncpy ((char *)Z273.A, "drv", sizeof (Z273.A));
Z406((STRING)"case yyStateStack (TokenLength) is", 34L, &Z260);
Z406((STRING)"case yyAction (yyStateStack (TokenLength)) is", 45L, &Z261);
Z406((STRING)"goto yyBegin;", 13L, &Z266);
Z406((STRING)"-- BlankAction", 14L, &Zpky9jaD_17);
Z406((STRING)"while yyChBufferPtr (yyChBufferIndex) = ' ' loop", 48L, &Zpky9jaD_17);
Z406((STRING)"   yyChBufferIndex := yyChBufferIndex + 1;", 42L, &Zpky9jaD_17);
Z406((STRING)"end loop;", 9L, &Zpky9jaD_17);
Z406((STRING)"-- TabAction", 12L, &Zpky9jaD_18);
Z406((STRING)"yyTab;", 6L, &Zpky9jaD_18);
Z406((STRING)"-- EolAction ", 13L, &Zpky9jaD_19);
Z406((STRING)"yyEol (0);", 10L, &Zpky9jaD_19);
Z406((STRING)"while yyStateStack (TokenLength) /= ", 36L, &Z262);
Z406((STRING)"loop", 4L, &Z263);
Z406((STRING)"   yyChBufferIndex := yyChBufferIndex - 1;", 42L, &Z263);
Z406((STRING)"   TokenLength := TokenLength - 1;", 34L, &Z263);
Z406((STRING)"end loop;", 9L, &Z263);
Z406((STRING)"loop", 4L, &Z264);
Z406((STRING)"   case yyStateStack (TokenLength) is", 37L, &Z264);
Z406((STRING)"      exit;", 11L, &Z265);
Z406((STRING)"   when others =>", 17L, &Z265);
Z406((STRING)"      yyChBufferIndex := yyChBufferIndex - 1;", 45L, &Z265);
Z406((STRING)"      TokenLength := TokenLength - 1;", 37L, &Z265);
Z406((STRING)"   end case;", 12L, &Z265);
Z406((STRING)"end loop;", 9L, &Z265);
break;
case Zpky9jaD_60:;
Z406((STRING)"switch (yyStateStack [tokenLength]) {", 37L, &Z260);
Z406((STRING)"switch (yyAction [yyStateStack [tokenLength]]) {", 48L, &Z261);
Z406((STRING)"break yyMiddle;", 15L, &Z266);
Z406((STRING)"/* BlankAction */", 17L, &Zpky9jaD_17);
Z406((STRING)"while (yyChBuffer [yyChBufferIndex ++] == ' ') ;", 48L, &Zpky9jaD_17);
Z406((STRING)"yyChBufferIndex --;", 19L, &Zpky9jaD_17);
Z406((STRING)"break yyMiddle;", 15L, &Zpky9jaD_17);
Z406((STRING)"/* TabAction */", 15L, &Zpky9jaD_18);
Z406((STRING)"yyTab ();", 9L, &Zpky9jaD_18);
Z406((STRING)"/* EolAction */", 15L, &Zpky9jaD_19);
Z406((STRING)"yyEol (0);", 10L, &Zpky9jaD_19);
Z406((STRING)"while (yyStateStack [tokenLength] != ", 37L, &Z262);
Z406((STRING)") {", 3L, &Z263);
Z406((STRING)"   yyChBufferIndex --;", 22L, &Z263);
Z406((STRING)"   tokenLength --;", 18L, &Z263);
Z406((STRING)"}", 1L, &Z263);
Z406((STRING)"yyContext3: for (;;) {", 22L, &Z264);
Z406((STRING)"  switch (yyStateStack [tokenLength]) {", 39L, &Z264);
Z406((STRING)"  break yyContext3;", 19L, &Z265);
Z406((STRING)"  default:", 10L, &Z265);
Z406((STRING)"    yyChBufferIndex --;", 23L, &Z265);
Z406((STRING)"    tokenLength --;", 19L, &Z265);
Z406((STRING)"  }", 3L, &Z265);
Z406((STRING)"}", 1L, &Z265);
break;
}
}

void BEGIN_ScanGen ARGS ((void))
{
  static BOOLEAN has_been_called = FALSE;
  if (has_been_called) return;
  has_been_called = TRUE;
BEGIN_IO ();
BEGIN_Texts ();
BEGIN_Strings ();
BEGIN_Idents ();
BEGIN_General ();
BEGIN_Checks ();
BEGIN_rSystem ();
BEGIN_IO ();
BEGIN_Texts ();
BEGIN_Sets ();
BEGIN_Strings ();
BEGIN_StringM ();
BEGIN_Idents ();
BEGIN_Errors ();
BEGIN_Scanner ();
BEGIN_DefTable ();
BEGIN_Dfa ();
BEGIN_ScanTabs ();
BEGIN_GenTabs ();
BEGIN_Tree ();
BEGIN_Classes ();
BEGIN_UniCode ();
BEGIN_IO ();
BEGIN_Lists ();
BEGIN_Texts ();
BEGIN_Strings ();
BEGIN_Idents ();
BEGIN_Errors ();
BEGIN_Position ();

Zpky9jaD_36 = Zfb3DLQ_1;
Zpky9jaD_37 = Zfb3DLQ_1;
Zpky9jaD_24 = 0;
Zpky9jaD_25 = 0;
Zpky9jaD_26 = 0;
Z271 = 0;
Zpky9jaD_27 = 0;
Zpky9jaD_20 = 0;
Zpky9jaD_21 = 0;
Zpky9jaD_22 = 0;
Z270 = 0;
Zpky9jaD_23 = 0;
Zpky9jaD_32 = Zfb3DLQ_1;
Zpky9jaD_33 = Zfb3DLQ_1;
Zpky9jaD_34 = Zfb3DLQ_1;
Zpky9jaD_35 = Zfb3DLQ_1;
Zpky9jaD_28 = Zfb3DLQ_1;
Zpky9jaD_29 = Zfb3DLQ_1;
Zpky9jaD_30 = Zfb3DLQ_1;
Zpky9jaD_31 = Zfb3DLQ_1;
Zpky9jaD_46 = 0X0L;
Zpky9jaD_47 = FALSE;
ZqnGVQ_1(&Zpky9jaD_13);
ZqnGVQ_1(&Zpky9jaD_17);
ZqnGVQ_1(&Z260);
ZqnGVQ_1(&Z261);
ZqnGVQ_1(&Zpky9jaD_14);
ZqnGVQ_1(&Z262);
ZqnGVQ_1(&Z263);
ZqnGVQ_1(&Z264);
ZqnGVQ_1(&Z265);
ZqnGVQ_1(&Zpky9jaD_15);
ZqnGVQ_1(&Zpky9jaD_16);
ZqnGVQ_1(&Zpky9jaD_19);
ZqnGVQ_1(&Zpky9jaD_9);
ZqnGVQ_1(&Zpky9jaD_10);
ZqnGVQ_1(&Zpky9jaD_11);
ZqnGVQ_1(&Zpky9jaD_12);
ZqnGVQ_1(&Zpky9jaD_18);
ZqnGVQ_1(&Z266);
}
