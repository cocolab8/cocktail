#include "SYSTEM_.h"

#ifndef DEFINITION_rSystem
#include "rSystem.h"
#endif

#ifndef DEFINITION_Checks
#include "Checks.h"
#endif

static struct S_1 {
CHAR A[1023 + 1];
} Z124;
static ZDz6VQCC_4 Z125;
static INTEGER Z126;


void BEGIN_MODULE ARGS ((void))
{
BEGIN_rSystem ();
BEGIN_Checks ();

Z125 = OpenInput((STRING)"Makefile", 8L);
Zgg728H_0((STRING)"OpenInput", 9L, Z125);
Z126 = rRead(Z125, ADR (Z124), 1024L);
Zgg728H_0((STRING)"rRead", 5L, Z126);
rClose(Z125);
Z125 = OpenOutput((STRING)"t", 1L);
Zgg728H_0((STRING)"OpenOutput", 10L, Z125);
Z126 = rWrite(Z125, ADR (Z124), 1024L);
Zgg728H_0((STRING)"rWrite", 6L, Z126);
rClose(Z125);
}
