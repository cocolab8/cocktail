-- $Id: Sort.mi,v 1.0 1992/08/07 14:42:01 grosch rel $

-- $Log: Sort.mi,v $

-- Ich, Doktor Josef Grosch, Informatiker, Aug. 1994

package body Sort is

procedure QuickSort (Lwb, Upb: Integer) is
      i, j: Integer; k: Integer := Lwb;
   begin
      loop
	 if k >= Upb then return; end if;
	 i := k + 1;
	 j := Upb;

	 loop
	    while (i < Upb) and IsLess (i, k) loop i := i + 1; end loop;
	    while (k < j  ) and IsLess (k, j) loop j := j - 1; end loop;
	    if i < j then Swap (i, j); end if;
	    if i >= j then exit; end if;
	 end loop;

	 Swap (k, j);
	 QuickSort (k, j - 1);
	 k := j + 1;		-- QuickSort (j + 1, Upb);
      end loop;
   end QuickSort;

end Sort;
