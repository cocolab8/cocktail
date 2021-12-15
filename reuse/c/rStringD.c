/* $Id: rStringD.c,v 1.0 2000/04/10 16:15:51 grosch rel $ */

/*
 * $Log: rStringD.c,v $
 * Revision 1.0  2000/04/10 16:15:51  grosch
 * Initial revision
 *
 */

/* Ich, Doktor Josef Grosch, Informatiker, Feb. 2000 */

static char rcsid [] =
   "$Id: rStringD.c,v 1.0 2000/04/10 16:15:51 grosch rel $";

# include "rString.h"
# include <stdio.h>
# include "ratc.h"

static int passed	= 0;
static int failed	= 0;

static void check
# ifdef HAVE_ARGS
   (char * s1, char * s2, int result)
# else
   (s1, s2, result) char * s1; char * s2; int result;
# endif
{
   int r = strcasecmp (s1, s2);
   if (r < 0) r = -1;
   if (r > 0) r = +1;
   if (r != result) {
      failed ++;
      printf ("fail: strcasecmp (\"%s\", \"%s\") == %d != %d\n",
	 s1, s2, r, result);
   } else {
      passed ++;
   }
}

static void checkn
# ifdef HAVE_ARGS
   (char * s1, char * s2, int n, int result)
# else
   (s1, s2, n, result) char * s1; char * s2; int n; int result;
# endif
{
   int r = strncasecmp (s1, s2, n);
   if (r < 0) r = -1;
   if (r > 0) r = +1;
   if (r != result) {
      failed ++;
      printf ("fail: strncasecmp (\"%s\", \"%s\", %d) == %d != %d\n",
	 s1, s2, n, r, result);
   } else {
      passed ++;
   }
}

int main ARGS ((void))
{
   int n;

   check ("abc", "abc",  0);
   check ("abc", "abd", -1);
   check ("abd", "abc", +1);
   check ("abc", "abcd", -1);
   check ("abcd", "abc", +1);
   check ("", "",  0);
   check ("", "d", -1);
   check ("d", "", +1);
   check ("aBc", "abc",  0);
   check ("aBc", "abd", -1);
   check ("aBd", "abc", +1);
   check ("aBc", "abcd", -1);
   check ("aBcd", "abc", +1);
   check ("abc", "aBc",  0);
   check ("abc", "aBd", -1);
   check ("abd", "aBc", +1);
   check ("abc", "aBcd", -1);
   check ("abcd", "aBc", +1);

   n = 5;
   checkn ("abc"	, "abc"		, n,  0);
   checkn ("abc"	, "abd"		, n, -1);
   checkn ("abd"	, "abc"		, n, +1);
   checkn ("abc"	, "abcd"	, n, -1);
   checkn ("abcd"	, "abc"		, n, +1);
   checkn (""		, ""		, n,  0);
   checkn (""		, "d"		, n, -1);
   checkn ("d"		, ""		, n, +1);
   checkn ("aBc"	, "abc"		, n,  0);
   checkn ("aBc"	, "abd"		, n, -1);
   checkn ("aBd"	, "abc"		, n, +1);
   checkn ("aBc"	, "abcd"	, n, -1);
   checkn ("aBcd"	, "abc"		, n, +1);
   checkn ("abc"	, "aBc"		, n,  0);
   checkn ("abc"	, "aBd"		, n, -1);
   checkn ("abd"	, "aBc"		, n, +1);
   checkn ("abc"	, "aBcd"	, n, -1);
   checkn ("abcd"	, "aBc"		, n, +1);

   n = 4;
   checkn ("abc"	, "abc"		, n,  0);
   checkn ("abc"	, "abd"		, n, -1);
   checkn ("abd"	, "abc"		, n, +1);
   checkn ("abc"	, "abcd"	, n, -1);
   checkn ("abcd"	, "abc"		, n, +1);
   checkn (""		, ""		, n,  0);
   checkn (""		, "d"		, n, -1);
   checkn ("d"		, ""		, n, +1);
   checkn ("aBc"	, "abc"		, n,  0);
   checkn ("aBc"	, "abd"		, n, -1);
   checkn ("aBd"	, "abc"		, n, +1);
   checkn ("aBc"	, "abcd"	, n, -1);
   checkn ("aBcd"	, "abc"		, n, +1);
   checkn ("abc"	, "aBc"		, n,  0);
   checkn ("abc"	, "aBd"		, n, -1);
   checkn ("abd"	, "aBc"		, n, +1);
   checkn ("abc"	, "aBcd"	, n, -1);
   checkn ("abcd"	, "aBc"		, n, +1);

   n = 3;
   checkn ("abc"	, "abc"		, n,  0);
   checkn ("abc"	, "abd"		, n, -1);
   checkn ("abd"	, "abc"		, n, +1);
   checkn ("abc"	, "abcd"	, n,  0);
   checkn ("abcd"	, "abc"		, n,  0);
   checkn (""		, ""		, n,  0);
   checkn (""		, "d"		, n, -1);
   checkn ("d"		, ""		, n, +1);
   checkn ("aBc"	, "abc"		, n,  0);
   checkn ("aBc"	, "abd"		, n, -1);
   checkn ("aBd"	, "abc"		, n, +1);
   checkn ("aBc"	, "abcd"	, n,  0);
   checkn ("aBcd"	, "abc"		, n,  0);
   checkn ("abc"	, "aBc"		, n,  0);
   checkn ("abc"	, "aBd"		, n, -1);
   checkn ("abd"	, "aBc"		, n, +1);
   checkn ("abc"	, "aBcd"	, n,  0);
   checkn ("abcd"	, "aBc"		, n,  0);

   n = 2;
   checkn ("abc"	, "abc"		, n,  0);
   checkn ("abc"	, "abd"		, n,  0);
   checkn ("abd"	, "abc"		, n,  0);
   checkn ("abc"	, "abcd"	, n,  0);
   checkn ("abcd"	, "abc"		, n,  0);
   checkn (""		, ""		, n,  0);
   checkn (""		, "d"		, n, -1);
   checkn ("d"		, ""		, n, +1);
   checkn ("aBc"	, "abc"		, n,  0);
   checkn ("aBc"	, "abd"		, n,  0);
   checkn ("aBd"	, "abc"		, n,  0);
   checkn ("aBc"	, "abcd"	, n,  0);
   checkn ("aBcd"	, "abc"		, n,  0);
   checkn ("abc"	, "aBc"		, n,  0);
   checkn ("abc"	, "aBd"		, n,  0);
   checkn ("abd"	, "aBc"		, n,  0);
   checkn ("abc"	, "aBcd"	, n,  0);
   checkn ("abcd"	, "aBc"		, n,  0);

   n = 1;
   checkn ("abc"	, "abc"		, n,  0);
   checkn ("abc"	, "abd"		, n,  0);
   checkn ("abd"	, "abc"		, n,  0);
   checkn ("abc"	, "abcd"	, n,  0);
   checkn ("abcd"	, "abc"		, n,  0);
   checkn (""		, ""		, n,  0);
   checkn (""		, "d"		, n, -1);
   checkn ("d"		, ""		, n, +1);
   checkn ("aBc"	, "abc"		, n,  0);
   checkn ("aBc"	, "abd"		, n,  0);
   checkn ("aBd"	, "abc"		, n,  0);
   checkn ("aBc"	, "abcd"	, n,  0);
   checkn ("aBcd"	, "abc"		, n,  0);
   checkn ("abc"	, "aBc"		, n,  0);
   checkn ("abc"	, "aBd"		, n,  0);
   checkn ("abd"	, "aBc"		, n,  0);
   checkn ("abc"	, "aBcd"	, n,  0);
   checkn ("abcd"	, "aBc"		, n,  0);

   n = 0;
   checkn ("abc"	, "abc"		, n,  0);
   checkn ("abc"	, "abd"		, n,  0);
   checkn ("abd"	, "abc"		, n,  0);
   checkn ("abc"	, "abcd"	, n,  0);
   checkn ("abcd"	, "abc"		, n,  0);
   checkn (""		, ""		, n,  0);
   checkn (""		, "d"		, n,  0);
   checkn ("d"		, ""		, n,  0);
   checkn ("aBc"	, "abc"		, n,  0);
   checkn ("aBc"	, "abd"		, n,  0);
   checkn ("aBd"	, "abc"		, n,  0);
   checkn ("aBc"	, "abcd"	, n,  0);
   checkn ("aBcd"	, "abc"		, n,  0);
   checkn ("abc"	, "aBc"		, n,  0);
   checkn ("abc"	, "aBd"		, n,  0);
   checkn ("abd"	, "aBc"		, n,  0);
   checkn ("abc"	, "aBcd"	, n,  0);
   checkn ("abcd"	, "aBc"		, n,  0);

   printf ("passed: %d, failed: %d\n", passed, failed);
   return 0;
}
