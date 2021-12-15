$@ # ifndef xy$Source
$@ # define xy$Source

# include "config.h"
# if HAVE_WCHAR_H
#  include <wchar.h>
# endif

# define SOURCE_VER	0012

# ifndef CODE_NONE
                                /* encodings of the input stream        */

# define CODE_NONE      0
# define CODE_BYTE      1       /* 1 byte         */
# define CODE_WCHAR_T   2       /* 2 or 4 bytes   */
# define CODE_UCS2      3       /* 2 bytes        */
# define CODE_UCS4      4       /* 4 bytes        */
# define CODE_UTF8      5       /* seq of 1 byte  */
# define CODE_UTF16     6       /* seq of 2 bytes */

   /* The above comments give the size of an input stream item in bytes.
      All input stream items (or sequences of input stream items in the cases
      of UTF8 and UTF16) represent Unicode characters.
      The encodings BYTE, UCS2, and UTF16, and possibly WCHAR_T can represent
      subsets of the full Unicode character set, only.
      A Unicode character will be stored in a variable of type wchar_t.
      Note, the size of wchar_t is 2 or 4 bytes, depending on the compiler.
      Therefore, if the size of wchar_t is 2 then characters encoded by UCS4,
      UTF8, and UTF16 will be truncated to two bytes.
   */

                                /* endian property of the input stream  */

# define ENDIAN_NONE    0       /* no endian property specified         */
# define ENDIAN_LITTLE  1       /* little-endian                        */
# define ENDIAN_BIG     2       /* big-endian                           */

# endif

$@ # define $_BeginSource $_BeginSourceFile

$@ extern void $_SetEncoding (int yyEncoding, int yyEndian);

   /*
      Specify the encoding and the endian property of the input stream.
      The arguments have to be values as defined above.
$@       This function has to be called after the function $_BeginSource... .
      If neither little-endian nor big-endian is specified then the endian
      property of the current system is assumed to hold for the input.
$@       The function $_GetWLine will convert the input stream to a stream
      of type wchar_t.
   */

$@ extern int  $_BeginSourceFile (char * yyFileName);

   /*
$@       $_BeginSourceFile is called from the scanner function BeginFile
      indicating that input should be read from a file. The file specified
      by the parameter 'FileName' is opened and used as input file.
      If not called input is read from standard input. The function
      should return an integer file descriptor as provided by the system
$@       call 'open' or any other handle understood by the function $_GetLine.
   */

# if HAVE_WCHAR_T
$@ extern int  $_BeginSourceFileW (wchar_t * yyFileName);

   /*
$@       Same as $_BeginSourceFile for type wchar_t instead of type char.
      The Source module has to be extended by the user in order to
      implement this feature.
   */
# endif

$@ extern void $_BeginSourceMemory (void * yyInputPtr);

   /*
$@       $_BeginSourceMemory is called from the scanner function BeginMemory
      indicating that input should be read from the null terminated string
      of input items at location 'InputPtr'.
      The input string may not contain null characters. The contents of the
      string may not be changed until it has been processed completely.
   */

$@ extern void $_BeginSourceMemoryN (void * yyInputPtr, int yyLength);

   /*
$@       $_BeginSourceMemoryN is called from the scanner function BeginMemoryN
      indicating that the input should be 'Length' input items at location
      'InputPtr'. The input may contain null characters. The contents of the
      input may not be changed until it has been processed completely.
   */

$@ extern void $_BeginSourceGeneric (void * yyInputPtr);

   /*
$@       $_BeginSourceGeneric is called from the scanner function BeginGeneric
      indicating that the input is user-defined at location 'InputPtr'.
      The Source module has to be extended by the user in order to
      implement this feature.
   */

$@ extern int  $_GetLine (int yyFile, char * yyBuffer, int yySize);

   /*
$@       $_GetLine is called from the scanner in order to fill a buffer at
      address 'Buffer' with a block of maximal 'Size' characters. Input
      should be read from a file specified by the integer file descriptor
      'File' if the current input stream comes from a file. Otherwise input
      comes from memory and the parameter 'File' can be ignored.
      Lines are terminated by newline characters (ASCII = 0xa).
      The function returns the number of characters transferred.
      Reasonable block sizes are between 128 and 8192 or the length of a line.
      Smaller block sizes - especially block size 1 - will drastically
      slow down the scanner. The end of file or end of input is indicated
      by a return value <= 0.
   */

# if HAVE_WCHAR_T
$@ extern int  $_GetWLine (int yyFile, wchar_t * yyBuffer, int yySize);

   /*
$@       Same as $_GetLine for type wchar_t instead of type char.
   */
# endif

$@ extern void $_CloseSource (int yyFile);

   /*
$@       $_CloseSource is called from the scanner function CloseFile
      at end of file or at end of input, respectively.
      It can be used to close files.
$@       The functions $_BeginSource... and $_CloseSource can be called
      in a nested way, for example in order to handle include files. 
      The encoding and the endian property of the input stream are stacked.
$@       Therefore after a call of $_CloseSource the properties of the
      previous input stream are restored.
   */

# endif
