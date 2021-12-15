#include "SYSTEM_.h"

#ifndef DEFINITION_Errors
#include "Errors.h"
#endif

#ifndef DEFINITION_Position
#include "Position.h"
#endif

#ifndef DEFINITION_IO
#include "IO.h"
#endif

#ifndef DEFINITION_Scanner
#include "Scanner.h"
#endif

#ifndef DEFINITION_StdIO
#include "StdIO.h"
#endif

#ifndef DEFINITION_Strings
#include "Strings.h"
#endif

#ifndef DEFINITION_Idents
#include "Idents.h"
#endif

#ifndef DEFINITION_rSystem
#include "rSystem.h"
#endif

#ifndef DEFINITION_ArgCheck
#include "ArgCheck.h"
#endif

BOOLEAN ZehCfg728_1, ZehCfg728_2, ZehCfg728_3, ZehCfg728_4, ZehCfg728_5, ZehCfg728_6;
ZehCfg728_0 ZehCfg728_7;
struct ArgCheck_1 ZehCfg728_8;
struct ArgCheck_2 ZehCfg728_9;
Zp1PEAFD_2 ZehCfg728_10;

struct S_1 {
CHAR A[255 + 1];
};

void ZehCfg728_11
 ARGS ((void))
{
CARDINAL Z157, Z158;
struct S_1 Z159;
Zp1PEAFD_2 Z122;
ZfM_3 Z160;
BOOLEAN Z161, Z162, Z163;
INTEGER Z164;
CHAR Z165;
ZDz6VQCC_5 Z166;

Z162 = FALSE;
Z161 = TRUE;
Z163 = FALSE;
{
LONGCARD B_1 = 1, B_2 = GetArgCount() - 1;

if (B_1 <= B_2)
for (Z157 = B_1;; Z157 += 1) {
GetArgument((LONGINT)Z157, Z159.A, 256L);
if (Z159.A[0] == '-') {
Z161 = FALSE;
Z164 = 1;
do {
Z165 = Z159.A[Z164];
switch (Z165) {
case 'c':;
ZehCfg728_7 = ZehCfg728_12;
break;
case 'd':;
ZehCfg728_1 = TRUE;
break;
case 'g':;
ZehCfg728_4 = TRUE;
break;
case 'i':;
ZehCfg728_2 = TRUE;
break;
case 'j':;
ZehCfg728_5 = TRUE;
break;
case 'f':;
ZehCfg728_6 = TRUE;
if (Z159.A[Z164 + 1] != '\0') {
Z158 = 0;
do {
INC(Z164);
Z165 = Z159.A[Z164];
ZehCfg728_9.A[Z158] = Z165;
INC(Z158);
} while (!(Z165 == '\0'));
}
break;
case 'l':;
Zp1PEAFD_4(&ZehCfg728_10);
INC(Z164);
for (;;) {
Z165 = Z159.A[Z164];
INC(Z164);
if (ORD(Z165) <= ORD(' ')) {
goto EXIT_1;
}
Zp1PEAFD_6(&ZehCfg728_10, Z165);
} EXIT_1:;
Zp1PEAFD_6(&ZehCfg728_10, DirectorySeparator());
break;
case 'h':;
Z162 = TRUE;
break;
case 'm':;
ZehCfg728_7 = ZehCfg728_13;
break;
case 'p':;
ZehCfg728_3 = TRUE;
break;
case '\0':;
break;
default:
ZblNKKO_47((STRING)"unknown option", 14L, (LONGCARD)ZblNKKO_16, ZmtLFGGBG_1, (LONGCARD)ZblNKKO_28, ADR (Z159.A[Z164]));
break;
}
INC(Z164);
} while (!(Z165 == '\0'));
} else {
if (Z163) {
ZblNKKO_47((STRING)"too many arguments", 18L, (LONGCARD)ZblNKKO_16, ZmtLFGGBG_1, (LONGCARD)ZblNKKO_32, ADR (Z159));
} else {
Z160 = ZfM_4(Z159.A, 256L);
if (Z160 < 0) {
ZblNKKO_47((STRING)"cannot open file", 16L, (LONGCARD)ZblNKKO_16, ZmtLFGGBG_1, (LONGCARD)ZblNKKO_32, ADR (Z159));
} else {
ZfM_5(Z160);
Zpky9FDA_13(Z159.A, 256L);
Zp1PEAFD_13(Z159.A, 256L, &Z122);
Zpky9FDA_10.Y0.Y2 = Zfb3DLQ_2(&Z122);
GetArgument((LONGINT)Z157, ZehCfg728_8.A, 256L);
Z163 = TRUE;
}
}
}
if (Z157 >= B_2) break;
}
}
if (Zp1PEAFD_7(&ZehCfg728_10) == 0) {
Z166 = GetEnvVar((STRING)"CT_DIR", 6L);
if (Z166 != NIL) {
Z158 = 0;
for (;;) {
Z159.A[Z158] = Z166->A[Z158];
if (Z159.A[Z158] == '\0' || Z158 == 255) {
goto EXIT_2;
}
INC(Z158);
} EXIT_2:;
Zp1PEAFD_13(Z159.A, 256L, &ZehCfg728_10);
Zp1PEAFD_6(&ZehCfg728_10, DirectorySeparator());
Zp1PEAFD_13((STRING)"lib", 3L, &Z122);
Zp1PEAFD_5(&ZehCfg728_10, &Z122);
Zp1PEAFD_6(&ZehCfg728_10, DirectorySeparator());
Zp1PEAFD_13((STRING)"ell", 3L, &Z122);
Zp1PEAFD_5(&ZehCfg728_10, &Z122);
Zp1PEAFD_6(&ZehCfg728_10, DirectorySeparator());
}
}
if (Z161) {
ZehCfg728_1 = TRUE;
ZehCfg728_2 = TRUE;
}
if (Z162) {
Zp1BbM_27();
Zp1BbM_23((STRING)"usage: ell [-options] [file]", 28L);
Zp1BbM_27();
Zp1BbM_27();
Zp1BbM_23((STRING)" c  generate C code", 19L);
Zp1BbM_27();
Zp1BbM_23((STRING)" m  generate Modula-2 code (default)", 36L);
Zp1BbM_27();
Zp1BbM_23((STRING)" d  generate header file or definition module", 45L);
Zp1BbM_27();
Zp1BbM_23((STRING)" i  generate implementation part or module", 42L);
Zp1BbM_27();
Zp1BbM_23((STRING)" p  generate main program to be used as test driver", 51L);
Zp1BbM_27();
Zp1BbM_23((STRING)" g  generate # line directives", 30L);
Zp1BbM_27();
Zp1BbM_23((STRING)" j  treat undeclared symbols as terminal symbols", 48L);
Zp1BbM_27();
Zp1BbM_23((STRING)" f[<prefix>] generate constant declarations for tokens in header file", 69L);
Zp1BbM_27();
Zp1BbM_23((STRING)"      using prefix (default: t_)", 32L);
Zp1BbM_27();
Zp1BbM_23((STRING)" h  print help information", 26L);
Zp1BbM_27();
Zp1BbM_23((STRING)" l<dir> specify the directory dir where ell finds its data files", 64L);
Zp1BbM_27();
ZfM_34();
rExit(0L);
}
if (ZblNKKO_49((LONGCARD)ZblNKKO_16) > 0) {
ZblNKKO_42();
ZfM_34();
rExit(1L);
}
}

void BEGIN_ArgCheck ARGS ((void))
{
  static BOOLEAN has_been_called = FALSE;
  if (has_been_called) return;
  has_been_called = TRUE;
BEGIN_Strings ();
BEGIN_Errors ();
BEGIN_Position ();
BEGIN_IO ();
BEGIN_Scanner ();
BEGIN_StdIO ();
BEGIN_Strings ();
BEGIN_Idents ();
BEGIN_rSystem ();

ZehCfg728_1 = FALSE;
ZehCfg728_3 = FALSE;
ZehCfg728_2 = FALSE;
ZehCfg728_4 = FALSE;
ZehCfg728_5 = FALSE;
ZehCfg728_6 = FALSE;
ZehCfg728_9.A[0] = 't';
ZehCfg728_9.A[1] = '_';
ZehCfg728_9.A[2] = '\0';
ZehCfg728_7 = ZehCfg728_13;
Zp1PEAFD_4(&ZehCfg728_10);
}
