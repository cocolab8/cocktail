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
 * Descr:	Search a filename in a list of directories
 *              Main program to test it.
 * Note:        To run the self test rFsearD, you should adapt rFsearD.c
 *              - for Microsoft: set up the right path to the include
 *                directory
 *              - the routine 'test_time' may fail, since some
 *                files mentioned there are missing on your system. You
 *                may safely delete the corresponding lines in 'test_time'.
 * Author:	Dr. Juergen Vollmer <vollmer@cocolab.de>
 * Id: rFsearD.c,v 1.36 2009/08/03 15:25:58 vollmer Exp $
 */

# include <stdio.h>
# include <sys/stat.h>
# include <assert.h>
# include <stdlib.h>

# include "rString.h"
# include "rMemory.h"

# include "rFsearch.h"
# include "rTime.h"

# ifdef rFsearch_MICROSOFT
# include <time.h>
# define StepTime() (long) time(NULL)
# endif

# ifdef rFsearch_MICROSOFT
  # if  _MSC_VER == 1100
    # define C_INCLUDE_DIR  "C:\\Programme\\DevStudio\\VC\\include\\"
    # define C_INCLUDE_DIR2 "C:\\PROGRAMME\\DevStudio\\vc\\INCLUDE\\"
    # define C_INCLUDE_DIR3 "C:\\Programme\\DevStudio\\VC\\crt\\src\\"
  # endif
  # if  _MSC_VER == 1400
    # define C_INCLUDE_DIR  "C:\\Programme\\Microsoft Visual Studio 8\\VC\\include\\"
    # define C_INCLUDE_DIR2 "C:\\PROGRAMME\\Microsoft Visual Studio 8\\vc\\INCLUDE\\"
    # define C_INCLUDE_DIR3 "C:\\Programme\\Microsoft Visual Studio 8\\VC\\include\\"
  # endif
# define STRCMP(s1,s2) _stricmp(s1,s2)
# else
# define C_INCLUDE_DIR  "/usr/include/"
# define C_INCLUDE_DIR2 "/USR/INCLUDE/"
# define C_INCLUDE_DIR3 "/usr/include/bits/"
# define STRCMP(s1,s2) strcmp(s1,s2)
# endif

# ifdef rFsearch_UNIX
# define MAX_TESTS 100
# endif
# ifdef rFsearch_MICROSOFT
# define MAX_TESTS 10
# endif

# undef NDEBUG
# define ASSERT(x) assert (x)

# define ASSERT_TIME(x) if (x){;} /* just to avoid warnings
				   * "value computed is not used"
				   */
/* If you want to check the files in the routine test_time, use:
# define ASSERT_TIME(x) assert(x)
*/

# define check(s1,s2) {char *SS1 = (s1); char *SS2 = (s2); 	        \
                       if (SS1 != SS2) {                                \
                       if (SS1 == NULL || 				\
			   SS2 == NULL ||				\
                           STRCMP (SS1, SS2) != 0) {      		\
                          fprintf (stderr,                              \
				   "\nERROR line %d: `%s' != `%s'\n\n", \
				   __LINE__, SS1?SS1:"", SS2?SS2:"");  	\
                          abort();				        \
		       }}}
# if defined (rFsearch_UNIX) || defined (rFsearch_MICROSOFT)
  /*          *************              ******************          */
static char dirsep[2];

static void
test_dir_separator (void)
{
  char name[255];
  if (rFsearchShowDebug)  printf ("=======================================\n");
  printf ("** test rReplaceDirSeparator\n");
  sprintf (name, "/foo/bar\\foo\\bar%cbarzel", rDirSeparator);
  rReplaceDirSeparator (name);
# ifdef rFsearch_MICROSOFT
  check (name, "\\foo\\bar\\foo\\bar\\barzel");
# else
  check (name, "/foo/bar/foo/bar/barzel");
# endif
}

static void
test_file_readable (void)
{
  if (rFsearchShowDebug)  printf ("=======================================\n");
  printf ("** test rFileIsReadable\n");
  ASSERT (rFileIsReadable ("NO-SUCH-FILE")          == rfalse);
  ASSERT (rFileIsReadable ("READABLE")              == rtrue);

# ifdef rFsearch_MICROSOFT
  /* NOT-READABLE-* exists, but we can not make it unreadable */
#else
  ASSERT (rFileIsReadable ("NOT-READABLE")          == rfalse);
  ASSERT (rFileIsReadable ("NOT-READABLE-LINK")     == rfalse);
# endif
  ASSERT (rFileIsReadable ("READABLE-LINK")         == rtrue);
  ASSERT (rFileIsReadable ("DIR")                   == rfalse);
  ASSERT (rFileIsReadable ("NO-LINK1")              == rfalse);
  ASSERT (rFileIsReadable ("NO-LINK2")              == rfalse);

# ifdef rFsearch_HAVE_DIR_ACCESS
  ASSERT (rDirIsReadable ("DIR")                    == rtrue);
  ASSERT (rDirIsReadable ("READABLE")               == rfalse);
# endif

  ASSERT (rDirOrFileExists ("DIR")                  == rtrue);
  ASSERT (rDirOrFileExists ("READABLE")             == rtrue);
  ASSERT (rDirOrFileExists ("NOT-READABLE")         == rtrue);
  ASSERT (rDirOrFileExists ("NO-LINK1")             == rfalse);
  ASSERT (rDirOrFileExists ("NO-SUCH-FILE")         == rfalse);
}

# ifdef rFsearch_MICROSOFT

static void
test_drive_letters (void)
{
  char buf[255];
  char dir[255];
  char base[255];

  Begin_rFsearch  (rtrue);
  if (rFsearchShowDebug)  printf ("=======================================\n");
  printf ("** test_drive_letters\n");

  ASSERT (rDirOrFileExists ("C:\\temp")             == rtrue);
  ASSERT (rDirOrFileExists ("C:\\temp\\abc")        == rtrue);
  ASSERT (rDirIsReadable   ("C:\\temp")             == rtrue);
  ASSERT (rFileIsReadable  ("C:\\temp\\abc")        == rtrue);

  ASSERT (rDirOrFileExists ("C:/temp")              == rtrue);
  ASSERT (rDirOrFileExists ("C:/temp/abc")          == rtrue);
  ASSERT (rDirIsReadable   ("C:/temp")              == rtrue);
  ASSERT (rFileIsReadable  ("C:/temp/abc")          == rtrue);

  ASSERT (rDirOrFileExists ("C:/FooBar/Tazel/Wurm") == rfalse);
  ASSERT (rDirIsReadable   ("C:/FooBar/Tazel/Wurm") == rfalse);
  ASSERT (rDirIsReadable   ("C:/FooBar/Tazel/Wurm") == rfalse);

  check (rDirName ("C:",           buf), "C:");
  check (rDirName ("C:foo",        buf), "C:");
  check (rDirName ("C:foo/",       buf), "C:");
  check (rDirName ("C:foo/bar",    buf), "C:foo");
  check (rDirName ("C:foo/bar/",   buf), "C:foo");
  check (rDirName ("C:\\",         buf), "C:");
  check (rDirName ("C:/",          buf), "C:");
  check (rDirName ("C:/foo",       buf), "C:");
  check (rDirName ("C:/foo/",      buf), "C:");
  check (rDirName ("C:/foo/bar",   buf), "C:\\foo");
  check (rDirName ("C:/foo/bar/",  buf), "C:\\foo");
  check (rDirName ("C:/foo/bar//", buf), "C:\\foo");

  check (rBaseName ("C:",              buf), "");
  check (rBaseName ("C:foo",           buf), "foo");
  check (rBaseName ("C:foo/",          buf), "foo");
  check (rBaseName ("C:foo/bar",       buf), "bar");
  check (rBaseName ("C:\\",            buf), "");
  check (rBaseName ("C:/",             buf), "");
  check (rBaseName ("C:/foo",          buf), "foo");
  check (rBaseName ("C:/foo/",         buf), "foo");
  check (rBaseName ("C:/foo/bar",      buf), "bar");
  check (rBaseName ("C:/foo/bar/",     buf), "bar");
  check (rBaseName ("C:/foo/bar//",    buf), "bar");
  check (rBaseName ("C:/foo/bar.ext",  buf), "bar.ext");

  rDirBaseName ("C:",       dir, base); check (dir, "C:"); check (base, "");
  rDirBaseName ("C:foo",    dir, base); check (dir, "C:"); check (base, "foo");
  rDirBaseName ("C:foo/",   dir, base); check (dir, "C:"); check (base, "foo");
  rDirBaseName ("C:foo//",  dir, base); check (dir, "C:"); check (base, "foo");
  rDirBaseName ("C:foo/bar",dir, base); check (dir, "C:foo");
                                        check (base, "bar");
  rDirBaseName ("C:\\",     dir, base); check (dir, "C:"); check (base, "");
  rDirBaseName ("C:\\foo",  dir, base); check (dir, "C:"); check (base, "foo");
  rDirBaseName ("C:\\foo/", dir, base); check (dir, "C:"); check (base, "foo");
  rDirBaseName ("C:\\foo//",dir, base); check (dir, "C:"); check (base, "foo");
  rDirBaseName ("C:/foo/bar",dir, base);check (dir, "C:\\foo");
                                        check (base, "bar");
  check (rFindFile ("C:/temp/abc"),   "C:\\temp\\abc");
  check (rFindFile ("C:\\temp\\abc"), "C:\\temp\\abc");
  if (rDirIsReadable ("C:WINNT")) {
    check (rFindFile ("C:\\WINNT\\notepad.exe"), "C:\\WINNT\\NOTEPAD.EXE");
  }

  rAddDir      (".",  0, rtrue);
  rAddDir      ("C:", 0, rtrue);

  rReadAllDirs ();

  /*  check (rFindFile ("C:autoexec.bat"),   "C:AUTOEXEC.BAT");*/
  check (rFindFile ("C:/autoexec.bat"),  "C:\\AUTOEXEC.BAT");
  check (rFindFile ("C:\\autoexec.bat"), "C:\\AUTOEXEC.BAT");

  if (rDirIsReadable ("C:WINNT")) {
    check (rFindFile ("C:\\WINNT\\notepad.exe"), "C:\\WINNT\\NOTEPAD.EXE");
  }

  check (rFindFile ("C:\\AUTOEXEC.BAT"),    "C:\\AUTOEXEC.BAT");

  /* use the directory search */
  check (rFindFile ("AUTOEXEC.BAT"),    "C:\\AUTOEXEC.BAT");

  if (rDirIsReadable ("C:WINNT")) {
    check (rFindFile ("WINNT\\notepad.exe"), "C:\\WINNT\\NOTEPAD.EXE");
  }

  Close_rFsearch ();
}
# endif


static void
test_dir_name (void)
{
  char buf[255];

  if (rFsearchShowDebug)  printf ("=======================================\n");
  printf ("** test rDirName\n");

  check (rDirName ("/",        buf), dirsep); /* "/" */
  check (rDirName ("/foo",     buf), dirsep); /* "/" */
  check (rDirName ("\\foo\\",  buf), dirsep); /* "/" */
  check (rDirName ("/foo//",   buf), dirsep); /* "/" */

  check (rDirName ("",      0), ".");
  check (rDirName ("foo",   0), ".");
  check (rDirName ("foo/",  0), ".");
  check (rDirName ("foo//", 0), ".");

  check (rDirName ("/",         0), dirsep);
  check (rDirName ("foo/bar",   0), "foo");
  check (rDirName ("foo/bar//", 0), "foo");

  strcpy   (buf, "foo/bar");    rDirName (buf, buf); check (buf, "foo");
  strcpy   (buf, "foo\\bar/");  rDirName (buf, buf); check (buf, "foo");
  strcpy   (buf, "foo/bar//");  rDirName (buf, buf); check (buf, "foo");
}

static void
test_base_name (void)
{
  char buf[255];

  if (rFsearchShowDebug)  printf ("=======================================\n");
  printf ("** test rBaseName\n");

  check (rBaseName ("/",      buf), "");
  check (rBaseName ("/foo",   buf), "foo");
  check (rBaseName ("/foo/",  buf), "foo");
  check (rBaseName ("/foo//", buf), "foo");

  check (rBaseName ("",      0), "");
  check (rBaseName ("foo",   0), "foo");
  check (rBaseName ("foo/",  0), "foo");
  check (rBaseName ("foo//", 0), "foo");

  check (rBaseName ("/",      0), "");
  check (rBaseName ("/foo",   0), "foo");
  check (rBaseName ("/foo/",  0), "foo");
  check (rBaseName ("/foo//", 0), "foo");

  strcpy    (buf, "foo/bar");   rBaseName (buf, buf); check (buf, "bar");
  strcpy    (buf, "foo/bar/");  rBaseName (buf, buf); check (buf, "bar");
  strcpy    (buf, "foo/bar//"); rBaseName (buf, buf); check (buf, "bar");
}

static void
test_dir_base_name (void)
{
  char dir[255];
  char base[255];

  if (rFsearchShowDebug)  printf ("=======================================\n");
  printf ("** test rDirBaseName\n");

  rDirBaseName ("/", dir, base);	check (dir,  dirsep) ; /* "/" */
                                  	check (base, ""    ) ;

  rDirBaseName ("/foo", dir, base);	check (dir,  dirsep ); /* "/" */
				        check (base, "foo"  );

  rDirBaseName ("/foo/", dir, base);	check (dir,  dirsep); /* "/" */
					check (base, "foo" );

  rDirBaseName ("/foo//", dir, base);	check (dir,  dirsep); /* "/" */
				        check (base, "foo" );

  rDirBaseName ("", dir, base);		check (dir,  "." ) ;
                                  	check (base, ""  ) ;

  rDirBaseName ("foo", dir, base);	check (dir,  "."  );
				        check (base, "foo");

  rDirBaseName ("foo/", dir, base);	check (dir,  "."  );
					check (base, "foo");

  rDirBaseName ("foo//", dir, base);	check (dir,  "."  );
				        check (base, "foo");

  rDirBaseName ("foo/bar", dir, base);	check (dir,  "foo");
				        check (base, "bar");

  rDirBaseName ("foo/bar/", dir, base);	check (dir,  "foo");
					check (base, "bar");

  rDirBaseName ("foo/bar//", dir, base);check (dir,  "foo");
  					check (base, "bar");

}

static void
test_add_delete (void)
{
  Begin_rFsearch  (rtrue);

  if (rFsearchShowDebug)  printf ("=======================================\n");
  printf ("** test rAddDir, rDeleteDirs, rDeleteAllDirs\n");

  rAddDir ("a/3", 0, rtrue);
  rAddDir ("a/4", 0, rtrue);
  rAddDir ("a/5", 0, rtrue);
  rAddDir ("b/2", 1, rfalse);
  rAddDir ("b/1", 1, rfalse);
  rAddDir ("c/6", 2, rtrue);
  rAddDir ("c/7", 3, rtrue);
  if (rFsearchShowDebug) Print_rFsearch(stdout);

  rDeleteDirs (0);
  if (rFsearchShowDebug) Print_rFsearch(stdout);

  rDeleteDirs (3);
  if (rFsearchShowDebug) Print_rFsearch(stdout);

  rDeleteDirs (1);
  if (rFsearchShowDebug) Print_rFsearch(stdout);

  rDeleteDirs (2);
  if (rFsearchShowDebug) Print_rFsearch(stdout);

  rAddDir ("a/1", 0, rtrue);
  rAddDir ("a/2", 0, rtrue);
  rAddDir ("a/3", 0, rtrue);
  rAddDir ("b/1", 1, rfalse);
  rAddDir ("b/2", 1, rfalse);
  rAddDir ("a/4", 2, rtrue);
  rAddDir ("a/5", 3, rtrue);
  if (rFsearchShowDebug) Print_rFsearch(stdout);

  rDeleteAllDirs();
  if (rFsearchShowDebug) Print_rFsearch(stdout);

  Close_rFsearch ();
}

static void
test_auto_cache (void)
{
  char res[1024];
  Begin_rFsearch  (rtrue);
  if (rFsearchShowDebug)  printf ("=======================================\n");
  printf ("** test rFindFile: auto-cache of directories\n");

  rAddDir      (".",           0, rtrue);
  rAddDir      (C_INCLUDE_DIR, 0, rtrue);
  rReadAllDirs ();

  if (rFsearchShowDebug) Print_rFsearch(stdout);
  sprintf (res, "%s%s", C_INCLUDE_DIR, "string.h");
  rReplaceDirSeparator (res);

  check (rFindFile ("string.h"),                res);
  check (rFsearchUsedSearchPath(), C_INCLUDE_DIR);

  sprintf (res, "%s%s", C_INCLUDE_DIR, "sys/stat.h");
  rReplaceDirSeparator (res);
  check (rFindFile ("sys/stat.h"),              res);
  check (rFsearchUsedSearchPath(), C_INCLUDE_DIR);

  sprintf (res, "%s%s", C_INCLUDE_DIR, "../include/sys/stat.h");
  rReplaceDirSeparator (res);
  check (rFindFile ("../include/sys/stat.h"), res);
  check (rFsearchUsedSearchPath(), C_INCLUDE_DIR);

  if (rFsearchShowDebug) Print_rFsearch(stdout);
  Close_rFsearch ();
}

static void
test_no_cache (void)
{
  char res[1024];
  Begin_rFsearch  (rtrue);
  if (rFsearchShowDebug)  printf ("=======================================\n");
  printf ("** test rFindFile: no-cache of directories\n");

  rAddDir      (".",           0, rtrue);
  rAddDir      (C_INCLUDE_DIR, 0, rtrue);

  if (rFsearchShowDebug) Print_rFsearch(stdout);
  sprintf (res, "%s%s", C_INCLUDE_DIR, "string.h");
  rReplaceDirSeparator (res);
  check (rFindFile ("string.h"),                res);
  check (rFsearchUsedSearchPath(), C_INCLUDE_DIR);

  sprintf (res, "%s%s", C_INCLUDE_DIR, "sys/stat.h");
  rReplaceDirSeparator (res);
  check (rFindFile ("sys/stat.h"),              res);
  check (rFsearchUsedSearchPath(), C_INCLUDE_DIR);

  sprintf (res, "%s%s", C_INCLUDE_DIR, "../include/sys/stat.h");
  rReplaceDirSeparator (res);
  check (rFindFile ("../include/sys/stat.h"), res);
  check (rFsearchUsedSearchPath(), C_INCLUDE_DIR);

  if (rFsearchShowDebug) Print_rFsearch(stdout);
  Close_rFsearch ();
}

static void
test_find_ext (rbool cache_dirs)
{
  Begin_rFsearch (rtrue);
  if (rFsearchShowDebug) printf ("=======================================\n");
  printf ("** test find file with extension, cache = %s\n",
	  cache_dirs ? "true" : "false");
  rDeleteAllDirs();
  rDeleteExtensions ();

# ifdef rFsearch_UNIX
  rAddExtension (".o");
# endif

  rAddExtension (".c");
  rAddExtension (".h");
  if (rFsearchShowDebug) Print_rFsearch(stdout);

  if (rFindFile ("rFsearD")) {
    /* somtimes this file is renamed to rFsearD.cxx, check it only for the .c
     * case:
     */
    check (rFindFile ("rFsearD"),  "rFsearD.c");
  }
  check (rFindFile ("rFsearch"), "rFsearch.h");
  check (rFindFile ("Makefile"), NULL);

  rDeleteExtensions();
  rAddExtension ("");
  rAddExtension (".h");
  rAddExtension (".c");
# ifdef rFsearch_UNIX
  rAddExtension (".o");
# endif
  if (rFsearchShowDebug) Print_rFsearch(stdout);
# ifdef rFsearch_UNIX
  /* find the .of file but not the executable */
  check (rFindFile ("rFsearD"),    "rFsearD.o");
  check (rFindFile ("rFsearch"),   "rFsearch.o");
  check (rFsearchUsedSearchPath(), "./");

# endif
  check (rFindFile ("Makefile"),   "Makefile");
  check (rFsearchUsedSearchPath(), "./");
  Close_rFsearch ();
}


static void
test_find_case_cache (rbool case_sensitive)
{
  char res[1024];
  Begin_rFsearch (case_sensitive);
  if (rFsearchShowDebug) printf ("=======================================\n");
  printf ("** test find file cache = true,  case = %s\n",
	  rGetCaseSensitive() ? "true" : "false");

  rAddDir (".", 0, rtrue);
  if (case_sensitive) {
    rAddDir (C_INCLUDE_DIR,  0, rtrue);
  } else {
# ifdef rFsearch_HAVE_DIR_ACCESS
    /* caching works only with HAVE_DIR_ACCESS, and the
     * the nice case insensitivty stuff works only with caching in its
     * generality
     */
    rAddDir (C_INCLUDE_DIR2, 0, rtrue);
# else
    /* in order to run this test suite propper, and since we do not have
     * caching, use only the "simple" case for case insensitivity:
     */
    rAddDir (C_INCLUDE_DIR,  0, rtrue);
# endif
  }
  rAddExtension (".h");
  rAddExtension ("");

  if (rFsearchShowDebug) Print_rFsearch(stdout);
  rReadAllDirs();
  if (rFsearchShowDebug) Print_rFsearch(stdout);


  if (case_sensitive) {
# ifndef rFsearch_MICROSOFT
    /* MS does not distinguish between small and capital letters, and
     * this file is present in capital (under UNIX)
     */
    check (rFindFile ("test2"),      NULL);
# endif
    sprintf (res, "%s%s", C_INCLUDE_DIR, "sys/stat.h");
    rReplaceDirSeparator (res);
    check (rFindFile ("sys/stat.h"), res);
    check (rFindFile ("sys/stat.h"), res);
  } else {
    check (rFindFile ("test2"),      "TEST2");

    sprintf (res, "%s%s", C_INCLUDE_DIR, "sys/stat.h");
    rReplaceDirSeparator (res);
    check (rFindFile ("Sys/Stat.h"), res);

# ifdef rFsearch_UNIX
    sprintf (res, "%s%s", C_INCLUDE_DIR, "X11/fonts/font.h");
    rReplaceDirSeparator (res);
    check (rFindFile ("X11/fonts/font.h"), res);
    check (rFindFile ("X11/FONTS/FONT.h"), res);
    check (rFindFile ("X11/fonts/FONT.h"), res);
    check (rFindFile ("X11/FONTS/font.h"), res);

    check (rFindFile ("x11/fonts/font.h"), res);
    check (rFindFile ("x11/FONTS/FONT.h"), res);
    check (rFindFile ("x11/fonts/FONT.h"), res);
    check (rFindFile ("x11/FONTS/font.h"), res);

    check (rFindFile ("X11\\fonts\\font.h"), res);
    check (rFindFile ("X11\\FONTS\\FONT.h"), res);
    check (rFindFile ("X11\\fonts\\FONT.h"), res);
    check (rFindFile ("X11\\FONTS\\font.h"), res);

    check (rFindFile ("x11\\fonts\\font.h"), res);
    check (rFindFile ("x11\\FONTS\\FONT.h"), res);
    check (rFindFile ("x11\\fonts\\FONT.h"), res);
    check (rFindFile ("x11\\FONTS\\font.h"), res);
# endif

  }
  check (rFindFile ("test1"),        "test1");

  if (rFsearchShowDebug) Print_rFsearch(stdout);
  Close_rFsearch ();
}

static void
test_find_case_no_cache (rbool case_sensitive)
{
  char res[1024];
  Begin_rFsearch (case_sensitive);
  if (rFsearchShowDebug) printf ("=======================================\n");
  printf ("** test find file cache = false, case = %s\n",
	  rGetCaseSensitive() ? "true" : "false");

  rDeleteExtensions ();
  rAddDir (".", 0, rtrue);
  rAddDir (C_INCLUDE_DIR,  0, rtrue);
  /* with out caching, can not handle:
   * rAddDir ("/Usr/Include", 0, rtrue);
  */
  rAddExtension (".h");
  rAddExtension ("");
  if (case_sensitive) {
# ifndef rFsearch_MICROSOFT
    /* MS does not distinguish between small and capital letters, and
     * these file is present in capital (under UNIX)
     */
    check (rFindFile ("test2"),      NULL);
    check (rFindFile ("test3"),      NULL);
# endif

    sprintf (res, "%s%s", C_INCLUDE_DIR, "sys/stat.h");
    rReplaceDirSeparator (res);
    check (rFindFile ("sys/stat.h"), res);
  } else {
    check (rFindFile ("test2"),      "TEST2");
    check (rFindFile ("test3"),      "Test3");
    sprintf (res, "%s%s", C_INCLUDE_DIR, "sys/stat.h");
    rReplaceDirSeparator (res);
    check (rFindFile ("Sys/Stat.h"), res);
  }
  check (rFindFile ("test1"),        "test1");
  sprintf (res, "%s%s", C_INCLUDE_DIR, "sys/stat.h");
  rReplaceDirSeparator (res);
  check (rFindFile ("sys/stat.h"), res);

  if (rFsearchShowDebug) Print_rFsearch(stdout);
  Close_rFsearch ();
}

# ifdef rFsearch_UNIX
static void
test_symbolic_links (void)
{
  if (rFsearchShowDebug) printf ("=======================================\n");
  printf ("** test symbolic links which have no target\n");


  /* caching */
  Begin_rFsearch (rtrue);
  rAddDir (".", 0, rtrue);
  rReadAllDirs();
  check (rFindFile ("NO-LINK3"), NULL);
  check (rFindFile ("NO-LINK3"), NULL);
  Close_rFsearch ();

  /* no caching */
  Begin_rFsearch (rtrue);
  check (rFindFile ("NO-LINK3"), NULL);
  check (rFindFile ("NO-LINK3"), NULL);
  check (rFindFile ("NO-LINK2"), NULL);
  Close_rFsearch ();
}
# endif

static void
test_dir_sets (void)
{
  char res[1024];
  if (rFsearchShowDebug) printf ("=======================================\n");
  printf ("** test directory sets\n");

  /* caching */
  Begin_rFsearch (rtrue);
  rAddDirSet (C_INCLUDE_DIR, 0, rtrue, 1);
  rAddDirSet (".",           0, rtrue, 2);
  rReadAllDirs();

  sprintf (res, "%s%s", C_INCLUDE_DIR, "string.h");
  rReplaceDirSeparator (res);
  check (rFindFileSet ("string.h", 0),  res);   /* all sets */
  check (rFindFileSet ("string.h", 1),  res);   /* set 1    */
  check (rFindFileSet ("string.h", 2),  NULL);  /* set 2    */

  check (rFindFileSet ("rFsearch.c", 0), "rFsearch.c");   /* all sets */
  check (rFindFileSet ("rFsearch.c", 1), NULL);           /* set 1    */
  check (rFindFileSet ("rFsearch.c", 2), "rFsearch.c");   /* set 2    */


  sprintf (res, "%s%s", C_INCLUDE_DIR, "sys/stat.h");
  rReplaceDirSeparator (res);
  check (rFindFileSet ("sys/stat.h", 0),  res);   /* all sets */
  check (rFindFileSet ("sys/stat.h", 1),  res);   /* set 1    */
  check (rFindFileSet ("sys/stat.h", 2),  NULL);  /* set 2    */

  Close_rFsearch ();
}

static void test_set_search_path (void)
{
  char res[1024];
  if (rFsearchShowDebug) printf ("=======================================\n");
  printf ("** test setting start point of the search path\n");

  /* caching */
  Begin_rFsearch (rtrue);
  rAddDir (C_INCLUDE_DIR,  0, rtrue);
  rAddDir (C_INCLUDE_DIR3, 0, rtrue);

  /* Assumption: stdio.h is contained in
   *    /usr/include/
   * and in
   *    /usr/include/bits
   * If this is not true on your system choose any other file which is
   * contained in two directories
   */

  /* search all include dirs */
  sprintf (res, "%s%s", C_INCLUDE_DIR, "stdio.h");
  rReplaceDirSeparator (res);
  check (rFindFileSet ("stdio.h", 0),  res);

  /* search starting from C_INCLUDE_DIR3 */
  check (rSetSearchPathStart (C_INCLUDE_DIR), C_INCLUDE_DIR3);
  sprintf (res, "%s%s", C_INCLUDE_DIR3, "stdio.h");
  rReplaceDirSeparator (res);
  check (rFindFileSet ("stdio.h", 0),  res);

  /* no further include path */
  check (rSetSearchPathStart (C_INCLUDE_DIR3), NULL);

  /* and start agin with the first */
  check (rSetSearchPathStart (NULL), C_INCLUDE_DIR);
  sprintf (res, "%s%s", C_INCLUDE_DIR, "stdio.h");
  rReplaceDirSeparator (res);
  check (rFindFileSet ("stdio.h", 0),  res);

  Close_rFsearch ();
}

static void
test_time (rbool cache_dirs, rbool case_sensitive)
{
  int i;
  int count = 0;
  long t = StepTime ();
  Begin_rFsearch (case_sensitive);
  rDeleteAllDirs    ();
  rDeleteExtensions ();

  if (rFsearchShowDebug) printf ("=======================================\n");
  printf ("** test timing:  cache = %s case = %s",
	  cache_dirs?     "true " : "false",
	  case_sensitive? "true " : "false");
# ifdef rFsearch_UNIX
  rAddDir ("/usr/include/UNIX/",  0, rtrue);
  rAddDir ("/usr/include/asm",    0, rtrue);
# endif
  rAddDir (C_INCLUDE_DIR,         0, rtrue);
  rAddDir (".",                   0, rtrue);

  rAddExtension (".h");
  rAddExtension ("");

  if (cache_dirs) rReadAllDirs ();
  if (rFsearchShowDebug) Print_rFsearch(stdout);

  fprintf (stdout, " "); fflush (stdout);
  for (i = 1; i <= MAX_TESTS; i++) {
    /* fprintf (stdout, "\n* %d *+*+********************************\n", i);*/
    fprintf (stdout, "%c\b", (i%2) ? '-' : '|');  fflush (stdout);
    count ++;  rFindFile ("abc");
    count ++;  rFindFile ("keyboard.h");
    count ++;  rFindFile ("keyboard");
    count ++;  rFindFile ("nfsd");
    count ++;  rFindFile ("nfsd/NFSD");
    count ++;  rFindFile ("watchdog");
    count ++;  rFindFile ("sunrpc/svc.h");
    count ++;  rFindFile ("rFsearch.h");
    count ++;  rFindFile ("gnu-versions.h");
    count ++;  rFindFile ("test1");
    count ++;  rFindFile ("test2");

# ifdef rFsearch_MICROSOFT
    /* all of /usr/include for Microsoft */
    count++; ASSERT_TIME (rFindFile ("ACCCTRL.H"));
    count++; ASSERT_TIME (rFindFile ("ACLAPI.H"));
    count++; ASSERT_TIME (rFindFile ("ACTIVSCP.H"));
    count++; ASSERT_TIME (rFindFile ("ALGORITHM"));
    count++; ASSERT_TIME (rFindFile ("ALPHAOPS.H"));
    count++; ASSERT_TIME (rFindFile ("ASPTLB.H"));
    count++; ASSERT_TIME (rFindFile ("ASSERT_TIME.H"));
    count++; ASSERT_TIME (rFindFile ("ATALKWSH.H"));
    count++; ASSERT_TIME (rFindFile ("BASETYPS.H"));
    count++; ASSERT_TIME (rFindFile ("BITSET"));
    count++; ASSERT_TIME (rFindFile ("CALLCONV.INC"));
    count++; ASSERT_TIME (rFindFile ("CASSERT_TIME"));
    count++; ASSERT_TIME (rFindFile ("CCTYPE"));
    count++; ASSERT_TIME (rFindFile ("CDERR.H"));
    count++; ASSERT_TIME (rFindFile ("CERRNO"));
    count++; ASSERT_TIME (rFindFile ("CFLOAT"));
    count++; ASSERT_TIME (rFindFile ("CGUID.H"));
    count++; ASSERT_TIME (rFindFile ("CISO646"));
    count++; ASSERT_TIME (rFindFile ("CLIMITS"));
    count++; ASSERT_TIME (rFindFile ("CLOCALE"));
    count++; ASSERT_TIME (rFindFile ("CMATH"));
    count++; ASSERT_TIME (rFindFile ("COLOR.DLG"));
    count++; ASSERT_TIME (rFindFile ("COLORDLG.H"));
    count++; ASSERT_TIME (rFindFile ("COMCAT.H"));
    count++; ASSERT_TIME (rFindFile ("COMCAT.IDL"));
    count++; ASSERT_TIME (rFindFile ("COMDEF.H"));
    count++; ASSERT_TIME (rFindFile ("COMIP.H"));
    count++; ASSERT_TIME (rFindFile ("COMMCTRL.H"));
    count++; ASSERT_TIME (rFindFile ("COMMDLG.H"));
    count++; ASSERT_TIME (rFindFile ("COMPLEX"));
    count++; ASSERT_TIME (rFindFile ("COMPOBJ.H"));
    count++; ASSERT_TIME (rFindFile ("COMUTIL.H"));
    count++; ASSERT_TIME (rFindFile ("CONIO.H"));
    count++; ASSERT_TIME (rFindFile ("CPL.H"));
    count++; ASSERT_TIME (rFindFile ("CPLEXT.H"));
    count++; ASSERT_TIME (rFindFile ("CRTDBG.H"));
    count++; ASSERT_TIME (rFindFile ("CSETJMP"));
    count++; ASSERT_TIME (rFindFile ("CSIGNAL"));
    count++; ASSERT_TIME (rFindFile ("CSTDARG"));
    count++; ASSERT_TIME (rFindFile ("CSTDDEF"));
    count++; ASSERT_TIME (rFindFile ("CSTDIO"));
    count++; ASSERT_TIME (rFindFile ("CSTDLIB"));
    count++; ASSERT_TIME (rFindFile ("CSTRING"));
    count++; ASSERT_TIME (rFindFile ("CTIME"));
    count++; ASSERT_TIME (rFindFile ("CTL3D.H"));
    count++; ASSERT_TIME (rFindFile ("CTYPE.H"));
    count++; ASSERT_TIME (rFindFile ("CUSTCNTL.H"));
    count++; ASSERT_TIME (rFindFile ("CUSTOMAW.H"));
    count++; ASSERT_TIME (rFindFile ("CWCHAR"));
    count++; ASSERT_TIME (rFindFile ("CWCTYPE"));
    count++; ASSERT_TIME (rFindFile ("D3D.H"));
    count++; ASSERT_TIME (rFindFile ("D3DCAPS.H"));
    count++; ASSERT_TIME (rFindFile ("D3DRM.H"));
    count++; ASSERT_TIME (rFindFile ("D3DRMDEF.H"));
    count++; ASSERT_TIME (rFindFile ("D3DRMOBJ.H"));
    count++; ASSERT_TIME (rFindFile ("D3DRMWIN.H"));
    count++; ASSERT_TIME (rFindFile ("D3DTYPES.H"));
    count++; ASSERT_TIME (rFindFile ("DAOGETRW.H"));
    count++; ASSERT_TIME (rFindFile ("DBDAOERR.H"));
    count++; ASSERT_TIME (rFindFile ("DBDAOID.H"));
    count++; ASSERT_TIME (rFindFile ("DBDAOINT.H"));
    count++; ASSERT_TIME (rFindFile ("DBT.H"));
    count++; ASSERT_TIME (rFindFile ("DDE.H"));
    count++; ASSERT_TIME (rFindFile ("DDEML.H"));
    count++; ASSERT_TIME (rFindFile ("DDRAW.H"));
    count++; ASSERT_TIME (rFindFile ("DEQUE"));
    count++; ASSERT_TIME (rFindFile ("DIGITALV.H"));
    count++; ASSERT_TIME (rFindFile ("DIRECT.H"));
    count++; ASSERT_TIME (rFindFile ("DISPATCH.H"));
    count++; ASSERT_TIME (rFindFile ("DISPDIB.H"));
    count++; ASSERT_TIME (rFindFile ("DLCAPI.H"));
    count++; ASSERT_TIME (rFindFile ("DLGS.H"));
    count++; ASSERT_TIME (rFindFile ("DOCOBJ.H"));
    count++; ASSERT_TIME (rFindFile ("DOCOBJ.IDL"));
    count++; ASSERT_TIME (rFindFile ("DOS.H"));
    count++; ASSERT_TIME (rFindFile ("DPLAY.H"));
    count++; ASSERT_TIME (rFindFile ("DRIVINIT.H"));
    count++; ASSERT_TIME (rFindFile ("DSOUND.H"));
    count++; ASSERT_TIME (rFindFile ("DVOBJ.H"));
    count++; ASSERT_TIME (rFindFile ("EH.H"));
    count++; ASSERT_TIME (rFindFile ("ERRNO.H"));
    count++; ASSERT_TIME (rFindFile ("ERROR.H"));
    count++; ASSERT_TIME (rFindFile ("EXCEPTION"));
    count++; ASSERT_TIME (rFindFile ("EXCHEXT.H"));
    count++; ASSERT_TIME (rFindFile ("EXCHFORM.H"));
    count++; ASSERT_TIME (rFindFile ("EXCPT.H"));
    count++; ASSERT_TIME (rFindFile ("EXDISP.H"));
    count++; ASSERT_TIME (rFindFile ("EXDISP.ODL"));
    count++; ASSERT_TIME (rFindFile ("EXDISPID.H"));
    count++; ASSERT_TIME (rFindFile ("FCNTL.H"));
    count++; ASSERT_TIME (rFindFile ("FILEOPEN.DLG"));
    count++; ASSERT_TIME (rFindFile ("FINDTEXT.DLG"));
    count++; ASSERT_TIME (rFindFile ("FLOAT.H"));
    count++; ASSERT_TIME (rFindFile ("FONT.DLG"));
    count++; ASSERT_TIME (rFindFile ("FPIEEE.H"));
    count++; ASSERT_TIME (rFindFile ("FSTREAM"));
    count++; ASSERT_TIME (rFindFile ("FSTREAM.H"));
    count++; ASSERT_TIME (rFindFile ("FTSIFACE.H"));
    count++; ASSERT_TIME (rFindFile ("FUNCTIONAL"));
    count++; ASSERT_TIME (rFindFile ("HLIFACE.H"));
    count++; ASSERT_TIME (rFindFile ("HLIFACE.IDL"));
    count++; ASSERT_TIME (rFindFile ("HLINK.H"));
    count++; ASSERT_TIME (rFindFile ("HLINK.IDL"));
    count++; ASSERT_TIME (rFindFile ("HTTPEXT.H"));
    count++; ASSERT_TIME (rFindFile ("HTTPFILT.H"));
    count++; ASSERT_TIME (rFindFile ("IDF.H"));
    count++; ASSERT_TIME (rFindFile ("IDISPIDS.H"));
    count++; ASSERT_TIME (rFindFile ("IMAGEHLP.H"));
    count++; ASSERT_TIME (rFindFile ("IME.H"));
    count++; ASSERT_TIME (rFindFile ("IMESSAGE.H"));
    count++; ASSERT_TIME (rFindFile ("IMM.H"));
    count++; ASSERT_TIME (rFindFile ("INETSDK.H"));
    count++; ASSERT_TIME (rFindFile ("INETSDK.IDL"));
    count++; ASSERT_TIME (rFindFile ("INETSDK.MAK"));
    count++; ASSERT_TIME (rFindFile ("INITGUID.H"));
    count++; ASSERT_TIME (rFindFile ("INITOID.H"));
    count++; ASSERT_TIME (rFindFile ("INTSHCUT.H"));
    count++; ASSERT_TIME (rFindFile ("IO.H"));
    count++; ASSERT_TIME (rFindFile ("IOMANIP"));
    count++; ASSERT_TIME (rFindFile ("IOMANIP.H"));
    count++; ASSERT_TIME (rFindFile ("IOS"));
    count++; ASSERT_TIME (rFindFile ("IOS.H"));
    count++; ASSERT_TIME (rFindFile ("IOSFWD"));
    count++; ASSERT_TIME (rFindFile ("IOSTREAM"));
    count++; ASSERT_TIME (rFindFile ("IOSTREAM.H"));
    count++; ASSERT_TIME (rFindFile ("ISGUIDS.H"));
    count++; ASSERT_TIME (rFindFile ("ISO646.H"));
    count++; ASSERT_TIME (rFindFile ("ISTREAM"));
    count++; ASSERT_TIME (rFindFile ("ISTREAM.H"));
    count++; ASSERT_TIME (rFindFile ("ITERATOR"));
    count++; ASSERT_TIME (rFindFile ("LARGEINT.H"));
    count++; ASSERT_TIME (rFindFile ("LIMITS"));
    count++; ASSERT_TIME (rFindFile ("LIMITS.H"));
    count++; ASSERT_TIME (rFindFile ("LIST"));
    count++; ASSERT_TIME (rFindFile ("LISTING.INC"));
    count++; ASSERT_TIME (rFindFile ("LM.H"));
    count++; ASSERT_TIME (rFindFile ("LMACCESS.H"));
    count++; ASSERT_TIME (rFindFile ("LMALERT.H"));
    count++; ASSERT_TIME (rFindFile ("LMAPIBUF.H"));
    count++; ASSERT_TIME (rFindFile ("LMAT.H"));
    count++; ASSERT_TIME (rFindFile ("LMAUDIT.H"));
    count++; ASSERT_TIME (rFindFile ("LMBROWSR.H"));
    count++; ASSERT_TIME (rFindFile ("LMCHDEV.H"));
    count++; ASSERT_TIME (rFindFile ("LMCONFIG.H"));
    count++; ASSERT_TIME (rFindFile ("LMCONS.H"));
    count++; ASSERT_TIME (rFindFile ("LMERR.H"));
    count++; ASSERT_TIME (rFindFile ("LMERRLOG.H"));
    count++; ASSERT_TIME (rFindFile ("LMMSG.H"));
    count++; ASSERT_TIME (rFindFile ("LMREMUTL.H"));
    count++; ASSERT_TIME (rFindFile ("LMREPL.H"));
    count++; ASSERT_TIME (rFindFile ("LMSERVER.H"));
    count++; ASSERT_TIME (rFindFile ("LMSHARE.H"));
    count++; ASSERT_TIME (rFindFile ("LMSNAME.H"));
    count++; ASSERT_TIME (rFindFile ("LMSTATS.H"));
    count++; ASSERT_TIME (rFindFile ("LMSVC.H"));
    count++; ASSERT_TIME (rFindFile ("LMUSE.H"));
    count++; ASSERT_TIME (rFindFile ("LMUSEFLG.H"));
    count++; ASSERT_TIME (rFindFile ("LMWKSTA.H"));
    count++; ASSERT_TIME (rFindFile ("LOADPERF.H"));
    count++; ASSERT_TIME (rFindFile ("LOCALE"));
    count++; ASSERT_TIME (rFindFile ("LOCALE.H"));
    count++; ASSERT_TIME (rFindFile ("LSAPI.H"));
    count++; ASSERT_TIME (rFindFile ("LZEXPAND.H"));
    count++; ASSERT_TIME (rFindFile ("MALLOC.H"));
    count++; ASSERT_TIME (rFindFile ("MAP"));
    count++; ASSERT_TIME (rFindFile ("MAPI.H"));
    count++; ASSERT_TIME (rFindFile ("MAPICODE.H"));
    count++; ASSERT_TIME (rFindFile ("MAPIDBG.H"));
    count++; ASSERT_TIME (rFindFile ("MAPIDEFS.H"));
    count++; ASSERT_TIME (rFindFile ("MAPIFORM.H"));
    count++; ASSERT_TIME (rFindFile ("MAPIGUID.H"));
    count++; ASSERT_TIME (rFindFile ("MAPIHOOK.H"));
    count++; ASSERT_TIME (rFindFile ("MAPINLS.H"));
    count++; ASSERT_TIME (rFindFile ("MAPIOID.H"));
    count++; ASSERT_TIME (rFindFile ("MAPISPI.H"));
    count++; ASSERT_TIME (rFindFile ("MAPITAGS.H"));
    count++; ASSERT_TIME (rFindFile ("MAPIUTIL.H"));
    count++; ASSERT_TIME (rFindFile ("MAPIVAL.H"));
    count++; ASSERT_TIME (rFindFile ("MAPIVB.BAS"));
    count++; ASSERT_TIME (rFindFile ("MAPIWIN.H"));
    count++; ASSERT_TIME (rFindFile ("MAPIWZ.H"));
    count++; ASSERT_TIME (rFindFile ("MAPIX.H"));
    count++; ASSERT_TIME (rFindFile ("MATH.H"));
    count++; ASSERT_TIME (rFindFile ("MBCTYPE.H"));
    count++; ASSERT_TIME (rFindFile ("MBSTRING.H"));
    count++; ASSERT_TIME (rFindFile ("MCIAVI.H"));
    count++; ASSERT_TIME (rFindFile ("MCX.H"));
    count++; ASSERT_TIME (rFindFile ("MEMORY"));
    count++; ASSERT_TIME (rFindFile ("MEMORY.H"));
    count++; ASSERT_TIME (rFindFile ("MGMTAPI.H"));
    count++; ASSERT_TIME (rFindFile ("MIDLES.H"));
    count++; ASSERT_TIME (rFindFile ("MINMAX.H"));
    count++; ASSERT_TIME (rFindFile ("MMREG.H"));
    count++; ASSERT_TIME (rFindFile ("MMSYSTEM.H"));
    count++; ASSERT_TIME (rFindFile ("MONIKER.H"));
    count++; ASSERT_TIME (rFindFile ("MSACM.H"));
    count++; ASSERT_TIME (rFindFile ("MSACMDLG.DLG"));
    count++; ASSERT_TIME (rFindFile ("MSACMDLG.H"));
    count++; ASSERT_TIME (rFindFile ("MSCONF.H"));
    count++; ASSERT_TIME (rFindFile ("MSFS.H"));
    count++; ASSERT_TIME (rFindFile ("MSPAB.H"));
    count++; ASSERT_TIME (rFindFile ("MSPST.H"));
    count++; ASSERT_TIME (rFindFile ("MSSTKPPG.H"));
    count++; ASSERT_TIME (rFindFile ("MSWSOCK.H"));
    count++; ASSERT_TIME (rFindFile ("MTX.H"));
    count++; ASSERT_TIME (rFindFile ("MTXATTR.H"));
    count++; ASSERT_TIME (rFindFile ("MTXSPM.H"));
    count++; ASSERT_TIME (rFindFile ("NB30.H"));
    count++; ASSERT_TIME (rFindFile ("NDDEAPI.H"));
    count++; ASSERT_TIME (rFindFile ("NDDESEC.H"));
    count++; ASSERT_TIME (rFindFile ("NEW"));
    count++; ASSERT_TIME (rFindFile ("NEW.H"));
    count++; ASSERT_TIME (rFindFile ("NSPAPI.H"));
    count++; ASSERT_TIME (rFindFile ("NTSDEXTS.H"));
    count++; ASSERT_TIME (rFindFile ("NTWIN32.MAK"));
    count++; ASSERT_TIME (rFindFile ("NUMERIC"));
    count++; ASSERT_TIME (rFindFile ("OAIDL.H"));
    count++; ASSERT_TIME (rFindFile ("OAIDL.IDL"));
    count++; ASSERT_TIME (rFindFile ("OBJBASE.H"));
    count++; ASSERT_TIME (rFindFile ("OBJERROR.H"));
    count++; ASSERT_TIME (rFindFile ("OBJIDL.H"));
    count++; ASSERT_TIME (rFindFile ("OBJIDL.IDL"));
    count++; ASSERT_TIME (rFindFile ("OBJSAFE.H"));
    count++; ASSERT_TIME (rFindFile ("OCIDL.H"));
    count++; ASSERT_TIME (rFindFile ("OCIDL.IDL"));
    count++; ASSERT_TIME (rFindFile ("ODBCINST.H"));
    count++; ASSERT_TIME (rFindFile ("OLE.H"));
    count++; ASSERT_TIME (rFindFile ("OLE2.H"));
    count++; ASSERT_TIME (rFindFile ("OLE2VER.H"));
    count++; ASSERT_TIME (rFindFile ("OLEAUTO.H"));
    count++; ASSERT_TIME (rFindFile ("OLECTL.H"));
    count++; ASSERT_TIME (rFindFile ("OLECTLID.H"));
    count++; ASSERT_TIME (rFindFile ("OLEDLG.H"));
    count++; ASSERT_TIME (rFindFile ("OLEIDL.H"));
    count++; ASSERT_TIME (rFindFile ("OLEIDL.IDL"));
    count++; ASSERT_TIME (rFindFile ("OLENLS.H"));
    count++; ASSERT_TIME (rFindFile ("OSTREAM"));
    count++; ASSERT_TIME (rFindFile ("OSTREAM.H"));
    count++; ASSERT_TIME (rFindFile ("PBT.H"));
    count++; ASSERT_TIME (rFindFile ("PCRT32.H"));
    count++; ASSERT_TIME (rFindFile ("PDH.H"));
    count++; ASSERT_TIME (rFindFile ("PDHMSG.H"));
    count++; ASSERT_TIME (rFindFile ("PENWIN.H"));
    count++; ASSERT_TIME (rFindFile ("PLAN32.H"));
    count++; ASSERT_TIME (rFindFile ("POPPACK.H"));
    count++; ASSERT_TIME (rFindFile ("PRNSETUP.DLG"));
    count++; ASSERT_TIME (rFindFile ("PROCESS.H"));
    count++; ASSERT_TIME (rFindFile ("PRSHT.H"));
    count++; ASSERT_TIME (rFindFile ("PSHPACK1.H"));
    count++; ASSERT_TIME (rFindFile ("PSHPACK2.H"));
    count++; ASSERT_TIME (rFindFile ("PSHPACK4.H"));
    count++; ASSERT_TIME (rFindFile ("PSHPACK8.H"));
    count++; ASSERT_TIME (rFindFile ("QUEUE"));
    count++; ASSERT_TIME (rFindFile ("RAS.H"));
    count++; ASSERT_TIME (rFindFile ("RASDLG.H"));
    count++; ASSERT_TIME (rFindFile ("RASERROR.H"));
    count++; ASSERT_TIME (rFindFile ("RASSAPI.H"));
    count++; ASSERT_TIME (rFindFile ("RASSHOST.H"));
    count++; ASSERT_TIME (rFindFile ("RECGUIDS.H"));
    count++; ASSERT_TIME (rFindFile ("RECONCIL.H"));
    count++; ASSERT_TIME (rFindFile ("REGSTR.H"));
    count++; ASSERT_TIME (rFindFile ("RICHEDIT.H"));
    count++; ASSERT_TIME (rFindFile ("RICHOLE.H"));
    count++; ASSERT_TIME (rFindFile ("RPC.H"));
    count++; ASSERT_TIME (rFindFile ("RPCDCE.H"));
    count++; ASSERT_TIME (rFindFile ("RPCDCEP.H"));
    count++; ASSERT_TIME (rFindFile ("RPCNDR.H"));
    count++; ASSERT_TIME (rFindFile ("RPCNSI.H"));
    count++; ASSERT_TIME (rFindFile ("RPCNSIP.H"));
    count++; ASSERT_TIME (rFindFile ("RPCNTERR.H"));
    count++; ASSERT_TIME (rFindFile ("RPCPROXY.H"));
    count++; ASSERT_TIME (rFindFile ("SCODE.H"));
    count++; ASSERT_TIME (rFindFile ("SCRNSAVE.H"));
    count++; ASSERT_TIME (rFindFile ("SEARCH.H"));
    count++; ASSERT_TIME (rFindFile ("SEHMAP.H"));
    count++; ASSERT_TIME (rFindFile ("SERVPROV.H"));
    count++; ASSERT_TIME (rFindFile ("SERVPROV.IDL"));
    count++; ASSERT_TIME (rFindFile ("SET"));
    count++; ASSERT_TIME (rFindFile ("SETJMP.H"));
    count++; ASSERT_TIME (rFindFile ("SETJMPEX.H"));
    count++; ASSERT_TIME (rFindFile ("SETUPAPI.H"));
    count++; ASSERT_TIME (rFindFile ("SHARE.H"));
    count++; ASSERT_TIME (rFindFile ("SHELLAPI.H"));
    count++; ASSERT_TIME (rFindFile ("SHLGUID.H"));
    count++; ASSERT_TIME (rFindFile ("SHLOBJ.H"));
    count++; ASSERT_TIME (rFindFile ("SIGNAL.H"));
    count++; ASSERT_TIME (rFindFile ("SMPAB.H"));
    count++; ASSERT_TIME (rFindFile ("SMPMS.H"));
    count++; ASSERT_TIME (rFindFile ("SMPXP.H"));
    count++; ASSERT_TIME (rFindFile ("SNMP.H"));
    count++; ASSERT_TIME (rFindFile ("SPORDER.H"));
    count++; ASSERT_TIME (rFindFile ("SQL.H"));
    count++; ASSERT_TIME (rFindFile ("SQLEXT.H"));
    count++; ASSERT_TIME (rFindFile ("SQLTYPES.H"));
    count++; ASSERT_TIME (rFindFile ("SQLUCODE.H"));
    count++; ASSERT_TIME (rFindFile ("SSTREAM"));
    count++; ASSERT_TIME (rFindFile ("STACK"));
    count++; ASSERT_TIME (rFindFile ("STDARG.H"));
    count++; ASSERT_TIME (rFindFile ("STDDEF.H"));
    count++; ASSERT_TIME (rFindFile ("STDEXCEPT"));
    count++; ASSERT_TIME (rFindFile ("STDEXCPT.H"));
    count++; ASSERT_TIME (rFindFile ("STDIO.H"));
    count++; ASSERT_TIME (rFindFile ("STDIOSTR.H"));
    count++; ASSERT_TIME (rFindFile ("STDLIB.H"));
    count++; ASSERT_TIME (rFindFile ("STORAGE.H"));
    count++; ASSERT_TIME (rFindFile ("STREAMB.H"));
    count++; ASSERT_TIME (rFindFile ("STREAMBUF"));
    count++; ASSERT_TIME (rFindFile ("STRING"));
    count++; ASSERT_TIME (rFindFile ("STRING.H"));
    count++; ASSERT_TIME (rFindFile ("STRSTREA.H"));
    count++; ASSERT_TIME (rFindFile ("STRSTREAM"));
    count++; ASSERT_TIME (rFindFile ("SVCGUID.H"));
    count++; ASSERT_TIME (rFindFile ("SVRAPI.H"));
    count++; ASSERT_TIME (rFindFile ("TAPI.H"));
    count++; ASSERT_TIME (rFindFile ("TCHAR.H"));
    count++; ASSERT_TIME (rFindFile ("TIME.H"));
    count++; ASSERT_TIME (rFindFile ("TLHELP32.H"));
    count++; ASSERT_TIME (rFindFile ("TNEF.H"));
    count++; ASSERT_TIME (rFindFile ("TSPI.H"));
    count++; ASSERT_TIME (rFindFile ("TYPEINFO"));
    count++; ASSERT_TIME (rFindFile ("TYPEINFO.H"));
    count++; ASSERT_TIME (rFindFile ("UNKNWN.H"));
    count++; ASSERT_TIME (rFindFile ("UNKNWN.IDL"));
    count++; ASSERT_TIME (rFindFile ("URLHLINK.H"));
    count++; ASSERT_TIME (rFindFile ("URLMON.H"));
    count++; ASSERT_TIME (rFindFile ("URLMON.IDL"));
    count++; ASSERT_TIME (rFindFile ("USEOLDIO.H"));
    count++; ASSERT_TIME (rFindFile ("USE_ANSI.H"));
    count++; ASSERT_TIME (rFindFile ("UTILITY"));
    count++; ASSERT_TIME (rFindFile ("VALARRAY"));
    count++; ASSERT_TIME (rFindFile ("VARARGS.H"));
    count++; ASSERT_TIME (rFindFile ("VARIANT.H"));
    count++; ASSERT_TIME (rFindFile ("VCR.H"));
    count++; ASSERT_TIME (rFindFile ("VDMDBG.H"));
    count++; ASSERT_TIME (rFindFile ("VECTOR"));
    count++; ASSERT_TIME (rFindFile ("VER.H"));
    count++; ASSERT_TIME (rFindFile ("VFW.H"));
    count++; ASSERT_TIME (rFindFile ("W32CHICO.MK"));
    count++; ASSERT_TIME (rFindFile ("WCHAR.H"));
    count++; ASSERT_TIME (rFindFile ("WCTYPE.H"));
    count++; ASSERT_TIME (rFindFile ("WDBGEXTS.H"));
    count++; ASSERT_TIME (rFindFile ("WFEXT.H"));
    count++; ASSERT_TIME (rFindFile ("WIN32.MAK"));
    count++; ASSERT_TIME (rFindFile ("WINBASE.H"));
    count++; ASSERT_TIME (rFindFile ("WINCON.H"));
    count++; ASSERT_TIME (rFindFile ("WINCRYPT.H"));
    count++; ASSERT_TIME (rFindFile ("WINDEF.H"));
    count++; ASSERT_TIME (rFindFile ("WINDOWS.H"));
    count++; ASSERT_TIME (rFindFile ("WINDOWSX.H"));
    count++; ASSERT_TIME (rFindFile ("WINDOWSX.H16"));
    count++; ASSERT_TIME (rFindFile ("WINERROR.H"));
    count++; ASSERT_TIME (rFindFile ("WINGDI.H"));
    count++; ASSERT_TIME (rFindFile ("WININET.H"));
    count++; ASSERT_TIME (rFindFile ("WINIOCTL.H"));
    count++; ASSERT_TIME (rFindFile ("WINNETWK.H"));
    count++; ASSERT_TIME (rFindFile ("WINNLS.H"));
    count++; ASSERT_TIME (rFindFile ("WINNLS32.H"));
    count++; ASSERT_TIME (rFindFile ("WINNT.H"));
    count++; ASSERT_TIME (rFindFile ("WINPERF.H"));
    count++; ASSERT_TIME (rFindFile ("WINREG.H"));
    count++; ASSERT_TIME (rFindFile ("WINRESRC.H"));
    count++; ASSERT_TIME (rFindFile ("WINSOCK.H"));
    count++; ASSERT_TIME (rFindFile ("WINSOCK2.H"));
    count++; ASSERT_TIME (rFindFile ("WINSPOOL.H"));
    count++; ASSERT_TIME (rFindFile ("WINSVC.H"));
    count++; ASSERT_TIME (rFindFile ("WINTRUST.H"));
    count++; ASSERT_TIME (rFindFile ("WINUSER.H"));
    count++; ASSERT_TIME (rFindFile ("WINVER.H"));
    count++; ASSERT_TIME (rFindFile ("WINWLX.H"));
    count++; ASSERT_TIME (rFindFile ("WOWNT16.H"));
    count++; ASSERT_TIME (rFindFile ("WOWNT32.H"));
    count++; ASSERT_TIME (rFindFile ("WPAPI.H"));
    count++; ASSERT_TIME (rFindFile ("WPGUID.H"));
    count++; ASSERT_TIME (rFindFile ("WPOBJ.H"));
    count++; ASSERT_TIME (rFindFile ("WPSPI.H"));
    count++; ASSERT_TIME (rFindFile ("WS2ATM.H"));
    count++; ASSERT_TIME (rFindFile ("WS2SPI.H"));
    count++; ASSERT_TIME (rFindFile ("WS2TCPIP.H"));
    count++; ASSERT_TIME (rFindFile ("WSHISOTP.H"));
    count++; ASSERT_TIME (rFindFile ("WSIPX.H"));
    count++; ASSERT_TIME (rFindFile ("WSNETBS.H"));
    count++; ASSERT_TIME (rFindFile ("WSNWLINK.H"));
    count++; ASSERT_TIME (rFindFile ("WSVNS.H"));
    count++; ASSERT_TIME (rFindFile ("WSVV.H"));
    count++; ASSERT_TIME (rFindFile ("WTYPES.H"));
    count++; ASSERT_TIME (rFindFile ("WTYPES.IDL"));
    count++; ASSERT_TIME (rFindFile ("XCMC.H"));
    count++; ASSERT_TIME (rFindFile ("XCMCEXT.H"));
    count++; ASSERT_TIME (rFindFile ("XCMCMSX2.H"));
    count++; ASSERT_TIME (rFindFile ("XCMCMSXT.H"));
    count++; ASSERT_TIME (rFindFile ("XCOMPLEX"));
    count++; ASSERT_TIME (rFindFile ("XIOSBASE"));
    count++; ASSERT_TIME (rFindFile ("XLOCALE"));
    count++; ASSERT_TIME (rFindFile ("XLOCINFO"));
    count++; ASSERT_TIME (rFindFile ("XLOCINFO.H"));
    count++; ASSERT_TIME (rFindFile ("XLOCMON"));
    count++; ASSERT_TIME (rFindFile ("XLOCNUM"));
    count++; ASSERT_TIME (rFindFile ("XLOCTIME"));
    count++; ASSERT_TIME (rFindFile ("XMEMORY"));
    count++; ASSERT_TIME (rFindFile ("XSTDDEF"));
    count++; ASSERT_TIME (rFindFile ("XSTRING"));
    count++; ASSERT_TIME (rFindFile ("XTREE"));
    count++; ASSERT_TIME (rFindFile ("XUTILITY"));
    count++; ASSERT_TIME (rFindFile ("YMATH.H"));
    count++; ASSERT_TIME (rFindFile ("YVALS.H"));
    count++; ASSERT_TIME (rFindFile ("ZMOUSE.H"));
# else
  /* all of /usr/include for UNIX*/
  count++; ASSERT_TIME (rFindFile ("aliases.h"));
  count++; ASSERT_TIME (rFindFile ("alloca.h"));
  count++; ASSERT_TIME (rFindFile ("ansidecl.h"));
  count++; ASSERT_TIME (rFindFile ("ar.h"));
  count++; ASSERT_TIME (rFindFile ("argz.h"));
  count++; ASSERT_TIME (rFindFile ("ASSERT_TIME.h"));
  count++; ASSERT_TIME (rFindFile ("bfd.h"));
  count++; ASSERT_TIME (rFindFile ("bfdlink.h"));
  count++; ASSERT_TIME (rFindFile ("bzlib.h"));
  count++; ASSERT_TIME (rFindFile ("crypt.h"));
  count++; ASSERT_TIME (rFindFile ("ctype.h"));
  count++; ASSERT_TIME (rFindFile ("curses.h"));
  count++; ASSERT_TIME (rFindFile ("db.h"));
  count++; ASSERT_TIME (rFindFile ("dbm.h"));
  count++; ASSERT_TIME (rFindFile ("des.h"));
  count++; ASSERT_TIME (rFindFile ("dirent.h"));
  count++; ASSERT_TIME (rFindFile ("dlfcn.h"));
  count++; ASSERT_TIME (rFindFile ("elf.h"));
  count++; ASSERT_TIME (rFindFile ("endian.h"));
  count++; ASSERT_TIME (rFindFile ("envz.h"));
  count++; ASSERT_TIME (rFindFile ("err.h"));
  count++; ASSERT_TIME (rFindFile ("errno.h"));
  count++; ASSERT_TIME (rFindFile ("error.h"));
  count++; ASSERT_TIME (rFindFile ("eti.h"));
  count++; ASSERT_TIME (rFindFile ("fcntl.h"));
  count++; ASSERT_TIME (rFindFile ("features.h"));
  count++; ASSERT_TIME (rFindFile ("fnmatch.h"));
  count++; ASSERT_TIME (rFindFile ("form.h"));
  count++; ASSERT_TIME (rFindFile ("fpu_control.h"));
  count++; ASSERT_TIME (rFindFile ("freetype.h"));
  count++; ASSERT_TIME (rFindFile ("fstab.h"));
  count++; ASSERT_TIME (rFindFile ("fterrid.h"));
  count++; ASSERT_TIME (rFindFile ("ftnameid.h"));
  count++; ASSERT_TIME (rFindFile ("fts.h"));
  count++; ASSERT_TIME (rFindFile ("ftw.h"));
  count++; ASSERT_TIME (rFindFile ("ftxcmap.h"));
  count++; ASSERT_TIME (rFindFile ("ftxerr18.h"));
  count++; ASSERT_TIME (rFindFile ("ftxgasp.h"));
  count++; ASSERT_TIME (rFindFile ("ftxkern.h"));
  count++; ASSERT_TIME (rFindFile ("ftxpost.h"));
  count++; ASSERT_TIME (rFindFile ("ftxwidth.h"));
  count++; ASSERT_TIME (rFindFile ("gdbm.h"));
  count++; ASSERT_TIME (rFindFile ("getopt.h"));
  count++; ASSERT_TIME (rFindFile ("glib.h"));
  count++; ASSERT_TIME (rFindFile ("glob.h"));
  count++; ASSERT_TIME (rFindFile ("gmp.h"));
  count++; ASSERT_TIME (rFindFile ("gnu-versions.h"));
  count++; ASSERT_TIME (rFindFile ("gpm.h"));
  count++; ASSERT_TIME (rFindFile ("grp.h"));
  count++; ASSERT_TIME (rFindFile ("ieee754.h"));
  count++; ASSERT_TIME (rFindFile ("ioctls.h"));
  count++; ASSERT_TIME (rFindFile ("jconfig.h"));
  count++; ASSERT_TIME (rFindFile ("jerror.h"));
  count++; ASSERT_TIME (rFindFile ("jmorecfg.h"));
  count++; ASSERT_TIME (rFindFile ("jpeglib.h"));
  count++; ASSERT_TIME (rFindFile ("langinfo.h"));
  count++; ASSERT_TIME (rFindFile ("lastlog.h"));
  count++; ASSERT_TIME (rFindFile ("libgen.h"));
  count++; ASSERT_TIME (rFindFile ("libintl.h"));
  count++; ASSERT_TIME (rFindFile ("libio.h"));
  count++; ASSERT_TIME (rFindFile ("limits.h"));
  count++; ASSERT_TIME (rFindFile ("link.h"));
  count++; ASSERT_TIME (rFindFile ("locale.h"));
  count++; ASSERT_TIME (rFindFile ("malloc.h"));
  count++; ASSERT_TIME (rFindFile ("math.h"));
  count++; ASSERT_TIME (rFindFile ("mcheck.h"));
  count++; ASSERT_TIME (rFindFile ("memory.h"));
  count++; ASSERT_TIME (rFindFile ("menu.h"));
  count++; ASSERT_TIME (rFindFile ("mntent.h"));
  count++; ASSERT_TIME (rFindFile ("monetary.h"));
  count++; ASSERT_TIME (rFindFile ("mpeg.h"));
  count++; ASSERT_TIME (rFindFile ("ndbm.h"));
  count++; ASSERT_TIME (rFindFile ("netdb.h"));
  count++; ASSERT_TIME (rFindFile ("nl_types.h"));
  count++; ASSERT_TIME (rFindFile ("nss.h"));
  count++; ASSERT_TIME (rFindFile ("obstack.h"));
  count++; ASSERT_TIME (rFindFile ("panel.h"));
  count++; ASSERT_TIME (rFindFile ("paths.h"));
  count++; ASSERT_TIME (rFindFile ("poll.h"));
  count++; ASSERT_TIME (rFindFile ("printf.h"));
  count++; ASSERT_TIME (rFindFile ("pthread.h"));
  count++; ASSERT_TIME (rFindFile ("pty.h"));
  count++; ASSERT_TIME (rFindFile ("pwd.h"));
  count++; ASSERT_TIME (rFindFile ("re_comp.h"));
  count++; ASSERT_TIME (rFindFile ("regex.h"));
  count++; ASSERT_TIME (rFindFile ("regexp.h"));
  count++; ASSERT_TIME (rFindFile ("resolv.h"));
  count++; ASSERT_TIME (rFindFile ("rplay.h"));
  count++; ASSERT_TIME (rFindFile ("sched.h"));
  count++; ASSERT_TIME (rFindFile ("search.h"));
  count++; ASSERT_TIME (rFindFile ("semaphore.h"));
  count++; ASSERT_TIME (rFindFile ("setjmp.h"));
  count++; ASSERT_TIME (rFindFile ("sgtty.h"));
  count++; ASSERT_TIME (rFindFile ("shadow.h"));
  count++; ASSERT_TIME (rFindFile ("sigcontext.h"));
  count++; ASSERT_TIME (rFindFile ("signal.h"));
  count++; ASSERT_TIME (rFindFile ("stab.h"));
  count++; ASSERT_TIME (rFindFile ("stdio.h"));
  count++; ASSERT_TIME (rFindFile ("stdlib.h"));
  count++; ASSERT_TIME (rFindFile ("string.h"));
  count++; ASSERT_TIME (rFindFile ("strings.h"));
  count++; ASSERT_TIME (rFindFile ("syscall.h"));
  count++; ASSERT_TIME (rFindFile ("sysexits.h"));
  count++; ASSERT_TIME (rFindFile ("syslog.h"));
  count++; ASSERT_TIME (rFindFile ("tar.h"));
  count++; ASSERT_TIME (rFindFile ("tcl.h"));
  count++; ASSERT_TIME (rFindFile ("tcl8.0.h"));
  count++; ASSERT_TIME (rFindFile ("tcpd.h"));
  count++; ASSERT_TIME (rFindFile ("term.h"));
  count++; ASSERT_TIME (rFindFile ("termbits.h"));
  count++; ASSERT_TIME (rFindFile ("termcap.h"));
  count++; ASSERT_TIME (rFindFile ("termio.h"));
  count++; ASSERT_TIME (rFindFile ("termios.h"));
  count++; ASSERT_TIME (rFindFile ("tiff.h"));
  count++; ASSERT_TIME (rFindFile ("tiffio.h"));
  count++; ASSERT_TIME (rFindFile ("time.h"));
  count++; ASSERT_TIME (rFindFile ("ttyent.h"));
  count++; ASSERT_TIME (rFindFile ("unctrl.h"));
  count++; ASSERT_TIME (rFindFile ("unistd.h"));
  count++; ASSERT_TIME (rFindFile ("ustat.h"));
  count++; ASSERT_TIME (rFindFile ("utime.h"));
  count++; ASSERT_TIME (rFindFile ("utmp.h"));
  count++; ASSERT_TIME (rFindFile ("values.h"));
  count++; ASSERT_TIME (rFindFile ("vga.h"));
  count++; ASSERT_TIME (rFindFile ("vgagl.h"));
  count++; ASSERT_TIME (rFindFile ("vgajoystick.h"));
  count++; ASSERT_TIME (rFindFile ("vgakeyboard.h"));
  count++; ASSERT_TIME (rFindFile ("vgamouse.h"));
  count++; ASSERT_TIME (rFindFile ("wait.h"));
  count++; ASSERT_TIME (rFindFile ("wchar.h"));
  count++; ASSERT_TIME (rFindFile ("wctype.h"));
  count++; ASSERT_TIME (rFindFile ("wordexp.h"));
  count++; ASSERT_TIME (rFindFile ("zconf.h"));
  count++; ASSERT_TIME (rFindFile ("zlib.h"));

  /* all of /usr/include in uppercase without suffix */

  /* count++; ASSERT_TIME (!case_sensitive ||(rFindFile("CORBA-C") == NULL )); */
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("ALIASES") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("ALLOCA") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("ANSIDECL") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("AR") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("ARGZ") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("ASSERT_TIME") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("BFD") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("BFDLINK") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("BYTESEX") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("BZLIB*") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("CONFNAME") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("CRYPT") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("CTYPE") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("CURSES") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("DB") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("DBM") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("DES") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("DIRENT") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("DIRENTRY") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("DLFCN") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("ELF") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("ELFCLASS") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("ENDIAN") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("ENVZ") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("ERR") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("ERRNO") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("ERRNOS") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("ERROR") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("ETI") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("EXPECT") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("EXPECT_COMM") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("EXPECT_TCL") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("FCNTL") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("FCNTLBITS") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("FEATURES") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("FNMATCH") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("FORM") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("FPU_CONTROL") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("FREETYPE") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("FSTAB") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("FTERRID") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("FTNAMEID") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("FTS") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("FTW") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("FTXCMAP") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("FTXERR18") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("FTXGASP") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("FTXKERN") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("FTXPOST") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("FTXWIDTH") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("GDBM") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("GETOPT") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("GLIB") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("GLOB") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("GMP") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("GNU-VERSIONS") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("GPM") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("GRP") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("HUGE_VAL") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("IEEE754") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("IOCTL-TYPES") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("IOCTLS") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("IOVEC") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("JCONFIG") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("JERROR") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("JMORECFG") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("JMP_BUF") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("JPEGLIB") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("LANGINFO") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("LASTLOG") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("LIBC-LOCK") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("LIBGEN") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("LIBINTL") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("LIBIO") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("LIMITS") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("LINK") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("LOCAL_LIM") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("LOCALE") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("MALLOC") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("MATH") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("MATHCALLS") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("MCHECK") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("MEMORY") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("MENU") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("MNTENT") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("MONETARY") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("MPEG") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("MPOOL") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("NAN") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("NDBM") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("NETDB") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("NL_TYPES") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("NSS") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("OBSTACK") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("PANEL") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("PATHS") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("POLL") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("POSIX1_LIM") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("POSIX2_LIM") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("POSIX_OPT") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("PRINTF") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("PTHREAD") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("PTY") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("PWD") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("RE_COMP") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("REGEX") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("REGEXP") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("RESOLV") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("RESOURCEBITS") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("RPLAY") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("SCHED") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("SCHEDBITS") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("SEARCH") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("SELECTBITS") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("SEMAPHORE") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("SEMAPHOREBITS") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("SETJMP") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("SGTTY") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("SHADOW") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("SIGACTION") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("SIGCONTEXT") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("SIGNAL") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("SIGNUM") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("SIGSET") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("SIGSTACK") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("SOCKADDRCOM") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("SOCKETBITS") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("STAB.DEF") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("STAB") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("STATBUF") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("STATFSBUF") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("STDIO-LOCK") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("STDIO") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("STDIO_LIM") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("STDLIB") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("STRING") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("STRINGS") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("SYSCALL-LIST") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("SYSCALL") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("SYSEXITS") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("SYSLOG") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("TAR") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("TCL") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("TCL8.0") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("TCLREGEXP") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("TCPD") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("TERM") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("TERMBITS") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("TERMCAP") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("TERMIO") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("TERMIOS") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("TIFF") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("TIFFIO") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("TIME") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("TIMEBITS") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("TIX") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("TTYENT") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("UNCTRL") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("UNISTD") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("USTAT") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("USTATBITS") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("UTIME") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("UTMP") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("UTMPBITS") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("UTSNAMELEN") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("VALUES") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("VGA") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("VGAGL") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("VGAJOYSTICK") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("VGAKEYBOARD") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("VGAMOUSE") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("WAIT") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("WAITFLAGS") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("WAITSTATUS") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("WCHAR") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("WCTYPE") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("WORDEXP") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("XOPEN_LIM") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("ZCONF") == NULL ));
  count++; ASSERT_TIME (!case_sensitive ||(rFindFile("ZLIB") == NULL ));

  /* all of /usr/include/sys */
  count++; ASSERT_TIME (rFindFile ("sys/acct.h"));
  count++; ASSERT_TIME (rFindFile ("sys/bitypes.h"));
  count++; ASSERT_TIME (rFindFile ("sys/cdefs.h"));
  count++; ASSERT_TIME (rFindFile ("sys/debugreg.h"));
  count++; ASSERT_TIME (rFindFile ("sys/dir.h"));
  count++; ASSERT_TIME (rFindFile ("sys/elf.h"));
  count++; ASSERT_TIME (rFindFile ("sys/errno.h"));
  count++; ASSERT_TIME (rFindFile ("sys/fcntl.h"));
  count++; ASSERT_TIME (rFindFile ("sys/file.h"));
  count++; ASSERT_TIME (rFindFile ("sys/fsuid.h"));
  count++; ASSERT_TIME (rFindFile ("sys/gmon.h"));
  count++; ASSERT_TIME (rFindFile ("sys/gmon_out.h"));
  count++; ASSERT_TIME (rFindFile ("sys/io.h"));
  count++; ASSERT_TIME (rFindFile ("sys/ioctl.h"));
  count++; ASSERT_TIME (rFindFile ("sys/ipc.h"));
  count++; ASSERT_TIME (rFindFile ("sys/kd.h"));
  count++; ASSERT_TIME (rFindFile ("sys/kdaemon.h"));
  count++; ASSERT_TIME (rFindFile ("sys/klog.h"));
  count++; ASSERT_TIME (rFindFile ("sys/mman.h"));
  count++; ASSERT_TIME (rFindFile ("sys/mount.h"));
  count++; ASSERT_TIME (rFindFile ("sys/msg.h"));
  count++; ASSERT_TIME (rFindFile ("sys/mtio.h"));
  count++; ASSERT_TIME (rFindFile ("sys/param.h"));
  count++; ASSERT_TIME (rFindFile ("sys/perm.h"));
  count++; ASSERT_TIME (rFindFile ("sys/poll.h"));
  count++; ASSERT_TIME (rFindFile ("sys/prctl.h"));
  count++; ASSERT_TIME (rFindFile ("sys/procfs.h"));
  count++; ASSERT_TIME (rFindFile ("sys/ptrace.h"));
  count++; ASSERT_TIME (rFindFile ("sys/queue.h"));
  count++; ASSERT_TIME (rFindFile ("sys/quota.h"));
  count++; ASSERT_TIME (rFindFile ("sys/reboot.h"));
  count++; ASSERT_TIME (rFindFile ("sys/reg.h"));
  count++; ASSERT_TIME (rFindFile ("sys/resource.h"));
  count++; ASSERT_TIME (rFindFile ("sys/select.h"));
  count++; ASSERT_TIME (rFindFile ("sys/sem.h"));
  count++; ASSERT_TIME (rFindFile ("sys/shm.h"));
  count++; ASSERT_TIME (rFindFile ("sys/signal.h"));
  count++; ASSERT_TIME (rFindFile ("sys/socket.h"));
  count++; ASSERT_TIME (rFindFile ("sys/socketvar.h"));
  count++; ASSERT_TIME (rFindFile ("sys/soundcard.h"));
  count++; ASSERT_TIME (rFindFile ("sys/stat.h"));
  count++; ASSERT_TIME (rFindFile ("sys/statfs.h"));
  count++; ASSERT_TIME (rFindFile ("sys/swap.h"));
  count++; ASSERT_TIME (rFindFile ("sys/syscall.h"));
  count++; ASSERT_TIME (rFindFile ("sys/sysctl.h"));
  count++; ASSERT_TIME (rFindFile ("sys/sysinfo.h"));
  count++; ASSERT_TIME (rFindFile ("sys/syslog.h"));
  count++; ASSERT_TIME (rFindFile ("sys/sysmacros.h"));
  count++; ASSERT_TIME (rFindFile ("sys/termios.h"));
  count++; ASSERT_TIME (rFindFile ("sys/time.h"));
  count++; ASSERT_TIME (rFindFile ("sys/timeb.h"));
  count++; ASSERT_TIME (rFindFile ("sys/times.h"));
  count++; ASSERT_TIME (rFindFile ("sys/timex.h"));
  count++; ASSERT_TIME (rFindFile ("sys/ttychars.h"));
  count++; ASSERT_TIME (rFindFile ("sys/ttydefaults.h"));
  count++; ASSERT_TIME (rFindFile ("sys/types.h"));
  count++; ASSERT_TIME (rFindFile ("sys/uio.h"));
  count++; ASSERT_TIME (rFindFile ("sys/un.h"));
  count++; ASSERT_TIME (rFindFile ("sys/unistd.h"));
  count++; ASSERT_TIME (rFindFile ("sys/user.h"));
  count++; ASSERT_TIME (rFindFile ("sys/ustat.h"));
  count++; ASSERT_TIME (rFindFile ("sys/utsname.h"));
  count++; ASSERT_TIME (rFindFile ("sys/vfs.h"));
  count++; ASSERT_TIME (rFindFile ("sys/vlimit.h"));
  count++; ASSERT_TIME (rFindFile ("sys/vm86.h"));
  count++; ASSERT_TIME (rFindFile ("sys/vt.h"));
  count++; ASSERT_TIME (rFindFile ("sys/vtimes.h"));
  count++; ASSERT_TIME (rFindFile ("sys/wait.h"));
# endif
  }
  printf (" time = %6ld searched %d files\n", StepTime() - t, count);
  Close_rFsearch ();
}

static void test_sub_dir (void)
{
  /* testing if a a file is searched with have a sub-dir part
   * and there are several subd sir's with that name
   */
  char res[1024];

  if (rFsearchShowDebug) printf ("=======================================\n");
  printf ("** test sub-dirs\n");

  /* case sensitive */
  Begin_rFsearch (rtrue);

  rAddDir ("foo", 0, rtrue);
  rAddDir ("bar", 0, rtrue);
  rReadAllDirs ();

  rAddExtension (".h");
  rAddExtension ("");

  strcpy (res, "foo/foo/foobar.h");  rReplaceDirSeparator (res);
  check (rFindFile ("foo/foobar.h"), res);

  strcpy (res,  "bar/foo/barfoo.h"); rReplaceDirSeparator (res);
  check (rFindFile ("foo/barfoo.h"), res);

  strcpy (res,"foo/foo/foobar.h" );  rReplaceDirSeparator (res);
  check (rFindFile ("foo/foobar"),   res);

  strcpy (res,  "bar/foo/barfoo.h"); rReplaceDirSeparator (res);
  check (rFindFile ("foo/barfoo"),   res);

  Close_rFsearch ();

  /* case insensitive */
  Begin_rFsearch (rfalse);

  rAddDir ("FOO", 0, rtrue);
  rAddDir ("bar", 0, rtrue);
  rReadAllDirs ();

  rAddExtension (".h");
  rAddExtension ("");

  strcpy (res, "foo/foo/foobar.h");  rReplaceDirSeparator (res);
  check (rFindFile ("foo/FOOBAR.h"), res);

  strcpy (res,  "bar/foo/barfoo.h"); rReplaceDirSeparator (res);
  check (rFindFile ("FOO/barfoo.h"), res);

  strcpy (res,"foo/foo/foobar.h" );  rReplaceDirSeparator (res);
  check (rFindFile ("FOO/foobar"),   res);

  strcpy (res,  "bar/foo/barfoo.h"); rReplaceDirSeparator (res);
  check (rFindFile ("foo/BARFOO"),   res);

  Close_rFsearch ();

}

# endif
/* Unix | Windows */

static void show_dir (void)
{
  char *n = ".";
  tFileSystemDir d;
  const char *s;
  printf ("** test: show contents of directory %s\n", n);
  d = rOpenFileSystemDir(n);
  if (!d) {
    printf (" no such dir: %s\n",n);
    return;
  }

  do {
    s = rNextFileSystemEntry (d);
    printf (" ... <%s>\n", s);
  } while (s);

  rCloseFileSystemDir (d);
}

static void
usage (const char *cmd)
{
  fprintf (stderr, "usage: %s\n", cmd);
  fprintf (stderr, "Test of the rFsearch module\n");
  exit (1);
}

int
main (int argc, char *argv[])
{
  if (argc > 1) usage (argv[0]);
  printf ("Test of the rFsearch module\n\n"
# if defined (rFsearch_UNIX) || defined (rFsearch_MICROSOFT)
          "Note: To run the self test rFsearD, you should adapt rFsearD.c\n"
          "      - for Microsoft: set up the right path to the include\n"
          "        directory\n"
          "      - the routine 'test_time' may fail, since some\n"
          "        files mentioned there are missing on your system. You\n"
          "        may safely delete the corresonding lines in 'test_time',\n"
	  "      - the self test must be executed via 'make', since some\n"
	  "        test files are created. Please execute: 'make test'\n"
	  "\n"
# endif
	  );

  rFsearchShowDebug = rtrue;
  /*  rFsearchShowDebug = rfalse; */

  BeginrMemory    ();

# if defined (rFsearch_UNIX) || defined (rFsearch_MICROSOFT)
  /*          *************              ******************          */
  printf  ("---- UNIX or MICROSOFT environment\n");
  sprintf (dirsep, "%c", rDirSeparator);

  test_dir_sets ();

  test_dir_separator ();
  test_file_readable ();
  test_dir_name      ();
  test_base_name     ();
  test_dir_base_name ();
  test_add_delete    ();

# ifdef rFsearch_MICROSOFT
  test_drive_letters ();
# endif

  test_auto_cache    ();
  test_no_cache      ();
  test_find_ext      (rtrue);
  test_find_ext      (rfalse);

  test_find_case_cache     (rtrue);
  test_find_case_cache     (rfalse);
  test_find_case_no_cache  (rtrue);
  test_find_case_no_cache  (rfalse);

  test_dir_sets ();
  test_set_search_path();

# ifdef rFsearch_UNIX
  test_symbolic_links ();
# endif
  test_time (rtrue,  rtrue);
  test_time (rtrue,  rfalse);
  test_time (rfalse, rtrue);
  test_time (rfalse, rfalse);

  test_sub_dir ();

  show_dir();

# endif
  /* endif UNIX/Microsoft */

# ifdef rFsearch_MVS
  /*    ************    */
  printf  ("---- MVS environment\n");
  {
    char buf[255];
    char dir[255];
    char base[255];
    char suffix[255];

    Begin_rFsearch  (rtrue);

    printf ("** test rReplaceDirSeparator\n");
    sprintf (buf, "/foo/bar\\foo\\bar");
    rReplaceDirSeparator (buf);
    check (buf, "/foo/bar\\foo\\bar");

    printf ("** test rBaseName\n");
    check (rBaseName ("a",       buf), "");
    check (rBaseName ("a.b",     buf), "");
    check (rBaseName ("a(m)",    buf), "m");
    check (rBaseName ("a.b(m)",  buf), "m");

    check (rBaseName ("a",       NULL), "");
    check (rBaseName ("a.b",     NULL), "");
    check (rBaseName ("a(m)",    NULL), "m");
    check (rBaseName ("a.b(m)",  NULL), "m");

    strcpy (buf, "a");      check (rBaseName (buf,       buf), "");
    strcpy (buf, "a.b");    check (rBaseName (buf,       buf), "");
    strcpy (buf, "a(m)");   check (rBaseName (buf,       buf), "m");
    strcpy (buf, "a.b(m)"); check (rBaseName (buf,       buf), "m");

    printf ("** test rDirName\n");
    check (rDirName ("a",        buf), "a");
    check (rDirName ("a.b",      buf), "a.b");
    check (rDirName ("a(m)",     buf), "a");
    check (rDirName ("a.b(m)",   buf), "a.b");

    check (rDirName ("a",        NULL), "a");
    check (rDirName ("a.b",      NULL), "a.b");
    check (rDirName ("a(m)",     NULL), "a");
    check (rDirName ("a.b(m)",   NULL), "a.b");

    strcpy (buf, "a");      check (rDirName (buf,       buf), "a");
    strcpy (buf, "a.b");    check (rDirName (buf,       buf), "a.b");
    strcpy (buf, "a(m)");   check (rDirName (buf,       buf), "a");
    strcpy (buf, "a.b(m)"); check (rDirName (buf,       buf), "a.b");

    printf ("** test rDirBaseName\n");
    rDirBaseName ("a",       dir, base); check (dir, "a");   check (base, "");
    rDirBaseName ("a.b",     dir, base); check (dir, "a.b"); check (base, "");
    rDirBaseName ("a(m)",    dir, base); check (dir, "a");   check (base, "m");
    rDirBaseName ("a.b(m)",  dir, base); check (dir, "a.b"); check (base, "m");

    printf ("** test rDirBaseSuffixName\n");
    rDirBaseSuffixName ("a.b(m)",  dir, base, suffix);
    check (dir, "a.b"); check (base, "m"); check (suffix, "");

    printf ("** test rFileIsReadable\n");
    ASSERT (rFileIsReadable ("NO-SUCH-FILE")          == rfalse);
    ASSERT (rFileIsReadable ("a.b(m)")                == rtrue);

    printf ("** test rDirIsReadable\n");
    /* --> returns always true */
    ASSERT (rDirIsReadable ("a.b")                    == rtrue);
    ASSERT (rDirIsReadable ("FOO-BAR")                == rtrue);

    printf ("** test rFindFile\n");
    rAddDir      ("a.b", 0, rtrue);
    rAddDir      ("e.f", 0, rtrue);
    check (rFindFile ("m"),   "a.b(m)");
    check (rFindFile ("m2"),  "a.b(m2)");
    check (rFindFile ("n"),   "e.f(n)");
    check (rFindFile ("n2"),  NULL);

    printf ("** test rFindFileSameDir\n");
    check (rFindFileSameDir ("a.b(m)", "m2"),  "a.b(m2)");
    check (rFindFileSameDir ("a.b(m)", "n"),   "e.f(n)");
    check (rFindFileSameDir ("a.b(m)", "n2"),  NULL);

    printf ("** test rFindFileDir\n");
    check (rFindFileDir ("a.b", "m2"),  "a.b(m2)");
    check (rFindFileDir ("a.b", "n"),   NULL);
    check (rFindFileDir ("a.b", "n2"),  NULL);

    /* Print_rFsearch (stdout); */
    Close_rFsearch ();
  }
# endif
  /* endif MVS */

  CloserMemory    ();

  return 0;
}
