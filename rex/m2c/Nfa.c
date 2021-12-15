#include "SYSTEM_.h"

#ifndef DEFINITION_DynArray
#include "DynArray.h"
#endif

#ifndef DEFINITION_IO
#include "IO.h"
#endif

#ifndef DEFINITION_Layout
#include "Layout.h"
#endif

#ifndef DEFINITION_ScanTabs
#include "ScanTabs.h"
#endif

#ifndef DEFINITION_GenTabs
#include "GenTabs.h"
#endif

#ifndef DEFINITION_UniCode
#include "UniCode.h"
#endif

#ifndef DEFINITION_Classes
#include "Classes.h"
#endif

#ifndef DEFINITION_Nfa
#include "Nfa.h"
#endif

Zki1_1 Zki1_3;
Zki1_2 Zki1_4;

#define Z136	4096
typedef struct S_1 {
Zgd7EPBB_1 Y0;
Zki1_1 Y1;
Zki1_2 Y2;
} Y1_137;
typedef struct S_2 {
Zki1_2 Y0;
Zpky9wjxF_11 Y1;
} Z143;
typedef struct S_3 {
Z143 A[10000000 + 1];
} Z146;
typedef struct S_4 {
Y1_137 A[10000000 + 1];
} Z147;
static Z146 *Z148;
static LONGINT Z149;
static Z147 *Z150;
static LONGINT Z151;
static void Z176 ARGS ((Zki1_2 Z137));

Zki1_1 Zki1_6
# ifdef HAVE_ARGS
(Zki1_2 Z153)
# else
(Z153)
Zki1_2 Z153;
# endif
{
INC(Zki1_3);
if (Zki1_3 == (LONGCARD)Z149) {
ZarQdhNDD_2((ADDRESS *)&Z148, &Z149, (LONGINT)sizeof (Z143));
}
{
register Z143 *W_1 = &Z148->A[Zki1_3];

W_1->Y0 = Z153;
W_1->Y1 = Zpky9wjxF_0;
}
return Zki1_3;
}

void Zki1_7
# ifdef HAVE_ARGS
(Zki1_1 Z156, Zpky9wjxF_11 Z157)
# else
(Z156, Z157)
Zki1_1 Z156;
Zpky9wjxF_11 Z157;
# endif
{
Z148->A[Z156].Y1 = Z157;
}

Zpky9wjxF_11 Zki1_8
# ifdef HAVE_ARGS
(Zki1_1 Z156)
# else
(Z156)
Zki1_1 Z156;
# endif
{
return Z148->A[Z156].Y1;
}

void Zki1_9
# ifdef HAVE_ARGS
(Zki1_1 Z156, Zki1_2 Z144)
# else
(Z156, Z144)
Zki1_1 Z156;
Zki1_2 Z144;
# endif
{
Z148->A[Z156].Y0 = Z144;
}

Zki1_2 Zki1_10
# ifdef HAVE_ARGS
(Zki1_1 Z156)
# else
(Z156)
Zki1_1 Z156;
# endif
{
return Z148->A[Z156].Y0;
}

BOOLEAN Zki1_11
# ifdef HAVE_ARGS
(Zki1_2 Z137)
# else
(Z137)
Zki1_2 Z137;
# endif
{
return Z137 == Zki1_0;
}

Zki1_2 Zki1_12
# ifdef HAVE_ARGS
(Zki1_2 Z137)
# else
(Z137)
Zki1_2 Z137;
# endif
{
return Z150->A[Z137].Y2;
}

Zki1_2 Zki1_13
# ifdef HAVE_ARGS
(Zgd7EPBB_1 Z165, Zki1_1 Z156)
# else
(Z165, Z156)
Zgd7EPBB_1 Z165;
Zki1_1 Z156;
# endif
{
INC(Zki1_4);
if (Zki1_4 == (LONGCARD)Z151) {
ZarQdhNDD_2((ADDRESS *)&Z150, &Z151, (LONGINT)sizeof (Y1_137));
}
{
register Y1_137 *W_2 = &Z150->A[Zki1_4];

W_2->Y0 = Z165;
W_2->Y1 = Z156;
W_2->Y2 = Zki1_0;
}
return Zki1_4;
}

Zki1_2 Zki1_14
# ifdef HAVE_ARGS
(Zki1_2 Z137, Zki1_2 Z144)
# else
(Z137, Z144)
Zki1_2 Z137, Z144;
# endif
{
Z150->A[Z137].Y2 = Z144;
return Z137;
}

Zgd7EPBB_1 Zki1_15
# ifdef HAVE_ARGS
(Zki1_2 Z137)
# else
(Z137)
Zki1_2 Z137;
# endif
{
return Z150->A[Z137].Y0;
}

Zki1_1 Zki1_16
# ifdef HAVE_ARGS
(Zki1_2 Z137)
# else
(Z137)
Zki1_2 Z137;
# endif
{
return Z150->A[Z137].Y1;
}

Zki1_2 Zki1_17
# ifdef HAVE_ARGS
(Zki1_2 Z171, Zki1_2 Z172)
# else
(Z171, Z172)
Zki1_2 Z171, Z172;
# endif
{
Zki1_2 Z173;

if (Z171 == Zki1_0) {
return Z172;
}
while (Z172 != Zki1_0) {
Z173 = Z150->A[Z172].Y2;
Z171 = Zki1_14(Z172, Z171);
Z172 = Z173;
}
return Z171;
}

Zki1_2 Zki1_18
# ifdef HAVE_ARGS
(Zki1_2 Z171)
# else
(Z171)
Zki1_2 Z171;
# endif
{
Zki1_2 Z172;

Z172 = Zki1_0;
while (Z171 != Zki1_0) {
{
register Y1_137 *W_3 = &Z150->A[Z171];

Z172 = Zki1_14(Zki1_13(W_3->Y0, W_3->Y1), Z172);
Z171 = W_3->Y2;
}
}
return Z172;
}

void Zki1_19
 ARGS ((void))
{
Zki1_1 Z156;

ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)"NFA :", 5L);
ZfM_33((ZDz6VQCC_4)ZfM_1);
ZfM_33((ZDz6VQCC_4)ZfM_1);
{
LONGCARD B_1 = 1, B_2 = Zki1_3;

if (B_1 <= B_2)
for (Z156 = B_1;; Z156 += 1) {
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)"State, Semantics =", 18L);
ZfM_25((ZDz6VQCC_4)ZfM_1, (LONGINT)Z156, 5L);
ZfM_25((ZDz6VQCC_4)ZfM_1, (LONGINT)Zki1_8(Z156), 5L);
ZfM_33((ZDz6VQCC_4)ZfM_1);
Z176(Zki1_10(Z156));
ZfM_33((ZDz6VQCC_4)ZfM_1);
ZfM_33((ZDz6VQCC_4)ZfM_1);
if (Z156 >= B_2) break;
}
}
ZfM_33((ZDz6VQCC_4)ZfM_1);
}

static void Z176
# ifdef HAVE_ARGS
(Zki1_2 Z137)
# else
(Z137)
Zki1_2 Z137;
# endif
{
INTEGER Z177;

Z177 = 0;
while (!Zki1_11(Z137)) {
if (Z177 == 10) {
ZfM_33((ZDz6VQCC_4)ZfM_1);
Z177 = 0;
}
INC(Z177);
ZrxAagD3_4((ZDz6VQCC_4)ZfM_1, Zki1_15(Z137));
ZibDRNS_1((ZDz6VQCC_4)ZfM_1);
ZfM_25((ZDz6VQCC_4)ZfM_1, (LONGINT)Zki1_16(Z137), 1L);
ZfM_24((ZDz6VQCC_4)ZfM_1, ',');
ZibDRNS_1((ZDz6VQCC_4)ZfM_1);
Z137 = Zki1_12(Z137);
}
}

void Zki1_20
 ARGS ((void))
{
ZarQdhNDD_3((ADDRESS *)&Z148, &Z149, (LONGINT)sizeof (Z143));
ZarQdhNDD_3((ADDRESS *)&Z150, &Z151, (LONGINT)sizeof (Y1_137));
}

void Zki1_5
 ARGS ((void))
{
Z149 = ZdaDwjxF_12 + 1;
ZarQdhNDD_0((ADDRESS *)&Z148, &Z149, (LONGINT)sizeof (Z143));
Zki1_3 = 0;
Z151 = Z136;
ZarQdhNDD_0((ADDRESS *)&Z150, &Z151, (LONGINT)sizeof (Y1_137));
Zki1_4 = 0;
}

void BEGIN_Nfa ARGS ((void))
{
  static BOOLEAN has_been_called = FALSE;
  if (has_been_called) return;
  has_been_called = TRUE;
BEGIN_ScanTabs ();
BEGIN_Classes ();
BEGIN_DynArray ();
BEGIN_IO ();
BEGIN_Layout ();
BEGIN_ScanTabs ();
BEGIN_GenTabs ();
BEGIN_UniCode ();
BEGIN_Classes ();

}
