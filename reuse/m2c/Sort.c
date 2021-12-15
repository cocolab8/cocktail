#include "SYSTEM_.h"

#ifndef DEFINITION_Sort
#include "Sort.h"
#endif


struct S_1_Sort;
static void Z121 ARGS ((struct S_1_Sort *link, INTEGER Z115, INTEGER Z116));
struct S_1_Sort {
ZpwKP_0 *Z117;
ZpwKP_1 *Z119;
};

static void Z121
# ifdef HAVE_ARGS
(struct S_1_Sort *link, INTEGER Z115, INTEGER Z116)
# else
(link, Z115, Z116)
struct S_1_Sort *link;
INTEGER Z115, Z116;
# endif
{
INTEGER Z122, Z123;

for (;;) {
if (Z115 >= Z116) {
return;
}
Z122 = Z115 + 1;
Z123 = Z116;
do {
while (Z122 < Z116 && (**link->Z117)(Z122, Z115)) {
INC(Z122);
}
while (Z115 < Z123 && (**link->Z117)(Z115, Z123)) {
DEC(Z123);
}
if (Z122 < Z123) {
(**link->Z119)(Z122, Z123);
}
} while (!(Z122 >= Z123));
(**link->Z119)(Z115, Z123);
Z121(link, Z115, Z123 - 1);
Z115 = Z123 + 1;
} EXIT_1:;
}

void ZpwKP_2
# ifdef HAVE_ARGS
(INTEGER Z115, INTEGER Z116, ZpwKP_0 Z117, ZpwKP_1 Z119)
# else
(Z115, Z116, Z117, Z119)
INTEGER Z115, Z116;
ZpwKP_0 Z117;
ZpwKP_1 Z119;
# endif
{
struct S_1_Sort frame;
frame.Z117 = &Z117;
frame.Z119 = &Z119;
Z121(&frame, Z115, Z116);
}

void BEGIN_Sort ARGS ((void))
{
  static BOOLEAN has_been_called = FALSE;
  if (has_been_called) return;
  has_been_called = TRUE;

}
