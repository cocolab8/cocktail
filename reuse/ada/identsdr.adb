with Text_Io, Strings, Idents;
use  Text_Io, Strings, Idents;

procedure identsdr is

procedure do_it is
   s	: tString;
   i	: tIdent;
begin
   Put ("enter strings, one per line, - terminates"); New_Line;
   loop
      ReadS (Standard_Input, s);
      i := MakeIdent (s);
      WriteIdent (Standard_Output, i); New_Line;
      if Length (s) = 0 or else Element (s, 1) = '-' then exit; end if;
   end loop;
   New_Line;
   WriteIdents;
end do_it;

begin
   do_it;
   InitIdents;
   do_it;
end identsdr;
