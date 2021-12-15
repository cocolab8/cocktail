-- $Id: Position.mi,v 1.4 1994/08/15 22:13:23 grosch rel $

-- $Log: Position.mi,v $

-- Ich, Doktor Josef Grosch, Informatiker, Aug. 1994

with Text_Io; use Text_Io;

package body Position is

package Int_Io is new Integer_IO (Integer); use Int_Io;

function Compare (Position1, Position2: tPosition) return Integer is
   begin
      if Position1.Line   < Position2.Line   then return -1; end if;
      if Position1.Line   > Position2.Line   then return  1; end if;
      if Position1.Column < Position2.Column then return -1; end if;
      if Position1.Column > Position2.Column then return  1; end if;
      return 0;
   end Compare;

procedure WritePosition (File: File_Type; Position: tPosition) is
   begin
      if Compare (Position, NoPosition) = 0 then
	 Set_Col (File, Col (File) + 8);
      else
	 Put (File, Position.Line  , 4);
	 Put (File, ',');
	 Put (File, Position.Column, 3);
      end if;
   end WritePosition;

procedure ReadPosition (File: File_Type; Position: out tPosition) is
      c	: Character;
   begin
      Get (File, Position.Line);
      Get (File, c);
      Get (File, Position.Column);
   end ReadPosition;

end Position;
