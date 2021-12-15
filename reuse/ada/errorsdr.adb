-- $Id: ErrorsDrv.mi,v 1.0 1993/01/16 11:25:41 grosch Exp $

-- $Log: ErrorsDrv.mi,v $

-- Ich, Doktor Josef Grosch, Informatiker, Sept. 1994

with Text_Io, Sets, Strings, Idents, Position, Errors;
use  Text_Io, Sets, Strings, Idents, Position, Errors;

procedure ErrorsDr is

   Int		: Integer;
   Short	: Integer range 0 .. 2 ** 16 - 1;
   Long		: Integer;
   Real		: Float;
   Bool		: Boolean;
   Char		: Character;
   Str		: tString;
   Set		: tSet;
   Ident	: tIdent;

procedure do_errors is
begin
   MessageI ("Integer   ", Errors.Error, NoPosition, Errors.cInteger    , Int   'Address);
   MessageI ("Short     ", Errors.Error, NoPosition, Errors.cShort      , Short 'Address);
   MessageI ("Long      ", Errors.Error, NoPosition, Errors.cLong       , Long  'Address);
   MessageI ("Real      ", Errors.Error, NoPosition, Errors.cFloat      , Real  'Address);
   MessageI ("Boolean   ", Errors.Error, NoPosition, Errors.cBoolean    , Bool	'Address);
   MessageI ("Character ", Errors.Error, NoPosition, Errors.cCharacter  , Char	'Address);
   MessageI ("String    ", Errors.Error, NoPosition, Errors.cString     , Str   'Address);
   MessageI ("Set       ", Errors.Error, NoPosition, Errors.cSet        , Set   'Address);
   MessageI ("Ident     ", Errors.Error, NoPosition, Errors.cIdent      , Ident 'Address);
end do_errors;

begin
   Int		:= 1;
   Short	:= 2;
   Long		:= 3;
   Real		:= 4.0;
   Bool		:= False;
   Char		:= 'a';

   MakeSet (Set, 10); Include (Set, 5); Include (Set, 6);
   To_tString ("def", Str); Ident := MakeIdent (Str);
   do_errors;			New_Line (Standard_Error);
   StoreMessages (True);
   do_errors;
   WriteMessages (Standard_Error); New_Line (Standard_Error);
   WriteMessages (Standard_Output); New_Line (Standard_Error);
   StoreMessages (True);
   WriteMessages (Standard_Output);
end ErrorsDr;
