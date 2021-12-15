-- $Id: Sort.md,v 1.0 1992/08/07 14:42:01 grosch rel $

-- $Log: Sort.md,v $

-- Ich, Doktor Josef Grosch, Informatiker, Aug. 1994

generic
   with function  IsLess (X, Y: Integer) return Boolean;
   with procedure Swap   (X, Y: Integer);
package Sort is

procedure QuickSort (Lwb, Upb: Integer);

	-- Sort data from the indices 'Lwb' to 'Upb' using quicksort.

end Sort;
