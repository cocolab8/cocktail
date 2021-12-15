/* $Id: Errors.c,v 1.11 1995/05/09 13:53:42 grosch rel $ */

/* $Log: Errors.c,v $
 */

/* Ich, Doktor Josef Grosch, Informatiker, April 1996 */

static char rcsid [] =
   "$Id: Errors.c,v 1.11 1995/05/09 13:53:42 grosch rel $";

# include "Errors.h"
# include <ctype.h>
# include "config.h"
# if HAVE_WCHAR_T
#  include <wctype.h>
# endif
# include <stdlib.h>
# include "rString.h"
# include "rSystem.h"
# include "rMemory.h"
# include "DynArray.h"
# include "Global.h"

# if defined _MSC_VER
#  pragma warning (disable:4505 4514)
# endif

# define BRIEF
# define FIRST
# define TRUNCATE

# define InitMessageSize 128

static int IsLess (tError * i, tError * j);

static void yyNotify (tPosition Position, int ErrorClass,
			const char * ErrorText, int InfoClass, const char * Info) {
  Position; ErrorClass; ErrorText; InfoClass; Info;
}

static void yyExit (void) { rExit (1); }

void (* Errors_Exit) (void);

void Errors::BeginErrors (void)
{
   for (int i = 0; i < 8; i ++) nErrors [i] = 0;
   MessageCount	= 0;
   PrevLine	= 0;
}

void Errors::CloseErrors (void)
{
   if (MessageSize > 0) {
      ReleaseArray ((char * *) & MessagePtr, & MessageSize,
	(unsigned long) sizeof (tError));
     MessageSize = 0;
   }
}

void Errors::ErrorMessage (long ErrorCode, int ErrorClass, tPosition Position)
{
   nErrors [ErrorClass] ++;
   if (IsStore) {
      StoreMessage (rtrue, ErrorCode, ErrorClass, Position, xxNone, NULL);
   } else {
      WriteMessage (rtrue, ErrorCode, ErrorClass, Position, xxNone, NULL);
   }
}

void Errors::ErrorMessageI (long ErrorCode, int ErrorClass, tPosition Position,
      int InfoClass, const char * Info)
{
   nErrors [ErrorClass] ++;
   if (IsStore) {
      StoreMessage (rtrue, ErrorCode, ErrorClass, Position, InfoClass, Info);
   } else {
      WriteMessage (rtrue, ErrorCode, ErrorClass, Position, InfoClass, Info);
   }
}

void Errors::Message (const char * ErrorText, int ErrorClass, tPosition Position)
{
   nErrors [ErrorClass] ++;
   if (IsStore) {
      StoreMessage (rfalse, IdentsObj->MakeIdent (ErrorText),
	 ErrorClass, Position, xxNone, NULL);
   } else {
      WriteMessage (rfalse, IdentsObj->MakeIdent (ErrorText),
	 ErrorClass, Position, xxNone, NULL);
   }
}

void Errors::MessageI (const char * ErrorText, int ErrorClass, tPosition Position,
      int InfoClass, const char * Info)
{
   nErrors [ErrorClass] ++;
   if (IsStore) {
      StoreMessage (rfalse, IdentsObj->MakeIdent (ErrorText),
	 ErrorClass, Position, InfoClass, Info);
   } else {
      WriteMessage (rfalse, IdentsObj->MakeIdent (ErrorText),
	 ErrorClass, Position, InfoClass, Info);
   }
}

void Errors::WriteHead (tPosition Position, int ErrorClass)
{
   if (Position.Line != 0) {
      WritePosition (Out, Position);
      fputs (": ", Out);
   }
   switch (ErrorClass) {
   case xxFatal		: fputs ("Fatal       ", Out); break;
   case xxRestriction	: fputs ("Restriction ", Out); break;
   case xxError		: fputs ("Error       ", Out); break;
   case xxWarning	: fputs ("Warning     ", Out); break;
   case xxRepair	: fputs ("Repair      ", Out); break;
   case xxNote		: fputs ("Note        ", Out); break;
   case xxInformation	: fputs ("Information ", Out); break;
   default		: fprintf (Out, "Error class: %d ", ErrorClass);
   }
}

const char * Errors::CodeToText (long ErrorCode)
{
   const char * t;
   switch (ErrorCode) {
		/* general messages */
   case xxNoText		: t = ""				; break;
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
   case xxMakeInvalidParam	: t = "invalid parameter"		; break;
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
   default			: t = NULL				; break;
   }
   return t;
}

void Errors::WriteInfo (int InfoClass, const char * Info, long ErrorCode)
{
   int i;
   if (InfoClass == xxNone) return;
   fputs (": ", Out);
   switch (InfoClass) {
   case xxInteger	: fprintf (Out, "%d", * (int *) Info); break;
   case xxShort		: i =  * (short *) Info; fprintf (Out, "%d", i); break;
   case xxLong		: fprintf (Out, "%ld", * (long *) Info); break;
   case xxUSLong	: fprintf (Out, "%lu", * (unsigned long *) Info); break;
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
   case xxIdent		: IdentsObj->WriteIdent (Out, * (tIdent *) Info); break;
# if HAVE_WCHAR_T
   case xxWCharacter	: fprintf	(Out, "%lc", * (wint_t *) Info); break;
   case xxWString	: fprintf	(Out, "%ls", (wchar_t *) Info); break;
   case xxWIdent	: IdentsObj->WriteWIdent (Out, * (tWIdent *) Info);
			  break;
# endif
   case xxSet		: WriteSet	(Out, (tSet *) Info); break;
   case xxPosition	: WritePosition	(Out, * (tPosition *) Info); break;
   default		: fprintf	(Out, "info class: %d", InfoClass);
   }
}

void Errors::WriteMessage (rbool IsErrorCode, long ErrorCode, int ErrorClass,
      tPosition Position, int InfoClass, const char * Info)
{
   const char * text;
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
	 if (Position.Line == PrevLine) return; else PrevLine = Position.Line;
      }
# endif
      text = CodeToText (ErrorCode);
   } else {
      text = IdentsObj->GetCStr ((tIdent) ErrorCode);
   }
   if (DoPrint) {
      WriteHead (Position, ErrorClass);
      if (text == NULL)
	 fprintf (Out, "error code: %ld", ErrorCode);
      else
	 fputs (text, Out);
      WriteInfo (InfoClass, Info, ErrorCode);
      fputc ('\n', Out); fflush (Out);
   }
   (* Notify) (Position, ErrorClass, text, InfoClass, Info);
   if (ErrorClass == xxFatal && ! IsStore) (* Errors_Exit) ();
}

void Errors::WriteMessages (FILE * File)
{
   unsigned long i;
   char *	 Info = NULL;
   tError *	 PrevMsg = NULL;

   qsort ((void *) & MessagePtr [1], MessageCount, sizeof (tError),
      (int (*)(const void *, const void *)) IsLess);
   PrevLine = 0;
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
      case xxString	: Info = StringMObj->StGetCStr (Error->Info.vString);
			  break;
      case xxIdent	: Info = (char *) & Error->Info.vIdent	; break;
# if HAVE_WCHAR_T
      case xxWCharacter	: Info = (char *) & Error->Info.vWCharacter; break;
      case xxWString	: Info = (char *) StringMObj->StGetCStr
					(Error->Info.vWString)	; break;
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

void Errors::StoreMessage (rbool IsErrorCode, long ErrorCode, int ErrorClass,
      tPosition Position, int InfoClass, const char * Info)
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
  case xxUSLong		: Error->Info.vUSLong	= * (unsigned long *) Info;
			  break;
  case xxReal		: Error->Info.vReal	= * (float	*) Info; break;
  case xxBoolean	: Error->Info.vBoolean	= * (rbool	*) Info; break;
  case xxCharacter	: Error->Info.vCharacter= * (char	*) Info; break;
  case xxString		: Error->Info.vString	=
				StringMObj->PutString (Info); break;
  case xxIdent		: Error->Info.vIdent	= * (tIdent	*) Info; break;
# if HAVE_WCHAR_T
  case xxWCharacter	: Error->Info.vWCharacter= * (wchar_t	*) Info; break;
  case xxWString	: Error->Info.vWString	=
				StringMObj->PutString ((wchar_t *) Info); break;
  case xxWIdent		: Error->Info.vWIdent	= * (tWIdent	*) Info; break;
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

static int IsLess (tError * i, tError * j)
{
  register int r = Compare (i->Position, j->Position);
  return r != 0 ? r : i->ErrorNumber - j->ErrorNumber;
}

void Errors::StoreMessages (rbool Store)
{
  if (Store) {
    MessageCount = 0;
    PrevLine	 = 0;
  }
  IsStore = Store;
}

void Errors::PrintMessages (rbool Print)
{
   DoPrint = Print;
}

void Errors::MessageChar
   (char * ErrorText, int ErrorClass, tPosition Position, char * Info)
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
void Errors::MessageChar
   (char * ErrorText, int ErrorClass, tPosition Position, wchar_t * Info)
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

Errors::Errors (void)
{
   IsStore	= rfalse;
   DoPrint	= rtrue;
   ReturnCode	= 0;
# ifndef _USRDLL
   Out		= stderr;
# endif
   Notify	= yyNotify;
   Errors_Exit	= yyExit;
   StringMObj	= & gStringM;
   IdentsObj	= & gIdents;
   BeginErrors ();
}

Errors::~Errors (void)
{
   CloseErrors ();
}
