-- $Id: DynArray.mi,v 1.8 1994/06/13 09:41:43 grosch rel $

-- $Log: DynArray.mi,v $

-- Ich, Doktor Josef Grosch, Informatiker, Aug. 1994

with Unchecked_Deallocation;

package body DynArray is

procedure Free is new Unchecked_Deallocation (tArray, FlexArray);

procedure MakeArray    (ArrayPtr	: out	 FlexArray	;
			ElmtCount	:	 Integer	) is
   begin
      ArrayPtr := new tArray (0 .. ElmtCount - 1);
   end MakeArray;

procedure ResizeArray  (ArrayPtr	: in out FlexArray	;
			OldElmtCount	: in out Integer	;
			NewElmtCount	:        Integer	) is
      NewPtr	: FlexArray := new tArray (0 .. NewElmtCount - 1);
   begin
      if NewElmtCount < OldElmtCount then OldElmtCount := NewElmtCount; end if;
      NewPtr (0 .. OldElmtCount - 1) := ArrayPtr (0 .. OldElmtCount - 1);
      Free (ArrayPtr);
      ArrayPtr := NewPtr;
      OldElmtCount := NewElmtCount;
   end ResizeArray;

procedure ExtendArray  (ArrayPtr	: in out FlexArray	;
			ElmtCount	: in out Integer	) is
   begin
      ResizeArray (ArrayPtr, ElmtCount, ElmtCount * 2);
   end ExtendArray;

procedure ReleaseArray (ArrayPtr	: in out FlexArray	;
			ElmtCount	:	 Integer	) is
   begin
      Free (ArrayPtr);
   end ReleaseArray;

end DynArray;
