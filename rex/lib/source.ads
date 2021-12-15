-- $Id: source.ads,v 1.1 1997/05/27 21:44:35 grosch rel $

$@ package $Source is

function BeginSource (FileName: String) return Integer;

   -- BeginSource is called from the scanner to open files.
   -- If not called then input is read form standard input.

procedure GetLine (File: Integer; Buffer: out String; Size: Integer; Last: out Integer);

   -- GetLine is called to fill a buffer starting at address 'Buffer'
   -- with a block of maximal 'Size' characters. Lines are terminated
   -- by newline characters (ASCII = 0xa). GetLine returns the number
   -- of characters transferred. Reasonable block sizes are between 128
   -- and 2048 or the length of a line. Smaller block sizes -
   -- especially block size 1 - will drastically slow down the scanner.

procedure CloseSource (File: Integer);

   -- CloseSource is called from the scanner at end of file or
   -- at end of input, respectively. It can be used to close files.

$@ end $Source;
