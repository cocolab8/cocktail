-- $Id: scandrv.e,v 2.1 1997/05/27 21:44:35 grosch rel $

-- scanner test driver

$@ class @Drv

creation main

feature

main is
   local
      Token	: INTEGER
      Count	: INTEGER
$@       Scanner	: @
      f		: rFILE
      Attribute	: ScanAttribute
   do
      !! f.make_write_from_fp (f.stdout_fp)
      !! Scanner.BeginScanner
      from
         Token := Scanner.GetToken
	 Count := 1
         debug
	    Scanner.Attribute.Position.WritePosition (f)
	    f.putint2 (Token, 5)
	    f.putchar (' ')
	    f.putstring (Scanner.GetWord)
	    f.new_line
         end
      until Token = Scanner.EofToken loop
         Token := Scanner.GetToken
         Count := Count + 1
         debug
	    Scanner.Attribute.Position.WritePosition (f)
	    f.putint2 (Token, 5)
	    f.putchar (' ')
	    f.putstring (Scanner.GetWord)
	    f.new_line
         end
      end
      Scanner.CloseScanner
      f.putint (Count)
      f.new_line
      f.close
   end

end
