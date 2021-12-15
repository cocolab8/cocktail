#include "SYSTEM_.h"

#ifndef DEFINITION_IO
#include "IO.h"
#endif

#ifndef DEFINITION_Strings
#include "Strings.h"
#endif

#ifndef DEFINITION_Idents
#include "Idents.h"
#endif

#ifndef DEFINITION_TokenTab
#include "TokenTab.h"
#endif

#ifndef DEFINITION_WriteTok
#include "WriteTok.h"
#endif

Zt3EGCnxD_0 Zt3EGCnxD_1;
struct WriteTok_1 Zt3EGCnxD_2;


void Zt3EGCnxD_3
# ifdef HAVE_ARGS
(ZfM_3 Z138)
# else
(Z138)
ZfM_3 Z138;
# endif
{
ZqxDADwjx_11 Z139;
Zfb3DLQ_0 Z140;
Zp1PEAFD_2 Z141;
ZqxDADwjx_13 Z142;
CARDINAL Z143;
CHAR Z144;

{
ZqxDADwjx_11 B_1 = ZqxDADwjx_0, B_2 = ZqxDADwjx_5;

if (B_1 <= B_2)
for (Z139 = B_1;; Z139 += 1) {
if (ZqxDADwjx_19(Z139) == ZqxDADwjx_33) {
Z140 = ZqxDADwjx_21(Z139, &Z142);
Zfb3DLQ_3(Z140, &Z141);
switch (Zt3EGCnxD_1) {
case Zt3EGCnxD_4:;
ZfM_29(Z138, (STRING)"      | ", 8L);
ZfM_25(Z138, (LONGINT)Z139, 0L);
ZfM_29(Z138, (STRING)": Copy (", 8L);
Z144 = Zp1PEAFD_12(&Z141, 1);
if (Z144 == '"' || Z144 == '\'') {
Zfb3DLQ_7(Z138, Z140);
} else {
ZfM_24(Z138, '"');
Zfb3DLQ_7(Z138, Z140);
ZfM_24(Z138, '"');
}
ZfM_29(Z138, (STRING)", Name);", 8L);
ZfM_33(Z138);
break;
case Zt3EGCnxD_5:;
ZfM_29(Z138, (STRING)"\"", 1L);
if (Zp1PEAFD_12(&Z141, 1) == '"' || Zp1PEAFD_12(&Z141, 1) == '\'') {
{
LONGCARD B_3 = 2, B_4 = Zp1PEAFD_7(&Z141) - 1;

if (B_3 <= B_4)
for (Z143 = B_3;; Z143 += 1) {
if (Zp1PEAFD_12(&Z141, (Zp1PEAFD_1)Z143) == '\\' || Zp1PEAFD_12(&Z141, (Zp1PEAFD_1)Z143) == '"') {
ZfM_24(Z138, '\\');
}
ZfM_24(Z138, Zp1PEAFD_12(&Z141, (Zp1PEAFD_1)Z143));
if (Z143 >= B_4) break;
}
}
} else {
{
LONGCARD B_5 = 1, B_6 = Zp1PEAFD_7(&Z141);

if (B_5 <= B_6)
for (Z143 = B_5;; Z143 += 1) {
if (Zp1PEAFD_12(&Z141, (Zp1PEAFD_1)Z143) == '\\' || Zp1PEAFD_12(&Z141, (Zp1PEAFD_1)Z143) == '"') {
ZfM_24(Z138, '\\');
}
ZfM_24(Z138, Zp1PEAFD_12(&Z141, (Zp1PEAFD_1)Z143));
if (Z143 >= B_6) break;
}
}
}
ZfM_29(Z138, (STRING)"\",", 2L);
ZfM_33(Z138);
break;
case Zt3EGCnxD_6:;
ZfM_29(Z138, (STRING)"      when ", 11L);
ZfM_25(Z138, (LONGINT)Z139, 0L);
ZfM_29(Z138, (STRING)" then RESULT.Append (", 21L);
Z144 = Zp1PEAFD_12(&Z141, 1);
if (Z144 == '"' || Z144 == '\'') {
ZfM_24(Z138, '"');
{
LONGCARD B_7 = 2, B_8 = Zp1PEAFD_7(&Z141) - 1;

if (B_7 <= B_8)
for (Z143 = B_7;; Z143 += 1) {
ZfM_24(Z138, Zp1PEAFD_12(&Z141, (Zp1PEAFD_1)Z143));
if (Z143 >= B_8) break;
}
}
ZfM_24(Z138, '"');
} else {
ZfM_24(Z138, '"');
Zfb3DLQ_7(Z138, Z140);
ZfM_24(Z138, '"');
}
ZfM_29(Z138, (STRING)");", 2L);
ZfM_33(Z138);
break;
}
} else if (Zt3EGCnxD_1 == Zt3EGCnxD_5) {
ZfM_29(Z138, (STRING)"0,", 2L);
ZfM_33(Z138);
}
if (Z139 >= B_2) break;
}
}
}

void BEGIN_WriteTok ARGS ((void))
{
  static BOOLEAN has_been_called = FALSE;
  if (has_been_called) return;
  has_been_called = TRUE;
BEGIN_IO ();
BEGIN_IO ();
BEGIN_Strings ();
BEGIN_Idents ();
BEGIN_TokenTab ();

Zt3EGCnxD_1 = Zt3EGCnxD_4;
(void) strncpy ((char *)Zt3EGCnxD_2.A, " ", sizeof (Zt3EGCnxD_2.A));
}
