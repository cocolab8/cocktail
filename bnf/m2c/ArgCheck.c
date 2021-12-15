#include "SYSTEM_.h"

#ifndef DEFINITION_Characte
#include "Characte.h"
#endif

#ifndef DEFINITION_Errors
#include "Errors.h"
#endif

#ifndef DEFINITION_IO
#include "IO.h"
#endif

#ifndef DEFINITION_Listing
#include "Listing.h"
#endif

#ifndef DEFINITION_WriteTok
#include "WriteTok.h"
#endif

#ifndef DEFINITION_Path
#include "Path.h"
#endif

#ifndef DEFINITION_Scanner
#include "Scanner.h"
#endif

#ifndef DEFINITION_Strings
#include "Strings.h"
#endif

#ifndef DEFINITION_SysError
#include "SysError.h"
#endif

#ifndef DEFINITION_Position
#include "Position.h"
#endif

#ifndef DEFINITION_rSystem
#include "rSystem.h"
#endif

#ifndef DEFINITION_ArgCheck
#include "ArgCheck.h"
#endif

BOOLEAN ZehCfg728_0;
BOOLEAN ZehCfg728_1;
BOOLEAN ZehCfg728_2;
struct ArgCheck_1 ZehCfg728_3, ZehCfg728_4;

#define Z160	21
#define Z161	20
static CHAR Z162 [] = "bnf.cat";
static CHAR Z163 [] = "bnf.syn";
static CHAR Z164 [] = "-l";
static CHAR Z165 [] = "-h";
static CHAR Z166 [] = "-m";
static CHAR Z167 [] = "-c";
static CHAR Z168 [] = "-eiffel";
static CHAR Z169 [] = "-NoAction";
static CHAR Z170 [] = "-g";
struct S_1 {
CHAR A[255 + 1];
};
struct S_2 {
CHAR A[255 + 1];
};
static void Z188 ARGS ((ZfM_3 Z190, ZfM_3 Z191));

void ZehCfg728_5
 ARGS ((void))
{
CARDINAL Z171;
struct S_1 Z172;
Zp1PEAFD_2 Z173;
ZfM_3 Z174;
struct S_2 Z175;
BOOLEAN Z176;
CARDINAL Z177, Z178;
CHAR Z179;

Z176 = FALSE;
{
LONGCARD B_1 = 1, B_2 = GetArgCount() - 1;

if (B_1 <= B_2)
for (Z171 = B_1;; Z171 += 1) {
GetArgument((LONGINT)Z171, Z172.A, 256L);
if (Z172.A[0] != '-') {
if (Z176) {
Zp1PEAFD_13(Z172.A, 256L, &Z173);
ZblNKKO_53((LONGCARD)Z160, (LONGCARD)ZblNKKO_42, ZmtLFGGBG_1, (LONGCARD)ZblNKKO_35, ADR (Z173));
} else {
ZijFQGAF_1 = ZfM_4(Z172.A, 256L);
if (Zp6VmlNKK_0(ZijFQGAF_1)) {
Zp1PEAFD_13(Z172.A, 256L, &Z173);
Zp6VmlNKK_1(ZijFQGAF_1, (LONGCARD)ZblNKKO_42, (LONGCARD)ZblNKKO_35, ADR (Z173));
ZijFQGAF_1 = ZfM_0;
} else {
Z176 = TRUE;
Zpky9FDA_9(Z172.A, 256L);
Zgg3DDyAC_2(ZehCfg728_3.A, 256L, Z172.A, 256L);
Z177 = 0;
Z178 = 0;
Z179 = Z172.A[Z177];
INC(Z177);
while (Z179 != '\0') {
ZehCfg728_4.A[Z178] = Z179;
INC(Z178);
if (Z179 == '\\') {
ZehCfg728_4.A[Z178] = Z179;
INC(Z178);
}
Z179 = Z172.A[Z177];
INC(Z177);
}
ZehCfg728_4.A[Z178] = '\0';
}
}
} else if (Zgg3DDyAC_0(Z172.A, 256L, Z169, 9L)) {
ZehCfg728_2 = TRUE;
} else if (Zgg3DDyAC_0(Z172.A, 256L, Z164, 2L)) {
ZblNKKO_55(ZblNKKO_61);
} else if (Zgg3DDyAC_0(Z172.A, 256L, Z166, 2L)) {
Zt3EGCnxD_1 = Zt3EGCnxD_4;
} else if (Zgg3DDyAC_0(Z172.A, 256L, Z167, 2L)) {
Zt3EGCnxD_1 = Zt3EGCnxD_5;
} else if (Zgg3DDyAC_0(Z172.A, 256L, Z168, 7L)) {
Zt3EGCnxD_1 = Zt3EGCnxD_6;
} else if (Zgg3DDyAC_0(Z172.A, 256L, Z170, 2L)) {
ZehCfg728_0 = TRUE;
} else if (Zgg3DDyAC_0(Z172.A, 256L, Z165, 2L)) {
(void) strncpy ((char *)Z175.A, (char *)Z162, sizeof (Z175.A));
ZmfFF_0(Z175.A, 256L);
Z174 = ZfM_4(Z175.A, 256L);
if (Zp6VmlNKK_0(Z174)) {
Zp1PEAFD_13(Z175.A, 256L, &Z173);
Zp6VmlNKK_1(Z174, (LONGCARD)ZblNKKO_42, (LONGCARD)ZblNKKO_35, ADR (Z173));
} else {
Z188(Z174, (ZDz6VQCC_4)ZfM_1);
}
ZehCfg728_1 = FALSE;
return;
} else {
Zp1PEAFD_13(Z172.A, 256L, &Z173);
ZblNKKO_53((LONGCARD)Z161, (LONGCARD)ZblNKKO_42, ZmtLFGGBG_1, (LONGCARD)ZblNKKO_35, ADR (Z173));
}
if (Z171 >= B_2) break;
}
}
if (ZijFQGAF_1 == ZfM_0) {
(void) strncpy ((char *)Z175.A, (char *)Z163, sizeof (Z175.A));
ZmfFF_0(Z175.A, 256L);
Z174 = ZfM_4(Z175.A, 256L);
if (Zp6VmlNKK_0(Z174)) {
Zp1PEAFD_13(Z175.A, 256L, &Z173);
Zp6VmlNKK_1(Z174, (LONGCARD)ZblNKKO_42, (LONGCARD)ZblNKKO_35, ADR (Z173));
} else {
Z188(Z174, (ZDz6VQCC_4)ZfM_1);
}
ZehCfg728_1 = FALSE;
return;
}
}

static void Z188
# ifdef HAVE_ARGS
(ZfM_3 Z190, ZfM_3 Z191)
# else
(Z190, Z191)
ZfM_3 Z190, Z191;
# endif
{
Zp1PEAFD_2 Y1_73;

while (!ZfM_19(Z190)) {
Zp1PEAFD_20(Z190, &Y1_73);
Zp1PEAFD_22(Z191, &Y1_73);
}
}

void BEGIN_ArgCheck ARGS ((void))
{
  static BOOLEAN has_been_called = FALSE;
  if (has_been_called) return;
  has_been_called = TRUE;
BEGIN_Characte ();
BEGIN_Errors ();
BEGIN_IO ();
BEGIN_Listing ();
BEGIN_WriteTok ();
BEGIN_Path ();
BEGIN_Scanner ();
BEGIN_Strings ();
BEGIN_SysError ();
BEGIN_Position ();
BEGIN_rSystem ();

ZehCfg728_0 = FALSE;
ZehCfg728_1 = TRUE;
ZehCfg728_2 = FALSE;
(void) strncpy ((char *)ZehCfg728_3.A, " ", sizeof (ZehCfg728_3.A));
(void) strncpy ((char *)ZehCfg728_4.A, " ", sizeof (ZehCfg728_4.A));
}
