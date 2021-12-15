#include "SYSTEM_.h"

#ifndef DEFINITION_Errors
#include "Errors.h"
#endif

#ifndef DEFINITION_rSystem
#include "rSystem.h"
#endif

#ifndef DEFINITION_Position
#include "Position.h"
#endif

#ifndef DEFINITION_SysError
#include "SysError.h"
#endif



BOOLEAN Zp6VmlNKK_0
# ifdef HAVE_ARGS
(INTEGER Z124)
# else
(Z124)
INTEGER Z124;
# endif
{
return Z124 < 0;
}

void Zp6VmlNKK_1
# ifdef HAVE_ARGS
(INTEGER Z124, CARDINAL Z126, CARDINAL Z127, ADDRESS Z128)
# else
(Z124, Z126, Z127, Z128)
INTEGER Z124;
CARDINAL Z126, Z127;
ADDRESS Z128;
# endif
{
if (Zp6VmlNKK_0(Z124)) {
ZblNKKO_53((LONGCARD)(rErrNo() + ZblNKKO_47), Z126, ZmtLFGGBG_1, Z127, Z128);
}
}

void Zp6VmlNKK_2
# ifdef HAVE_ARGS
(INTEGER Z124, CARDINAL Z126)
# else
(Z124, Z126)
INTEGER Z124;
CARDINAL Z126;
# endif
{
if (Zp6VmlNKK_0(Z124)) {
ZblNKKO_52((LONGCARD)(rErrNo() + ZblNKKO_47), Z126, ZmtLFGGBG_1);
}
}

void BEGIN_SysError ARGS ((void))
{
  static BOOLEAN has_been_called = FALSE;
  if (has_been_called) return;
  has_been_called = TRUE;
BEGIN_Errors ();
BEGIN_rSystem ();
BEGIN_Position ();

}
