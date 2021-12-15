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
 * Id: rGetoptLD.c,v 1.11 2007/01/10 17:27:12 vollmer Exp $
 */

# include <stdio.h>
# include <stdlib.h>
# include "rString.h"
# include "rGetopt.h"

# include "ratc.h"

# define DEBUG
# ifdef DEBUG
# define DPRINTF(arg) printf arg
# define INC_FAILED() {fprintf (stderr, "failed in line: %d\n", __LINE__); failed++; abort();}
# else
# define DPRINTF(arg)
# define INC_FAILED() {failed++;}
# endif

static rbool                 opt_verbose;
static long int              opt_int;
static long int              opt_oint;
static char                 *opt_str;
static char                 *opt_ostr;
static trGetoptStringListArg opt_lstr = {",:", 0,0,0};
static trGetoptIntListArg    opt_lint = {0,    0,0,0};
static int                   opt_func_val;
static int                   opt_cases = 0;

static int opt_func (trGetoptLong *options, int index)
{
  opt_func_val = *((int*) options[index].variable) * 2;
  return index;
}

static trGetoptLong options1[] = {
  {"help",      "h",  rBoolArg, 0, 0, 0, 0},
  {"Help",      "H",  rBoolArg, 0, 0, 0, 0},
  {"HelpMore",  "M",  rBoolArg, 0, 0, 0, 0},
  {"verbose",   "v",  rBoolArg,    &opt_verbose, 0, 0, 0},
  {"int",       "I",  rIntArg,     &opt_int,    (void*)4711, 0, 0},
  {"oint",      "OI", roIntArg,    &opt_oint, 0, 0, 0},
  {"str",       "S",  rStringArg,  &opt_str, 0, 0, 0},
  {"ostr",      "OS", roStringArg, &opt_ostr,     (void*)"-", NULL, 0},
  {"foo_bar",   0,    rBoolArg, 0, 0, 0, 0},
  {"lstr",      0,    rlStringArg, &opt_lstr, 0, 0, 0},
  {"lint",      0,    rlIntArg,    &opt_lint, 0, 0, 0},
  {"func",      0,    rIntArg,     &opt_func_val, 0,  &opt_func, 0},
  {0, 0, (trGetoptArg)0, 0, 0, 0, 0}  /* must be the last item in the array */
};
static trGetoptLong options2[] = {
  {"case-a",    0,    rEnumArg,    &opt_cases,    (void*) 1, 0, 0},
  {"case-b",    0,    rEnumArg,    &opt_cases,    (void*) 2, 0, 0},
  {"case-c",    0,    rEnumArg,    &opt_cases,    (void*) 3, 0, 0},
  {0, 0, (trGetoptArg)0, 0, 0, 0, 0}  /* must be the last item in the array */
};
static trGetoptLong *options;

static int failed = 0;

static void test_opts (int test_nr,
		       int argc, char *argv[],
		       char *expected_opts[],
		       char *expected_opts_args[],
		       char *expected_arg,
		       int   expected_errors)
{
  int errors = 0;
  int opt;
  int i = 0;
  rOptind = 0; /* resetting option handling */

  DPRINTF (("---------------------\n"));
  printf ("... test %d: ", test_nr); fflush (stdout);
  while ((opt = rGetoptLong (argc, argv, options)) != rNO_MORE_OPTION) {
    if (opt < 0) {
      DPRINTF (("\n====> %s\n", rOptmsg));
      errors++;
    } else {
      if (expected_opts[i] != 0 &&
	  strcmp (options[rOptIndex].name, expected_opts[i]) == 0) {
	if (expected_opts_args[i] == 0) {
	  /* no option argument expected */
	  if (rOptarg != 0) {
	    /* but argument given */
	    DPRINTF (("\n====> unexpected arg\n"));
	    errors++;
	  }
	} else {
	  /* option argument expected */
	  if (rOptarg == 0) {
	    DPRINTF (("\n====> expected arg\n"));
	    errors++;
	  } else if (strcmp (rOptarg, expected_opts_args[i]) != 0) {
	    DPRINTF (("\n====> wrong arg\n"));
	    errors++;
	  }
	}
      } else {
	DPRINTF (("\n====> expected other option\n"));
	errors++;
      }
    }
    i++;
  }

  if (rOptind < argc) {
    if (strcmp (argv[rOptind], expected_arg) != 0) errors++;
  }
  if (errors == expected_errors) {
    printf ("passed\n");
  } else {
    printf ("test %d failed: expected errors=%d occured errors=%d\n",
	    test_nr, expected_errors, errors);
    INC_FAILED();
    exit (1);
  }
}

/**************************************************************************/

int main (int argc, char *argv[])
{
  printf ("selftest of the rGetopt module (long option names) argc=%d\n",
	  argc);
  options = rGetoptConcat (options1, options2);

  /*-------------------------------------------------------------------------*/
  {
    int   argc   = 1;
    char *argv[] = {
      "rGetoptLD",
      NULL
    };
    char *expected_opts[] = {
      NULL
    };
    char *expected_args[] = {
      NULL
    };
    rGetoptInitVars (options);
    rGetoptWrite (stdout, options, rtrue);
    if (opt_int != 4711) INC_FAILED();
    test_opts (1, argc, argv, expected_opts, expected_args, "", 0);
  }
  /*-------------------------------------------------------------------------*/
  {
    int   argc   = 2;
    char *argv[] = {
      "rGetoptLD",
      "abc",
      NULL
    };
    char *expected_opts[] = {
      NULL
    };
    char *expected_args[] = {
      NULL
    };
    test_opts (2, argc, argv, expected_opts, expected_args, "abc", 0);
  }
  /*-------------------------------------------------------------------------*/
  {
    int   argc   = 7;
    char *argv[] = {
      "rGetoptLD",
      "--he",
      "--Help",
      "-h",
      "--foo-bar",
      "--foo_bar",
      "-hv",
      NULL
    };
    char *expected_opts[] = {
      "help",
      "Help",
      "help",
      "foo_bar",    /* "-" == '_' */
      "foo_bar",    /* "-" == '_' */
      "help",
      "verbose"
    };
    char *expected_args[] = {
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL
    };
    test_opts (3, argc, argv, expected_opts, expected_args, NULL, 0);
  }
  /*-------------------------------------------------------------------------*/
  {
    int   argc   = 4;
    char *argv[] = {
      "rGetoptLD",
      "--he",
      "--Help",
      "abc",
      NULL
    };
    char *expected_opts[] = {
      "help",
      "Help"
    };
    char *expected_args[] = {
      NULL,
      NULL
    };
    test_opts (4, argc, argv, expected_opts, expected_args, "abc", 0);
  }
  /*-------------------------------------------------------------------------*/
  {
    int   argc   = 4;
    char *argv[] = {
      "rGetoptLD",
      "--he",
      "--",
      "--help",
      NULL
    };
    char *expected_opts[] = {
      "help"
    };
    char *expected_args[] = {
      NULL
    };
    test_opts (5, argc, argv, expected_opts, expected_args, "--help", 0);
  }
  /*-------------------------------------------------------------------------*/
  {
    int   argc   = 5;
    char *argv[] = {
      "rGetoptLD",
      "--he",
      "--Hel",  /* ambigous */
      "abc",
      NULL
    };
    char *expected_opts[] = {
      "help",
      NULL
    };
    char *expected_args[] = {
      NULL,
      NULL
    };
   test_opts (6, argc, argv, expected_opts, expected_args, "abc", 1);
  }
  /*-------------------------------------------------------------------------*/
  {
    int   argc   = 24;
    char *argv[] = {
      "rGetoptLD",
      "--help=true",
      "--help=off",
      "-h=enable",
      "--int=123",     /* one element in argv           */
      "--int", "123",  /* two separate elements in argv */
      "-I=12356",      /* one element in argv           */
      "-I12356",       /* one element in argv           */
      "-I", "12356",   /* two separate elements in argv */
      "--oint=456",
      "-OI=4567890",
      "-OI4567890",
      "--oint",
      "-OI",
      "--str=ABC",
      "-S=ABCEFG",
      "--ostr=EFG",
      "--ostr=",   /* empty string as argument */
      "--ostr",    /* no argument              */
      "-OS=EFG",
      "-OS=",   /* empty string as argument */
      "-OS",    /* no argument              */
      "abc",
      NULL
    };
    char *expected_opts[] = {
      "help",
      "help",
      "help",
      "int",
      "int",
      "int",
      "int",
      "int",
      "oint",
      "oint",
      "oint",
      "oint",
      "oint",
      "str",
      "str",
      "ostr",
      "ostr",
      "ostr",
      "ostr",
      "ostr",
      "ostr"
    };
    char *expected_args[] = {
      "true",
      "off",
      "enable",
      "123",
      "123",
      "12356",
      "12356",
      "12356",
      "456",
      "4567890",
      "4567890",
      NULL,
      NULL,
      "ABC",
      "ABCEFG",
      "EFG",
      "",
      NULL,
      "EFG",
      "",
      NULL
    };
    test_opts (6, argc, argv, expected_opts, expected_args, "abc", 0);
  }
  /*-------------------------------------------------------------------------*/
  {
    int   argc   = 2;
    char *argv[] = {
      "rGetoptLD",
      "--int",
      NULL
    };
    char *expected_opts[] = {
      "int",
    };
    char *expected_args[] = {
      NULL, /* int-value expected */
    };
    test_opts (7, argc, argv, expected_opts, expected_args, NULL, 1);
  }
  /*-------------------------------------------------------------------------*/
  {
    int   argc   = 2;
    char *argv[] = {
      "rGetoptLD",
      "--help=",   /* expects a boolean arg if any */
      NULL
    };
    char *expected_opts[] = {
      "help",
    };
    char *expected_args[] = {
      NULL
    };
    test_opts (8, argc, argv, expected_opts, expected_args, NULL, 1);
  }
  /*-------------------------------------------------------------------------*/
  {
    int   argc   = 2;
    char *argv[] = {
      "rGetoptLD",
      "--help=abc",   /* expects a boolean arg if any */
      NULL
    };
    char *expected_opts[] = {
      "help",
    };
    char *expected_args[] = {
      NULL
    };
    test_opts (9, argc, argv, expected_opts, expected_args, NULL, 1);
  }
  /*-------------------------------------------------------------------------*/
  {
    int   argc   = 4;
    char *argv[] = {
      "rGetoptLD",
      "-int=123",   /* long option name with only one - */
      "-i=456",     /* long option name with only one - */
      "abc",
      NULL
    };
    char *expected_opts[] = {
      "int",
      "int"
    };
    char *expected_args[] = {
      "123",
      "456"
    };
    test_opts (10, argc, argv, expected_opts, expected_args, "abc", 0);
  }
  /*-------------------------------------------------------------------------*/
  {
    int   argc   = 6;
    char *argv[] = {
      "rGetoptLD",
      "--int=9999999999999999999999999999999999999999", /* value too large */
      "--int=123abc", /* illegal value */
      "--oint=9999999999999999999999999999999999999999", /* value too large */
      "--oint=123abc", /* illegal value */
      "--int=0x1234",
      NULL
    };
    char *expected_opts[] = {
      "int",
      "int",
      "int",
      "int",
      "int"
    };
    char *expected_args[] = {
      "9999999999999999999999999999999999999999",
      "123abc",
      "9999999999999999999999999999999999999999",
      "123abc",
      "0x1234"
    };
    test_opts (11, argc, argv, expected_opts, expected_args, NULL, 4);
    if (opt_int != 0x1234) INC_FAILED();
  }
  /*-------------------------------------------------------------------------*/
  {
    int   argc   = 12;
    char *argv[] = {
      "rGetoptLD",
      "--verbose",
      "--int=4711",
      "--lstr=abc",
      "--lstr=mno:uvw,xyz",
      "--lstr=efg",
      "--lstr=1234567890123456789012345678901234567890",
      "--lstr=1234567890123456789012345678901234567890",
      "--lstr=1234567890123456789012345678901234567890",
      "--lint=123",
      "--lint=456,789,0xABcd",
      "abc",
      NULL
    };
    char *expected_opts[] = {
      "verbose",
      "int",
      "lstr",
      "lstr",
      "lstr",
      "lstr",
      "lstr",
      "lstr",
      "lint",
      "lint"
    };
    char *expected_args[] = {
      NULL,
      "4711",
      "abc",
      "mno:uvw,xyz",
      "efg",
      "1234567890123456789012345678901234567890",
      "1234567890123456789012345678901234567890",
      "1234567890123456789012345678901234567890",
      "123",
      "456,789,0xABcd"
    };
    opt_verbose = rfalse;
    opt_int     = 0;
    opt_oint    = 0;
    opt_str     = NULL;
    opt_ostr    = NULL;

    test_opts (12, argc, argv, expected_opts, expected_args, "abc", 0);
    if (opt_lstr.max != 8) INC_FAILED();
    if (strcmp (opt_lstr.elem[0], "abc") != 0) INC_FAILED();
    if (strcmp (opt_lstr.elem[1], "mno") != 0) INC_FAILED();
    if (strcmp (opt_lstr.elem[2], "uvw") != 0) INC_FAILED();
    if (strcmp (opt_lstr.elem[3], "xyz") != 0) INC_FAILED();
    if (strcmp (opt_lstr.elem[4], "efg") != 0) INC_FAILED();

    if (opt_lint.max != 4) INC_FAILED();
    if (opt_lint.elem[0] != 123)    INC_FAILED();
    if (opt_lint.elem[1] != 456)    INC_FAILED();
    if (opt_lint.elem[2] != 789)    INC_FAILED();
    if (opt_lint.elem[3] != 0xABcd) INC_FAILED();
  }
  /*-------------------------------------------------------------------------*/
  {
    int   argc   = 2;
    char *argv[] = {
      "rGetoptLD",
      "--func=123",
      NULL
    };
    char *expected_opts[] = {
      "func"
    };
    char *expected_args[] = {
      "123"
    };
    test_opts (13, argc, argv, expected_opts, expected_args, NULL, 0);
    if (opt_func_val != 246) INC_FAILED();
  }
  /*-------------------------------------------------------------------------*/
  {
    int   argc   = 2;
    char *argv[] = {
      "rGetoptLD",
      "--case-b",
      NULL
    };
    char *expected_opts[] = {
      "case-b"
    };
    char *expected_args[] = {
      NULL,
    };
    test_opts (14, argc, argv, expected_opts, expected_args, NULL, 0);
    if (opt_cases != 2) INC_FAILED();
  }
  /*-------------------------------------------------------------------------*/
  {
    rbool ok = rtrue;
    FILE  *f =  fopen ("rGetopt.tst", "r");
    if (f == NULL) {
      printf ("%s: can not read file %s\n", argv[0], "rGetopt.tst");
      ok = rfalse;
    } else {
      opt_verbose   = rtrue;
      opt_int       = 0;
      opt_str       = NULL;
      opt_ostr      = NULL;
      opt_lstr.size = 0;
      opt_lint.size = 0;
      opt_cases     = 0;

      if (rGetoptRead (f, options)) {
	if (opt_verbose != rfalse)         ok = rfalse;
	if (opt_int     != 4711)           ok = rfalse;
	if (strcmp (opt_str,  "abc") != 0) ok = rfalse;
	if (strcmp (opt_ostr, "-")   != 0) ok = rfalse;

	if (opt_lstr.max != 5)                     ok = rfalse;
	if (strcmp (opt_lstr.elem[0], "ABC") != 0) ok = rfalse;
	if (strcmp (opt_lstr.elem[1], "EFG") != 0) ok = rfalse;
	if (strcmp (opt_lstr.elem[2], "IJK") != 0) ok = rfalse;
	if (strcmp (opt_lstr.elem[3], "LMN") != 0) ok = rfalse;
	if (strcmp (opt_lstr.elem[4], "OPQ") != 0) ok = rfalse;

	if (opt_lint.max != 1)          ok = rfalse;
	if (opt_lint.elem[0] != 0x1234) ok = rfalse;
      } else {
	ok = rfalse;
      }
      fclose (f);
    }
    if (ok) {
      printf ("<<<<<<\n");
      rGetoptWrite (stdout, options, rtrue);
      printf (">>>>>>\n");
      printf ("... test 15: passed\n");
    } else {
	printf ("... test 15: failed\n");
	INC_FAILED();
    }
  }
  /*-------------------------------------------------------------------------*/
  {
    rbool ok = rtrue;
    printf ("<<<<<< without help text\n");
    rGetoptShow (stdout, options, " > ", NULL);
    printf (">>>>>>\n");
    printf ("<<<<<< with help text\n");
    if (!rGetoptShowName (stdout, options, " > ", "rGetopt.help", NULL)) {
      printf ("%s: can not read file %s\n", argv[0], "rGetopt.help");
      ok = rfalse;
    }
    printf (">>>>>>\n");
    if (ok) {
      printf ("... test 16: passed\n");
    } else {
      printf ("... test 16: failed\n");
      INC_FAILED();
    }
  }

  {

  }
  /*-------------------------------------------------------------------------*/
  if (failed == 0) {
    printf ("%s: all tests passed.\n", argv[0]);
    return 0;
  } else {
    printf ("%s: %d tests failed!!!\n", argv[0], failed);
    return 1;
  }
}

/**************************************************************************/
