#include "SYSTEM_.h"

#ifndef DEFINITION_DynArray
#include "DynArray.h"
#endif

#ifndef DEFINITION_Strings
#include "Strings.h"
#endif

#ifndef DEFINITION_WStrings
#include "WStrings.h"
#endif

#ifndef DEFINITION_StringM
#include "StringM.h"
#endif

#ifndef DEFINITION_IO
#include "IO.h"
#endif

#ifndef DEFINITION_Strings
#include "Strings.h"
#endif

#ifndef DEFINITION_WStrings
#include "WStrings.h"
#endif

#ifndef DEFINITION_StringM
#include "StringM.h"
#endif

#ifndef DEFINITION_Idents
#include "Idents.h"
#endif


#define Z138	0
#define Z139	1024
#define Z140	256
typedef struct S_1 {
Zp1PEAFi_1 Y0;
Zp1PEAFD_1 Y1;
Zfb3DLQ_0 Y2;
} Z141;
typedef LONGCARD Z146;
static struct S_2 {
Z141 A[1000000 + 1];
} *Z147;
static LONGINT Z148;
static Zfb3DLQ_0 Z149;
static struct S_3 {
Z141 A[1 + 1];
} Z150;
static struct S_4 {
Zfb3DLQ_0 A[Z140 + 1];
} Z151;

Zfb3DLQ_0 Zfb3DLQ_2
# ifdef HAVE_ARGS
(Zp1PEAFD_2 *Z153)
# else
(Z153)
Zp1PEAFD_2 *Z153;
# endif
{
Z146 Z154;
Zfb3DLQ_0 Z155;
LONGINT Z156;
Z146 Z157;

{
register Zp1PEAFD_2 *W_1 = Z153;

if (W_1->Y1 == 0) {
Z154 = 0;
} else {
Z154 = (ORD(W_1->Y0.A[1]) + ORD(W_1->Y0.A[W_1->Y1]) * 11 + W_1->Y1 * 26) % Z140;
}
}
Z155 = Z151.A[Z154];
for (;;) {
if (Z155 == Z138) {
goto EXIT_1;
}
{
register Z141 *W_2 = &Z147->A[Z155];

if (W_2->Y1 == Z153->Y1 && Zp1PEAFi_5(W_2->Y0, Z153)) {
return Z155;
}
Z155 = W_2->Y2;
}
} EXIT_1:;
INC(Z149);
Z156 = Z149;
if (Z156 >= Z148) {
if (Z148 == 0) {
Z148 = Z139;
ZarQdhNDD_0((ADDRESS *)&Z147, &Z148, (LONGINT)sizeof (Z141));
Z147->A[Zfb3DLQ_1] = Z150.A[Zfb3DLQ_1];
Z151.A[0] = Zfb3DLQ_1;
for (Z157 = 1; Z157 <= Z140; Z157 += 1) {
Z151.A[Z157] = Z138;
}
Z149 = 2;
} else {
ZarQdhNDD_2((ADDRESS *)&Z147, &Z148, (LONGINT)sizeof (Z141));
}
}
{
register Z141 *W_3 = &Z147->A[Z149];

W_3->Y0 = Zp1PEAFi_2(Z153);
W_3->Y1 = Z153->Y1;
W_3->Y2 = Z151.A[Z154];
}
Z151.A[Z154] = Z149;
return Z149;
}

void Zfb3DLQ_3
# ifdef HAVE_ARGS
(Zfb3DLQ_0 Z157, Zp1PEAFD_2 *Z153)
# else
(Z157, Z153)
Zfb3DLQ_0 Z157;
Zp1PEAFD_2 *Z153;
# endif
{
{
register Z141 *W_4 = &Z147->A[Z157];

Zp1PEAFi_3(W_4->Y0, Z153);
}
}

Zp1PEAFi_1 Zfb3DLQ_4
# ifdef HAVE_ARGS
(Zfb3DLQ_0 Z157)
# else
(Z157)
Zfb3DLQ_0 Z157;
# endif
{
return Z147->A[Z157].Y0;
}

INTEGER Zfb3DLQ_5
# ifdef HAVE_ARGS
(Zfb3DLQ_0 Z157)
# else
(Z157)
Zfb3DLQ_0 Z157;
# endif
{
return Zp1PEAFi_4(Z147->A[Z157].Y0);
}

Zfb3DLQ_0 Zfb3DLQ_6
 ARGS ((void))
{
return Z149;
}

void Zfb3DLQ_7
# ifdef HAVE_ARGS
(ZfM_3 Z165, Zfb3DLQ_0 Z157)
# else
(Z165, Z157)
ZfM_3 Z165;
Zfb3DLQ_0 Z157;
# endif
{
Zp1PEAFD_2 Z153;

Zfb3DLQ_3(Z157, &Z153);
Zp1PEAFD_21(Z165, &Z153);
}

Zfb3DLQ_8 Zfb3DLQ_10
# ifdef HAVE_ARGS
(Ztf1PEAFD_4 *Z153)
# else
(Z153)
Ztf1PEAFD_4 *Z153;
# endif
{
Z146 Z154;
Zfb3DLQ_8 Z155;
LONGINT Z156;
Z146 Z157;

{
register Ztf1PEAFD_3 *W_5 = Z153;

if (W_5->Y1 == 0) {
Z154 = 0;
} else {
Z154 = (ORD(W_5->Y0.A[1]) + ORD(W_5->Y0.A[W_5->Y1]) * 11 + W_5->Y1 * 26) % Z140;
}
}
Z155 = Z151.A[Z154];
for (;;) {
if (Z155 == Z138) {
goto EXIT_2;
}
{
register Z141 *W_6 = &Z147->A[Z155];

if (W_6->Y1 == Z153->Y1 && Zp1PEAFi_10(W_6->Y0, Z153)) {
return Z155;
}
Z155 = W_6->Y2;
}
} EXIT_2:;
INC(Z149);
Z156 = Z149;
if (Z156 >= Z148) {
if (Z148 == 0) {
Z148 = Z139;
ZarQdhNDD_0((ADDRESS *)&Z147, &Z148, (LONGINT)sizeof (Z141));
Z147->A[Zfb3DLQ_1] = Z150.A[Zfb3DLQ_1];
Z151.A[0] = Zfb3DLQ_1;
for (Z157 = 1; Z157 <= Z140; Z157 += 1) {
Z151.A[Z157] = Z138;
}
Z149 = 2;
} else {
ZarQdhNDD_2((ADDRESS *)&Z147, &Z148, (LONGINT)sizeof (Z141));
}
}
{
register Z141 *W_7 = &Z147->A[Z149];

W_7->Y0 = Zp1PEAFi_8(Z153);
W_7->Y1 = Z153->Y1;
W_7->Y2 = Z151.A[Z154];
}
Z151.A[Z154] = Z149;
return Z149;
}

void Zfb3DLQ_11
# ifdef HAVE_ARGS
(Zfb3DLQ_8 Z157, Ztf1PEAFD_4 *Z153)
# else
(Z157, Z153)
Zfb3DLQ_8 Z157;
Ztf1PEAFD_4 *Z153;
# endif
{
{
register Z141 *W_8 = &Z147->A[Z157];

Zp1PEAFi_9(W_8->Y0, Z153);
}
}

Zp1PEAFi_1 Zfb3DLQ_12
# ifdef HAVE_ARGS
(Zfb3DLQ_8 Z157)
# else
(Z157)
Zfb3DLQ_8 Z157;
# endif
{
return Z147->A[Z157].Y0;
}

void Zfb3DLQ_13
# ifdef HAVE_ARGS
(ZfM_3 Z165, Zfb3DLQ_8 Z157)
# else
(Z165, Z157)
ZfM_3 Z165;
Zfb3DLQ_8 Z157;
# endif
{
Ztf1PEAFD_4 Z153;

Zfb3DLQ_11(Z157, &Z153);
Ztf1PEAFD_23(Z165, &Z153);
}

void Zfb3DLQ_14
 ARGS ((void))
{
CARDINAL Z157;

{
LONGCARD B_1 = 1, B_2 = Z149;

if (B_1 <= B_2)
for (Z157 = B_1;; Z157 += 1) {
ZfM_25((ZDz6VQCC_4)ZfM_1, (LONGINT)Z157, 5L);
ZfM_24((ZDz6VQCC_4)ZfM_1, ' ');
Zfb3DLQ_7((ZDz6VQCC_4)ZfM_1, (SHORTCARD)Z157);
ZfM_33((ZDz6VQCC_4)ZfM_1);
if (Z157 >= B_2) break;
}
}
}

void Zfb3DLQ_18
 ARGS ((void))
{
Zfb3DLQ_0 Z155;
Z146 Z157;
CARDINAL Z173;

for (Z157 = 0; Z157 <= Z140; Z157 += 1) {
ZfM_25((ZDz6VQCC_4)ZfM_1, (LONGINT)Z157, 5L);
Z173 = 0;
Z155 = Z151.A[Z157];
while (Z155 != Z138) {
INC(Z173);
Z155 = Z147->A[Z155].Y2;
}
ZfM_25((ZDz6VQCC_4)ZfM_1, (LONGINT)Z173, 5L);
Z155 = Z151.A[Z157];
while (Z155 != Z138) {
ZfM_24((ZDz6VQCC_4)ZfM_1, ' ');
Zfb3DLQ_7((ZDz6VQCC_4)ZfM_1, Z155);
Z155 = Z147->A[Z155].Y2;
}
ZfM_33((ZDz6VQCC_4)ZfM_1);
}
ZfM_33((ZDz6VQCC_4)ZfM_1);
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)"Idents =", 8L);
ZfM_25((ZDz6VQCC_4)ZfM_1, (LONGINT)Z149, 5L);
ZfM_33((ZDz6VQCC_4)ZfM_1);
}

void Zfb3DLQ_15
 ARGS ((void))
{
Zfb3DLQ_16();
}

void Zfb3DLQ_16
 ARGS ((void))
{
Z147 = (struct S_2 *)ADR (Z150);
Z148 = 0;
Z149 = 1;
Z151.A[0] = Zfb3DLQ_1;
}

void Zfb3DLQ_17
 ARGS ((void))
{
if (Z148 > 0) {
ZarQdhNDD_3((ADDRESS *)&Z147, &Z148, (LONGINT)sizeof (Z141));
}
Zfb3DLQ_16();
}

void BEGIN_Idents ARGS ((void))
{
  static BOOLEAN has_been_called = FALSE;
  if (has_been_called) return;
  has_been_called = TRUE;
BEGIN_IO ();
BEGIN_Strings ();
BEGIN_WStrings ();
BEGIN_StringM ();
BEGIN_DynArray ();
BEGIN_Strings ();
BEGIN_WStrings ();
BEGIN_StringM ();
BEGIN_IO ();
BEGIN_Strings ();
BEGIN_WStrings ();
BEGIN_StringM ();

{
register Z141 *W_9 = &Z150.A[Zfb3DLQ_1];

W_9->Y0 = Zp1PEAFi_0;
W_9->Y1 = 0;
W_9->Y2 = Z138;
}
Zfb3DLQ_16();
}
