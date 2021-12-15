-- $Id: Errors.mi,v 1.5 1994/08/15 22:13:23 grosch rel $

-- $Log: Errors.mi,v $

-- Ich, Doktor Josef Grosch, Informatiker, Aug. 1994

with Strings, Idents, Sets, Position, Sort, Unchecked_Conversion;
use  Strings, Idents, Sets, Position;

package body Errors is

package Int_Io		is new Integer_Io	(Integer	); use Int_Io;
package Real_Io		is new Float_Io		(Float		); use Real_Io;
package Bool_Io		is new Enumeration_Io	(Boolean	); use Bool_Io;
package Char_Io		is new Enumeration_Io	(Character	); use Char_Io;

subtype	Short		is Integer range 0 .. 2 ** 16 - 1;
subtype	Long		is Integer;

type	tpInteger	is access Integer	;
type	tpShort		is access Short		;
type	tpLong		is access Integer	;
type	tpFloat		is access Float		;
type	tpBoolean	is access Boolean	;
type	tpCharacter	is access Character	;
type	tptString	is access tString	;
type	tpSet		is access tSet		;
type	tpIdent		is access tIdent	;
type	tpPosition	is access tPosition	;

function To_Integer	is new Unchecked_Conversion (Address, tpInteger	);
function To_Short	is new Unchecked_Conversion (Address, tpShort	);
function To_Long	is new Unchecked_Conversion (Address, tpLong	);
function To_Float	is new Unchecked_Conversion (Address, tpFloat	);
function To_Boolean	is new Unchecked_Conversion (Address, tpBoolean	);
function To_Character	is new Unchecked_Conversion (Address, tpCharacter);
function To_tString	is new Unchecked_Conversion (Address, tptString	);
function To_Set		is new Unchecked_Conversion (Address, tpSet	);
function To_Ident	is new Unchecked_Conversion (Address, tpIdent	);
function To_Position	is new Unchecked_Conversion (Address, tpPosition);

	MaxError	: constant Integer := 500;

type	tError	is record
		   Position	: tPosition	;
		   IsErrorCode	: Boolean	;
		   ErrorNumber	: Short		;
		   ErrorCode	: Short		;
		   ErrorClass	: Short		;
		   InfoClass	: Short		;
		   Info		: Address	;
		end record;

	ErrorTable	: array (0 .. MaxError) of tError;
	MessageCount	: Integer := 0;
	IsStore		: Boolean := False;
	PrevLine	: Integer := 0;
	FoundString	: tString;

procedure WriteHead	(File: File_Type; Position: tPosition; ErrorClass: Integer);
procedure WriteCode	(File: File_Type; ErrorCode: Integer);
procedure WriteInfo	(File: File_Type; InfoClass: Integer; Info: Address);
procedure WriteT	(File: File_Type; String: tString);
procedure WriteMessage	(File: File_Type; IsErrorCode: Boolean; ErrorCode, ErrorClass: Integer;
			 Position: tPosition; InfoClass: Integer := cNone; Info: Address := IsStore'Address);
procedure StoreMessage	(pIsErrorCode: Boolean; pErrorCode, pErrorClass: Integer;
			 pPosition: tPosition; pInfoClass: Integer := cNone; pInfo: Address := IsStore'Address);
procedure Swap		(i, j: Integer);
function  IsLess	(i, j: Integer) return Boolean;

package	Error_Sort	is new Sort (IsLess, Swap);

procedure ErrorMessage	(ErrorCode, ErrorClass: Integer; Position: tPosition) is
   begin
      if IsStore then
	 StoreMessage (True, ErrorCode, ErrorClass, Position);
      else
	 WriteMessage (Standard_Error, True, ErrorCode, ErrorClass, Position);
      end if;
   end ErrorMessage;

procedure ErrorMessageI	(ErrorCode, ErrorClass: Integer; Position: tPosition;
			 InfoClass: Integer; Info: Address) is
   begin
      if IsStore then
	 StoreMessage (True, ErrorCode, ErrorClass, Position, InfoClass, Info);
      else
	 WriteMessage (Standard_Error, True, ErrorCode, ErrorClass, Position, InfoClass, Info);
      end if;
   end ErrorMessageI;

procedure Message  (ErrorText: String; ErrorClass: Integer; Position: tPosition) is
      s	: tString;
   begin
      To_tString (ErrorText, s);
      if IsStore then
	 StoreMessage (False, MakeIdent (s), ErrorClass, Position);
      else
	 WriteMessage (Standard_Error, False, MakeIdent (s), ErrorClass, Position);
      end if;
   end Message;

procedure MessageI (ErrorText: String; ErrorClass: Integer; Position: tPosition;
			 InfoClass: Integer; Info: Address) is
      s	: tString;
   begin
      To_tString (ErrorText, s);
      if IsStore then
	 StoreMessage (False, MakeIdent (s), ErrorClass, Position, InfoClass, Info);
      else
	 WriteMessage (Standard_Error, False, MakeIdent (s), ErrorClass, Position, InfoClass, Info);
      end if;
   end MessageI;

procedure WriteHead (File: File_Type; Position: tPosition; ErrorClass: Integer) is
   begin
      if Compare (Position, NoPosition) = 0 then
	 Set_Col (File, Col (File) + 10);
      else
	 WritePosition (File, Position);
	 Put (File, ": ");
      end if;
      case ErrorClass is
      when NoClass	=> Put (File, "            ");
      when Fatal	=> Put (File, "Fatal       ");
      when Restriction	=> Put (File, "Restriction ");
      when Error	=> Put (File, "Error       ");
      when Warning	=> Put (File, "Warning     ");
      when Repair	=> Put (File, "Repair      ");
      when Note		=> Put (File, "Note        ");
      when Information	=> Put (File, "Information ");
      when others	=> Put (File, "Error class: "); Put (File, ErrorClass, 0);
      end case;
   end WriteHead;

procedure WriteCode (File: File_Type; ErrorCode: Integer) is
   begin
      case ErrorCode is
      when NoText		=> null;
      when SyntaxError		=> Put (File, "syntax error"		);
      when ExpectedTokens	=> Put (File, "expected tokens"		);
      when RestartPoint		=> Put (File, "restart point"		);
      when TokenInserted	=> Put (File, "token inserted "		);
      when WrongParseTable	=> Put (File, "parse table mismatch"	);
      when OpenParseTable	=> Put (File, "cannot open parse table"	);
      when ReadParseTable	=> Put (File, "cannot read parse table"	);
      when TooManyErrors	=> Put (File, "too many messages"	);
      when TokenFound		=> Put (File, "token found    "		);
      when FoundExpected	=> Put (File, "found/expected "		);
      when others		=> Put (File, " error code: "); Put (File, ErrorCode, 0);
      end case;
   end WriteCode;

procedure WriteInfo (File: File_Type; InfoClass: Integer; Info: Address) is
   begin
      if InfoClass = cNone then return; end if;
      Put (File, ": ");
      case InfoClass is
      when cInteger	=> Put (File, To_Integer	(Info).all, 0);
      when cShort	=> Put (File, To_Short		(Info).all, 0);
      when cLong	=> Put (File, To_Long		(Info).all, 0);
      when cFloat	=> Put (File, To_Float		(Info).all);
      when cBoolean	=> Put (File, To_Boolean	(Info).all);
      when cCharacter	=> Char_Io.Put (File, To_Character (Info).all);
      when cString	=> WriteT (File, To_tString	(Info).all);
      when cSet		=> WriteSet (File, To_Set	(Info).all);
      when cIdent	=> WriteIdent (File, To_Ident	(Info).all);
      when cPosition	=> WritePosition (File, To_Position (Info).all);
      when others	=> null;
      end case;
   end WriteInfo;

procedure WriteT (File: File_Type; String: tString) is
      l, i	: Integer;
      c		: Character;
   begin
      if TRUNCATE then
	 l := Length (String);
	 if l <= 32 then
	    WriteS (File, String);
	 else
	    Put (File, Slice (String, 1, 32));
	    i := 32;
	    loop
	       i := i + 1;
	       if i > l then exit; end if;
	       c := Element (String, i);
	       if c = ' ' then exit; end if;
	       Text_Io.Put (File, c);
	    end loop;
	    if i < l then Put (File, " ..."); end if;
	 end if;
      else
	 WriteS (File, String);
      end if;
   end WriteT;

procedure WriteMessage	(File: File_Type; IsErrorCode: Boolean; ErrorCode, ErrorClass: Integer;
			 Position: tPosition; InfoClass: Integer := cNone; Info: Address := IsStore'Address) is
   begin
      if IsErrorCode then
	 if BRIEF then
	    case ErrorCode is
	    when TokenFound	=> FoundString := To_tString (Info).all & "/";
				   return;
	    when SyntaxError	|
		 RestartPoint	|
		 TokenInserted	=> return;
	    when ExpectedTokens	=> FoundString := FoundString & To_tString (Info).all;
				   WriteHead (File, Position, Error);
				   WriteCode (File, FoundExpected);
				   WriteInfo (File, InfoClass, FoundString'Address);
				   New_Line (File);
				   return;
	    when others		=> null;
	    end case;
	 end if;
	 if FIRST and then Position.Line /= 0 then
	    if Position.Line = PrevLine then return; else PrevLine := Position.Line; end if;
	 end if; 
      end if; 
      WriteHead (File, Position, ErrorClass);
      if IsErrorCode then
	 WriteCode (File, ErrorCode);
      else
	 WriteIdent (File, ErrorCode);
      end if;
      WriteInfo (File, InfoClass, Info);
      New_Line (File);
      if (ErrorClass = Fatal) and not IsStore then raise Program_Error; end if;
   end WriteMessage;

procedure WriteMessages	(File: File_Type) is
   begin
      Error_Sort.QuickSort (1, MessageCount);
      for i in 1 .. MessageCount loop
	 WriteMessage (File, ErrorTable (i).IsErrorCode, ErrorTable (i).ErrorCode, ErrorTable (i).ErrorClass,
	    ErrorTable (i).Position, ErrorTable (i).InfoClass, ErrorTable (i).Info);
      end loop;
   end WriteMessages;

procedure StoreMessage	(pIsErrorCode: Boolean; pErrorCode, pErrorClass: Integer;
			 pPosition: tPosition; pInfoClass: Integer := cNone; pInfo: Address := IsStore'Address) is
      IntegerPtr	: tpInteger	;
      ShortPtr		: tpShort	;
      LongPtr		: tpLong	;
      FloatPtr		: tpFloat	;
      BooleanPtr	: tpBoolean	;
      CharacterPtr	: tpCharacter	;
      SetPtr		: tpSet		;
      IdentPtr		: tpIdent	;
      PositionPtr	: tpPosition	;
   begin
      if MessageCount < MaxError then
	 MessageCount := MessageCount + 1;
	 ErrorTable (MessageCount) := (
	    Position	=> pPosition	,
	    IsErrorCode	=> pIsErrorCode	,
	    ErrorNumber	=> MessageCount	,
	    ErrorCode	=> pErrorCode	,
	    ErrorClass	=> pErrorClass	,
	    InfoClass	=> pInfoClass	,
	    Info	=> IsStore'Address
	 );
	 case pInfoClass is
	 when cInteger	=> IntegerPtr		:= new Integer	;
	 		   IntegerPtr.all	:= To_Integer	(pInfo).all;
	 		   ErrorTable (MessageCount).Info := IntegerPtr	.all'Address;
	 when cShort	=> ShortPtr		:= new Short	;
	 		   ShortPtr.all		:= To_Short	(pInfo).all;
	 		   ErrorTable (MessageCount).Info := ShortPtr	.all'Address;
	 when cLong	=> LongPtr		:= new Long	;
	 		   LongPtr.all		:= To_Long	(pInfo).all;
	 		   ErrorTable (MessageCount).Info := LongPtr	.all'Address;
	 when cFloat	=> FloatPtr		:= new Float	;
	 		   FloatPtr.all		:= To_Float	(pInfo).all;
	 		   ErrorTable (MessageCount).Info := FloatPtr	.all'Address;
	 when cBoolean	=> BooleanPtr		:= new Boolean	;
	 		   BooleanPtr.all	:= To_Boolean	(pInfo).all;
	 		   ErrorTable (MessageCount).Info := BooleanPtr	.all'Address;
	 when cCharacter=> CharacterPtr		:= new Character;
	 		   CharacterPtr.all	:= To_Character	(pInfo).all;
	 		   ErrorTable (MessageCount).Info := CharacterPtr.all'Address;
	 when cString	=> ErrorTable (MessageCount).Info := pInfo;
	 when cSet	=> SetPtr		:= new tSet	;
	 		   MakeSet (SetPtr.all, Size (To_Set (pInfo).all));
	 		   Sets. Assign (SetPtr.all, To_Set	(pInfo).all);
	 		   ErrorTable (MessageCount).Info := SetPtr	.all'Address;
	 when cIdent	=> IdentPtr		:= new tIdent	;
	 		   IdentPtr.all		:= To_Ident	(pInfo).all;
	 		   ErrorTable (MessageCount).Info := IdentPtr	.all'Address;
	 when cPosition	=> PositionPtr		:= new tPosition;
	 		   PositionPtr.all	:= To_Position	(pInfo).all;
	 		   ErrorTable (MessageCount).Info := PositionPtr.all'Address;
	 when others	=> null;
	 end case;
      else
	 ErrorTable (MessageCount) := (
	    Position	=> NoPosition	,
	    IsErrorCode	=> True		,
	    ErrorNumber	=> MessageCount	,
	    ErrorCode	=> TooManyErrors,
	    ErrorClass	=> Restriction	,
	    InfoClass	=> cNone	,
	    Info	=> IsStore'Address
	 );
      end if;
      if pErrorClass = Fatal then WriteMessages (Standard_Error); raise Program_Error;
      end if;
   end StoreMessage;

function IsLess (i, j: Integer) return Boolean is
      r	: Integer := Compare (ErrorTable (i).Position, ErrorTable (j).Position);
   begin
      if r = -1 then return True ; end if;
      if r = +1 then return False; end if;
      return ErrorTable (i).ErrorNumber < ErrorTable (j).ErrorNumber;
   end IsLess;

procedure Swap (i, j: Integer) is
      t	: tError := ErrorTable (i);
   begin
      ErrorTable (i) := ErrorTable (j); ErrorTable (j) := t;
   end Swap;

procedure StoreMessages (Store: Boolean) is
   begin
      if Store then MessageCount := 0; PrevLine := 0; end if;
      IsStore := Store;
   end StoreMessages;

end Errors;
