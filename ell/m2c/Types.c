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


static ZpmCQ_4 Z125, Z126, Z127;

void Zq7SFB_0
 ARGS ((void))
{
ZpmCQ_5(&Z125, (LONGCARD)Zqjx8B_0);
ZpmCQ_5(&Z126, (LONGCARD)Zqjx8B_0);
ZpmCQ_5(&Z127, (LONGCARD)Zqjx8B_0);
}

void Zq7SFB_1
# ifdef HAVE_ARGS
(Zfb3DLQ_0 Z130)
# else
(Z130)
Zfb3DLQ_0 Z130;
# endif
{
ZpmCQ_13(&Z125, (LONGCARD)Z130);
ZpmCQ_13(&Z126, (LONGCARD)Z130);
}

void Zq7SFB_2
# ifdef HAVE_ARGS
(Zfb3DLQ_0 Z130)
# else
(Z130)
Zfb3DLQ_0 Z130;
# endif
{
ZpmCQ_13(&Z125, (LONGCARD)Z130);
ZpmCQ_13(&Z127, (LONGCARD)Z130);
}

BOOLEAN Zq7SFB_3
# ifdef HAVE_ARGS
(Zfb3DLQ_0 Z130)
# else
(Z130)
Zfb3DLQ_0 Z130;
# endif
{
return ZpmCQ_25((LONGCARD)Z130, &Z125);
}

BOOLEAN Zq7SFB_4
# ifdef HAVE_ARGS
(Zfb3DLQ_0 Z130)
# else
(Z130)
Zfb3DLQ_0 Z130;
# endif
{
return ZpmCQ_25((LONGCARD)Z130, &Z126);
}

BOOLEAN Zq7SFB_5
# ifdef HAVE_ARGS
(Zfb3DLQ_0 Z130)
# else
(Z130)
Zfb3DLQ_0 Z130;
# endif
{
return ZpmCQ_25((LONGCARD)Z130, &Z127);
}

void Zq7SFB_6
# ifdef HAVE_ARGS
(ZpmCQ_4 *Z136)
# else
(Z136)
ZpmCQ_4 *Z136;
# endif
{
ZpmCQ_30(Z136, Z126);
}

void Zq7SFB_7
# ifdef HAVE_ARGS
(ZpmCQ_4 *Z136)
# else
(Z136)
ZpmCQ_4 *Z136;
# endif
{
ZpmCQ_30(Z136, Z127);
}

void BEGIN_Types ARGS ((void))
{
  static BOOLEAN has_been_called = FALSE;
  if (has_been_called) return;
  has_been_called = TRUE;
BEGIN_Idents ();
BEGIN_Sets ();
BEGIN_Idents ();
BEGIN_Sets ();
BEGIN_Table ();

}
