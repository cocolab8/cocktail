# ifndef yyErrors
# define yyErrors

/* $Id: Errors.h,v 1.7 1995/05/09 13:53:42 grosch rel $ */

/* $Log: Errors.h,v $
 */

/* Ich, Doktor Josef Grosch, Informatiker, April 1996 */

# include <stdio.h>
# include "ratc.h"
# include "Position.h"
# include "StringM.h"
# include "Idents.h"
# include "Sets.h"

# if defined _MSC_VER
#  pragma warning (disable:4121)
# endif

						/* error codes		*/
const int xxNoText			= 0;
const int xxTooManyErrors		= 1;
const int xxTclTkError			= 2;
						/* reuse library	*/
const int xxAllocOutOfMemory		= 10;
const int xxStringUndefined		= 11;
const int xxIdentOutOfBounds		= 12;
						/* scanner		*/
const int xxScannerInternalError	= 20;
const int xxScannerOutOfMemory		= 21;
const int xxFileStackUnderflow		= 22;
const int xxCannotOpenInputFile		= 23;
const int xxStartStackUnderflow		= 24;
						/* parser		*/
const int xxSyntaxError			= 30;
const int xxExpectedTokens		= 31;
const int xxRestartPoint		= 32;
const int xxTokenInserted		= 33;
const int xxTokenFound			= 34;
const int xxFoundExpected		= 35;
const int xxInvalidCallOfReParse	= 36;
						/* ast			*/
const int xxTreeOutOfMemory		= 40;
const int xxTreeIOError			= 41;
const int xxQueryTreeEof		= 42;
const int xxDrawTreeyyNode		= 43;
const int xxMakeInvalidParam		= 44;
const int xxConfigureUnknownParam	= 45;
						/* ast.CheckTree	*/
const int xxCheckTreeError		= 50;
const int xxCheckTreeAddrOfParent	= 51;
const int xxCheckTreeTypeOfParent	= 52;
const int xxCheckTreeNameOfChild	= 53;
const int xxCheckTreeValueOfChild	= 54;
const int xxCheckTreeAddrOfChild	= 55;
const int xxCheckTreeTypeOfChild	= 56;
const int xxCheckTreeExpectedType	= 57;
const int xxCheckTreeParentNode		= 58;
const int xxCheckTreeChildNode		= 59;
						/* ag			*/
const int xxCyclicDependencies		= 60;
						/* puma			*/
const int xxRoutineFailed		= 70;

						/* error classes	*/
const int xxFatal			= 1;
const int xxRestriction			= 2;
const int xxError			= 3;
const int xxWarning			= 4;
const int xxRepair			= 5;
const int xxNote			= 6;
const int xxInformation			= 7;
						/* info classes		*/
const int xxNone			= 0;
const int xxInteger			= 1;
const int xxShort			= 2;
const int xxLong			= 3;
const int xxUSLong			= 4;
const int xxReal			= 5;
const int xxBoolean			= 6;
const int xxCharacter			= 7;
const int xxWCharacter			= 8;
const int xxString			= 9;
const int xxWString			= 10;
const int xxIdent			= 11;
const int xxWIdent			= 12;
const int xxSet				= 13;
const int xxPosition			= 14;

typedef struct {
   tPosition	Position	;
   rbool	IsErrorCode	;
   short	ErrorNumber	;
   long		ErrorCode	;
   short	ErrorClass	;
   short	InfoClass	;
   union {
      int	vInteger	;
      short	vShort		;
      long	vLong		;
      unsigned long vUSLong	;
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

class Errors {

public:
		Errors		(void);

		~Errors		(void);

   void (*	Notify)		(tPosition yyPosition, int yyErrorClass,
		      const char * yyErrorText, int yyInfoClass, const char * yyInfo);
			/* Refers to a function to be called for every	*/
			/* (error) message. Default: do nothing.	*/

   void 	setNotify	(void (* yyNotify) (tPosition Position,
	    int ErrorClass, const char * ErrorText, int InfoClass, const char * Info))
				{ Notify = yyNotify; }
			/* Set the function to be called for every	*/
			/* (error) message.				*/

   int		ReturnCode; /* Return code to be returned by program.	*/

   void		setReturnCode  (int yyReturnCode) { ReturnCode = yyReturnCode; }
			/* Set the ReturnCode to be returned by program.*/

   void (*	Errors_Exit)	(void);
			/* Refers to a procedure that specifies		*/
			/* what to do if 'ErrorClass' = Fatal.		*/
			/* Default: terminate program execution.	*/

   void		BeginErrors	(void);
			/* Initialize the 'Errors' module.		*/

   void		CloseErrors	(void);
			/* Finalize the 'Errors' module.		*/

   void		StoreMessages	(rbool yyStore);
			/* Messages are stored if 'Store' = TRUE	*/
			/* for printing with the routine 'WriteMessages'*/
			/* otherwise they are printed immediately.	*/
			/* If 'Store'=TRUE the message store is cleared.*/

   void		PrintMessages	(rbool Print);
			/* Specifies how to handle messages:		*/
			/* If 'Print' = TRUE then messages are printed	*/
			/* or written to some file via 'WriteMessages',	*/
			/* otherwise they are not printed. The function	*/
			/* 'Notify' is called in any case.		*/

   void		ErrorMessage	(long yyErrorCode, int yyErrorClass,
			     tPosition yyPosition);
			/* Report a message represented by an integer	*/
			/* 'ErrorCode' and classified by 'ErrorClass'.	*/

   void		ErrorMessageI	(long yyErrorCode, int yyErrorClass,
			     tPosition yyPosition, int yyInfoClass,
			     const char * yyInfo);
			/* Like the previous routine with additional	*/
			/* information of type 'InfoClass' at the	*/
			/* address 'Info'.				*/

   void		Message		(const char * yyErrorText, int yyErrorClass,
			     tPosition yyPosition);
			/* Report a message represented by a string	*/
			/* 'ErrorText' and classified by 'ErrorClass'.	*/

   void		MessageI	(const char * yyErrorText, int yyErrorClass,
			     tPosition yyPosition, int yyInfoClass,
			     const char * yyInfo);
			/* Like the previous routine with additional	*/
			/* information of type 'InfoClass' at the	*/
			/* address 'Info'.				*/

   void		WriteMessages	(FILE * yyFile);
			/* The stored messages are sorted by their	*/
			/* source position and printed on 'File'.	*/

   const char *	CodeToText	(long yyErrorCode);
			/* Map 'ErrorCode' to a message text.		*/

   int		GetCount   (int yyErrorClass) { return nErrors [yyErrorClass]; }
			/* Return the number of messages of class	*/
			/* 'ErrorClass'.				*/

   void		MessageChar	(char * yyErrorText, int yyErrorClass,
			     tPosition yyPosition, char * yyInfo);

# if HAVE_WCHAR_T
   void		MessageChar	(char * yyErrorText, int yyErrorClass,
			     tPosition yyPosition, wchar_t * yyInfo);
# endif
	/* Should be called similar to: MessageChar
	   ("illegal character", xxError, some.Position, TokenPtr);
	   Is equivalent to the call: MessageI
	   ("illegal character", xxError, some.Position, xxCharacter, TokenPtr);
	   but tries to print the character at TokenPtr [0] either as printable
	   character or as an escape sequence.
	 */

   StringM *	StringMObj;/* String memory object for this Errors object. */

   Idents *	IdentsObj;/* Idents object used by this Errors object.	*/

private:
   tError *	MessagePtr	;
   unsigned long MessageSize	;
   unsigned long MessageCount	;
   rbool	IsStore		;
   rbool	DoPrint		;
   FILE *	Out		;
   unsigned long PrevLine	;
   char		FoundString	[5000];
   int		nErrors		[8];

   void		WriteHead	(tPosition yyPosition, int yyErrorClass);
   void		WriteInfo	(int yyInfoClass, const char * yyInfo,
				long ErrorCode);
   void		WriteMessage	(rbool yyIsErrorCode, long yyErrorCode,
				int yyErrorClass, tPosition yyPosition,
				int yyInfoClass, const char * yyInfo);
   void		StoreMessage	(rbool yyIsErrorCode, long yyErrorCode,
				int yyErrorClass, tPosition yyPosition,
				int yyInfoClass, const char * yyInfo);
};

# endif
