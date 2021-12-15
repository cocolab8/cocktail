-- $Id:$

class rSTRING

inherit STRING

creation make

feature

item_code (n: INTEGER): INTEGER is
   do
      Result := item (n).to_integer
   end

end
