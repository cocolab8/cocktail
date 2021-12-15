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
 * Id: rFsearch.c,v 1.57 2009/08/03 15:25:29 vollmer Exp $
 */

/****************************************************************************/

/* If the `assert' macros below are triggered, indicate programming error :-)
 * i.e. wrong initialization / finalization etc.
 */
/* # undef DEBUG_RFSEARCH */
# ifdef DEBUG_RFSEARCH
  static int debug_func_nesting = 0;
  # define DENTER(args)  						\
		{if (rFsearchShowDebug) { 				\
                     printf ("%*s| ", debug_func_nesting+2, " ");	\
		     printf args;					\
                 }							\
   	         debug_func_nesting += 2;				\
	        }
  # define DEXIT(args)  						\
		{if (rFsearchShowDebug) { 				\
                     printf ("%*s| ", debug_func_nesting+2, " ");	\
		     printf args;					\
                 }							\
   	         debug_func_nesting -= 2;				\
	        }
  # define DPRINTF(args)						\
		{if (rFsearchShowDebug) {				\
		    printf ("%*s| ", debug_func_nesting+2, " ");	\
		    printf args;					\
                 }							\
                }

  /* enable assert macro's in any case */
  # undef  NDEBUG
# else
  # define DENTER(func)
  # define DEXIT(args)
  # define DPRINTF(args)
  /* disable assert macro's */
  # ifndef NDEBUG
  # define NDEBUG
  # endif
# endif

/****************************************************************************/

# include <assert.h>
# include <stdlib.h>
# include <stdio.h>
# include <ctype.h>

# include "rSystem.h"
# include "rMemory.h"
# include "rSystem.h"
# include "DynArray.h"
# include "rFsearch.h"
# include "rString.h"

# ifdef DEBUG_RFSEARCH
  rbool rFsearchShowDebug = rtrue;
# else
  rbool rFsearchShowDebug = rfalse;
# endif

/****************************************************************************
 * UNIX specific stuff
 ****************************************************************************/

# ifdef rFsearch_UNIX
# include <sys/types.h>
# include <sys/stat.h>
# include <dirent.h>

# define STRCMP     strcmp
# define STRCASECMP strcasecmp

/* handling file system directories */
struct sFileSystemDir {
# ifdef rFsearch_HAVE_DIR_ACCESS
  DIR           *dir;
  struct dirent *entry;
# endif
  rbool          first;    /* true iff the next call to
			    * rFileSystemNext is the first call
			    */
};

const char rDirSeparator = '/';
# endif

/***************************************************************************
 * MICROSOFT specific stuff
 ***************************************************************************/

# ifdef rFsearch_MICROSOFT
# include <sys/types.h>
# include <sys/stat.h>
# include <ctype.h>

# if _MSC_VER >= 1400
  /* MS Visual Studio 2005 changed names (and return values) ... */
  # include <io.h>
  # define FindClose(D)         _findclose(D)
  # define FindFirstFile(N,E)   _findfirst(N,E)
  # define FindNextFile(N,E)    (_findnext(N,E)==0)
	   /* NOTE: _findnext()    returns 0 if a file is found
            *       FindNextFile() returns 1 if a file is found
	    */
  # define cFileName            name
  # define MAX_PATH             _MAX_PATH
  # define HANDLE               intptr_t
  # define WIN32_FIND_DATA      struct _finddata_t
  # define INVALID_HANDLE_VALUE -1L
# else
  # include <windows.h>
# endif

/* Microsoft: all comparison is done case-insensitive */
# define STRCMP      _stricmp
# define STRCASECMP  _stricmp

struct sFileSystemDir {
# ifdef rFsearch_HAVE_DIR_ACCESS
  HANDLE          dir;

  WIN32_FIND_DATA entry;
# endif
  rbool           first;    /* true iff the next call to
			     * rFileSystemNext is the first call
			     */
};


const char rDirSeparator = '\\';
# endif

/****************************************************************************
 * MVS specific stuff
 ****************************************************************************/

# ifdef rFsearch_MVS
# define STRCMP     strcmp
# define STRCASECMP strcasecmp

/* handling file system directories */
struct sFileSystemDir {
# ifdef rFsearch_HAVE_DIR_ACCESS
  DIR           *dir;
  struct dirent *entry;
# endif
  rbool          first;    /* true iff the next call to
			    * rFileSystemNext is the first call
			    */
};

const char rDirSeparator = '\0';
# endif

/****************************************************************************/

static rbool case_sensitive = rtrue;
/* true, if files should be searched in a case sensitive way, false else. */

typedef int (*tcmp_StringFunc) (const char*, const char*);
static tcmp_StringFunc cmp_string_func = NULL;

/****************************************************************************/

static unsigned short current_set = 0;
/* 0: use all directory sets */

/****************************************************************************/

static char *find_file_last_search_path = NULL;

/****************************************************************************/

typedef enum {
  unknown_file_state,
  file_readable,
  file_not_readable
} tFileState;

/* String with its length and size */
typedef struct {
  char      *Str;
  size_t     Len;           /* = strlen (Str)                        */
  size_t     Size;          /* = number of bytes allocated for `Str' */
  tFileState file_state;    /* if used to store a filename in the cache,
			     * the readability state of that file, otherwise
			     * undefined.
			     */
} tStringLS;
# define INIT_STRING {NULL,0,0,unknown_file_state}
# define STRING_RESERVE 10       /* When allocating so much extra space
				  * is added. E.g. adding \* for Microsoft
				  * directory names
				  */

/* linked list of directories */
# define INIT_MAX_DIR_ENTRIES 100   /* initial size of "Entries" */
typedef struct sDirEntry *tDirEntryPtr;
typedef struct sDirEntry {
  tStringLS      Dir;     /* a trailing '/' will be added if needed   */
  long           Mark;    /* Mark >= 0  : given by the user
			   * Mark == NO_DIR_MARK      : "no_dir", see below
			   * Mark == ROOT_DIR_MARK    : "root_dir", see below
			   * Mark == AUTO_CACHE_MARK  : directory added when
			   *              in rFindFile the searched filename
			   *              contains a "/", i.e. is a partial
			   *              path.
			   * Only directories with Marks != AUTO_CACHE_MARK
			   * are used as search directories.
			   * Directories with Mark = AUTO_CACHE_MARK
			   * are appended at the end of the directory list.
			   */
  tStringLS     *Entries; /* dynamic array of strings,
			   * If non-NULL contains the content of the directory
			   * alphabetically sorted.
			   */
  unsigned long  Max;     /* maximum number of elements of Entries    */
           long  Last;    /* Entries[0] .. Entries[Last] are used
			   * Last == -1:  array contains no entries
			   */
  tDirEntryPtr   Next;    /* next entry in the list                   */
  rbool          Exists;  /* true, iff the directory exists           */
  unsigned short Set;     /* to which set it belongs, 0: all sets     */
} tDirEntry;

# define DEFAULT_DIR_MARK -1
# define ROOT_DIR_MARK    -2
# define AUTO_CACHE_MARK  -3

/* list of directories given by the user (via rAddDir) */
static tDirEntryPtr user_dirs = NULL;  /* pointer to the first list element */
static tDirEntryPtr dirs_end  = NULL;  /* pointer to the last  list element */
static tDirEntryPtr current_user_dirs = NULL; /* start search with that dir */

/* list of auto cached directories */
static tDirEntryPtr auto_cached_dirs = NULL;

/* If the user has not provided a list of directories, use this one. It is
 * the current directory
 */
static tDirEntryPtr no_dir    = NULL;

/* Use this dir-entry for handling absolute path in rFindFile
 * Its directory name is "/"
 */
static tDirEntryPtr root_dir  = NULL;

/* linked list of extensions */
typedef struct sExtEntry *tExtEntryPtr;
typedef struct sExtEntry {
  tStringLS     Ext;
  tExtEntryPtr  Next; /* next entry in the list */
} tExtEntry;

/* list of extension given by the user (via rAddExtension) */
static tExtEntryPtr user_exts   = NULL;

/* If the user has not provided any extensions, use this one. It is the
 * empty extension.
 */
static tExtEntryPtr no_ext      = NULL;

/* strlen of the longest extension */
static size_t  ext_max_len = 0;

/* strlen of the longest directory name used so far */
static size_t dir_max_len  = 0;

/* call function `conv' for each char of the string `s' */
# define STRCONV(conv,s)  {char *PP; 				\
			   for (PP=(s); *PP; PP++) {		\
				*PP=(char)conv(*PP);		\
			  }}

/* call function `conv' for each char of the string `s' until 'e'
 * (a pointer to a char inside 's') is reached. '*e' is not converted.
 */
# define STRCONV2(conv,s,e) {char *PP; 				\
			     for (PP=(s); PP<(e); PP++) {	\
			       *PP=(char)conv(*PP);		\
			    }}

# if defined (rFsearch_UNIX) || defined (rFsearch_MICROSOFT)
static void  read_one_dir     (tDirEntryPtr dir);
static rbool read_dir         (tDirEntryPtr dir);
static void  read_dir_no_case (tDirEntryPtr dir);
# endif

#define use_dir(set) ((current_set == 0) || (current_set == (set)))
/* return true, if the directory should be searched */

static void print_dir  (FILE *file, tDirEntryPtr dir);
static void print_dirs (FILE *file, tDirEntryPtr dir);

/****************************************************************************
 * Handling strings
 ****************************************************************************/

static tStringLS init_String_init = INIT_STRING;
static void init_String (tStringLS *s)
/* initializes `s', used at places where an assignment of INIT_STRING is
 * not syntactical legal.
 */
{
  memcpy (s, &init_String_init, sizeof (tStringLS));
}

/****************************************************************************/

static void free_String (tStringLS *s)
/* Deallocates a tStringLS */
{
  if (s->Str != NULL) {
    Free (s->Size, s->Str);
    s->Str  = NULL;
    s->Size = 0;
  }
}

/****************************************************************************/

static void alloc_String (tStringLS *s, size_t requested_size)
/* Allocates a string large enough to hold `requested_size + STRING_RESERVE'
 * char's. `s' must be initialized.
 * If `s.str' is already large enough nothing is done.
 */
{
  requested_size += STRING_RESERVE;

  if (requested_size >= s->Size) {
    free_String (s);
    s->Size = 2 * requested_size;
    s->Str  = Alloc (s->Size);
  }
  s->Len = 0;
}

/****************************************************************************/

static void copy_String (tStringLS *dest, const tStringLS *src)
/* allocate a tStringLS and copy src into it */
{
  alloc_String (dest, src->Len);
  dest->Len = src->Len;
  strcpy (dest->Str, src->Str);
}

/****************************************************************************/

# if defined (rFsearch_UNIX) || defined (rFsearch_MICROSOFT)
static void copy_String_char (tStringLS *dest, const char c)
/* allocate a tStringLS and copy c into it */
{
  alloc_String (dest, 2);
  dest->Len    = 1;
  dest->Str[0] = c;
  dest->Str[1] = '\0';
}
# endif

/****************************************************************************/

static void copy_String_str (tStringLS *dest, const char *src)
/* allocate a tStringLS and copy src into it */
{
  size_t len = strlen (src);
  alloc_String (dest, len);
  dest->Len = len;
  strcpy (dest->Str, src);
}

/****************************************************************************/

static void empty_String (tStringLS *dest)
/* make the string empty */
{
  dest->Len = 0;
}

/****************************************************************************/

static void append_String (tStringLS *dest, const tStringLS *src)
/* appends 'src' to 'dest' */
{
  assert (dest->Size > dest->Len + src->Len);
  strcpy (&dest->Str[dest->Len], src->Str);
  dest->Len += src->Len;
  assert (dest->Len == strlen (dest->Str));
}

/****************************************************************************/

static void append_String_char_ptr (tStringLS *dest,
				    const char *src,
				    int src_len)
/* appends 'src' to 'dest' */
{
  assert (dest->Size > dest->Len + src_len);
  strcpy (&dest->Str[dest->Len], src);
  dest->Len += src_len;
  assert (dest->Len == strlen (dest->Str));
}

/****************************************************************************/

static void append_String_char (tStringLS *dest, const char ch)
/* if ch != '\0' appends ch to 'dest' */
{
  assert (dest->Size > dest->Len + 1);
  if (ch) {
    dest->Str[dest->Len++] = ch;
    dest->Str[dest->Len]   = '\0';
  }
}

/****************************************************************************/

static int cmp_String (const void *A, const void *B)
/* compares two tStringLS, takes setting of case_sensitive into account */
{
  return cmp_string_func (((tStringLS *)A)->Str, ((tStringLS *)B)->Str) ;
}

/****************************************************************************/

# if defined (rFsearch_UNIX) || defined (rFsearch_MICROSOFT)
static void append_String_trailing_dirsep (tStringLS *s)
/* For Non-MVS: add a trailing / if needed */
{
  /* terminating '/' required? */
  if (s->Str[s->Len - 1] != rDirSeparator) {
    /* our strings are large enough to store one more char,
     * since we use STRING_RESERVE, c.f. alloc_String
     */
    s->Str[s->Len++] = rDirSeparator;
    s->Str[s->Len]   = '\0';
  }
}
# else
  # define append_String_trailing_dirsep(s)
# endif

/****************************************************************************/

/****************************************************************************
 * handling file and directory names
 ****************************************************************************/

static void replace_dir_separator (char *name)
/* Replaces directory separators. */
{
# ifdef rFsearch_UNIX
  while (((name = strchr (name, '\\'))) != NULL) {
    *name++ = '/';
  }
# endif
# ifdef rFsearch_MICROSOFT
  while (((name = strchr (name, '/'))) != NULL) {
    *name++ = '\\';
  }
# endif
# ifdef rFsearch_MVS
  /* nothing */
# endif
}

/****************************************************************************/

static void copy_replace_dir_separator (tStringLS  *name,
					const char *str,
					size_t      len)
/* Copies `str' to `name' and replaces directory separators.
 * `name' must be initialized but will be allocated here
 */
{
  char *c;
  alloc_String (name, len + 1);
  name->Len = len;
  for (c = name->Str; *str != '\0'; str++, c++) {
    *c = *str;
# ifdef rFsearch_UNIX
    if (*c == '\\') *c = '/';
# endif
# ifdef rFsearch_MICROSOFT
    if (*c == '/') *c = '\\';
# endif
# ifdef rFsearch_MVS
    /* nothing */
# endif
  }
  name->Str[len] = '\0';
}

void
rReplaceDirSeparator (char *name)
{
  DENTER (("rReplaceDirSeparator: name = `%s'\n", name));
  replace_dir_separator (name);
  DEXIT   (("res=`%s'\n", name));
}

/****************************************************************************/

static tStringLS rBaseName_buf1 = INIT_STRING;
static tStringLS rBaseName_buf2 = INIT_STRING;
char *rBaseName (char *name, char *buffer)
{
  /* we use two buffers in order to avoid problems with overlapping strings */
  char *res;
  size_t len = strlen (name);

  DENTER (("rBaseName name = `%s'\n", name));

  copy_replace_dir_separator (&rBaseName_buf1, name, len);

# if defined (rFsearch_UNIX) || defined (rFsearch_MICROSOFT)
  {
    char *slash;
    slash = strrchr (rBaseName_buf1.Str, rDirSeparator);

    /* skip trailing "/" */
    while (slash      != NULL && /* ok there is one            */
	   *(slash+1) == '\0') { /* but it is a trailing one   */
      *slash = '\0';
      slash  = strrchr (rBaseName_buf1.Str, rDirSeparator);
    }

    if (buffer == NULL) {
      /* return the stuff in a static variable */
      if (slash == NULL) {
	/* no directory part */
	res = rBaseName_buf1.Str;
      } else {
	copy_String_str (&rBaseName_buf2, slash + 1);
	res = rBaseName_buf2.Str;
      }
    } else if (name == buffer) {
      /* inplace */
      strcpy (name, (slash == NULL) ? rBaseName_buf1.Str : (slash + 1));
      res = name;
    } else {
      /* separate buffer given by the user */
      strcpy (buffer, (slash == NULL) ? rBaseName_buf1.Str : (slash + 1));
      res = buffer;
    }

# ifdef rFsearch_MICROSOFT
    if (slash == NULL) {
      /* no slash or only trailing ones */
      char *colon = strchr (res, ':');
      if (colon != NULL) {
	res = colon + 1; /* that's ok, in worst case it's already '\0' */
      }
    }
# endif
  }
# endif

# ifdef rFsearch_MVS
  {
    /* filename = dirname(member) */
    char *from = strrchr (rBaseName_buf1.Str, '(');
    char *to   = strrchr (rBaseName_buf1.Str, ')');
    if (from && to) {
      from ++;
      *to = '\0';
    } else {
      from = "";
    }

    if (buffer == NULL) {
      /* return the stuff in a static variable */
      copy_String_str (&rBaseName_buf2, from);
      res = rBaseName_buf2.Str;
    } else if (name == buffer) {
      /* inplace */
      strcpy (name, from);
      res = name;
    } else {
      /* separate buffer given by the user */
      strcpy (buffer, from);
      res = buffer;
    }
  }
# endif

  DEXIT (("res=`%s'\n", res));
  return res;
}

/****************************************************************************/

static tStringLS rDirName_my_buffer = INIT_STRING;
char *rDirName (char *name, char *buffer)
{
  char *res;

  DENTER (("rDirName name = `%s'\n", name));

# if defined (rFsearch_UNIX) || defined (rFsearch_MICROSOFT)
  {
    char *slash;
    /* which buffer should be used */
    if (buffer == NULL) {
      /* static variable */
      copy_replace_dir_separator (&rDirName_my_buffer, name, strlen (name));
      res = rDirName_my_buffer.Str;
    } else if (name == buffer) {
      /* inplace */
      res = name;
      replace_dir_separator (res);
    } else {
      /* buffer given by user */
      /* Note: replace_dir_separator does not use Len and Size of `s' */
      res = buffer;
      strcpy (res, name);
      replace_dir_separator (res);
    }

    slash = strrchr (res, rDirSeparator);

    /* remove trailing "/" */
    while (slash      != NULL && /* ok there is one            */
	   *(slash+1) == '\0' && /* but is a trailing one      */
	   slash      != res) {  /* but not the root directory */
      *slash = '\0';
      slash = strrchr (res, rDirSeparator);
    }

    if (slash == NULL) {
      /* no directory part contained, or only trailing slashes given */
# ifdef rFsearch_MICROSOFT
      /* do we have a drive letter? */
      char *colon = strchr (res, ':');
      if (colon != NULL) {
	*(colon + 1) = '\0'; /* that's ok, in worst case it's already '\0' */
      } else {
	strcpy (res, ".");
      }
# endif
# ifdef rFsearch_UNIX
      strcpy (res, ".");
# endif
    } else {
      /* directory part contained */
      if (slash == res) {
	/* absolute path in the root directory */
	res[0] = rDirSeparator;
	res[1] = '\0';
      } else {
	*slash = '\0';
      }
    }
  }
# endif

# ifdef rFsearch_MVS
  {
    /* filename = dirname(member) */
    char *p = strrchr (name, '(');

    if (buffer == NULL) {
      /* static variable */
      copy_String_str (&rDirName_my_buffer, name);
      if (p) {
	rDirName_my_buffer.Len -= p - name;
      }
      res = rDirName_my_buffer.Str;
    } else if (name == buffer) {
      /* inplace */
      res = name;
    } else {
      /* buffer given by user */
      strcpy (buffer, name);
      res = buffer;
    }
    if (p) {
      res[p - name] = '\0';
    }
  }
# endif

  DEXIT (("res=`%s'\n", res));
  return res;
}

/****************************************************************************/

static void dir_base_name (const char *name,
			   tStringLS *dir_name,
			   tStringLS *base_name)
{
  copy_String_str (dir_name, name);

# if defined (rFsearch_UNIX) || defined (rFsearch_MICROSOFT)
  {
    char *slash;
    slash = strrchr (dir_name->Str, rDirSeparator);

    /* skip trailing "/" */
    while (slash      != NULL &&           /* ok there is one            */
	   *(slash+1) == '\0' &&           /* but is is a trailing one   */
	   slash      != dir_name->Str) {  /* but not the root directory */
      *slash = '\0';
      dir_name->Len = slash - dir_name->Str;
      slash  = strrchr (dir_name->Str, rDirSeparator);
    }

    if (slash == NULL) {
      /* no directory part contained, or only trailing slashes given */
# ifdef rFsearch_MICROSOFT
      char *colon = strchr (dir_name->Str, ':');
      /* do we have a drive letter? */
      if (colon != NULL) {
	copy_String_str (base_name, colon+1);
	*(colon + 1)  = '\0';
	dir_name->Len = strlen (dir_name->Str);
      } else {
	copy_String      (base_name, dir_name);
	copy_String_char (dir_name, '.');
      }
# endif
# ifdef rFsearch_UNIX
      copy_String (base_name, dir_name);
      copy_String_char (dir_name, '.');
# endif
    } else {
      *slash = '\0';
      dir_name->Len = slash - dir_name->Str;
      copy_String_str (base_name, slash + 1);
      if (slash == dir_name->Str) {
	/* root directory */
	copy_String_char (dir_name, rDirSeparator);
      }
    }

    assert (dir_name->Len  == strlen (dir_name->Str));
    assert (base_name->Len == strlen (base_name->Str));
  }
# endif

# ifdef rFsearch_MVS
  {
    /* filename = dirname(member) */
    char *p1 = strrchr (dir_name->Str, '(');
    char *p2 = strrchr (dir_name->Str, ')');
    if (p1 && p2) {
      *p1 = '\0'; p1++;
      *p2 = '\0';
    } else {
      p1 = "";
    }
    copy_String_str (base_name, p1);
  }
# endif
}

static tStringLS rDirBaseName_Name     = INIT_STRING;
static tStringLS rDirBaseName_DirName  = INIT_STRING;
static tStringLS rDirBaseName_BaseName = INIT_STRING;
void rDirBaseName (const char *name, char *dir_name, char *base_name)
{

  DENTER (("rDirBaseName name = `%s'\n", name));

  copy_replace_dir_separator (&rDirBaseName_Name, name, strlen(name));
  dir_base_name (rDirBaseName_Name.Str,
		 &rDirBaseName_DirName,
		 &rDirBaseName_BaseName);
  strcpy        (dir_name,  rDirBaseName_DirName.Str);
  strcpy        (base_name, rDirBaseName_BaseName.Str);

  DEXIT (("dir_name =`%s'; base_name = `%s'\n", dir_name, base_name));
}

void rDirBaseSuffixName (const char *name,
			 char *dir_name, char *base_name, char *suffix)
{
  DENTER (("rDirBaseSuffixName name = `%s'\n", name));

  rDirBaseName (name, dir_name, base_name);
# if defined (rFsearch_UNIX) || defined (rFsearch_MICROSOFT)
  {
    char *dot;
    if ((dot = strchr (base_name, '.')) != NULL) {
      *dot = '\0';
      strcpy (suffix, dot+1);
    } else {
      suffix[0] = '\0';
    }
  }
# endif
# ifdef rFsearch_MVS
  strcpy (suffix, "");
# endif

  DEXIT (("dir_name =`%s', base_name = `%s', suffix = `%s'\n",
	  dir_name, base_name, suffix));
}

/****************************************************************************
 * handling files
 ****************************************************************************/

static rbool file_is_readable (const tStringLS *name)
{
  tFile       f;
  rbool       res;

  f = OpenInput (name->Str);
  if (f >= 0) {
    res = rtrue;
    rClose (f);
  } else {
    res = rfalse;
  }

  /* is a regular file? */
# ifdef rFsearch_UNIX
  if (res) {
    struct stat buf;
    if (stat (name->Str, &buf) >= 0) {
# ifdef S_IFREG
      res = (buf.st_mode & S_IFREG) != 0;
# elif defined S_ISREG
      res = S_ISREG (buf.st_mode);
# else
# error "neither S_ISREG nor S_IFREG defined"
# endif
    }
  }
# endif

# ifdef rFsearch_MICROSOFT
  if (res) {
    struct _stat buf;
    if (_stat (name->Str, &buf) == 0) {
      res = (rbool) ((buf.st_mode & _S_IFREG) != 0);
    }
  }
# endif

  /* for MVS we assume it is regular -> nothing more to do */
  return res;
}

static tStringLS rFileIsReadable_Name = INIT_STRING;
rbool rFileIsReadable (const char *name)
{
  rbool          res;

  DENTER (("rFileIsReadable `%s'\n", name));
  copy_replace_dir_separator  (&rFileIsReadable_Name, name, strlen(name));
  res = file_is_readable (&rFileIsReadable_Name);
  DEXIT (("res=%s\n", res? "true" : "false"));
  return res;
}

/****************************************************************************/

static rbool dir_or_file_exists (const tStringLS *name)
{
  rbool res;
# ifdef rFsearch_UNIX
  {
    struct stat buf;
    DENTER (("dir_or_file_exists, name=`%s'\n", name->Str));
    res = (stat (name->Str, &buf) >= 0);
  }
# endif

# ifdef rFsearch_MICROSOFT
  {
    struct _stat buf;
    DENTER (("dir_or_file_exists, name=`%s'\n", name->Str));
    /* Microsoft's variant of 'stat' cares about a trailing '\', hence
     * we must remove it before calling stat, but not for things like
     * "C:\ "
     */
    if (name->Str[1] == ':' && name->Str[2] == '\\' && name->Str[3] == '\0') {
      res = (rbool) (_stat (name->Str, &buf) == 0);
    } else if (name->Len > 1 && name->Str[name->Len-1] == '\\') {
      	name->Str[name->Len-1] = '\0';
	res = (rbool) (_stat (name->Str, &buf) == 0);
	name->Str[name->Len-1] = '\\';
    } else {
      res = (rbool) (_stat (name->Str, &buf) == 0);
    }
  }
# endif

# ifdef rFsearch_MVS
  res = rtrue;
# endif

  DEXIT (("dir_or_file_exists `%s' : %s\n",
	  name->Str,
	  res? "true" : "false"));
  return res;
}

static tStringLS rDirOrFileExists_Name = INIT_STRING;
rbool rDirOrFileExists (const char *name)
{
  rbool          res;

  DENTER (("rDirOrFileExists `%s'\n", name));
  copy_replace_dir_separator (&rDirOrFileExists_Name, name, strlen (name));
  res = dir_or_file_exists   (&rDirOrFileExists_Name);
  DEXIT (("res=%s\n", res? "true" : "false"));
  return res;
}

/****************************************************************************
 * handling file system directories
 ****************************************************************************/

# ifdef rFsearch_MICROSOFT
static tStringLS open_file_system_dir_Name = INIT_STRING;
# endif
static tFileSystemDir open_file_system_dir (const tStringLS *name)
{

# if defined (rFsearch_UNIX) || defined (rFsearch_MICROSOFT)
# ifdef rFsearch_HAVE_DIR_ACCESS
  tFileSystemDir dir = (tFileSystemDir) Alloc (sizeof (struct sFileSystemDir));
  DPRINTF (("open_file_system_dir: `%s'\n", name->Str));
  if (dir == NULL) goto error;

# ifdef rFsearch_UNIX
  dir->dir = opendir (name->Str);
  if (dir->dir == NULL) goto error;
# endif

# ifdef rFsearch_MICROSOFT
  {
    copy_String (&open_file_system_dir_Name, name);
    assert (open_file_system_dir_Name.Len + 3 <=
	    open_file_system_dir_Name.Size); /* appending "\*" for MICROSOFT */
    open_file_system_dir_Name.Str[open_file_system_dir_Name.Len++] = '\\';
    open_file_system_dir_Name.Str[open_file_system_dir_Name.Len++] = '*';
    open_file_system_dir_Name.Str[open_file_system_dir_Name.Len]   = '\0';
    if (open_file_system_dir_Name.Len >= MAX_PATH) goto error;
    dir->dir = FindFirstFile (open_file_system_dir_Name.Str, &(dir->entry));
    if (dir->dir == INVALID_HANDLE_VALUE) goto error;
  }
# endif

  /* every thing is ok */
  dir->first = rtrue;
  return dir;

 error:
  /* directory can not be opened, or not enough memory */
  Free (sizeof (struct sFileSystemDir), (char*) dir);
# endif
# endif

# ifdef rFsearch_MVS
  fprintf (stderr, "rFsearch::rOpenFileSystemDir not available under MVS\n");
  exit (1);
# endif

  return NULL;
}

static tStringLS rOpenFileSystemDir_Name = INIT_STRING;
tFileSystemDir rOpenFileSystemDir (const char *name)
{
  tFileSystemDir dir;
  DENTER (("rOpenFileSystemEntry: %s\n", name));
  copy_replace_dir_separator (&rOpenFileSystemDir_Name, name, strlen (name));
  dir = open_file_system_dir (&rOpenFileSystemDir_Name);
  DEXIT (("%s\n", dir? "<ok>":"<error>"));
  return dir;
}

/****************************************************************************/

const char *
rNextFileSystemEntry (tFileSystemDir dir)
{
  char *str = NULL;
  /*  DENTER (("rNextFileSystemEntry:\n"));*/
  assert (dir != NULL);

# ifdef rFsearch_HAVE_DIR_ACCESS
# ifdef rFsearch_UNIX
  dir->entry = readdir(dir->dir);
  if (dir->entry != NULL) {
    str = dir->entry->d_name;
  }
# endif
# ifdef rFsearch_MICROSOFT
  if (dir->first) {
    /* FindFirstFile already sets cFileName, hence use it */
    str = dir->entry.cFileName;
  } else {
    if (FindNextFile(dir->dir, &(dir->entry))) {
      str = dir->entry.cFileName;
    }
  }
# endif
# endif

# ifdef rFsearch_MVS
  fprintf (stderr, "rFsearch::rNextFileSystemEntry not available under MVS\n");
  exit (1);
# endif

  /*  DEXIT (("`%s'\n", str? str : ""));*/
  dir->first = rfalse;
  return str;
}

/****************************************************************************/

void
rCloseFileSystemDir (tFileSystemDir dir)
{
  DPRINTF (("rCloseFileSystemDir\n"));
  assert (dir != NULL);

# ifdef rFsearch_HAVE_DIR_ACCESS
# ifdef rFsearch_UNIX
  closedir(dir->dir);
# endif
# ifdef rFsearch_MICROSOFT
  FindClose (dir->dir);
# endif
# endif

# ifdef rFsearch_MVS
  fprintf (stderr, "rFsearch::rNextFileSystemEntry not available under MVS\n");
  exit (1);
# endif

  Free (sizeof (struct sFileSystemDir), (char*)dir);
}

/****************************************************************************/

# if defined (rFsearch_UNIX) || defined (rFsearch_MICROSOFT)
static rbool dir_is_readable (const tStringLS *name)
{
  rbool res;

# ifdef rFsearch_HAVE_DIR_ACCESS
  tFileSystemDir dir;
  DENTER (("dir_is_readable: name=`%s'\n", name->Str));
  dir = open_file_system_dir (name);
  if (dir != NULL) {
    res = rtrue;
    rCloseFileSystemDir (dir);
  } else {
    res = rfalse;
  }
# else
  /* use a simplification: just check for readability */
  DENTER (("dir_is_readable: name=`%s'\n", name->Str));
  res = dir_or_file_exists (name);
# endif

  DEXIT (("dir_is_readable: name=`%s' res=%s\n",
	  name->Str, res? "true" : "false"));
  return res;
}
# endif

# if defined (rFsearch_UNIX) || defined (rFsearch_MICROSOFT)
  static tStringLS rDirIsReadable_Name = INIT_STRING;
# endif
rbool rDirIsReadable (const char *name)
{
  rbool          res;
  DENTER (("rDirIsReadable `%s'\n", name));

# if defined (rFsearch_UNIX) || defined (rFsearch_MICROSOFT)
  copy_replace_dir_separator (&rDirIsReadable_Name, name, strlen (name));
  res = dir_is_readable (&rDirIsReadable_Name);
# endif

# ifdef rFsearch_MVS
  res = rtrue;
# endif
  DEXIT (("res=%s\n", res? "true" : "false"));
  return res;
}

/****************************************************************************
 * handling directory cache
 ****************************************************************************/

static void free_dir_cache (tDirEntryPtr entry)
/* deallocate the cached entries */
{
  if (entry->Entries != NULL) {
    long i;
    for (i = 0; i <= entry->Last; i++) {
      free_String (&(entry->Entries[i]));
    }
    ReleaseArray ((char**)&entry->Entries, &(entry->Max), sizeof (tStringLS));
  }
  entry->Entries = NULL;
}

/****************************************************************************/

static void free_dir_entry (tDirEntryPtr entry)
/* deallocate the memory of `entry' */
{
  free_dir_cache (entry);
  free_String    (&(entry->Dir));
  Free (sizeof (tDirEntry), (char*) entry);
}

/****************************************************************************/

static void free_all_dir_entries (tDirEntryPtr dirs)
{
  while (dirs != NULL) {
    tDirEntryPtr dir = dirs;
    dirs = dirs->Next;
    free_dir_entry (dir);
  }
}

/****************************************************************************/

static tDirEntryPtr new_dir (tDirEntryPtr dirs, const char *dir, long mark)
/* create and return a new directory entry. `dirs' is appended to the created
 * entry.
 * If `dir' is not terminated by a '/' add one, only non-MVS.
 * The dir-separators are already fixed.
 */
{
  tDirEntryPtr new_entry;

  new_entry          = (tDirEntryPtr) Alloc (sizeof (tDirEntry));
  new_entry->Next    = dirs;
  new_entry->Mark    = mark;
  new_entry->Entries = NULL;
  new_entry->Max     = 0;
  new_entry->Last    = -1;
  new_entry->Set     = current_set;
  init_String (&new_entry->Dir); copy_String_str (&new_entry->Dir, dir);

  append_String_trailing_dirsep (&new_entry->Dir);

# ifdef rFsearch_HAVE_DIR_ACCESS
  new_entry->Exists = dir_is_readable (&new_entry->Dir);
# else
  new_entry->Exists = dir_or_file_exists (&new_entry->Dir);
# endif

  if (dir_max_len < new_entry->Dir.Len) {
    dir_max_len = new_entry->Dir.Len;
  }

  return new_entry;
}

/****************************************************************************/

# if defined (rFsearch_UNIX) || defined (rFsearch_MICROSOFT)
static tDirEntryPtr find_dir (tDirEntryPtr dirs, tStringLS *name)
/* Searches the directory `name' in the list `dirs'.
 * If no matching directory is found NULL is returned.
 * NOTE: `name' __must__ be terminated by a trailing '/'.
 */
{
  DENTER (("find_dir `%s' (set=%d)\n", name->Str, current_set));

  assert (name->Str[name->Len-1] == rDirSeparator);

  while (dirs != NULL) {
    assert (dirs->Dir.Str[dirs->Dir.Len-1] == rDirSeparator);
    if (use_dir (dirs->Set)) {
      if (name->Len == dirs->Dir.Len) {
	if (cmp_String (name, &dirs->Dir) == 0) {
	DEXIT (("find_dir `%s': res=`%s'\n", name->Str, dirs->Dir.Str));
	return dirs;
	}
      }
    }
    dirs = dirs->Next;
  }
  DEXIT (("find_dir `%s': res=`%s'\n", name->Str, ""));
  return NULL;
}
# endif
   /* endif UNIX/MICROSOFT */

/****************************************************************************/

# if defined (rFsearch_UNIX) || defined (rFsearch_MICROSOFT)
static rbool read_dir (tDirEntryPtr dir)
/* Reads the content of one directory into the directory cache.
 * Returns true, iff the directory exists and could be read and is not empty.
 * The entries are sorted.
 */
{
  tFileSystemDir fs_dir;
  const char    *fs_entry;

  DENTER (("read_dir `%s' (set=%d) %p\n", dir->Dir.Str, dir->Set, (void*)dir));

  if (!dir->Exists) {
    /* directory does not exist in filesystem */
    DEXIT (("read_dir: does not exist in filesystem\n"));
    return rfalse;
  }

  if (dir->Entries != NULL) {
    /* already cached */
    DEXIT (("read_dir `%s': already cached\n", dir->Dir.Str));
    return rtrue;
  }

  fs_dir = open_file_system_dir (&dir->Dir);
  if (fs_dir == NULL) {
    /* OOPS!!!! no such dir, the dir vanished.....*/
    dir->Exists = rfalse;
    DEXIT (("read_dir `%s': does not exist - dir vanished??\n",
	    dir->Dir.Str));
    return rfalse;
  }

  dir->Exists = rtrue;
  dir->Max    = INIT_MAX_DIR_ENTRIES;
  dir->Last   = -1;
  MakeArray ((char**)&dir->Entries, &dir->Max, sizeof (tStringLS));

  while ((fs_entry = rNextFileSystemEntry (fs_dir)) != NULL) {
    /* store the entry */
    dir->Last++;
    if ((unsigned long) dir->Last >= dir->Max) {
      ExtendArray ((char**)&dir->Entries, &dir->Max, sizeof (tStringLS));
    }
    init_String     (&dir->Entries[dir->Last]);
    copy_String_str (&dir->Entries[dir->Last], fs_entry);
    dir->Entries[dir->Last].file_state = unknown_file_state;
  }
  rCloseFileSystemDir (fs_dir);

  qsort (dir->Entries, (size_t) dir->Last+1, sizeof (tStringLS), cmp_String);
  DEXIT (("read_dir `%s': does exist\n", dir->Dir.Str));
  return rtrue;
}
# endif

/****************************************************************************/

# if defined (rFsearch_UNIX) || defined (rFsearch_MICROSOFT)
static void read_one_dir (tDirEntryPtr dir)
{
  /* first try name as it is */
  if (!read_dir (dir)) {
    if (!case_sensitive) {
      read_dir_no_case (dir);
    }
  }
}
# endif

/****************************************************************************/

static tDirEntryPtr get_search_path (void)
{
  return current_user_dirs? current_user_dirs : user_dirs;
}

/****************************************************************************/

# if defined (rFsearch_UNIX) || defined (rFsearch_MICROSOFT)
static void read_dir_no_case (tDirEntryPtr dir)
/* Reads a directory, tries to find it even if the name is given case
 * insensitive.
 * If a directory is found, the `Dir.Str' value is changed to reflect the
 * name of the directory as stored in the file system.
 * It is assumed, that `dir' does not exist as given (case sensitive).
 * Solution: try to read the base directory of `dir' and check whether
 *           there is an entry which is equal (case insensitive) to
 *           the "subdirectory" part of `dir'. This is done recursively
 *           for all directory parts of `dir'.
 */
{
  /* this routine is recursive, hence do not use `static' variables! */
  tStringLS base_dir_name = INIT_STRING;
  tStringLS sub_name      = INIT_STRING;

  tDirEntryPtr base_dir;

  DENTER (("  read_dir_no_case: `%s'\n", dir->Dir.Str));

  /* find and read the base directory of `dir' */
  copy_String   (&base_dir_name, &dir->Dir);
  dir_base_name (dir->Dir.Str, &base_dir_name, &sub_name);
  append_String_trailing_dirsep (&base_dir_name);

  /* `base_dir' given as user supplied search path? */
  DPRINTF (("search base-dir `%s' in search-path\n", base_dir_name.Str));
  base_dir = find_dir (get_search_path(), &base_dir_name);
  if (base_dir == NULL) {
    /* `base_dir' already cached? */
    DPRINTF (("search base-dir `%s' in auto-cached-dirs\n",
	      base_dir_name.Str));
    base_dir = find_dir (auto_cached_dirs, &base_dir_name);
  }
  if (base_dir == NULL) {
    /* `base_dir' not seen yet, hence create dir-object */
    DPRINTF (("read base-dir `%s' from file system\n", base_dir_name.Str));
    base_dir = new_dir (auto_cached_dirs, base_dir_name.Str, AUTO_CACHE_MARK);
    auto_cached_dirs = base_dir;
  }
  if (base_dir->Entries == NULL) {
    /* `base_dir' not seen yet, hence read it */
    read_one_dir (base_dir);
  }
  if (base_dir->Entries != NULL) {
    /* check whether `sub_name' exists in `base_dir' */
    tStringLS *found_entry;
    DPRINTF (("check if `%s' exsist in `%s'\n",
	      sub_name.Str, base_dir_name.Str));
    found_entry = (tStringLS*) bsearch(&sub_name,
					 base_dir->Entries,
					 (size_t) base_dir->Last+1,
					 sizeof (tStringLS),
					 cmp_String);
    if (found_entry != NULL) {
      empty_String       (&dir->Dir);
      append_String      (&dir->Dir, &base_dir->Dir);
      append_String      (&dir->Dir, found_entry);
      append_String_char (&dir->Dir, rDirSeparator);
      DPRINTF (("found it, read dir `%s'\n", dir->Dir.Str));
      dir->Exists = rtrue;
      read_dir (dir);
    }
  }
  free_String (&base_dir_name);
  free_String (&sub_name);
  DEXIT (("dir `%s' exists=%s\n", dir->Dir.Str, dir->Exists? "true":"false"));
}
# endif

/****************************************************************************/

static void print_dir (FILE *file, tDirEntryPtr dir)
/* print a single directory 'dir' */
{
  int          i;

  fprintf (file, "%s %s mark=%2ld set=%2d `%s'\n",
	   (dir->Entries == NULL)? "empty/no-dir/no-cache" :
	   "---------------------",
	   dir->Exists? "  exists  " : "not-exists",
	   dir->Mark,
	   dir->Set,
	   dir->Dir.Str);

  for (i = 0; i <= dir->Last; i++) {
    fprintf (file, "- %2d `%s'\n", i, dir->Entries[i].Str);
  }
}

/****************************************************************************/

static void print_dirs (FILE *file, tDirEntryPtr dirs)
/* print all directores in the list 'dirs' */
{
  tDirEntryPtr d;
  for (d = dirs; d != NULL; d = d->Next) {
    print_dir (file, d);
  }
}

/****************************************************************************/

static void free_ext_entry (tExtEntryPtr entry)
/* deallocate the memory of `entry' */
{
  free_String  (&entry->Ext);
  Free (sizeof (tExtEntry), (char*) entry);
}

static tExtEntryPtr new_extension (const char *ext, tExtEntryPtr exts)
/* create and return a new extension entry. `ext' is appended to the entry */
{
  tExtEntryPtr new_entry;

  new_entry           = (tExtEntryPtr) Alloc (sizeof (tExtEntry));
  new_entry->Next     = exts;
  init_String (&new_entry->Ext); copy_String_str (&new_entry->Ext, ext);
  if (new_entry->Ext.Len > ext_max_len) {
    ext_max_len = new_entry->Ext.Len;
  }

  return new_entry;
}

/****************************************************************************/

void
Begin_rFsearch (rbool CaseSensitive)
{
  DENTER (("Begin_rFsearch, CaseSensitive = %s\n",
	    CaseSensitive? "true" : "false"));
  if (cmp_string_func == NULL) {
    current_set       = 0;
    user_dirs         = NULL;
    dirs_end          = NULL;
    current_user_dirs = NULL;
    user_exts         = NULL;
    auto_cached_dirs  = NULL;
    ext_max_len       = 0;
    dir_max_len       = 0;
    case_sensitive    = CaseSensitive;
    cmp_string_func   = CaseSensitive? STRCMP : STRCASECMP;
    no_ext            = new_extension ("",    NULL);
# ifdef rFsearch_UNIX
    no_dir            = new_dir       (NULL, "./",  DEFAULT_DIR_MARK);
    root_dir          = new_dir       (NULL, "/",   ROOT_DIR_MARK);
# endif
# ifdef rFsearch_MICROSOFT
    no_dir            = new_dir       (NULL, ".\\", DEFAULT_DIR_MARK);
    root_dir          = new_dir       (NULL, "\\",  ROOT_DIR_MARK);
# endif
# ifdef rFsearch_MVS
    no_dir            = new_dir       (NULL, "",    DEFAULT_DIR_MARK);
    root_dir          = new_dir       (NULL, "",    DEFAULT_DIR_MARK);
# endif
    find_file_last_search_path = NULL;
  }
  DEXIT(("\n"));
}

void
rSetCaseSensitive (rbool CaseSensitive)
{
  DPRINTF (("rSetCaseSensitive, CaseSensitive = %s\n",
	   CaseSensitive? "true" : "false"));
  case_sensitive    = CaseSensitive;
  cmp_string_func   = CaseSensitive? STRCMP : STRCASECMP;
}

rbool
rGetCaseSensitive (void)
{
  assert (cmp_string_func != NULL);
  return case_sensitive;
}

void
Print_rFsearch (FILE *file)
{
  tExtEntryPtr e;
  assert (cmp_string_func != NULL);

  fprintf (file, "=============================\n");
  fprintf (file, "         Print_rFsearch\n");
  fprintf (file, "search directories:\n");
  if (dirs_end != NULL) {
    fprintf (file, "last: %2ld `%s'\n",
	     dirs_end->Mark, dirs_end->Dir.Str);
    fprintf (file, "-----\n");
  }
  print_dirs (file, user_dirs);
  fprintf (file, "=============================\n");
  fprintf (file, "auto cached directories:\n");
  print_dirs (file, auto_cached_dirs);
  fprintf (file, "=============================\n");
  fprintf (file, "default directory:\n");
  print_dirs (file, no_dir);
  fprintf (file, "=============================\n");
  fprintf (file, "root cached directory:\n");
  print_dirs (file, root_dir);
  fprintf (file, "=============================\n");
  fprintf (file, "extensions:\n");
  for (e = user_exts; e != NULL; e = e->Next) {
    fprintf (file, " `%s'\n", e->Ext.Str);
  }
  fprintf (file, "=============================\n");
}

/****************************************************************************/

void rUseDirSet (unsigned short set)
{
  current_set = set;
}

/****************************************************************************/

void rUseDirAllSets (void)
{
  current_set = 0;
}

/****************************************************************************/

static tStringLS rAddDir_Dir = INIT_STRING;
void rAddDir (const char*  dir,
	      unsigned int mark,
	      rbool        at_end)
{
  assert (cmp_string_func != NULL);

  DPRINTF (("rAddDir dir = `%s' mark=%d set=%d at_end=%s\n",
	   dir, mark, current_set, at_end? "true":"false"));

  copy_replace_dir_separator (&rAddDir_Dir, dir, strlen (dir));

  if (user_dirs == NULL) {
    user_dirs = dirs_end = new_dir (NULL, rAddDir_Dir.Str, mark);
  } else {
    if (at_end) {
      tDirEntryPtr new_entry = new_dir (NULL, rAddDir_Dir.Str, mark);
      dirs_end->Next = new_entry;
      dirs_end       = new_entry;
    } else {
      user_dirs = new_dir (user_dirs, rAddDir_Dir.Str, mark);
    }
  }
}

/****************************************************************************/

void rAddDirSet (const char*    dir,
		 unsigned int   mark,
		 rbool          at_end,
		 unsigned short set)
{
  unsigned short prev_set = current_set;
  current_set = set;
  rAddDir (dir, mark, at_end);
  current_set = prev_set;
}

/****************************************************************************/

void
rDeleteDirs  (unsigned int mark)
{
  tDirEntryPtr cur  = user_dirs;
  tDirEntryPtr prev = NULL;
  long         Mark = mark;
  assert (cmp_string_func != NULL);

  DENTER (("rDeleteDirs mark=%d\n", mark));

  while (cur != NULL) {
    if (cur->Mark == Mark) {
      tDirEntryPtr next = cur->Next;
      DPRINTF (("delete `%s'\n", cur->Dir.Str));
      if (prev == NULL) {
	/* cur is the first element of the list */
	user_dirs = next;
      } else {
	prev->Next = next;
      }
      free_dir_entry (cur);
      cur = next;
    } else {
      prev = cur;
      cur  = cur->Next;
    }
  }
  dirs_end = prev;
  DEXIT(("\n"));
}

void
rDeleteAllDirs (void)
{
  assert (cmp_string_func != NULL);

  DPRINTF (("rDeleleteAllDirs\n"));

  free_all_dir_entries (user_dirs);
  free_all_dir_entries (auto_cached_dirs);
  user_dirs         = NULL;
  dirs_end          = NULL;
  current_user_dirs = NULL;
  auto_cached_dirs  = NULL;
  dir_max_len       = 0;
}

/****************************************************************************/

void
rReadDirs (unsigned int mark)
{
# if defined (rFsearch_UNIX) || defined (rFsearch_MICROSOFT)
  tDirEntryPtr cur;
  long         Mark = mark;
  DENTER (("rReadDirs mark=%d\n",mark));

  assert (cmp_string_func != NULL);

# ifndef rFsearch_HAVE_DIR_ACCESS
  /* since we have no functionality, no cahing is possible */
  DPRINTF (("rFsearch_HAVE_DIR_ACCESS not defined\n"));
  return;
# endif

  for (cur = user_dirs; cur != NULL; cur = cur->Next) {
    if (cur->Mark == Mark) {
      read_dir (cur);
    }
  }

  /* we do this in two steps, to avoid auto-caching of directories
   * supplied as search paths
   */

  if (!case_sensitive) {
    for (cur = user_dirs; cur != NULL; cur = cur->Next) {
      if (cur->Mark == Mark && !cur->Exists) {
	read_dir_no_case (cur);
      }
    }
  }
# endif
# ifdef rFsearch_MVS
  /* nothing */
# endif
  DEXIT(("\n"));
}

void
rReadAllDirs (void)
{
# if defined (rFsearch_UNIX) || defined (rFsearch_MICROSOFT)
  tDirEntryPtr cur;
  DENTER (("rReadAllDirs\n"));
  assert (cmp_string_func != NULL);

# ifndef rFsearch_HAVE_DIR_ACCESS
  /* since we have no functionality, no caching is possible */
  DPRINTF (("rFsearch_HAVE_DIR_ACCESS not defined\n"));
  return;
# endif

  for (cur = user_dirs; cur != NULL; cur = cur->Next) {
    read_dir (cur);
  }

  /* we do this in two steps, to avoid auto-caching of directories
   * supplied as search paths
   */

  if (!case_sensitive) {
    for (cur = user_dirs; cur != NULL; cur = cur->Next) {
      if (!cur->Exists) {
	read_dir_no_case (cur);
      }
    }
  }
# endif
# ifdef rFsearch_MVS
  /* nothing */
# endif
  DEXIT (("\n"));
}

/****************************************************************************/

void
rAddExtension (const char *ext)
{
  DPRINTF (("rAddExtension ext = `%s'\n", ext));
# if defined (rFsearch_UNIX) || defined (rFsearch_MICROSOFT)
  assert (cmp_string_func != NULL);
  user_exts = new_extension (ext, user_exts);
# endif
# ifdef rFsearch_MVS
  /* nothing */
# endif
}

/****************************************************************************/

void
rDeleteExtensions (void)
{
  DPRINTF (("rDeleteExtension\n"));
# if defined (rFsearch_UNIX) || defined (rFsearch_MICROSOFT)
  assert (cmp_string_func != NULL);
  while (user_exts != NULL) {
    tExtEntryPtr next = user_exts->Next;
    free_ext_entry (user_exts);
    user_exts = next;
  }
# endif
# ifdef rFsearch_MVS
  /* nothing */
# endif
  ext_max_len = 0;
}

/****************************************************************************/

static tStringLS rSetSearchPathStart_ls = INIT_STRING;
char *rSetSearchPathStart (const char *path)
{
  tDirEntryPtr dir;

  DENTER (("rSetSearchPathStart: path = `%s'\n", path));

  if (path == NULL) {
    /* reset to entire search path list */
    dir = user_dirs;
  } else {
    /* add a trailing directory separator if needed */
    copy_String_str (&rSetSearchPathStart_ls, path);
    if (rSetSearchPathStart_ls.Str[rSetSearchPathStart_ls.Len-1] !=
	rDirSeparator) {
      append_String_char (&rSetSearchPathStart_ls, rDirSeparator);
    }

    /* search a matching directory */
    for (dir = get_search_path(); dir != NULL; dir = dir->Next) {
      if (cmp_String (&dir->Dir, &rSetSearchPathStart_ls) == 0) {
	dir = dir->Next;
	break;
      }
    }
  }

  current_user_dirs = dir;
  DEXIT (("res=`%s'\n", (dir == NULL)? "" : dir->Dir.Str));
  return dir? dir->Dir.Str : NULL;
}

/****************************************************************************/

static tStringLS find_file_in_dir_full_name = INIT_STRING;
static tStringLS find_file_in_dir_str       = INIT_STRING;
static char *find_file_in_dir (tDirEntryPtr dir, const tStringLS *name)
/* Searches `name' in the directory `dir'.
 * Returns the entire path or NULL.
 * for MVS: the name passed here must be of the form "(member)"  i.e.
 * with the enclosing ()
 */
{
  char *res;
  DENTER (("find_file_in_dir: dir = `%s', name = `%s'\n",
	   dir->Dir.Str, name->Str));

  if (!dir->Exists) {
    DEXIT (("dir does not exists\n"));
    return NULL;
  }

  if (!use_dir(dir->Set)) {
    /* skip this directory */
    DEXIT(("dir not in current set (current=%d,this=%d), it is skipped\n",
	   current_set, dir->Set));
    return NULL;
  }

  alloc_String (&find_file_in_dir_full_name,
		dir_max_len + ext_max_len + name->Len + 2);

  res = find_file_in_dir_full_name.Str;

  if (dir->Entries == NULL) {
    /* no directories entries cached for this dir */
    tExtEntryPtr ext;
    char *n = find_file_in_dir_full_name.Str +
      	      dir->Dir.Len;                 /* first char of the name */
    char *e = n + name->Len;                /* first char of an extension
				  	     * appended to the name
					     */
    empty_String  (&find_file_in_dir_full_name);
    append_String (&find_file_in_dir_full_name, &dir->Dir);
    DPRINTF (("not cached\n"));
    for (ext =  (user_exts == NULL) ? no_ext : user_exts;
	 ext != NULL;
	 ext =  ext->Next) {
      DPRINTF (("try extension: `%s'\n", ext->Ext.Str));
      strcpy (n, name->Str);
      strcpy (e, ext->Ext.Str);

      /* test name as given */
      if (rFileIsReadable (find_file_in_dir_full_name.Str)) goto found;

      if (!case_sensitive) {
	/* test name in uppercase */
	STRCONV2(toupper, n, e);
	if (rFileIsReadable (find_file_in_dir_full_name.Str)) goto found;
	/* test name in lowercase */
	STRCONV2(tolower, n, e);
	if (rFileIsReadable (find_file_in_dir_full_name.Str)) goto found;

	/* test name, first letter in upper case, rest lowercase */
	n[0] = (char) toupper (n[0]);
	if (rFileIsReadable (find_file_in_dir_full_name.Str)) goto found;
      }
    }
  } else {
    /* directory entries are cached */
    tExtEntryPtr ext;
    char  *e;
    DPRINTF (("cached\n"));

    alloc_String (&find_file_in_dir_str,
		  dir_max_len + ext_max_len + name->Len + 2);
    copy_String  (&find_file_in_dir_str, name);
    e = find_file_in_dir_str.Str + name->Len;
    			/* first char of an extension appended to name */

    for (ext =  (user_exts == NULL) ? no_ext : user_exts;
	 ext != NULL;
	 ext =  ext->Next) {
      tStringLS *found_entry;
      strcpy (e, ext->Ext.Str);
      found_entry = (tStringLS*) bsearch(&find_file_in_dir_str, dir->Entries,
					 (size_t) dir->Last+1,
					 sizeof (tStringLS),
					 cmp_String);
      if (found_entry != NULL) {
	empty_String  (&find_file_in_dir_full_name);
	append_String (&find_file_in_dir_full_name, &dir->Dir);
	append_String (&find_file_in_dir_full_name, found_entry);
	switch (found_entry->file_state) {
	case unknown_file_state:
	  if (rFileIsReadable (find_file_in_dir_full_name.Str)) {
	    found_entry->file_state = file_readable;
	    goto found;
	  } else {
	    found_entry->file_state = file_not_readable;
	    goto not_found;
	  }
	case file_readable:
	  goto found;
	case file_not_readable:
	  goto not_found;
	default:
	  fprintf (stderr, "\nrFsearch: FATAL ERROR\n");
	  Reuse_Exit();
	}
      }
    }
  }
 not_found:
  res = NULL;

 found:
  DEXIT (("res=`%s'\n", (res == NULL)? "" : res));
  return res;
}

# if defined (rFsearch_UNIX) || defined (rFsearch_MICROSOFT)
static char *find_file_in_dirs (tDirEntryPtr dirs, const tStringLS *name)
/* Search name in all directories `dirs'.
 * `name' must not contain any directory part!
 * Returns the entire path or NULL.
 */
{
  char *res = NULL;
  tDirEntryPtr cur;
  DENTER (("find_file_in_dirs: `%s'\n", name->Str));
  for (cur = dirs; cur != NULL && res == NULL; cur =  cur->Next) {
    DPRINTF (("try search dir `%s'\n", cur->Dir.Str));
    if (cur->Exists && use_dir(cur->Set)) {
      find_file_last_search_path = cur->Dir.Str;
      res = find_file_in_dir (cur, name);
    }
  }
  DEXIT (("res=`%s'\n", (res == NULL)? "" : res));
  return res;
}

static tStringLS get_sub_dir_name = INIT_STRING;
static tDirEntryPtr get_sub_dir (tDirEntryPtr search_dir,
				 const tStringLS *name)
/* Check if the `search_dir' contains a sub-directory `name'.
 * Check the auto-cached-dirs and the file system,
 * If `search_dir' does not contain the sub-directory, append
 * 'search_dir/name' at the end of the auto_cached_dirs list,
 * and mark it as non-existent.
 * Return the dir-entry.
 */
{
  tDirEntryPtr res;
  DENTER (("get_sub_dir `%s' (set=%d)\n", name->Str, current_set));

  alloc_String  (&get_sub_dir_name, search_dir->Dir.Len + name->Len + 2);
  copy_String   (&get_sub_dir_name, &search_dir->Dir);
  append_String (&get_sub_dir_name, name);
  append_String_trailing_dirsep (&get_sub_dir_name);

  DPRINTF (("check if dir `%s' contains `%s' in auto-cache-dirs\n",
	    search_dir->Dir.Str, name->Str));
  res = find_dir (auto_cached_dirs, &get_sub_dir_name);
  if (res) {
    DEXIT (("res=`%s'\n", res->Dir.Str));
    return res;
  }

  if (search_dir->Exists) {
    /* only existing directories may have subdirectoires :-) */
    DPRINTF (("check if dir `%s' contains `%s' in the file system\n",
	      search_dir->Dir.Str, name->Str));
    res = new_dir (NULL, get_sub_dir_name.Str,  AUTO_CACHE_MARK);
    read_one_dir (res);
    if (res->Exists) {
      res->Next = auto_cached_dirs;
      auto_cached_dirs = res;
      DEXIT (("res=`%s'\n", res? res->Dir.Str : ""));
      return res;
    }
  }

  /* sub-directory does not exists in any case, add it at the end of
   * the auto-cache-dirs.
   */
  if (auto_cached_dirs) {
    tDirEntryPtr d = auto_cached_dirs;
    while (d->Next != NULL) {
      d = d->Next;
    }
    res = new_dir (NULL, get_sub_dir_name.Str,  AUTO_CACHE_MARK);
    d->Next = res;
  } else {
    auto_cached_dirs =
      res =
      new_dir (NULL, get_sub_dir_name.Str,  AUTO_CACHE_MARK);
  }
  DEXIT (("res=`%s' (sub dir does not exists)\n", res->Dir.Str));
  return res;
}

static char *find_file_in_sub_dirs (tDirEntryPtr search_path,
				    tStringLS *sub_dir_name,
				    tStringLS *base_name)
/* For all directories "D" of the `search_path' directory list and
 * check if "D/sub_dir_name/base_name" exists:
 *  1. check search_dirs for "D/sub_dir_name/base_name"
 *  2. check auto_cached_dirs for "D/sub_dir_name/base_name",
 *  3. check if "D/sub_dir_name" exists in the file-system.
 * If no directory "D/sub_dir_name" exists, add it to the
 * auto_cached_dirs and mark it as non-existent.
 * If it exists, but is not chached, read the directory, and check for
 * the existence of `base_name'.
 * Returns the entire path or NULL.
 */
{
  char *res = NULL;
  tDirEntryPtr cur;
  DENTER (("find_file_in_sub_dirs: subdir:`%s' name:`%s' cur_set=%d\n",
           sub_dir_name->Str, base_name->Str, current_set));

  for (cur = search_path; cur != NULL && res == NULL; cur =  cur->Next) {
    if (use_dir(cur->Set)) {
      /* check only sub-dir's of allowed search dirs */
      tDirEntryPtr dir;
      DPRINTF (("try search dir `%s'\n", cur->Dir.Str));
      find_file_last_search_path = cur->Dir.Str;
      dir = get_sub_dir (cur, sub_dir_name);
      res = find_file_in_dir (dir, base_name);
    }
  }
  DEXIT (("res=`%s'\n", (res == NULL)? "" : res));
  return res;
}
# endif
   /* endif UNIX/MICROSOFT */

static tStringLS rFindFile_Name        = INIT_STRING;
static tStringLS rFindFile_base_name   = INIT_STRING;
static tStringLS rFindFile_subdir_name = INIT_STRING;
static tStringLS rFindFile_dir_name    = INIT_STRING;
char *rFindFile (const char *name)
{
  char  *res = NULL;

  DENTER (("rFindFile file = `%s', current_set=%d\n", name, current_set));
  assert (cmp_string_func != NULL);
  find_file_last_search_path = NULL;

  copy_replace_dir_separator (&rFindFile_Name, name, strlen (name));

# if defined (rFsearch_UNIX) || defined (rFsearch_MICROSOFT)
  {
    tDirEntryPtr search_dirs;
    rbool  HasSubDir;

# ifdef rFsearch_MICROSOFT
    if (rFindFile_Name.Str[1] == ':') {
      /* an absolute path given, do not lookup in cache */
      res = file_is_readable (&rFindFile_Name) ? rFindFile_Name.Str : NULL;
      DEXIT (("res=`%s'\n", res));
      return res;
    }
# endif

    if (rFindFile_Name.Str[0] == rDirSeparator) {
      search_dirs = root_dir;
    } else {
      search_dirs = get_search_path();
      if (search_dirs == NULL) search_dirs = no_dir;
    }

    HasSubDir = (rbool) (strchr (rFindFile_Name.Str, rDirSeparator) != NULL);

    if (HasSubDir) {
      /* 'name' contains a directory part: name = "d/n"
       * 1. search "n" in all directories "D/d", where "D" is in the
       *    search path.
       * 2. search "n" in all directories "D/d", where "D" is a
       *    auto-chached directory
       * 3. check in the filesystem wether a directory "D/d" exists,
       *    where "D" is a directory given in the search path.
       */
      alloc_String (&rFindFile_subdir_name, rFindFile_Name.Len + 2);
      alloc_String (&rFindFile_base_name,   rFindFile_Name.Len + 1);

      dir_base_name (rFindFile_Name.Str,
		     &rFindFile_subdir_name,
		     &rFindFile_base_name);
      append_String_char (&rFindFile_subdir_name, rDirSeparator);
      DPRINTF (("search `%s' in list search_dirs\n",
		rFindFile_subdir_name.Str));
      res = find_file_in_sub_dirs (search_dirs,
				   &rFindFile_subdir_name,
				   &rFindFile_base_name);
    } else {
      /* 'name' contains no directory part:
       * 1. search 'name' in all directories of the search path
       */
      res = find_file_in_dirs (search_dirs, &rFindFile_Name);
    }

    if (res) {
      if (res[0] == '.' && res[1] == rDirSeparator) {
	/* skip leading `./' */
	res += 2;
      }
# ifdef rFsearch_UNIX
      if (res[0] == rDirSeparator && res[1] == rDirSeparator) {
	/* skip leading one '/' of two leading `//' */
	res ++;
      }
# endif
    }
  }
# endif
  /* endif UNIX | Windows */

# ifdef rFsearch_MVS
  {
    tDirEntryPtr cur;
    /* does this name exist? */
    if (rFileIsReadable(name)) {
      DEXIT (("res=`%s'\n", name));
      return (char*) name;
    }

    /* add () around name */
    alloc_String (&rFindFile_base_name, rFindFile_Name.Len + 2);
    rFindFile_base_name.Len = sprintf (rFindFile_base_name.Str, "(%s)",
				       rFindFile_Name.Str);
    for (cur = get_search_path(); cur != NULL; cur =  cur->Next) {
      DPRINTF (("try search dir `%s'\n", cur->Dir.Str));
      res = find_file_in_dir (cur, &rFindFile_base_name);
      if (res != NULL) break;
    }
  }
# endif
  /* endif MVS */

  DEXIT (("rFindFile(%s) with set=%d returns=`%s'\n",
	  name, current_set, res));
  return res;
}

/****************************************************************************/

char *rFindFileSet (const char* name, unsigned short set)
{
  unsigned short prev_set = current_set;
  char *res;
  current_set = set;
  res = rFindFile (name);
  current_set = prev_set;
  return res;
}

/****************************************************************************/

char *rFindFileSameDir (const char* cur_file, const char* name)
{
  char dir[1024];
  char *res;
  DENTER (("rFindFileSameDir: cur_file = `%s', name = `%s'\n", cur_file,
	    name));

  rDirName ((char*)cur_file, dir);
  res = rFindFileDir (dir, name);
  if (res == NULL) {
    res = rFindFile (name);
  }
  DEXIT (("res=`%s'\n", res));
  return res;
}

/****************************************************************************/

char *rFsearchUsedSearchPath(void)
{
  DENTER (("rFsearchUsedSearchPath:"));
  DEXIT  (("res=`%s'\n", find_file_last_search_path));
  return find_file_last_search_path;
}

/****************************************************************************/

char *rFindFileSameDirSet (const char* cur_file, const char* name,
			   unsigned short set)
{
  unsigned short prev_set = current_set;
  char *res;
  current_set = set;
  res = rFindFileSameDir (cur_file, name);
  current_set = prev_set;
  return res;
}

/****************************************************************************/

# ifdef rFsearch_MVS
char *_rFindFileDir (const char *dir, const char* name);
char *rFindFileDir  (const char *dir, const char* name)
/* add () around name */
{
  char n[255];
  assert (strlen (name) < sizeof (n));
  DPRINTF (("rFindFileDir: dir = `%s', name = `%s'\n", dir, name));
  sprintf (n, "(%s)", name);
  return _rFindFileDir (dir, n);
}
# define rFindFileDir _rFindFileDir
# endif

static tStringLS rFindFileDir_full_name = INIT_STRING;
char *rFindFileDir (const char *dir, const char* name)
{
  char *res;
  int   dir_len  = strlen (dir);
  int   name_len = strlen (name);
  tExtEntryPtr ext;
  DENTER (("rFindFileDir: dir = `%s', name = `%s'\n", dir, name));

  alloc_String (&rFindFileDir_full_name, dir_len + ext_max_len + name_len + 2);
  res = rFindFileDir_full_name.Str;

  empty_String           (&rFindFileDir_full_name);
  append_String_char_ptr (&rFindFileDir_full_name, dir,  dir_len);

# if defined (rFsearch_UNIX) || defined (rFsearch_MICROSOFT)
  if (dir[dir_len-1] != rDirSeparator) {
    append_String_char  (&rFindFileDir_full_name, rDirSeparator);
    dir_len++;
  }
# endif

  append_String_char_ptr (&rFindFileDir_full_name, name, name_len);
  for (ext =  (user_exts == NULL) ? no_ext : user_exts;
       ext != NULL;
       ext =  ext->Next) {
	 char *n = rFindFileDir_full_name.Str + dir_len;
	 				    /* first char of the name */
	 char *e = n + name_len;            /* first char of an extension
					     * appended to the name
					     */
	 DPRINTF (("try extension `%s'\n", ext->Ext.Str));
	 strcpy (n, name);
	 strcpy (e, ext->Ext.Str);
	 if (rFileIsReadable (rFindFileDir_full_name.Str)) goto found;

	 if (!case_sensitive) {
	   /* test name in uppercase */
	   STRCONV(toupper, n);
	   if (rFileIsReadable (rFindFileDir_full_name.Str)) goto found;

	   /* test name in lowercase */
	   STRCONV(tolower, n);
	   if (rFileIsReadable (rFindFileDir_full_name.Str)) goto found;

	   /* test name, first letter in upper case, rest lowercase */
	   n[0] = (char) toupper (n[0]);
	   if (rFileIsReadable (rFindFileDir_full_name.Str)) goto found;
	 }
  }

  /* not found */
  res = NULL;
  DEXIT (("res=`'\n"));
  return res;

 found:
# if defined (rFsearch_UNIX) || defined (rFsearch_MICROSOFT)
  if (res[0] == '.' && res[1] == rDirSeparator) {
    /* skip leading `./' */
    res += 2;
  }
# ifdef rFsearch_UNIX
  if (res[0] == rDirSeparator && res[1] == rDirSeparator) {
    /* skip leading one '/' of two leading `//' */
    res ++;
  }
# endif
# endif
  DEXIT (("res=`%s'\n", res));
  return res;
}

/****************************************************************************/

void
Close_rFsearch (void)
{
  DPRINTF (("Close_rFsearch\n"));

# ifdef DEBUG_RFSEARCH
  if (rFsearchShowDebug) Print_rFsearch (stdout);
# endif

  if (cmp_string_func != NULL) {
    rDeleteAllDirs    ();
    rDeleteExtensions ();
    free_ext_entry    (no_ext);
    free_dir_entry    (no_dir);
    free_dir_entry    (root_dir);

    user_dirs         = NULL;
    dirs_end          = NULL;
    current_user_dirs = NULL;
    auto_cached_dirs  = NULL;
    no_dir            = NULL;
    root_dir          = NULL;
    no_ext            = NULL;
    cmp_string_func   = NULL;

    free_String (&rFileIsReadable_Name);
    free_String (&rBaseName_buf1);
    free_String (&rBaseName_buf2);
    free_String (&rDirName_my_buffer);
    free_String (&init_String_init);
    free_String (&rDirBaseName_Name);
    free_String (&rDirBaseName_DirName);
    free_String (&rDirBaseName_BaseName);
    free_String (&rDirOrFileExists_Name);
    free_String (&rOpenFileSystemDir_Name);
    free_String (&rAddDir_Dir);
    free_String (&rSetSearchPathStart_ls);
    free_String (&rFindFile_Name);
    free_String (&rFindFile_base_name);
    free_String (&rFindFile_subdir_name);
    free_String (&rFindFile_dir_name);
    free_String (&rFindFileDir_full_name);
    free_String (&find_file_in_dir_full_name);
    free_String (&find_file_in_dir_str);

# ifdef rFsearch_MICROSOFT
    free_String (&open_file_system_dir_Name);
# endif

# if defined (rFsearch_UNIX) || defined (rFsearch_MICROSOFT)
    free_String (&get_sub_dir_name);
    free_String (&rDirIsReadable_Name);
# endif

  }
}

/****************************************************************************/
