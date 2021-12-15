-- $Id: parsdrv.e,v 1.1 1996/01/16 21:27:18 grosch rel $

$@ class @Drv

creation main

feature

main is
   local
$@       Parser	: @
      ErrorCount: INTEGER
   do
      !! Parser.make
      Parser.BeginParser
      ErrorCount := Parser.Parser
      Parser.CloseParser
   end

end
