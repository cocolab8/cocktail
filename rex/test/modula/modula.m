GLOBAL {
(* /*
# define yySetPosition Attribute.Position.Line   := yyLineCount; \
  Attribute.Position.Column := yyChBufferIndex - yyLineStart - TokenLength; \
  IO.WriteI (IO.StdOutput, yyOffset (TokenIndex), 0); IO.WriteNl (IO.StdOutput);
*/ *)

PROCEDURE ErrorAttribute (Token: INTEGER; VAR Attribute: tScanAttribute);
   BEGIN
   END ErrorAttribute;
}

DEFAULT {
   Position.WritePosition (IO.StdOutput, Attribute.Position);
   IO.WriteS (IO.StdOutput, ": illegal character: ");
   yyEcho;
   IO.WriteNl (IO.StdOutput);
}

EOF {
IF yyStartState = Comment THEN
   Position.WritePosition (IO.StdOutput, Attribute.Position);
   IO.WriteS (IO.StdOutput, ": unclosed comment");
   IO.WriteNl (IO.StdOutput);
END;
}

DEFINE
   digit	= {0-9}		.
   letter	= {a-z A-Z}	.
   CmtCh	= - {*(\t\n}	.

START Comment

RULE

#STD, Comment# "(*"	:- {yyPush (Comment);}
#Comment#  "*)"		:- {yyPop;}
#Comment#  "(" | "*" | CmtCh + :- {}

#STD# digit +		,
#STD# digit + / ".."	: {RETURN 1;}
#STD# {0-7} + B		: {RETURN 2;}
#STD# {0-7} + C		: {RETURN 3;}
#STD# digit {0-9 A-F} * H : {RETURN 4;}
#STD# digit + "." digit * (E {+\-} ? digit +) ?	: {RETURN 5;}

#STD# ' - {\n'} * '	|
      \" - {\n"} * \"	: {RETURN 6;}

#STD# "#"		: {RETURN 7;}
#STD# "&"		: {RETURN 8;}
#STD# "("		: {RETURN 9;}
#STD# ")"		: {RETURN 10;}
#STD# "*"		: {RETURN 11;}
#STD# "+"		: {RETURN 12;}
#STD# ","		: {RETURN 13;}
#STD# "-"		: {RETURN 14;}
#STD# "."		: {RETURN 15;}
#STD# ".."		: {RETURN 16;}
#STD# "/"		: {RETURN 17;}
#STD# ":"		: {RETURN 18;}
#STD# ":="		: {RETURN 19;}
#STD# ";"		: {RETURN 20;}
#STD# "<"		: {RETURN 21;}
#STD# "<="		: {RETURN 22;}
#STD# "<>"		: {RETURN 23;}
#STD# "="		: {RETURN 24;}
#STD# ">"		: {RETURN 25;}
#STD# ">="		: {RETURN 26;}
#STD# "["		: {RETURN 27;}
#STD# "]"		: {RETURN 28;}
#STD# "^"		: {RETURN 29;}
#STD# "{"		: {RETURN 30;}
#STD# "|"		: {RETURN 31;}
#STD# "}"		: {RETURN 32;}
#STD# "~"		: {RETURN 33;}

#STD# AND		: {RETURN 34;}
#STD# ARRAY		: {RETURN 35;}
#STD# BEGIN		: {RETURN 36;}
#STD# BY		: {RETURN 37;}
#STD# CASE		: {RETURN 38;}
#STD# CONST		: {RETURN 39;}
#STD# DEFINITION	: {RETURN 40;}
#STD# DIV		: {RETURN 41;}
#STD# DO		: {RETURN 42;}
#STD# ELSE		: {RETURN 43;}
#STD# ELSIF		: {RETURN 44;}
#STD# END		: {RETURN 45;}
#STD# EXIT		: {RETURN 46;}
#STD# EXPORT		: {RETURN 47;}
#STD# FOR		: {RETURN 48;}
#STD# FROM		: {RETURN 49;}
#STD# IF		: {RETURN 50;}
#STD# IMPLEMENTATION	: {RETURN 51;}
#STD# IMPORT		: {RETURN 52;}
#STD# IN		: {RETURN 53;}
#STD# LOOP		: {RETURN 54;}
#STD# MOD		: {RETURN 55;}
#STD# MODULE		: {RETURN 56;}
#STD# \NOT              : {RETURN 57;}
#STD# OF		: {RETURN 58;}
#STD# OR		: {RETURN 59;}
#STD# POINTER		: {RETURN 60;}
#STD# PROCEDURE		: {RETURN 61;}
#STD# QUALIFIED		: {RETURN 62;}
#STD# RECORD		: {RETURN 63;}
#STD# REPEAT		: {RETURN 64;}
#STD# RETURN		: {RETURN 65;}
#STD# SET		: {RETURN 66;}
#STD# THEN		: {RETURN 67;}
#STD# TO		: {RETURN 68;}
#STD# TYPE		: {RETURN 69;}
#STD# UNTIL		: {RETURN 70;}
#STD# VAR		: {RETURN 71;}
#STD# WHILE		: {RETURN 72;}
#STD# WITH		: {RETURN 73;}

#STD# letter (letter | digit) *	: {RETURN 74;}
