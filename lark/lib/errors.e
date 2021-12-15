-- $Id: errors.e,v 1.1 1996/01/16 21:27:18 grosch rel $

class Errors

creation make

feature
					-- error codes
NoText		: INTEGER is unique
SyntaxError	: INTEGER is unique
ExpectedTokens	: INTEGER is unique
RestartPoint	: INTEGER is unique
TokenInserted	: INTEGER is unique
WrongParseTable	: INTEGER is unique
OpenParseTable	: INTEGER is unique
ReadParseTable	: INTEGER is unique
TooManyErrors	: INTEGER is unique
TokenFound	: INTEGER is unique
FoundExpected	: INTEGER is unique
					-- error classes
NoClass		: INTEGER is unique
Fatal		: INTEGER is unique
Restriction	: INTEGER is unique
Error		: INTEGER is unique
Warning		: INTEGER is unique
Repair		: INTEGER is unique
Note		: INTEGER is unique
Information	: INTEGER is unique
					-- info classes
IsNone		: INTEGER is unique
IsInteger	: INTEGER is unique
IsShort		: INTEGER is unique
IsLong		: INTEGER is unique
IsReal		: INTEGER is unique
IsBoolean	: INTEGER is unique
IsCharacter	: INTEGER is unique
IsString	: INTEGER is unique
IsSet		: INTEGER is unique
IsIdent		: INTEGER is unique
IsPosition	: INTEGER is unique

BRIEF		: BOOLEAN
FIRST		: BOOLEAN
TRUNCATE	: BOOLEAN

feature	 {none}

MessageCount	: INTEGER
IsStore		: BOOLEAN
PrevLine	: INTEGER
FoundString	: STRING
stderr		: rFILE
System		: rSYSTEM

feature

make is
   do
      !! stderr.make_write_from_fp (stderr.stderr_fp)
      IsStore	:= FALSE
      PrevLine	:= 0
      BRIEF	:= TRUE
      FIRST	:= TRUE
      TRUNCATE	:= TRUE
   end

StoreMessages (Store: BOOLEAN) is
			-- Messages are stored if 'Store' = TRUE
			-- for printing with the routine 'WriteMessages'
			-- otherwise they are printed immediately.
			-- If 'Store'=TRUE the message store is cleared.
   do
      IsStore := Store
   end

ErrorMessage (ErrorCode, ErrorClass: INTEGER; Position: Position) is
			-- Report a message represented by an integer
			-- 'ErrorCode' and classified by 'ErrorClass'.
   do
      WriteMessage (TRUE, void, ErrorCode, ErrorClass, Position, IsNone, void)
   end

ErrorMessageI (ErrorCode, ErrorClass: INTEGER; Position	: Position
	InfoClass: INTEGER; Info: ANY) is
			-- Like the previous routine with additional
			-- information of type 'InfoClass' at the
			-- address 'Info'.
   do
      WriteMessage (TRUE, void, ErrorCode, ErrorClass, Position, InfoClass, Info)
   end

Message (ErrorText: STRING; ErrorClass: INTEGER; Position: Position) is
			-- Report a message represented by a string
			-- 'ErrorText' and classified by 'ErrorClass'.
   do
      WriteMessage (FALSE, ErrorText, NoText, ErrorClass, Position, IsNone, void)
   end

MessageI (ErrorText: STRING; ErrorClass: INTEGER; Position: Position
	InfoClass: INTEGER; Info: ANY) is
			-- Like the previous routine with additional
			-- information of type 'InfoClass' at the
			-- address 'Info'.
   do
      WriteMessage (FALSE, ErrorText, NoText, ErrorClass, Position, InfoClass, Info)
   end

WriteMessages (File: rFile) is
			-- The stored messages are sorted by their
			-- source position and printed on 'File'.
   do
   end

feature	 {none}

WriteMessage (IsErrorCode: BOOLEAN; ErrorText: STRING; ErrorCode, ErrorClass: INTEGER
	Position: Position; InfoClass: INTEGER; Info: ANY) is
   local
      return	: BOOLEAN
      ToString	: STRING
   do
      return := FALSE
      if IsErrorCode then
         if BRIEF then
	    inspect ErrorCode
	    when TokenFound	then
	       FoundString ?= Info
	       FoundString.extend ('/')
	       return := TRUE
	    when SyntaxError	,
		 RestartPoint	,
		 TokenInserted	then
	       return := TRUE
	    when ExpectedTokens	then
	       ToString ?= Info
	       FoundString.append (ToString)
	       WriteHead (Position, Error)
	       stderr.putstring (CodeToText (FoundExpected))
	       WriteInfo (InfoClass, FoundString)
	       stderr.new_line
	       return := TRUE
	    else
	    end
	 end
         if FIRST then
	    if Position.Line = PrevLine then
	       return := TRUE
	    else
	       PrevLine := Position.Line
	    end
	 end
      end
      if not return then
	 WriteHead (Position, ErrorClass)
	 if IsErrorCode then
	    stderr.putstring (CodeToText (ErrorCode))
	 else
	    stderr.putstring (ErrorText)
	 end
	 WriteInfo (InfoClass, Info)
	 stderr.new_line
	 if ErrorClass = Fatal and not IsStore then System.exit (1) end
      end
   end

WriteHead (Position: Position; ErrorClass: INTEGER) is
   do
      Position.WritePosition (stderr)
      if Position.Line = 0 and then Position.Column = 0 then
	 stderr.putstring ("  ")
      else
	 stderr.putstring (": ")
      end
      inspect ErrorClass
      when NoClass     then stderr.putstring ("            ")
      when Fatal       then stderr.putstring ("Fatal       ")
      when Restriction then stderr.putstring ("Restriction ")
      when Error       then stderr.putstring ("Error       ")
      when Warning     then stderr.putstring ("Warning     ")
      when Repair      then stderr.putstring ("Repair      ")
      when Note        then stderr.putstring ("Note        ")
      when Information then stderr.putstring ("Information ")
      else stderr.putstring ("Error class: "); stderr.putint (ErrorClass)
      end
   end

CodeToText (ErrorCode: INTEGER): STRING is
   do
      inspect ErrorCode
      when NoText          then Result := ""
      when SyntaxError     then Result := "syntax error"
      when ExpectedTokens  then Result := "expected tokens"
      when RestartPoint    then Result := "restart point"
      when TokenInserted   then Result := "token inserted "
      when WrongParseTable then Result := "parse table mismatch"
      when OpenParseTable  then Result := "cannot open parse table"
      when ReadParseTable  then Result := "cannot read parse table"
      when TooManyErrors   then Result := "too many messages"
      when TokenFound      then Result := "token found    "
      when FoundExpected   then Result := "found/expected "
      else			Result := " unknown error"
      end
   end

WriteInfo (InfoClass: INTEGER; Info: ANY) is
   local
      ToInteger		: INTEGER_REF
      ToReal		: REAL_REF
      ToBoolean		: BOOLEAN_REF
      ToCharacter	: CHARACTER_REF
      ToString		: STRING
   do
      if InfoClass /= IsNone then
         stderr.putstring (": ")
         inspect InfoClass
	 when IsInteger   then ToInteger   ?= Info; stderr.putint  (ToInteger.item)
	 when IsShort     then ToInteger   ?= Info; stderr.putint  (ToInteger.item)
	 when IsLong      then ToInteger   ?= Info; stderr.putint  (ToInteger.item)
	 when IsReal      then ToReal      ?= Info; stderr.putreal (ToReal.item)
	 when IsBoolean   then ToBoolean   ?= Info; stderr.putbool (ToBoolean.item)
	 when IsCharacter then ToCharacter ?= Info; stderr.putchar (ToCharacter.item)
	 when IsString    then ToString    ?= Info; WriteT (stderr, ToString)
	 else stderr.putstring ("info class: "); stderr.putint (InfoClass)
	 end
      end
   end

WriteT (File: rFILE; Text: STRING) is
   local
      l, i	: INTEGER
      c		: CHARACTER
   do
      if TRUNCATE then
	 l := Text.count
	 if l <= 32 then
	    File.putstring (Text)
	 else
	    File.putstring (Text.substring (1, 32))
	    from i := 33 until i > l loop
	       c := Text.item (i)
	       if c = ' ' then
		  if i < l then File.putstring (" ...") end
	          i := l
	       else
		  File.putchar (c)
	       end
	       i := i + 1
	    end
	 end
      else
	 File.putstring (Text)
      end
   end

end
