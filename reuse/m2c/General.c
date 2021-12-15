#include "SYSTEM_.h"

#ifndef DEFINITION_Argument
#include "Argument.h"
#endif

#ifndef DEFINITION_rSystem
#include "rSystem.h"
#endif

#ifndef DEFINITION_General
#include "General.h"
#endif

BITSET ZdaDDAD7_2;

static SHORTCARD Z120;
static ZehCFLCDL_0 Z121;

INTEGER ZdaDDAD7_3
# ifdef HAVE_ARGS
(INTEGER Z123, INTEGER Z124)
# else
(Z123, Z124)
INTEGER Z123, Z124;
# endif
{
if (Z123 <= Z124) {
return Z123;
} else {
return Z124;
}
}

INTEGER ZdaDDAD7_4
# ifdef HAVE_ARGS
(INTEGER Z123, INTEGER Z124)
# else
(Z123, Z124)
INTEGER Z123, Z124;
# endif
{
if (Z123 >= Z124) {
return Z123;
} else {
return Z124;
}
}

LONGCARD ZdaDDAD7_5
# ifdef HAVE_ARGS
(LONGCARD Z123, LONGCARD Z124)
# else
(Z123, Z124)
LONGCARD Z123, Z124;
# endif
{
if (Z123 <= Z124) {
return Z123;
} else {
return Z124;
}
}

LONGCARD ZdaDDAD7_6
# ifdef HAVE_ARGS
(LONGCARD Z123, LONGCARD Z124)
# else
(Z123, Z124)
LONGCARD Z123, Z124;
# endif
{
if (Z123 >= Z124) {
return Z123;
} else {
return Z124;
}
}

CARDINAL ZdaDDAD7_7
# ifdef HAVE_ARGS
(LONGCARD Z129)
# else
(Z129)
LONGCARD Z129;
# endif
{
CARDINAL Z130;

Z130 = 0;
if (Z129 >= 65536) {
INC1(Z130, 16);
Z129 = Z129 / 65536;
}
if (Z129 >= 256) {
INC1(Z130, 8);
Z129 = Z129 / 256;
}
if (Z129 >= 16) {
INC1(Z130, 4);
Z129 = Z129 / 16;
}
if (Z129 >= 4) {
INC1(Z130, 2);
Z129 = Z129 / 4;
}
if (Z129 >= 2) {
INC1(Z130, 1);
Z129 = Z129 / 2;
}
return Z130;
}

CARDINAL ZdaDDAD7_9
# ifdef HAVE_ARGS
(LONGINT Z129)
# else
(Z129)
LONGINT Z129;
# endif
{
CARDINAL Z130;

Z130 = 0;
if (Z129 % 65536 == 0) {
INC1(Z130, 16);
Z129 = Z129 / 65536;
}
if (Z129 % 256 == 0) {
INC1(Z130, 8);
Z129 = Z129 / 256;
}
if (Z129 % 16 == 0) {
INC1(Z130, 4);
Z129 = Z129 / 16;
}
if (Z129 % 4 == 0) {
INC1(Z130, 2);
Z129 = Z129 / 4;
}
if (Z129 % 2 == 0) {
INC1(Z130, 1);
Z129 = Z129 / 2;
}
return Z130;
}

LONGCARD ZdaDDAD7_8
# ifdef HAVE_ARGS
(CARDINAL Z129)
# else
(Z129)
CARDINAL Z129;
# endif
{
LONGCARD Z130;

Z130 = 1;
if (Z129 >= 16) {
DEC1(Z129, 16);
Z130 = Z130 * 65536;
}
if (Z129 >= 8) {
DEC1(Z129, 8);
Z130 = Z130 * 256;
}
if (Z129 >= 4) {
DEC1(Z129, 4);
Z130 = Z130 * 16;
}
if (Z129 >= 2) {
DEC1(Z129, 2);
Z130 = Z130 * 4;
}
if (Z129 >= 1) {
DEC1(Z129, 1);
Z130 = Z130 * 2;
}
return Z130;
}

CARDINAL ZdaDDAD7_10
# ifdef HAVE_ARGS
(LONGINT Z129)
# else
(Z129)
LONGINT Z129;
# endif
{
CARDINAL Z130;

Z130 = 0;
if (Z129 >= 100000000) {
INC1(Z130, 8);
Z129 = Z129 / 100000000;
}
if (Z129 >= 10000) {
INC1(Z130, 4);
Z129 = Z129 / 10000;
}
if (Z129 >= 100) {
INC1(Z130, 2);
Z129 = Z129 / 100;
}
if (Z129 >= 10) {
INC1(Z130, 1);
Z129 = Z129 / 10;
}
return Z130;
}

REAL ZdaDDAD7_11
# ifdef HAVE_ARGS
(INTEGER Z129)
# else
(Z129)
INTEGER Z129;
# endif
{
REAL Z130;
BOOLEAN Z135;

Z135 = Z129 < 0;
Z129 = ABSLI(Z129);
Z130 = 1.0;
if (Z129 >= 32) {
DEC1(Z129, 32);
Z130 = Z130 * 1.0E32;
}
if (Z129 >= 16) {
DEC1(Z129, 16);
Z130 = Z130 * 1.0E16;
}
if (Z129 >= 8) {
DEC1(Z129, 8);
Z130 = Z130 * 1.0E8;
}
if (Z129 >= 4) {
DEC1(Z129, 4);
Z130 = Z130 * 1.0E4;
}
if (Z129 >= 2) {
DEC1(Z129, 2);
Z130 = Z130 * 1.0E2;
}
if (Z129 >= 1) {
DEC1(Z129, 1);
Z130 = Z130 * 1.0E1;
}
if (Z135) {
return 1.0 / Z130;
} else {
return Z130;
}
}

void BEGIN_General ARGS ((void))
{
  static BOOLEAN has_been_called = FALSE;
  if (has_been_called) return;
  has_been_called = TRUE;
BEGIN_Argument ();
BEGIN_rSystem ();

ZdaDDAD7_2 = SET_DIFF(SET_cRNG (0, sizeof (LONGCARD) * 8 - 1), (BITSET)(ZdaDDAD7_1 - 1));
GetArgs(&Z120, &Z121);
PutArgs((LONGINT)Z120, (ADDRESS)Z121);
}
