-- $Id: DynArrDrv.mi,v 1.1 1991/11/21 14:33:17 grosch rel $

-- $Log: DynArrDrv.mi,v $

-- Ich, Doktor Josef Grosch, Informatiker, Aug. 1994

with DynArray, Text_Io; use Text_Io;

procedure DynArrDr is

package Int_Io		is new Integer_IO	(Integer); use Int_Io;
package Real_Io		is new Float_IO		(Float	); use Real_Io;
package Int_DA		is new DynArray		(Integer); use Int_DA;
package Float_DA	is new DynArray		(Float	); use Float_DA;

p : Int_DA.FlexArray;
q : Float_DA.FlexArray;
s : Integer;

begin
   s := 10;

   MakeArray (p, s);
   for i in 1 .. s loop p (i - 1) := i; end loop;

   for j in 1 .. 13 loop
      ExtendArray (p, s);

      for i in s / 2 + 1 .. s loop p (i - 1) := i; end loop;

      for i in 1 .. s loop
	 if p (i - 1) /= i then
	    Put (Standard_Output, "Error j, i, p (i - 1) =");
	    Put (Standard_Output, j, 5);
	    Put (Standard_Output, i, 5);
	    Put (Standard_Output, p (i - 1), 10);
	    New_Line (Standard_Output);
	 end if;
      end loop;

      Put (Standard_Output, "j, size = ");
      Put (Standard_Output, j, 5);
      Put (Standard_Output, s, 10);
      Put (Standard_Output, " ok");
      New_Line (Standard_Output);
   end loop;
   ReleaseArray (p, s);

   s := 10;

   MakeArray (q, s);
   for i in 1 .. s loop q (i - 1) := Float (i); end loop;

   for j in 1 .. 13 loop
      ExtendArray (q, s);

      for i in s / 2 + 1 .. s loop q (i - 1) := Float (i); end loop;

      for i in 1 .. s loop
	 if q (i - 1) /= Float (i) then
	    Put (Standard_Output, "Error j, i, q (i - 1) =");
	    Put (Standard_Output, j, 5);
	    Put (Standard_Output, i, 5);
	    Put (Standard_Output, q (i - 1), 10);
	    New_Line (Standard_Output);
	 end if;
      end loop;

      Put (Standard_Output, "j, size = ");
      Put (Standard_Output, j, 5);
      Put (Standard_Output, s, 10);
      Put (Standard_Output, " ok");
      New_Line (Standard_Output);
   end loop;
   ReleaseArray (q, s);
end DynArrDr;
