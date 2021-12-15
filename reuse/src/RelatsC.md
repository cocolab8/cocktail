(* $Id: RelatsC.md,v 1.2 1997/05/27 11:57:56 grosch rel $ *)

(*
 * $Log: RelatsC.md,v $
 * Revision 1.2  1997/05/27 11:57:56  grosch
 * truncation of filenames to 8.3 format
 *
 * Revision 1.1  1993/08/20 08:26:15  grosch
 * renamed module RelationsC to RelatsC because of MS-DOS
 *
 * Revision 1.0  1993/06/18  15:46:40  grosch
 * Initial revision
 *
 *)

(* Ich, Doktor Josef Grosch, Informatiker, 16.2.1993 *)

DEFINITION MODULE RelatsC;

FROM IO		IMPORT tFile;
FROM SetsC	IMPORT tSet;

IMPORT Relation;

TYPE
   ArrayOfSet		= Relation.ArrayOfSet;
   ProcOfIntInt		= Relation.ProcOfIntInt;
   ProcOfIntIntToBool	= Relation.ProcOfIntIntToBool;
   tRelation		= Relation.tRelation;

PROCEDURE MakeRelation	(VAR Rel: tRelation; Size1, Size2: INTEGER);
PROCEDURE ReleaseRelation (VAR Rel: tRelation);
PROCEDURE Include	(VAR Rel: tRelation; e1, e2: INTEGER);
PROCEDURE Exclude	(VAR Rel: tRelation; e1, e2: INTEGER);
PROCEDURE IsElement	(e1, e2: INTEGER; Rel: tRelation): BOOLEAN;
PROCEDURE IsRelated	(e1, e2: INTEGER; Rel: tRelation): BOOLEAN;
PROCEDURE IsReflexive1	(e1: INTEGER; Rel: tRelation): BOOLEAN;
PROCEDURE IsSymmetric1	(e1, e2: INTEGER; Rel: tRelation): BOOLEAN;
PROCEDURE IsTransitive1	(e1, e2, e3: INTEGER; Rel: tRelation): BOOLEAN;
PROCEDURE IsReflexive	(Rel: tRelation): BOOLEAN;
PROCEDURE IsSymmetric	(Rel: tRelation): BOOLEAN;
PROCEDURE IsTransitive	(Rel: tRelation): BOOLEAN;
PROCEDURE IsEquivalence	(Rel: tRelation): BOOLEAN;
PROCEDURE HasReflexive	(Rel: tRelation): BOOLEAN;
PROCEDURE IsCyclic	(Rel: tRelation): BOOLEAN;
PROCEDURE GetCyclics	(Rel: tRelation; VAR Set: tSet);
PROCEDURE Closure	(VAR Rel: tRelation);
PROCEDURE AssignEmpty	(VAR Rel: tRelation);
PROCEDURE AssignElmt	(VAR Rel: tRelation; e1, e2: INTEGER);
PROCEDURE Assign	(VAR Rel1: tRelation; Rel2: tRelation);
PROCEDURE Union		(VAR Rel1: tRelation; Rel2: tRelation);
PROCEDURE Difference	(VAR Rel1: tRelation; Rel2: tRelation);
PROCEDURE Intersection	(VAR Rel1: tRelation; Rel2: tRelation);
PROCEDURE SymDiff	(VAR Rel1: tRelation; Rel2: tRelation);
PROCEDURE Complement	(VAR Rel: tRelation);
PROCEDURE IsSubset	(Rel1, Rel2: tRelation): BOOLEAN;
PROCEDURE IsStrictSubset (Rel1, Rel2: tRelation): BOOLEAN;
PROCEDURE IsEqual	(VAR Rel1, Rel2: tRelation): BOOLEAN;
PROCEDURE IsNotEqual	(Rel1, Rel2: tRelation): BOOLEAN;
PROCEDURE IsEmpty	(Rel: tRelation): BOOLEAN;
PROCEDURE Card		(VAR Rel: tRelation): INTEGER;
PROCEDURE Select	(VAR Rel: tRelation; VAR e1, e2: INTEGER);
PROCEDURE Extract	(VAR Rel: tRelation; VAR e1, e2: INTEGER);
PROCEDURE Forall	(Rel: tRelation; Proc: ProcOfIntIntToBool): BOOLEAN;
PROCEDURE Exists	(Rel: tRelation; Proc: ProcOfIntIntToBool): BOOLEAN;
PROCEDURE Exists1	(Rel: tRelation; Proc: ProcOfIntIntToBool): BOOLEAN;
PROCEDURE ForallDo	(Rel: tRelation; Proc: ProcOfIntInt);
PROCEDURE ReadRelation	(f: tFile; VAR Rel: tRelation);
PROCEDURE WriteRelation	(f: tFile;     Rel: tRelation);
PROCEDURE Project1	(Rel: tRelation; e1: INTEGER; VAR Set: tSet);
PROCEDURE Project2	(Rel: tRelation; e1: INTEGER; VAR Set: tSet);

END RelatsC.
