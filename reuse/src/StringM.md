(* $Id: StringM.md,v 1.5 2000/09/04 13:06:11 grosch rel $ *)

(*
 * $Log: StringM.md,v $
 * Revision 1.5  2000/09/04 13:06:11  grosch
 * added support for wide character strings
 *
 * Revision 1.4  1997/05/27 11:57:56  grosch
 * truncation of filenames to 8.3 format
 *
 * Revision 1.3  1992/08/07 14:45:41  grosch
 * added comments
 *
 * Revision 1.2  1991/11/21  14:33:17  grosch
 * new version of RCS on SPARC
 *
 * Revision 1.1  89/01/21  23:02:41  grosch
 * added file parameter to procedure WriteString
 *
 * Revision 1.0  88/10/04  11:47:17  grosch
 * Initial revision
 *
 *)

(* Ich, Doktor Josef Grosch, Informatiker, Sept. 1987 *)

DEFINITION MODULE StringM;

FROM IO		IMPORT tFile;
FROM Strings	IMPORT tString;

IMPORT WStrings;

(* String memory: stores strings of variable length			*)
(*		  supports single byte and double byte strings		*)

(* Support for single byte strings:					*)

CONST NoString		= 0;
			(* A default string (empty string).		*)

TYPE tStringRef		= LONGINT;

PROCEDURE PutString	(VAR s: tString)			: tStringRef;
			(* Stores string 's' in the string memory and	*)
			(* returns a reference to the stored string.	*)

PROCEDURE GetString	(r: tStringRef;			   VAR s: tString);
			(* Returns the string 's' from the string	*)
			(* memory which is referenced by 'r'.		*)

PROCEDURE Length	(r: tStringRef)				: CARDINAL;
			(* Returns the length of the string 's'		*)
			(* which is referenced by 'r'.			*)

PROCEDURE IsEqual	(r: tStringRef; VAR s: tString)		: BOOLEAN;
			(* Compares the string referenced by 'r' and	*)
			(* the string 's'.				*)
			(* Returns TRUE if both are equal.		*)

PROCEDURE WriteString	(f: tFile; r: tStringRef);
			(* The string referenced by 'r' is printed on	*)
			(* file 'f'.					*)

(* Support for double byte strings:					*)

TYPE tWStringRef	= LONGINT;

PROCEDURE PutWString	(VAR s: WStrings.tString): tWStringRef;
			(* Stores string 's' in the string memory and	*)
			(* returns a reference to the stored string.	*)

PROCEDURE GetWString	(r: tWStringRef; VAR s: WStrings.tString);
			(* Returns the string 's' from the string	*)
			(* memory which is referenced by 'r'.		*)

PROCEDURE WIsEqual	(r: tWStringRef; VAR s: WStrings.tString): BOOLEAN;
			(* Compares the string referenced by 'r' and	*)
			(* the string 's'.				*)
			(* Returns TRUE if both are equal.		*)

PROCEDURE WriteWString	(f: tFile; r: tWStringRef);
			(* The string referenced by 'r' is printed on	*)
			(* file 'f'.					*)

PROCEDURE WriteStringMemory;
			(* The contents of the string memory is printed	*)
			(* on the terminal.				*)

PROCEDURE InitStringMemory;
			(* The string memory is initialized.		*)

PROCEDURE BeginStringMemory;
			(* The string memory is initialized.		*)

PROCEDURE CloseStringMemory;
			(* The string memory is finalized.		*)

END StringM.
