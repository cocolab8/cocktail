GLOBAL	{
FROM SYSTEM	IMPORT ADR;
FROM Errors	IMPORT Message, MessageI, Error;
IMPORT Errors, Parser;
FROM Strings	IMPORT tString, AssignEmpty, Concatenate, Append, SubString,
			Length, StringToInt, StringToNumber, StringToReal;
FROM StringM	IMPORT tStringRef, PutString;
FROM Idents	IMPORT tIdent, MakeIdent;

VAR NestingLevel: CARDINAL;

PROCEDURE ErrorAttribute (Token: INTEGER; VAR Attribute: tScanAttribute);
  BEGIN
  END ErrorAttribute;
}

LOCAL	{
  VAR
    String, S	: tString	;
    Word	: tString	;
    indent	: tIdent	;
    string	: tStringRef	;
    integer	: INTEGER	;
    real	: REAL		;
    ch		: CHAR		;
}

BEGIN	{ NestingLevel := 0; }

DEFAULT	{ GetWord (Word);
	  MessageI ("illegal character", Error, Attribute.Position, Errors.String, ADR (Word)); }

EOF	{ IF yyStartState = Comment THEN
	     Message ("unterminated comment", Error, Attribute.Position); END; }

DEFINE
  digit		= {0-9}		.
  letter	= {a-z A-Z}	.
  CmtCh		= - {*(\t\n}	.
  StrCh1	= - {'\t\n}	.
  StrCh2	= - {"\t\n}	.					// vi "

START	Comment, Str1, Str2

RULES

#STD, Comment# "(*"	:- {INC (NestingLevel); yyStart (Comment);}
#Comment#  "*)"		:- {DEC (NestingLevel); IF NestingLevel = 0 THEN yyStart (STD); END;}
#Comment#  "(" | "*" | CmtCh + :- {}

#STD# digit +		,
#STD# digit + / ".."	,
#STD# digit + / BY	: {GetWord (Word);
			   integer := StringToInt (Word);
			   RETURN Parser.t_Integer;}
#STD# {0-7} + B		: {GetWord (Word);
			   SubString (Word, 1, Length (Word) - 1, String);
			   integer := StringToNumber (String, 8);
			   RETURN Parser.t_Integer;}
#STD# {0-7} + C		: {GetWord (Word);
			   SubString (Word, 1, Length (Word) - 1, String);
			   ch := CHR (StringToNumber (String, 8));
			   RETURN Parser.t_String;}
#STD# digit {0-9 A-F} * H : {
			   GetWord (Word);
			   SubString (Word, 1, Length (Word) - 1, String);
			   integer := StringToNumber (String, 16);
			   RETURN Parser.t_Integer;}
#STD# digit + "." digit * (E {+\-} ? digit +) ? : {
			   GetWord (Word);
			   real := StringToReal (Word);
			   RETURN Parser.t_Real;}

#STD#	'		:  {AssignEmpty (String); yyStart (Str1);}
#Str1#	StrCh1 +	:- {GetWord (S); Concatenate (String, S);}
#Str1#	'		:- {yyStart (STD); string := PutString (String);
			    RETURN Parser.t_String;}

#STD#	\"		:  {AssignEmpty (String); yyStart (Str2);}	// vi "
#Str2#	StrCh2 +	:- {GetWord (S); Concatenate (String, S);}
#Str2#	\"		:- {yyStart (STD); string := PutString (String);
			    RETURN Parser.t_String;}			// vi "

#Str1, Str2# \t		:- {Append (String, 11C); yyTab;}
#Str1, Str2# \n		:- {Message ("unterminated string", Error, Attribute.Position); yyEol (0);
			    yyStart (STD); string := PutString (String);
			    RETURN Parser.t_String;}

#STD# "#"		: {RETURN Parser.t_hash_sign		;}
#STD# "&"		: {RETURN Parser.t_AND			;}
#STD# "("		: {RETURN Parser.t_left_parentheses	;}
#STD# ")"		: {RETURN Parser.t_right_parentheses	;}
#STD# "*"		: {RETURN Parser.t_asterisk		;}
#STD# "+"		: {RETURN Parser.t_plus			;}
#STD# ","		: {RETURN Parser.t_comma		;}
#STD# "-"		: {RETURN Parser.t_minus		;}
#STD# "."		: {RETURN Parser.t_dot			;}
#STD# ".."		: {RETURN Parser.t_dot_dot		;}
#STD# "/"		: {RETURN Parser.t_slash		;}
#STD# ":"		: {RETURN Parser.t_colon		;}
#STD# ":="		: {RETURN Parser.t_colon_equal		;}
#STD# ";"		: {RETURN Parser.t_semicolon		;}
#STD# "<"		: {RETURN Parser.t_less			;}
#STD# "<="		: {RETURN Parser.t_less_equal		;}
#STD# "<>"		: {RETURN Parser.t_hash_sign		;}
#STD# "="		: {RETURN Parser.t_equal		;}
#STD# ">"		: {RETURN Parser.t_greater		;}
#STD# ">="		: {RETURN Parser.t_greater_equal	;}
#STD# "["		: {RETURN Parser.t_left_bracket		;}
#STD# "]"		: {RETURN Parser.t_right_bracket	;}
#STD# "^"		: {RETURN Parser.t_uparrow		;}
#STD# "{"		: {RETURN Parser.t_left_curly		;}
#STD# "|"		: {RETURN Parser.t_bar			;}
#STD# "}"		: {RETURN Parser.t_right_curly		;}
#STD# "~"		: {RETURN Parser.t_NOT			;}

#STD# AND		: {RETURN Parser.t_AND			;}
#STD# ARRAY		: {RETURN Parser.t_ARRAY		;}
#STD# BEGIN		: {RETURN Parser.t_BEGIN		;}
#STD# BY		: {RETURN Parser.t_BY			;}
#STD# CASE		: {RETURN Parser.t_CASE			;}
#STD# CONST		: {RETURN Parser.t_CONST		;}
#STD# DEFINITION	: {RETURN Parser.t_DEFINITION		;}
#STD# DIV		: {RETURN Parser.t_DIV			;}
#STD# DO		: {RETURN Parser.t_DO			;}
#STD# ELSE		: {RETURN Parser.t_ELSE			;}
#STD# ELSIF		: {RETURN Parser.t_ELSIF		;}
#STD# END		: {RETURN Parser.t_END			;}
#STD# EXIT		: {RETURN Parser.t_EXIT			;}
#STD# EXPORT		: {RETURN Parser.t_EXPORT		;}
#STD# FOR		: {RETURN Parser.t_FOR			;}
#STD# FROM		: {RETURN Parser.t_FROM			;}
#STD# IF		: {RETURN Parser.t_IF			;}
#STD# IMPLEMENTATION	: {RETURN Parser.t_IMPLEMENTATION	;}
#STD# IMPORT		: {RETURN Parser.t_IMPORT		;}
#STD# IN		: {RETURN Parser.t_IN			;}
#STD# LOOP		: {RETURN Parser.t_LOOP			;}
#STD# MOD		: {RETURN Parser.t_MOD			;}
#STD# MODULE		: {RETURN Parser.t_MODULE		;}
#STD# \NOT		: {RETURN Parser.t_NOT			;}
#STD# OF		: {RETURN Parser.t_OF			;}
#STD# OR		: {RETURN Parser.t_OR			;}
#STD# POINTER		: {RETURN Parser.t_POINTER		;}
#STD# PROCEDURE		: {RETURN Parser.t_PROCEDURE		;}
#STD# QUALIFIED		: {RETURN Parser.t_QUALIFIED		;}
#STD# RECORD		: {RETURN Parser.t_RECORD		;}
#STD# REPEAT		: {RETURN Parser.t_REPEAT		;}
#STD# RETURN		: {RETURN Parser.t_RETURN		;}
#STD# SET		: {RETURN Parser.t_SET			;}
#STD# THEN		: {RETURN Parser.t_THEN			;}
#STD# TO		: {RETURN Parser.t_TO			;}
#STD# TYPE		: {RETURN Parser.t_TYPE			;}
#STD# UNTIL		: {RETURN Parser.t_UNTIL		;}
#STD# VAR		: {RETURN Parser.t_VAR			;}
#STD# WHILE		: {RETURN Parser.t_WHILE		;}
#STD# WITH		: {RETURN Parser.t_WITH			;}

#STD# (letter | _) (letter | digit | _) * : {
			   GetWord (Word);
			   indent := MakeIdent (Word);
			   RETURN Parser.t_Ident;}
