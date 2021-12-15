class ExprAttr

inherit Attribute

creation SetValue

feature

value	: INTEGER

SetValue (pvalue: INTEGER) is
   do
      value := pvalue
   end

end
