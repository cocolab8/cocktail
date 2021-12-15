# ifndef yyrString
# define yyrString

/* $Id: rString.h,v 1.8 2006/11/16 16:58:36 grosch rel grosch $ */

/*
 * $Log: rString.h,v $
 * Revision 1.8  2006/11/16 16:58:36  grosch
 * add missing directive #include "ratc.h"
 *
 * Revision 1.7  2006/05/30 10:24:35  grosch
 * changed #ifdef _MSC_VER to #ifdef HAVE_ARGS
 *
 * Revision 1.6  2005/05/23 12:26:27  grosch
 * changed #include <config.h> to #include "config.h"
 *
 * Revision 1.5  2005/05/23 10:25:02  grosch
 * changed #include <...> to #include "..."
 *
 * Revision 1.4  2001/08/28 11:09:01  grosch
 * modified #ifdef's so it compiles with -ansi under Linux
 *
 * Revision 1.3  2001/01/28 15:05:29  grosch
 * unified treatment of include file wchar.h
 *
 * Revision 1.2  2000/09/04 13:49:09  grosch
 * added functions wcscpy and wcslen
 * changed # include "config.h" to <config.h>
 * added decl for function memset
 *
 * Revision 1.1  2000/04/25 13:00:44  grosch
 * tribute to MS VC++
 *
 * Revision 1.0  2000/04/10 16:15:51  grosch
 * Initial revision
 *
 */

/* Ich, Doktor Josef Grosch, Informatiker, Feb. 2000 */

/* This tries to be a portable replacement for the following confusion:
 * # include <string.h>
 * # include <strings.h>
 * The functions strcasecmp and strncasecmp are provided if not supplied by
 * the current C library.
 */

# include "ratc.h"

# ifndef _MSC_VER
#  include "config.h"
#  if HAVE_WCHAR_H
#   include <wchar.h>
#  endif
# endif

# if HAVE_STRING_H | defined _MSC_VER | defined MSDOS
#  include <string.h>
# endif

# if HAVE_STRINGS_H
#  ifdef __CYGWIN__ 
#   include </usr/include/strings.h>    
#  else
#   include <strings.h>
#  endif
# endif

# if ! (HAVE_STRING_H | HAVE_STRINGS_H | defined _MSC_VER | defined MSDOS)
#  include <sys/types.h>
extern char *strcpy (), *strncpy (), *strchr (), *strrchr (), *strtok ();
extern char *strcat (), *strncat (), *strdup (), *strerror (), *strstr ();
extern char *strpbrk ();
extern int strcmp (), strcasecmp (), strncasecmp (), memcmp ();
extern size_t strlen (), strspn (), strcspn ();
extern void *memcpy (), *memset ();
# endif

# if ! HAVE_STRCASECMP
extern int strcasecmp
#  ifdef HAVE_ARGS
   (const char * s1, const char * s2);
#  else
   ();
#  endif
# endif

# if ! HAVE_STRNCASECMP
extern int strncasecmp
#  ifdef HAVE_ARGS
   (const char * s1, const char * s2, size_t n);
#  else
   ();
#  endif
# endif

# if HAVE_WCHAR_T

# if ! HAVE_WCSCPY
extern wchar_t * wcscpy
#  ifdef HAVE_ARGS
   (wchar_t * s1, const wchar_t * s2)
#  else
   ();
#  endif
# endif

# if ! HAVE_WCSLEN
extern int * wcslen
#  ifdef HAVE_ARGS
   (register const wchar_t * s)
#  else
   ();
#  endif
# endif

# endif

# endif
