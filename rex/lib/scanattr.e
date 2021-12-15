-- $Id: scanattr.e,v 2.1 1997/05/27 21:44:35 grosch rel $

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
