#include "SYSTEM_.h"

#ifndef DEFINITION_IO
#include "IO.h"
#endif

#ifndef DEFINITION_rMemory
#include "rMemory.h"
#endif

#ifndef DEFINITION_Pack
#include "Pack.h"
#endif


#define Z119	'!'
#define Z120	'+'
#define Z121	'~'
#define Z122	((ORD(Z121) - ORD(Z120) + 1) / 2)
typedef struct S_1 *_0;
typedef void (*Z125) ARGS ((Zmfy8_0));
typedef struct S_1 {
CARDINAL Y0;
CARDINAL Y1;
ZfM_3 Y2;
Z125 Y3;
} Z124;
static void Z131 ARGS ((Zmfy8_0 Z132));
static void Z134 ARGS ((Zmfy8_0 Z132));
static void Z135 ARGS ((Zmfy8_0 Z132));
struct S_5 {
CHAR A[10 + 1];
};

static void Z131
# ifdef HAVE_ARGS
(Zmfy8_0 Z132)
# else
(Z132)
Zmfy8_0 Z132;
# endif
{
{
register Z124 *W_1 = (_0)Z132;

ZfM_29(W_1->Y2, (STRING)"Pack.UnpackCard(hc, \"", 21L);
W_1->Y0 = 0;
W_1->Y1 = 0;
}
}

static void Z134
# ifdef HAVE_ARGS
(Zmfy8_0 Z132)
# else
(Z132)
Zmfy8_0 Z132;
# endif
{
{
register Z124 *W_2 = (_0)Z132;

ZfM_29(W_2->Y2, (STRING)"Pack.UnpackInt(hi, \"", 20L);
W_2->Y0 = 0;
W_2->Y1 = 0;
}
}

static void Z135
# ifdef HAVE_ARGS
(Zmfy8_0 Z132)
# else
(Z132)
Zmfy8_0 Z132;
# endif
{
{
register Z124 *W_3 = (_0)Z132;

ZfM_29(W_3->Y2, (STRING)"\", ", 3L);
ZfM_25(W_3->Y2, (LONGINT)W_3->Y1, 1L);
ZfM_29(W_3->Y2, (STRING)");", 2L);
ZfM_33(W_3->Y2);
W_3->Y0 = 0;
W_3->Y1 = 0;
}
}

void Zmfy8_4
# ifdef HAVE_ARGS
(Zmfy8_0 *Z132, ZfM_3 Z128)
# else
(Z132, Z128)
Zmfy8_0 *Z132;
ZfM_3 Z128;
# endif
{
*Z132 = (Zmfy8_0)ZDtgCFKU_1((LONGINT)sizeof (Z124));
((_0)(*Z132))->Y0 = 0;
((_0)(*Z132))->Y1 = 0;
((_0)(*Z132))->Y2 = Z128;
((_0)(*Z132))->Y3 = Z131;
(*((_0)(*Z132))->Y3)(*Z132);
}

void Zmfy8_5
# ifdef HAVE_ARGS
(Zmfy8_0 *Z132, ZfM_3 Z128)
# else
(Z132, Z128)
Zmfy8_0 *Z132;
ZfM_3 Z128;
# endif
{
*Z132 = (Zmfy8_0)ZDtgCFKU_1((LONGINT)sizeof (Z124));
((_0)(*Z132))->Y0 = 0;
((_0)(*Z132))->Y1 = 0;
((_0)(*Z132))->Y2 = Z128;
((_0)(*Z132))->Y3 = Z134;
(*((_0)(*Z132))->Y3)(*Z132);
}

void Zmfy8_6
# ifdef HAVE_ARGS
(Zmfy8_0 Z132, LONGCARD Z141)
# else
(Z132, Z141)
Zmfy8_0 Z132;
LONGCARD Z141;
# endif
{
LONGCARD Z142;
struct S_5 Z143;

{
register Z124 *W_4 = (_0)Z132;

Z142 = 0;
do {
Z143.A[Z142] = CHR(Z141 % Z122 + ORD(Z120) + Z122);
Z142 = Z142 + 1;
Z141 = Z141 / Z122;
} while (!(Z141 == 0));
Z143.A[0] = CHR(ORD(Z143.A[0]) - Z122);
W_4->Y0 = W_4->Y0 + Z142;
do {
Z142 = Z142 - 1;
ZfM_24(W_4->Y2, Z143.A[Z142]);
} while (!(Z142 == 0));
W_4->Y1 = W_4->Y1 + 1;
if (W_4->Y0 > 54) {
Z135(Z132);
(*W_4->Y3)(Z132);
}
}
}

void Zmfy8_7
# ifdef HAVE_ARGS
(Zmfy8_0 Z132, LONGINT Z141)
# else
(Z132, Z141)
Zmfy8_0 Z132;
LONGINT Z141;
# endif
{
{
register Z124 *W_5 = (_0)Z132;

if (Z141 < 0) {
ZfM_24(W_5->Y2, Z119);
W_5->Y0 = W_5->Y0 + 1;
Zmfy8_6(Z132, (LONGCARD)(-Z141));
} else {
Zmfy8_6(Z132, (LONGCARD)Z141);
}
}
}

void Zmfy8_8
# ifdef HAVE_ARGS
(Zmfy8_0 *Z132)
# else
(Z132)
Zmfy8_0 *Z132;
# endif
{
Z135(*Z132);
ZDtgCFKU_2((LONGINT)sizeof (Z124), (ADDRESS)(*Z132));
*Z132 = (Zmfy8_0)NIL;
}

void Zmfy8_10
# ifdef HAVE_ARGS
(Zmfy8_1 Z148, CHAR Z150[], LONGCARD O_1, CARDINAL Z127)
# else
(Z148, Z150, O_1, Z127)
Zmfy8_1 Z148;
CHAR Z150[];
LONGCARD O_1;
CARDINAL Z127;
# endif
{
OPEN_ARRAY_LOCALS

ALLOC_OPEN_ARRAYS (O_1 * sizeof (CHAR), 1)
COPY_OPEN_ARRAY (Z150, O_1, CHAR)
Zmfy8_9(Z148, Z150, O_1, Z127);
FREE_OPEN_ARRAYS
}

void Zmfy8_9
# ifdef HAVE_ARGS
(Zmfy8_1 Z148, CHAR Z150[], LONGCARD O_2, CARDINAL Z127)
# else
(Z148, Z150, O_2, Z127)
Zmfy8_1 Z148;
CHAR Z150[];
LONGCARD O_2;
CARDINAL Z127;
# endif
{
CARDINAL Z142, Z152, Z153;
LONGCARD Z141;
OPEN_ARRAY_LOCALS

ALLOC_OPEN_ARRAYS (O_2 * sizeof (CHAR), 1)
COPY_OPEN_ARRAY (Z150, O_2, CHAR)
Z142 = 0;
{
LONGCARD B_1 = 1, B_2 = Z127;

if (B_1 <= B_2)
for (Z152 = B_1;; Z152 += 1) {
Z141 = 0;
do {
Z153 = ORD(Z150[Z142]) - ORD(Z120);
Z141 = Z141 * Z122 + Z153 % Z122;
INC(Z142);
} while (!(Z153 < Z122));
(*Z148)(Z141);
if (Z152 >= B_2) break;
}
}
FREE_OPEN_ARRAYS
}

void Zmfy8_11
# ifdef HAVE_ARGS
(Zmfy8_2 Z148, CHAR Z150[], LONGCARD O_3, CARDINAL Z127)
# else
(Z148, Z150, O_3, Z127)
Zmfy8_2 Z148;
CHAR Z150[];
LONGCARD O_3;
CARDINAL Z127;
# endif
{
BOOLEAN Z156;
CARDINAL Z142, Z152, Z153;
LONGCARD Z141;
OPEN_ARRAY_LOCALS

ALLOC_OPEN_ARRAYS (O_3 * sizeof (CHAR), 1)
COPY_OPEN_ARRAY (Z150, O_3, CHAR)
Z142 = 0;
{
LONGCARD B_3 = 1, B_4 = Z127;

if (B_3 <= B_4)
for (Z152 = B_3;; Z152 += 1) {
Z141 = 0;
Z156 = Z150[Z142] == Z119;
if (Z156) {
INC(Z142);
}
do {
Z153 = ORD(Z150[Z142]) - ORD(Z120);
Z141 = Z141 * Z122 + Z153 % Z122;
INC(Z142);
} while (!(Z153 < Z122));
if (Z156) {
(*Z148)(-(LONGINT)Z141);
} else {
(*Z148)((LONGINT)Z141);
}
if (Z152 >= B_4) break;
}
}
FREE_OPEN_ARRAYS
}

void BEGIN_Pack ARGS ((void))
{
  static BOOLEAN has_been_called = FALSE;
  if (has_been_called) return;
  has_been_called = TRUE;
BEGIN_IO ();
BEGIN_IO ();
BEGIN_rMemory ();

}
