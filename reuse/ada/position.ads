-- $Id: Position.md,v 1.2 1994/01/29 22:25:57 grosch rel $

-- $Log: Position.md,v $

-- Ich, Doktor Josef Grosch, Informatiker, Aug. 1994

with Text_Io; use Text_Io;

package Position is

type	  tPosition	is record Line, Column: Integer; end record;

	  NoPosition	: constant tPosition := (0, 0);
			-- A default position (0, 0).

function  Compare	(Position1, Position2: tPosition) return Integer;
			-- Returns -1 if Position1 < Position2.
			-- Returns  0 if Position1 = Position2.
			-- Returns  1 if Position1 > Position2.

procedure WritePosition	(File: File_Type; Position: tPosition);
			-- The 'Position' is printed on the 'File'.

procedure ReadPosition	(File: File_Type; Position: out tPosition);
			-- The 'Position' is read from the 'File'.

end Position;
