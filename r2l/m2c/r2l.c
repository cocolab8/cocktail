#include "SYSTEM_.h"

#ifndef DEFINITION_rSystem
#include "rSystem.h"
#endif

#ifndef DEFINITION_IO
#include "IO.h"
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

#ifndef DEFINITION_Position
#include "Position.h"
#endif

#ifndef DEFINITION_Scanner
#include "Scanner.h"
#endif

#ifndef DEFINITION_Parser
#include "Parser.h"
#endif

static struct S_1 {
CHAR A[255 + 1];
} Z136, Z137;
static Zp1PEAFD_2 Z138;
static SHORTCARD Z139, Z140, Z141;
static BOOLEAN Z142;
static CHAR Z143;


void BEGIN_MODULE ARGS ((void))
{
BEGIN_rSystem ();
BEGIN_IO ();
BEGIN_StdIO ();
BEGIN_Strings ();
BEGIN_Idents ();
BEGIN_Position ();
BEGIN_Scanner ();
BEGIN_Parser ();

Z142 = FALSE;
Z141 = 0;
Z136.A[0] = '\0';
{
SHORTCARD B_1 = 1, B_2 = GetArgCount() - 1;

if (B_1 <= B_2)
for (Z139 = B_1;; Z139 += 1) {
GetArgument((LONGINT)Z139, Z137.A, 256L);
if (Z137.A[0] == '-') {
if (Z137.A[1] == 'l') {
Z140 = 2;
for (;;) {
Z143 = Z137.A[Z140];
if (Z143 == '\0') {
goto EXIT_1;
}
INC(Z140);
} EXIT_1:;
} else {
Z140 = 0;
for (;;) {
INC(Z140);
Z143 = Z137.A[Z140];
switch (Z143) {
case '\0':;
goto EXIT_2;
break;
case '?':;
Z142 = TRUE;
break;
case 'h':;
Z142 = TRUE;
break;
default:
break;
}
} EXIT_2:;
}
} else if (Z137.A[0] == '?') {
Z142 = TRUE;
} else {
Z140 = 0;
do {
Z143 = Z137.A[Z140];
Z136.A[Z140] = Z143;
INC(Z140);
} while (!(Z143 == '\0'));
}
if (Z139 >= B_2) break;
}
}
if (Z142) {
Zp1BbM_23((STRING)"usage: r2l [-options] [file]", 28L);
Zp1BbM_27();
Zp1BbM_27();
Zp1BbM_23((STRING)" -h print help information", 26L);
Zp1BbM_27();
} else {
Zpky9FDA_5.Y0 = ZmtLFGGBG_1;
if (Z136.A[0] != '\0') {
Zpky9FDA_8(Z136.A, 256L);
Zp1PEAFD_13(Z136.A, 256L, &Z138);
Zpky9FDA_5.Y0.Y2 = Zfb3DLQ_2(&Z138);
}
Zpky9FDA_7();
Z141 = ZmfDOBA_48();
}
ZfM_34();
rExit(0L);
}
