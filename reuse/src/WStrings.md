(* $Id: WStrings.md,v 1.1 2001/01/08 20:31:13 grosch rel $ *)

(*
 * $Log: WStrings.md,v $
 * Revision 1.1  2001/01/08 20:31:13  grosch
 * cosmetic changes
 *
 * Revision 1.0  2000/09/04 13:10:59  grosch
 * Initial revision
 *
 *)

(* Ich, Doktor Josef Grosch, Informatiker, August 2000 *)

DEFINITION MODULE WStrings;

FROM IO IMPORT tFile;

CONST	cMaxStrLength	= 255;

TYPE	WCHAR		= SHORTCARD;

TYPE	tStringIndex	= SHORTCARD [0 .. cMaxStrLength];

TYPE	tString		= RECORD
			     Chars  : ARRAY tStringIndex OF WCHAR;
			     Length : tStringIndex;
			  END;

TYPE	tWString	= tString;

PROCEDURE Assign	(VAR s1, s2: tWString);

			(* Assigns the string 's2' to the string 's1'.	*)

PROCEDURE AssignEmpty	(VAR s: tWString);

			(* Returns an empty string 's'.			*)

PROCEDURE Concatenate	(VAR s1, s2: tWString);

			(* Returns in parameter 's1' the concatenation	*)
			(* of the strings 's1' and 's2'.		*)

PROCEDURE Append	(VAR s: tWString; c: WCHAR);

			(* The character 'c' is concatenated at the end	*)
			(* of the string 's'.				*)

PROCEDURE Length	(VAR s: tWString)			: CARDINAL;

			(* Returns the length of the string 's'.	*)

PROCEDURE IsEqual	(VAR s1, s2: tWString)			: BOOLEAN;

			(* Returns TRUE if the strings 's1' and 's2'	*)
			(* are equal.					*)

PROCEDURE IsInOrder	(VAR s1, s2: tWString)			: BOOLEAN;

			(* Returns TRUE if the string 's1' is lexico-	*)
			(* graphically less or equal to the string 's2'.*)

PROCEDURE Exchange	(VAR s1, s2: tWString);

			(* Exchanges the strings 's1' and 's2'.		*)

PROCEDURE SubString	(VAR s1: tWString; from, to: tStringIndex; VAR s2: tWString);

			(* Returns in 's2' the substring from 's1' com-	*)
			(* prising the characters between 'from' and 'to'. *)
			(* PRE	1 <= from <= Length (s1)		*)
			(* PRE	1 <=  to  <= Length (s1)		*)

PROCEDURE Char		(VAR s: tWString; i: tStringIndex)	: WCHAR;

			(* Returns the 'i'-th character of the string 's'. *)
			(* The characters are counted from 1 to Length (s). *)
			(* PRE	1 <= index <= Length (s)		*)

PROCEDURE ArrayToString	(a: ARRAY OF WCHAR; VAR s: tWString);

			(* An array 'a' of characters representing a	*)
			(* MODULA string is converted to a string 's'	*)
			(* of type tWString.				*)

PROCEDURE StringToArray	(VAR s: tWString; VAR a: ARRAY OF WCHAR);

			(* A string 's' of type tWString is converted to *)
			(* an array 'a' of characters representing a	*)
			(* MODULA string.				*)

PROCEDURE StringToInt	(VAR s: tWString)			: INTEGER;

			(* Returns the integer value represented by 's'. *)

PROCEDURE StringToNumber(VAR s: tWString; Base: CARDINAL)	: CARDINAL;

			(* Returns the integer value represented by 's'	*)
			(* to the base 'Base'.				*)

PROCEDURE StringToReal	(VAR s: tWString)			: REAL;

			(* Returns the real value represented by 's'.	*)

PROCEDURE IntToString	(n: INTEGER; VAR s: tWString);

			(* Returns in 's' the string representation of 'n'. *)

PROCEDURE ReadS		(f: tFile; VAR s: tWString; FieldWidth: tStringIndex);

			(* Read 'FieldWidth' characters as string 's'	*)
			(* from file 'f'.				*)

PROCEDURE ReadL		(f: tFile; VAR s: tWString);

			(* Read rest of line as string 's' from file	*)
			(* 'f'.	Skip to next line.			*)

PROCEDURE WriteS	(f: tFile; VAR s: tWString);

			(* Write string 's' to file 'f'.		*)

PROCEDURE WriteL	(f: tFile; VAR s: tWString);

			(* Write string 's' as complete line.		*)

END WStrings.
