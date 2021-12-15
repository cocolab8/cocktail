-- $Id: position.e,v 1.2 1996/01/16 21:27:18 grosch rel $

class Position

-- describes source position of a token

creation make

feature

Line	: INTEGER
Column	: INTEGER

make is
   do
      Line	:= 0
      Column	:= 0
   end

Set (pLine, pColumn: INTEGER) is
   do
      Line	:= pLine
      Column	:= pColumn
   end

Compare (other: Position): INTEGER is
			-- Returns -1 if Position < other.
			-- Returns  0 if Position = other.
			-- Returns  1 if Position > other.
   do
          if Line   < other.Line   then Result := -1
      elseif Line   > other.Line   then Result :=  1
      elseif Column < other.Column then Result := -1
      elseif Column > other.Column then Result :=  1
      else				Result :=  0
      end
   end

WritePosition (File: rFILE) is
			-- The 'Position' is printed on the 'File'.
   do
      if Line = 0 and then Column = 0 then
         File.putstring ("        ")
      else
         File.putint2 (Line, 4)
	 File.putchar (',')
	 File.putint2 (Column, 3)
      end
   end

ReadPosition (File: rFILE) is
			-- The 'Position' is read from the 'File'.
   do
      File.readint; Line := File.lastint
      File.readchar
      File.readint; Column := File.lastint
   end

end
