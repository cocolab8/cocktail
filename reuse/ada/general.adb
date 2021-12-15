-- $Id: General.mi,v 1.5 1994/06/13 09:41:43 grosch rel $

-- $Log: General.mi,v $

-- Ich, Doktor Josef Grosch, Informatiker, Aug. 1994

-- General Subroutines: minimum, maximum, binary logarithm, and power of 2

package body General is

-- Returns the minimum of 'a' and 'b'.

function Min		(a, b: Integer) return Integer is
   begin
      if a <= b then
	 return a;
      else
	 return b;
      end if;
   end Min;

-- Returns the maximum of 'a' and 'b'.

function Max		(a, b: Integer) return Integer is
   begin
      if a >= b then
	 return a;
      else
	 return b;
      end if;
   end Max;

-- Returns the logarithm to the base 2 of 'x'.

function Log2		(x: Integer) return Integer is
      z	: Integer := x;
      y	: Integer := 0;
   begin
      if z >= 65536 then y := y + 16; z := z / 65536; end if;
      if z >=   256 then y := y +  8; z := z /   256; end if;
      if z >=    16 then y := y +  4; z := z /    16; end if;
      if z >=     4 then y := y +  2; z := z /     4; end if;
      if z >=     2 then y := y +  1; z := z /     2; end if;
      return y;
   end Log2;

-- Returns the number of the lowest bit set in 'x'.

function AntiLog	(x: Integer) return Integer is
      z	: Integer := x;
      y	: Integer := 0;
   begin
      if (z mod 65536) = 0 then y := y + 16; z := z / 65536; end if;
      if (z mod   256) = 0 then y := y +  8; z := z /   256; end if;
      if (z mod    16) = 0 then y := y +  4; z := z /    16; end if;
      if (z mod     4) = 0 then y := y +  2; z := z /     4; end if;
      if (z mod     2) = 0 then y := y +  1; z := z /     2; end if;
      return y;
   end AntiLog;

-- Returns 2 to the power of 'x'.

function Exp2		(x: Integer) return Integer is
      z	: Integer := x;
      y	: Integer := 1;
   begin
      if z >= 16 then z := z - 16; y := y * 65536; end if;
      if z >=  8 then z := z -  8; y := y *   256; end if;
      if z >=  4 then z := z -  4; y := y *    16; end if;
      if z >=  2 then z := z -  2; y := y *     4; end if;
      if z >=  1 then z := z -  1; y := y *     2; end if;
      return y;
   end Exp2;

-- Returns 10 to the power of 'x'.

function Exp10		(x: Integer) return Float is
      z		: Integer := abs (x);
      y		: Float	  := 1.0;
      negative	: Boolean := x < 0;
   begin
   -- if z >= 64 then z := z - 64; y := y * 1.0E64; end if; too big
      if z >= 32 then z := z - 32; y := y * 1.0E32; end if;
      if z >= 16 then z := z - 16; y := y * 1.0E16; end if;
      if z >=  8 then z := z -  8; y := y * 1.0E8 ; end if;
      if z >=  4 then z := z -  4; y := y * 1.0E4 ; end if;
      if z >=  2 then z := z -  2; y := y * 1.0E2 ; end if;
      if z >=  1 then z := z -  1; y := y * 1.0E1 ; end if;
      if negative then return 1.0 / y; else return y; end if;
   end Exp10;

end General;
