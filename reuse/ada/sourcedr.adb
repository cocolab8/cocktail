-- $Id: SourceDrv.mi,v 1.1 1991/11/21 14:33:17 grosch rel $

-- $Log: SourceDrv.mi,v $

-- Ich, Doktor Josef Grosch, Informatiker, Aug. 1994

with Source, Text_Io; use Source, Text_Io;

procedure SourceDr is

f : Integer;
l : Integer;
s : String (1..256);

begin
   f := BeginSource ("source.adb");
   GetLine (f, s, 256, l);
   Put (s); New_Line;
   CloseSource (f);
end SourceDr;
