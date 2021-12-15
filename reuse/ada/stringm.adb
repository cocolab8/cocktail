-- $Id: StringM.mi,v 1.5 1993/08/18 15:06:51 grosch rel $

-- $Log: StringM.mi,v $

-- Ich, Doktor Josef Grosch, Informatiker, Sept. 1994

with DynArray, Strings, Text_Io;
use  Strings, Text_Io;

package body StringM is

package Int_Io		is new Integer_IO (Integer); use Int_Io;
package Char_DA		is new DynArray (Character); use Char_DA;

	InitialMemorySize: constant Integer := 1024 * 16;

	MemoryPtr	: Char_DA.FlexArray;
	MemorySize	: Integer;
	MemorySpaceLeft	: Integer;
	MemoryFreePtr	: Integer;

function PutString (s: tString) return tStringRef is
      StrLength		: Integer := Length (s);
      NeededSpace	: Integer := StrLength + 2;
      OldMemorySize	: Integer;
      StartPtr		: Integer := MemoryFreePtr;
      t			: String (1 .. StrLength) := To_String (s);
   begin
      while MemorySpaceLeft < NeededSpace loop
	 OldMemorySize := MemorySize;
	 ExtendArray (MemoryPtr, MemorySize);
	 MemorySpaceLeft := MemorySpaceLeft + (MemorySize - OldMemorySize);
      end loop;
      MemoryPtr (MemoryFreePtr) := Character'Val (StrLength / 256);
      MemoryFreePtr := MemoryFreePtr + 1;
      MemoryPtr (MemoryFreePtr) := Character'Val (StrLength mod 256);
      for i in 1 .. StrLength loop MemoryPtr (MemoryFreePtr + i) := t (i); end loop;
      MemoryFreePtr := MemoryFreePtr + StrLength + 1;
      MemorySpaceLeft := MemorySpaceLeft - NeededSpace;
      return StartPtr;
   end PutString;

function GetString (r: tStringRef) return tString is
      StrLength	: Integer := Length (r);
      s		: String (1 .. StrLength);
      t		: tString;
   begin
      for i in 1 .. StrLength loop s (i) := MemoryPtr (r + i + 1); end loop;
      To_tString (s, t);
      return t;
   end GetString;

function Length (r: tStringRef) return Integer is
   begin
      return Character'Pos (MemoryPtr (r)) * 256 + Character'Pos (MemoryPtr (r+1));
   end Length;

function IsEqual (r: tStringRef; s: tString) return Boolean is
   begin
      return GetString (r) = s;
   end IsEqual;

procedure WriteString (f: File_Type; r: tStringRef) is
   begin
      for i in r + 2 .. r + 1 + Length (r) loop
	 Put (f, MemoryPtr (i));
      end loop;
   end WriteString;

procedure WriteStringMemory is
      StringPtr	: Integer;
   begin
      StringPtr := 0;
      while StringPtr < MemoryFreePtr loop
	 Put (Standard_Output, StringPtr, 5);
	 Put (Standard_Output, ' ');
	 WriteString (Standard_Output, StringPtr);
	 New_Line (Standard_Output);
	 StringPtr := StringPtr + Length (StringPtr) + 2;
      end loop;
      New_Line (Standard_Output);
      Put (Standard_Output, StringPtr, 5);
      Put (Standard_Output, " Bytes");
      New_Line (Standard_Output);
   end WriteStringMemory;

procedure InitStringMemory is
   begin
      MemorySpaceLeft	:= MemorySize;
      MemoryFreePtr 	:= 0;
   end InitStringMemory;

begin
   MemorySize := InitialMemorySize;
   MakeArray (MemoryPtr, MemorySize);
   InitStringMemory;
end StringM;
