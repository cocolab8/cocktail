/* Copyright (c) 1999 Dr. Josef Grosch, CoCoLab - Datenverarbeitung

   This file contains proprietary and confidential information and
   remains the property of CoCoLab. Use, disclosure, or reproduction
   is prohibited except as permitted by express written license agreement
   with CoCoLab.

   Phone : +49-7841-669144
   Fax   : +49-7841-669145
   E-mail: grosch@cocolab.de
*/

/* Project:	Cocktail Reuse Library
 * Descr:	Analysing command line options
 * Author:	Dr. Juergen Vollmer <vollmer@cocolab.de>
 *              Andreas Winter <winter@cocolab.de>
 * Id: rGetoptD.c,v 1.20 2007/01/17 14:34:09 vollmer Exp $
 */

# include <stdio.h>
# include <stdlib.h>
# include "rString.h"
# include "rGetopt.h"

static int errors     = 0;
static int not_passed = 0;
void
test_opts (int test_nr,
	   int argc, char *argv[], char *optstring,
	   char *expected_opts[],
	   char *expected_args[],
	   char *first_arg,
	   int   expected_errors)
{
  int option;
  int  i = 0;
  int old_errors = errors;

  printf ("  test %2d ... ", test_nr); fflush (stdout);

  while ((option = rGetopt (argc, argv, optstring)) != EOF) {
    if (option == '?') {
      printf ("\n\t error in option `%c': %s", rOptopt, rOptmsg);
      errors++;
    }
    if (expected_opts[i] == 0) {
      printf ("\n\t unexpected option %c", option);
      errors++;
    }
    if (option != '?' &&
	! (option   == expected_opts[i][0] &&
	   rOptopt2 == expected_opts[i][1])) {
      printf ("\n\t illegal option %c, expected %s",
	      option, expected_opts[i]);
      errors++;
    }
    if (rOptarg == 0 && expected_args[i] != 0) {
      printf ("\n\t option argument expected");
      errors++;
    }
    if (rOptarg != 0 && expected_args[i] == 0) {
      printf ("\n\t option argument unexpected");
      errors++;
    }
    if (rOptarg != 0 && expected_args[i] != 0 &&
	strcmp (rOptarg, expected_args[i]) != 0) {
      printf ("\n\t option arguments differ: `%s', expected `%s'",
	      rOptarg, expected_args[i]);
      errors++;
    }
    i++;
  }

  if (!expected_opts[i] == 0) {
    printf ("\n\t more options expected");
    errors++;
  }

  if (rOptind < argc) {
    if (first_arg == 0 && argv[rOptind] != 0) {
      printf ("\n\t argument expected");
      errors++;
    }
    if (first_arg != 0 && argv[rOptind] == 0) {
      printf ("\n\t argument unexpected");
      errors++;
    }

    if (first_arg != 0 && argv[rOptind] != 0 &&
	strcmp (first_arg, argv[rOptind]) != 0) {
      printf ("\n\t arguments differ: `%s', expected `%s'",
	      first_arg, argv[rOptind]);
      errors++;
    }
  }

  if (old_errors != errors) {
    printf ("\n  ");
  }
  if (old_errors + expected_errors == errors) {
    printf (" passed\n");
  } else {
    not_passed++;
    printf (" not passed!!\n");
  }

  rOptind = 0; /* now the next call to rgetopt starts again with argv[1] */
}

int
main (int Argc, char *Argv[])
{
  typedef char *tCharPtr;
  int expected_errors = 0;
  char optstring [] = "a"   "b:"   "c::"   "d!d"   "e!e:"   "f!f::";

  printf ("selftest of the rGetopt module (short options) (argc=%d, argv[0]=%s)\n",
	  Argc, Argv[0]);

  /* no option, no arg */
  {
    int   argc   = 1;
    char *argv[] = {
      "rGetoptD",
      NULL
    };
    char *expected_opts[] = {
      NULL
    };
    char *expected_args[] = {
      NULL
    };
    test_opts (1, argc, argv, optstring, expected_opts, expected_args,
	       NULL, 0);
  }

  /* no option, one arg */
  {
    int   argc   = 2;
    char *argv[] = {
      "rGetoptD",
      "foobar",
      NULL
    };
    char *expected_opts[] = {
      NULL
    };
    char *expected_args[] = {
      NULL
    };
    test_opts (2, argc, argv, optstring, expected_opts, expected_args,
	       "foobar", 0);
  }

  /* option, no arg */
  {
    int   argc   = 2;
    char *argv[] = {
      "rGetoptD",
      "-a",
      NULL
    };
    char *expected_opts[] = {
      "a",
      NULL
    };
    char *expected_args[] = {
      NULL,
      NULL
    };
    test_opts (3, argc, argv, optstring, expected_opts, expected_args,
	       NULL, 0);
  }

  /* option, one arg */
  {
    int   argc   = 3;
    char *argv[] = {
      "rGetoptD",
      "-a",
      "foobar",
      NULL
    };
    char *expected_opts[] = {
      "a",
      NULL
    };
    char *expected_args[] = {
      NULL,
      NULL
    };
    test_opts (4, argc, argv, optstring, expected_opts, expected_args,
	       "foobar", 0);
  }

  /* may option with no arg, no arg */
  {
    int   argc   = 2;
    char *argv[] = {
      "rGetoptD",
      "-c",
      NULL
    };
    char *expected_opts[] = {
      "c",
      NULL
    };
    char *expected_args[] = {
      NULL,
      NULL
    };
    test_opts (5, argc, argv, optstring, expected_opts, expected_args,
	       NULL, 0);
  }

  /* may option with no arg, one arg */
  {
    int   argc   = 3;
    char *argv[] = {
      "rGetoptD",
      "-c",
      "foobar",
      NULL
    };
    char *expected_opts[] = {
      "c",
      NULL
    };
    char *expected_args[] = {
      NULL,
      NULL
    };
    test_opts (6, argc, argv, optstring, expected_opts, expected_args,
	       "foobar", 0);
  }

  /* all option kinds, one arg */
  {
    int   argc   = 14;
    char *argv[] = {
      "rGetoptD",
      "-a",
      "-barg1",
      "-b"
      "arg2",
      "-c",
      "-carg3",
      "-dd",
      "-eearg4",
      "-ee",
      "arg5",
      "-ff",
      "-ffarg6",
      "foobar",
      NULL
    };
    char *expected_opts[] = {
      "a",
      "b",
      "b",
      "c",
      "c",
      "dd",
      "ee",
      "ee",
      "ff",
      "ff",
      NULL
    };
    char *expected_args[] = {
      NULL,   /* -a  */
      "arg1", /* -b  */
      "arg2", /* -b  */
      NULL,   /* -c  */
      "arg3", /* -c  */
      NULL,   /* -dd */
      "arg4", /* -ee */
      "arg5", /* -ee */
      NULL,   /* -ff */
      "arg6", /* -ff */
      NULL
    };
    test_opts (7, argc, argv, optstring, expected_opts, expected_args,
	       "foobar", 0);
  }

  /* using `-' - mode, option, one arg */
  {
    char optstring [] = "-ab:c::d!d e!e:f!f::";
    int   argc   = 3;
    char *argv[] = {
      "rGetoptD",
      "-a",
      "foobar",
      NULL
    };
    char *expected_opts[] = {
      "a",
      "\1",
      NULL
    };
    char *expected_args[] = {
      NULL,
      "foobar",
      NULL
    };
    test_opts (8, argc, argv, optstring, expected_opts, expected_args,
	       NULL, 0);
  }

  /* using `+' - mode, option, one arg */
  {
    char optstring [] = "+ab:c::d!d e!e:f!f::";
    int   argc   = 3;
    char *argv[] = {
      "rGetoptD",
      "-a",
      "foobar",
      NULL
    };
    char *expected_opts[] = {
      "a",
      NULL
    };
    char *expected_args[] = {
      NULL,
      NULL
    };
    test_opts (9, argc, argv, optstring, expected_opts, expected_args,
	       "foobar", 0);
  }

  /* testing --, option, one arg */
  {
    char optstring [] = "ab:c::d!d e!e:f!f::";
    int   argc   = 4;
    char *argv[] = {
      "rGetoptD",
      "-a",
      "--",
      "-a",
      NULL
    };
    char *expected_opts[] = {
      "a",
      NULL
    };
    char *expected_args[] = {
      NULL,
      NULL
    };
    test_opts (10, argc, argv, optstring, expected_opts, expected_args,
	       "-a", 0);
  }

  /* stress test, verlong optstring, optchar's running from 0 .. 255 */
  {
    # define MAX_CHARS 256
    int i;
    char optstring[MAX_CHARS];
    int   argc   = 1;
    char *argv[] = {
      "rGetoptD",
      NULL
    };
    char *expected_opts[] = {
      NULL
    };
    char *expected_args[] = {
      NULL
    };
    for (i = 0; i < MAX_CHARS-1; i++) {
      char c = (char) ((i+1) % 256);
      if (c == '\0') c = 'a';
      optstring [i] = c;
    }
    optstring [MAX_CHARS-1] = 0;
    test_opts (11, argc, argv, optstring, expected_opts, expected_args,
	       NULL, 0);
  }

  /* handling of !, when the second char is also used as an ordinary opt char*/
  {
    char optstring [] = "a!b" "b::" "c";
    int   argc   = 5;
    char *argv[] = {
      "rGetoptD",
      "-abc",
      "-b",
      "-barg1",
      "-abcbarg2",
      "foobar",
      NULL
    };
    char *expected_opts[] = {
      "ab",   /* -abc  */
      "c",    /* -abc  */
      "b",    /* -b    */
      "b",    /* -b    */
      "ab",   /* -abcb */
      "c",    /* -abcb */
      "b",    /* -abcb */
      NULL
    };
    char *expected_args[] = {
      NULL,   /* -ab */
      NULL,   /* c   */
      NULL,   /* -b  */
      "arg1", /* -b  */
      NULL,   /* -ab */
      NULL,   /* c   */
      "arg2", /* b   */
      NULL
    };
    test_opts (12, argc, argv, optstring, expected_opts, expected_args,
	       "foobar", 0);
  }

  /* check 2 letter options which have the same first letter */
  {
    char optstring [] = "a!a" "a!b" ;
    int   argc   = 5;
    char *argv[] = {
      "rGetoptD",
      "-aa",
      "-ab",
      "-aa",
      "-ab",
      NULL
    };
    char *expected_opts[] = {
      "aa",
      "ab",
      "aa",
      "ab",
      NULL
    };
    char *expected_args[] = {
      NULL,
      NULL,
      NULL,
      NULL,
      NULL
    };
    test_opts (13, argc, argv, optstring, expected_opts, expected_args,
	       NULL, 0);
  }

  /* error checks */
  {
    char optstring [] = "a!a" "b:";
    int   argc   = 3;
    char *argv[] = {
      "rGetoptD",
      "-a",    /* missing second option char */
      "-b",    /* missing option argument    */
      NULL
    };
    char *expected_opts[] = {
      "aa",
      "b",
      NULL
    };
    char *expected_args[] = {
      NULL,
      NULL,
      NULL,
      NULL
    };
    expected_errors += 2;
    test_opts (14, argc, argv, optstring, expected_opts, expected_args,
	       NULL, 2);
  }

  /* error checks */
  {
    char optstring [] = "a!a" "b:";
    int   argc   = 2;
    char *argv[] = {
      "rGetoptD",
      "-ac",   /* 2x illegal option char, 2x follow up messages */
      NULL
    };
    char *expected_opts[] = {
      "ac",
      NULL,
      NULL
    };
    char *expected_args[] = {
      NULL,
      NULL,
      NULL,
      NULL
    };
    expected_errors += 3;
    test_opts (15, argc, argv, optstring, expected_opts, expected_args,
	       NULL, 3);
  }

  /* argument with rGetopt_.._WithEqual = 1 */
  {
    char optstring [] = "a::" "b!b::" "c:";
    int   argc   = 13;
    char *argv[] = {
      "rGetoptD",
      "-a",
      "-afoo",
      "-a=foo",
      "-bb",
      "-bbbar",
      "-bb=bar",
      "-c", "moo",
      "-c", "=moo",
      "-cmoo",
      "-c=moo",
      NULL
    };
    char *expected_opts[] = {
      "a",
      "a",
      "a",
      "bb",
      "bb",
      "bb",
      "c",
      "c",
      "c",
      "c",
      NULL
    };
    char *expected_args[] = {
      NULL,
      "foo",
      "foo",
      NULL,
      "bar",
      "bar",
      "moo",
      "moo",
      "moo",
      "moo"
    };

    rGetoptArgumentWithEqual = 1;
    rGetoptOptionalWithEqual = 1;
    test_opts (16, argc, argv, optstring, expected_opts, expected_args,
	       NULL, 0);
    rGetoptArgumentWithEqual = 0;
    rGetoptOptionalWithEqual = 0;
  }

  /* argument with rGetopt_.._WithEqual = 0 */
  {
    char optstring [] = "a::" "b!b::" "c:";
    int   argc   = 13;
    char *argv[] = {
      "rGetoptD",
      "-a",
      "-afoo",
      "-a=foo",
      "-bb",
      "-bbbar",
      "-bb=bar",
      "-c", "moo",
      "-c", "=moo",
      "-cmoo",
      "-c=moo",
      NULL
    };
    char *expected_opts[] = {
      "a",
      "a",
      "a",
      "bb",
      "bb",
      "bb",
      "c",
      "c",
      "c",
      "c",
      NULL
    };
    char *expected_args[] = {
      NULL,
      "foo",
      "=foo",
      NULL,
      "bar",
      "=bar",
      "moo",
      "=moo",
      "moo",
      "=moo"
    };

    rGetoptArgumentWithEqual = 0;
    rGetoptOptionalWithEqual = 0;
    test_opts (17, argc, argv, optstring, expected_opts, expected_args,
	       NULL, 0);
  }

  if (not_passed == 0 && errors == expected_errors) {
    printf ("***** all tests passed *****\n");
    return 0;
  } else {
    if (not_passed != 0) {
      printf ("***** %d tests failed *****\n", not_passed);
    } else {
      printf ("***** all tests passed, but number of %d expected and %d occured errors differ *****\n", expected_errors, errors);
    }
    return 1;
  }
}

