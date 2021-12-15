# include "rIntType.h"

unsigned int PTRDIFF (char * p, char * q)
{
  return (unsigned int) (p - q);
}

char * PTRINC (char * p, unsigned int i)
{
  return p + i;
}

unsigned int PTRINT (char * p)
{
  return (unsigned int) (uintptr_t) p;
}

char * INTPTR (unsigned int i)
{
  return (char *) (uintptr_t) i;
}

void BEGIN_Pointers (void) {}
