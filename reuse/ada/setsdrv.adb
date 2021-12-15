-- $Id: SetsDrv.mi,v 1.5 1992/09/24 13:05:19 grosch rel $

-- $Log: SetsDrv.mi,v $

-- Ich, Doktor Josef Grosch, Informatiker, Sept. 1994

with Sets, Text_Io; use Sets, Text_Io;

procedure SetsDrv is

package Int_Io	is new Integer_IO (Integer); use Int_Io;

   max		: constant Integer := 1000;

   s, t, u	: tSet;
   i, n		: Integer;
   f		: File_Type;

begin
   MakeSet (s, max);
   MakeSet (t, max);
   MakeSet (u, max);

   for i in 2 .. max loop
      Include (t, i);
   end loop;

   AssignEmpty (s);
   AssignElmt (s, 1);
   Assign (u, t);
   Union (s, t);

   AssignEmpty (t);
   i := 0;
   while i <= max loop
      Include (t, i);
      i := i + 2;
   end loop;
   Difference (s, t);

   i := 0;
   while i <= max loop
      Exclude (s, i);
      i := i + 3;
   end loop;
   i := 0;
   while i <= max loop
      Exclude (s, i);
      i := i + 5;
   end loop;
   i := 0;
   while i <= max loop
      Exclude (s, i);
      i := i + 7;
   end loop;
   i := 0;
   while i <= max loop
      Exclude (s, i);
      i := i + 11;
   end loop;
   i := 0;
   while i <= max loop
      Exclude (s, i);
      i := i + 13;
   end loop;
   i := 0;
   while i <= max loop
      Exclude (s, i);
      i := i + 17;
   end loop;
   i := 0;
   while i <= max loop
      Exclude (s, i);
      i := i + 19;
   end loop;
   i := 0;
   while i <= max loop
      Exclude (s, i);
      i := i + 23;
   end loop;
   i := 0;
   while i <= max loop
      Exclude (s, i);
      i := i + 29;
   end loop;

   Create (f, Out_File, "t");
   WriteSet (f, s);
   New_Line  (f);
   Close (f);

   Open (f, In_File, "t");
   ReadSet (f, t);
   Close (f);

   WriteSet (Standard_Output, t);
   New_Line (Standard_Output);
   Put (Standard_Output, Size (t), 5);
   Card    (t, n); Put (Standard_Output, n, 5);
   Minimum (t, n); Put (Standard_Output, n, 5);
   Maximum (t, n); Put (Standard_Output, n, 5);
   New_Line (Standard_Output);

   AssignEmpty (u);
   i := 7;
   while i <= max loop
      Include (u, i);
      i := i + 10;
   end loop;
   WriteSet (Standard_Output, u);
   New_Line (Standard_Output);
   Put (Standard_Output, Size (u), 5);
   Card    (u, n); Put (Standard_Output, n, 5);
   Minimum (u, n); Put (Standard_Output, n, 5);
   Maximum (u, n); Put (Standard_Output, n, 5);
   New_Line (Standard_Output);

   Intersection (u, t);
   WriteSet (Standard_Output, u);
   New_Line (Standard_Output);
   Put (Standard_Output, Size (u), 5);
   Card    (u, n); Put (Standard_Output, n, 5);
   Minimum (u, n); Put (Standard_Output, n, 5);
   Maximum (u, n); Put (Standard_Output, n, 5);
   New_Line (Standard_Output);

   ReleaseSet (s);
   ReleaseSet (t);
   ReleaseSet (u);

   MakeSet	(s, 10);
   Include	(s, 3);
   Include	(s, 7);
   New_Line	(Standard_Output);
   Put		(Standard_Output, "enter Size and Set like below! (Size=0 terminates)");
   New_Line	(Standard_Output);
   Put		(Standard_Output, "10 ");
   WriteSet	(Standard_Output, s);
   New_Line	(Standard_Output);
   ReleaseSet	(s);

   loop
      New_Line	(Standard_Output);
      Get	(Standard_Input, i);
      if i = 0 then exit; end if;
      MakeSet	(s, i);
      ReadSet	(Standard_Input, s);
      WriteSet	(Standard_Output, s);
      Put	(Standard_Output, " Card = "); Card (s, n); Put (Standard_Output, n, 0); New_Line (Standard_Output);
      Complement(s);
      WriteSet	(Standard_Output, s);
      Put	(Standard_Output, " Card = "); Card (s, n); Put (Standard_Output, n, 0); New_Line (Standard_Output);
      ReleaseSet(s);
   end loop;
end SetsDrv;
