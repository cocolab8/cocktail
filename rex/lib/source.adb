-- $Id: source.adb,v 1.1 1997/05/27 21:44:35 grosch rel $

with System; Use System;

$@ package body $Source is

function BeginSource (FileName: String) return Integer is
      function OpenInput (FileName: Address) return Integer;
      pragma Interface (C, OpenInput);
      pragma Interface_Name (OpenInput, "OpenInput");
      C_Name	: String (1 .. 256);
   begin
      C_Name (1 .. FileName'Last) := FileName;
      C_Name (FileName'Last + 1)  := Character'Val (0);
      return OpenInput (C_Name'Address);
   end BeginSource;

procedure GetLine (File: Integer; Buffer: out String; Size: Integer; Last: out Integer) is
      function rRead (File: Integer; Buffer: Address; Size: Integer) return Integer;
      pragma Interface (C, rRead);
      pragma Interface_Name (rRead, "rRead");
   begin
      Last := rRead (File, Buffer'Address, Size);
   end GetLine;

procedure CloseSource (File: Integer) is
      procedure rClose (File: Integer);
      pragma Interface (C, rClose);
      pragma Interface_Name (rClose, "rClose");
   begin
      rClose (File);
   end CloseSource;

$@ end $Source;
