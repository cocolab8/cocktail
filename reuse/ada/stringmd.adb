-- $Id: StringM.mi,v 1.5 1993/08/18 15:06:51 grosch rel $

-- $Log: StringM.mi,v $

-- Ich, Doktor Josef Grosch, Informatiker, Sept. 1994

with StringM, Strings, Text_Io;
use  StringM, Strings, Text_Io;

procedure StringMD is

procedure do_it is
   s	: tString;
   r	: tStringRef;
begin
   Put ("enter strings, one per line, - terminates"); New_Line;
   loop
      ReadS (Standard_Input, s);
      r := PutString (s);
      WriteString (Standard_Output, r); New_Line;
      if Length (r) = 0 or else Element (s, 1) = '-' then exit; end if;
   end loop;
   New_Line;
   WriteStringMemory;
end do_it;

begin
   do_it;
   InitStringMemory;
   do_it;
end StringMD;
