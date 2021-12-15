(* $Id: Source.mi,v 1.7 1997/05/27 21:44:35 grosch rel $ *)

$@ IMPLEMENTATION MODULE $Source;

FROM SYSTEM	IMPORT ADDRESS;
FROM rSystem	IMPORT tFile, OpenInput, rRead, rClose;

PROCEDURE BeginSource (FileName: ARRAY OF CHAR): tFile;
   BEGIN
      RETURN OpenInput (FileName);
   END BeginSource;

PROCEDURE GetLine (File: tFile; Buffer: ADDRESS; Size: CARDINAL): INTEGER;
   CONST IgnoreChar = ' ';
   VAR n	: INTEGER;
   VAR BufferPtr: POINTER TO ARRAY [0..30000] OF CHAR;
   BEGIN
   (* # ifdef Dialog
      n := rRead (File, Buffer, Size);
      (* Add dummy after newline character in order to supply a lookahead for rex. *)
      (* This way newline tokens are recognized without typing an extra line.      *)
      BufferPtr := Buffer;
      IF (n > 0) AND (BufferPtr^[n - 1] = 012C) THEN BufferPtr^[n] := IgnoreChar; INC (n); END;
      RETURN n;
      # else *)
      RETURN rRead (File, Buffer, Size);
   (* # endif *)
   END GetLine;

PROCEDURE CloseSource (File: tFile);
   BEGIN
      rClose (File);
   END CloseSource;

$@ END $Source.
