#include "SYSTEM_.h"

#ifndef DEFINITION_DynArray
#include "DynArray.h"
#endif

#ifndef DEFINITION_Strings
#include "Strings.h"
#endif

#ifndef DEFINITION_IO
#include "IO.h"
#endif

#ifndef DEFINITION_WStrings
#include "WStrings.h"
#endif

#ifndef DEFINITION_StringM
#include "StringM.h"
#endif


#define Z130	(1024 * 20)
static struct S_1 {
CHAR A[10000000 + 1];
} *Z131;
static LONGINT Z132;
static LONGINT Z133;
static LONGINT Z134;
static struct S_2 {
CHAR A[1 + 1];
} Z135;

Zp1PEAFi_1 Zp1PEAFi_2
# ifdef HAVE_ARGS
(Zp1PEAFD_2 *Z137)
# else
(Z137)
Zp1PEAFD_2 *Z137;
# endif
{
LONGINT Z139;
LONGINT Z140;
LONGINT Z141;
Zp1PEAFD_1 Z142;

Z139 = Z137->Y1 + 2;
if (Z139 > Z133) {
if ((ADDRESS)Z131 == ADR (Z135)) {
Z132 = Z130;
ZarQdhNDD_0((ADDRESS *)&Z131, &Z132, (LONGINT)sizeof (CHAR));
Z131->A[0] = CHR(0);
Z131->A[1] = CHR(0);
Z134 = 2;
} else {
do {
Z140 = Z132;
ZarQdhNDD_2((ADDRESS *)&Z131, &Z132, (LONGINT)sizeof (CHAR));
INC1(Z133, Z132 - Z140);
} while (!(Z133 >= Z139));
}
}
Z141 = Z134;
Z131->A[Z134] = CHR(Z137->Y1 / 256);
INC(Z134);
Z131->A[Z134] = CHR(Z137->Y1 % 256);
INC(Z134);
{
Zp1PEAFD_1 B_1 = 1, B_2 = Z137->Y1;

if (B_1 <= B_2)
for (Z142 = B_1;; Z142 += 1) {
Z131->A[Z134] = Z137->Y0.A[Z142];
INC(Z134);
if (Z142 >= B_2) break;
}
}
DEC1(Z133, Z139);
return Z141;
}

void Zp1PEAFi_3
# ifdef HAVE_ARGS
(Zp1PEAFi_1 Z146, Zp1PEAFD_2 *Z137)
# else
(Z146, Z137)
Zp1PEAFi_1 Z146;
Zp1PEAFD_2 *Z137;
# endif
{
Zp1PEAFD_1 Z142;

Z137->Y1 = Zp1PEAFi_4(Z146);
INC1(Z146, 2);
{
Zp1PEAFD_1 B_3 = 1, B_4 = Z137->Y1;

if (B_3 <= B_4)
for (Z142 = B_3;; Z142 += 1) {
Z137->Y0.A[Z142] = Z131->A[Z146];
INC(Z146);
if (Z142 >= B_4) break;
}
}
}

CARDINAL Zp1PEAFi_4
# ifdef HAVE_ARGS
(Zp1PEAFi_1 Z146)
# else
(Z146)
Zp1PEAFi_1 Z146;
# endif
{
return ORD(Z131->A[Z146]) * 256 + ORD(Z131->A[Z146 + 1]);
}

BOOLEAN Zp1PEAFi_5
# ifdef HAVE_ARGS
(Zp1PEAFi_1 Z146, Zp1PEAFD_2 *Z137)
# else
(Z146, Z137)
Zp1PEAFi_1 Z146;
Zp1PEAFD_2 *Z137;
# endif
{
Zp1PEAFD_1 Z142;

INC1(Z146, 2);
{
Zp1PEAFD_1 B_5 = 1, B_6 = Z137->Y1;

if (B_5 <= B_6)
for (Z142 = B_5;; Z142 += 1) {
if (Z131->A[Z146] != Z137->Y0.A[Z142]) {
return FALSE;
}
INC(Z146);
if (Z142 >= B_6) break;
}
}
return TRUE;
}

void Zp1PEAFi_6
# ifdef HAVE_ARGS
(ZfM_3 Z149, Zp1PEAFi_1 Z146)
# else
(Z149, Z146)
ZfM_3 Z149;
Zp1PEAFi_1 Z146;
# endif
{
Zp1PEAFi_1 Z142;

{
LONGINT B_7 = Z146 + 2, B_8 = Z146 + 1 + (Zp1PEAFi_1)Zp1PEAFi_4(Z146);

if (B_7 <= B_8)
for (Z142 = B_7;; Z142 += 1) {
ZfM_24(Z149, Z131->A[Z142]);
if (Z142 >= B_8) break;
}
}
}

Zp1PEAFi_7 Zp1PEAFi_8
# ifdef HAVE_ARGS
(Ztf1PEAFD_3 *Z137)
# else
(Z137)
Ztf1PEAFD_3 *Z137;
# endif
{
LONGINT Z139;
LONGINT Z140;
LONGINT Z141;
Zp1PEAFD_1 Z142;

Z139 = Z137->Y1 * sizeof (Ztf1PEAFD_1) + 2;
if (Z139 > Z133) {
if ((ADDRESS)Z131 == ADR (Z135)) {
Z132 = Z130;
ZarQdhNDD_0((ADDRESS *)&Z131, &Z132, (LONGINT)sizeof (CHAR));
Z131->A[0] = CHR(0);
Z131->A[1] = CHR(0);
Z134 = 2;
} else {
do {
Z140 = Z132;
ZarQdhNDD_2((ADDRESS *)&Z131, &Z132, (LONGINT)sizeof (CHAR));
INC1(Z133, Z132 - Z140);
} while (!(Z133 >= Z139));
}
}
Z141 = Z134;
Z131->A[Z134] = CHR(Z137->Y1 / 256);
INC(Z134);
Z131->A[Z134] = CHR(Z137->Y1 % 256);
INC(Z134);
{
Zp1PEAFD_1 B_9 = 1, B_10 = Z137->Y1;

if (B_9 <= B_10)
for (Z142 = B_9;; Z142 += 1) {
Z131->A[Z134] = CHR(Z137->Y0.A[Z142] / 256);
INC(Z134);
Z131->A[Z134] = CHR(Z137->Y0.A[Z142] % 256);
INC(Z134);
if (Z142 >= B_10) break;
}
}
DEC1(Z133, Z139);
return Z141;
}

void Zp1PEAFi_9
# ifdef HAVE_ARGS
(Zp1PEAFi_7 Z146, Ztf1PEAFD_3 *Z137)
# else
(Z146, Z137)
Zp1PEAFi_7 Z146;
Ztf1PEAFD_3 *Z137;
# endif
{
Zp1PEAFD_1 Z142;

Z137->Y1 = Zp1PEAFi_4(Z146);
INC1(Z146, 2);
{
Zp1PEAFD_1 B_11 = 1, B_12 = Z137->Y1;

if (B_11 <= B_12)
for (Z142 = B_11;; Z142 += 1) {
Z137->Y0.A[Z142] = ORD(Z131->A[Z146]) * 256 + ORD(Z131->A[Z146 + 1]);
INC1(Z146, 2);
if (Z142 >= B_12) break;
}
}
}

BOOLEAN Zp1PEAFi_10
# ifdef HAVE_ARGS
(Zp1PEAFi_7 Z146, Ztf1PEAFD_3 *Z137)
# else
(Z146, Z137)
Zp1PEAFi_7 Z146;
Ztf1PEAFD_3 *Z137;
# endif
{
Zp1PEAFD_1 Z142;
Ztf1PEAFD_1 Z155;

INC1(Z146, 2);
{
Zp1PEAFD_1 B_13 = 1, B_14 = Z137->Y1;

if (B_13 <= B_14)
for (Z142 = B_13;; Z142 += 1) {
Z155 = ORD(Z131->A[Z146]) * 256 + ORD(Z131->A[Z146 + 1]);
if (Z155 != Z137->Y0.A[Z142]) {
return FALSE;
}
INC1(Z146, 2);
if (Z142 >= B_14) break;
}
}
return TRUE;
}

void Zp1PEAFi_11
# ifdef HAVE_ARGS
(ZfM_3 Z149, Zp1PEAFi_7 Z146)
# else
(Z149, Z146)
ZfM_3 Z149;
Zp1PEAFi_7 Z146;
# endif
{
Zp1PEAFi_1 Z142;
Ztf1PEAFD_1 Z155;

{
LONGINT B_15 = Z146 + 2, B_16 = Z146 + 1 + (Zp1PEAFi_1)Zp1PEAFi_4(Z146);

if (B_15 <= B_16)
for (Z142 = B_15, B_16 = FOR_LIMIT_UP (B_16, 2, MIN_LONGINT);; Z142 += 2) {
Z155 = ORD(Z131->A[Z146]) * 256 + ORD(Z131->A[Z146 + 1]);
ZfM_24(Z149, CHR(Z155));
if (Z142 >= B_16) break;
}
}
}

void Zp1PEAFi_12
 ARGS ((void))
{
LONGINT Z158;
LONGINT Z159;

Z158 = 0;
while (Z158 < Z134) {
ZfM_25((ZDz6VQCC_4)ZfM_1, Z158, 5L);
ZfM_24((ZDz6VQCC_4)ZfM_1, ' ');
Zp1PEAFi_6((ZDz6VQCC_4)ZfM_1, Z158);
ZfM_33((ZDz6VQCC_4)ZfM_1);
Z159 = Zp1PEAFi_4(Z158) + 2;
INC1(Z158, Z159);
}
ZfM_33((ZDz6VQCC_4)ZfM_1);
ZfM_25((ZDz6VQCC_4)ZfM_1, Z158, 5L);
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)" Bytes", 6L);
ZfM_33((ZDz6VQCC_4)ZfM_1);
}

void Zp1PEAFi_13
 ARGS ((void))
{
Zp1PEAFi_14();
}

void Zp1PEAFi_14
 ARGS ((void))
{
Z131 = (struct S_1 *)ADR (Z135);
Z133 = 0;
}

void Zp1PEAFi_15
 ARGS ((void))
{
if ((ADDRESS)Z131 != ADR (Z135)) {
ZarQdhNDD_3((ADDRESS *)&Z131, &Z132, (LONGINT)sizeof (CHAR));
}
Zp1PEAFi_14();
}

void BEGIN_StringM ARGS ((void))
{
  static BOOLEAN has_been_called = FALSE;
  if (has_been_called) return;
  has_been_called = TRUE;
BEGIN_IO ();
BEGIN_Strings ();
BEGIN_WStrings ();
BEGIN_DynArray ();
BEGIN_Strings ();
BEGIN_IO ();
BEGIN_WStrings ();

Z135.A[0] = CHR(0);
Z135.A[1] = CHR(0);
Zp1PEAFi_14();
}
