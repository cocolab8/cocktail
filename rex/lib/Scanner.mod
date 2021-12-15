(* $Id: Scanner.mi,v 3.14 2008/09/25 21:08:31 grosch Exp $ *)

# define yyColumn(Index)	((Index) - yyLineStart)
# define yyOffset(Index)	(yyFileOffset + ((Index) - yyChBufferStart))

$@ IMPLEMENTATION MODULE @;

$@ IMPORT SYSTEM, Checks, rSystem, General, Pack, Position, IO, DynArray, Strings, $Source;
$G[ global user declarations
PROCEDURE ErrorAttribute (Token: INTEGER; VAR Attribute: tScanAttribute);
   BEGIN
   END ErrorAttribute;
$]

# ifndef yySetPosition
# define yySetPosition Attribute.Position.Line := yyLineCount; \
       Attribute.Position.Column := yyChBufferIndex - yyLineStart - TokenLength;
# endif

CONST
   yyTabSpace		= 8;
   yyDNoState		= 0;
   yyFileStackSize	= 16;
   yyInitBufferSize	= 1024 * 8 + 256;
$C constant declarations

TYPE
   yyTableElmt		= SHORTCARD;
   yyStateRange		= yyTableElmt [0 .. yyDStateCount];
   yyTableRange		= yyTableElmt [0 .. yyTableSize];
   yyCombType		= RECORD Check, Next: yyStateRange; END;
   yyCombTypePtr	= POINTER TO yyCombType;
   yytChBufferPtr	= POINTER TO ARRAY [0 .. 1000000] OF CHAR;
   yyChRange		= [yyFirstCh .. yyLastCh];

VAR
   yyBasePtr		: ARRAY yyStateRange	OF SYSTEM.ADDRESS;
   yyDefault		: ARRAY yyStateRange	OF yyStateRange	;
   yyComb		: ARRAY yyTableRange	OF yyCombType	;
   yyEobTrans		: ARRAY yyStateRange	OF yyStateRange	;
$M yyAction		: ARRAY yyStateRange	OF yyTableElmt	;
   yyToLower, yyToUpper	: ARRAY yyChRange	OF CHAR		;

   yyStateStack		: POINTER TO ARRAY [0 .. 1000000] OF yyStateRange;
   yyStateStackSize	: LONGINT;
   yyStartState		: yyStateRange;
   yyPreviousStart	: yyStateRange;
   yyCh			: CHAR;

   yyIsFirstCall	: BOOLEAN;
   yySourceFile		: rSystem.tFile;
   yyEof		: BOOLEAN;
   yyChBufferPtr	: yytChBufferPtr;
   yyChBufferStart	: INTEGER;
   yyChBufferSize	: LONGINT;
   yyChBufferIndex	: INTEGER;
   yyBytesRead		: INTEGER;
   yyFileOffset		: INTEGER;
   yyLineCount		: CARDINAL;
   yyLineStart		: INTEGER;

   yyFileStackPtr	: SHORTCARD;
   yyFileStack		: ARRAY [1 .. yyFileStackSize] OF RECORD
   			     SourceFile		: rSystem.tFile;
			     Eof		: BOOLEAN;
   			     ChBufferPtr	: yytChBufferPtr;
			     ChBufferStart	: INTEGER;
			     ChBufferSize	: LONGINT;
   			     ChBufferIndex	: INTEGER;
   			     BytesRead		: INTEGER;
   			     FileOffset		: INTEGER;
   			     LineCount		: CARDINAL;
   			     LineStart		: INTEGER;
			  END;

					(* Start State Stack: StStSt	*)

CONST yyInitStStStackSize	= 16;

VAR
   yyStStStackSize	: LONGINT;
   yyStStStackPtr	: POINTER TO ARRAY [0 .. 100000] OF yyStateRange;
   yyStStStackIdx	: LONGINT;

PROCEDURE yyPush (yyState: yyStateRange);
   BEGIN
      IF yyStStStackIdx = yyStStStackSize THEN
	 DynArray.ExtendArray (yyStStStackPtr, yyStStStackSize, SYSTEM.TSIZE (yyStateRange));
      END;
      yyStStStackPtr^ [yyStStStackIdx] := yyStartState;
      INC (yyStStStackIdx);
      yyStart (yyState);
   END yyPush;

PROCEDURE yyPop;
   BEGIN
      yyPreviousStart := yyStartState;
      IF yyStStStackIdx > 0 THEN
	 DEC (yyStStStackIdx);
	 yyStartState := yyStStStackPtr^ [yyStStStackIdx];
      ELSE
	 yyErrorMessage (6);
      END;
   END yyPop;

PROCEDURE GetToken (): INTEGER;
   VAR
      yyState		: yyStateRange;
      yyTablePtr	: yyCombTypePtr;
      yyRestart		: BOOLEAN;
      yyi, yySource, yyTarget, yyChBufferFree	: INTEGER;
$L local user declarations
BEGIN
   LOOP
      yyState		:= yyStartState;
      TokenLength 	:= 0;
      TokenIndex	:= yyChBufferIndex;
$J    IF yyChBufferPtr^ [yyChBufferIndex - 1] = yyEolCh THEN INC (yyState); END;

      (* ASSERT yyChBuffer [yyChBufferIndex] = first character *)

      LOOP		(* eventually restart after sentinel *)
	 LOOP		(* execute as many state transitions as possible *)
	    					(* determine next state *)
	    yyTablePtr := yyCombTypePtr (yyBasePtr [yyState] +
	       ORD (yyChBufferPtr^ [yyChBufferIndex]) * SYSTEM.TSIZE (yyCombType));
	    IF yyTablePtr^.Check # yyState THEN
	       yyState := yyDefault [yyState];
	       IF yyState = yyDNoState THEN EXIT; END;
	    ELSE
	       yyState := yyTablePtr^.Next;
	       INC (TokenLength);
	       yyStateStack^ [TokenLength] := yyState;	(* push state *)
	       INC (yyChBufferIndex);		(* get next character *)
	    END;
	 END;

	 LOOP					(* search for last final state *)
$A case header and user actions		(* CASE yyStateStack^ [TokenLength] OF *)
$N non final states
	    (* non final states *)
		  DEC (yyChBufferIndex);	(* return character *)
		  DEC (TokenLength)		(* pop state *)

$P	    |  yyDefaultState	:
		  INC (yyChBufferIndex);
		  TokenLength := 1;
		  yySetPosition
$D[ default action
		  IO.WriteC (IO.StdOutput, yyChBufferPtr^ [yyChBufferIndex-1]);
$]
	          yyRestart := FALSE; EXIT;

	    |  yyDNoState	:
	          yyRestart := FALSE; EXIT;

$O	    |  yyEobState	:		(* end of buffer sentinel found *)
		  DEC (yyChBufferIndex);	(* undo last state transition *)
		  DEC (TokenLength);		(* get previous state *)
		  IF TokenLength = 0 THEN
		     yyState := yyStartState;
$J		     IF yyChBufferPtr^ [yyChBufferIndex - 1] = yyEolCh THEN INC (yyState); END;
		  ELSE
		     yyState := yyStateStack^ [TokenLength];
		  END;

		  IF yyChBufferIndex # yyChBufferStart + yyBytesRead THEN
		     yyState := yyEobTrans [yyState];	(* end of buffer sentinel in buffer *)
		     IF yyState # yyDNoState THEN
			INC (yyChBufferIndex);
			INC (TokenLength);
			yyStateStack^ [TokenLength] := yyState;
			yyRestart := TRUE; EXIT;
		     END;
		  ELSE				(* end of buffer reached *)
		     IF NOT yyEof THEN
			(* copy initial part of token in front of input buffer *)
			yySource := yyChBufferIndex - TokenLength - 1;
			yyTarget := General.MaxAlign - TokenLength MOD General.MaxAlign - 1;
			IF yySource > yyTarget THEN
			   FOR yyi := 0 TO TokenLength DO
			      yyChBufferPtr^ [yyTarget + yyi] := yyChBufferPtr^ [yySource + yyi];
			   END;
			   DEC (yyLineStart, yySource - yyTarget);
			   DEC (TokenIndex, yySource - yyTarget);
			   yyChBufferStart := yyTarget + TokenLength + 1;
			ELSE
			   yyChBufferStart := yyChBufferIndex;
			END;
						(* extend buffer if necessary *)
			yyChBufferFree := General.Exp2 (General.Log2 (yyChBufferSize - 4 - General.MaxAlign - TokenLength));
			IF yyChBufferFree < yyChBufferSize DIV 8 THEN
			   DynArray.ExtendArray (yyChBufferPtr, yyChBufferSize, SYSTEM.TSIZE (CHAR));
			   IF yyChBufferPtr = NIL THEN yyErrorMessage (1); END;
			   yyChBufferFree := General.Exp2 (General.Log2 (yyChBufferSize - 4 - General.MaxAlign - TokenLength));
			   IF yyStateStackSize < yyChBufferSize THEN
			      DynArray.ExtendArray (yyStateStack, yyStateStackSize, SYSTEM.TSIZE (yyStateRange));
			      IF yyStateStack = NIL THEN yyErrorMessage (1); END;
			   END;
			END;
						(* read buffer and restart *)
			yyChBufferIndex := yyChBufferStart;
		        INC (yyFileOffset, yyBytesRead);
$@ 			yyBytesRead := $Source.GetLine (yySourceFile, SYSTEM.ADR
			   (yyChBufferPtr^ [yyChBufferIndex]), yyChBufferFree);
			IF yyBytesRead <= 0 THEN yyBytesRead := 0; yyEof := TRUE; END;
			yyChBufferPtr^ [yyChBufferStart + yyBytesRead    ] := yyEobCh;
			yyChBufferPtr^ [yyChBufferStart + yyBytesRead + 1] := 0C;
			yyRestart := TRUE; EXIT;
		     END;

		     IF TokenLength = 0 THEN	(* end of file reached *)
			yySetPosition
			CloseFile;
			IF yyFileStackPtr = 0 THEN
$E eof action
			END;
			IF yyFileStackPtr = 0 THEN RETURN EofToken; END;
			yyRestart := FALSE; EXIT;
		     END;
		  END;
	    ELSE
	       yyErrorMessage (0);
	    END;
	 END;
	 IF yyRestart THEN ELSE EXIT; END;
      END;
   END;
END GetToken;

PROCEDURE BeginFile (FileName: ARRAY OF CHAR);
   BEGIN
      IF yyIsFirstCall AND (yyBytesRead = 0) THEN
	 yyFileStackPtr	:= 0;
	 yyIsFirstCall	:= FALSE;
      END;
      yyInitialize;
      IF ORD (FileName [0]) = 0 THEN
	 yySourceFile := rSystem.StdInput;
      ELSE
$@       yySourceFile := $Source.BeginSource (FileName);
      END;
      IF yySourceFile < 0 THEN yyErrorMessage (5); END;
   END BeginFile;

PROCEDURE yyInitialize;
   BEGIN
      IF yyFileStackPtr >= yyFileStackSize THEN yyErrorMessage (3); END;
      INC (yyFileStackPtr);			(* push file *)
      WITH yyFileStack [yyFileStackPtr] DO
	 SourceFile	:= yySourceFile		;
	 Eof		:= yyEof		;
	 ChBufferPtr	:= yyChBufferPtr	;
	 ChBufferStart	:= yyChBufferStart	;
	 ChBufferSize	:= yyChBufferSize	;
	 ChBufferIndex	:= yyChBufferIndex	;
	 BytesRead	:= yyBytesRead		;
	 FileOffset	:= yyFileOffset		;
	 LineCount	:= yyLineCount		;
	 LineStart	:= yyLineStart		;
      END;
						(* initialize file state *)
      yyChBufferSize	:= yyInitBufferSize;
      DynArray.MakeArray (yyChBufferPtr, yyChBufferSize, SYSTEM.TSIZE (CHAR));
      IF yyChBufferPtr = NIL THEN yyErrorMessage (1); END;
      yyChBufferStart	:= General.MaxAlign;
      yyChBufferPtr^ [yyChBufferStart - 1] := yyEolCh; (* begin of line indicator *)
      yyChBufferPtr^ [yyChBufferStart    ] := yyEobCh; (* end of buffer sentinel *)
      yyChBufferPtr^ [yyChBufferStart + 1] := 0C;
      yyChBufferIndex	:= yyChBufferStart;
      yyEof		:= FALSE;
      yyBytesRead	:= 0;
      yyFileOffset	:= 0;
      yyLineCount	:= 1;
      yyLineStart	:= yyChBufferStart - 1;
   END yyInitialize;

PROCEDURE CloseFile;
   BEGIN
      IF yyFileStackPtr = 0 THEN yyErrorMessage (4); END;
$@       $Source.CloseSource (yySourceFile);
      DynArray.ReleaseArray (yyChBufferPtr, yyChBufferSize, SYSTEM.TSIZE (CHAR));
      WITH yyFileStack [yyFileStackPtr] DO	(* pop file *)
	 yySourceFile	:= SourceFile		;
	 yyEof		:= Eof			;
	 yyChBufferPtr	:= ChBufferPtr		;
	 yyChBufferStart:= ChBufferStart	;
	 yyChBufferSize	:= ChBufferSize		;
	 yyChBufferIndex:= ChBufferIndex	;
	 yyBytesRead	:= BytesRead		;
	 yyFileOffset	:= FileOffset		;
	 yyLineCount	:= LineCount		;
	 yyLineStart	:= LineStart		;
      END;
      DEC (yyFileStackPtr);		
      yyIsFirstCall	:= FALSE;
   END CloseFile;

PROCEDURE GetWord (VAR Word: Strings.tString);
   VAR i, WordStart	: CARDINAL;
   BEGIN
      WordStart := yyChBufferIndex - TokenLength - 1;
      Word.Length := General.Min (TokenLength, Strings.cMaxStrLength);
      FOR i := 1 TO Word.Length DO
	 Word.Chars [i] := yyChBufferPtr^ [WordStart + i];
      END;
   END GetWord;

PROCEDURE GetLower (VAR Word: Strings.tString);
   VAR i, WordStart	: CARDINAL;
   BEGIN
      WordStart := yyChBufferIndex - TokenLength - 1;
      Word.Length := General.Min (TokenLength, Strings.cMaxStrLength);
      FOR i := 1 TO Word.Length DO
	 Word.Chars [i] := yyToLower [yyChBufferPtr^ [WordStart + i]];
      END;
   END GetLower;

PROCEDURE GetUpper (VAR Word: Strings.tString);
   VAR i, WordStart	: CARDINAL;
   BEGIN
      WordStart := yyChBufferIndex - TokenLength - 1;
      Word.Length := General.Min (TokenLength, Strings.cMaxStrLength);
      FOR i := 1 TO Word.Length DO
	 Word.Chars [i] := yyToUpper [yyChBufferPtr^ [WordStart + i]];
      END;
   END GetUpper;

PROCEDURE yyStart (State: yyStateRange);
   BEGIN
      yyPreviousStart	:= yyStartState;
      yyStartState	:= State;
   END yyStart;

PROCEDURE yyPrevious;
   VAR s	: yyStateRange;
   BEGIN
      s		      := yyStartState;
      yyStartState    := yyPreviousStart;
      yyPreviousStart := s;
   END yyPrevious;

PROCEDURE yyEcho;
   VAR i	: INTEGER;
   BEGIN
      FOR i := yyChBufferIndex - TokenLength TO yyChBufferIndex - 1 DO
	 IO.WriteC (IO.StdOutput, yyChBufferPtr^ [i]);
      END;
   END yyEcho;

PROCEDURE yyLess (n: INTEGER);
   BEGIN
      DEC (yyChBufferIndex, TokenLength - n);
      TokenLength := n;
   END yyLess;

PROCEDURE yyTab;
   BEGIN
      DEC (yyLineStart, yyTabSpace - 1 - (yyChBufferIndex - yyLineStart - 2) MOD yyTabSpace);
   END yyTab;

PROCEDURE yyTab1 (a: INTEGER);
   BEGIN
      DEC (yyLineStart, yyTabSpace - 1 - (yyChBufferIndex - yyLineStart - TokenLength + a - 1) MOD yyTabSpace);
   END yyTab1;

PROCEDURE yyTab2 (a, b: INTEGER);
   BEGIN
      DEC (yyLineStart, yyTabSpace - 1 - (yyChBufferIndex - yyLineStart - TokenLength + a - 1) MOD yyTabSpace);
   END yyTab2;

PROCEDURE yyEol (Column: INTEGER);
   BEGIN
      INC (yyLineCount);
      yyLineStart := yyChBufferIndex - 1 - Column;
   END yyEol;

PROCEDURE output (c: CHAR);
   BEGIN
      IO.WriteC (IO.StdOutput, c);
   END output;

PROCEDURE unput (c: CHAR);
   BEGIN
      DEC (yyChBufferIndex);
      yyChBufferPtr^ [yyChBufferIndex] := c;
   END unput;

PROCEDURE input (): CHAR;
   BEGIN
      IF yyChBufferIndex = yyChBufferStart + yyBytesRead THEN
	 IF NOT yyEof THEN
	    DEC (yyLineStart, yyBytesRead);
	    yyChBufferStart := General.MaxAlign;
	    yyChBufferIndex := yyChBufferStart;
	    INC (yyFileOffset, yyBytesRead);
$@ 	    yyBytesRead := $Source.GetLine (yySourceFile, yyChBufferPtr, General.Exp2 (General.Log2 (yyChBufferSize)));
	    IF yyBytesRead <= 0 THEN yyBytesRead := 0; yyEof := TRUE; END;
	    yyChBufferPtr^ [yyBytesRead    ] := yyEobCh;
	    yyChBufferPtr^ [yyBytesRead + 1] := 0C;
	 END;
      END;
      IF yyChBufferIndex = yyChBufferStart + yyBytesRead THEN
	 RETURN 0C;
      ELSE
	 INC (yyChBufferIndex);
	 RETURN yyChBufferPtr^ [yyChBufferIndex - 1];
      END;
   END input;

PROCEDURE BeginScanner;
   BEGIN
$I user initialization code
   END BeginScanner;

PROCEDURE CloseScanner;
   BEGIN
$F user finalization code
   END CloseScanner;

VAR yyunpackindex	: CARDINAL;

PROCEDURE UnpackBaseHandler (value: LONGCARD);
   BEGIN
      yyBasePtr [yyunpackindex] := SYSTEM.ADR (yyComb [value]);
      INC (yyunpackindex);
   END UnpackBaseHandler;

PROCEDURE UnpackDefaultHandler (value: LONGCARD);
   BEGIN
      yyDefault [yyunpackindex] := value;
      INC (yyunpackindex);
   END UnpackDefaultHandler;

PROCEDURE UnpackEobTransHandler (value: LONGCARD);
   BEGIN
      yyEobTrans [yyunpackindex] := value;
      INC (yyunpackindex);
   END UnpackEobTransHandler;

$MPROCEDURE UnpackActionHandler (value: LONGCARD);
$M BEGIN
$M    yyAction [yyunpackindex] := value;
$M    INC (yyunpackindex);
$M END UnpackActionHandler;

PROCEDURE UnpackCombHandler (value: LONGCARD);
   BEGIN
      IF NOT ODD (yyunpackindex) THEN
	 yyComb [yyunpackindex DIV 2].Check := value;
      ELSE
	 yyComb [yyunpackindex DIV 2].Next := value;
      END;
      INC (yyunpackindex);
   END UnpackCombHandler;

PROCEDURE yyInitTables;
   VAR hc	: Pack.UnpackCardHandler;
   BEGIN
      hc := UnpackBaseHandler; yyunpackindex := 1;
$B	(* Unpack of Base data gets inserted here *)
      hc := UnpackDefaultHandler; yyunpackindex := 1;
$U	(* Unpack of yyDefault data gets inserted here *)
      hc := UnpackEobTransHandler; yyunpackindex := 1;
$R	(* Unpack of yyEobTrans data gets inserted here *)
$M    hc := UnpackActionHandler; yyunpackindex := 1;
$Q	(* Unpack of yyAction data gets inserted here *)
      hc := UnpackCombHandler; yyunpackindex := 0;
$T	(* Unpack of yyComb data gets inserted here *)
   END yyInitTables;

PROCEDURE yyErrorMessage (ErrorCode: SHORTCARD);
   BEGIN
      Position.WritePosition (IO.StdError, Attribute.Position);
      CASE ErrorCode OF
$@    | 0: IO.WriteS (IO.StdError, ": @: internal error");
$@    | 1: IO.WriteS (IO.StdError, ": @: out of memory");
$@    | 3: IO.WriteS (IO.StdError, ": @: too many nested include files");
$@    | 4: IO.WriteS (IO.StdError, ": @: file stack underflow (too many calls of CloseFile)");
$@    | 5: IO.WriteS (IO.StdError, ": @: cannot open input file");
$@    | 6: IO.WriteS (IO.StdError, ": @: start stack underflow (too many calls of yyPop)");
      END;
      IO.WriteNl (IO.StdError); Exit;
   END yyErrorMessage;

PROCEDURE yyExit;
   BEGIN
      IO.CloseIO; rSystem.rExit (1);
   END yyExit;

BEGIN
   Exit			:= yyExit;
   yyIsFirstCall	:= TRUE;
   yyFileStackPtr	:= 0;
   yyInitialize;
   yySourceFile		:= rSystem.StdInput;
   yyStartState		:= STD;
   yyPreviousStart	:= STD;
   yyStateStackSize	:= yyInitBufferSize;
   DynArray.MakeArray (yyStateStack, yyStateStackSize, SYSTEM.TSIZE (yyStateRange));
   yyStateStack^ [0]	:= yyDefaultState;	(* stack underflow sentinel *)
   yyStStStackSize	:= yyInitStStStackSize;
   DynArray.MakeArray (yyStStStackPtr, yyStStStackSize, SYSTEM.TSIZE (yyStateRange));
   yyStStStackIdx	:= 0;
   yyInitTables;

   FOR yyCh := yyFirstCh TO yyLastCh DO yyToLower [yyCh] := yyCh; END;
   yyToUpper := yyToLower;
   FOR yyCh := 'A' TO 'Z' DO
      yyToLower [yyCh] := CHR (ORD (yyCh) - ORD ('A') + ORD ('a'));
   END;
   FOR yyCh := 'a' TO 'z' DO
      yyToUpper [yyCh] := CHR (ORD (yyCh) - ORD ('a') + ORD ('A'));
   END;
$@ END @.
