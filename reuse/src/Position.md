(* $Id: Position.md,v 1.4 2001/12/17 11:15:34 grosch rel $ *)

(*
 * $Log: Position.md,v $
 * Revision 1.4  2001/12/17 11:15:34  grosch
 * added member File to type tPosition
 *
 * Revision 1.3  1997/05/27 11:57:56  grosch
 * truncation of filenames to 8.3 format
 *
 * Revision 1.2  1994/01/29 22:25:57  grosch
 * corrected comment leader
 *
 * Revision 1.1  1993/08/18  15:06:51  grosch
 * rename System and Memory to rSystem and rMemory
 *
 * Revision 1.0  1992/08/07  14:41:59  grosch
 * Initial revision
 *
 *)

(* Ich, Doktor Josef Grosch, Informatiker, Juli 1992 *)

DEFINITION MODULE Position;

FROM IO		IMPORT tFile;
FROM Idents	IMPORT tIdent;

TYPE	  tPosition	= RECORD Line, Column: SHORTCARD; File: tIdent; END;

VAR	  NoPosition	: tPosition;
			(* A default position (0, 0).			*)

PROCEDURE Compare	(Position1, Position2: tPosition): INTEGER;
			(* Returns -1 if Position1 < Position2.		*)
			(* Returns  0 if Position1 = Position2.		*)
			(* Returns  1 if Position1 > Position2.		*)

PROCEDURE WritePosition	(File: tFile; Position: tPosition);
			(* The 'Position' is printed on the 'File'.	*)

PROCEDURE ReadPosition	(File: tFile; VAR Position: tPosition);
			(* The 'Position' is read from the 'File'.	*)

END Position.
