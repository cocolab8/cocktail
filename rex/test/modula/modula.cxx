GLOBAL {
# define yyInitFileStackSize 0

void Scanner::ErrorAttribute (int Token, tScanAttribute * Attribute)
{
   output ('c');
   unput ('a');
   yyEcho;
   yyEol (0);
   yyLess (1);
   yyPrevious;
   yyStart (STD);
   yyTab1 (0);
   yyTab2 (1, 2);
   yyTab;
}

/*
# define yySetPosition Attribute.Position.Line   = yyLineCount; \
  Attribute.Position.Column = (int) ((unsigned char *) TokenPtr - yyLineStart);\
  printf ("%ld\n", yyOffset (TokenPtr));
*/
}

DEFAULT {
   (void) printf ("%ld, %d: illegal character: ",
      Attribute.Position.Line, Attribute.Position.Column);
   yyEcho;
   (void) printf ("\n");
}

EOF {
if (yyStartState == Comment) (void) printf ("unclosed comment\n");
}

DEFINE
   digit	= {0-9}		.
   letter	= {a-z A-Z}	.
   CmtCh	= - {*(\t\n}	.

START Comment

RULE

#STD, Comment# "(*"	:- {yyPush (Comment);}
#Comment#  "*)"		:- {yyPop ();}
#Comment#  "(" | "*" | CmtCh + :- {}

#STD# digit +		,
#STD# digit + / ".."	: {return 1;}
#STD# {0-7} + B		: {return 2;}
#STD# {0-7} + C		: {return 3;}
#STD# digit {0-9 A-F} * H : {return 4;}
#STD# digit + "." digit * (E {+\-} ? digit +) ?	: {return 5;}

#STD# ' - {\n'} * '	|
      \" - {\n"} * \"	: {return 6;}

#STD# "#"		: {return 7;}
#STD# "&"		: {return 8;}
#STD# "("		: {return 9;}
#STD# ")"		: {return 10;}
#STD# "*"		: {return 11;}
#STD# "+"		: {return 12;}
#STD# ","		: {return 13;}
#STD# "-"		: {return 14;}
#STD# "."		: {return 15;}
#STD# ".."		: {return 16;}
#STD# "/"		: {return 17;}
#STD# ":"		: {return 18;}
#STD# ":="		: {return 19;}
#STD# ";"		: {return 20;}
#STD# "<"		: {return 21;}
#STD# "<="		: {return 22;}
#STD# "<>"		: {return 23;}
#STD# "="		: {return 24;}
#STD# ">"		: {return 25;}
#STD# ">="		: {return 26;}
#STD# "["		: {return 27;}
#STD# "]"		: {return 28;}
#STD# "^"		: {return 29;}
#STD# "{"		: {return 30;}
#STD# "|"		: {return 31;}
#STD# "}"		: {return 32;}
#STD# "~"		: {return 33;}

#STD# AND		: {return 34;}
#STD# ARRAY		: {return 35;}
#STD# BEGIN		: {return 36;}
#STD# BY		: {return 37;}
#STD# CASE		: {return 38;}
#STD# CONST		: {return 39;}
#STD# DEFINITION	: {return 40;}
#STD# DIV		: {return 41;}
#STD# DO		: {return 42;}
#STD# ELSE		: {return 43;}
#STD# ELSIF		: {return 44;}
#STD# END		: {return 45;}
#STD# EXIT		: {return 46;}
#STD# EXPORT		: {return 47;}
#STD# FOR		: {return 48;}
#STD# FROM		: {return 49;}
#STD# IF		: {return 50;}
#STD# IMPLEMENTATION	: {return 51;}
#STD# IMPORT		: {return 52;}
#STD# IN		: {return 53;}
#STD# LOOP		: {return 54;}
#STD# MOD		: {return 55;}
#STD# MODULE		: {return 56;}
#STD# \NOT              : {return 57;}
#STD# OF		: {return 58;}
#STD# OR		: {return 59;}
#STD# POINTER		: {return 60;}
#STD# PROCEDURE		: {return 61;}
#STD# QUALIFIED		: {
   output ('c');
   unput ('a');
   yyEcho;
   yyEol (0);
   yyLess (1);
   yyPrevious;
   yyStart (STD);
   yyTab1 (0);
   yyTab2 (1, 2);
   yyTab;
   return 62;}
#STD# RECORD		: {return 63;}
#STD# REPEAT		: {return 64;}
#STD# RETURN		: {return 65;}
#STD# SET		: {return 66;}
#STD# THEN		: {return 67;}
#STD# TO		: {return 68;}
#STD# TYPE		: {return 69;}
#STD# UNTIL		: {return 70;}
#STD# VAR		: {return 71;}
#STD# WHILE		: {return 72;}
#STD# WITH		: {return 73;}

#STD# letter (letter | digit) *	: {return 74;}
