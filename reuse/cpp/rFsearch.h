/* Copyright (c) 1999 Dr. Josef Grosch, CoCoLab - Datenverarbeitung

   This file contains proprietary and confidential information and
   remains the property of CoCoLab. Use, disclosure, or reproduction
   is prohibited except as permitted by express written license agreement
   with CoCoLab.

   Phone: +49-7841-669144
   Fax  : +49-7841-669145
   Email: grosch@cocolab.com
*/

/* Project:	Cocktail Reuse Library
 * Descr:	Search a filename in a list of directories
 * Author:	Dr. Juergen Vollmer <vollmer@cocolab.com>
 * Id: rFsearch.h,v 1.38 2007/10/08 09:24:30 vollmer Exp $
 */

# ifndef rFesarch_H
# define rFesarch_H

# include <stdio.h>
# include "ratc.h"

# define rFSearchVersion "2007-10-08"

/* This module allows to search a file with a given name in a list of
 * directories. Several sets of directories may be given, and searched
 * separately.
 * The search may be done case sensitive and case insensitive.
 * This module may be used under UNIX as well as under Microsoft operating
 * systems. Limited support for MVS PDS/PDSE (extented/partitioned data set)
 * names is provided.
 *
 * MVS Note: PDSE file names are of the form:  library(member)
 *           - where library is a qualified name consisting of so called
 *             "qualifiers":  q.q.q
 *           - a qualifier consists of 1 up to 8 characters:
 *			letters, digits, #, $ and @
 *           - a qualifier must not start with a digit.
 *           - where the member name is build as a single qualifier
 *           - the maximum length of a name is 44 chars (inclusive the dots).
 *           Example:    USER1.TEST.DATA(FILE1)
 *
 * rUseDirSet, rUseAllDirSets
 * --------------------------
 *  Directories may be grouped into sets. If a file is searched, it could be
 *  searched either in one set or in all. A set is specified by a
 *  positive number. rUseDirSet specifies the set to be used, while
 *  rUseAllDirSets defines to search all. The setting is done globally,
 *  i.e. remains valid until the next call of one of that routines.
 *  Call rUseDirSet in order to add a directory to a specific set.
 *  rUseAllDirSets should be used to let the search check all added
 *  directories. The call is only needed, if there are several directory sets.
 *  Default is to have one a single set of directories.
 *  This may be used for example to distinguish the search directories of C's
 *     #include ".."
 *  and
 *     #include <..>
 *  The typical use would be:
 *    // add the search path for #include <...>
 *    rUseDirSet (1); rAddDir (..); rAddDir (..);
 *
 *    // add the search path for #include "..."
 *    rUseDirSet (2); rAddDir (..); rAddDir (..);
 *
 *    // search the file given by a #include <..>
 *    rUseDirSet (1); rFindFile (..)
 *
 *    // search the file given by a #include ".."
 *    rUseDirSet (2); rFindFile (..)
 *
 *    As a simplification:
 *       rAddDirSet (..., 1); rFindFileSet(..., 1);
 *    or
 *       rAddDirSet (..., 2); rFindFileSet(..., 2);
 *    may be used. Those routines do not change the global setting given by
 *    rUseDirSet. Only during the call of rAddDirSet, rFindFileSet and
 *    rFindFileSameDirSet the given set is used.
 *
 *  Note: the "set-property" of a directory is just a marker which specifies
 *        if a directory should be skipped when rFindFile is called.
 *        All other procedures (e.g. rReadAllDir) work always on all sets,
 *        independent on setting given by rUseDirSet.
 *
 * rAddDir, rAddDirSet
 * -------------------
 *  The directories are specified using the `rAddDir' function.
 *  Each directory may be given a `mark'. The directories with the same
 *  `mark' may be removed or cached, while the others remain untouched.
 *  This is useful, e.g. if some of the directories are specified
 *  by command line options, while others are specified in the analyzed
 *  program. When parsing lots of sources in one program run, one wishes
 *  to delete the directories added by the source after processing this source
 *  while the command line directories should persist for all processed
 *  sources.
 *  The order in which the directories are considered when searching a file
 *  is determined by the `at_end' parameter: If true, that directory
 *  is appended to the already existing list of directories. If `at_end'
 *  is false, the directory will be the new first element.
 *  If the search list is empty, the current directory "./" is used by default.
 *  If the search list is not empty and the current directory should be
 *  searched, it has to be added explicitly.
 *
 * MVS Note: the library part of a filename will be given here.
 *
 * rReadDirs, rReadAllDirs
 * -----------------------
 *  To speed up `rFindFile', the contents of a directory may be read in
 *  advance using `rReadDirs' and `rReadAllDirs'. `rFindFile' will
 *  check only that cached directory contents. If the directories are not
 *  cached, for each file name a `stat' or `access' system call is used.
 *  "Mixed usage" (i.e. some directories cached others not) is possible.
 *  Subdirectories of a directories contained in the searchpath are cached
 *  allways.
 *  Caching is ~9 times faster as partial cached access.
 *
 *  MVS Note: rReadDirs/rReadAllDirs and caching is not supported.
 *            If called, those functions do nothing.
 *
 * rAddExtension, rDeleteExtensions
 * --------------------------------
 *  Besides searching a file with a fixed name, the user may specify a set
 *  of extensions which are used to construct the file name.
 *  To add such an extension use `rAddExtension'.
 *  If the list of extensions is empty, the filename remains unchanged
 *  (obviously).
 *  If the list of extensions is not empty and the "empty" extension should
 *  be considered too, one has to add it by calling `rAddExtension ("")'.
 *  The order in which the extensions are tried is the reverse order of the
 *  calls of `rAddExtension'.
 *
 *  MVS Note: PDSE has no concept of filename extensions, therefore
 *            it is of no use to call these functions.
 *
 * rFindFile, rFindFileSet
 * -----------------------
 *  To search a file in the list of directories, use `rFindFile'.
 *  The entire path is returned, if the file is found and is readable.
 *  The lookup is: visit all directories D and all extensions E and
 *  check for the given name N whether a file "D/NE" exists.
 *  More precisely:
 *
 *  FOR ALL directories D given by rAddDir in the specified order DO
 *     IF rFileIsReadable (D/N) THEN RETURN D/N FI
 *     FOR ALL extensions E given by rAddExtension DO
 *       IF rFileIsReadable (D/NE) THEN RETURN D/NE FI
 *     END;
 *  END;
 *  RETURN NULL;
 *
 *  The search path used by rFindFile/rFindFileSet may be restricted by
 *  specifying a "starting point", where the search should start.
 *  See the routine "rSetSearchPathStart".
 *  In that case the line
 *     FOR ALL directories D given by rAddDir in the specified order DO
 *  should be read as
 *     FOR ALL directories D given by rAddDir in the specified order,
 *             beginning with the given starting point DO
 *
 *  If the `name' contains a "/" and caching is enabled, the directory part
 *  of `name' is appended to a search directory and if it exists, it is cached
 *  too. The cached directory is appended to the current search path.
 *  The cached directory belongs to the current directory set.
 *  rFindFile removes leading a './' in its output.
 *  Used under UNIX: leading '//' is replaced by one '/'.
 *  Used under Microsoft: a leading `\\' is not replaced (since it denotes
 *  remote file access.
 *
 *  MVS Note:
 *   the lookup is:
 *   FOR ALL directories D given by rAddDir in the specified order DO
 *      IF rFileIsReadable ("D(N)") THEN RETURN "D(N)" FI
 *   END;
 *   RETURN NULL;
 *
 *  Note: the memory holding the resulting string is allocated internally, so
 *        that a second call of rFindFile will invalidate the result of the
 *        first call.
 *
 * rFindFileSameDir, rFindFileSameDirSet
 * -------------------------------------
 *  First the directory specified as part of the argument cur_file is
 *  searched. If the file is not found, rFindFile(Set) is called.
 *
 * rFindFileDir
 * ------------
 *  To search a file in the given directory, use `rFindFileDir'.
 *  The entire path is returned, if the file is found and is readable.
 *  The lookup is: visit the given directory D and all extensions E and
 *  check for the given name N whether a file "D/NE" exists.
 *  The directory cache is not used nor extended by rFindFileDir.
 *
 *  MVS Note:
 *    The lookup is: visit the given directory D and and check for the given
 *    name N whether a file "D(N)" exists.
 *
 *  Note: the memory holding the resulting string is allocated internally, so
 *        that a second call of rFindFile will invalidate the result of the
 *        first call.
 *
 * rSetSearchPathStart
 * -------------------
 *  Set the start of the search path for rFindFile.
 *
 * rDeleteDirs, rDeleteAllDirs, rDeleteExtensions
 * ----------------------------------------------
 *  Delete these things and release the corresponding memory.
 *
 * Begin_rFsearch, Close_rFsearch
 * -------------------------------
 *  Initialize and finalize the module. Must be done once per program run.
 *  `Close_rFsearch' releases most of the allocated memory, allocated by
 *  this module.
 *
 *  Before calling any of the functions of this module, it must be initialzed.
 *  After finialization, none of the modules functions or strings returned
 *  by them may be used.
 *
 *  Begin_rFsearch must be called _always_ _after_  BeginrMemory and
 *  Close_rFsearch  must be called _always_ _before_ CloserMemory
 *
 * For convenience there are the following routines:
 * rDirOrFileExists
 * ----------------
 *  Returns true, iff a file or directory (or anything else) with this name
 *  exists in the file system.
 *
 *  MVS Note: returns always true.
 *
 * rFileIsReadable, rDirIsReadable
 * -------------------------------
 *  Return true, iff the file / directory can be read.
 *  (The implementation uses `OpenInput' of the `rSystem' module, and
 *   a check whether it's a file or a directory)
 *
 *  MVS Note: rDirIsReadable   returns always true.
 *            rFileIsReadable  checks if the file can be opend for reading.
 *
 *
 * rDirName, rBaseName, rDirBaseName, rDirBaseSuffixName
 * -----------------------------------------------------
 *  Split a filename into its directory and basename parts.
 *
 * MVS Note: directory == library-name and basename == member-name
 *
 * rOpenFileSystemDir, rNextFileSystemEntry, rCloseFileSystemDir
 * -------------------------------------------------------------
 *  Reading the content of a directory in the file system.
 *  These routines access the file system directly, without using the
 *  caching mechanism described above. Use them as follows:
 *   tFileSystemDir dir = rOpenFileSystemDir (name);
 *   if (dir != NULL) {
 *     const char *entry;
 *     while ((entry = rNextFileSystemEntry(dir)) != NULL) {
 *          do_something_with_entry (entry);
 *     }
 *   }
 *
 *   MVS Note: calling these functions will result in a fatal error.
 *
 * rDirSeparator
 * -------------
 *  A read-only variable, containing the directory separator. Under
 *  UNIX: that's a '/', under Microsoft it is a '\'.
 *
 *  MVS Note: the variable contains the null-byte, since MVS has no comparable
 *            notion of a directory separator. Especially the dot contained
 *            in a library name is just a thing like letters or digits.
 *
 * rReplaceDirSeparator
 * --------------------
 *  Replaces '/' or '\' by the content of rDirSeparator
 *
 *  MVS Note: if called the function does not replace anything.
 *
 * General remarks:
 * ----------------
 *  Memory allocation
 *  -----------------
 *  We are using `rMemory' to allocate the required memory. Hence
 *  `BeginrMemory' should be called before `Begin_rFsearch', and
 *  `CloserMemory' should be called only after `Close_rFsearch'.
 *
 *  Directory separators '/' and '\'
 *  --------------------------------
 *  Depending on the operating system under which the module is used,
 *  the variable rDirSeparator is set accordingly.
 *  If one of the routines above generate a directory separator,
 *  the content of rDirSeparator is used.
 *  All '/' or a '\' characters contained in a file or directory name are
 *  replaced by the value of rDirSeparator by all routines of this module
 *  (i.e. rReplaceDirSeparator is called automatically).
 *  Hence one can e.g. specify filenames under Microsoft as "/foo/bar"
 *  or under UNIX as "\foo\bar" without any problems.
 *
 *  Case sensitivity
 *  ----------------
 *  The adding of directories (`rAddDir') as well as searching files
 *  (`rFindFile' and 'rFindFileDir') may handle the case of the given names
 *  in different ways:
 *  the module may be used in "case sensitive" or "case insensitive" mode.
 *  (see `Begin_rFsearch').
 *  In case-sensitive mode:
 *      a file is found if and only if the directory, file names and
 *      extensions are given as stored in the file system.
 *  In case insensitive mode:
 *      the behavior depends on whether caching is enabled or not
 *      (`rReadDirs', `rReadAllDirs'):
 *      If caching is enabled:
 *         `rReadDirs' / 'rReadAllDirs' modifies the directory names
 *         given by `rAddDir' (in the internal data structures) so that the
 *         directories are found even if their names were given with the
 *         wrong case  (if it exists at all).
 *         `rFindFile/Dir' tries to find the file in the (so modified) search
 *         directories without considering the case (inclusive the
 *         extensions).
 *      If caching is disabled:
 *         A simple heuristics is used for the name given by `rFindFile/Dir':
 *           1. try filename (and extension) as given
 *           2. try filename (and extension) in uppercase letters
 *           3. try filename (and extension) in lowercase letters
 *           4. try first letter of the filename in uppercase, the rest in
 *              lowercase.
 *           The case of the extension is never modified, if extensions
 *           differ in case, add them all.
 *         There is no such heuristics for the name of the search directories.
 *         It must be given with the correct case of the letters.
 *      If the file is found the result of `rFindFile/Dir' contains the name
 *      with the letters in the "correct" case, i.e. one can use the result
 *      in a call to open the file (e.g. `open' or OpenInput).
 *      Note: When used unter a Microsoft operating system, everything
 *            is done automatically case-_in_sensitive.
 */

/* Under which operating system are we compiled? */
/* if under MSDOS another compiler than GCC is used, check for
 * 	defined MSDOS
 * too.
 */
# undef rFsearch_UNIX
# undef rFsearch_MICROSOFT
# undef rFsearch_MVS

# if defined _MSC_VER | defined __BORLANDC__
#  define rFsearch_MICROSOFT
# elif defined MVS
#  define rFsearch_MVS
# else
#  define rFsearch_UNIX
# endif

/* Do we have functions to access a directory?
 * If rFsearch_HAVE_DIR_ACCESS is not defined results in following
 * restrictions:
 * - Caching does not work, i.e. a call to ReadDirs, ReadAllDirs is
 *   ignored.
 * - Handling of case insensitive of search paths in an environment, where
 *   file names are case sensitive does not work (since that is based on
 *   caching)
 * - rOpenFileSystemDir, rNextFileSystemEntry, rCloseFileSystemDir
 *   do not work.
 *
 */
# ifdef rFsearch_UNIX
#  define rFsearch_HAVE_DIR_ACCESS
# endif

# ifdef rFsearch_MICROSOFT
  # if _MSC_VER >= 1100
  /* Visual Studio 97 */
  # define rFsearch_HAVE_DIR_ACCESS
  # elif _MSC_VER >= 800
  /* App Studio 1.52 */
  /* sorry, do not know how to deal with :-( */
  # undef rFsearch_HAVE_DIR_ACCESS
  # endif
# endif

# ifdef rFsearch_MVS
#  undef rFsearch_HAVE_DIR_ACCESS
# endif

extern void Begin_rFsearch (rbool CaseSensitive);
/* Initialize the rFsearch module.
 * Use case sensitive (rtrue) or case insensitive (false) handling of
 * file and directory names.
 */

extern void Close_rFsearch (void);
/* Terminate the module (deallocates all allocated memory for this module) */

extern void rSetCaseSensitive (rbool CaseSensitive);
/* Set the value of `CaseSensitive'.
 * If rReadDirs() or rReadAllDirs() are called and a different
 * value is given to rSetCaseSensitive() than the one passed by
 * Begin_rFsearch(), rSetCaseSensitive() should be called before
 * rReadDirs() or rReadAllDirs().
 * After the calls of rReadDirs() or rReadAllDirs(), case sensitivity
 * may be changed as needed.
 */
extern rbool rGetCaseSensitive (void);
/* Returns the value of `CaseSensitive' given to `Begin_rFsearch' */

extern void Print_rFsearch (FILE *file);
/* Print the list of searched directories and extensions to `file'.
 * The entries are listed in the search order.
 */

extern const char rDirSeparator;
/* Read-only variable holding the directory separator character.
 * - UNIX:      '/'
 * - Microsoft: '\\'
 * - MVS:       '\0'
 */

extern void rReplaceDirSeparator (char *name);
/*  Replaces in `name' all '/' or '\' by the content of rDirSeparator
 *  MVS: do nothing
 */

extern rbool rDirOrFileExists (const char *name);
/* Returns true, iff `name' exists in the file system.
 * MVS: returns always true.
 */

extern rbool rDirIsReadable (const char *name);
/* Returns true, iff directory `name' can be opened for reading.
 * In case of errors `errno' is set appropriately.
 * MVS: returns always true.
 */

extern rbool rFileIsReadable (const char *name);
/* Returns true, iff file `name' can be opened for reading.
 * In case of errors `errno' is set appropriately.
 * MVS: this works under MVS.
 */

extern char *rDirName (char *name, char *buffer);
/* Returns the directory part of the `name'.
 * The resulting string is not terminated by "/" (one exception: if
 * the root directory / is the result, see below)
 * If `name' contains no directory part, "." is returned.
 * Trailing "/" are ignored.
 * e.g.   "/"           ==> "/"
 *        "/foo/"       ==> "/"
 *        "/foo//"      ==> "/"
 *        "/foo"        ==> "/"
 *        ""            ==> "."
 *        "foo"         ==> "."
 *        "foo/"        ==> "."
 *        "foo/bar"     ==> "foo"
 *        "foo/bar/"    ==> "foo"
 *        "foo/bar//"   ==> "foo"
 * In a Microsoft environment we have also:
 *        "C:"          ==> "C:"
 *        "C:foo"       ==> "C:"
 *        "C:foo\"      ==> "C:"
 *        "C:foo\bar"   ==> "C:foo"
 *        "C:\"         ==> "C:"
 *        "C:\foo"      ==> "C:"
 *        "C:\foo\"     ==> "C:"
 *        "C:\foo\bar"  ==> "C:\foo"
 *        "C:\foo\bar\" ==> "C:\foo"
 *
 * In a MVS environment:
 *        "a"           ==> "a"
 *        "a.b"         ==> "a.b"
 *        "a(m)"        ==> "a"
 *        "a.b(m)"      ==> "a.b"
 *
 * If `buffer' == NULL the result is copied to a static buffer
 *     and that address is returned.
 * If `buffer' == `name', `name' is modified and `name' is returned.
 * If `buffer' != NULL and `buffer' != `name' the result is copied to buffer
 *     and `buffer' is returned."
 */

extern char *rBaseName (char *name, char *buffer);
/* Returns the basename part of `name'.
 * Trailing "/" are ignored.
 * e.g.  "/"           ==> ""
 *       "/foo"        ==> "foo"
 *       "/foo/"       ==> "foo"
 *       "/foo//"      ==> "foo"
 *       "foo/bar"     ==> "bar"
 *       "foo/bar.ext" ==> "bar.ext"
 * In a Microsoft environment we have also:
 *       "C:               ==> ""
 *       "C:foo"           ==> "foo"
 *       "C:foo\"          ==> "foo"
 *       "C:foo\bar"       ==> "bar"
 *       "C:\              ==> ""
 *       "C:\foo"          ==> "foo"
 *       "C:\foo\"         ==> "foo"
 *       "C:\foo\bar"      ==> "bar"
 *       "C:\foo\bar.ext"  ==> "bar.ext"
 *
 * In a MVS environment:
 *        "a"           ==> ""
 *        "a.b"         ==> ""
 *        "a(m)"        ==> "m"
 *        "a.b(m)"      ==> "m"
 *
 * If `buffer' == NULL the result is copied to a static buffer
 *     and that address is returned.
 * If `buffer' == `name', `name' is modified and `name' is returned.
 * If `buffer' != NULL and `buffer' != `name' the result is copied to buffer
 *     and `buffer' is returned."
 */

extern void rDirBaseName (const char *name, char *dir_name, char *base_name);
/* Splits `name' into its dirname and basename part as described above.
 * `dir_name', and `base_name' must be allocated already and be large
 * enough to hold that information.
 */

extern void rDirBaseSuffixName (const char *name,
				char *dir_name, char *base_name, char *suffix);
/* Splits `name' into its dirname, basename and suffix part as described above.
 * A suffix is everything following the last '.'; The basename does neither
 * contain the suffix nor the '.'
 * `dir_name', `base_name', `suffix' must be allocated already and be large
 * enough to hold that information.
 * MVS: there is no suffix, therefore suffix is always "", dir_name and
 *      base_name are determined as shown above.
 */

typedef struct sFileSystemDir *tFileSystemDir;
extern tFileSystemDir rOpenFileSystemDir   (const char *name);
/* Opens the directory `name' so that its content can be read with
 * successive calls to 'rNextFileSystemEntry'.
 * Returns NULL, if the directory can't be opened.
 * MVS: calling this function will result in a fatal error.
 */

extern const char    *rNextFileSystemEntry (tFileSystemDir dir);
/* Reads one entry in the directory `dir'. If there is no more entry,
 * returns NULL.
 * MVS: calling this function will result in a fatal error.
 */
extern void           rCloseFileSystemDir  (tFileSystemDir dir);
/* Closes the directory.
 * MVS: calling this function will result in a fatal error.
 */

extern void rUseDirSet     (unsigned short set);
extern void rUseDirAllSets (void);
/* defines the set(s) to be used */

extern void rAddDir    (const char*  dir,
		        unsigned int mark,
		        rbool        at_end);
extern void rAddDirSet (const char*    dir,
		        unsigned int   mark,
		        rbool          at_end,
			unsigned short set);
/* Add the directory `dir' to the search list.
 * A terminating '/' is added automatically if needed (only for non-MVS)
 */

extern void rDeleteDirs (unsigned int mark);
/* Remove all directories with the given mark from the search list */

extern void rDeleteAllDirs (void);
/* Remove all directories from the search list */

extern void rReadDirs    (unsigned int mark);
/* Read the contents (name of files, subdirectories etc.) of all directories
 * with the given mark and store the directory entries in an internal cache.
 * Use the cached directory entries from now on.
 * MVS: nothing is done.
 */

extern void rReadAllDirs (void);
/* Read the contents (name of files, subdirectories etc.) of all directories
 * and store the directory entries in an internal cache.
 * Use the cached directory entries from now on.
 * MVS: nothing is done.
 */

extern void rAddExtension (const char *ext);
/* Add a file extension to the list of extensions */

extern void  rDeleteExtensions (void);
/* Delete all extensions from the extensions list */

extern char *rFindFile    (const char* name);
extern char *rFindFileSet (const char* name, unsigned short set);
/* If file is found and is readable return static pointer to the complete
 * name, otherwise return NULL.
 * If the file is found in the current directory (`./'), no leading `./'
 * is added (only non-MVS).
 * NOTE: - do not modify the resulting string
 *       - in most cases, a pointer to a static variable is returned.
 */

extern char *rFindFileSameDir    (const char *cur_file, const char* name);
extern char *rFindFileSameDirSet (const char *cur_file, const char* name,
				  unsigned short set);
/* First search the file 'name' in the directory given as part of the filename
 * 'cur_file' gives.
 * If not found, call rFindFile.
 * If the file is found in the current directory (`./'), no leading `./'
 * is added (only non-MVS).
 * NOTE: - do not modify the resulting string
 *       - in most cases, a pointer to a static variable is returned.
 */

extern char *rFindFileDir    (const char *dir, const char* name);
/* Search the file 'name' in the directory 'dir'.
 * If it is found and is readable return static pointer to the complete
 * path name, otherwise return NULL.
 * If the file is found in the current directory (`./'), no leading `./'
 * is added (only non-MVS).
 * The trailing / in the directory is optional.
 * NOTE: - do not modify the resulting string
 *       - in most cases, a pointer to a static variable is returned.
 */

extern char *rSetSearchPathStart (const char *path);
/* Set the start of the search path for rFindFile.
 * If a valid search path is found, return it, otherwise return NULL.
 * Initially all directories given by rAddDir are searched.
 * This is a global setting, i.e. the start point remains valid, up to a
 * next call of 'rSetSearchPathStart'.
 *
 * The actual algorithm is:
 * If 'path' == NULL then all directories given by rAddDir/rAddDirSet are
 *                        searched, the first path is returned.
 * If 'path' != NULL then
 *    1. A directory is searched in the entire list of search path
 *       (given by rAddDir, and independent of any directory set),
 *       starting with the current search point (i.e. the directory set
 *       by the previous call of rSetSearchPathStart), which
 *       a) is equal to 'path' or
 *       b) contains 'path' (i.e. the path 'a/b/c' is contained in 'a/b'
 *          as a subdirectory)
 *    2. The next directory given by rAddDir/rAddDirSet will be used as
 *       starting point.
 *    3. If there is such a directory, use it as starting point and return it.
 *       If there is no such directory, return NULL. The behaviour of
 *       rFindFile is undefined in this case.
 *
 * This may be used e.g. to implement the #include_next-feature of GNU-cc
 */

extern rbool rFsearchShowDebug;
/* If debugging of the rFsearch module is enabled (c.f. `rFsearch.c')
 * then if `rFsearchShowDebug' is true,
 *      then debugging output is enabled,
 *      else debugging output is suppressed (default)
 * else this variable has no meaning.
 */

/*
 * Log: rFsearch.h,v $
 * Revision 1.38  2007/10/08 09:24:30  vollmer
 * Fixed handling of trailing / in sub-directory search, which causes
 * unneeded reread of directories
 *
 * Revision 1.37  2007/06/19 15:51:47  vollmer
 * Fixed handling of sub-directories
 * Fixed handling for MVS
 * Fixed handling of directory sets for sub directories
 *
 * Revision 1.36  2006/02/13 09:47:55  vollmer
 * rFindFileDir: allow, that the trailing / in the directory is optional
 *
 * Revision 1.35  2005/04/13 18:54:44  vollmer
 * Added rSetSearchPathStart
 *
 * Revision 1.34  2005/04/04 09:34:29  vollmer
 * rFsearch.c: undef DEBUG_RFSEARCH is the default now
 *
 * Revision 1.33  2005/04/04 08:43:56  vollmer
 * rFindFile / MVS: Added a check if a name already exists
 *
 * Revision 1.32  2005/03/24 10:59:38  vollmer
 * Added the notion of directory sets and routines dealing with them.
 *
 * Revision 1.31  2004/07/29 15:14:25  vollmer
 * Added limited support for MVS PDS/PDSE (extented/partitioned data set)
 * file names
 *
 * Revision 1.30  2003/09/26 16:19:39  vollmer
 * Added rFindFileSameDir
 *
 * Revision 1.29  2003/08/04 13:25:22  vollmer
 * rFindFileDir: fixed search
 *
 * Revision 1.28  2003/04/07 12:33:05  vollmer
 * Added partial support for MVS
 *
 * Revision 1.27  2002/12/03 17:58:38  vollmer
 * The case of the extension is never modified, when searching
 * case insensitive and not-cached
 *
 * Revision 1.26  2002/10/11 13:21:32  vollmer
 * Added rFindFileDir and rDirBaseSuffixName
 *
 * Revision 1.24  2001/01/29 14:00:55  vollmer
 * - rFsearch.h: remove "defined MSDOS" from the #if to check for operating
 *               system
 * - rFsearch.c: Use the new rString.h module instead of the old Reuse.h and
 *   avoid using string.h and strings.h
 * - rFsearD.c:  changed check for "rFsearD.c", since sometimes this file
 * 	      is renamed to "rFsearD.cxx"
 *
 * Revision 1.23  2000/07/21 12:19:37  vollmer
 * Fixed rBasename, in one case the result got a leading /
 *
 * Revision 1.22  2000/05/08 11:20:03  vollmer
 * Added Copyright notice
 *
 * Revision 1.21  2000/04/26 20:50:37  vollmer
 * Fixed a problem, when using the module in a loop
 *
 * Revision 1.20  2000/04/25 18:28:24  vollmer
 * For Microsoft: Fixed handling of drive letters (eg. "C:") in all routines
 *
 * Revision 1.16  2000/04/25 09:27:34  vollmer
 * - added rFsearch_HAVE_DIR_ACCESS, so that the module compiles when there are
 *   problems with the reading of directories-code
 * - Fixed rDirOrFileExists for Microsoft, since that 'stat' call cares about
 *   trailing \
 *
 * Revision 1.15  2000/04/22 16:11:59  vollmer
 * Begin_rFsearch (Close_rFsearch) may be called several times in a row
 * without calling Close_rFsearch (Begin_rFsearch) between.
 * Only the first call takes effect.
 *
 * Revision 1.14  2000/02/09 23:36:05  vollmer
 * Fixed another type mismatch in rFsearch.c
 *
 * Revision 1.13  2000/02/05 15:05:02  vollmer
 * rFindFile behaves now equal with and without caching: it is checked
 * that the file is readable.
 *
 * Revision 1.12  2000/02/01 10:35:02  vollmer
 * Added better handling of S_IFREG and S_ISREG macros
 *
 * Revision 1.11  2000/01/11 12:40:21  vollmer
 * Replaced a `==' by `=' in rFsearch.c
 *
 * Revision 1.10  2000/01/07 08:45:15  vollmer
 * Fixed comments
 *
 * Revision 1.9  2000/01/05 11:49:02  vollmer
 * Added support for Microsoft OS
 *
 * Revision 1.5  1999/11/18 17:23:19  vollmer
 * rFindFile: Removed one leading '/'  from leading '//' in the returned name
 *
 * Revision 1.4  1999/08/19 12:15:21  vollmer
 * Added rDirOrFileExists
 * Added 4. heuristics in rFindFile
 * rFindFile strips leading ./ in the result
 *
 * Revision 1.3  1999/08/18 09:47:41  vollmer
 * Clarified the documentaion
 *
 * Revision 1.2  1999/08/10 09:18:38  vollmer
 * Added rFileIsReadable / rDirIsReadable
 *
 * Revision 1.1  1999/08/09 14:50:18  vollmer
 * Initial revision
 */
# endif
