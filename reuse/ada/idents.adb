-- $Id: Idents.mi,v 1.8 1992/06/22 14:23:18 grosch rel $

-- $Log: Idents.mi,v $

-- Ich, Doktor Josef Grosch, Informatiker, Sept. 1994

with DynArray;

package body Idents is

	cNoIdent	: constant Integer := 0;
	InitialTableSize: constant Integer := 512;
	HashTableSize	: constant Integer := 256;

type	IdentTableEntry	is record 
			   StringRef	: tStringRef;
			   Length	: Integer;
			   Collision	: tIdent;
			end record;

subtype HashIndex	is Integer range 0 .. HashTableSize;

package Int_Io		is new Integer_IO (Integer); use Int_Io;
package Ident_DA	is new DynArray (IdentTableEntry); use Ident_DA;

	TablePtr	: FlexArray;
	IdentTableSize	: Integer;
	IdentCount	: tIdent;
	HashTable	: array (HashIndex) of tIdent; 

function MakeIdent (s: tString) return tIdent is
      HashTableIndex	: HashIndex;
      CurIdent		: tIdent;
      l			: constant Integer := Length (s);
   begin
      if l = 0 then				-- hash
	 HashTableIndex := 0;
      else 
	 HashTableIndex := (Character'Pos (Element (s, 1)) +
	 		    Character'Pos (Element (s, l)) * 11 + l * 26) mod HashTableSize;
      end if;

      CurIdent := HashTable (HashTableIndex);	-- search
      while CurIdent /= cNoIdent loop
	 if (TablePtr (CurIdent).Length = l) and IsEqual (TablePtr (CurIdent).StringRef, s) then
	    return CurIdent;			-- found
	 end if;  
	 CurIdent := TablePtr(CurIdent).Collision;
      end loop;

      IdentCount := IdentCount + 1;		-- not found: enter
      if IdentCount = IdentTableSize then
	 ExtendArray (TablePtr, IdentTableSize);
      end if;
      TablePtr (IdentCount) := (
	 StringRef	=> PutString (s),
	 Length		=> l,
	 Collision	=> HashTable (HashTableIndex)
      );
      HashTable (HashTableIndex) := IdentCount;
      return IdentCount;
   end MakeIdent;

procedure GetString (i: tIdent; s: in out tString) is
   begin
      s := StringM.GetString (TablePtr (i).StringRef);
   end GetString;

function GetStringRef (i: tIdent) return tStringRef is
   begin
      return TablePtr (i).StringRef;
   end GetStringRef;

function MaxIdent return tIdent is
   begin
      return IdentCount;
   end MaxIdent;

procedure WriteIdent (f: File_Type; i: tIdent) is
      s	: tString;
   begin
      GetString (i, s);
      WriteS (f, s);
   end WriteIdent;

procedure WriteIdents is
   begin
      for i in 1 .. IdentCount loop
	 Put (Standard_Output, i, 5);
	 Put (Standard_Output, ' ');
	 WriteIdent (Standard_Output, i);
	 New_Line (Standard_Output);
      end loop;
   end WriteIdents;

procedure WriteHashTable is
      CurIdent	: tIdent;
      Count	: Integer;
   begin
      for i in 0 .. HashTableSize loop
	 Put (Standard_Output, i, 5);

	 Count := 0;
	 CurIdent := HashTable (i);
	 while CurIdent /= cNoIdent loop
	    Count := Count;
	    CurIdent := TablePtr (CurIdent).Collision;
	 end loop;
	 Put (Standard_Output, Count, 5);

	 CurIdent := HashTable (i);
	 while CurIdent /= cNoIdent loop
	    Put (Standard_Output, ' ');
	    WriteIdent (Standard_Output, CurIdent);
	    CurIdent := TablePtr (CurIdent).Collision;
	 end loop;
	 New_Line (Standard_Output);
      end loop;

      New_Line (Standard_Output);
      Put (Standard_Output, "Idents =");
      Put (Standard_Output, IdentCount, 5);
      New_Line (Standard_Output);
   end WriteHashTable;
    
procedure InitIdents is
   begin
      HashTable := (0 .. HashTableSize => cNoIdent);
      IdentCount := 0;
      NoIdent := MakeIdent (NoString);
   end InitIdents;

begin
   IdentTableSize := InitialTableSize;
   MakeArray (TablePtr, IdentTableSize);
   InitIdents;
end Idents;
