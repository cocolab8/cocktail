#include "SYSTEM_.h"

#ifndef DEFINITION_General
#include "General.h"
#endif

#ifndef DEFINITION_rMemory
#include "rMemory.h"
#endif

#ifndef DEFINITION_IO
#include "IO.h"
#endif

#ifndef DEFINITION_DynArray
#include "DynArray.h"
#endif


static LONGINT Z129;
static LONGINT Z134 ARGS ((LONGINT Z133));

void ZarQdhNDD_0
# ifdef HAVE_ARGS
(ADDRESS *Z131, LONGINT *Z132, LONGINT Z133)
# else
(Z131, Z132, Z133)
ADDRESS *Z131;
LONGINT *Z132;
LONGINT Z133;
# endif
{
Z133 = Z134(Z133);
while (*Z132 * Z133 % sizeof (LONGINT) != 0) {
INC(*Z132);
}
*Z131 = ZDtgCFKU_1(*Z132 * Z133);
if (*Z131 == NIL) {
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)"MakeArray: out of memory", 24L);
ZfM_33((ZDz6VQCC_4)ZfM_2);
}
}

void ZarQdhNDD_1
# ifdef HAVE_ARGS
(ADDRESS *Z131, LONGINT *Z136, LONGINT Z137, LONGINT Z133)
# else
(Z131, Z136, Z137, Z133)
ADDRESS *Z131;
LONGINT *Z136;
LONGINT Z137;
LONGINT Z133;
# endif
{
ADDRESS Z138;
LONGINT *Z139, *Z140;
LONGINT Z141, Z142;

Z133 = Z134(Z133);
while (Z137 * Z133 % sizeof (LONGINT) != 0) {
INC(Z137);
}
if (Z137 < *Z136) {
Z142 = (LONGINT)((BITSET)(Z137 * Z133 + ZdaDDAD7_1 - 1) & ZdaDDAD7_2);
if (*Z136 * Z133 - Z142 >= Z129) {
ZDtgCFKU_2(*Z136 * Z133 - Z142, *Z131 + (CARDINAL)Z142);
*Z136 = Z137;
}
} else if (Z137 > *Z136) {
Z138 = ZDtgCFKU_1(Z137 * Z133);
if (Z138 == NIL) {
ZfM_29((ZDz6VQCC_4)ZfM_2, (STRING)"ResizeArray: out of memory", 26L);
ZfM_33((ZDz6VQCC_4)ZfM_2);
} else {
Z139 = (LONGINT *)(*Z131);
Z140 = (LONGINT *)Z138;
{
LONGINT B_1 = 1, B_2 = *Z136 * Z133 / sizeof (LONGINT);

if (B_1 <= B_2)
for (Z141 = B_1;; Z141 += 1) {
*Z140 = *Z139;
Z139 = (LONGINT *)(ADDRESS)((ADDRESS)Z139 + sizeof (LONGINT));
Z140 = (LONGINT *)(ADDRESS)((ADDRESS)Z140 + sizeof (LONGINT));
if (Z141 >= B_2) break;
}
}
ZDtgCFKU_2(*Z136 * Z133, *Z131);
}
*Z131 = Z138;
*Z136 = Z137;
}
}

void ZarQdhNDD_2
# ifdef HAVE_ARGS
(ADDRESS *Z131, LONGINT *Z132, LONGINT Z133)
# else
(Z131, Z132, Z133)
ADDRESS *Z131;
LONGINT *Z132;
LONGINT Z133;
# endif
{
ZarQdhNDD_1(Z131, Z132, *Z132 * 2, Z133);
}

void ZarQdhNDD_3
# ifdef HAVE_ARGS
(ADDRESS *Z131, LONGINT *Z132, LONGINT Z133)
# else
(Z131, Z132, Z133)
ADDRESS *Z131;
LONGINT *Z132;
LONGINT Z133;
# endif
{
Z133 = Z134(Z133);
ZDtgCFKU_2(*Z132 * Z133, *Z131);
}

static LONGINT Z134
# ifdef HAVE_ARGS
(LONGINT Z133)
# else
(Z133)
LONGINT Z133;
# endif
{
LONGINT Z145;

if (Z133 >= ZdaDDAD7_1) {
Z145 = ZdaDDAD7_1;
} else {
Z145 = ZdaDDAD7_8(ZdaDDAD7_7((LONGCARD)(Z133 + Z133 - 2)));
}
return Z133 + Z145 - 1 - (Z133 - 1) % Z145;
}

void BEGIN_DynArray ARGS ((void))
{
  static BOOLEAN has_been_called = FALSE;
  if (has_been_called) return;
  has_been_called = TRUE;
BEGIN_General ();
BEGIN_rMemory ();
BEGIN_IO ();

Z129 = ZdaDDAD7_4((LONGINT)sizeof (ADDRESS), (LONGINT)ZdaDDAD7_1);
}
