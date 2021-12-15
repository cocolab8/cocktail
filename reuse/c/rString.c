/* $Id: rString.c,v 1.1 2000/09/04 13:48:12 grosch rel $ */

/*
 * $Log: rString.c,v $
 * Revision 1.1  2000/09/04 13:48:12  grosch
 * added functions wcscpy and wcslen
 *
 * Revision 1.0  2000/04/10 16:15:51  grosch
 * Initial revision
 *
 */

/* Ich, Doktor Josef Grosch, Informatiker, Feb. 2000 */

/*
 * The functions strcasecmp and strncasecmp are provided if not supplied by
 * the current C library.
 */

# include "rString.h"
# include <ctype.h>
# include <sys/types.h>
# include "ratc.h"

# if ! HAVE_STRCASECMP
int strcasecmp
# ifdef HAVE_ARGS
   (const char * s1, const char * s2)
# else
   (s1, s2) char * s1; char * s2;
# endif
{
   register const char * p1 = s1;
   register const char * p2 = s2;
   register unsigned c1, c2;
   while ((c1 = * p1 ++) & (c2 = * p2 ++)) {
      c1 = toupper (c1);
      c2 = toupper (c2);
      if (c1 < c2) return -1;
      if (c1 > c2) return +1;
   }
   if (c2) return -1;
   if (c1) return +1;
   return 0;
}
# endif

# if ! HAVE_STRNCASECMP
int strncasecmp
# ifdef HAVE_ARGS
   (const char * s1, const char * s2, size_t n)
# else
   (s1, s2, n) char * s1; char * s2; size_t n;
# endif
{
   register const char * p1 = s1;
   register const char * p2 = s2;
   register unsigned c1, c2;
   while ((c1 = * p1 ++) & (c2 = * p2 ++)) {
      if (n -- == 0) return 0;
      c1 = toupper (c1);
      c2 = toupper (c2);
      if (c1 < c2) return -1;
      if (c1 > c2) return +1;
   }
   if (n) {
      if (c2) return -1;
      if (c1) return +1;
   }
   return 0;
}
# endif

# if HAVE_WCHAR_T

# if ! HAVE_WCSCPY
wchar_t * wcscpy
# ifdef HAVE_ARGS
   (wchar_t * s1, const wchar_t * s2)
# else
   (s1, s2) wchar_t * s1; wchar_t * s2;
# endif
{
   register wchar_t * p1 = s1;
   register wchar_t * p2 = s2;
   register wchar_t c;
   do 
      c = * p1 ++ = * p2 ++;
   while (c != L'\0');
   return s1;
}
# endif

# if ! HAVE_WCSLEN
int * wcslen
# ifdef HAVE_ARGS
   (register const wchar_t * s)
# else
   (s) register wchar_t * s;
# endif
{
   register int n = 0;
   while (* s ++ != L'\0') n ++;
   return n;
}
# endif

# endif
