/* $Id: Argument.c,v 1.1 2009/10/14 10:28:52 grosch Exp $ */

#include "SYSTEM_.h"

#ifndef DEFINITION_Argument
#include "Argument.h"
#endif

void BEGIN_Argument ARGS ((void))
{
}

/*
 *	Implementation of procedures GetArgs and GetEnv
 *	from FOREIGN module Argument
 */

void GetArgs
# ifdef HAVE_ARGS
   (SHORTCARD *argc, Argument_ArgTable *argv)
# else
   (argc, argv) SHORTCARD *argc; Argument_ArgTable *argv;
# endif
{
   *argc = SYSTEM_argc;
   *argv = (Argument_ArgTable) SYSTEM_argv;
}

void GetEnv
# ifdef HAVE_ARGS
   (Argument_ArgTable *env)
# else
   (env) Argument_ArgTable *env;
# endif
{
   *env = (Argument_ArgTable) SYSTEM_envp;
}
