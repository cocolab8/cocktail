#include "SYSTEM_.h"

#ifndef DEFINITION_IO
#include "IO.h"
#endif

static ZfM_3 Z146, Z147;
static INTEGER Z148, Z149;
static CHAR Z150;
static struct S_1 {
CHAR A[200 - 1 + 1];
} Z151;
static REAL Z152;


void BEGIN_MODULE ARGS ((void))
{
BEGIN_IO ();

Z146 = ZfM_4((STRING)"Makefile", 8L);
Z147 = ZfM_20((STRING)"t", 1L);
for (Z148 = 1; Z148 <= 200; Z148 += 1) {
Z150 = ZfM_7(Z146);
ZfM_24((ZDz6VQCC_4)ZfM_1, Z150);
ZfM_24(Z147, Z150);
}
while (!ZfM_19(Z146)) {
Z148 = ZfM_6(Z146, ADR (Z151), 200L);
Z149 = ZfM_23((ZDz6VQCC_4)ZfM_1, ADR (Z151), Z148);
Z149 = ZfM_23(Z147, ADR (Z151), Z148);
}
ZfM_5(Z146);
ZfM_21(Z147);
ZfM_33((ZDz6VQCC_4)ZfM_1);
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)"enter integers, 99 will stop", 28L);
ZfM_33((ZDz6VQCC_4)ZfM_1);
do {
ZfM_22((ZDz6VQCC_4)ZfM_1);
Z148 = ZfM_8((ZDz6VQCC_4)ZfM_0);
ZfM_25((ZDz6VQCC_4)ZfM_1, Z148, 10L);
ZfM_30((ZDz6VQCC_4)ZfM_1, (SHORTINT)Z148, 10L);
ZfM_31((ZDz6VQCC_4)ZfM_1, Z148, 10L);
if (Z148 >= 0) {
ZfM_32((ZDz6VQCC_4)ZfM_1, (LONGCARD)Z148, 10L);
} else {
ZfM_32((ZDz6VQCC_4)ZfM_1, (LONGCARD)(-Z148), 10L);
}
Z150 = ZfM_7((ZDz6VQCC_4)ZfM_0);
ZfM_24((ZDz6VQCC_4)ZfM_1, ' ');
ZfM_24((ZDz6VQCC_4)ZfM_1, Z150);
ZfM_33((ZDz6VQCC_4)ZfM_1);
} while (!(Z148 == 99));
ZfM_29((ZDz6VQCC_4)ZfM_1, (STRING)"enter reals, 99 will stop", 25L);
ZfM_33((ZDz6VQCC_4)ZfM_1);
do {
ZfM_22((ZDz6VQCC_4)ZfM_1);
Z152 = ZfM_9((ZDz6VQCC_4)ZfM_0);
ZfM_26((ZDz6VQCC_4)ZfM_1, Z152, 2L, 12L, 3L);
ZfM_24((ZDz6VQCC_4)ZfM_1, ',');
ZfM_26((ZDz6VQCC_4)ZfM_1, Z152, 2L, 3L, 2L);
ZfM_24((ZDz6VQCC_4)ZfM_1, ',');
ZfM_26((ZDz6VQCC_4)ZfM_1, Z152, 4L, 3L, 1L);
ZfM_24((ZDz6VQCC_4)ZfM_1, ',');
ZfM_26((ZDz6VQCC_4)ZfM_1, Z152, 8L, 3L, 0L);
ZfM_24((ZDz6VQCC_4)ZfM_1, ',');
ZfM_26((ZDz6VQCC_4)ZfM_1, Z152, 8L, 1L, 0L);
ZfM_24((ZDz6VQCC_4)ZfM_1, ',');
ZfM_26((ZDz6VQCC_4)ZfM_1, Z152, 8L, 0L, 0L);
ZfM_24((ZDz6VQCC_4)ZfM_1, ',');
ZfM_33((ZDz6VQCC_4)ZfM_1);
} while (!(98.9 <= Z152 && Z152 <= 99.1));
ZfM_21((ZDz6VQCC_4)ZfM_1);
}
