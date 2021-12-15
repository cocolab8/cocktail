-- $Id: parser.e,v 1.12 2002/11/22 10:41:37 grosch rel $

$@ class @

creation make

feature

# define YYACCEPT debug yyAccept (yyStartCount) end; yyquit_loop3 := TRUE; yyquit := TRUE; Result := yyErrorCount
# define YYABORT  debug yyAbort  (yyStartCount) end; yyquit_loop3 := TRUE; yyquit := TRUE; Result := yyErrorCount + 1
# define ErrorMessages(Messages) yyControlMessages := Messages
# define SemActions(Actions)	 yyControlActions  := Actions

$-	-- IMPORT section is inserted here
$E	-- EXPORT section is inserted here
$G	-- GLOBAL section is inserted here

feature {none}

yyInitStackSize	: INTEGER is 100
# ifndef ERROR
# define ERROR
# endif
yyNoState	: INTEGER is 0
yystandard	: INTEGER is 0
yytrial		: INTEGER is 1
yybuffering	: INTEGER is 2
yyreparsing	: INTEGER is 3
# define yyS	yySynAttribute
# define yyA	yyAttributeStack

$T	-- table constants are inserted here

feature
					-- named constants for start symbols
$I	-- start symbol constants are inserted here

feature {none}
					-- named constants for nonterminals
$U	-- nonterminal  constants are inserted here

yyTBase		: ARRAY [INTEGER]	-- SIMPLE_ARRAY
yyNBase		: ARRAY [INTEGER]	-- SIMPLE_ARRAY
# ifdef YYTDefault
yyDefault	: ARRAY [INTEGER]	-- SIMPLE_ARRAY
# endif
yyTCheck	: ARRAY [INTEGER]	-- SIMPLE_ARRAY
yyTNext		: ARRAY [INTEGER]	-- SIMPLE_ARRAY
yyNComb		: ARRAY [INTEGER]	-- SIMPLE_ARRAY
yyLength	: ARRAY [INTEGER]	-- SIMPLE_ARRAY
yyLeftHandSide	: ARRAY [INTEGER]	-- SIMPLE_ARRAY
yyContinuation	: ARRAY [INTEGER]	-- SIMPLE_ARRAY
yyFinalToProd	: ARRAY [INTEGER]	-- SIMPLE_ARRAY
yyCondition	: ARRAY [INTEGER]	-- SIMPLE_ARRAY
yyStartLine	: ARRAY [INTEGER]	-- SIMPLE_ARRAY
yyModeLetter	: ARRAY [CHARACTER]	-- SIMPLE_ARRAY

yyControlMode	: INTEGER
yyControlMessages	: BOOLEAN
yyControlActions	: BOOLEAN
yyTableFileName	: STRING
yyEmptySet	: BIT yySetSize
Errors		: Errors
$@ Scanner		: $

yyDebug		: BOOLEAN
yyCount		: INTEGER

feature

yyTrace		: rFILE			-- output file for debug information

make is
   local
      i	: INTEGER
   do
$@       yyTableFileName := "@.txt"
      yyInitTables
      !! Scanner.BeginScanner
      !! Errors.make
      yyDebug := FALSE
      from i := 1 until i > yySetSize loop
	 yyEmptySet.put (FALSE, i)
	 i := i + 1
      end

      debug
	 yyCount := 0
	 !! yyTrace.make_write_from_fp (yyTrace.stdout_fp)
	 !! yyModeLetter.make (0, 3)
	 yyModeLetter.put ('S', 0)
	 yyModeLetter.put ('T', 1)
	 yyModeLetter.put ('B', 2)
	 yyModeLetter.put ('R', 3)
      end
# if defined YYTrialParse | defined YYReParse | defined YYGetLook
      yyBufferClear := TRUE
# endif

      !! yyStartLine.make (1, yyLastStopState - yyLastReadReduceState)
$J	-- yyStartLine is initialized here
   end

SetDebug (value: BOOLEAN) is
   do
      yyDebug := value
   end

TokenName (index: INTEGER): STRING is
   do
      inspect index
$W	-- token names are inserted here
      else
	 Result := "_unknown_"
      end
    end

feature {none}

yyRule (index: INTEGER): STRING is
   do
      debug
	 inspect index
$S	-- rules are inserted here
	 else
	    Result := ""
	 end
      end
   end

# if defined YYTrialParse | defined YYReParse | defined YYGetLook

yyInitBufferSize	: INTEGER is 100

# ifndef TOKENOP
# define TOKENOP
# endif
# ifndef BEFORE_TRIAL
# define BEFORE_TRIAL
# endif
# ifndef AFTER_TRIAL
# define AFTER_TRIAL
# endif

yyTokenBuffer		: ARRAY [INTEGER]
yyAttrBuffer		: ARRAY [ScanAttribute]
# ifdef YYMemoParse
yyStartBuffer		: ARRAY [INTEGER]
# endif
yyBufferSize		: INTEGER
yyBufferNext		: INTEGER
yyBufferLast		: INTEGER
yyBufferClear		: BOOLEAN
yyParseLevel		: INTEGER

yyBufferSet (yyToken: INTEGER) is
   do
      if yyBufferNext = yyBufferLast then
	 if yyBufferClear then yyBufferLast := 0 end
	 yyBufferLast := yyBufferLast + 1
	 if yyBufferLast >= yyBufferSize then
	    yyBufferSize := yyBufferSize * 2
	    yyTokenBuffer.resize (0, yyBufferSize)
	    yyAttrBuffer.resize (0, yyBufferSize)
# ifdef YYMemoParse
	    yyStartBuffer.resize (0, yyBufferSize)
# endif
	    debug
	       if yyDebug then
		  yyPrintState (0)
		  yyTrace.putstring ("extend  token buffer from ")
		  yyTrace.putint (yyBufferSize // 2)
		  yyTrace.putstring (" to ")
		  yyTrace.putint (yyBufferSize)
		  yyNl
	       end
	    end
	 end
	 yyTokenBuffer.put (yyToken, yyBufferLast)
	 yyAttrBuffer.put (deep_clone (Scanner.Attribute), yyBufferLast)
# ifdef YYMemoParse
	 yyStartBuffer.put (0, yyBufferLast)
# endif
	 yyBufferNext := yyBufferLast
      end
   end

yyGetToken: INTEGER is
   do
      if yyBufferNext < yyBufferLast then
	 yyBufferNext := yyBufferNext + 1
	 Result := yyTokenBuffer.item (yyBufferNext)
	 Scanner.SetAttribute (yyAttrBuffer.item (yyBufferNext))
      else
	 Result := Scanner.GetToken
	 if yyControlMode = yytrial or yyControlMode = yybuffering then
	    yyBufferLast := yyBufferLast + 1
	    if yyBufferLast >= yyBufferSize then
	       yyBufferSize := yyBufferSize * 2
	       yyTokenBuffer.resize (0, yyBufferSize)
	       yyAttrBuffer.resize (0, yyBufferSize)
# ifdef YYMemoParse
	       yyStartBuffer.resize (0, yyBufferSize)
# endif
	       debug
		  if yyDebug then
		     yyPrintState (0)
		     yyTrace.putstring ("extend  token buffer from ")
		     yyTrace.putint (yyBufferSize // 2)
		     yyTrace.putstring (" to ")
		     yyTrace.putint (yyBufferSize)
		     yyNl
		  end
	       end
	    end
	    yyTokenBuffer.put (Result, yyBufferLast)
	    yyAttrBuffer.put (deep_clone (Scanner.Attribute), yyBufferLast)
# ifdef YYMemoParse
	    yyStartBuffer.put (0, yyBufferLast)
# endif
	    yyBufferNext := yyBufferLast
	 end
      end
      TOKENOP
   end

# else
# define yyGetToken Scanner.GetToken
# endif

# ifdef YYGetLook

# define GetLookahead(k)	yyGetLookahead ((k) - 1, yyTerminal)
# define GetAttribute(k)	yyGetAttribute ((k) - 1, yyTerminal)

yyGetLookahead (yyk, yyTerminal: INTEGER): INTEGER is
   local
      yyquit	: BOOLEAN
   do
      if yyk = 0 then
	 Result := yyTerminal
      else
	 if yyControlMode = yystandard then yyBufferSet (yyTerminal) end
	 from yyquit := FALSE
	 until yyBufferNext + yyk <= yyBufferLast or yyquit loop
	    if yyBufferNext < yyBufferLast and
	       yyTokenBuffer.item (yyBufferLast) = Scanner.EofToken then
	       Result := Scanner.EofToken
	       yyquit := TRUE
	    else
	       yyBufferLast := yyBufferLast + 1
	       if yyBufferLast >= yyBufferSize then
		  yyBufferSize := yyBufferSize * 2
		  yyTokenBuffer.resize (0, yyBufferSize)
		  yyAttrBuffer.resize (0, yyBufferSize)
# ifdef YYMemoParse
		  yyStartBuffer.resize (0, yyBufferSize)
# endif
		  debug
		     if yyDebug then
			yyPrintState (0)
			yyTrace.putstring ("extend  token buffer from ")
			yyTrace.putint (yyBufferSize // 2)
			yyTrace.putstring (" to ")
			yyTrace.putint (yyBufferSize)
			yyNl
		     end
		  end
	       end
	       yyTokenBuffer.put (Scanner.GetToken, yyBufferLast)
	       yyAttrBuffer.put (deep_clone (Scanner.Attribute), yyBufferLast)
# ifdef YYMemoParse
	       yyStartBuffer.put (0, yyBufferLast)
# endif
	    end
	 end
	 Scanner.SetAttribute (yyAttrBuffer.item (yyBufferNext))
	 Result := yyTokenBuffer.item (yyBufferNext + yyk)
      end
   end

yyGetAttribute (yyk, yyTerminal: INTEGER): ScanAttribute is
   local
      x	: INTEGER
   do
      if yyk = 0 then
	 Result := Scanner.Attribute
      else
	 x := yyGetLookahead (yyk, yyTerminal)
	 if yyBufferNext + yyk < yyBufferLast then
	    Result := yyAttrBuffer.item (yyBufferNext + yyk)
	 else
	    Result := yyAttrBuffer.item (yyBufferLast)
	 end
      end
   end

# endif

# ifdef YYReParse

# define BufferOn(Actions, Messages) yyBufferOn (Actions, Messages, yyTerminal)
# define BufferPosition	yyBufferNext

yyPrevControlMode	: INTEGER
yyPrevControlMessages	: BOOLEAN
yyPrevControlActions	: BOOLEAN

yyBufferOn (yyActions, yyMessages: BOOLEAN; yyToken: INTEGER): INTEGER is
   do
      if yyControlMode = yystandard then
	 yyPrevControlMode	:= yyControlMode
	 yyPrevControlMessages	:= yyControlMessages
	 yyPrevControlActions	:= yyControlActions
	 yyControlMode		:= yybuffering
	 yyControlActions	:= yyActions
	 yyControlMessages	:= yyMessages
	 yyBufferSet (yyToken)
	 yyBufferClear		:= FALSE
      end
      Result := yyBufferNext
   end

BufferOff: INTEGER is
   do
      if yyControlMode = yybuffering then
	 yyControlMode		:= yyPrevControlMode
	 yyControlMessages	:= yyPrevControlMessages
	 yyControlActions	:= yyPrevControlActions
      end
      Result := yyBufferNext
   end

BufferClear is
   do
      yyBufferClear := TRUE
   end

# endif

yyNl is do yyTrace.new_line; yyTrace.flush end

yyPrintState (yyState: INTEGER) is
   local
      i		: INTEGER
   do
      debug
	 yyCount := yyCount + 1
	 yyTrace.putint2 (yyCount, 4)
	 yyTrace.putchar (':')
	 Scanner.Attribute.Position.WritePosition (yyTrace)
	 yyTrace.putchar (':')
	 yyTrace.putint2 (yyState, 5)
	 yyTrace.putstring ("  ")
	 yyTrace.putchar (yyModeLetter.item (yyControlMode))
	 yyTrace.putstring ("  ")
# if defined YYTrialParse | defined YYReParse
	 if yyParseLevel > 0 then
	    yyTrace.putint2 (yyParseLevel, 2)
	    from i := 0 until i > yyParseLevel loop yyTrace.putstring ("  "); i := i + 1 end
	 else
	    yyTrace.putstring ("    ")
	 end
# else
	 yyTrace.putstring ("    ")
# endif
      end
   end

yyStackPtr		: INTEGER
yyStateStackSize	: INTEGER
yyAttrStackSize		: INTEGER
yyShortStackSize	: INTEGER
yyStateStack		: ARRAY [INTEGER]
yyAttributeStack	: ARRAY [Attribute]

yyRead (yyPrevTerminal, yyTerminal: INTEGER) is
   do
      debug
	 if yyDebug then
	    yyPrintState (yyStateStack.item (yyStackPtr - 1))
	    yyTrace.putstring ("shift   ")
	    yyTrace.putstring (TokenName (yyPrevTerminal))
	    yyTrace.putstring (", lookahead: ")
	    yyTrace.putstring (TokenName (yyTerminal))
	    yyNl
	 end
      end
   end

yyReduce (yyState: INTEGER) is
   do
      debug
	 if yyDebug then
	    yyPrintState (yyStateStack.item (yyStackPtr))
	    yyTrace.putstring ("reduce  ")
	    yyTrace.putstring (yyRule (yyState - yyLastReadReduceState))
	    yyNl
	 end
      end
   end

yyAccept (yyStartCount: INTEGER) is
   do
      debug
	 if yyDebug then
	    yyPrintState (yyStateStack.item (yyStackPtr))
	    yyTrace.putstring ("accept  parse started at ")
	    yyTrace.putint (yyStartCount)
	    yyNl
	 end
      end
   end

yyAbort (yyStartCount: INTEGER) is
   do
      debug
	 if yyDebug then
	    yyPrintState (yyStateStack.item (yyStackPtr))
	    yyTrace.putstring ("fail    parse started at ")
	    yyTrace.putint (yyStartCount)
	    yyNl
	 end
      end
   end

# ifdef YYDEBUG

yyPrintResult (yyLine: INTEGER; yypCondition: BOOLEAN): BOOLEAN is
   do
      debug
	 if yyDebug then
	    yyPrintState (yyStateStack.item (yyStackPtr))
	    yyTrace.putstring ("check   predicate in line ")
	    yyTrace.putint (yyLine)
	    yyTrace.putstring (", result = ")
	    yyTrace.putbool (yypCondition)
	    yyNl
	 end
      end
      Result := yypCondition
   end

yyPrintStack is
   local
      i	: INTEGER
   do
      yyTrace.putstring ("Stack%N")
      from i := 0 until i > yyStackPtr loop
	 yyTrace.putint2 (i, 3)
	 yyTrace.putint2 (yyStateStack.item (i), 5)
	 yyNl
	 i := i + 1
      end
   end

yyPrintBuffer is
   local
      i	: INTEGER
   do
      yyTrace.putstring ("Buffer%N")
      from i := yyBufferNext + 1 until i > yyBufferLast loop
	 yyTrace.putint2 (i, 3)
	 yyTrace.putint2 (yyTokenBuffer.item (i), 5)
	 yyAttrBuffer.item (i).Position.WritePosition (yyTrace)
	 yyNl
	 i := i + 1
      end
   end

# else
# define yyPrintResult(yyLine, yypCondition) yypCondition
# endif

feature

Parser: INTEGER is
   do
      Result := Parser2 (yyStartState)
   end

Parser2 (yyStartSymbol: INTEGER): INTEGER is
   do
      yyStateStackSize	:= yyInitStackSize
      yyAttrStackSize	:= yyInitStackSize
      !! yyStateStack.make (0, yyStateStackSize)
      !! yyAttributeStack.make (0, yyAttrStackSize)
      yyShortStackSize	:= yyStateStackSize - 1
      yyStackPtr	:= 0
# if defined YYTrialParse | defined YYReParse
      yyBufferSize	:= yyInitBufferSize
      !! yyTokenBuffer.make (0, yyBufferSize)
      !! yyAttrBuffer.make (0, yyBufferSize)
# ifdef YYMemoParse
      !! yyStartBuffer.make (0, yyBufferSize)
# endif
      yyBufferNext	:= 1
      yyBufferLast	:= 1
      yyParseLevel	:= 0
# endif

      debug
	 if yyDebug then
	    yyTrace.putstring ("  # |Position|State|Mod|Lev|Action |Terminal and Lookahead or Rule%N%N")
	 end
      end

      yyControlMode	:= yystandard
      yyControlActions	:= TRUE
      yyControlMessages	:= TRUE
      Result := yyParse (yyStartSymbol, yyGetToken, yyStartLine.item (yyStartSymbol))
   end

feature {none}

# ifdef YYTrialParse

# ifdef YYMemoParse
# define MemoryClear(Position) yyStartBuffer.put (0, Position)
# endif

yyTrialParse (yyStartSymbol, yyToken, yyLine: INTEGER): INTEGER is
   local
      yyPrevStackPtr		: INTEGER
      yyPrevBufferNext		: INTEGER
      yylPrevControlMode	: INTEGER
      yylPrevControlMessages	: BOOLEAN
      yylPrevControlActions	: BOOLEAN
   do
      BEFORE_TRIAL
# ifdef YYMemoParse
	  if yyStartBuffer.item (yyBufferNext) =   yyStartSymbol then Result := 0
      elseif yyStartBuffer.item (yyBufferNext) = - yyStartSymbol then Result := 1 else
# endif
      yylPrevControlMode	:= yyControlMode
      yylPrevControlMessages	:= yyControlMessages
      yylPrevControlActions	:= yyControlActions
      yyPrevStackPtr		:= yyStackPtr
      yyStackPtr		:= yyStackPtr + 1
      yyParseLevel		:= yyParseLevel + 1
      if yyControlMode = yystandard then yyBufferSet (yyToken) end
      yyPrevBufferNext		:= yyBufferNext
      yyControlMode		:= yytrial
      yyControlActions		:= FALSE
      yyControlMessages		:= FALSE
      Result			:= yyParse (yyStartSymbol, yyToken, yyLine)
# ifdef YYMemoParse
      if Result = 0 then
	 yyStartBuffer.put (  yyStartSymbol, yyPrevBufferNext)
      else
	 yyStartBuffer.put (- yyStartSymbol, yyPrevBufferNext)
      end
# endif
      yyStackPtr		:= yyPrevStackPtr
      yyBufferNext		:= yyPrevBufferNext
      yyControlMode		:= yylPrevControlMode
      yyControlMessages		:= yylPrevControlMessages
      yyControlActions		:= yylPrevControlActions
      yyParseLevel		:= yyParseLevel - 1
      Scanner.SetAttribute (yyAttrBuffer.item (yyBufferNext))
# ifdef YYMemoParse
      end
# endif
      AFTER_TRIAL
   end

# endif

# ifdef YYReParse

ReParse (yyStartSymbol, yyFrom, yyTo: INTEGER; yyActions, yyMessages: BOOLEAN): INTEGER is
   local
      yyPrevStackPtr		: INTEGER
      yyPrevBufferNext		: INTEGER
      yylPrevControlMode	: INTEGER
      yylPrevControlMessages	: BOOLEAN
      yylPrevControlActions	: BOOLEAN
      yyToToken			: INTEGER
   do
      if (1 <= yyFrom) and (yyFrom <= yyTo) and (yyTo <= yyBufferLast) then
	 yyPrevStackPtr		:= yyStackPtr
	 yyPrevBufferNext	:= yyBufferNext
	 yyToToken		:= yyTokenBuffer.item (yyTo)
	 yylPrevControlMode	:= yyControlMode
	 yylPrevControlMessages	:= yyControlMessages
	 yylPrevControlActions	:= yyControlActions
	 yyStackPtr		:= yyStackPtr + 1
	 yyParseLevel		:= yyParseLevel + 1

	 yyBufferNext		:= yyFrom - 1
	 yyTokenBuffer.put (Scanner.EofToken, yyTo)
	 yyControlMode		:= yyreparsing
	 yyControlActions	:= yyActions
	 yyControlMessages	:= yyMessages
	 Result			:= yyParse (yyStartSymbol, yyGetToken, yyStartLine.item (yyStartSymbol))
	 yyStackPtr		:= yyPrevStackPtr
	 yyBufferNext		:= yyPrevBufferNext
	 yyControlMode		:= yylPrevControlMode
	 yyControlMessages	:= yylPrevControlMessages
	 yyControlActions	:= yylPrevControlActions
	 yyParseLevel		:= yyParseLevel - 1
	 yyTokenBuffer.put (yyToToken, yyTo)
	 Scanner.SetAttribute (yyAttrBuffer.item (yyBufferNext))
      else
	 Errors.Message ("invalid call of ReParse", Errors.Error, Scanner.Attribute.Position)
	 Result			:= 1
      end
   end

# endif

yyParse (yyStartSymbol, yyToken, yyLine: INTEGER): INTEGER is
   local
      yyState		: INTEGER
      yyTerminal	: INTEGER
      yyNonterminal	: INTEGER		-- left-hand side symbol
      yySynAttribute	: Attribute		-- synthesized attribute
      yyRepairAttribute	: ScanAttribute
      yyRepairToken	: INTEGER
      yyNextState	: INTEGER
      yyIsRepairing	: BOOLEAN
      yyErrorCount	: INTEGER
      yyTCombIndex	,
      yyNCombIndex	: INTEGER
      yyquit		,
      yyquit_loop2	,
      yyquit_loop3	: BOOLEAN
      yyPrevStackPtr	: INTEGER
      yyPrevBufferNext	: INTEGER
      yyStartCount	: INTEGER
      yyPrevTerminal	: INTEGER
# ifdef YYGetLook
      yy2		: INTEGER
# endif
$L	 LOCAL section is inserted here
   do
      debug
	 if yyDebug then
	    yyPrintState (yyStartSymbol)
	    yyTrace.putstring ("parse   for predicate in line ")
	    yyTrace.putint (yyLine)
	    yyTrace.putstring (", lookahead: ")
	    yyTrace.putstring (TokenName (yyToken))
	    yyNl
	    yyStartCount	:= yyCount
	    yyPrevTerminal	:= yyToken
	 end
      end

      yyState		:= yyStartSymbol
      yyTerminal	:= yyToken
      yyErrorCount	:= 0
      yyIsRepairing	:= FALSE

      from until yyquit loop
	 if yyStackPtr >= yyShortStackSize then
	    yyStateStackSize := yyStateStackSize * 2
	    yyStateStack.resize (0, yyStateStackSize)
	    yyAttrStackSize := yyAttrStackSize * 2
	    yyAttributeStack.resize (0, yyAttrStackSize)
	    yyShortStackSize := yyStateStackSize - 1
	    debug
	       if yyDebug then
		  yyPrintState (yyState)
		  yyTrace.putstring ("extend  stack from ")
		  yyTrace.putint (yyStateStackSize // 2)
		  yyTrace.putstring (" to ")
		  yyTrace.putint (yyStateStackSize)
		  yyNl
	       end
	    end
	 end

	 yyStateStack.put (yyState, yyStackPtr)

		-- SPEC State := Next (State, yyTerminal); terminal transition
	 from yyquit_loop2 := FALSE
	 until yyquit_loop2 loop
	    yyTCombIndex := yyTBase.item (yyState) + yyTerminal
	    if yyTCheck.item (yyTCombIndex) = yyState then
	       yyState := yyTNext.item (yyTCombIndex)
	       yyquit_loop2 := TRUE			-- EXIT
	    else
# ifdef YYTDefault
	       yyState := yyDefault.item (yyState)
# else
	       yyState := yyNoState
# endif
	       if yyState = yyNoState then		-- syntax error
		  if not yyIsRepairing then		-- report and recover
# ifdef YYTrialParse
		     if yyControlMode = yytrial then
			YYABORT
			yyquit_loop2 := TRUE		-- EXIT
		     else
# endif
			ERROR
# ifndef NO_RECOVER
			yyErrorCount := yyErrorCount + 1
			yyTerminal := ErrorRecovery (yyTerminal, yyStateStack, yyStateStackSize, yyStackPtr)
			yyIsRepairing := TRUE
# else
			YYABORT
			yyquit_loop2 := TRUE		-- EXIT
# endif
# ifdef YYTrialParse
		     end
# endif
		  end
# ifndef NO_RECOVER
		  yyState := yyStateStack.item (yyStackPtr)
		  from yyquit_loop3 := FALSE
		  until yyquit_loop3 loop
		     yyNextState := Next (yyState, yyTerminal)
		     if (yyNextState /= yyNoState) and (yyNextState <= yyLastReadReduceState) then
			yyState := yyNextState		-- restart point reached
			yyIsRepairing := FALSE		-- stop error recovery
			yyquit_loop2 := TRUE
			yyquit_loop3 := TRUE
		     else
			yyRepairToken := yyContinuation.item (yyState) -- repair
			yyState := Next (yyState, yyRepairToken)
			if yyState > yyLastReduceState then	-- dynamic ?
			   yyState := yyCondition.item (yyState)
			end
			if yyState <= yyLastReadReduceState then -- read or read reduce ?
			   yyRepairAttribute := Scanner.ErrorAttribute (yyRepairToken)
			   Errors.ErrorMessageI (Errors.TokenInserted, Errors.Repair,
			      yyRepairAttribute.Position, Errors.IsString, TokenName (yyRepairToken))

			   debug
			      if yyDebug then
				 yyPrintState (yyStateStack.item (yyStackPtr))
				 yyTrace.putstring ("insert  ")
				 yyTrace.putstring (TokenName (yyRepairToken))
				 yyNl
				 yyPrintState (yyStateStack.item (yyStackPtr))
				 yyTrace.putstring ("shift   ")
				 yyTrace.putstring (TokenName (yyRepairToken))
				 yyTrace.putstring (", lookahead: ")
				 yyTrace.putstring (TokenName (yyTerminal))
				 yyNl
			      end
			   end

			   if yyState >= yyFirstReadReduceState then -- avoid second push
			      yyState := yyFinalToProd.item (yyState)
			   end

			   if yyStackPtr >= yyShortStackSize then
			      yyStateStackSize := yyStateStackSize * 2
			      yyStateStack.resize (0, yyStateStackSize)
			      yyAttrStackSize := yyAttrStackSize * 2
			      yyAttributeStack.resize (0, yyAttrStackSize)
			      yyShortStackSize := yyStateStackSize - 1
			      debug
				 if yyDebug then
				    yyPrintState (yyState)
				    yyTrace.putstring ("extend  stack from ")
				    yyTrace.putint (yyStateStackSize // 2)
				    yyTrace.putstring (" to ")
				    yyTrace.putint (yyStateStackSize)
				    yyNl
				 end
			      end
			   end

			   yyStackPtr := yyStackPtr + 1
			   yyAttributeStack.put (yyRepairAttribute, yyStackPtr)
			   yyStateStack.put (yyState, yyStackPtr)
			end
			if yyState >= yyFirstReadReduceState then -- final state ?
			   yyquit_loop2 := TRUE		-- EXIT
			   yyquit_loop3 := TRUE
			end
		     end
		  end
# endif
	       end
	    end
	 end

	 if not yyquit then
	    if yyState >= yyFirstReadReduceState then	-- final state ?
	       if yyState <= yyLastReadReduceState then	-- read reduce ?
		  yyStackPtr := yyStackPtr + 1
		  yyAttributeStack.put (Scanner.Attribute, yyStackPtr)
		  yyTerminal := yyGetToken
		  debug if yyDebug then
		     yyStateStack.put (yyStateStack.item (yyStackPtr - 1), yyStackPtr)
		     yyRead (yyPrevTerminal, yyTerminal)
		     yyPrevTerminal := yyTerminal
		  end end
		  yyIsRepairing := FALSE
$X			  yyState := yyFinalToProd.item (yyState)
	       end

	       from yyquit_loop3 := FALSE
	       until yyquit_loop3 loop			-- reduce

		  debug
		     if yyDebug then
			if yyState <= yyLastReadReduceState then -- read reduce ?
			   yyState := yyFinalToProd.item (yyState)
			end
			yyPrintState (yyStateStack.item (yyStackPtr))
			if yyState <= yyLastReduceState then
			   yyTrace.putstring ("reduce  ")
			   yyTrace.putstring (yyRule (yyState - yyLastReadReduceState))
			else
			   yyTrace.putstring ("dynamic decision ")
			   yyTrace.putint (yyState - yyLastReduceState)
			end
			yyNl
		     end
		  end

$R	-- Code for Reductions is inserted here
	    -- SPEC State := Next (Top (), Nonterminal); nonterminal transition
		  if not yyquit_loop3 then
		     yyNCombIndex := yyNBase.item (yyStateStack.item (yyStackPtr)) + yyNonterminal
		     yyState := yyNComb.item (yyNCombIndex)
		     yyStackPtr := yyStackPtr + 1
		     yyAttributeStack.put (yySynAttribute, yyStackPtr)
		     if yyState < yyFirstReadReduceState then -- read nonterminal ?
			yyquit_loop3 := TRUE		-- EXIT
		     else
			debug if yyDebug then
			   yyStateStack.put (yyStateStack.item (yyStackPtr - 1), yyStackPtr)
			end end
		     end
		  end
	       end

	    else					-- read
	       yyStackPtr := yyStackPtr + 1
	       yyAttributeStack.put (Scanner.Attribute, yyStackPtr)
	       yyTerminal := yyGetToken
	       debug if yyDebug then
		  yyRead (yyPrevTerminal, yyTerminal)
		  yyPrevTerminal := yyTerminal
	       end end
	       yyIsRepairing := FALSE
	    end
	 end
      end
   end

# ifndef NO_RECOVER
ErrorRecovery (
	yyTerminal	: INTEGER
	yyStack		: ARRAY [INTEGER]
	yyStackSize	: INTEGER
	yypStackPtr	: INTEGER
	): INTEGER is
   local
      TokensSkipped	: BOOLEAN
      ContinueSet	: BIT yySetSize
      RestartSet	: BIT yySetSize
      Token		: INTEGER
      PrevTerminal	: INTEGER
      TokenString	: STRING
      ContinueString	: STRING
   do

-- 1. report the error
      if yyControlMessages then
	 Errors.ErrorMessage (Errors.SyntaxError, Errors.Error, Scanner.Attribute.Position)

-- 2. report the offending token
	 TokenString := TokenName (yyTerminal)
# ifdef SPELLING
	 ContinueString := Scanner.GetWord
	 if not TokenString.is_equal (ContinueString) then
	    TokenString.extend (' ')
	    TokenString.append (ContinueString)
	 end
# endif
	 Errors.ErrorMessageI (Errors.TokenFound, Errors.Information,
	    Scanner.Attribute.Position, Errors.IsString, TokenString)

-- 3. report the set of expected terminal symbols
	 ContinueSet := ComputeContinuation (yyStack, yyStackSize, yypStackPtr, TRUE)
	 ContinueString := ""
	 from Token := 1 until Token > yySetSize loop
	    if ContinueSet.item (Token) then
	       ContinueString.append (TokenName (Token - 1))
	       ContinueString.extend (' ')
	    end
	    Token := Token + 1
	 end
	 Errors.ErrorMessageI (Errors.ExpectedTokens, Errors.Information,
	    Scanner.Attribute.Position, Errors.IsString, ContinueString)
      end

-- 4. compute the set of terminal symbols for restart of the parse
      RestartSet := ComputeRestartPoints (yyStack, yyStackSize, yypStackPtr)

-- 5. skip terminal symbols until a restart point is reached
      from
	 TokensSkipped := FALSE
	 Token := yyTerminal
      until RestartSet.item (Token + 1) loop
	 debug
	    PrevTerminal := Token
	 end
	 Token := yyGetToken
	 TokensSkipped := TRUE
	 debug
	    if yyDebug then
	       yyPrintState (yyStack.item (yypStackPtr))
	       yyTrace.putstring ("skip    ")
	       yyTrace.putstring (TokenName (PrevTerminal))
	       yyTrace.putstring (", lookahead: ")
	       yyTrace.putstring (TokenName (Token))
	       yyNl
	    end
	 end
      end
      Result := Token

-- 6. report the restart point
      if TokensSkipped and yyControlMessages then
	 Errors.ErrorMessage (Errors.RestartPoint, Errors.Information, Scanner.Attribute.Position)
      end
   end


--   compute the set of terminal symbols that can be accepted (read)
--   in a given stack configuration (eventually after reduce actions)


ComputeContinuation (
	yyStack		: ARRAY [INTEGER]
	yyStackSize	: INTEGER
	yypStackPtr	: INTEGER
	reduce		: BOOLEAN
	): BIT yySetSize is
   require
      yyStackSize >= 0;
      yypStackPtr >= yyStack.lower and yypStackPtr <= yyStack.upper
   local
      yyTerminal	: INTEGER
   do
      Result.copy (yyEmptySet)
      from yyTerminal := yyFirstTerminal
      until yyTerminal > yyLastTerminal loop
	 if IsContinuation (yyTerminal, yyStack, yyStackSize, yypStackPtr, reduce) then
	    Result.put (TRUE, yyTerminal + 1)
	 end
	 yyTerminal := yyTerminal + 1
      end
   end


--   check whether a given terminal symbol can be accepted (read)
--   in a certain stack configuration (eventually after reduce actions)


IsContinuation (
	yyTerminal	: INTEGER
	yyParseStack	: ARRAY [INTEGER]
	yyStackSize	: INTEGER
	yypStackPtr	: INTEGER
	reduce		: BOOLEAN
	): BOOLEAN is
   require
      yyStackSize >= 0;
      yypStackPtr >= yyParseStack.lower and yypStackPtr <= yyParseStack.upper
   local
      yyState		: INTEGER
      Nonterminal	: INTEGER
      yyStack		: ARRAY [INTEGER]
      local_StackPtr	: INTEGER
      yyquit_loop1	,
      yyquit_loop2	: BOOLEAN
   do
      yyStack := clone (yyParseStack)
      local_StackPtr := yypStackPtr
      yyState := yyStack.item (local_StackPtr)

      from until yyquit_loop1 loop
	 yyStack.put (yyState, local_StackPtr)
	 yyState := Next (yyState, yyTerminal)
	 if yyState = yyNoState then
	    Result := FALSE
	    yyquit_loop1 := TRUE
	 end

	 if not yyquit_loop1 then
	    from yyquit_loop2 := FALSE
	    until yyquit_loop2 loop			-- reduce
	       if yyState > yyLastReduceState then	-- dynamic ?
		  yyState := yyCondition.item (yyState)
	       end
	       if yyState <= yyLastStopState then	-- read, read reduce, or accept ?
		  Result := TRUE
		  yyquit_loop2 := TRUE
		  yyquit_loop1 := TRUE
	       elsif reduce then			-- reduce
		  local_StackPtr := local_StackPtr - yyLength.item (yyState)
		  Nonterminal := yyLeftHandSide.item (yyState)
	       else
		  Result := FALSE
		  yyquit_loop2 := TRUE
		  yyquit_loop1 := TRUE
	       end

	       if not yyquit_loop2 then
		  yyState := Next (yyStack.item (local_StackPtr), Nonterminal)
		  local_StackPtr := local_StackPtr + 1
		  if yyState < yyFirstReadReduceState then -- read nonterminal ?
		     yyquit_loop2 := TRUE		-- EXIT
		  end
	       end
	    end
	 end
      end
   end


--   compute a set of terminal symbols that can be used to restart
--   parsing in a given stack configuration. we simulate parsing until
--   end of file using a suffix program synthesized by the function
--   Continuation. All symbols acceptable in the states reached during
--   the simulation can be used to restart parsing.


ComputeRestartPoints (
	yyParseStack	: ARRAY [INTEGER]
	yyStackSize	: INTEGER
	yypStackPtr	: INTEGER
	): BIT yySetSize is
   require
      yyStackSize >= 0;
      yypStackPtr >= yyParseStack.lower and yypStackPtr <= yyParseStack.upper
   local
      yyStack		: ARRAY [INTEGER]
      yyState		: INTEGER
      Nonterminal	: INTEGER
      ContinueSet	: BIT yySetSize
      local_StackSize	,
      local_StackPtr	: INTEGER
      yyquit_loop1	,
      yyquit_loop2	: BOOLEAN
   do
      yyStack := clone (yyParseStack)
      local_StackSize := yyStackSize
      local_StackPtr := yypStackPtr
      Result.copy (yyEmptySet)
      yyState := yyStack.item (local_StackPtr)

      from until yyquit_loop1 loop
	 if local_StackPtr >= local_StackSize then
	    local_StackSize := 2 * local_StackSize
	    yyStack.resize (0, local_StackSize)
	 end

	 yyStack.put (yyState, local_StackPtr)
	 ContinueSet := ComputeContinuation (yyStack, local_StackSize, local_StackPtr, FALSE)
	 Result := Result or ContinueSet
	 yyState := Next (yyState, yyContinuation.item (yyState))

	 if yyState >= yyFirstReadReduceState then	-- final state ?
	    if yyState <= yyLastReadReduceState then	-- read reduce ?
	       local_StackPtr := local_StackPtr + 1
	       yyState := yyFinalToProd.item (yyState)
	    end

	    from yyquit_loop2 := FALSE
	    until yyquit_loop1 or else yyquit_loop2 loop -- reduce
	       if yyState > yyLastReduceState then	-- dynamic ?
		  yyState := yyCondition.item (yyState)
	       end
	       if (yyFirstReduceState <= yyState) and
		  (yyState <= yyLastStopState) then	-- accept
		  yyquit_loop1 := TRUE
		  yyquit_loop2 := TRUE			-- RETURN
	       elseif yyState < yyFirstReadReduceState then -- read
		  local_StackPtr := local_StackPtr + 1
		  yyquit_loop2 := TRUE			-- EXIT
	       else					-- reduce
		  local_StackPtr := local_StackPtr - yyLength.item (yyState)
		  Nonterminal := yyLeftHandSide.item (yyState)
	       end

	       if not yyquit_loop1 then
		  yyState := Next (yyStack.item (local_StackPtr), Nonterminal)
		  local_StackPtr := local_StackPtr + 1
		  if yyState < yyFirstReadReduceState then -- read nonterminal ?
		     yyquit_loop2 := TRUE		-- EXIT
		  end
	       end
	    end
	 else						-- read
	    local_StackPtr := local_StackPtr + 1
	 end
      end
   end
# endif


-- access the parse table:   Next: State x Symbol -> State

Next (yyState: INTEGER; yySymbol: INTEGER): INTEGER is
   local
      TCombIndex	: INTEGER
      NCombIndex	: INTEGER
      local_state	: INTEGER
      yyquit		: BOOLEAN
   do
      if yySymbol <= yyLastTerminal then
# ifdef YYTDefault
	 local_state := yyState
	 from until yyquit loop
	    TCombIndex := yyTBase.item (local_state) + yySymbol
	    if yyTCheck.item (TCombIndex) /= local_state then
	       local_state := yyDefault.item (local_state)
	       if local_state = yyNoState then
		  Result := yyNoState
		  yyquit := TRUE
	       end
	    else
	       Result := yyTNext.item (TCombIndex)
	       yyquit := TRUE
	    end
	 end
# else
	 TCombIndex := yyTBase.item (yyState) + yySymbol
	 if yyTCheck.item (TCombIndex) /= yyState then
	    Result := yyNoState
	 else
	    Result := yyTNext.item (TCombIndex)
	 end
# endif
      else
	 NCombIndex := yyNBase.item (yyState) + yySymbol
	 Result := yyNComb.item (NCombIndex)
      end
   end

yyInitTables is
   local
      yyTableFile	: rFILE
      NoPosition	: Position
   do
      !! yyTableFile.make_read (yyTableFileName)
      if yyTableFile.error then
	 !! NoPosition.make
	 Errors.ErrorMessage (Errors.WrongParseTable, Errors.Fatal, NoPosition)
      end
      yyTBase		:= yyGetTable (yyTableFile, yyLastReadState, 0)
      yyNBase		:= yyGetTable (yyTableFile, yyLastReadState, 0)
# ifdef YYTDefault
      yyDefault		:= yyGetTable (yyTableFile, yyLastReadState, 0)
# endif
      yyTCheck		:= yyGetTable (yyTableFile, yyTTableMax, 0)
      yyTNext		:= yyGetTable (yyTableFile, yyTTableMax, 0)
      yyNComb		:= yyGetTable (yyTableFile, yyNTableMax - yyLastTerminal - 1, yyLastTerminal + 1)
      yyLength		:= yyGetTable (yyTableFile, yyLastReduceState - yyFirstReduceState, yyFirstReduceState)
      yyLeftHandSide	:= yyGetTable (yyTableFile, yyLastReduceState - yyFirstReduceState, yyFirstReduceState)
      yyContinuation	:= yyGetTable (yyTableFile, yyLastReadState, 0)
      yyFinalToProd	:= yyGetTable (yyTableFile, yyLastReadReduceState - yyFirstReadReduceState, yyFirstReadReduceState)
      yyCondition	:= yyGetTable (yyTableFile, yyLastState - yyLastReduceState - 1, yyLastReduceState + 1)
      yyTableFile.close
   end

yyGetTable (yyTableFile: rFILE; yyNoOfElements, yyOffset: INTEGER): ARRAY [INTEGER] is -- SIMPLE_ARRAY
   require
      yyGetTable_file_error: not yyTableFile.error
   local
      table_size	: INTEGER
      table_index	: INTEGER
      NoPosition	: Position
   do
      yyTableFile.readint; table_size := yyTableFile.lastint
      if table_size = yyNoOfElements + 1 then
	 yyTableFile.next_line
	 !! Result.make (yyOffset, yyOffset + yyNoOfElements)
	 from table_index := yyOffset
	 until table_size + yyOffset = table_index loop
	    yyTableFile.readint; Result.put (yyTableFile.lastint, table_index)
	    table_index := table_index + 1
	 end
      else
	 !! NoPosition.make
	 Errors.ErrorMessage (Errors.WrongParseTable, Errors.Fatal, NoPosition)
      end
   end

feature

BeginParser is
   do
$B	-- BEGIN section is inserted here
   end

CloseParser is
   do
$C	-- CLOSE section is inserted here
   end

end
