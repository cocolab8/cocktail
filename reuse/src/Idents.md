(* $Id: Idents.md,v 1.10 2001/01/08 20:30:23 grosch rel $ *)

(*
 * $Log: Idents.md,v $
 * Revision 1.10  2001/01/08 20:30:23  grosch
 * cosmetic changes
 *
 * Revision 1.9  2000/09/04 13:04:47  grosch
 * added support for wide character strings
 *
 * Revision 1.8  2000/04/10 15:22:41  grosch
 * added function GetLength
 *
 * Revision 1.7  1997/05/27 11:57:56  grosch
 * truncation of filenames to 8.3 format
 *
 * Revision 1.6  1992/08/07 14:45:41  grosch
 * added comments
 *
 * Revision 1.5  1991/11/21  14:33:17  grosch
 * new version of RCS on SPARC
 *
 * Revision 1.4  89/06/06  10:07:56  grosch
 * changed tIdent to SHORTCARD
 *
 * Revision 1.3  89/06/01  18:20:22  grosch
 * added predefined identifier NoIdent
 *
 * Revision 1.2  89/01/25  12:05:29  grosch
 * added function MaxIdent
 *
 * Revision 1.1  89/01/21  23:03:08  grosch
 * added file parameter to procedure WriteIdent
 *
 * Revision 1.0  88/10/04  11:47:00  grosch
 * Initial revision
 *
 *)

(* Ich, Doktor Josef Grosch, Informatiker, Sept. 1987 *)

DEFINITION MODULE Idents;

FROM IO		IMPORT tFile	;
FROM Strings	IMPORT tString	;
FROM WStrings	IMPORT tWString	;
FROM StringM	IMPORT tStringRef, tWStringRef;

(* Identifier table: maps strings unambiguously to integers		*)
(*		     supports single byte and multi byte strings	*)

(* Support for single byte strings: CHAR				*)

TYPE	  tIdent	= SHORTCARD;

CONST	  NoIdent	= 1;
			(* A default identifer (empty string).		*)

PROCEDURE MakeIdent	(VAR s: tString)		: tIdent;
			(* The string 's' is mapped to a unique number	*)
			(* (an integer) which is returned.		*)

PROCEDURE GetString	(i: tIdent; VAR s: tString);
			(* Returns the string 's' whose number is 'i'.	*)

PROCEDURE GetStringRef	(i: tIdent)			: tStringRef;
			(* Returns a reference to the string whose	*)
			(* number is 'i'.				*)

PROCEDURE GetLength	(i: tIdent)			: INTEGER;
			(* Returns the length of the string whose	*)
			(* number is 'i'.				*)

PROCEDURE MaxIdent	()				: tIdent;
			(* Returns the current maximal value of the	*)
			(* type 'tIdent'.				*)

PROCEDURE WriteIdent	(f: tFile; i: tIdent);
			(* The string encoded by the number 'i' is	*)
			(* printed on file 'f'.				*)

(* Support for double byte strings: WCHAR				*)

TYPE	  tWIdent	= SHORTCARD;

CONST	  NoWIdent	= 1;
			(* A default identifer (empty string).		*)

PROCEDURE MakeWIdent	(VAR s: tWString)		: tWIdent;
			(* The string 's' is mapped to a unique number	*)
			(* (an integer) which is returned.		*)

PROCEDURE GetWString	(i: tWIdent; VAR s: tWString);
			(* Returns the string 's' whose number is 'i'.	*)

PROCEDURE GetWStringRef	(i: tWIdent)			: tWStringRef;
			(* Returns a reference to the string whose	*)
			(* number is 'i'.				*)

PROCEDURE WriteWIdent	(f: tFile; i: tWIdent);
			(* The string encoded by the number 'i' is	*)
			(* printed on file 'f'.				*)

PROCEDURE WriteIdents	;
			(* The contents of the identifier table is	*)
			(* printed on the terminal.			*)

PROCEDURE InitIdents	;
			(* The identifier table	is initialized.		*)

PROCEDURE BeginIdents	;
			(* The identifier table	is initialized.		*)

PROCEDURE CloseIdents	;
			(* The identifier table	is finalized.		*)

PROCEDURE WriteHashTable;

END Idents.
