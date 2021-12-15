(* $Id: General.md,v 1.8 2000/09/04 13:02:20 grosch rel $ *)

(*
 * $Log: General.md,v $
 * Revision 1.8  2000/09/04 13:02:20  grosch
 * added functions MinCard and MaxCard
 *
 * Revision 1.7  1997/05/27 11:57:56  grosch
 * truncation of filenames to 8.3 format
 *
 * Revision 1.6  1994/12/29 14:59:58  grosch
 * added function Log10
 *
 * Revision 1.5  1994/06/13  09:41:43  grosch
 * fix alignment for DEC Alpha
 *
 * Revision 1.4  1993/08/18  15:06:51  grosch
 * rename System and Memory to rSystem and rMemory
 *
 * Revision 1.3  1992/01/30  13:23:29  grosch
 * redesign of interface to operating system
 *
 * Revision 1.2  1991/11/21  14:33:17  grosch
 * new version of RCS on SPARC
 *
 * Revision 1.1  90/03/02  17:36:05  grosch
 * automized handling of machine independent alignment
 * 
 * Revision 1.0  88/10/04  11:46:53  grosch
 * Initial revision
 * 
 *)

(* Ich, Doktor Josef Grosch, Informatiker, Sept. 1987 *)

(* General Subroutines: minimum, maximum, binary logarithm, and power of 2 *)

DEFINITION MODULE General;

FROM SYSTEM	IMPORT TSIZE;

TYPE	  ForAlign	= RECORD char: CHAR; longreal: LONGREAL; END;

CONST	  MaxAlign	= TSIZE (ForAlign) - TSIZE (LONGREAL);

VAR	  AlignMask	: BITSET;

PROCEDURE Min		(a, b: INTEGER)			: INTEGER;
			(* Returns the minimum of 'a' and 'b'.		*)

PROCEDURE Max		(a, b: INTEGER)			: INTEGER;
			(* Returns the maximum of 'a' and 'b'.		*)

PROCEDURE MinCard	(a, b: LONGCARD)		: LONGCARD;
			(* Returns the minimum of 'a' and 'b'.		*)

PROCEDURE MaxCard	(a, b: LONGCARD)		: LONGCARD;
			(* Returns the maximum of 'a' and 'b'.		*)

PROCEDURE Log2		(x: LONGCARD)			: CARDINAL;
			(* Returns the logarithm to the base 2 of 'x'.	*)

PROCEDURE Exp2		(x: CARDINAL)			: LONGCARD;
			(* Returns 2 to the power of 'x'.		*)

PROCEDURE AntiLog	(x: LONGINT)			: CARDINAL;
			(* Returns the number of the lowest bit set in 'x'. *)

PROCEDURE Log10		(x: LONGINT)			: CARDINAL;
			(* Returns the logarithm to the base 10 of 'x'.	*)

PROCEDURE Exp10		(x: INTEGER)			: REAL;
			(* Returns 10 to the power of 'x'.		*)

END General.
