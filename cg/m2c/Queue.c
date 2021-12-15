#include "SYSTEM_.h"

#ifndef DEFINITION_DynArray
#include "DynArray.h"
#endif

#ifndef DEFINITION_Sets
#include "Sets.h"
#endif

#ifndef DEFINITION_Sets
#include "Sets.h"
#endif

#ifndef DEFINITION_Queue
#include "Queue.h"
#endif


static LONGINT Z124;
static struct S_1 {
SHORTCARD A[10000 + 1];
} *Z125;
static SHORTCARD Z126, Z127, Z128, Z129;
static ZpmCQ_4 Z130;

void Zn0DDD_0
# ifdef HAVE_ARGS
(SHORTCARD Z132)
# else
(Z132)
SHORTCARD Z132;
# endif
{
Z124 = Z132;
ZarQdhNDD_0((ADDRESS *)&Z125, &Z124, (LONGINT)sizeof (SHORTCARD));
Z126 = Z132;
Z127 = 0;
Z128 = 0;
Z129 = 0;
ZpmCQ_5(&Z130, (LONGCARD)Z126);
}

void Zn0DDD_1
 ARGS ((void))
{
ZarQdhNDD_3((ADDRESS *)&Z125, &Z124, (LONGINT)sizeof (SHORTCARD));
ZpmCQ_7(&Z130);
}

BOOLEAN Zn0DDD_2
 ARGS ((void))
{
return Z127 == 0;
}

void Zn0DDD_3
# ifdef HAVE_ARGS
(SHORTCARD Z136)
# else
(Z136)
SHORTCARD Z136;
# endif
{
if (!ZpmCQ_25((LONGCARD)Z136, &Z130)) {
Z125->A[Z128] = Z136;
Z128 = (Z128 + 1) % Z126;
INC(Z127);
ZpmCQ_13(&Z130, (LONGCARD)Z136);
}
}

SHORTCARD Zn0DDD_4
 ARGS ((void))
{
SHORTCARD Z139;

Z139 = Z125->A[Z129];
Z129 = (Z129 + 1) % Z126;
DEC(Z127);
ZpmCQ_14(&Z130, (LONGCARD)Z139);
return Z139;
}

BOOLEAN Zn0DDD_5
# ifdef HAVE_ARGS
(SHORTCARD Z136)
# else
(Z136)
SHORTCARD Z136;
# endif
{
return ZpmCQ_25((LONGCARD)Z136, &Z130);
}

void BEGIN_Queue ARGS ((void))
{
  static BOOLEAN has_been_called = FALSE;
  if (has_been_called) return;
  has_been_called = TRUE;
BEGIN_DynArray ();
BEGIN_Sets ();
BEGIN_Sets ();

}
