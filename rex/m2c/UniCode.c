#include "SYSTEM_.h"

#ifndef DEFINITION_IO
#include "IO.h"
#endif

#ifndef DEFINITION_Layout
#include "Layout.h"
#endif

#ifndef DEFINITION_UniCode
#include "UniCode.h"
#endif



void ZrxAagD3_4
# ifdef HAVE_ARGS
(ZfM_3 Z122, ZrxAagD3_3 Z123)
# else
(Z122, Z123)
ZfM_3 Z122;
ZrxAagD3_3 Z123;
# endif
{
if (Z123 > ORD(MAX_CHAR)) {
ZfM_29(Z122, (STRING)"\\u", 2L);
ZfM_28(Z122, Z123, 4L, 16L);
} else {
ZibDRNS_0(Z122, CHR(Z123));
}
}

void BEGIN_UniCode ARGS ((void))
{
  static BOOLEAN has_been_called = FALSE;
  if (has_been_called) return;
  has_been_called = TRUE;
BEGIN_IO ();
BEGIN_IO ();
BEGIN_Layout ();

}
