-- $Id: scanner.adb,v 1.10 2009/10/13 14:13:17 grosch Exp $

# define yyColumn(Index)	((Index) - yyLineStart)
# define yyOffset(Index)	(yyFileOffset + ((Index) - yyChBufferStart))

$@ with General, Position, Text_Io, DynArray, $Source;

$@ package body @ is

$G[ global user declarations
procedure ErrorAttribute (Token: Integer; Attribute: out tScanAttribute) is
   begin
      null;
   end ErrorAttribute;
$]

# ifndef yySetPosition
# define yySetPosition Attribute.Position.Line := yyLineCount; \
      Attribute.Position.Column := yyChBufferIndex - yyLineStart - TokenLength;
# endif

   yyTabSpace		: constant Integer	:= 8;
   yyDNoState		: constant Integer	:= 0;
   yyFileStackSize	: constant Integer	:= 16;
   yyInitStStStackSize	: constant Integer	:= 16;
   yyInitBufferSize	: constant Integer	:= 1024 * 8 + 256;
$C constant declarations

subtype	yyTableElmt	is Integer range 0 .. 2 ** 16 - 1;
subtype	yyStateRange	is Integer range 0 .. yyDStateCount;
subtype	yyTableRange	is Integer range 0 .. yyTableSize;
type	yyCombType	is record Check, Next: yyStateRange; end record;
-- subtype	yyChRange	is Character range yyFirstCh .. yyLastCh;
package Char_DA         is new DynArray (Character); use Char_DA;
package Stat_DA         is new DynArray (yyStateRange); use Stat_DA;

type	yytFileStackElmt is record
   			     SourceFile		: Integer;
			     Eof		: Boolean;
   			     ChBufferPtr	: Char_DA.FlexArray;
			     ChBufferStart	: Integer;
			     ChBufferSize	: Integer;
   			     ChBufferIndex	: Integer;
   			     BytesRead		: Integer;
   			     FileOffset		: Integer;
   			     LineCount		: Integer;
   			     LineStart		: Integer;
			end record;

type	yytFileStack	is array (1 .. yyFileStackSize) of yytFileStackElmt;

   yyBase		: constant array (yyStateRange) of Integer	:= ( 0,
$B
   );
   yyDefault		: constant array (yyStateRange) of yyStateRange	:= ( 0,
$U
   );
   yyComb		: constant array (yyTableRange) of yyCombType	:= (
$T
   );
   yyEobTrans		: constant array (yyStateRange) of yyStateRange	:= ( 0,
$R
   );
$M yyAction		: constant array (yyStateRange) of yyTableElmt	:= ( 0,
$Q
$M );
   yyToLower		: constant array (Character) of Character	:= (
Character'Val (0), Character'Val (1), Character'Val (2), Character'Val (3),
Character'Val (4), Character'Val (5), Character'Val (6), Character'Val (7),
Character'Val (8), Character'Val (9), Character'Val (10), Character'Val (11),
Character'Val (12), Character'Val (13), Character'Val (14), Character'Val (15),
Character'Val (16), Character'Val (17), Character'Val (18), Character'Val (19),
Character'Val (20), Character'Val (21), Character'Val (22), Character'Val (23),
Character'Val (24), Character'Val (25), Character'Val (26), Character'Val (27),
Character'Val (28), Character'Val (29), Character'Val (30), Character'Val (31),
' ', '!', '"', '#', '$', '%', '&', ''', '(', ')', '*', '+', ',', '-', '.', '/',
'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', ':', ';', '<', '=', '>', '?',
'@', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o',
'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '[', '\', ']', '^', '_',
'`', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o',
'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '{', '|', '}', '~', Character'Val (127),
Character'Val (128), Character'Val (129), Character'Val (130), Character'Val (131),
Character'Val (132), Character'Val (133), Character'Val (134), Character'Val (135),
Character'Val (136), Character'Val (137), Character'Val (138), Character'Val (139),
Character'Val (140), Character'Val (141), Character'Val (142), Character'Val (143),
Character'Val (144), Character'Val (145), Character'Val (146), Character'Val (147),
Character'Val (148), Character'Val (149), Character'Val (150), Character'Val (151),
Character'Val (152), Character'Val (153), Character'Val (154), Character'Val (155),
Character'Val (156), Character'Val (157), Character'Val (158), Character'Val (159),
Character'Val (160), Character'Val (161), Character'Val (162), Character'Val (163),
Character'Val (164), Character'Val (165), Character'Val (166), Character'Val (167),
Character'Val (168), Character'Val (169), Character'Val (170), Character'Val (171),
Character'Val (172), Character'Val (173), Character'Val (174), Character'Val (175),
Character'Val (176), Character'Val (177), Character'Val (178), Character'Val (179),
Character'Val (180), Character'Val (181), Character'Val (182), Character'Val (183),
Character'Val (184), Character'Val (185), Character'Val (186), Character'Val (187),
Character'Val (188), Character'Val (189), Character'Val (190), Character'Val (191),
Character'Val (192), Character'Val (193), Character'Val (194), Character'Val (195),
Character'Val (196), Character'Val (197), Character'Val (198), Character'Val (199),
Character'Val (200), Character'Val (201), Character'Val (202), Character'Val (203),
Character'Val (204), Character'Val (205), Character'Val (206), Character'Val (207),
Character'Val (208), Character'Val (209), Character'Val (210), Character'Val (211),
Character'Val (212), Character'Val (213), Character'Val (214), Character'Val (215),
Character'Val (216), Character'Val (217), Character'Val (218), Character'Val (219),
Character'Val (220), Character'Val (221), Character'Val (222), Character'Val (223),
Character'Val (224), Character'Val (225), Character'Val (226), Character'Val (227),
Character'Val (228), Character'Val (229), Character'Val (230), Character'Val (231),
Character'Val (232), Character'Val (233), Character'Val (234), Character'Val (235),
Character'Val (236), Character'Val (237), Character'Val (238), Character'Val (239),
Character'Val (240), Character'Val (241), Character'Val (242), Character'Val (243),
Character'Val (244), Character'Val (245), Character'Val (246), Character'Val (247),
Character'Val (248), Character'Val (249), Character'Val (250), Character'Val (251),
Character'Val (252), Character'Val (253), Character'Val (254), Character'Val (255)
   );
   yyToUpper		: constant array (Character) of Character	:= (
Character'Val (0), Character'Val (1), Character'Val (2), Character'Val (3),
Character'Val (4), Character'Val (5), Character'Val (6), Character'Val (7),
Character'Val (8), Character'Val (9), Character'Val (10), Character'Val (11),
Character'Val (12), Character'Val (13), Character'Val (14), Character'Val (15),
Character'Val (16), Character'Val (17), Character'Val (18), Character'Val (19),
Character'Val (20), Character'Val (21), Character'Val (22), Character'Val (23),
Character'Val (24), Character'Val (25), Character'Val (26), Character'Val (27),
Character'Val (28), Character'Val (29), Character'Val (30), Character'Val (31),
' ', '!', '"', '#', '$', '%', '&', ''', '(', ')', '*', '+', ',', '-', '.', '/',
'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', ':', ';', '<', '=', '>', '?',
'@', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O',
'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '[', '\', ']', '^', '_',
'`', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O',
'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '{', '|', '}', '~', Character'Val (127),
Character'Val (128), Character'Val (129), Character'Val (130), Character'Val (131),
Character'Val (132), Character'Val (133), Character'Val (134), Character'Val (135),
Character'Val (136), Character'Val (137), Character'Val (138), Character'Val (139),
Character'Val (140), Character'Val (141), Character'Val (142), Character'Val (143),
Character'Val (144), Character'Val (145), Character'Val (146), Character'Val (147),
Character'Val (148), Character'Val (149), Character'Val (150), Character'Val (151),
Character'Val (152), Character'Val (153), Character'Val (154), Character'Val (155),
Character'Val (156), Character'Val (157), Character'Val (158), Character'Val (159),
Character'Val (160), Character'Val (161), Character'Val (162), Character'Val (163),
Character'Val (164), Character'Val (165), Character'Val (166), Character'Val (167),
Character'Val (168), Character'Val (169), Character'Val (170), Character'Val (171),
Character'Val (172), Character'Val (173), Character'Val (174), Character'Val (175),
Character'Val (176), Character'Val (177), Character'Val (178), Character'Val (179),
Character'Val (180), Character'Val (181), Character'Val (182), Character'Val (183),
Character'Val (184), Character'Val (185), Character'Val (186), Character'Val (187),
Character'Val (188), Character'Val (189), Character'Val (190), Character'Val (191),
Character'Val (192), Character'Val (193), Character'Val (194), Character'Val (195),
Character'Val (196), Character'Val (197), Character'Val (198), Character'Val (199),
Character'Val (200), Character'Val (201), Character'Val (202), Character'Val (203),
Character'Val (204), Character'Val (205), Character'Val (206), Character'Val (207),
Character'Val (208), Character'Val (209), Character'Val (210), Character'Val (211),
Character'Val (212), Character'Val (213), Character'Val (214), Character'Val (215),
Character'Val (216), Character'Val (217), Character'Val (218), Character'Val (219),
Character'Val (220), Character'Val (221), Character'Val (222), Character'Val (223),
Character'Val (224), Character'Val (225), Character'Val (226), Character'Val (227),
Character'Val (228), Character'Val (229), Character'Val (230), Character'Val (231),
Character'Val (232), Character'Val (233), Character'Val (234), Character'Val (235),
Character'Val (236), Character'Val (237), Character'Val (238), Character'Val (239),
Character'Val (240), Character'Val (241), Character'Val (242), Character'Val (243),
Character'Val (244), Character'Val (245), Character'Val (246), Character'Val (247),
Character'Val (248), Character'Val (249), Character'Val (250), Character'Val (251),
Character'Val (252), Character'Val (253), Character'Val (254), Character'Val (255)
   );

   yyStateStack		: Stat_DA.FlexArray;
   yyStateStackSize	: Integer;
   yyStartState		: yyStateRange;
   yyPreviousStart	: yyStateRange;

   yyIsFirstCall	: Boolean;
   yySourceFile		: Integer;
   yyEof		: Boolean;
   yyChBufferPtr	: Char_DA.FlexArray;
   yyChBufferStart	: Integer;
   yyChBufferSize	: Integer;
   yyChBufferIndex	: Integer;
   yyBytesRead		: Integer;
   yyFileOffset		: Integer;
   yyLineCount		: Integer;
   yyLineStart		: Integer;

   yyFileStackPtr	: Integer;
   yyFileStack		: yytFileStack;

procedure yyInitialize	;
procedure yyStart	(State: yyStateRange);
procedure yyPrevious	;
procedure yyEcho	;
procedure yyLess	(n: Integer);
procedure yyTab		;
procedure yyTab1	(a: Integer);
procedure yyTab2	(a, b: Integer);
procedure yyEol		(Column: Integer);
procedure output	(c: Character);
procedure unput		(c: Character);
function  input		return Character;
procedure yyErrorMessage(ErrorCode: Integer);

					-- Start State Stack: StStSt

   yyStStStackSize	: Integer;
   yyStStStackPtr	: Stat_DA.FlexArray;
   yyStStStackIdx	: Integer;

procedure yyPush (yyState: yyStateRange) is
   begin
      if yyStStStackIdx = yyStStStackSize then
	 Stat_DA.ExtendArray (yyStStStackPtr, yyStStStackSize);
      end if;
      yyStStStackPtr (yyStStStackIdx) := yyStartState;
      yyStStStackIdx := yyStStStackIdx + 1;
      yyStart (yyState);
   end yyPush;

procedure yyPop is
   begin
      yyPreviousStart := yyStartState;
      if yyStStStackIdx > 0 then
	 yyStStStackIdx := yyStStStackIdx - 1;
	 yyStartState := yyStStStackPtr (yyStStStackIdx);
      else
	 yyErrorMessage (6);
      end if;
   end yyPop;

function GetToken return Integer is
   yyState		: yyStateRange;
   yyTableIndex		: yyTableRange;
   yySource, yyTarget, yyChBufferFree	: Integer;
$L local user declarations
begin
<<yyBegin>>
   yyState	:= yyStartState;
   TokenLength 	:= 0;
   TokenIndex	:= yyChBufferIndex;
$J if yyChBufferPtr (yyChBufferIndex - 1) = yyEolCh then yyState := yyState + 1; end if;

   -- ASSERT yyChBuffer (yyChBufferIndex) = first character

<<yyContinue>>			-- continue after sentinel or skipping blanks
   loop				-- execute as many state transitions as possible
					  	-- determine next state
      yyTableIndex := yyBase (yyState) + Character'pos (yyChBufferPtr (yyChBufferIndex));
      if yyComb (yyTableIndex).Check /= yyState then
	 yyState := yyDefault (yyState);
	 if yyState = yyDNoState then exit; end if;
      else
	 yyState := yyComb (yyTableIndex).Next;
	 TokenLength := TokenLength + 1;
	 yyStateStack (TokenLength) := yyState;		-- push state
	 yyChBufferIndex := yyChBufferIndex + 1;	-- get next character
      end if;
   end loop;

   loop						-- search for last final state
$A case header and user actions			-- case yyStateStack (TokenLength) is
$N non final states
      -- non final states
	    yyChBufferIndex := yyChBufferIndex - 1;	-- return character
	    TokenLength := TokenLength - 1;		-- pop state

$P    when yyDefaultState	=>
	    yyChBufferIndex := yyChBufferIndex + 1;
	    TokenLength := 1;
	    yySetPosition
$D[ default action
	    Text_Io.Put (Text_Io.Standard_Output, yyChBufferPtr (yyChBufferIndex-1));
$]
	    goto yyBegin;

      when yyDNoState	=>
	    goto yyBegin;

$O    when yyEobState	=>			-- end of buffer sentinel found
	    yyChBufferIndex := yyChBufferIndex - 1;	-- undo last state transition
	    TokenLength := TokenLength - 1;		-- get previous state
	    if TokenLength = 0 then
	       yyState := yyStartState;
$J	       if yyChBufferPtr (yyChBufferIndex - 1) = yyEolCh then yyState := yyState + 1; end if;
	    else
	       yyState := yyStateStack (TokenLength);
	    end if;

	    if yyChBufferIndex /= yyChBufferStart + yyBytesRead then
	       yyState := yyEobTrans (yyState);	-- end of buffer sentinel in buffer
	       if yyState /= yyDNoState then
		  yyChBufferIndex := yyChBufferIndex + 1;
		  TokenLength := TokenLength + 1;
		  yyStateStack (TokenLength) := yyState;
		  goto yyContinue;
	       end if;
	    else				-- end of buffer reached
	       if not yyEof then
		  -- copy initial part of token in front of input buffer
		  yySource := yyChBufferIndex - TokenLength - 1;
		  yyTarget := General.MaxAlign - TokenLength mod General.MaxAlign - 1;
		  if yySource > yyTarget then
		     yyChBufferPtr (yyTarget .. yyTarget + TokenLength) :=
		     yyChBufferPtr (yySource .. yySource + TokenLength);
		     yyLineStart := yyLineStart - (yySource - yyTarget);
		     TokenIndex := TokenIndex - (yySource - yyTarget);
		     yyChBufferStart := yyTarget + TokenLength + 1;
		  else
		     yyChBufferStart := yyChBufferIndex;
		  end if;
					  	-- extend buffer if necessary
		  yyChBufferFree := General.Exp2 (General.Log2 (yyChBufferSize - 4 - General.MaxAlign - TokenLength));
		  if yyChBufferFree < yyChBufferSize / 8 then
		     Char_DA.ExtendArray (yyChBufferPtr, yyChBufferSize);
		     yyChBufferFree := General.Exp2 (General.Log2 (yyChBufferSize - 4 - General.MaxAlign - TokenLength));
		     if yyStateStackSize < yyChBufferSize then
			Stat_DA.ExtendArray (yyStateStack, yyStateStackSize);
		     end if;
		  end if;
					  	-- read buffer and restart
		  yyChBufferIndex := yyChBufferStart;
		  yyFileOffset := yyFileOffset + yyBytesRead;
$@ 		  $Source.GetLine (yySourceFile, String (yyChBufferPtr (yyChBufferIndex .. yyChBufferSize - 1)), yyChBufferFree, yyBytesRead);
		  if yyBytesRead <= 0 then yyBytesRead := 0; yyEof := True; end if;
		  yyChBufferPtr (yyChBufferStart + yyBytesRead    ) := yyEobCh;
		  yyChBufferPtr (yyChBufferStart + yyBytesRead + 1) := Character'Val (0);
		  goto yyContinue;
	       end if;

	       if TokenLength = 0 then		-- end of file reached
		  yySetPosition
		  CloseFile;
		  if yyFileStackPtr = 0 then
$E eof action
		     null;
		  end if;
		  if yyFileStackPtr = 0 then return EofToken; end if;
		  goto yyBegin;
	       end if;
	    end if;
      when others =>
	 yyErrorMessage (0);
      end case;
   end loop;
exception
   when Storage_Error => yyErrorMessage (1); return 0;
end GetToken;

procedure BeginFile (FileName: String) is
   begin
      if yyIsFirstCall and (yyBytesRead = 0) then
	 yyFileStackPtr	:= 0;
	 yyIsFirstCall	:= False;
      end if;
      yyInitialize;
      if FileName = "" then
	 yySourceFile	:= 0;			-- Text_Io.Standard_Input;
      else
$@       yySourceFile	:= $Source.BeginSource (FileName);
      end if;
      if yySourceFile < 0 then yyErrorMessage (5); end if;
   end BeginFile;

procedure yyInitialize is
   begin
      if yyFileStackPtr >= yyFileStackSize then yyErrorMessage (3); end if;
      yyFileStackPtr := yyFileStackPtr + 1;	-- push file
      yyFileStack (yyFileStackPtr) := (
	 SourceFile	=> yySourceFile		,
	 Eof		=> yyEof		,
	 ChBufferPtr	=> yyChBufferPtr	,
	 ChBufferStart	=> yyChBufferStart	,
	 ChBufferSize	=> yyChBufferSize	,
	 ChBufferIndex	=> yyChBufferIndex	,
	 BytesRead	=> yyBytesRead		,
	 FileOffset	=> yyFileOffset		,
	 LineCount	=> yyLineCount		,
	 LineStart	=> yyLineStart
      );
						-- initialize file state
      yyChBufferSize	:= yyInitBufferSize;
      Char_DA.MakeArray (yyChBufferPtr, yyChBufferSize);
      yyChBufferStart	:= General.MaxAlign;
      yyChBufferPtr (yyChBufferStart - 1) := yyEolCh; -- begin of line indicator
      yyChBufferPtr (yyChBufferStart    ) := yyEobCh; -- end of buffer sentinel
      yyChBufferPtr (yyChBufferStart + 1) := Character'Val (0);
      yyChBufferIndex	:= yyChBufferStart;
      yyEof		:= False;
      yyBytesRead	:= 0;
      yyFileOffset	:= 0;
      yyLineCount	:= 1;
      yyLineStart	:= yyChBufferStart - 1;
   exception
      when Storage_Error => yyErrorMessage (1);
   end yyInitialize;

procedure CloseFile is
   begin
      if yyFileStackPtr = 0 then yyErrorMessage (4); end if;
$@       $Source.CloseSource (yySourceFile);
      Char_DA.ReleaseArray (yyChBufferPtr, yyChBufferSize);
						-- pop file
      yySourceFile	:= yyFileStack (yyFileStackPtr).SourceFile	;
      yyEof		:= yyFileStack (yyFileStackPtr).Eof		;
      yyChBufferPtr	:= yyFileStack (yyFileStackPtr).ChBufferPtr	;
      yyChBufferStart 	:= yyFileStack (yyFileStackPtr).ChBufferStart	;
      yyChBufferSize	:= yyFileStack (yyFileStackPtr).ChBufferSize	;
      yyChBufferIndex 	:= yyFileStack (yyFileStackPtr).ChBufferIndex	;
      yyBytesRead	:= yyFileStack (yyFileStackPtr).BytesRead	;
      yyFileOffset	:= yyFileStack (yyFileStackPtr).FileOffset	;
      yyLineCount	:= yyFileStack (yyFileStackPtr).LineCount	;
      yyLineStart	:= yyFileStack (yyFileStackPtr).LineStart	;
      yyFileStackPtr	:= yyFileStackPtr - 1;		
      yyIsFirstCall	:= False;
   end CloseFile;

procedure GetWord (Word: out Strings.tString) is
      WordStart	: constant Integer := yyChBufferIndex - TokenLength - 1;
   begin
      if TokenLength > 0 then
	 Strings.To_tString (String (yyChBufferPtr (WordStart + 1 .. WordStart + TokenLength)), Word);
      else
	 Word := Strings.NoString;
      end if;
   end GetWord;

procedure GetLower (Word: out Strings.tString) is
      WordStart	: constant Integer := yyChBufferIndex - TokenLength - 1;
      s		: String (1 .. 1024);
   begin
      for i in 1 .. TokenLength loop
	 s (i) := yyToLower (yyChBufferPtr (WordStart + i));
      end loop;
      Strings.To_tString (s (1 .. TokenLength), Word);
   end GetLower;

procedure GetUpper (Word: out Strings.tString) is
      WordStart	: constant Integer := yyChBufferIndex - TokenLength - 1;
      s		: String (1 .. 1024);
   begin
      for i in 1 .. TokenLength loop
	 s (i) := yyToUpper (yyChBufferPtr (WordStart + i));
      end loop;
      Strings.To_tString (s (1 .. TokenLength), Word);
   end GetUpper;

procedure yyStart (State: yyStateRange) is
   begin
      yyPreviousStart	:= yyStartState;
      yyStartState	:= State;
   end yyStart;

procedure yyPrevious is
      s	: yyStateRange	:= yyStartState;
   begin
      yyStartState	:= yyPreviousStart;
      yyPreviousStart	:= s;
   end yyPrevious;

procedure yyEcho is
   begin
      for i in yyChBufferIndex - TokenLength .. yyChBufferIndex - 1 loop
	 Text_Io.Put (Text_Io.Standard_Output, yyChBufferPtr (i));
      end loop;
   end yyEcho;

procedure yyLess (n: Integer) is
   begin
      yyChBufferIndex := yyChBufferIndex - (TokenLength - n);
      TokenLength := n;
   end yyLess;

procedure yyTab is
   begin
      yyLineStart := yyLineStart - (yyTabSpace - 1 - (yyChBufferIndex - yyLineStart - 2) mod yyTabSpace);
   end yyTab;

procedure yyTab1 (a: Integer) is
   begin
      yyLineStart := yyLineStart - (yyTabSpace - 1 - (yyChBufferIndex - yyLineStart - TokenLength + a - 1) mod yyTabSpace);
   end yyTab1;

procedure yyTab2 (a, b: Integer) is
   begin
      yyLineStart := yyLineStart - (yyTabSpace - 1 - (yyChBufferIndex - yyLineStart - TokenLength + a - 1) mod yyTabSpace);
   end yyTab2;

procedure yyEol (Column: Integer) is
   begin
      yyLineCount := yyLineCount + 1;
      yyLineStart := yyChBufferIndex - 1 - Column;
   end yyEol;

procedure output (c: Character) is
   begin
      Text_Io.Put (Text_Io.Standard_Output, c);
   end output;

procedure unput (c: Character) is
   begin
      yyChBufferIndex := yyChBufferIndex - 1;
      yyChBufferPtr (yyChBufferIndex) := c;
   end unput;

function input return Character is
   begin
      if yyChBufferIndex = yyChBufferStart + yyBytesRead then
	 if not yyEof then
	    yyLineStart := yyLineStart - yyBytesRead;
	    yyChBufferIndex := 0;
	    yyChBufferStart := 0;
	    yyFileOffset := yyFileOffset + yyBytesRead;
$@ 	    $Source.GetLine (yySourceFile, String (yyChBufferPtr (0 .. yyChBufferSize - 1)), General.Exp2 (General.Log2 (yyChBufferSize)), yyBytesRead);
	    if yyBytesRead <= 0 then yyBytesRead := 0; yyEof := True; end if;
	    yyChBufferPtr (yyBytesRead    ) := yyEobCh;
	    yyChBufferPtr (yyBytesRead + 1) := Character'Val (0);
	 end if;
      end if;
      if yyChBufferIndex = yyChBufferStart + yyBytesRead then
	 return Character'Val (0);
      else
	 yyChBufferIndex := yyChBufferIndex + 1;
	 return yyChBufferPtr (yyChBufferIndex - 1);
      end if;
   end input;

procedure BeginScanner is
   begin
      null;
$I user initialization code
   end BeginScanner;

procedure CloseScanner is
   begin
      null;
$F user finalization code
   end CloseScanner;

procedure yyErrorMessage (ErrorCode: Integer) is
   begin
      Position.WritePosition (Text_Io.Standard_Error, Attribute.Position);
      case ErrorCode is
$@       when 0 => Text_Io.Put (Text_Io.Standard_Error, ": @: internal error");
$@       when 1 => Text_Io.Put (Text_Io.Standard_Error, ": @: out of memory");
		Text_Io.New_Line (Text_Io.Standard_Error); raise Storage_Error;
$@       when 3 => Text_Io.Put (Text_Io.Standard_Error, ": @: too many nested include files");
$@       when 4 => Text_Io.Put (Text_Io.Standard_Error, ": @: file stack underflow (too many calls of CloseFile)");
$@       when 5 => Text_Io.Put (Text_Io.Standard_Error, ": @: cannot open input file");
$@       when 6 => Text_Io.Put (Text_Io.Standard_Error, ": @: start stack underflow (too many calls of yyPop)");
      when others => null;
      end case;
      Text_Io.New_Line (Text_Io.Standard_Error); raise Program_Error;
   end yyErrorMessage;

begin
   yyIsFirstCall	:= True;
   yyFileStackPtr	:= 0;
   yyInitialize;
   yySourceFile		:= 0;			-- Text_Io.Standard_Input;
   yyStartState		:= STD;
   yyPreviousStart	:= STD;
   yyStateStackSize	:= yyInitBufferSize;
   Stat_DA.MakeArray (yyStateStack, yyStateStackSize);
   yyStateStack (0)	:= yyDefaultState;	-- stack underflow sentinel
   yyStStStackSize	:= yyInitStStStackSize;
   Stat_DA.MakeArray (yyStStStackPtr, yyStStStackSize);
   yyStStStackIdx	:= 0;
$@ end @;
