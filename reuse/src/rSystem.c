/* $Id: rSystem.c,v 1.40 2021/10/07 09:18:31 grosch Exp $ */

/*
 * $Log: rSystem.c,v $
 * Revision 1.40  2021/10/07 09:18:31  grosch
 * disabled license control
 *
 * Revision 1.39  2008/08/22 20:50:54  grosch
 * added support for 64 bit platforms
 * removed type casts to (void)
 * fixed function rDirExists - #include <windows.h>
 *
 * Revision 1.38  2006/07/18 20:27:17  grosch
 * added directive #include <time.h> for strftime
 *
 * Revision 1.37  2006/01/31 10:01:37  grosch
 * changed handling of function check_license
 *
 * Revision 1.36  2005/05/23 12:44:19  grosch
 * fixed problem on AIX with system call write (1, p, 0)
 * changed #include <config.h> to #include "config.h"
 * added support for MVS
 * added functions: rDirExists, rMakeDir, fopen_inout, fopen_output
 * added argument to function check_license
 *
 * Revision 1.35  2005/05/23 10:14:11  grosch
 * fixed problem on AIX with system call write (1, p, 0)
 *
 * Revision 1.34  2004/07/06 13:50:00  grosch
 * added argument to function check_license
 *
 * Revision 1.33  2003/04/25 08:52:20  grosch
 * added license control based on WIBU-KEY
 *
 * Revision 1.32  2000/12/29 16:55:15  grosch
 * improved function rSystem on Windows
 *
 * Revision 1.31  2000/09/04 13:54:36  grosch
 * changed # include "config.h" to <config.h>
 *
 * Revision 1.30  2000/09/04 13:20:30  grosch
 * introduced include file rSystem.i
 * introduced ifdef HAVE_ARGS
 * changed handling of include files
 * tribute to MSVC++ 1.52
 * added functions rFileSize and rDeleteFile
 * added exception handling
 *
 * Revision 1.39  1999/05/27 13:28:58  grosch
 * revised handling of extern "C"
 *
 */

/* Ich, Doktor Josef Grosch, Informatiker, Jan. 1992 */

/* interface for machine dependencies */

/* See the header file rSystem.i for comments concerning the external routines!
*/

/* compilation with the option -DUNIX uses UNIX system calls for IO (efficient),
   otherwise the C library routines are used for IO (portable).		*/

static char rcsid [] =
   "$Id: rSystem.c,v 1.40 2021/10/07 09:18:31 grosch Exp $";

# if defined _MSC_VER | defined MSDOS | defined __BORLANDC__
#  define _MS_
# endif

# include "rSystem.i"
# include "config.h"
# include "rString.h"

# if HAVE_STDLIB_H | defined _MS_
#  include <stdlib.h>
# endif

# ifdef m68000
#  define rticks 50
# else
#  ifdef linux
#   define rticks 100
#  else
#   define rticks 60
#  endif
# endif

# ifndef rfalse
#  define rfalse 0
# endif

# ifndef rtrue
#  define rtrue 1
# endif

# if HAVE_UNISTD_H
#  include <unistd.h>
# endif

# if HAVE_TIME_H
#  include <time.h>
# endif

# ifndef UNIX

/* FileStore: maps FILE* to int and vice versa */

# define NOFILES 64

static rbool IsInitialized = rfalse;

static char IsLineBuffered [NOFILES] = { 1, 1, 1, };

static FILE *	FileStore [NOFILES] = {
   NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
   NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
   NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
   NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
   NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
   NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
   NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
   NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
};

static void InitFileStore ARGS ((void))
{
# ifndef _USRDLL
   FileStore [0] = stdin;
   FileStore [1] = stdout;
   FileStore [2] = stderr;
# endif
   IsInitialized = rtrue;
}

static tFile FileToInt
# ifdef HAVE_ARGS
   (FILE * File)
# else
   (File) FILE * File;
# endif
{
# ifdef MVS
   return (int) File;
# else
   register int	f = fileno (File);
   FileStore [f] = File;
   return f;
# endif
}

static FILE * IntToFile
# ifdef HAVE_ARGS
   (tFile File)
# else
   (File) tFile File;
# endif
{
# ifdef MVS
   return (FILE *) File;
# else
   if (! IsInitialized) InitFileStore ();
   return FileStore [File];
# endif
}

# endif

/* binary IO */

# if HAVE_FCNTL_H
#  include <fcntl.h>
# endif

# if HAVE_SYS_STAT_H
#  include <sys/stat.h>
# endif

# if HAVE_SYS_TIMES_H
#  include "systimes.h"
# endif

# if HAVE_TYPES_H
#  include <sys/types.h>
# endif

# ifdef UNIX
#  include <sys/stat.h>
#  include <sys/types.h>
#  include <dirent.h>
# endif

# ifdef _MS_
#  if _MSC_VER < 1400
#   include <windows.h>
#  endif
#  include <sys/stat.h>
#  include <sys/types.h>
#  include <ctype.h>
#  include <direct.h>
# endif

# if defined _MS_
#  define FOPEN_MODE_INPUT	"rb"
#  define FOPEN_MODE_OUTPUT	"wb"
# elif defined MVS
#  define FOPEN_MODE_INPUT	"rb,type=record"
#  define FOPEN_MODE_OUTPUT	"w"
# else
   /* default: for Unix */
#  define FOPEN_MODE_INPUT	"rb"
#  define FOPEN_MODE_OUTPUT	"wb"
# endif

# ifdef MVS
static char * map_filename
# ifdef HAVE_ARGS
   (char * FileName)
# else
   (FileName) char * FileName;
# endif
{
   static char fn [512];
   /* If FileName is a DDName then do not add quotes!: In this case
      FileName is of the following form DD:ddname, dd:ddname
      where ddname is referenced in the calling JCL file.
      If FileName is a physical file then add quotes! */
   if (FileName [2] == ':') return FileName;
   sprintf (fn, "'%s'", FileName);
   return fn;
}
# else
   /* default: for Unix and Windows */
#  define map_filename(fn) fn
# endif

rbool IsCharacterSpecial
# ifdef HAVE_ARGS
   (tFile File)
# else
   (File) tFile File;
# endif
{
# ifdef MVS
   return rfalse;
# else
   /* default: for Unix and Windows */
   struct stat buf;
   fstat (File, & buf);
   return (rbool) ((0020000 & buf.st_mode) == 0020000);
# endif
}

long rFileSize
# ifdef HAVE_ARGS
   (char * FileName)
# else
   (FileName) char * FileName;
# endif
{
# if HAVE_SYS_STAT_H
   struct stat buf;
   stat (FileName, & buf);
   return buf.st_size;
# else
   FILE * td = fopen_input (FileName);
   long size = 0;
   long recsize;
   char buffer [1024];
   if (td) {
     while ((recsize = fread (buffer, 1, 1024, td)) > 0) {
       size += recsize + 1; /* + 1 for EOL */
     }
     fclose (td);
     return size;
   }
   return 0;
# endif
}

char DirectorySeparator ARGS ((void))
{
# ifdef _MS_
   return '\\';
# else
#  ifdef MVS
   return '.';
#  else
   /* default: for Unix */
   return '/';
#  endif
# endif
}

tFile OpenInput
# ifdef HAVE_ARGS
   (char * FileName)
# else
   (FileName) char * FileName;
# endif
{
# ifdef UNIX
   return open (FileName, O_RDONLY);
# else
   FILE * FilePtr;
   tFile File;
# ifdef _MS_
   int i, l = (int) strlen (FileName);
   for (i = 0; i < l; i ++) if (FileName [i] == '/') FileName [i] = '\\';
# endif
   FilePtr = fopen_input (FileName);
   if (FilePtr == NULL) {
      return -1;
   }
   if (! IsInitialized) InitFileStore ();
   File = FileToInt (FilePtr);
# ifndef MVS
   IsLineBuffered [File] = IsCharacterSpecial (File);
# endif
   return File;
# endif
}

tFile OpenOutput
# ifdef HAVE_ARGS
   (char * FileName)
# else
   (FileName) char * FileName;
# endif
{
# ifdef UNIX
   return creat (FileName, 0666);
# else
   FILE * FilePtr = fopen_output (FileName);
   if (! IsInitialized) InitFileStore ();
   return FilePtr == NULL ? -1 : FileToInt (FilePtr);
# endif
}

int rRead
# ifdef HAVE_ARGS
   (tFile File, char * Buffer, int Size)
# else
   (File, Buffer, Size) tFile File; char * Buffer; int Size;
# endif
{
# ifdef UNIX
   return read (File, Buffer, Size);
# else
#  ifdef MVS
   return fread (Buffer, 1, Size, IntToFile (File));
#  else
   /* default: for Windows */
   if (IsLineBuffered [File]) {
      Buffer [0] = '\0';
      fgets (Buffer, Size, IntToFile (File));
      return (int) strlen (Buffer);
   } else
      return (int) fread (Buffer, 1, Size, IntToFile (File));
#  endif
# endif
}

int rWrite
# ifdef HAVE_ARGS
   (tFile File, char * Buffer, int Size)
# else
   (File, Buffer, Size) tFile File; char * Buffer; int Size;
# endif
{
# ifdef UNIX
   return Size > 0 ? write (File, Buffer, Size) : 0;
# else
   /* default: for MVS and Windows */
   return (int) fwrite (Buffer, 1, Size, IntToFile (File));
# endif
}

void rClose
# ifdef HAVE_ARGS
   (tFile File)
# else
   (File) tFile File;
# endif
{
# ifdef UNIX
   close (File);
# else
   /* default: for MVS and Windows */
   fclose (IntToFile (File));
# endif
}

void rDeleteFile
# ifdef HAVE_ARGS
   (char * FileName)
# else
   (FileName) char * FileName;
# endif
{
# ifdef MVS
   int ret;
   if (FileName [0] == '\'') ret = remove (FileName);
   else ret = remove (map_filename (FileName));
   if (ret != 0) perror ("rDeleteFile() error");
# else
   /* default: for Unix and Windows */
   unlink (FileName);
# endif
}

rbool rDirExists (const char * name)
{
# ifdef UNIX
   DIR * dir = opendir (name);
   if (dir == NULL) {
      return rfalse;
   } else {
      closedir (dir);
     return rtrue;
   }
# endif

# ifdef _MS_
#  if _MSC_VER >= 1400
   struct _stat buf;
   int len = (int) strlen (name);
   char n [1024];
   /* Microsoft's variant of 'stat' cares about a trailing '\', hence
    * we must remove it before calling stat, but not for things like "C:\"
    */
   strcpy (n, name);
   if (len > 1 && (n [len-1] == '\\' || n [len-1] == '/') &&
       (! (n [1] == ':' && (n [2] == '\\' || n [2] == '/') && n [3] == '\0'))) {
     n [len-1] = '\0';
   }
   return (rbool) (_stat (n, &buf) == 0);
#  else
   char n [1024];
   HANDLE dir;
   WIN32_FIND_DATA entry;
   sprintf (n, "%s\\*", name);	/* "\*" needed for Windows */
   dir = FindFirstFile (name, & entry);
   if (dir == INVALID_HANDLE_VALUE) return rfalse;
   else return rtrue;
#  endif
# endif

# ifdef MVS
   return rfalse;
# endif
}

# ifdef _MS_
#  define MKDIR(PATH) _mkdir (PATH)
# else
#  define MKDIR(PATH) mkdir (PATH, 0777)
# endif

rbool rMakeDir (const char * name)
{
# if defined _MS_ || UNIX
   char n [1024];
   char path [1024];
   char * tok;
   char delim [2];
   delim [0] = DirectorySeparator ();
   delim [1] = '\0';

   strcpy (n, name);
   if (name [0] == delim [0]) {
      /* name is an absolute path */
      path [0] = delim [0];
      path [1] = '\0';
   } else {
      path [0] = '\0';
   }
   tok = strtok (n, delim);
   while (tok) {
      if (tok [0] != '\0') {
	 /* skip // */
	 strcat (path, tok);
	 if (! rDirExists (path)) {
	    if (MKDIR (path) != 0) {
	       return rfalse;
	    }
	 }
	 strcat (path, delim);
      }
      tok = strtok (NULL, delim);
   }
   return rtrue;
# endif

# ifdef MVS
   return rfalse;
# endif
}

FILE * fopen_input
# ifdef HAVE_ARGS
   (char * FileName)
# else
   (FileName) char * FileName;
# endif
{
  /* TRACE */
  FILE * ret = fopen (map_filename (FileName), FOPEN_MODE_INPUT);
  /* printf ("In fopen_input, FileName: %s FD: %x \n",  FileName, ret); */
  return ret;
  /* TRACE */
}

FILE * fopen_output
# ifdef HAVE_ARGS
   (char * FileName)
# else
   (FileName) char * FileName;
# endif
{
  /* TRACE */
  FILE * ret = fopen (map_filename (FileName), FOPEN_MODE_OUTPUT);
  /* printf ("In fopen_output, FileName: %s FD: %x \n", FileName, ret); */
  return ret;
  /* TRACE */
}

/* calls other than IO */

# ifdef _MS_
#  include <malloc.h>
#  include <time.h>
# endif

char * rAlloc
# ifdef HAVE_ARGS
   (long ByteCount)
# else
   (ByteCount) long ByteCount;
# endif
{
# if defined _MSC_VER & (_MSC_VER <= 800)
   return (char *) _halloc ((unsigned long) ByteCount, 1);
# else
   /* default: for Unix, Windows (_MSC_VER > 800) and MVS */
   return (char *) malloc ((unsigned long) ByteCount);
# endif
}

void rFree
# ifdef HAVE_ARGS
   (char * ptr)
# else
   (ptr) char * ptr;
# endif
{
   free (ptr);
}

long rTime ARGS ((void))
{
# if HAVE_SYS_TIMES_H
   struct tms	buffer;
   times (& buffer);
   return (buffer.tms_utime + buffer.tms_stime) * 1000 / rticks;
# else
   return 0;
# endif
}

char * rtpqx
# ifdef HAVE_ARGS
   (char * p)
# else
   (p) char * p;
# endif
{
   static char q [10];
   time_t x = time ((time_t *) NULL);
   strftime (q, 10, p, localtime (& x));
   return q;
}

rbool rtpqy ARGS ((void))
{
# ifdef WITH_WIBU_KEY
# define USER_CODE  10
   return check_license (USER_CODE);
# else
   return rtrue;
# endif
}

static int	argc;
static char * *	argv;

int GetArgCount ARGS ((void))
{ return argc; }

void GetArgument
# ifdef HAVE_ARGS
   (int ArgNum, char * Argument)
# else
   (ArgNum, Argument) int ArgNum; char * Argument;
# endif
{
   register int	i = 0;
   for (;; i ++)
      if ((Argument [i] = argv [ArgNum][i]) == '\0') return;
}

char * GetEnvVar
# ifdef HAVE_ARGS
   (char * Name)
# else
   (Name) char * Name;
# endif
{ return getenv (Name); }

void PutArgs
# ifdef HAVE_ARGS
   (int Argc, char * * Argv)
# else
   (Argc, Argv) int Argc; char * * Argv;
# endif
{
   argc = Argc;
   argv = Argv;
}

# include <errno.h>

int rErrNo ARGS ((void))
{ return errno; }

int rSystem
# ifdef HAVE_ARGS
   (char * String)
# else
   (String) char * String;
# endif
{
# if defined _MSC_VER & (_MSC_VER <= 800)
#  pragma warning (disable:4100)
   return -1;
# else
   return system (String);
# endif
}

void rExit
# ifdef HAVE_ARGS
   (int Status)
# else
   (Status) int Status;
# endif
{
# ifndef _USRDLL
   exit (Status);
# endif
}

static void yyExit ARGS ((void)) { rExit (1); }

void (* Reuse_Exit) ARGS ((void)) = yyExit;

void BEGIN_rSystem ARGS ((void))
{}
