GLOBAL	{
ErrorAttribute (Token: INTEGER): ScanAttribute is
   local
      n	: NumAttr
   do
      inspect Token
      when 1 then
         !! n.make
	 n.SetValue (99)	-- default: 99
         n.Position.Set (yyScanAttribute.Position.Line, yyScanAttribute.Position.Column)
	 Result := n
      when 2 then
         !! n.make
	 n.SetValue (25)	-- register z
         n.Position.Set (yyScanAttribute.Position.Line, yyScanAttribute.Position.Column)
	 Result := n
      else
	 Result := yyScanAttribute
      end
   end
}

LOCAL { n : NumAttr }

RULE

" "		: {}
{0-9}		: { !! n.make
		    n.SetValue (GetWord.item (1).to_integer - '0'.to_integer)
		    n.Position.Set (yyScanAttribute.Position.Line, yyScanAttribute.Position.Column)
		    Attribute := n
		    Result := 1
		  }
{a-z}		: { !! n.make
		    n.SetValue (GetWord.item (1).to_integer - 'n'.to_integer)
		    n.Position.Set (yyScanAttribute.Position.Line, yyScanAttribute.Position.Column)
		    Attribute := n
		    Result := 2
		  }
ANY | \n	: { Result := GetWord.item (1).to_integer
		    if Result > '='.to_integer then Result := -1 end
		  }
