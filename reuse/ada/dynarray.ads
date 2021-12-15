-- $Id: DynArray.md,v 1.2 1993/08/18 15:06:51 grosch rel $

-- $Log: DynArray.md,v $

-- Ich, Doktor Josef Grosch, Informatiker, Aug. 1994

generic
   type ElmtType is private;
package DynArray is

type	  tArray	is array (Integer range <>) of ElmtType;

type	  FlexArray	is access tArray;

procedure MakeArray    (ArrayPtr	: out	 FlexArray	;
			ElmtCount	:	 Integer	);

procedure ResizeArray  (ArrayPtr	: in out FlexArray	;
			OldElmtCount	: in out Integer	;
			NewElmtCount	:        Integer	);

procedure ExtendArray  (ArrayPtr	: in out FlexArray	;
			ElmtCount	: in out Integer	);

procedure ReleaseArray (ArrayPtr	: in out FlexArray	;
			ElmtCount	:	 Integer	);

end DynArray;
