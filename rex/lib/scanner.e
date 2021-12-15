-- $Id: scanner.e,v 2.2 2000/09/04 11:17:27 grosch rel $

$@ class @

creation BeginScanner

feature

BeginScanner is
   do
      !! stdout.make_write_from_fp (stdout.stdout_fp)
      !! stderr.make_write_from_fp (stderr.stderr_fp)
      yyFileStackPtr	:= 0
      yyFileStackSize	:= yyInitFileStackSize
      !! yyFileStack.make (0, yyFileStackSize)
      yyIsFirstCall	:= TRUE
      !! yyBuffer.BeginBuffer (void)
      yyPushFile
      !! yyBuffer.BeginBuffer (void)
      yyChBuffer	:= yyBuffer.ChBuffer
      yyChBufferIndex	:= yyBuffer.ChBufferIndex
      yyLineCount	:= yyBuffer.LineCount
      yyLineStart	:= yyBuffer.LineStart
      yyStartState	:= STD
      yyPreviousStart	:= STD
      yyStateStackSize	:= yyBuffer.ChBufferSize
      !! yyStateStack.make (0, yyStateStackSize)
      yyStateStack.put (yyDefaultState, 0)
      yyStStStackPtr	:= 0
      yyStStStackSize	:= yyInitStStStackSize
      !! yyStStStack.make (0, yyStStStackSize)
$@       yyTableFileName	:= "@.txt"
      yyInitTables
      !! yyScanAttribute.make

$I user begin statements
   end

CloseScanner is
   do
$F user finalization code
   end

$- user import declarations
$X user export declarations
$G[ user global declarations
ErrorAttribute (Token: INTEGER): ScanAttribute is
   do
      Result := Attribute;
   end;
$]

# ifndef yySetPosition
# define yySetPosition \
yyScanAttribute.Position.Set (yyLineCount, yyChBufferIndex - yyLineStart - TokenLength);
# endif

   EofToken		: INTEGER is 0
   TokenLength		: INTEGER
   Attribute		: ScanAttribute

feature {none}

   yyTabSpace		: INTEGER is 8
   yyDNoState		: INTEGER is 0
   yyTableFileName	: STRING

$C constant declarations

   yyScanAttribute	: ScanAttribute

   yyBase		: ARRAY [INTEGER]	-- SIMPLE_ARRAY
   yyDefault		: ARRAY [INTEGER]	-- SIMPLE_ARRAY
   yyCheck		: ARRAY [INTEGER]	-- SIMPLE_ARRAY
   yyNext		: ARRAY [INTEGER]	-- SIMPLE_ARRAY
   yyEobTrans		: ARRAY [INTEGER]	-- SIMPLE_ARRAY
$M    yyAction		: ARRAY [INTEGER]	-- SIMPLE_ARRAY

   yyStateStack		: ARRAY [INTEGER]
   yyStateStackSize	: INTEGER
   yyStartState		: INTEGER
   yyPreviousStart	: INTEGER

   System		: rSYSTEM
   stdout		: rFILE
   stderr		: rFILE
$@    yyBuffer		: $Buffer
   yyChBuffer		: STRING	-- local copies of attributes of yyBuffer
   yyChBufferIndex	: INTEGER
   yyLineCount		: INTEGER
   yyLineStart		: INTEGER

   yyInitFileStackSize	: INTEGER is 16
   yyFileStackSize	: INTEGER
   yyFileStackPtr	: INTEGER
$@    yyFileStack		: ARRAY [$Buffer]
   yyIsFirstCall	: BOOLEAN

   yyInitStStStackSize	: INTEGER is 16
   yyStStStackSize	: INTEGER
   yyStStStackPtr	: INTEGER
   yyStStStack		: ARRAY [INTEGER]

yyPush (yyState: INTEGER) is
   do
      if yyStStStackPtr = yyStStStackSize then
	 yyStStStackSize := yyStStStackSize * 2
	 yyStStStack.resize (0, yyStStStackSize)
      end
      yyStStStackPtr := yyStStStackPtr + 1
      yyStStStack.put (yyStartState, yyStStStackPtr)
      yyStart (yyState)
   end

yyPop is
   do
      yyPreviousStart := yyStartState
      if yyStStStackPtr = 0 then
	 yyErrorMessage (6)
      else
	 yyStartState := yyStStStack.item (yyStStStackPtr)
	 yyStStStackPtr := yyStStStackPtr - 1
      end
   end

feature

SetAttribute (yyValue: ScanAttribute) is do Attribute := yyValue end

GetToken: INTEGER is			-- consume characters and return next token
   local
      yyState		: INTEGER
      yyIndex		: INTEGER
      yyRestart		,
      yyfinish_L1	,
      yyfinish_L4	: BOOLEAN

$L user local declarations
   do
      from Result := -1
      until Result >= 0 loop
	 if not yyRestart then			-- eventually restart after sentinel
	    yyState	:= yyStartState
	    TokenLength	:= 0
$J 	    if yyChBuffer.item (yyChBufferIndex - 1) = yyEolCh then yyState := yyState + 1 end
	 else
	    yyRestart	:= FALSE
	 end

	 -- ASSERT yyChBuffer [yyChBufferIndex] = first character

	 from until yyState = yyDNoState loop
							-- determine next state
	    yyIndex := yyBase.item (yyState) + yyChBuffer.item (yyChBufferIndex).to_integer
	 -- yyIndex := yyBase.item (yyState) + yyChBuffer.item_code (yyChBufferIndex)
	 -- this would be better
	    if yyCheck.item (yyIndex) /= yyState then
	       yyState := yyDefault.item (yyState)
	    else
	       yyState := yyNext.item (yyIndex)
	       TokenLength := TokenLength + 1
	       yyStateStack.put (yyState, TokenLength)	-- push state
	       yyChBufferIndex := yyChBufferIndex + 1	-- get next character
	    end
	 end

	 Attribute := yyScanAttribute
	 from yyfinish_L4 := FALSE			-- search for last final state
	 until yyfinish_L4 loop

$A case header and user actions		-- inspect yyStateStack.item (TokenLength)
$N non final states
							-- non final states
	    yyChBufferIndex := yyChBufferIndex - 1	-- return character
	    TokenLength := TokenLength - 1		-- pop state

$P	 when yyDefaultState then
	    yyScanAttribute.Position.Set (yyLineCount, yyChBufferIndex - yyLineStart)
	    yyChBufferIndex := yyChBufferIndex + 1
	    TokenLength := 1
$D[ default action
            stdout.putchar (yyChBuffer.item (yyChBufferIndex - 1));
$]
	    yyfinish_L4 := TRUE				-- EXIT

	 when yyDNoState then
	    yyfinish_L4 := TRUE				-- EXIT

$O 	 when yyEobState then				-- end of buffer sentinel found
	    yyChBufferIndex := yyChBufferIndex - 1	-- undo last state transition
	    TokenLength := TokenLength - 1		-- get previous state
	    if TokenLength = 0 then
	       yyState := yyStartState
$J 	       if yyChBuffer.item (yyChBufferIndex - 1) = yyEolCh then yyState := yyState + 1 end
	    else
	       yyState := yyStateStack.item (TokenLength)
	    end

	    if yyChBufferIndex /= yyChBuffer.count - 1 then
	       yyState := yyEobTrans.item (yyState)	-- end of buffer sentinel in buffer
	       if yyState /= yyDNoState then
		  yyChBufferIndex := yyChBufferIndex + 1
		  TokenLength := TokenLength + 1
		  yyStateStack.put (yyState, TokenLength)
		  yyRestart := TRUE yyfinish_L4 := TRUE	-- EXIT
	       end
	    else					-- end of buffer reached
	       if not yyBuffer.Eof then
		  yyBuffer.SetChBufferIndex	(yyChBufferIndex)
		  yyBuffer.SetLineStart		(yyLineStart	)
		  yyBuffer.GetBuffer		(TokenLength	)
		  yyChBuffer		:= yyBuffer.ChBuffer
		  yyChBufferIndex	:= yyBuffer.ChBufferIndex
		  yyLineStart		:= yyBuffer.LineStart
		  if yyStateStackSize < yyBuffer.ChBufferSize then
		     yyStateStackSize := yyStateStackSize * 2
		     yyStateStack.resize (0, yyStateStackSize)
		  end
		  yyRestart := TRUE yyfinish_L4 := TRUE	-- EXIT
	       else
		  if TokenLength = 0 then		-- end of file reached
		     yyScanAttribute.Position.Set (yyLineCount, 2 - yyLineStart)
		     CloseFile
		     if yyFileStackPtr = 0 then
$E eof action
		     end
		     if yyFileStackPtr = 0 then Result := 0 end
		     yyfinish_L4 := TRUE		-- EXIT
		  end
	       end
	    end
	 else
	    yyErrorMessage (0)
	 end
	 end
      end
   end

BeginFile (yyFileName: STRING) is			-- open input file
   do
      if yyIsFirstCall and then yyBuffer.BytesRead = 0 then
	 yyFileStackPtr	:= 0
	 yyIsFirstCall	:= FALSE
      end
      yyPushFile
      !! yyBuffer.BeginBuffer (yyFileName)
      yyChBuffer	:= yyBuffer.ChBuffer
      yyChBufferIndex	:= yyBuffer.ChBufferIndex
      yyLineCount	:= yyBuffer.LineCount
      yyLineStart	:= yyBuffer.LineStart
      if yyBuffer.SourceFile.SourceFile.error then yyErrorMessage (5) end
   end

feature {none}

yyPushFile is
   do
      -- yyBuffer.SetChBuffer	(yyChBuffer	)
      yyBuffer.SetChBufferIndex	(yyChBufferIndex)
      yyBuffer.SetLineCount	(yyLineCount	)
      yyBuffer.SetLineStart	(yyLineStart	)
      if yyFileStackPtr = yyFileStackSize then
	 yyFileStackSize := yyFileStackSize * 2
	 yyFileStack.resize (0, yyFileStackSize)
      end
      yyFileStackPtr := yyFileStackPtr + 1
      yyFileStack.put (yyBuffer, yyFileStackPtr)
   end

feature

CloseFile is						-- close input file
   do
      if yyFileStackPtr = 0 then
	 yyErrorMessage (4)
      else
	 yyBuffer.CloseBuffer
	 yyBuffer	:= yyFileStack.item (yyFileStackPtr) -- pop file
	 yyFileStackPtr := yyFileStackPtr - 1
	 yyChBuffer	:= yyBuffer.ChBuffer
	 yyChBufferIndex:= yyBuffer.ChBufferIndex
	 yyLineCount	:= yyBuffer.LineCount
	 yyLineStart	:= yyBuffer.LineStart
	 yyIsFirstCall	:= FALSE
      end
   end

GetWord: STRING is
   do
      if TokenLength > 0 then
	 Result := yyChBuffer.substring (yyChBufferIndex - TokenLength, yyChBufferIndex - 1)
      else
	 Result := ""
      end
   end

GetLower: STRING is
   do
      Result := GetWord
      Result.to_lower
   end

GetUpper: STRING is
   do
      Result := GetWord
      Result.to_upper
   end

feature {none}

yyStart (yyState: INTEGER) is
   do
      yyPreviousStart	:= yyStartState
      yyStartState	:= yyState
   end

yyPrevious is
   local
      s: INTEGER
   do
      s			:= yyStartState
      yyStartState	:= yyPreviousStart
      yyPreviousStart	:= s
   end

yyEcho is
   do
      stdout.putstring (GetWord)
   end

yyLess (yyn: INTEGER) is
   require
      yyLess_n_greater_or_equal_zero: yyn >= 0
   do
      yyChBufferIndex := yyChBufferIndex + (yyn - TokenLength)
      TokenLength := yyn
   end

yyTab is
   do
      yyLineStart := yyLineStart - ((yyTabSpace - 1 - (yyChBufferIndex - yyLineStart - 2) \\ yyTabSpace))
   end

yyTab1 (yya: INTEGER) is
   do
      yyLineStart := yyLineStart - ((yyTabSpace - 1 - (yyChBufferIndex - yyLineStart - TokenLength + yya - 1) \\ yyTabSpace))
   end

yyEol (yyColumn: INTEGER) is
   require
      yyEol_Column_greater_or_equal_zero: yyColumn >= 0
   do
      yyLineCount := yyLineCount + 1
      yyLineStart := yyChBufferIndex - 1 - yyColumn
   end

output (yyc: CHARACTER) is
   do
      stdout.putchar (yyc)
   end

unput (yyc: CHARACTER) is
   do
      yyChBufferIndex := yyChBufferIndex - 1
      yyChBuffer.put (yyc, yyChBufferIndex)
   end

input: CHARACTER is
   do
      if yyChBufferIndex = yyChBuffer.count - 1 then
	 if not yyBuffer.Eof then
	    yyBuffer.SetChBufferIndex	(yyChBufferIndex)
	    yyBuffer.SetLineStart	(yyLineStart	)
	    yyBuffer.GetBuffer		(TokenLength	)
	    yyChBuffer		:= yyBuffer.ChBuffer
	    yyChBufferIndex	:= yyBuffer.ChBufferIndex
	    yyLineStart		:= yyBuffer.LineStart
	    if yyStateStackSize < yyBuffer.ChBufferSize then
	       yyStateStackSize := yyStateStackSize * 2
	       yyStateStack.resize (0, yyStateStackSize)
	    end
	 end
      end
      if yyChBufferIndex = yyChBuffer.count - 1 then
	 Result := '%/0/'
      else
	 Result := yyChBuffer.item (yyChBufferIndex)
	 yyChBufferIndex := yyChBufferIndex + 1
      end
   end

yyInitTables is
   local
      yyTableFile: rFILE
   do
      !! yyTableFile.make_read (yyTableFileName)
      if yyTableFile.error then yyErrorMessage (2) end
      yyBase		:= yyGetTable (yyTableFile, yyDStateCount, 0)
      yyDefault		:= yyGetTable (yyTableFile, yyDStateCount, 0)
      yyEobTrans	:= yyGetTable (yyTableFile, yyDStateCount, 0)
$M       yyAction		:= yyGetTable (yyTableFile, yyDStateCount, 0)
      yyCheck		:= yyGetTable (yyTableFile, yyTablesize, 0)
      yyNext		:= yyGetTable (yyTableFile, yyTablesize, 0)
      yyTableFile.close
   end

yyGetTable (yyTableFile: rFILE; yyNoOfElements, yyOffset: INTEGER): ARRAY [INTEGER] is -- SIMPLE_ARRAY
   require
      yyGetTable_file_error: not yyTableFile.error
   local
      table_size	: INTEGER
      table_index	: INTEGER
   do
      yyTableFile.readint table_size := yyTableFile.lastint
      if table_size = yyNoOfElements + 1 then
	 yyTableFile.next_line
	 !! Result.make (yyOffset, yyOffset + yyNoOfElements)
	 from table_index := yyOffset
	 until table_size + yyOffset = table_index loop
	    yyTableFile.readint Result.put (yyTableFile.lastint, table_index)
	    table_index := table_index + 1
	 end
      else
	 yyErrorMessage (2)
      end
   end

yyErrorMessage (yyErrorCode: INTEGER) is
   do
      yyScanAttribute.Position.WritePosition (stderr)
      inspect yyErrorCode
	 when 0 then stderr.putstring (": @: internal error")
-- $@ 	 when 1 then stderr.putstring (": @: out of memory")
$@ 	 when 2 then stderr.putstring (": @: table mismatch")
-- $@ 	 when 3 then stderr.putstring (": @: too many nested include files")
$@ 	 when 4 then stderr.putstring (": @: file stack underflow (too many calls of CloseFile)")
$@ 	 when 5 then stderr.putstring (": @: cannot open input file")
$@ 	 when 6 then stderr.putstring (": @: start stack underflow (too many calls of yyPop)")
      end
      stderr.new_line
      System.exit (yyErrorCode + 1)
   end

end
