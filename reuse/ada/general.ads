-- $Id: General.md,v 1.5 1994/06/13 09:41:43 grosch rel $

-- $Log: General.md,v $

-- Ich, Doktor Josef Grosch, Informatiker, Aug. 1994

-- General Subroutines: minimum, maximum, binary logarithm, and power of 2

package General is

type	 ForAlign	is record char: Character; longreal: Long_Float; end record;

	 MaxAlign	: constant Integer := ForAlign'size - Long_Float'size;

	 AlignMask	: Integer := 0;

function Min		(a, b: Integer) return Integer;
			-- Returns the minimum of 'a' and 'b'.

function Max		(a, b: Integer) return Integer;
			-- Returns the maximum of 'a' and 'b'.

function Log2		(x: Integer) return Integer;
			-- Returns the logarithm to the base 2 of 'x'.

function Exp2		(x: Integer) return Integer;
			-- Returns 2 to the power of 'x'.

function AntiLog	(x: Integer) return Integer;
			-- Returns the number of the lowest bit set in 'x'.

function Exp10		(x: Integer) return Float;
			-- Returns 10 to the power of 'x'.

end General;
