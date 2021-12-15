/*
   Copyright (c) 1997 Dr. Josef Grosch, CoCoLab - Datenverarbeitung

   This file contains proprietary and confidential information and
   remains the property of CoCoLab. Use, disclosure, or reproduction
   is prohibited except as permitted by express written license agreement
   with CoCoLab.

   Phone : +49-7841-669144
   Fax   : +49-7841-669145
   E-mail: grosch@cocolab.de
*/

/* Id: Errors.c,v 1.39 2006/12/19 15:57:11 grosch rel $ */

/*
 * Log: Errors.c,v $
 * Revision 1.39  2006/12/19 15:57:11  grosch
 * calmed down gcc -Wall (wchar_t -> wint_t)
 *
 * Revision 1.38  2006/11/15 14:43:49  grosch
 * reset variable MessageSize only if "array" MessagePtr is released
 *
 * Revision 1.37  2006/07/18 08:44:58  grosch
 * added mechanism for notification about (error) messages
 * the return code to be returned by a program (parser) can be set
 *
 * Revision 1.36  2005/05/23 12:26:27  grosch
 * changed #include <config.h> to #include "config.h"
 *
 * Revision 1.35  2004/07/06 14:36:47  grosch
 * added Compare (Error->Position, NoPosition)
 *
 * Revision 1.34  2003/01/24 10:48:17  grosch
 * fixed bug in function BeginErrors - added function CloseErrors
 *
 * Revision 1.33  2002/11/07 20:19:05  grosch
 * added "PrevLine = 0;" to function WriteMessages
 *
 * Revision 1.32  2002/09/26 11:52:04  grosch
 * added error ConfigureUnknownParam
 *
 * Revision 1.31  2002/07/18 20:19:06  grosch
 * eliminate duplicate messages
 *
 * Revision 1.30  2002/05/15 13:45:17  grosch
 * added message text: cannot write file yyNode
 *
 * Revision 1.29  2001/07/16 14:37:23  grosch
 * made ErrorTable a flexible array so we can store any number of messages
 *
 * Revision 1.28  2000/09/04 13:31:10  grosch
 * added support for wide character strings
 * moved message texts to Errors.c
 *
 * Revision 1.27  2000/08/18 16:05:06  grosch
 * added const to char *
 *
 * Revision 1.26  2000/04/10 15:38:40  grosch
 * introduced ifdef HAVE_ARGS
 * renamed With into Error
 *
 * Revision 1.25  2000/01/13 11:53:34  grosch
 * fixed bug in case of PrevLine=0 and Position=NoPosition
 * assign NoPosition to message "too many messages"
 *
 * Revision 1.24  1999/11/11 15:22:28  grosch
 * cosmetic changes
 *
 * Revision 1.23  1999/05/27 13:28:58  grosch
 * revised handling of extern "C"
 *
 * Revision 1.22  1999/01/20 11:34:54  grosch
 * refined type for parameter ErrorClass
 *
 * Revision 1.21  1997/11/30 22:40:23  grosch
 * changed type of ErrorCode from int to long
 * added missing initializations
 * suppress call of WritePosition if NoPosition
 * added functions BeginErrors and GetCount
 *
 * Revision 1.20  1997/05/27 13:25:04  grosch
 * truncation of filenames to 8.3 format
 *
 * Revision 1.19  1997/05/06 15:11:37  grosch
 * calmed down purify
 *
 * Revision 1.18  1996/08/13 13:20:23  grosch
 * adaption to DLL's for Microsoft Visual C++
 *
 * Revision 1.17  1996/08/01  08:33:05  grosch
 * adaptions to MS Visual C++ 1.52
 *
 * Revision 1.16  1996/07/25  16:51:34  grosch
 * adaption to MS VC++
 *
 * Revision 1.15  1996/07/04  17:15:19  grosch
 * introduced files Reuse.h and config.h for system configuration
 *
 * Revision 1.14  1996/07/04  09:53:45  grosch
 * introduced files Reuse.h and config.h for system configuration
 *
 * Revision 1.13  1996/06/05  12:00:48  grosch
 * adaption to MS VC++
 *
 * Revision 1.12  1995/08/14  13:56:25  grosch
 * corrections because of purify
 *
 * Revision 1.11  1995/05/09  13:53:42  grosch
 * added void to argument list of functions without arguments
 *
 * Revision 1.10  1995/03/20  15:37:30  grosch
 * truncate lines to at most 80 characters
 *
 * Revision 1.9  1995/02/23  20:11:10  grosch
 * renamed Positions to Position, StringMem to StringM, Relations to Relation
 * output lines with at most 132 characters
 *
 * Revision 1.8  1994/12/04  19:29:55  grosch
 * added ANSI-C prototypes
 *
 * Revision 1.7  1994/11/10  11:26:40  grosch
 * fixed bug in declaration of FoundString
 *
 * Revision 1.6  1994/11/07  12:39:52  grosch
 * added cpp variables BRIEF, FIRST, and TRUNCATE
 *
 * Revision 1.5  1994/06/16  19:05:46  grosch
 * added fflush
 *
 * Revision 1.4  1994/04/05  09:00:35  grosch
 * added prefix 'r' to true and false for improved portability
 *
 * Revision 1.3  1994/01/29  22:13:50  grosch
 * renamed bool to rbool
 *
 * Revision 1.2  1993/08/18  15:01:05  grosch
 * rename System and Memory to rSystem and rMemory
 *
 * Revision 1.1  1992/08/13  12:29:12  grosch
 * fix bugs with ANSI C
 *
 * Revision 1.0  1992/08/07  14:31:40  grosch
 * Initial revision
 *
 */

/* Ich, Doktor Josef Grosch, Informatiker, Nov. 1994/August 2000 */

static char rcsid [] =
   "Id: Errors.c,v 1.39 2006/12/19 15:57:11 grosch rel $";

# include "Errors.h"
# include <ctype.h>
# if HAVE_WCHAR_T
#  include <wctype.h>
# endif
# include "config.h"
# if HAVE_STDLIB_H
#  include <stdlib.h>
# endif
# ifdef _MSC_VER
#  include <search.h>
# endif
# include "rString.h"
# include "rSystem.h"
# include "rMemory.h"
# include "Sets.h"
# include "Idents.h"
# include "DynArray.h"

# ifdef WITH_GETTEXT
#  include <libintl.h>
# else
#  define gettext(String) String
# endif

# define BRIEF
# define FIRST
# define TRUNCATE

# define us_long	unsigned long

	int	ReturnCode	= 0;

static void yyNotify (tPosition Position, int ErrorClass,
			char * ErrorText, int InfoClass, const char * Info) {
  Position; ErrorClass; ErrorText; InfoClass; Info;
}

void (* Errors_Notify) (tPosition Position, int ErrorClass, char * ErrorText,
	int InfoClass, const char * Info) = yyNotify;

void setErrors_Notify (void (* errors_Notify) (tPosition Position,
	int ErrorClass, char * ErrorText, int InfoClass, const char * Info)) {
  Errors_Notify = errors_Notify;
}

void setReturnCode (int returnCode) {
  ReturnCode = returnCode;
}

static	void	yyExit ARGS ((void)) { rExit (1); }

void (* Errors_Exit) ARGS ((void)) = yyExit;

typedef struct {
   tPosition	Position	;
   rbool	IsErrorCode	;
   unsigned short ErrorNumber	;
   long		ErrorCode	;
   short	ErrorClass	;
   short	InfoClass	;
   union {
      int	vInteger	;
      short	vShort		;
      long	vLong		;
      us_long	vUSLong		;
      float	vReal		;
      rbool	vBoolean	;
      char	vCharacter	;
      tStringRef vString	;
      tIdent	vIdent		;
# if HAVE_WCHAR_T
      wchar_t	vWCharacter	;
      tWStringRef vWString	;
      tWIdent	vWIdent		;
# endif
      tSet *	vSet		;
      tPosition	vPosition	;
   } Info;
} tError;

static void WriteHead	ARGS ((tPosition Position, int ErrorClass));
static void WriteInfo	ARGS ((int InfoClass, const char * Info, long ErrorCode));
static void WriteMessage ARGS ((rbool IsErrorCode, long ErrorCode,
	int ErrorClass, tPosition Position, int InfoClass, const char * Info));
static void StoreMessage ARGS ((rbool IsErrorCode, long ErrorCode,
	int ErrorClass, tPosition Position, int InfoClass, const char * Info));
static int IsLess	ARGS ((tError * i, tError * j));

# define		InitMessageSize	128

static tError *		MessagePtr	;
static unsigned long	MessageSize	= 0;
static unsigned long	MessageCount	= 0;

static rbool	IsStore		= rfalse;
static rbool	DoPrint		= rtrue;
static void (*	HandleMessage) ARGS ((rbool IsErrorCode, long ErrorCode,
			int ErrorClass, tPosition Position, int InfoClass,
			const char * Info)) = WriteMessage;
static FILE *	Out		= NULL;
static tPosition PrevPosition	= NO_POSITION;
static char	FoundString	[5000];
static int	nErrors		[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };

void BeginErrors ARGS ((void))
{
   int i; for (i = 0; i < 8; i ++) nErrors [i] = 0;
   MessageCount	= 0;
   PrevPosition	= NoPosition;
}

void CloseErrors ARGS ((void))
{
   if (MessageSize > 0) {
      ReleaseArray ((char * *) & MessagePtr, & MessageSize,
	(unsigned long) sizeof (tError));
      MessageSize = 0;
   }
}

void ErrorMessage
# ifdef HAVE_ARGS
   (long ErrorCode, int ErrorClass, tPosition Position)
# else
   (ErrorCode, ErrorClass, Position)
   long ErrorCode; int ErrorClass; tPosition Position;
# endif
{
   nErrors [ErrorClass] ++;
   (* HandleMessage) (rtrue, ErrorCode, ErrorClass, Position, xxNone, NULL);
}

void ErrorMessageI
# ifdef HAVE_ARGS
   (long ErrorCode, int ErrorClass, tPosition Position, int InfoClass,
      const char * Info)
# else
   (ErrorCode, ErrorClass, Position, InfoClass, Info)
   long ErrorCode; int ErrorClass; tPosition Position; int InfoClass;
   char * Info;
# endif
{
   nErrors [ErrorClass] ++;
   (* HandleMessage) (rtrue, ErrorCode, ErrorClass, Position, InfoClass, Info);
}

void Message
# ifdef HAVE_ARGS
   (const char * ErrorText, int ErrorClass, tPosition Position)
# else
   (ErrorText, ErrorClass, Position)
   char * ErrorText; int ErrorClass; tPosition Position;
# endif
{
   nErrors [ErrorClass] ++;
   (* HandleMessage) (rfalse, MakeIdent1 (ErrorText),
      ErrorClass, Position, xxNone, NULL);
}

void MessageI
# ifdef HAVE_ARGS
   (const char * ErrorText, int ErrorClass, tPosition Position, int InfoClass,
      const char * Info)
# else
   (ErrorText, ErrorClass, Position, InfoClass, Info)
   char * ErrorText; int ErrorClass; tPosition Position; int InfoClass;
   char * Info;
# endif
{
   nErrors [ErrorClass] ++;
   (* HandleMessage) (rfalse, MakeIdent1 (ErrorText),
      ErrorClass, Position, InfoClass, Info);
}

static void WriteHead
# ifdef HAVE_ARGS
   (tPosition Position, int ErrorClass)
# else
   (Position, ErrorClass) tPosition Position; int ErrorClass;
# endif
{
   char * t;
# ifndef _USRDLL
   if (Out == NULL) Out = stderr;
# endif
   if (Position.Line != 0) {
      WritePosition (Out, Position);
      fputs (": ", Out);
   }
   switch (ErrorClass) {
   case xxFatal		: t = "Fatal       "; break;
   case xxRestriction	: t = "Restriction "; break;
   case xxError		: t = "Error       "; break;
   case xxWarning	: t = "Warning     "; break;
   case xxRepair	: t = "Repair      "; break;
   case xxNote		: t = "Note        "; break;
   case xxInformation	: t = "Information "; break;
   default		: fprintf (Out, gettext ("Error class: %d "), ErrorClass);
			  return;
   }
   fputs (gettext (t), Out);
}

char * CodeToText
# ifdef HAVE_ARGS
   (long ErrorCode)
# else
   (ErrorCode) long ErrorCode;
# endif
{
   char * t;
   switch (ErrorCode) {
		/* general messages */
   case xxNoText		: t = " "				; break;
   case xxTooManyErrors		: t = "too many messages"		; break;
   case xxTclTkError		: t = "Tcl/Tk"				; break;
		/* reuse messages */
   case xxAllocOutOfMemory	: t = "rMemory.Alloc out of memory"	; break;
   case xxStringUndefined	: t = "tStringRef undefined (NULL)"	; break;
   case xxIdentOutOfBounds	: t = "tIdent out of bounds"		; break;
		/* scanner messages */
   case xxScannerInternalError	: t = "internal error"			; break;
   case xxScannerOutOfMemory	: t = "out of memory"			; break;
   case xxFileStackUnderflow	:
		t = "file stack underflow (too many calls of CloseFile)"; break;
   case xxCannotOpenInputFile	: t = "cannot open input file"		; break;
   case xxStartStackUnderflow	:
		t = "start stack underflow (too many calls of yyPop)"	; break;
		/* parser messages */
   case xxSyntaxError		: t = "syntax error"			; break;
   case xxExpectedTokens	: t = "expected tokens"			; break;
   case xxRestartPoint		: t = "restart point"			; break;
   case xxTokenInserted		: t = "token inserted "			; break;
   case xxTokenFound		: t = "token found    "			; break;
   case xxFoundExpected		: t = "found/expected "			; break;
   case xxInvalidCallOfReParse	: t = "invalid call of ReParse"		; break;
		/* ast (tree) messages */
   case xxTreeOutOfMemory	: t = "tree out of memory"		; break;
   case xxTreeIOError		: t = "I/O error in"			; break;
   case xxQueryTreeEof		: t = "QueryTree reached end of input"	; break;
   case xxDrawTreeyyNode	: t = "cannot write file yyNode"	; break;
   case xxConfigureUnknownParam	: t = "ConfigureTree: unknown parameter"; break;
   case xxCheckTreeError	: t = "CheckTree error"			; break;
		/* the following CheckTree messages should be equal in length */
   case xxCheckTreeAddrOfParent	: t = "addr of parent:"			; break;
   case xxCheckTreeTypeOfParent	: t = "type of parent:"			; break;
   case xxCheckTreeNameOfChild	: t = "name of child :"			; break;
   case xxCheckTreeValueOfChild	: t = "value of child:"			; break;
   case xxCheckTreeAddrOfChild	: t = "addr of child :"			; break;
   case xxCheckTreeTypeOfChild	: t = "type of child :"			; break;
   case xxCheckTreeExpectedType	: t = "expected type :"			; break;
   case xxCheckTreeParentNode	: t = "parent node   :"			; break;
   case xxCheckTreeChildNode	: t = "child node    :"			; break;
		/* ag (eval) messages */
   case xxCyclicDependencies	: t = "cyclic attribute dependencies"	; break;
		/* puma (trafo) messages */
   case xxRoutineFailed		: t = "routine failed"			; break;
   default			: t = "unknown"				; break;
   }
   return t;
}

static void WriteInfo
# ifdef HAVE_ARGS
   (int InfoClass, const char * Info, long ErrorCode)
# else
   (InfoClass, Info, ErrorCode) int InfoClass; char * Info; long ErrorCode;
# endif
{
   int i;
   if (InfoClass == xxNone) return;
   fputs (": ", Out);
   switch (InfoClass) {
   case xxInteger	: fprintf (Out, "%d", * (int *) Info); break;
   case xxShort		: i =  * (short *) Info; fprintf (Out, "%d", i); break;
   case xxLong		: fprintf (Out, "%ld", * (long *) Info); break;
   case xxUSLong	: fprintf (Out, "%lu", * (us_long *) Info);break;
   case xxReal		: fprintf (Out, "%e", * (float *) Info); break;
   case xxBoolean	: fprintf (Out, "%c", * (rbool *) Info ? 'T' : 'F');
			  break;
   case xxCharacter	: fprintf (Out, "%c", * Info); break;
   case xxString	:
# ifdef TRUNCATE
			  if (ErrorCode == xxFoundExpected) {
			    register int i = 0;
			    while (i <= 25 && Info [i] != '\0')
			       fputc (Info [i ++], Out);
			    if (Info [i] != '\0') {
			       while (Info [i] != ' ' && Info [i] != '\0')
				  fputc (Info [i ++], Out);
			       if (Info [i] != '\0') fputs (" ...", Out);
			    }
			  } else {
			    fputs (Info, Out);
			  }
# else
			  fputs	 (Info, Out);
# endif
			  break;
   case xxIdent		: WriteIdent	(Out, * (tIdent *) Info); break;
# if HAVE_WCHAR_T
   case xxWCharacter	: fprintf	(Out, "%lc", * (wint_t *) Info); break;
   case xxWString	: fprintf	(Out, "%ls", (wchar_t *) Info); break;
   case xxWIdent	: WriteWIdent	(Out, * (tWIdent *) Info); break;
# endif
   case xxSet		: WriteSet	(Out, (tSet *) Info); break;
   case xxPosition	: WritePosition	(Out, * (tPosition *) Info); break;
   default		: fprintf	(Out, "info class: %d", InfoClass);
   }
}

static void WriteMessage
# ifdef HAVE_ARGS
   (rbool IsErrorCode, long ErrorCode, int ErrorClass, tPosition Position,
      int InfoClass, const char * Info)
# else
   (IsErrorCode, ErrorCode, ErrorClass, Position, InfoClass, Info)
   rbool IsErrorCode; long ErrorCode; int ErrorClass; tPosition Position;
   int InfoClass; char * Info;
# endif
{
   char * text;
   if (IsErrorCode) {
# ifdef BRIEF
      switch (ErrorCode) {
      case xxTokenFound		: strcat (strcpy (FoundString, Info), "/");
      case xxSyntaxError	:
      case xxRestartPoint	:
      case xxTokenInserted	: return;
      case xxExpectedTokens	: ErrorCode = xxFoundExpected;
				  ErrorClass = xxError;
				  Info = strcat (FoundString, Info);
      }
# endif
# ifdef FIRST
      if (Position.Line != 0) {
	 if (Position.Line == PrevPosition.Line &&
	     Position.FileName == PrevPosition.FileName) return;
	 else PrevPosition = Position;
      }
# endif
      text = CodeToText (ErrorCode);
   } else {
      text = GetCStr ((tIdent) ErrorCode);
   }
   if (DoPrint) {
     WriteHead (Position, ErrorClass);
     if (text == NULL)
	fprintf (Out, gettext ("error code: %ld"), ErrorCode);
     else
	fputs (gettext (text), Out);
     WriteInfo (InfoClass, Info, ErrorCode);
     fputc ('\n', Out); fflush (Out);
   }
   (* Errors_Notify) (Position, ErrorClass, gettext (text), InfoClass, Info);
   if (ErrorClass == xxFatal && ! IsStore) (* Errors_Exit) ();
}

void WriteMessages
# ifdef HAVE_ARGS
   (FILE * File)
# else
   (File) FILE * File;
# endif
{
   unsigned long i;
   char *	 Info = NULL;
   tError *	 PrevMsg = NULL;

   qsort ((char *) & MessagePtr [1], MessageCount, sizeof (tError),
      (int (*) ARGS ((const void *, const void *))) IsLess);
   PrevPosition = NoPosition;
   Out = File;
   for (i = 1; i <= MessageCount; i ++) {
      register tError * Error = & MessagePtr [i];

      switch (Error->InfoClass) {
      case xxInteger	: Info = (char *) & Error->Info.vInteger; break;
      case xxShort	: Info = (char *) & Error->Info.vShort	; break;
      case xxLong	: Info = (char *) & Error->Info.vLong	; break;
      case xxUSLong	: Info = (char *) & Error->Info.vUSLong	; break;
      case xxReal	: Info = (char *) & Error->Info.vReal	; break;
      case xxBoolean	: Info = (char *) & Error->Info.vBoolean; break;
      case xxCharacter	: Info = (char *) & Error->Info.vCharacter; break;
      case xxString	: Info = StGetCStr (Error->Info.vString); break;
      case xxIdent	: Info = (char *) & Error->Info.vIdent	; break;
# if HAVE_WCHAR_T
      case xxWCharacter	: Info = (char *) & Error->Info.vWCharacter; break;
      case xxWString	: Info = (char *) StGetWCStr (Error->Info.vWString);
			  break;
      case xxWIdent	: Info = (char *) & Error->Info.vWIdent	; break;
# endif
      case xxSet	: Info = (char *) Error->Info.vSet	; break;
      case xxPosition	: Info = (char *) & Error->Info.vPosition; break;
      }
      if (i == 1 ||
	  Error->IsErrorCode	!= PrevMsg->IsErrorCode	||
	  Error->ErrorCode	!= PrevMsg->ErrorCode	||
	  Error->ErrorClass	!= PrevMsg->ErrorClass	||
	  Compare (Error->Position, PrevMsg->Position)	||
	  Error->InfoClass	!= PrevMsg->InfoClass	||
	 (Error->InfoClass	== xxString &&
	  Error->Info.vString	!= PrevMsg->Info.vString)	||
	 (Error->InfoClass	== xxCharacter &&
	  Error->Info.vCharacter != PrevMsg->Info.vCharacter)	||
# if HAVE_WCHAR_T
	 (Error->InfoClass	== xxWString &&
	  Error->Info.vWString	!= PrevMsg->Info.vWString)	||
	 (Error->InfoClass	== xxWCharacter &&
	  Error->Info.vWCharacter != PrevMsg->Info.vWCharacter)	||
# endif
	  Compare (Error->Position, NoPosition) == 0) {
	 WriteMessage (Error->IsErrorCode, Error->ErrorCode, Error->ErrorClass,
	    Error->Position, Error->InfoClass, Info);
	 PrevMsg = & MessagePtr [i];
      }
   }
# ifndef _USRDLL
   Out = stderr;
# endif
}

static void StoreMessage
# ifdef HAVE_ARGS
   (rbool IsErrorCode, long ErrorCode, int ErrorClass, tPosition Position,
      int InfoClass, const char * Info)
# else
   (IsErrorCode, ErrorCode, ErrorClass, Position, InfoClass, Info)
   rbool IsErrorCode; long ErrorCode; int ErrorClass; tPosition Position;
   int InfoClass; char * Info;
# endif
{
   register tError * Error;

   if (++ MessageCount >= MessageSize) {
      if (MessageSize == 0) {
         MessageSize = InitMessageSize;
         MakeArray ((char * *) & MessagePtr, & MessageSize,
	    (unsigned long) sizeof (tError));
      } else {
         ExtendArray ((char * *) & MessagePtr, & MessageSize,
	    (unsigned long) sizeof (tError));
      }
   }

   Error = & MessagePtr [MessageCount];
   Error->Position	= Position;
   Error->IsErrorCode	= IsErrorCode;
   Error->ErrorNumber	= (unsigned short) MessageCount;
   Error->ErrorCode	= ErrorCode;
   Error->ErrorClass	= (short) ErrorClass;
   Error->InfoClass	= (short) InfoClass;

   switch (Error->InfoClass) {
   case xxInteger	: Error->Info.vInteger	= * (int	*) Info; break;
   case xxShort		: Error->Info.vShort	= * (short	*) Info; break;
   case xxLong		: Error->Info.vLong	= * (long	*) Info; break;
   case xxUSLong	: Error->Info.vUSLong	= * (us_long	*) Info; break;
   case xxReal		: Error->Info.vReal	= * (float	*) Info; break;
   case xxBoolean	: Error->Info.vBoolean	= * (rbool	*) Info; break;
   case xxCharacter	: Error->Info.vCharacter= * (char	*) Info; break;
   case xxString	: Error->Info.vString	= PutString1 (Info);	 break;
   case xxIdent		: Error->Info.vIdent	= * (tIdent	*) Info; break;
# if HAVE_WCHAR_T
   case xxWCharacter	: Error->Info.vWCharacter= * (wchar_t	*) Info; break;
   case xxWString	: Error->Info.vWString	= PutWString1 ((wchar_t*) Info);
								       break;
   case xxWIdent	: Error->Info.vWIdent	= * (tWIdent	*) Info; break;
# endif
   case xxSet		: Error->Info.vSet	=
			      (tSet *) Alloc ((unsigned long) sizeof (tSet));
			   MakeSet (Error->Info.vSet, Size ((tSet *) Info));
			   Assign (Error->Info.vSet, (tSet *) Info); break;
   case xxPosition	: Error->Info.vPosition	= * (tPosition	*) Info; break;
   }
   if (ErrorClass == xxFatal) {
# ifndef _USRDLL
      WriteMessages (stderr);
# endif
      (* Errors_Exit) ();
   }
}

static int IsLess
# ifdef HAVE_ARGS
   (tError * i, tError * j)
# else
   (i, j) tError * i, * j;
# endif
{
   register int r = Compare (i->Position, j->Position);
   return r != 0 ? r : i->ErrorNumber - j->ErrorNumber;
}

void StoreMessages
# ifdef HAVE_ARGS
   (rbool Store)
# else
   (Store) rbool Store;
# endif
{
   if (Store) {
      HandleMessage = StoreMessage;
      MessageCount  = 0;
      PrevPosition  = NoPosition;
   } else {
      HandleMessage = WriteMessage;
   }
   IsStore = Store;
}

void PrintMessages
# ifdef HAVE_ARGS
   (rbool Print)
# else
   (Print) rbool Print;
# endif
{
   DoPrint = Print;
}

int GetCount
# ifdef HAVE_ARGS
   (int ErrorClass)
# else
   (ErrorClass) int ErrorClass;
# endif
{
   return nErrors [ErrorClass];
}

void MessageChar
# ifdef HAVE_ARGS
   (char * ErrorText, int ErrorClass, tPosition Position, char * Info)
# else
   (ErrorText, ErrorClass, Position, Info)
   char * ErrorText; int ErrorClass; tPosition Position; char * Info;
# endif
{
   if (isgraph (* Info)) {
      MessageI (ErrorText, ErrorClass, Position, xxCharacter, Info);
   } else {
      char s [4];
      sprintf (s, "\\%02x", (unsigned char) * Info);
      MessageI (ErrorText, ErrorClass, Position, xxString, s);
   }
}

# if HAVE_WCHAR_T
void MessageWChar
# ifdef HAVE_ARGS
   (char * ErrorText, int ErrorClass, tPosition Position, wchar_t * Info)
# else
   (ErrorText, ErrorClass, Position, Info)
   char * ErrorText; int ErrorClass; tPosition Position; wchar_t * Info;
# endif
{
   if (iswgraph (* Info)) {
      MessageI (ErrorText, ErrorClass, Position, xxWCharacter, (char *) Info);
   } else {
      char s [10];
      sprintf (s, "\\%08x", (wint_t) * Info);
      MessageI (ErrorText, ErrorClass, Position, xxString, s);
   }
}
# endif
