-- $Id: parser.adb,v 1.15 2008/10/08 11:18:33 grosch Exp $

$@ with $, General, DynArray, Strings,
# ifndef NO_RECOVER
   Sets,
# endif
# if ! defined NO_RECOVER | defined YYReParse
   Errors,
# endif
# ifndef YYDEBUG
   Position,
# endif
   Text_Io;

$@ package body @ is

$G[	-- GLOBAL section is inserted here
$@ type tParsAttribute is record Scan: $.tScanAttribute; end record;
$]

# ifndef yyInitStackSize
# define yyInitStackSize	100
# endif
# ifndef ERROR
# define ERROR
# endif
yyNoState	: constant Integer := 0;
yystandard	: constant Integer := 0;
yytrial		: constant Integer := 1;
yybuffering	: constant Integer := 2;
yyreparsing	: constant Integer := 3;
# define yyS			yySynAttribute
# define yyA			yyAttributeStack

$T	-- table constants are inserted here

yyFirstFinalState	: constant Integer := yyFirstReadReduceState;

# define YYACCEPT goto yyAccept
# define YYABORT  goto yyAbort
# define ErrorMessages(Messages) yyControl.yyMessages := Messages
# define SemActions(Actions)	 yyControl.yyActions  := Actions

# ifdef YYNDefault
# define yytNComb yyCombType
# else
# define yytNComb yyStateRange
# endif

subtype	yyShortCard	is Integer range 0 .. 2 ** 16 - 1;
subtype	yyShortInt	is Integer range - (2 ** 15 - 1) .. 2 ** 15 - 1;
subtype	yyStateRange	is Integer range 0 .. yyLastState;
subtype	yyReadReduceRange is Integer range yyFirstReadReduceState .. yyLastReadReduceState + 1;
subtype	yyReduceRange	is Integer range yyFirstReduceState .. yyLastReduceState;
subtype	yySymbolRange	is Integer range yyFirstSymbol .. yyLastSymbol;
type	yyCombType	is record Check, Next: yyStateRange; end record;
type	yytControl	is record yyMode: Integer; yyActions, yyMessages: Boolean; end record;

   yyTBase		: constant array (0 .. yyLastReadState)	of Integer	:= (0,
$P
   );
   yyNBase		: constant array (0 .. yyLastReadState)	of Integer	:= (0,
$Q
   );
# ifdef YYTDefault
   yyTDefault		: constant array (0 .. yyLastReadState)	of yyStateRange	:= (0,
$D
   );
# endif
# ifdef YYNDefault
   yyNDefault		: constant array (0 .. yyLastReadState)	of yyStateRange	:= (0,
$V
   );
# endif
   yyTComb		: constant array (0 .. yyTTableMax)	of yyCombType	:= (
$M
   );
   yyNComb		: constant array (yyLastTerminal + 1 .. yyNTableMax) of yytNComb := (
$N
$Y
   );
   yyLength		: constant array (yyReduceRange)	of yyShortCard	:= (
$K
   );
   yyLeftHandSide	: constant array (yyReduceRange)	of yySymbolRange := (
$H
   );
   yyContinuation	: constant array (0 .. yyLastReadState + 1)	of yySymbolRange := (0,
$O
others => 0);
   yyFinalToProd	: constant array (yyReadReduceRange)	of yyReduceRange := (
$F
others => yyFirstReduceState);
   yyCondition		: constant array (yyLastReduceState + 1 .. yyLastState + 1) of yyStateRange := (
$A
others => 0);
   yyStartLine		: constant array (1 .. yyLastStopState - yyLastReadReduceState + 1) of yyShortCard := (
$J
others => 0);
   yyControl		: yytControl;

package SStack_DA	is new DynArray (yyStateRange	);
package AStack_DA	is new DynArray (tParsAttribute	);

function TokenName (Token: Integer) return String is
   begin
      case Token is
$W	-- token names are inserted here
      when others => return "_unknown_";
      end case;
   end TokenName;

# ifdef YYDEBUG

function yyRule (Rule: Integer) return String is
   begin
      case Rule is
$S	-- rules are inserted here
      when others => return "";
      end case;
   end yyRule;

yyCount		: Integer := 0;
yyTraceFile	: Text_Io.File_Type;
yyIsStdOut	: Boolean := True;

function yyTrace return Text_Io.File_Type is
   begin
      if yyIsStdOut then return Text_Io.Standard_Output; else return yyTraceFile; end if;
   end yyTrace;

procedure yyOpenTrace (FileName: String) is
   begin
      Text_Io.Open (yyTraceFile, Text_Io.Out_File, FileName);
      yyIsStdOut := False;
   end yyOpenTrace;

package Int_Io	is new Text_Io.Integer_IO	(Integer);
package Bool_Io	is new Text_Io.Enumeration_IO	(Boolean);

procedure yyNl;
procedure yyPrintState (yyState: yyStateRange);

# endif

# if defined YYTrialParse | defined YYReParse | defined YYGetLook

# ifndef yyInitBufferSize
# define yyInitBufferSize 100
# endif
# ifndef TOKENOP
# define TOKENOP
# endif
# ifndef BEFORE_TRIAL
# define BEFORE_TRIAL
# endif
# ifndef AFTER_TRIAL
# define AFTER_TRIAL
# endif

type yytBuffer	is record Token		: yySymbolRange;
$@ 			 Attribute	: $.tScanAttribute;
# ifdef YYMemoParse
			 yyStart	: yyShortInt;
# endif
		  end record;

package Buffer_DA is new DynArray (yytBuffer);

yyBuffer	: Buffer_DA.FlexArray;
yyBufferSize	: Integer;
yyBufferNext	: Integer;
yyBufferLast	: Integer;
yyBufferClear	: Boolean := True;
yyParseLevel	: yyShortCard;

procedure yyBufferSet (yyToken: yySymbolRange) is
   begin
      if yyBufferNext = yyBufferLast then
	 if yyBufferClear then yyBufferLast := 0; end if;
	 yyBufferLast := yyBufferLast + 1;
	 if yyBufferLast >= yyBufferSize then
	    Buffer_DA.ExtendArray (yyBuffer, yyBufferSize);
# ifdef YYDEBUG
	    if yyDebug then
	       yyPrintState (0);
	       Text_Io.Put (yyTrace, "extend  token buffer from ");
	       Int_Io .Put (yyTrace, yyBufferSize / 2, 0);
	       Text_Io.Put (yyTrace, " to ");
	       Int_Io .Put (yyTrace, yyBufferSize, 0);
	       yyNl;
	    end if;
# endif
	 end if;
	 yyBuffer (yyBufferLast).Token		:= yyToken;
$@ 	 yyBuffer (yyBufferLast).Attribute	:= $.Attribute;
# ifdef YYMemoParse
	 yyBuffer (yyBufferLast).yyStart	:= 0;
# endif
	 yyBufferNext := yyBufferLast;
      end if;
   end yyBufferSet;

function yyGetToken return Integer is
      yyToken	: yySymbolRange;
   begin
      if yyBufferNext < yyBufferLast then
	 yyBufferNext := yyBufferNext + 1;
	 yyToken := yyBuffer (yyBufferNext).Token;
$@ 	 $.Attribute := yyBuffer (yyBufferNext).Attribute;
      else
$@ 	 yyToken := $.GetToken;
	 if (yyControl.yyMode = yytrial) or (yyControl.yyMode = yybuffering) then
	    yyBufferLast := yyBufferLast + 1;
	    if yyBufferLast >= yyBufferSize then
	       Buffer_DA.ExtendArray (yyBuffer, yyBufferSize);
# ifdef YYDEBUG
	       if yyDebug then
		  yyPrintState (0);
		  Text_Io.Put (yyTrace, "extend  token buffer from ");
		  Int_Io .Put (yyTrace, yyBufferSize / 2, 0);
		  Text_Io.Put (yyTrace, " to ");
		  Int_Io .Put (yyTrace, yyBufferSize, 0);
		  yyNl;
	       end if;
# endif
	    end if;
	    yyBuffer (yyBufferLast).Token	:= yyToken;
$@ 	    yyBuffer (yyBufferLast).Attribute	:= $.Attribute;
# ifdef YYMemoParse
	    yyBuffer (yyBufferLast).yyStart	:= 0;
# endif
	    yyBufferNext := yyBufferLast;
	 end if;
      end if;
      TOKENOP
      return yyToken;
   end yyGetToken;

# else
$@ # define yyGetToken $.GetToken
# endif

# ifdef YYGetLook

# define GetLookahead(k)	yyGetLookahead ((k) - 1, yyTerminal)
# define GetAttribute(k, a)	yyGetAttribute ((k) - 1, yyTerminal, a)

function yyGetLookahead (k, Terminal: Integer) return Integer is
   begin
      if k = 0 then return Terminal; end if;
      if yyControl.yyMode = yystandard then yyBufferSet (Terminal); end if;
      while yyBufferNext + k > yyBufferLast loop
	 if (yyBufferNext < yyBufferLast) and
$@ 	    (yyBuffer (yyBufferLast).Token = $.EofToken) then
$@ 	    return $.EofToken;
	 end if;
	 yyBufferLast := yyBufferLast + 1;
	 if yyBufferLast >= yyBufferSize then
	    Buffer_DA.ExtendArray (yyBuffer, yyBufferSize);
# ifdef YYDEBUG
	    if yyDebug then
	       yyPrintState (0);
	       Text_Io.Put (yyTrace, "extend  token buffer from ");
	       Int_Io .Put (yyTrace, yyBufferSize / 2, 0);
	       Text_Io.Put (yyTrace, " to ");
	       Int_Io .Put (yyTrace, yyBufferSize, 0);
	       yyNl;
	    end if;
# endif
	 end if;
$@ 	 yyBuffer (yyBufferLast).Token		:= $.GetToken;
$@ 	 yyBuffer (yyBufferLast).Attribute	:= $.Attribute;
# ifdef YYMemoParse
	 yyBuffer (yyBufferLast).yyStart	:= 0;
# endif
      end loop;
      return yyBuffer (yyBufferNext + k).Token;
   end yyGetLookahead;

$@ procedure yyGetAttribute (k, Terminal: Integer; Attribute: out $.tScanAttribute) is
      x	: Integer;
   begin
$@       if k = 0 then Attribute := $.Attribute;
      else
	 x := yyGetLookahead (k, Terminal);
	 Attribute := yyBuffer (General.Min (yyBufferNext + k, yyBufferLast)).Attribute;
      end if;
   end yyGetAttribute;

# endif

# ifdef YYReParse

# define BufferOn(Actions, Messages) yyBufferOn (Actions, Messages, yyTerminal)
# define BufferPosition	yyBufferNext

yyPrevControl	: yytControl;

function yyBufferOn (yyActions, yyMessages: Boolean; yyToken: yySymbolRange) return Integer is
   begin
      if yyControl.yyMode = yystandard then
	 yyPrevControl		:= yyControl;
	 yyControl.yyMode	:= yybuffering;
	 yyControl.yyActions	:= yyActions;
	 yyControl.yyMessages	:= yyMessages;
	 yyBufferSet (yyToken);
	 yyBufferClear		:= False;
      end if;
      return yyBufferNext;
   end yyBufferOn;

function BufferOff return Integer is
   begin
      if yyControl.yyMode = yybuffering then yyControl := yyPrevControl; end if;
      return yyBufferNext;
   end BufferOff;

procedure BufferClear is
   begin
      yyBufferClear := True;
   end BufferClear;

# endif

# ifdef YYDEBUG

yyModeLetter: constant array (0 .. 3) of Character := ('S', 'T', 'B', 'R');

procedure yyNl is begin Text_Io.New_Line (yyTrace); end yyNl;

procedure yyPrintState (yyState: yyStateRange) is
   begin
      yyCount := yyCount + 1;
      Int_Io .Put (yyTrace, yyCount, 4);
      Text_Io.Put (yyTrace, ":");
$@       Position.WritePosition (yyTrace, $.Attribute.Position);
      Text_Io.Put (yyTrace, ":");
      Int_Io .Put (yyTrace, yyState, 5);
      Text_Io.Put (yyTrace, "  ");
      Text_Io.Put (yyTrace, yyModeLetter (yyControl.yyMode));
      Text_Io.Put (yyTrace, "  ");
# if defined YYTrialParse | defined YYReParse
      if yyParseLevel > 0 then
	 Int_Io .Put (yyTrace, yyParseLevel, 2);
	 for i in 0 .. yyParseLevel loop Text_Io.Put (yyTrace, "  "); end loop;
      else
	 Text_Io.Put (yyTrace, "    ");
      end if;
# else
      Text_Io.Put (yyTrace, "    ");
# endif
   end yyPrintState;

# endif

yyStackPtr		: yyShortCard;
yyStateStackSize	: Integer;
yyAttrStackSize		: Integer;
yyShortStackSize	: yyShortCard;
yyStateStack		: SStack_DA.FlexArray;
yyAttributeStack	: AStack_DA.FlexArray;

function  yyParse		(yyStartSymbol: Integer; yyToken: Integer;
				 yyLine: Integer) return Integer;
function  Next			(pState: Integer; Symbol: Integer) return Integer;
# ifndef NO_RECOVER
procedure ErrorRecovery		(Terminal: in out Integer;
				 StackSize: Integer; StackPtr: Integer);
procedure ComputeContinuation	(StackSize: Integer; StackPtr: Integer;
				 ContinueSet: out Sets.tSet; reduce: Boolean);
procedure ComputeRestartPoints	(pStackSize: Integer;
				 pStackPtr: Integer; RestartSet: out Sets.tSet);
function  IsContinuation	(Terminal: Integer; pStackSize: Integer;
			    pStackPtr: Integer; reduce: Boolean) return Boolean;
# endif

$@ function @ return Integer is
   begin
$@       return @2 (yyStartState);
$@    end @;

$@ function @2 (yyStartSymbol: Integer) return Integer is
      yyErrorCount	: Integer;
   begin
$@       Begin@;
      yyStateStackSize	:= yyInitStackSize;
      yyAttrStackSize	:= yyInitStackSize;
      SStack_DA.MakeArray (yyStateStack, yyStateStackSize);
      AStack_DA.MakeArray (yyAttributeStack, yyAttrStackSize);
      yyShortStackSize	:= yyStateStackSize - 1;
      yyStackPtr	:= 0;
# if defined YYTrialParse | defined YYReParse
      yyBufferSize	:= yyInitBufferSize;
      Buffer_DA.MakeArray (yyBuffer, yyBufferSize);
      yyBufferNext	:= 1;
      yyBufferLast	:= 1;
      yyParseLevel	:= 0;
# endif
# ifdef YYDEBUG
      if yyDebug then
	 Text_Io.Put (yyTrace, "  # |Position|State|Mod|Lev|Action |Terminal and Lookahead or Rule");
	 yyNl; yyNl;
      end if;
# endif
      yyControl.yyMode		:= yystandard;
      yyControl.yyActions	:= True;
      yyControl.yyMessages	:= True;
      yyErrorCount := yyParse (yyStartSymbol, yyGetToken, yyStartLine (yyStartSymbol));
      SStack_DA.ReleaseArray (yyStateStack, yyStateStackSize);
      AStack_DA.ReleaseArray (yyAttributeStack, yyAttrStackSize);
# if defined YYTrialParse | defined YYReParse
      Buffer_DA.ReleaseArray (yyBuffer, yyBufferSize);
# endif
      return yyErrorCount;
$@    end @2;

# ifdef YYTrialParse

# ifdef YYMemoParse
# define MemoryClear(Position) yyBuffer (Position).yyStart := 0
# endif

function yyTrialParse (yyStartSymbol: Integer; yyToken: Integer; yyLine: Integer) return Integer is
      yyErrorCount	: Integer;
      yyPrevStackPtr	: Integer;
      yyPrevBufferNext	: Integer;
      yyPrevControl	: yytControl;
   begin
      BEFORE_TRIAL
# ifdef YYMemoParse
      if yyBuffer (yyBufferNext).yyStart =   yyStartSymbol then return 0; end if;
      if yyBuffer (yyBufferNext).yyStart = - yyStartSymbol then return 1; end if;
# endif
      yyPrevControl		:= yyControl;
      yyPrevStackPtr		:= yyStackPtr;
      yyStackPtr		:= yyStackPtr + 1;
      yyParseLevel		:= yyParseLevel + 1;
      if yyControl.yyMode = yystandard then yyBufferSet (yyToken); end if;
      yyPrevBufferNext		:= yyBufferNext;
      yyControl.yyMode		:= yytrial;
      yyControl.yyActions	:= False;
      yyControl.yyMessages	:= False;
      yyErrorCount		:= yyParse (yyStartSymbol, yyToken, yyLine);
# ifdef YYMemoParse
      if yyErrorCount = 0 then
	 yyBuffer (yyPrevBufferNext).yyStart :=   yyStartSymbol;
      else
	 yyBuffer (yyPrevBufferNext).yyStart := - yyStartSymbol;
      end if;
# endif
      yyStackPtr		:= yyPrevStackPtr;
      yyBufferNext		:= yyPrevBufferNext;
      yyControl			:= yyPrevControl;
      yyParseLevel		:= yyParseLevel - 1;
$@       $.Attribute		:= yyBuffer (yyBufferNext).Attribute;
      AFTER_TRIAL
      return yyErrorCount;
   end yyTrialParse;

# endif

# ifdef YYReParse

function ReParse (yyStartSymbol: Integer; yyFrom, yyTo: Integer; yyActions, yyMessages: Boolean) return Integer is
      yyErrorCount	: Integer;
      yyPrevStackPtr	: Integer;
      yyPrevBufferNext	: Integer;
      yyPrevControl	: yytControl;
      yyToToken		: Integer;
   begin
      if (1 <= yyFrom) and (yyFrom <= yyTo) and (yyTo <= yyBufferLast) then
	 yyPrevStackPtr		:= yyStackPtr;
	 yyPrevBufferNext	:= yyBufferNext;
	 yyToToken		:= yyBuffer (yyTo).Token;
	 yyPrevControl		:= yyControl;
	 yyStackPtr		:= yyStackPtr + 1;
	 yyParseLevel		:= yyParseLevel + 1;

	 yyBufferNext		:= yyFrom - 1;
$@ 	 yyBuffer (yyTo).Token	:= $.EofToken;
	 yyControl.yyMode	:= yyreparsing;
	 yyControl.yyActions	:= yyActions;
	 yyControl.yyMessages	:= yyMessages;
	 yyErrorCount		:= yyParse (yyStartSymbol, yyGetToken, yyStartLine (yyStartSymbol));
	 yyStackPtr		:= yyPrevStackPtr;
	 yyBufferNext		:= yyPrevBufferNext;
	 yyControl		:= yyPrevControl;
	 yyParseLevel		:= yyParseLevel - 1;
	 yyBuffer (yyTo).Token	:= yyToToken;
$@ 	 $.Attribute		:= yyBuffer (yyBufferNext).Attribute;
	 return yyErrorCount;
      else
$@ 	 Errors.Message ("invalid call of ReParse", Errors.Error, $.Attribute.Position);
	 return 1;
      end if;
   end ReParse;

# endif

function yyParse (yyStartSymbol: Integer; yyToken: Integer; yyLine: Integer) return Integer is
$L	-- LOCAL section is inserted here
      yyState		: Integer;
      yyTerminal	: Integer;
      yyNonterminal	: Integer;	-- left-hand side symbol
      yySynAttribute	: tParsAttribute;	-- synthesized attribute
$@       yyRepairAttribute : $.tScanAttribute;
      yyRepairToken	: Integer;
      yyNextState	: Integer;
      yyCombIndex	: Integer;
      yyIsRepairing	: Boolean;
      yyErrorCount	: Integer;
      yyTokenString	: Strings.tString;
# ifdef YYDEBUG
      yyStartCount	: Integer;
      yyPrevTerminal	: Integer;
# endif
# ifdef YYGetLook
      yy2		: Integer;
# endif

   procedure yyRead is
      begin
	 yyState := yyCondition (yyState);
	 yyStackPtr := yyStackPtr + 1;
$@ 	 yyAttributeStack (yyStackPtr).Scan := $.Attribute;
	 yyTerminal := yyGetToken;
# ifdef YYDEBUG
	 if yyDebug then
	    yyPrintState (yyStateStack (yyStackPtr - 1));
	    Text_Io.Put (yyTrace, "shift   ");
	    Text_Io.Put (yyTrace, TokenName (yyPrevTerminal));
	    Text_Io.Put (yyTrace, ", lookahead: ");
	    Text_Io.Put (yyTrace, TokenName (yyTerminal));
	    yyNl;
	    yyPrevTerminal := yyTerminal;
	 end if;
# endif
	 yyIsRepairing := False;
      end yyRead;

# ifdef YYDEBUG

   function yyPrintResult (Line: Integer; Condition: Boolean) return Boolean is
      begin
	 if yyDebug then
	    yyPrintState (yyStateStack (yyStackPtr));
	    Text_Io.Put (yyTrace, "check   predicate in line ");
	    Int_Io .Put (yyTrace, Line, 0);
	    Text_Io.Put (yyTrace, ", result = ");
	    Bool_Io.Put (yyTrace, Condition);
	    yyNl;
	 end if;
	 return Condition;
      end yyPrintResult;

# define yyGotoReduce(State, Rule)	yyState := State; goto yyReduce;

# else
# define yyGotoReduce(State, Rule)	goto Rule;
# define yyPrintResult(State, Line, Condition) Condition
# endif

   begin
# ifdef YYDEBUG
      if yyDebug then
	 yyPrintState (yyStartSymbol);
	 Text_Io.Put (yyTrace, "parse   for predicate in line ");
	 Int_Io .Put (yyTrace, yyLine, 0);
	 Text_Io.Put (yyTrace, ", lookahead: ");
	 Text_Io.Put (yyTrace, TokenName (yyToken));
	 yyNl;
	 yyStartCount	:= yyCount;
	 yyPrevTerminal	:= yyToken;
      end if;
# endif
      yyState		:= yyStartSymbol;
      yyTerminal	:= yyToken;
      yyErrorCount	:= 0;
      yyIsRepairing	:= False;

      loop
	 if yyStackPtr >= yyShortStackSize then
	    SStack_DA.ExtendArray (yyStateStack, yyStateStackSize);
	    AStack_DA.ExtendArray (yyAttributeStack, yyAttrStackSize);
	    yyShortStackSize := yyStateStackSize - 1;
# ifdef YYDEBUG
	    if yyDebug then
	       yyPrintState (yyState);
	       Text_Io.Put (yyTrace, "extend  stack from ");
	       Int_Io .Put (yyTrace, yyStateStackSize / 2, 0);
	       Text_Io.Put (yyTrace, " to ");
	       Int_Io .Put (yyTrace, yyStateStackSize, 0);
	       yyNl;
	    end if;
# endif
	 end if;
	 yyStateStack (yyStackPtr) := yyState;

yyTerm:	 loop	-- SPEC State := Next (State, Terminal); terminal transition
	    yyCombIndex := yyTBase (yyState) + yyTerminal;
	    if yyTComb (yyCombIndex).Check = yyState then
	       yyState := yyTComb (yyCombIndex).Next; exit;
	    end if;
# ifdef YYTDefault
	    yyState := yyTDefault (yyState);
# else
	    yyState := yyNoState;
# endif
	    if yyState = yyNoState then			-- syntax error
	       if not yyIsRepairing then		-- report and recover
# ifdef YYTrialParse
		  if yyControl.yyMode = yytrial then goto yyAbort; end if;
# endif
		  ERROR
# ifndef NO_RECOVER
		  yyErrorCount := yyErrorCount + 1;
		  ErrorRecovery (yyTerminal, yyStateStackSize, yyStackPtr);
		  yyIsRepairing := True;
# else
		  YYABORT;
# endif
	       end if;
# ifndef NO_RECOVER
	       yyState := yyStateStack (yyStackPtr);
	       loop
		  yyNextState := Next (yyState, yyTerminal);
		  if (yyNextState /= yyNoState) and (yyNextState <= yyLastReadReduceState) then
		     yyState := yyNextState;		-- restart point reached
		     yyIsRepairing := FALSE;		-- stop error recovery
		     exit yyTerm;
		  end if;
		  yyRepairToken := yyContinuation (yyState);	-- repair
		  yyState := Next (yyState, yyRepairToken);
		  if yyState > yyLastReduceState then		-- dynamic ?
		     yyState := yyCondition (yyState);
		  end if;
		  if yyState <= yyLastReadReduceState then	-- read or read reduce ?
$@ 		     $.ErrorAttribute (yyRepairToken, yyRepairAttribute);
		     if yyControl.yyMessages then
			Strings.To_tString (TokenName (yyRepairToken), yyTokenString);
			Errors.ErrorMessageI (Errors.TokenInserted, Errors.Repair,
$@ 			   $.Attribute.Position, Errors.cString, yyTokenString'Address);
		     end if;
# ifdef YYDEBUG
		     if yyDebug then
			yyPrintState (yyStateStack (yyStackPtr));
			Text_Io.Put (yyTrace, "insert  ");
			Text_Io.Put (yyTrace, TokenName (yyRepairToken));
			yyNl;
			yyPrintState (yyStateStack (yyStackPtr));
			Text_Io.Put (yyTrace, "shift   ");
			Text_Io.Put (yyTrace, TokenName (yyRepairToken));
			Text_Io.Put (yyTrace, ", lookahead: ");
			Text_Io.Put (yyTrace, TokenName (yyTerminal));
			yyNl;
                     end if;
# endif
		     if yyState >= yyFirstFinalState then	-- avoid second push
			yyState := yyFinalToProd (yyState);
		     end if;

		     if yyStackPtr >= yyShortStackSize then
			SStack_DA.ExtendArray (yyStateStack, yyStateStackSize);
			AStack_DA.ExtendArray (yyAttributeStack, yyAttrStackSize);
			yyShortStackSize := yyStateStackSize - 1;
# ifdef YYDEBUG
			if yyDebug then
			   yyPrintState (yyState);
			   Text_Io.Put (yyTrace, "extend  stack from ");
			   Int_Io .Put (yyTrace, yyStateStackSize / 2, 0);
			   Text_Io.Put (yyTrace, " to ");
			   Int_Io .Put (yyTrace, yyStateStackSize, 0);
			   yyNl;
			end if;
# endif
		     end if;

		     yyStackPtr := yyStackPtr + 1;
		     yyAttributeStack (yyStackPtr).Scan := yyRepairAttribute;
		     yyStateStack     (yyStackPtr) := yyState;
		  end if;
		  if yyState >= yyFirstFinalState then	-- final state ?
		     exit yyTerm;
		  end if;
	       end loop;
# endif
	    end if;
	 end loop yyTerm;

	 if yyState >= yyFirstFinalState then		-- final state ?
	    if yyState <= yyLastReadReduceState then	-- read reduce ?
	       yyStackPtr := yyStackPtr + 1;
$@ 	       yyAttributeStack (yyStackPtr).Scan := $.Attribute;
	       yyTerminal := yyGetToken;
# ifdef YYDEBUG
	       if yyDebug then
		  yyStateStack (yyStackPtr) := yyStateStack (yyStackPtr - 1);
		  yyPrintState (yyStateStack (yyStackPtr));
		  Text_Io.Put (yyTrace, "shift   ");
		  Text_Io.Put (yyTrace, TokenName (yyPrevTerminal));
		  Text_Io.Put (yyTrace, ", lookahead: ");
		  Text_Io.Put (yyTrace, TokenName (yyTerminal));
		  yyNl;
		  yyPrevTerminal := yyTerminal;
               end if;
# endif
	       yyIsRepairing := False;
$X	       yyState := yyFinalToProd (yyState);
	    end if;

	    loop					-- reduce
<<yyReduce>>
# ifdef YYDEBUG
	       if yyDebug then
		  if yyState <= yyLastReadReduceState then	-- read reduce ?
		     yyState := yyFinalToProd (yyState);
		  end if;
		  yyPrintState (yyStateStack (yyStackPtr));
		  if yyState <= yyLastReduceState then
		     Text_Io.Put (yyTrace, "reduce  ");
		     Text_Io.Put (yyTrace, yyRule (yyState - yyLastReadReduceState));
		  else
		     Text_Io.Put (yyTrace, "dynamic decision ");
		     Int_Io .Put (yyTrace, yyState - yyLastReduceState, 0);
		  end if;
		  yyNl;
               end if;
# endif
$R	-- Code for Reductions is inserted here
	       -- SPEC State := Next (Top (), Nonterminal); nonterminal transition
# ifdef YYNDefault
	       yyState := yyStateStack (yyStackPtr);
	       loop
		  yyCombIndex := yyNBase (yyState) + yyNonterminal;
		  if yyNComb (yyCombIndex).Check = yyState then
		     yyState := yyNComb (yyCombIndex).Next; exit;
		  end if;
		  yyState := yyNDefault (yyState);
	       end loop;
# else
	       yyState := yyNComb (yyNBase (yyStateStack (yyStackPtr)) + yyNonterminal);
# endif
	       yyStackPtr := yyStackPtr + 1;
	       yyAttributeStack (yyStackPtr) := yySynAttribute;
	       if yyState < yyFirstFinalState then exit; end if; -- read nonterminal ?
# ifdef YYDEBUG
	       if yyDebug then
		  yyStateStack (yyStackPtr) := yyStateStack (yyStackPtr - 1);
	       end if;
# endif
	    end loop;

	 else						-- read
	    yyStackPtr := yyStackPtr + 1;
$@ 	    yyAttributeStack (yyStackPtr).Scan := $.Attribute;
	    yyTerminal := yyGetToken;
# ifdef YYDEBUG
	    if yyDebug then
	       yyPrintState (yyStateStack (yyStackPtr - 1));
	       Text_Io.Put (yyTrace, "shift   ");
	       Text_Io.Put (yyTrace, TokenName (yyPrevTerminal));
	       Text_Io.Put (yyTrace, ", lookahead: ");
	       Text_Io.Put (yyTrace, TokenName (yyTerminal));
	       yyNl;
	       yyPrevTerminal := yyTerminal;
	    end if;
# endif
	    yyIsRepairing := False;
	 end if;
      end loop;

<<yyAbort>>
# ifdef YYDEBUG
      if yyDebug then			-- abort
	 yyPrintState (yyStateStack (yyStackPtr));
	 Text_Io.Put (yyTrace, "fail    parse started at ");
	 Int_Io .Put (yyTrace, yyStartCount, 0);
	 yyNl;
      end if;
# endif
      yyErrorCount := yyErrorCount + 1;
      return yyErrorCount;

<<yyAccept>>
# ifdef YYDEBUG
      if yyDebug then			-- accept
	 yyPrintState (yyStateStack (yyStackPtr));
	 Text_Io.Put (yyTrace, "accept  parse started at ");
	 Int_Io .Put (yyTrace, yyStartCount, 0);
	 yyNl;
      end if;
# endif
      return yyErrorCount;
   end yyParse;

# ifndef NO_RECOVER
procedure ErrorRecovery (
	  Terminal	: in out Integer;
	  StackSize	: Integer	;
	  StackPtr	: Integer	) is

      use Strings;

      TokensSkipped	: Boolean;
      ContinueSet	: Sets.tSet;
      RestartSet	: Sets.tSet;
# ifdef YYDEBUG
      PrevTerminal	: Integer;
# endif
      TokenString	: Strings.tString;
      ContinueArray	: String (1 .. 5000);
      ContinueString	: Strings.tString;
      Length		: Integer := 0;
      Min, Max, NewLength	: Integer;
   begin
      if yyControl.yyMessages then
   -- 1. report the error
$@ 	 Errors.ErrorMessage (Errors.SyntaxError, Errors.Error, $.Attribute.Position);

   -- 2. report the offending token
	 Strings.To_tString (TokenName (Terminal), TokenString);
# ifdef SPELLING
$@ 	 $.GetWord (ContinueString);
	 if not (TokenString = ContinueString) then
	    TokenString := TokenString & " " & ContinueString;
	 end if;
# endif
	 Errors.ErrorMessageI (Errors.TokenFound, Errors.Information,
$@ 	    $.Attribute.Position, Errors.cString, TokenString'Address);

   -- 3. report the set of expected terminal symbols
	 Sets.MakeSet (ContinueSet, yyLastTerminal);
	 ComputeContinuation (StackSize, StackPtr, ContinueSet, True);
	 Length := 0;
	 Sets.Minimum (ContinueSet, Min);
	 Sets.Maximum (ContinueSet, Max);
	 for Token in Min .. Max loop
	    if Sets.IsElement (Token, ContinueSet) then
	       NewLength := Length + TokenName (Token)'Last + 1;
	       if NewLength <= 5000 then
		  ContinueArray (Length + 1 .. NewLength) := TokenName (Token) & " ";
		  Length := NewLength;
	       end if;
	    end if;
	 end loop;
	 Strings.To_tString (ContinueArray (1 .. Length), ContinueString);
	 Errors.ErrorMessageI (Errors.ExpectedTokens, Errors.Information,
$@ 	    $.Attribute.Position, Errors.cString, ContinueString'Address);
	 Sets.ReleaseSet (ContinueSet);
      end if;

   -- 4. compute the set of terminal symbols for restart of the parse
      Sets.MakeSet (RestartSet, yyLastTerminal);
      ComputeRestartPoints (StackSize, StackPtr, RestartSet);

   -- 5. skip terminal symbols until a restart point is reached
      TokensSkipped := False;
      while not Sets.IsElement (Terminal, RestartSet) loop
# ifdef YYDEBUG
	 PrevTerminal := Terminal;
# endif
	 Terminal := yyGetToken;
	 TokensSkipped := True;
# ifdef YYDEBUG
	 if yyDebug then
	    yyPrintState (yyStateStack (StackPtr));
	    Text_Io.Put (yyTrace, "skip    ");
	    Text_Io.Put (yyTrace, TokenName (PrevTerminal));
	    Text_Io.Put (yyTrace, ", lookahead: ");
	    Text_Io.Put (yyTrace, TokenName (Terminal));
	    yyNl;
	 end if;
# endif
      end loop;
      Sets.ReleaseSet (RestartSet);

   -- 6. report the restart point
      if TokensSkipped and yyControl.yyMessages then
$@ 	 Errors.ErrorMessage (Errors.RestartPoint, Errors.Information, $.Attribute.Position);
      end if;
   end ErrorRecovery;

-- compute the set of terminal symbols that can be accepted (read)
-- in a given stack configuration (eventually after reduce actions)

procedure ComputeContinuation (
	  StackSize	: Integer	;
	  StackPtr	: Integer	;
	  ContinueSet	: out Sets.tSet	;
	  reduce	: Boolean	) is

   begin
      Sets.AssignEmpty (ContinueSet);
      for Terminal in yyFirstTerminal .. yyLastTerminal loop
	 if IsContinuation (Terminal, StackSize, StackPtr, reduce) then
	    Sets.Include (ContinueSet, Terminal);
	 end if;
      end loop;
   end ComputeContinuation;

-- check whether a given terminal symbol can be accepted (read)
-- in a certain stack configuration (eventually after reduce actions)

function IsContinuation (
      Terminal		: Integer	;
      pStackSize	: Integer	;
      pStackPtr		: Integer	;
      reduce		: Boolean	) return Boolean is

      State		: Integer;
      Nonterminal	: Integer;
      Stack		: SStack_DA.FlexArray;
      StackSize		: Integer := pStackSize;
      StackPtr		: Integer := pStackPtr;
   begin
      SStack_DA.MakeArray (Stack, StackSize);
      Stack (0 .. StackPtr) := yyStateStack (0 .. StackPtr);
      State := Stack (StackPtr);
      loop
	 Stack (StackPtr) := State;
	 State := Next (State, Terminal);
	 if State = yyNoState then
	    SStack_DA.ReleaseArray (Stack, StackSize);
	    return False;
	 end if;

	 loop						-- reduce
	    if State > yyLastReduceState then		-- dynamic ?
	       State := yyCondition (State);
	    end if;
	    if State <= yyLastStopState then	-- read, read reduce, or accept ?
	       SStack_DA.ReleaseArray (Stack, StackSize);
	       return True;
	    elsif reduce then				-- reduce
	       StackPtr := StackPtr - yyLength (State);
	       Nonterminal := yyLeftHandSide (State);
	    else
	       return False;
	    end if;

	    State := Next (Stack (StackPtr), Nonterminal);
	    StackPtr := StackPtr + 1;
	    if StackPtr >= StackSize then
	       SStack_DA.ExtendArray (Stack, StackSize);
	    end if;
	    if State < yyFirstFinalState then exit; end if;
	 end loop;
      end loop;
   end IsContinuation;

-- compute a set of terminal symbols that can be used to restart
-- parsing in a given stack configuration. we simulate parsing until
-- end of file using a suffix program synthesized by the function
-- Continuation. All symbols acceptable in the states reached during
-- the simulation can be used to restart parsing.

procedure ComputeRestartPoints (
	  pStackSize	: Integer	;
	  pStackPtr	: Integer	;
	  RestartSet	: out Sets.tSet	) is

      Stack		: SStack_DA.FlexArray;
      StackSize		: Integer := pStackSize;
      StackPtr		: Integer := pStackPtr;
      State		: Integer;
      Nonterminal	: Integer;
      ContinueSet	: Sets.tSet;
   begin
      SStack_DA.MakeArray (Stack, StackSize);
      Stack (0 .. StackPtr) := yyStateStack (0 .. StackPtr);
      Sets.MakeSet (ContinueSet, yyLastTerminal);
      Sets.AssignEmpty (RestartSet);
      State := Stack (StackPtr);

      loop
	 if StackPtr >= StackSize then
	    SStack_DA.ExtendArray (Stack, StackSize);
	 end if;
	 Stack (StackPtr) := State;
	 ComputeContinuation (StackSize, StackPtr, ContinueSet, False);
	 Sets.Union (RestartSet, ContinueSet);
	 State := Next (State, yyContinuation (State));

	 if State >= yyFirstFinalState then		-- final state ?
	    if State <= yyLastReadReduceState then	-- read reduce ?
	       StackPtr := StackPtr + 1;
	       State := yyFinalToProd (State);
	    end if;

	    loop					-- reduce
	       if State > yyLastReduceState then	-- dynamic ?
		  State := yyCondition (State);
	       end if;
	       if (yyFirstReduceState <= State) and
		  (State <= yyLastStopState) then	-- accept
		  SStack_DA.ReleaseArray (Stack, StackSize);
		  Sets.ReleaseSet (ContinueSet);
		  return;
	       end if;
	       if State < yyFirstFinalState then	-- read
		  StackPtr := StackPtr + 1;
		  exit;
	       else					-- reduce
		  StackPtr := StackPtr - yyLength (State);
		  Nonterminal := yyLeftHandSide (State);
	       end if;

	       State := Next (Stack (StackPtr), Nonterminal);
	       StackPtr := StackPtr + 1;
	       if State < yyFirstFinalState then exit; end if;
	    end loop;
	 else						-- read
	    StackPtr := StackPtr + 1;
	 end if;
      end loop;
   end ComputeRestartPoints;
# endif

-- access the parse table:   Next : State x Symbol -> State

function Next (pState: Integer; Symbol: Integer) return Integer is
      CombIndex	: Integer;
      State	: Integer := pState;
   begin
      if Symbol <= yyLastTerminal then
	 loop
	    CombIndex := yyTBase (State) + Symbol;
	    if yyTComb (CombIndex).Check = State then return yyTComb (CombIndex).Next; end if;
# ifdef YYTDefault
	    State := yyTDefault (State);
	    if State = yyNoState then return yyNoState; end if;
# else
	    return yyNoState;
# endif
	 end loop;
      else
# ifdef YYNDefault
	 loop
	    CombIndex := yyNBase (State) + Symbol;
	    if yyNComb (CombIndex).Check = State then return yyNComb (CombIndex).Next; end if;
	    State := yyNDefault (State);
	 end loop;
# else
	 return yyNComb (yyNBase (State) + Symbol);
# endif
      end if;
   end Next;

$@ procedure Begin@ is
   begin
      null;
$B	-- BEGIN section is inserted here
$@    end Begin@;

$@ procedure Close@ is
   begin
      null;
$C	-- CLOSE section is inserted here
$@    end Close@;

$@ end @;
