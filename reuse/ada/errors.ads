-- $Id: Errors.md,v 1.1 1994/08/15 22:13:23 grosch rel $

-- $Log: Errors.md,v $

-- Ich, Doktor Josef Grosch, Informatiker, Aug. 1994

with System, Text_Io, Position;
use  System, Text_Io, Position;

package Errors is

NoText		: constant Integer := 0	;
SyntaxError	: constant Integer := 1	;	-- error codes
ExpectedTokens	: constant Integer := 2	;
RestartPoint	: constant Integer := 3	;
TokenInserted	: constant Integer := 4	;
WrongParseTable	: constant Integer := 5	;
OpenParseTable	: constant Integer := 6	;
ReadParseTable	: constant Integer := 7	;
TooManyErrors	: constant Integer := 8	;
TokenFound	: constant Integer := 9	;
FoundExpected	: constant Integer := 10;

NoClass		: constant Integer := 0	;
Fatal		: constant Integer := 1	;	-- error classes
Restriction	: constant Integer := 2	;
Error		: constant Integer := 3	;
Warning		: constant Integer := 4	;
Repair		: constant Integer := 5	;
Note		: constant Integer := 6	;
Information	: constant Integer := 7	;

cNone		: constant Integer := 0	;
cInteger	: constant Integer := 1	;	-- info classes
cShort		: constant Integer := 2	;
cLong		: constant Integer := 3	;
cFloat		: constant Integer := 4	;
cBoolean	: constant Integer := 5	;
cCharacter	: constant Integer := 6	;
cString		: constant Integer := 7	;
cSet		: constant Integer := 9	;
cIdent		: constant Integer := 10;
cPosition	: constant Integer := 11;

BRIEF		: Boolean := True;
FIRST		: Boolean := True;
TRUNCATE	: Boolean := True;

procedure StoreMessages	(Store: Boolean);
			-- Messages are stored if 'Store' = True
			-- for printing with the routine 'WriteMessages'
			-- otherwise they are printed immediately.
			-- If 'Store'=True the message store is cleared.

procedure ErrorMessage	(ErrorCode, ErrorClass: Integer; Position: tPosition);
			-- Report a message represented by an integer
			-- 'ErrorCode' and classified by 'ErrorClass'.

procedure ErrorMessageI	(ErrorCode, ErrorClass: Integer; Position: tPosition;
			 InfoClass: Integer; Info: Address);
			-- Like the previous routine with additional
			-- information of type 'InfoClass' at the
			-- address 'Info'.

procedure Message 	(ErrorText: String; ErrorClass: Integer; Position: tPosition);
			-- Report a message represented by a string
			-- 'ErrorText' and classified by 'ErrorClass'.

procedure MessageI	(ErrorText: String; ErrorClass: Integer; Position: tPosition;
			 InfoClass: Integer; Info: Address);
			-- Like the previous routine with additional
			-- information of type 'InfoClass' at the
			-- address 'Info'.

procedure WriteMessages	(File: File_Type);
			-- The stored messages are sorted by their
			-- source position and printed on 'File'.

end Errors;
