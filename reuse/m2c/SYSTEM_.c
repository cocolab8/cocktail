/* $Id: SYSTEM_.c,v 1.1 2009/10/14 10:28:53 grosch Exp $ */

#include <stdio.h>

#include "SYSTEM_.h"

/*
 *	Implementation of standard functions
 */

LONGINT ABSLI
# ifdef HAVE_ARGS
   (register LONGINT x)
# else
   (x) register LONGINT x;
# endif
{
   return x < 0 ? -x : x;
}

LONGREAL ABSLR
# ifdef HAVE_ARGS
   (register LONGREAL x)
# else
   (x) register LONGREAL x;
# endif
{
   return x < 0 ? -x : x;
}

CHAR CAP
# ifdef HAVE_ARGS
   (register CHAR ch)
# else
   (ch) register CHAR ch;
# endif
{
   return ch >= 'a' && ch <= 'z' ? ch - 'a' + 'A' : ch;
}

/*
 *	Implementation of set operators
 */

BITSET SET_RANGE1
# ifdef HAVE_ARGS
   (register CARDINAL lo, register CARDINAL hi)
# else
   (lo, hi) register CARDINAL lo, hi;
# endif
{
   return lo <= hi ? ~0L >> lo << lo + SYSTEM_MaxSet - hi >> SYSTEM_MaxSet - hi : 0L;
}

/*
 *	Implementation of compiler functions
 */

void CaseError
# ifdef HAVE_ARGS
   (char file [], int line)
# else
   (file, line) char file []; int line;
# endif
{
   (void) fprintf (stderr, "\"%s\", line %1d: case expression out of range\n", file, line);
   exit (1);
}

void ReturnError
# ifdef HAVE_ARGS
   (char file [], int line)
# else
   (file, line) char file []; int line;
# endif
{
   (void) fprintf (stderr, "\"%s\", line %1d: missing return from function\n", file, line);
   exit (1);
}

/*
 *	Main program
 */

extern void BEGIN_MODULE ARGS ((void));

int    SYSTEM_argc;
char **SYSTEM_argv;
char **SYSTEM_envp;

int main
# ifdef HAVE_ARGS
   (int argc, char *argv [], char *envp [])
# else
   (argc, argv, envp) int argc; char *argv [], *envp [];
# endif
{
  SYSTEM_argc = argc;
  SYSTEM_argv = argv;
  SYSTEM_envp = envp;

  BEGIN_MODULE ();

  return 0;
}
