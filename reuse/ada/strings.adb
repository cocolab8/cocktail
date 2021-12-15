-- $Id: Strings.md,v 1.3 1992/08/07 14:45:41 grosch rel $

-- $Log: Strings.md,v $

-- Ich, Doktor Josef Grosch, Informatiker, Sept. 1994

with Unchecked_Deallocation;

package body strings is

procedure Free is new Unchecked_Deallocation (String, tString);

function "="  (Left, Right: tString) return Boolean is
begin return Left.all = Right.all; end "=";

function "<"  (Left, Right: tString) return Boolean is
begin return Left.all < Right.all; end "<";

function "<=" (Left, Right: tString) return Boolean is
begin return Left.all <= Right.all; end "<=";

function ">"  (Left, Right: tString) return Boolean is
begin return Left.all > Right.all; end ">";

function ">=" (Left, Right: tString) return Boolean is
begin return Left.all >= Right.all; end ">=";

function "&" (Left, Right: tString) return tString is
   L_Length	: constant Integer := Left.all'Length;
   R_Length	: constant Integer := Right.all'Length;
   Length	: constant Integer :=  L_Length + R_Length;
   Result	: tString := new String (1 .. Length);
begin
   Result.all (1 .. L_Length)          := Left.all;
   Result.all (L_Length + 1 .. Length) := Right.all;
   return Result;
end "&";

function "&" (Left: tString; Right: String) return tString is
   L_Length	: constant Integer := Left.all'Length;
   Length	: constant Integer := L_Length + Right'Length;
   Result	: tString := new String (1 .. Length);
begin
   Result.all (1 .. L_Length)          := Left.all;
   Result.all (L_Length + 1 .. Length) := Right;
   return Result;
end "&";

function "&" (Left: String; Right: tString) return tString is
   R_Length	: constant Integer := Right.all'Length;
   Length	: constant Integer := Left'Length + R_Length;
   Result	: tString := new String (1 .. Length);
begin
   Result.all (1 .. Left'Length)          := Left;
   Result.all (Left'Length + 1 .. Length) := Right.all;
   return Result;
end "&";

function "&" (Left: tString; Right: Character) return tString is
   Length	: constant Integer := Left.all'Length + 1;
   Result	: tString := new String (1 .. Length);
begin
   Result.all (1 .. Length - 1) := Left.all;
   Result.all (Length)          := Right;
   return Result;
end "&";

function "&" (Left: Character; Right: tString) return tString is
   Length	: constant Integer := Right.all'Length + 1;
   Result	: tString := new String (1 .. Length);
begin
   Result.all (1)           := Left;
   Result.all (2 .. Length) := Right.all;
   return Result;
end "&";

procedure Create (Target: in out tString; Length: Natural) is
begin
   Free (Target);
   Target := new String (1 .. Length);
end Create;

function Length (Source: tString) return Natural is
begin
   return Source.all'Length;
end Length;

function Element (Source: tString; Index: Positive) return Character is
begin
   if Index <= Source.all'Last then
      return Source.all (Index);
   else
      null; -- raise String.Index_Error;
      return '?';
   end if;
end Element;

procedure Replace_Element (Source: in out tString; Index: Positive; By: Character) is
begin
   if Index <= Source.all'Last then
      Source.all (Index) := By;
   else
      null; -- raise Strings.Index_Error;
   end if;
end Replace_Element;

function Replace_Slice (Source: in tString; Low: Positive; High: Natural; By: String) return tString is
begin
   return Source; -- To_tString (Fixed.Replace_Slice (Source.all, Low, High, By));
end Replace_Slice;

function Slice (Source: tString; Low: Positive; High: Natural) return String is
   Result	: String (1 .. High - Low + 1);
begin
   Result := Source.all (Low .. High);
   return Result;
end Slice;

function To_String (Source: tString) return String is
begin
   return Source.all;
end To_String;

procedure To_tString (Source: String; Target: in out tString) is
begin
   Free (Target);
   Target := new String (1 .. Source'Length);
   Target.all := Source;
end To_tString;

procedure ReadS (File: File_Type; Target: in out tString) is
   s	: String (1 .. 1024);
   n	: Integer;
begin
   Get_Line (File, s, n);
   To_tString (s (1 .. n), Target);
end ReadS;

procedure WriteS (File: File_Type; Source: tString) is
begin
   Put (File, Source.all);
end WriteS;

end strings;
