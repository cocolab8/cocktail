(* $Id: HugeSets.md,v 1.1 2001/01/08 20:30:15 grosch rel $ *)

(*
 * $Log: HugeSets.md,v $
 * Revision 1.1  2001/01/08 20:30:15  grosch
 * cosmetic changes
 *
 * Revision 1.0  2000/09/04 13:10:59  grosch
 * Initial revision
 *
 *)

(* Ich, Doktor Josef Grosch, Informatiker, August 2000 *)

(* Sets of positive integers from 0 to 2**32.
   Elements up to MaxBitset are stored as bit vectors,
   elements above MaxBitset are stored as ordered list of ranges.
*)

DEFINITION MODULE HugeSets;

FROM IO IMPORT tFile;

IMPORT Sets;

CONST
   MaxBitset	= 255;

TYPE
   ProcOfCard		= PROCEDURE (CARDINAL);
   ProcOfCardToBool	= PROCEDURE (CARDINAL): BOOLEAN;

   tRange	= RECORD lwb, upb: LONGCARD; END;
   tSet		= RECORD
		     bitset	: Sets.tSet;
		     rangePtr	: POINTER TO ARRAY [1 .. 1000000] OF tRange;
		     rangeSize	: LONGINT;
		     rangeCount	: LONGINT;
		  END;
   tHugeSet	= tSet;

PROCEDURE MakeSet	(VAR Set: tSet);
PROCEDURE ReleaseSet	(VAR Set: tSet);
PROCEDURE Union		(VAR Set1: tSet; Set2: tSet);
PROCEDURE Difference	(VAR Set1: tSet; Set2: tSet);
PROCEDURE Intersection	(VAR Set1: tSet; Set2: tSet);
(* PROCEDURE SymDiff	(VAR Set1: tSet; Set2: tSet); *)
PROCEDURE Complement	(VAR Set: tSet);
PROCEDURE Include	(VAR Set: tSet; Elmt: LONGCARD);
PROCEDURE IncludeRange	(VAR Set: tSet; Lwb, Upb: LONGCARD);
PROCEDURE Exclude	(VAR Set: tSet; Elmt: LONGCARD);
PROCEDURE ExcludeRange	(VAR Set: tSet; Lwb, Upb: LONGCARD);
PROCEDURE Card		(VAR Set: tSet): LONGCARD;
PROCEDURE Minimum	(VAR Set: tSet): LONGCARD;
PROCEDURE Maximum	(VAR Set: tSet): LONGCARD;
PROCEDURE Select	(VAR Set: tSet): LONGCARD;
PROCEDURE Extract	(VAR Set: tSet; VAR Lwb, Upb: LONGCARD);
PROCEDURE IsSubset	(Set1, Set2: tSet): BOOLEAN;
(* PROCEDURE IsStrictSubset (Set1, Set2: tSet): BOOLEAN; *)
PROCEDURE IsEqual	(VAR Set1, Set2: tSet): BOOLEAN;
PROCEDURE IsNotEqual	(Set1, Set2: tSet): BOOLEAN;
PROCEDURE IsElement	(Elmt: LONGCARD; VAR Set: tSet): BOOLEAN;
PROCEDURE IsEmpty	(Set: tSet): BOOLEAN;
(*
PROCEDURE Forall	(Set: tSet; Proc: ProcOfCardToBool): BOOLEAN;
PROCEDURE Exists	(Set: tSet; Proc: ProcOfCardToBool): BOOLEAN;
PROCEDURE Exists1	(Set: tSet; Proc: ProcOfCardToBool): BOOLEAN;
*)
PROCEDURE Assign	(VAR Set1: tSet; Set2: tSet);
PROCEDURE AssignElmt	(VAR Set: tSet; Elmt: LONGCARD);
PROCEDURE AssignEmpty	(VAR Set: tSet);
(* PROCEDURE ForallDo	(Set: tSet; Proc: ProcOfCard); *)
(* PROCEDURE ReadSet	(f: tFile; VAR Set: tSet); *)
PROCEDURE WriteSet	(f: tFile;     Set: tSet);

END HugeSets.
