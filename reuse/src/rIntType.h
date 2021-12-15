/*
   Copyright (c) 2008 Dr. Josef Grosch, CoCoLab - Datenverarbeitung

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

/* This file defines some fixed size integer data types in a portable way:
 *
 *   signed   | unsigned  | size
 *   ---------+-----------+-------
 *   int8_t   | uint8_t   |  8 bit
 *   int16_t  | uint16_t  | 16 bit
 *   int32_t  | uint32_t  | 32 bit
 *   int64_t  | uint64_t  | 64 bit
 *   intptr_t | uintptr_t |
 *
 * The macro rWORDSIZE gives the "natural" word size of the system.
 */

# ifndef rINTTYPE_H
# define rINTTYPE_H

/* 1. use results of configure */

# include "config.h"

/* 2. determine word size */

/********* GNU gcc, g++ *********/
# if defined __GNUC__
#  ifdef __WORDSIZE
#   define rWORDSIZE __WORDSIZE
#  else
#   define rWORDSIZE 32
#  endif

/********* SUN cc, CC *********/
# elif defined __SUNPRO_C || defined __SUNPRO_CC
#  include <sys/types.h>
#  ifdef _LP64
#   define rWORDSIZE 64
#  else
#   define rWORDSIZE 32
#  endif

/********* IBM XL C/C++ z/OS *********/
# elif defined __IBMC__ || defined __IBMCPP__
#  ifdef __64BIT__
#   define rWORDSIZE 64
#  else
#   define rWORDSIZE 32
#  endif

/********* Microsoft Visual C++ 6.0, 2003, 2005, 2008 *********/
# elif defined _MSC_VER && _MSC_VER >= 1100
#  ifdef _WIN64
#   define rWORDSIZE 64
#  elif defined _WIN32
#   define rWORDSIZE 32
#  else
#   define rWORDSIZE 32
#  endif
# endif

/* 3. define types using existing include files/types */

# if HAVE_INTTYPES_H
#  include <inttypes.h>
# elif HAVE_STDINT_H
#  include <stdint.h>

/********* Microsoft Visual C++ 6.0, 2003, 2005, 2008 *********/
# elif defined _MSC_VER && _MSC_VER >= 1100
#  define int8_t   __int8
#  define int16_t  __int16
#  define int32_t  __int32
#  define int64_t  __int64
#  define uint8_t  unsigned __int8
#  define uint16_t unsigned __int16
#  define uint32_t unsigned __int32
#  define uint64_t unsigned __int64
# endif

/* 4. if configure did fail then define fallback types */

# if ! (defined INT8_MAX || defined int8_t)
#  define int8_t signed char
# endif

# if ! (defined INT16_MAX || defined int16_t)
#  define int16_t short int
# endif

# if ! (defined INT32_MAX || defined int32_t)
#  define int32_t int
# endif

# if ! (defined INT64_MAX || defined int64_t)
#  if HAVE_LONG_LONG_INT
#   define int64_t long long int
#  else
#   define int64_t long int
#  endif
# endif

# if ! HAVE_INTPTR_T
#  if rWORDSIZE == 64
#   define intptr_t int64_t
#  else
#   define intptr_t int32_t
#  endif
#  ifdef _MSC_VER
#   define _INTPTR_T_DEFINED
#  endif
# endif

# if ! (defined UINT8_MAX || defined uint8_t)
#  define uint8_t unsigned char
# endif

# if ! (defined UINT16_MAX || defined uint16_t)
#  define uint16_t unsigned short int
# endif

# if ! (defined UINT32_MAX || defined uint32_t)
#  define uint32_t unsigned int
# endif

# if ! (defined UINT64_MAX || defined uint64_t)
#  if HAVE_UNSIGNED_LONG_LONG_INT
#   define uint64_t unsigned long long int
#  else
#   define uint64_t unsigned long int
#  endif
# endif

# if ! HAVE_UINTPTR_T
#  if rWORDSIZE == 64
#   define uintptr_t uint64_t
#  else
#   define uintptr_t uint32_t
#  endif
#  ifdef _MSC_VER
#   define _UINTPTR_T_DEFINED
#  endif
# endif

# endif
