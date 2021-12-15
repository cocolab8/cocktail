-- $Id: Sets.md,v 1.5 1993/08/18 15:06:51 grosch rel $

-- $Log: Sets.md,v $

-- Ich, Doktor Josef Grosch, Informatiker, Sept. 1994

with DynArray, Text_Io; use Text_Io;

package Sets is

package Bool_DA	is new DynArray (Boolean); use Bool_DA;

type tSet is record
      BitsetPtr		: Bool_DA.FlexArray;
      MaxElmt		: Integer;
      Card		: Integer;
      FirstElmt		,
      LastElmt		: Integer;
   end record;

procedure MakeSet	(Set: in out tSet; MaxSize: Integer);
procedure ResizeSet	(Set: in out tSet; MaxSize: Integer);
procedure ReleaseSet	(Set: in out tSet);
procedure Union		(Set1: in out tSet; Set2: tSet);
procedure Difference	(Set1: in out tSet; Set2: tSet);
procedure Intersection	(Set1: in out tSet; Set2: tSet);
procedure SymDiff	(Set1: in out tSet; Set2: tSet);
procedure Complement	(Set: in out tSet);
procedure Include	(Set: in out tSet; Elmt: Integer);
procedure Exclude	(Set: in out tSet; Elmt: Integer);
-- function  Card	(Set: tSet) return Integer;
procedure Card		(Set: in out tSet; Result: out Integer);
function  Size		(Set: tSet) return Integer;
-- function  Minimum	(Set: tSet) return Integer;
procedure Minimum	(Set: in out tSet; Result: out Integer);
-- function  Maximum	(Set: tSet) return Integer;
procedure Maximum	(Set: in out tSet; Result: out Integer);
-- function  rSelect	(Set: tSet) return Integer;
procedure rSelect	(Set: in out tSet; Result: out Integer);
-- function  Extract	(Set: tSet) return Integer;
procedure Extract	(Set: in out tSet; Result: out Integer);
function  IsSubset	(Set1, Set2: tSet) return Boolean;
function  IsStrictSubset(Set1, Set2: tSet) return Boolean;
function  IsEqual	(Set1, Set2: tSet) return Boolean;
function  IsNotEqual	(Set1, Set2: tSet) return Boolean;
function  IsElement	(Elmt: Integer; Set: tSet) return Boolean;
function  IsEmpty	(Set: tSet) return Boolean;
   generic		with function ProcOfCardToBool (Elmt: Integer) return Boolean is <>;
function  Forall	(Set: tSet) return Boolean;
   generic		with function ProcOfCardToBool (Elmt: Integer) return Boolean is <>;
function  Exists	(Set: tSet) return Boolean;
   generic		with function ProcOfCardToBool (Elmt: Integer) return Boolean is <>;
function  Exists1	(Set: tSet) return Boolean;
procedure Assign	(Set1: out tSet; Set2: tSet);
procedure AssignElmt	(Set: out tSet; Elmt: Integer);
procedure AssignEmpty	(Set: in out tSet);
   generic		with procedure ProcOfCard (Elmt: Integer) is <>;
procedure ForallDo	(Set: tSet);
procedure ReadSet	(f: File_Type; Set: out tSet);
procedure WriteSet	(f: File_Type; Set: tSet);

end Sets;
