(* $Id: Source.md,v 1.6 1997/05/27 21:44:35 grosch rel $ *)

$@ DEFINITION MODULE $Source;

FROM SYSTEM	IMPORT ADDRESS;
FROM rSystem	IMPORT tFile;

PROCEDURE BeginSource (FileName: ARRAY OF CHAR): tFile;

   (*
      BeginSource is called from the scanner to open files.
      If not called then input is read form standard input.
   *)

PROCEDURE GetLine (File: tFile; Buffer: ADDRESS; Size: CARDINAL): INTEGER;

   (*
      GetLine is called to fill a buffer starting at address 'Buffer'
      with a block of maximal 'Size' characters. Lines are terminated
      by newline characters (ASCII = 0xa). GetLine returns the number
      of characters transferred. Reasonable block sizes are between 128
      and 2048 or the length of a line. Smaller block sizes -
      especially block size 1 - will drastically slow down the scanner.
   *)

PROCEDURE CloseSource (File: tFile);

   (*
      CloseSource is called from the scanner at end of file or
      at end of input, respectively. It can be used to close files.
   *)

$@ END $Source.
