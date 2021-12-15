#include "SYSTEM_.h"

#ifndef DEFINITION_IO
#include "IO.h"
#endif

#ifndef DEFINITION_Layout
#include "Layout.h"
#endif



void ZibDRNS_0
# ifdef HAVE_ARGS
(ZfM_3 Z123, CHAR Z124)
# else
(Z123, Z124)
ZfM_3 Z123;
CHAR Z124;
# endif
{
if ('!' <= Z124 && Z124 <= '~') {
ZfM_24(Z123, '\'');
ZfM_24(Z123, Z124);
ZfM_24(Z123, '\'');
} else if (Z124 == '\0') {
ZfM_29(Z123, (STRING)"eps", 3L);
} else {
ZfM_25(Z123, (LONGINT)ORD(Z124), 2L);
ZfM_24(Z123, 'C');
}
}

void ZibDRNS_1
# ifdef HAVE_ARGS
(ZfM_3 Z123)
# else
(Z123)
ZfM_3 Z123;
# endif
{
ZfM_24(Z123, ' ');
}

void ZibDRNS_2
# ifdef HAVE_ARGS
(ZfM_3 Z123, INTEGER Z127)
# else
(Z123, Z127)
ZfM_3 Z123;
INTEGER Z127;
# endif
{
INTEGER Z128;

{
LONGINT B_1 = 1, B_2 = Z127;

if (B_1 <= B_2)
for (Z128 = B_1;; Z128 += 1) {
ZfM_24(Z123, ' ');
if (Z128 >= B_2) break;
}
}
}

void ZibDRNS_3
# ifdef HAVE_ARGS
(ZfM_3 Z123)
# else
(Z123)
ZfM_3 Z123;
# endif
{
CHAR Z124;

Z124 = ZfM_7(Z123);
}

void ZibDRNS_4
# ifdef HAVE_ARGS
(ZfM_3 Z123, INTEGER Z127)
# else
(Z123, Z127)
ZfM_3 Z123;
INTEGER Z127;
# endif
{
INTEGER Z128;
CHAR Z124;

{
LONGINT B_3 = 1, B_4 = Z127;

if (B_3 <= B_4)
for (Z128 = B_3;; Z128 += 1) {
Z124 = ZfM_7(Z123);
if (Z128 >= B_4) break;
}
}
}

void ZibDRNS_5
# ifdef HAVE_ARGS
(ZfM_3 Z123)
# else
(Z123)
ZfM_3 Z123;
# endif
{
do {
} while (!(ZfM_7(Z123) != ' '));
ZfM_17(Z123);
}

void BEGIN_Layout ARGS ((void))
{
  static BOOLEAN has_been_called = FALSE;
  if (has_been_called) return;
  has_been_called = TRUE;
BEGIN_IO ();
BEGIN_IO ();

}
