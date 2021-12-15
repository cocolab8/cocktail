#include "SYSTEM_.h"

#ifndef DEFINITION_Idents
#include "Idents.h"
#endif

#ifndef DEFINITION_Sets
#include "Sets.h"
#endif

#ifndef DEFINITION_Table
#include "Table.h"
#endif

#ifndef DEFINITION_Types
#include "Types.h"
#endif

#ifndef DEFINITION_Reachabl
#include "Reachabl.h"
#endif


static ZpmCQ_4 Z132;

void Zol0y53x8_0
# ifdef HAVE_ARGS
(Zfb3DLQ_0 Z134)
# else
(Z134)
Zfb3DLQ_0 Z134;
# endif
{
ZpmCQ_4 Z135, Z136;

ZpmCQ_5(&Z132, (LONGCARD)Zqjx8B_0);
ZpmCQ_5(&Z135, (LONGCARD)Zqjx8B_0);
ZpmCQ_5(&Z136, (LONGCARD)Zqjx8B_0);
ZpmCQ_13(&Z135, (LONGCARD)Z134);
do {
Z134 = ZpmCQ_20(&Z135);
ZpmCQ_13(&Z132, (LONGCARD)Z134);
if (Zq7SFB_5(Z134)) {
Zqjx8B_5(Z134, &Z136);
ZpmCQ_9(&Z136, Z132);
ZpmCQ_8(&Z135, Z136);
}
} while (!ZpmCQ_26(Z135));
ZpmCQ_7(&Z135);
ZpmCQ_7(&Z136);
}

BOOLEAN Zol0y53x8_1
# ifdef HAVE_ARGS
(Zfb3DLQ_0 Z138)
# else
(Z138)
Zfb3DLQ_0 Z138;
# endif
{
return ZpmCQ_25((LONGCARD)Z138, &Z132);
}

void BEGIN_Reachabl ARGS ((void))
{
  static BOOLEAN has_been_called = FALSE;
  if (has_been_called) return;
  has_been_called = TRUE;
BEGIN_Idents ();
BEGIN_Idents ();
BEGIN_Sets ();
BEGIN_Table ();
BEGIN_Types ();

}
