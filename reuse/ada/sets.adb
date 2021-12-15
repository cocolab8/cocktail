-- $Id: Sets.mi,v 1.8 1994/07/14 10:22:29 grosch rel $

-- $Log: Sets.mi,v $

-- Ich, Doktor Josef Grosch, Informatiker, Sept. 1994

with DynArray, General, Text_Io; use General, Text_Io;

package body Sets is

package Int_Io	is new Integer_IO (Integer); use Int_Io;

NoCard		: constant Integer := -1;

procedure MakeSet	(Set: in out tSet; MaxSize: Integer) is
   begin
      MakeArray (Set.BitsetPtr, MaxSize + 1);
      Set.MaxElmt := MaxSize;
      AssignEmpty (Set);
   end MakeSet;
      
procedure ResizeSet	(Set: in out tSet; MaxSize: Integer) is
      NewBitsetPtr	: Bool_DA.FlexArray;
      j			: Integer := Min (MaxSize, Set.MaxElmt);
   begin
      MakeArray (NewBitsetPtr, MaxSize + 1);
      NewBitsetPtr (0 .. j) := Set.BitsetPtr (0 .. j);
      if j < MaxSize then
	 NewBitsetPtr (j + 1 .. MaxSize) := (j + 1 .. MaxSize => False);
      end if;
      ReleaseArray (Set.BitsetPtr, Set.MaxElmt);
      Set.MaxElmt := MaxSize;
      Set.BitsetPtr := NewBitsetPtr;
   end ResizeSet;

procedure ReleaseSet	(Set: in out tSet) is
   begin
      ReleaseArray (Set.BitsetPtr, Set.MaxElmt + 1);
   end ReleaseSet;

procedure Union		(Set1: in out tSet; Set2: tSet) is
   begin
      Set1.BitsetPtr.all := Set1.BitsetPtr.all or Set2.BitsetPtr.all;
      Set1.Card      := NoCard;
      Set1.FirstElmt := Min (Set1.FirstElmt, Set2.FirstElmt);
      Set1.LastElmt  := Max (Set1.LastElmt, Set2.LastElmt);
   end Union;

procedure Difference	(Set1: in out tSet; Set2: tSet) is
   begin
      Set1.BitsetPtr.all := (Set1.BitsetPtr.all xor Set2.BitsetPtr.all) and Set1.BitsetPtr.all;
      Set1.Card      := NoCard;
   end Difference;

procedure Intersection	(Set1: in out tSet; Set2: tSet) is
   begin
      Set1.BitsetPtr.all := Set1.BitsetPtr.all and Set2.BitsetPtr.all;
      Set1.Card      := NoCard;
      Set1.FirstElmt := Max (Set1.FirstElmt, Set2.FirstElmt);
      Set1.LastElmt  := Min (Set1.LastElmt, Set2.LastElmt);
   end Intersection;

procedure SymDiff	(Set1: in out tSet; Set2: tSet) is
   begin
      Set1.BitsetPtr.all := Set1.BitsetPtr.all xor Set2.BitsetPtr.all;
      Set1.Card      := NoCard;
      Set1.FirstElmt := Min (Set1.FirstElmt, Set2.FirstElmt);
      Set1.LastElmt  := Max (Set1.LastElmt, Set2.LastElmt);
   end SymDiff;

procedure Complement	(Set: in out tSet) is
   begin
      Set.BitsetPtr.all := not Set.BitsetPtr.all;
      if Set.Card /= NoCard then
	 Set.Card   := Set.MaxElmt + 1 - Set.Card;
      end if;
      Set.FirstElmt := 0;
      Set.LastElmt  := Set.MaxElmt;
   end Complement;

procedure Include	(Set: in out tSet; Elmt: Integer) is
   begin
      Set.BitsetPtr (Elmt) := True;
      Set.Card      := NoCard;
   -- Set.FirstElmt := Min (Set.FirstElmt, Elmt);
   -- Set.LastElmt  := Max (Set.LastElmt, Elmt);
      if Set.FirstElmt > Elmt then Set.FirstElmt := Elmt; end if;
      if Set.LastElmt  < Elmt then Set.LastElmt  := Elmt; end if;
   end Include;

procedure Exclude	(Set: in out tSet; Elmt: Integer) is
   begin
      Set.BitsetPtr (Elmt) := False;
      Set.Card      := NoCard;
      if (Elmt = Set.FirstElmt) and (Elmt < Set.MaxElmt) then
	 Set.FirstElmt := Set.FirstElmt + 1;
      end if;
      if (Elmt = Set.LastElmt) and (Elmt > 0) then
	 Set.LastElmt := Set.LastElmt - 1;
      end if;
   end Exclude;

procedure Card		(Set: in out tSet; Result: out Integer) is
   begin
      if Set.Card /= NoCard then Result := Set.Card; return; end if;
      Result := 0;
      for i in Set.FirstElmt .. Set.LastElmt loop
	 if IsElement (i, Set) then Result := Result + 1; end if;
      end loop;
      Set.Card := Result;
   end Card;
    
function  Size		(Set: tSet) return Integer is
   begin
      return Set.MaxElmt;
   end Size;

procedure Minimum	(Set: in out tSet; Result: out Integer) is
   begin
      Result := Set.FirstElmt;
      while Result <= Set.LastElmt loop
	 if IsElement (Result, Set) then
	    Set.FirstElmt := Result;
	    return;
	 end if;
	 Result := Result + 1;
      end loop;
      Result := 0;
   end Minimum;

procedure Maximum	(Set: in out tSet; Result: out Integer) is
   begin
      Result := Set.LastElmt;
      while Result >= Set.FirstElmt loop
	 if IsElement (Result, Set) then
	    Set.LastElmt := Result;
	    return;
	 end if;
	 Result := Result - 1;
      end loop;
      Result := 0;
   end Maximum;

procedure rSelect	(Set: in out tSet; Result: out Integer) is
   begin
      Minimum (Set, Result);
   end rSelect;
    
procedure Extract	(Set: in out tSet; Result: out Integer) is
   begin
      Minimum (Set, Result);
      Exclude (Set, Result);
   end Extract;

function  IsSubset	(Set1, Set2: tSet) return Boolean is
   begin
      return (Set1.BitsetPtr.all and Set2.BitsetPtr.all) = Set1.BitsetPtr.all;
   end IsSubset;

function  IsStrictSubset(Set1, Set2: tSet) return Boolean is
   begin
      return IsSubset (Set1, Set2) and IsNotEqual (Set1, Set2);
   end IsStrictSubset;
    
function  IsEqual	(Set1, Set2: tSet) return Boolean is
   begin
      return Set1.BitsetPtr.all = Set2.BitsetPtr.all;
   end IsEqual;
    
function  IsNotEqual	(Set1, Set2: tSet) return Boolean is
   begin
      return not IsEqual (Set1, Set2);
   end IsNotEqual;

function  IsElement	(Elmt: Integer; Set: tSet) return Boolean is
   begin
      return Set.BitsetPtr (Elmt);
   end IsElement;

function  IsEmpty	(Set: tSet) return Boolean is
   begin
      return Set.BitsetPtr.all = (0 .. Set.MaxElmt => False);
   end IsEmpty;
    
function  Forall	(Set: tSet) return Boolean is
   begin
      for i in Set.FirstElmt .. Set.LastElmt loop
	 if IsElement (i, Set) and not ProcOfCardToBool (i) then return False; end if;
      end loop;
      return True;
   end Forall;
    
function  Exists	(Set: tSet) return Boolean is
   begin
      for i in Set.FirstElmt .. Set.LastElmt loop
	 if IsElement (i, Set) and ProcOfCardToBool (i) then return True; end if;
      end loop;
      return False;
   end Exists;
    
function  Exists1	(Set: tSet) return Boolean is
      n : Integer := 0;
   begin
      for i in Set.FirstElmt .. Set.LastElmt loop
	 if IsElement (i, Set) and ProcOfCardToBool (i) then n := n + 1; end if;
      end loop;
      return n = 1;
   end Exists1;

procedure Assign	(Set1: out tSet; Set2: tSet) is
   begin
      Set1.BitsetPtr.all := Set2.BitsetPtr.all;
      Set1.Card      := Set2.Card;
      Set1.FirstElmt := Set2.FirstElmt;
      Set1.LastElmt  := Set2.LastElmt;
   end Assign;

procedure AssignElmt	(Set: out tSet; Elmt: Integer) is
   begin
      AssignEmpty (Set);
      Include (Set, Elmt);
      Set.Card      := 1;
      Set.FirstElmt := Elmt;
      Set.LastElmt  := Elmt;
   end AssignElmt;

procedure AssignEmpty	(Set: in out tSet) is
   begin
      Set.BitsetPtr.all := (0 .. Set.MaxElmt => False);
      Set.Card      := 0;
      Set.FirstElmt := Set.MaxElmt;
      Set.LastElmt  := 0;
   end AssignEmpty;

procedure ForallDo	(Set: tSet) is
   begin
      for i in Set.FirstElmt .. Set.LastElmt loop
	 if IsElement (i, Set) then ProcOfCard (i); end if;
      end loop;
   end ForallDo;

procedure ReadSet	(f: File_Type; Set: out tSet) is
      ch	: Character;
      i		: Integer;
      n		: Integer := 0;
   begin
      loop Get (f, ch); if ch = '{' then exit; end if; end loop;
      AssignEmpty (Set);
      loop
	 Get (f, ch);
	 if ch = '}' then exit; end if;
	 Get (f, i);
	 Include (Set, i);
	 n := n + 1;
      end loop;
      Set.Card := n;
   end ReadSet;

procedure WriteSet	(f: File_Type; Set: tSet) is

   procedure WriteElmt (Elmt: Integer) is
      begin
	 Put (f, ' ');
	 Put (f, Elmt, 0);
      end WriteElmt;

   procedure WriteAll is new ForallDo (WriteElmt);

   begin
      Put (f, '{');
      WriteAll (Set);
      Put (f, '}');
   end WriteSet;

end Sets;
