-- $Id: scandrv.adb,v 1.2 1997/05/27 21:44:35 grosch rel $

$@ with @, Text_Io, Position, Strings;
$@ use  @, Text_Io, Position, Strings;

$@ procedure @Drv is

   package Int_Io is new Text_Io.Integer_IO (Integer); use Int_Io;

   Token	: Integer	:= 1;
   Word		: tString;
   Debug	: Boolean 	:= False;
   Count	: Integer	:= 0;
begin
   BeginScanner;
   while Token /= EofToken loop
      Token := GetToken;
      Count := Count + 1;
      if Debug then
	 WritePosition (Standard_Output, Attribute.Position);
	 Put (Standard_Output, Token, 5);
	 if TokenLength > 0 then
	    Put (Standard_Output, ' ');
	    GetWord (Word);
	    WriteS (Standard_Output, Word);
	 end if;
	 New_Line (Standard_Output);
      end if;
   end loop;
   CloseScanner;
   Put (Standard_Output, Count, 0);
   New_Line (Standard_Output);
$@ end @Drv;
