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

# ifndef yyErrors
# define yyErrors

/* $Id: Errors.h,v 1.19 2007/10/12 09:09:10 grosch rel $ */

/*
 * $Log: Errors.h,v $
 * Revision 1.19  2007/10/12 09:09:10  grosch
 * added functions PrintMessages and MessageWChar
 *
 * Revision 1.18  2006/07/18 08:44:58  grosch
 * added mechanism for notification about (error) messages
 * the return code to be returned by a program (parser) can be set
 *
 * Revision 1.17  2003/01/24 10:48:17  grosch
 * fixed bug in function BeginErrors - added function CloseErrors
 *
 * Revision 1.16  2002/09/26 11:52:04  grosch
 * added error ConfigureUnknownParam
 *
 * Revision 1.15  2002/05/15 13:45:17  grosch
 * added message text: cannot write file yyNode
 *
 * Revision 1.14  2000/09/04 13:31:10  grosch
 * added support for wide character strings
 * moved message texts to Errors.c
 *
 * Revision 1.13  2000/08/18 16:05:06  grosch
 * added const to char *
 *
 * Revision 1.12  2000/04/10 15:38:40  grosch
 * introduced ifdef HAVE_ARGS
 * renamed With into Error
 *
 * Revision 1.11  1998/04/04 10:18:43  grosch
 * cosmetic changes
 *
 * Revision 1.10  1997/11/30 22:40:23  grosch
 * changed type of ErrorCode from int to long
 * added missing initializations
 * suppress call of WritePosition if NoPosition
 * added functions BeginErrors and GetCount
 *
 * Revision 1.9  1997/05/27 13:25:04  grosch
 * truncation of filenames to 8.3 format
 *
 * Revision 1.8  1997/04/08 13:38:16  grosch
 * added prefix yy to all argument names
 *
 * Revision 1.7  1995/05/09  13:53:42  grosch
 * added void to argument list of functions without arguments
 *
 * Revision 1.6  1995/03/20  15:37:30  grosch
 * truncate lines to at most 80 characters
 *
 * Revision 1.5  1995/02/23  20:11:10  grosch
 * renamed Positions to Position, StringMem to StringM, Relations to Relation
 * output lines with at most 132 characters
 *
 * Revision 1.4  1994/12/04  19:29:55  grosch
 * added ANSI-C prototypes
 *
 * Revision 1.3  1994/11/07  12:39:52  grosch
 * added cpp variables BRIEF, FIRST, and TRUNCATE
 *
 * Revision 1.2  1994/01/29  22:13:50  grosch
 * renamed bool to rbool
 *
 * Revision 1.1  1992/08/13  12:14:11  grosch
 * deleted redefinition of bool
 *
 * Revision 1.0  1992/08/07  14:31:41  grosch
 * Initial revision
 *
 */

/* Ich, Doktor Josef Grosch, Informatiker, Juli 1992/August 2000 */

# include <stdio.h>
# include "ratc.h"
# include "Position.h"

						/* error codes		*/
# define xxNoText			0
# define xxTooManyErrors		1
# define xxTclTkError			2
						/* reuse library	*/
# define xxAllocOutOfMemory		10
# define xxStringUndefined		11
# define xxIdentOutOfBounds		12
						/* scanner		*/
# define xxScannerInternalError		20
# define xxScannerOutOfMemory		21
# define xxFileStackUnderflow		22
# define xxCannotOpenInputFile		23
# define xxStartStackUnderflow		24
						/* parser		*/
# define xxSyntaxError			30
# define xxExpectedTokens		31
# define xxRestartPoint			32
# define xxTokenInserted		33
# define xxTokenFound			34
# define xxFoundExpected		35
# define xxInvalidCallOfReParse		36
						/* ast			*/
# define xxTreeOutOfMemory		40
# define xxTreeIOError			41
# define xxQueryTreeEof			42
# define xxDrawTreeyyNode		43
# define xxConfigureUnknownParam	44
						/* ast.CheckTree	*/
# define xxCheckTreeError		50
# define xxCheckTreeAddrOfParent	51
# define xxCheckTreeTypeOfParent	52
# define xxCheckTreeNameOfChild		53
# define xxCheckTreeValueOfChild	54
# define xxCheckTreeAddrOfChild		55
# define xxCheckTreeTypeOfChild		56
# define xxCheckTreeExpectedType	57
# define xxCheckTreeParentNode		58
# define xxCheckTreeChildNode		59
						/* ag			*/
# define xxCyclicDependencies		60
						/* puma			*/
# define xxRoutineFailed		70

						/* error classes	*/
# define xxFatal			1
# define xxRestriction			2
# define xxError			3
# define xxWarning			4
# define xxRepair			5
# define xxNote				6
# define xxInformation			7
						/* info classes		*/
# define xxNone				0
# define xxInteger			1
# define xxShort			2
# define xxLong				3
# define xxUSLong			4
# define xxReal				5
# define xxBoolean			6
# define xxCharacter			7
# define xxWCharacter			8
# define xxString			9
# define xxWString			10
# define xxIdent			11
# define xxWIdent			12
# define xxSet				13
# define xxPosition			14

extern void (* Errors_Notify) ARGS ((tPosition Position, int ErrorClass,
			char * ErrorText, int InfoClass, const char * Info));
			/* Refers to a function to be called for every	*/
			/* (error) message. Default: do nothing.	*/

extern void setErrors_Notify ARGS ((void (* errors_Notify) (tPosition Position,
				int ErrorClass, char * ErrorText,
				int InfoClass, const char * Info)));
			/* Set the function to be called for every	*/
			/* (error) message.				*/

extern int  ReturnCode;	/* Return code to be returned by program.	*/

extern void setReturnCode ARGS ((int returnCode));
			/* Set the ReturnCode to be returned by program.*/

extern void (* Errors_Exit) ARGS ((void));
			/* Refers to a procedure that specifies		*/
			/* what to do if 'ErrorClass' = Fatal.		*/
			/* Default: terminate program execution.	*/

extern void BeginErrors	  ARGS ((void));
			/* Initialize the 'Errors' module.		*/

extern void CloseErrors	  ARGS ((void));
			/* Finalize the 'Errors' module.		*/

extern void StoreMessages ARGS ((rbool yyStore));
			/* Messages are stored if 'Store' = TRUE	*/
			/* for printing with the routine 'WriteMessages'*/
			/* otherwise they are handled immediately.	*/
			/* If 'Store'=TRUE the message store is cleared.*/

extern void PrintMessages ARGS ((rbool yyPrint));
			/* Specifies how to handle messages:		*/
			/* If 'Print' = TRUE then messages are printed	*/
			/* or written to some file via 'WriteMessages',	*/
			/* otherwise they are not printed. The function	*/
			/* 'Errors_Notify' is called in	any case.	*/

extern void ErrorMessage  ARGS ((long yyErrorCode, int yyErrorClass,
				tPosition yyPosition));
			/* Report a message represented by an integer	*/
			/* 'ErrorCode' and classified by 'ErrorClass'.	*/

extern void ErrorMessageI ARGS ((long yyErrorCode, int yyErrorClass,
				tPosition yyPosition, int yyInfoClass,
				const char * yyInfo));
			/* Like the previous routine with additional	*/
			/* information of type 'InfoClass' at the	*/
			/* address 'Info'.				*/

extern void Message	  ARGS ((const char * yyErrorText, int yyErrorClass,
				tPosition yyPosition));
			/* Report a message represented by a string	*/
			/* 'ErrorText' and classified by 'ErrorClass'.	*/

extern void MessageI	  ARGS ((const char * yyErrorText, int yyErrorClass,
				tPosition yyPosition, int yyInfoClass,
				const char * yyInfo));
			/* Like the previous routine with additional	*/
			/* information of type 'InfoClass' at the	*/
			/* address 'Info'.				*/

extern void WriteMessages ARGS ((FILE * yyFile));
			/* The stored messages are sorted by their	*/
			/* source position and printed on 'File'.	*/

extern char * CodeToText  ARGS ((long yyErrorCode));
			/* Map 'ErrorCode' to a message text.		*/

extern int  GetCount	  ARGS ((int yyErrorClass));
			/* Return the number of messages of class	*/
			/* 'ErrorClass'.				*/

extern void MessageChar	  ARGS ((char * ErrorText, int ErrorClass,
				tPosition Position, char * Info));

# if HAVE_WCHAR_T
extern void MessageWChar  ARGS ((char * ErrorText, int ErrorClass,
				tPosition Position, wchar_t * Info));
# endif
	/* Should be called similar to: MessageChar
	   ("illegal character", xxError, some.Position, TokenPtr);
	   Is equivalent to the call: MessageI
	   ("illegal character", xxError, some.Position, xxCharacter, TokenPtr);
	   but tries to print the character at TokenPtr [0] either as printable
	   character or as an escape sequence.
	 */

# endif
