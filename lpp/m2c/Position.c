#include "SYSTEM_.h"

#ifndef DEFINITION_IO
#include "IO.h"
#endif

#ifndef DEFINITION_Idents
#include "Idents.h"
#endif

#ifndef DEFINITION_Position
#include "Position.h"
#endif

ZmtLFGGBG_0 ZmtLFGGBG_1;


INTEGER ZmtLFGGBG_2
# ifdef HAVE_ARGS
(ZmtLFGGBG_0 Z125, ZmtLFGGBG_0 Z126)
# else
(Z125, Z126)
ZmtLFGGBG_0 Z125, Z126;
# endif
{
{
register ZmtLFGGBG_0 *W_1 = &Z125;

if (W_1->Y0 < Z126.Y0) {
return -1;
}
if (W_1->Y0 > Z126.Y0) {
return 1;
}
if (W_1->Y1 < Z126.Y1) {
return -1;
}
if (W_1->Y1 > Z126.Y1) {
return 1;
}
if (W_1->Y2 < Z126.Y2) {
return -1;
}
if (W_1->Y2 > Z126.Y2) {
return 1;
}
return 0;
}
}

void ZmtLFGGBG_3
# ifdef HAVE_ARGS
(ZfM_3 Z132, ZmtLFGGBG_0 Z114)
# else
(Z132, Z114)
ZfM_3 Z132;
ZmtLFGGBG_0 Z114;
# endif
{
{
register ZmtLFGGBG_0 *W_2 = &Z114;

if (W_2->Y0 != Zfb3DLQ_1) {
ZfM_24(Z132, '"');
Zfb3DLQ_7(Z132, W_2->Y0);
ZfM_24(Z132, '"');
ZfM_24(Z132, ':');
}
ZfM_25(Z132, (LONGINT)W_2->Y1, 4L);
ZfM_24(Z132, ',');
ZfM_25(Z132, (LONGINT)W_2->Y2, 3L);
}
}

void BEGIN_Position ARGS ((void))
{
  static BOOLEAN has_been_called = FALSE;
  if (has_been_called) return;
  has_been_called = TRUE;
BEGIN_IO ();
BEGIN_Idents ();
BEGIN_IO ();
BEGIN_Idents ();

ZmtLFGGBG_1.Y0 = Zfb3DLQ_1;
ZmtLFGGBG_1.Y1 = 0;
ZmtLFGGBG_1.Y2 = 0;
}
