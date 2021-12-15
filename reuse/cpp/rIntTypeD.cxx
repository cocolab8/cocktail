/* Copyright (c) 2007 Dr. Josef Grosch, CoCoLab - Datenverarbeitung

   This file contains proprietary and confidential information and
   remains the property of CoCoLab. Use, disclosure, or reproduction
   is prohibited except as permitted by express written license agreement
   with CoCoLab.

   Phone: +49-7841-669144
   Fax  : +49-7841-669145
   Email: grosch@cocolab.com
*/

/* Project:	Cocktail Reuse Library
 * Descr:	Definition of fixed size integer data types
 * Author:	Dr. Juergen Vollmer <vollmer@cocolab.com>
 */

# include <stdio.h>
# include "rIntType.h"

# define TEST(t, s)						\
	printf ("sizeof (%9s) = %d, ", #t, sizeof (t));		\
        printf ("expected size = %d, ", s);			\
	if (s == sizeof (t)) {					\
          printf ("OK\n");					\
	} else {						\
          printf ("FAIL\n");					\
          failed ++;						\
        }


int main (int argc, char * argv [])
{
  int failed = 0;
  printf ("\n");
  printf ("Test driver for the rIntType definitions\n");
  printf ("****************************************\n");
  printf ("\n");

# ifdef __GNUC__
  printf ("macro __GNUC__   is defined and has the value %d\n", __GNUC__);
#  ifdef __WORDSIZE
  printf ("macro __WORDSIZE is defined and has the value %d\n", __WORDSIZE);
#  else
  printf ("macro __WORDSIZE is not defined\n");
#  endif
# endif

# if defined __SUNPRO_C || defined __SUNPRO_CC
#  ifdef __SUNPRO_C
  printf ("macro __SUNPRO_C  is defined and has the value %x\n", __SUNPRO_C);
#  endif
#  ifdef __SUNPRO_CC
  printf ("macro __SUNPRO_CC is defined and has the value %x\n", __SUNPRO_CC);
#  endif
#  ifdef _ILP32
  printf ("macro _ILP32      is defined\n");
#  else
  printf ("macro _ILP32      is not defined\n");
#  endif
#  ifdef _LP64
  printf ("macro _LP64       is defined\n");
#  else
  printf ("macro _LP64       is not defined\n");
#  endif
# endif

# if defined __IBMC__ || defined __IBMCPP__
#  ifdef __IBMC__
  printf ("macro __IBMC__   is defined and has the value %d\n", __IBMC__);
#  endif
#  ifdef __IBMCPP__
  printf ("macro __IBMCPP__ is defined and has the value %d\n", __IBMCPP__);
#  endif
#  ifdef __64BIT__
  printf ("macro __64BIT__  is defined and has the value %d\n", __64BIT__);
#  else
  printf ("macro __64BIT__  is not defined\n");
#  endif
# endif

# ifdef _MSC_VER
  printf ("macro _MSC_VER is defined and has the value %d\n", _MSC_VER);
#  ifdef _WIN32
  printf ("macro _WIN32   is defined\n");
#  else
  printf ("macro _WIN32   is not defined\n");
#  endif
#  ifdef _WIN64
  printf ("macro _WIN64   is defined\n");
#  else
  printf ("macro _WIN64   is not defined\n");
#  endif
# endif

  printf ("macro rWORDSIZE has the value %d\n", rWORDSIZE);
  printf ("\n");

  TEST (int8_t,   1);
  TEST (int16_t,  2);
  TEST (int32_t,  4);
  TEST (int64_t,  8);
  TEST (intptr_t, sizeof (void *));

  printf ("\n");

  TEST (uint8_t,  1);
  TEST (uint16_t, 2);
  TEST (uint32_t, 4);
  TEST (uint64_t, 8);
  TEST (uintptr_t, sizeof (void *));

  printf ("\n");
  if (failed > 0) {
    printf ("%d tests FAILED\n\n", failed);
    return 1;
  } else {
    printf ("All tests are OK\n\n");
    return 0;
  }
}
