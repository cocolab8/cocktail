class NumAttr

inherit ScanAttribute

creation make

feature

value	: INTEGER

SetValue (pvalue: INTEGER) is
   do
      value := pvalue
   end

end
