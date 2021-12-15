#include "SYSTEM_.h"

#ifndef DEFINITION_IO
#include "IO.h"
#endif

#ifndef DEFINITION_rMemory
#include "rMemory.h"
#endif

#ifndef DEFINITION_Strings
#include "Strings.h"
#endif

#ifndef DEFINITION_Listing
#include "Listing.h"
#endif

ZfM_3 ZijFQGAF_1;
ZfM_3 ZijFQGAF_2;
ZijFQGAF_0 ZijFQGAF_3;

#define Z128	'^'
#define Z129	'@'
typedef struct S_1 *Z130;
typedef struct S_1 {
SHORTCARD Y0, Y1, C_0_line, Y3, Y4;
ADDRESS Y5;
Z130 Y6;
} Z131;
static Z130 Z138, Z139, Z140, Z141;
static SHORTCARD Z142;

void ZijFQGAF_4
# ifdef HAVE_ARGS
(CARDINAL Z144, CARDINAL Z145, CARDINAL Z146, CARDINAL Z147, CARDINAL Z148, ADDRESS Z149)
# else
(Z144, Z145, Z146, Z147, Z148, Z149)
CARDINAL Z144, Z145, Z146, Z147, Z148;
ADDRESS Z149;
# endif
{
Z130 Z150;

Z150 = (Z130)ZDtgCFKU_1((LONGINT)sizeof (Z131));
if (Z146 == 0) {
Z146 = MAX_SHORTCARD;
}
{
register Z131 *W_1 = Z150;

W_1->Y0 = Z144;
W_1->Y1 = Z145;
W_1->C_0_line = Z146;
W_1->Y3 = Z147;
W_1->Y4 = Z148;
W_1->Y5 = Z149;
}
if (Z138 == NIL) {
Z138 = Z150;
Z141 = Z150;
Z139 = Z150;
Z150->Y6 = NIL;
Z140 = Z150;
} else if (Z146 < Z138->C_0_line || Z146 == Z138->C_0_line && Z147 < Z138->Y3) {
Z150->Y6 = Z138;
Z138 = Z150;
Z141 = Z150;
} else {
if (Z146 > Z139->C_0_line || Z146 == Z139->C_0_line && Z147 >= Z139->Y3) {
Z140 = Z139;
Z139 = Z150;
} else if (Z146 > Z140->C_0_line || Z146 == Z140->C_0_line && Z147 >= Z140->Y3) {
} else {
Z140 = Z138;
}
while (Z140->Y6 != NIL && (Z146 > Z140->Y6->C_0_line || Z146 == Z140->Y6->C_0_line && Z147 >= Z140->Y6->Y3)) {
Z140 = Z140->Y6;
}
Z150->Y6 = Z140->Y6;
Z140->Y6 = Z150;
Z140 = Z150;
}
}

BOOLEAN ZijFQGAF_5
 ARGS ((void))
{
Zp1PEAFD_2 Z152;

if (Z138 == NIL) {
if (ZijFQGAF_3 == ZijFQGAF_8) {
while (!ZfM_19(ZijFQGAF_1)) {
Zp1PEAFD_20(ZijFQGAF_1, &Z152);
Zp1PEAFD_22(ZijFQGAF_2, &Z152);
}
ZfM_24(ZijFQGAF_2, Z129);
}
}
return Z138 != NIL;
}

void ZijFQGAF_6
# ifdef HAVE_ARGS
(CARDINAL *Z144, CARDINAL *Z145, CARDINAL *Z146, CARDINAL *Z147, CARDINAL *Z148, ADDRESS *Z149)
# else
(Z144, Z145, Z146, Z147, Z148, Z149)
CARDINAL *Z144, *Z145, *Z146, *Z147, *Z148;
ADDRESS *Z149;
# endif
{
Z130 Z157;
SHORTCARD Z158;
Zp1PEAFD_2 Z152;

{
register Z131 *W_2 = Z138;

*Z144 = W_2->Y0;
*Z145 = W_2->Y1;
*Z146 = W_2->C_0_line;
*Z147 = W_2->Y3;
*Z148 = W_2->Y4;
*Z149 = W_2->Y5;
Z157 = W_2->Y6;
}
ZDtgCFKU_2((LONGINT)sizeof (Z131), (ADDRESS)Z138);
if (ZijFQGAF_3 == ZijFQGAF_8) {
if (Z141 == Z138) {
for (;;) {
if (ZfM_19(ZijFQGAF_1)) {
goto EXIT_1;
}
if (Z142 >= *Z146) {
goto EXIT_1;
}
Zp1PEAFD_20(ZijFQGAF_1, &Z152);
Zp1PEAFD_22(ZijFQGAF_2, &Z152);
INC(Z142);
} EXIT_1:;
ZfM_24(ZijFQGAF_2, Z129);
Z158 = 2;
while (Z141 != NIL && Z141->C_0_line == *Z146) {
while (Z158 < Z141->Y3) {
ZfM_24(ZijFQGAF_2, ' ');
INC(Z158);
}
if (Z158 == Z141->Y3) {
ZfM_24(ZijFQGAF_2, Z128);
INC(Z158);
}
Z141 = Z141->Y6;
}
ZfM_33(ZijFQGAF_2);
}
ZfM_24(ZijFQGAF_2, Z129);
}
if (Z140 == Z138) {
Z140 = Z157;
}
if (Z139 == Z138) {
Z139 = Z157;
}
Z138 = Z157;
if (*Z146 == MAX_SHORTCARD) {
*Z146 = 0;
}
}

void BEGIN_Listing ARGS ((void))
{
  static BOOLEAN has_been_called = FALSE;
  if (has_been_called) return;
  has_been_called = TRUE;
BEGIN_IO ();
BEGIN_IO ();
BEGIN_rMemory ();
BEGIN_Strings ();

Z138 = NIL;
Z141 = NIL;
Z139 = NIL;
Z140 = NIL;
ZijFQGAF_1 = ZfM_0;
ZijFQGAF_2 = ZfM_2;
ZijFQGAF_3 = ZijFQGAF_7;
Z142 = 0;
}
