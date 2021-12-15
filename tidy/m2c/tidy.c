#include "SYSTEM_.h"

#ifndef DEFINITION_Reader
#include "Reader.h"
#endif

#ifndef DEFINITION_Writer
#include "Writer.h"
#endif

#ifndef DEFINITION_IO
#include "IO.h"
#endif

#ifndef DEFINITION_rSystem
#include "rSystem.h"
#endif

#ifndef DEFINITION_Position
#include "Position.h"
#endif

#ifndef DEFINITION_Strings
#include "Strings.h"
#endif

#ifndef DEFINITION_Idents
#include "Idents.h"
#endif

#ifndef DEFINITION_IO
#include "IO.h"
#endif

static INTEGER Z129;
static struct S_1 {
CHAR A[255 + 1];
} Z130;
static Zp1PEAFD_2 Z131;


void BEGIN_MODULE ARGS ((void))
{
BEGIN_Reader ();
BEGIN_Writer ();
BEGIN_IO ();
BEGIN_rSystem ();
BEGIN_Position ();
BEGIN_Strings ();
BEGIN_Idents ();
BEGIN_IO ();

GetArgument(1L, Z130.A, 256L);
Zp1PEAFD_13(Z130.A, 256L, &Z131);
Zol0z3A_6.Y0 = ZmtLFGGBG_1;
Zol0z3A_6.Y0.Y2 = Zfb3DLQ_2(&Z131);
Zol0z3A_9(Z130.A, 256L);
Zol0z3A_8();
do {
Z129 = Zol0z3A_10();
} while (!(Z129 == Zol0z3A_3));
Zol0z3A_15();
Zt3EGCA_4.Y0 = ZmtLFGGBG_1;
Zt3EGCA_4.Y0.Y2 = Zfb3DLQ_2(&Z131);
Zt3EGCA_7(Z130.A, 256L);
Zt3EGCA_6();
do {
Z129 = Zt3EGCA_8();
} while (!(Z129 == Zt3EGCA_1));
Zt3EGCA_13();
ZfM_34();
rExit(0L);
}
