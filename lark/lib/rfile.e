-- $Id: rfile.e,v 2.0 1996/01/16 21:30:55 grosch rel $

class rFILE

inherit MY_FILE

creation make_read, make_write, make_read_from_fp, make_write_from_fp

feature

putint2 (n, FieldWidth: INTEGER) is
   local
      i, x, length, negative	: INTEGER
   do
      if n <= 0 then
	 negative := 1
	 x := - n
      else
	 negative := 0
	 x := n
      end
      from length := 0 until x = 0 loop
	 length := length + 1
	 x := x // 10
      end
      from i := 1 until i > FieldWidth - length - negative loop
	 i := i + 1
	 putchar (' ')
      end
      putint (n)
   end

end
