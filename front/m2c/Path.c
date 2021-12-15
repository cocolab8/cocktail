#include "SYSTEM_.h"

#ifndef DEFINITION_Strings
#include "Strings.h"
#endif

#ifndef DEFINITION_rSystem
#include "rSystem.h"
#endif

#ifndef DEFINITION_Path
#include "Path.h"
#endif


struct S_2 {
CHAR A[255 + 1];
};

void ZmfFF_0
# ifdef HAVE_ARGS
(CHAR Z128[], LONGCARD O_1)
# else
(Z128, O_1)
CHAR Z128[];
LONGCARD O_1;
# endif
{
Zp1PEAFD_2 Z129, Z130;
struct S_2 Z131;
Zp1PEAFD_1 Z132;

GetArgument(0L, Z131.A, 256L);
Zp1PEAFD_13(Z131.A, 256L, &Z129);
Z132 = Zp1PEAFD_7(&Z129);
while (Z132 > 0 && Zp1PEAFD_12(&Z129, Z132) != '/' && Zp1PEAFD_12(&Z129, Z132) != '\\') {
DEC(Z132);
}
if (Z132 > 0) {
Zp1PEAFD_11(&Z129, 1, Z132, &Z130);
Zp1PEAFD_13(Z128, O_1, &Z129);
Zp1PEAFD_5(&Z130, &Z129);
Zp1PEAFD_6(&Z130, '\0');
Zp1PEAFD_14(&Z130, Z128, O_1);
}
}

void BEGIN_Path ARGS ((void))
{
  static BOOLEAN has_been_called = FALSE;
  if (has_been_called) return;
  has_been_called = TRUE;
BEGIN_Strings ();
BEGIN_rSystem ();

}
