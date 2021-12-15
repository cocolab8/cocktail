#include "SYSTEM_.h"

#ifndef DEFINITION_rSystem
#include "rSystem.h"
#endif

#ifndef DEFINITION_ArgCheck
#include "ArgCheck.h"
#endif

#ifndef DEFINITION_CodeC
#include "CodeC.h"
#endif

#ifndef DEFINITION_CodeM2
#include "CodeM2.h"
#endif

#ifndef DEFINITION_Position
#include "Position.h"
#endif

#ifndef DEFINITION_Errors
#include "Errors.h"
#endif

#ifndef DEFINITION_Strings
#include "Strings.h"
#endif

#ifndef DEFINITION_Idents
#include "Idents.h"
#endif

#ifndef DEFINITION_IO
#include "IO.h"
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

static INTEGER Z141;
static Zp1PEAFD_2 Z177, Z178;
static INTEGER Z179 ARGS ((CHAR Z180));
static void Z181 ARGS ((INTEGER Z182));
static BOOLEAN Z183 ARGS ((CHAR Z184[], LONGCARD O_1, CARDINAL Z185));
struct S_2 {
CHAR A[128 + 1];
};
struct S_3 {
CHAR A[10 + 1];
};
struct S_4 {
BITSET A[32 + 1];
};
struct S_5 {
CHAR A[32 + 1];
};


static INTEGER Z179
# ifdef HAVE_ARGS
(CHAR Z180)
# else
(Z180)
CHAR Z180;
# endif
{
switch (Z180) {
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
return ORD(Z180) - ORD('0');
break;
case 'A':;
case 'B':;
case 'C':;
case 'D':;
case 'E':;
case 'F':;
return ORD(Z180) - ORD('A') + 10;
break;
case 'a':;
case 'b':;
case 'c':;
case 'd':;
case 'e':;
case 'f':;
return ORD(Z180) - ORD('a') + 10;
break;
}
return 0;
}

static void Z181
# ifdef HAVE_ARGS
(INTEGER Z182)
# else
(Z182)
INTEGER Z182;
# endif
{
switch (Z182) {
case 1:;
ZblNKKO_46((STRING)"cannot open license file: ctlicens.dat", 38L, (LONGCARD)ZblNKKO_14, ZmtLFGGBG_1);
break;
case 2:;
ZblNKKO_46((STRING)"sorry, the license is expired", 29L, (LONGCARD)ZblNKKO_14, ZmtLFGGBG_1);
break;
case 3:;
ZblNKKO_46((STRING)"sorry, the problem is too big for demo version", 46L, (LONGCARD)ZblNKKO_15, ZmtLFGGBG_1);
break;
case 4:;
ZblNKKO_46((STRING)"license file ctlicens.dat seems corrupted", 41L, (LONGCARD)ZblNKKO_14, ZmtLFGGBG_1);
break;
}
}

static BOOLEAN Z183
# ifdef HAVE_ARGS
(CHAR Z184[], LONGCARD O_1, CARDINAL Z185)
# else
(Z184, O_1, Z185)
CHAR Z184[];
LONGCARD O_1;
CARDINAL Z185;
# endif
{
Zp1PEAFD_2 Z177, Z178;
struct S_2 Z186;
ZfM_3 Z187;
struct S_3 Z188;
ZDz6VQCC_5 Z189;
struct S_4 Z190;
struct S_5 Z191;
CHAR Z180;
CARDINAL Z192, Z193;
BITSET Z194, Z195;
OPEN_ARRAY_LOCALS

ALLOC_OPEN_ARRAYS (O_1 * sizeof (CHAR), 1)
COPY_OPEN_ARRAY (Z184, O_1, CHAR)
if (rtpqy()) {
FREE_OPEN_ARRAYS
return TRUE;
}
Zp1PEAFD_3(&Z177, &ZehCfg728_10);
Zp1PEAFD_6(&Z177, '.');
Zp1PEAFD_6(&Z177, '.');
Zp1PEAFD_6(&Z177, DirectorySeparator());
Zp1PEAFD_13((STRING)"ctlicens.dat", 12L, &Z178);
Zp1PEAFD_5(&Z177, &Z178);
Zp1PEAFD_6(&Z177, '\0');
Zp1PEAFD_14(&Z177, Z186.A, 129L);
Z187 = ZfM_4(Z186.A, 129L);
if (Z187 < 0) {
Z181(1L);
FREE_OPEN_ARRAYS
return FALSE;
}
for (;;) {
if (ZfM_19(Z187)) {
Z181(4L);
FREE_OPEN_ARRAYS
return FALSE;
}
Z192 = 0;
Z180 = ZfM_7(Z187);
while (Z180 != '\n' && Z180 != '\r') {
Z190.A[Z192] = (BITSET)(Z179(Z180) * 16 + Z179(ZfM_7(Z187)));
INC(Z192);
Z180 = ZfM_7(Z187);
}
if (Z180 == '\r') {
Z180 = ZfM_7(Z187);
}
if (Z180 != '\n') {
Z181(4L);
FREE_OPEN_ARRAYS
return FALSE;
}
Z193 = Z192 - 1;
Z194 = (BITSET)ORD('j');
{
LONGCARD B_1 = 0, B_2 = Z193;

if (B_1 <= B_2)
for (Z192 = B_1;; Z192 += 1) {
Z195 = Z190.A[Z192] ^ Z194;
Z194 = Z194 ^ Z195;
Z191.A[Z192] = CHR((CARDINAL)Z195);
if (Z192 >= B_2) break;
}
}
if (Z191.A[0] == Z184[0] && Z191.A[1] == Z184[1] && Z191.A[2] == Z184[2]) {
goto EXIT_1;
}
} EXIT_1:;
ZfM_5(Z187);
Zp1PEAFD_4(&Z178);
for (Z192 = 5; Z192 <= 12; Z192 += 1) {
Zp1PEAFD_6(&Z178, Z191.A[Z192]);
}
(void) strncpy ((char *)Z188.A, "%Y%m%d", sizeof (Z188.A));
Z189 = rtpqx(Z188.A, 11L);
Z192 = 0;
for (;;) {
Z188.A[Z192] = Z189->A[Z192];
if (Z188.A[Z192] == '\0' || Z192 == 10) {
goto EXIT_2;
}
INC(Z192);
} EXIT_2:;
Zp1PEAFD_13(Z188.A, 11L, &Z177);
if (!Zp1PEAFD_9(&Z177, &Z178)) {
Z181(2L);
FREE_OPEN_ARRAYS
return FALSE;
}
Z193 = 0;
for (Z192 = 14; Z192 <= 19; Z192 += 1) {
if (Z191.A[Z192] != ' ') {
Z193 = Z193 * 10 + ORD(Z191.A[Z192]) - ORD('0');
}
}
if (Z185 > Z193) {
Z181(3L);
FREE_OPEN_ARRAYS
return FALSE;
}
FREE_OPEN_ARRAYS
return TRUE;
}

void BEGIN_MODULE ARGS ((void))
{
BEGIN_rSystem ();
BEGIN_ArgCheck ();
BEGIN_CodeC ();
BEGIN_CodeM2 ();
BEGIN_Position ();
BEGIN_Errors ();
BEGIN_Strings ();
BEGIN_Idents ();
BEGIN_IO ();
BEGIN_Parser ();
BEGIN_Tree ();
BEGIN_Semantic ();

ZehCfg728_11();
if (ZehCfg728_1 || ZehCfg728_2) {
Z141 = ZmfDOBA_2();
ZmfDOBA_3();
ZpmC89LG6_0();
ZpmC89LG6_1(Zq0A4_96);
ZpmC89LG6_2();
}
if (ZblNKKO_49((LONGCARD)ZblNKKO_16) > 0) {
ZblNKKO_42();
ZfM_34();
rExit(1L);
}
if (!Z183((STRING)"ell", 3L, (LONGCARD)Zfb3DLQ_6())) {
ZblNKKO_42();
ZfM_34();
rExit(1L);
}
switch (ZehCfg728_7) {
case ZehCfg728_12:;
if (ZehCfg728_1 || ZehCfg728_2) {
ZggD3d_1();
ZggD3d_2(Zq0A4_96);
ZggD3d_3();
}
if (ZehCfg728_3) {
ZggD3d_0();
}
break;
case ZehCfg728_13:;
if (ZehCfg728_1 || ZehCfg728_2) {
ZggD3g4_1();
ZggD3g4_2(Zq0A4_96);
ZggD3g4_3();
}
if (ZehCfg728_3) {
ZggD3g4_0();
}
break;
}
ZblNKKO_42();
ZfM_34();
}
