-- $Id: scanattr.e,v 1.1 1996/01/16 21:27:18 grosch rel $

class ScanAttribute

-- subclasses of ScanAttribute may be defined by the user
-- in order to describe additional properties of tokens

inherit Attribute

creation make

feature

Position	: Position

make is
   do
      !! Position.make
   end

end
