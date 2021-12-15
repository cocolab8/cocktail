GLOBAL	{
# include <stdio.h>
# include <stdlib.h>
# include <math.h>

# ifdef __cplusplus
extern "C" {
#  include "rString.h"
#  include "Position.h"
#  include "Errors.h"
#  include "StringM.h"
#  include "Idents.h"
#  include "Parser.h"
}
# else
#  include "rString.h"
#  include "Position.h"
#  include "Errors.h"
#  include "StringM.h"
#  include "Idents.h"
#  include "Parser.h"
# endif

static int NestingLevel = 0;

void ErrorAttribute
# ifdef HAVE_ARGS
  (int Token, tScanAttribute * Attribute)
# else
  (Token, Attribute) int Token; tScanAttribute * Attribute;
# endif
  {}
}

BEGIN	{
  Attribute.Position = NoPosition;
}

LOCAL	{
  char		String [256], S [256], Word [256];
  tIdent	ident	;
  tStringRef	string	;
  int		integer	;
  float		real	;
  int		ch	;
}

DEFAULT	{
  MessageI ("illegal character", xxError, Attribute.Position, xxCharacter,
    TokenPtr);
}

EOF	{
  if (yyStartState == Comment)
    Message ("unterminated comment", xxError, Attribute.Position);
}

DEFINE
  digit		= {0-9}		.
  letter	= {a-z A-Z}	.
  CmtCh		= - {*(\t\n}	.
  StrCh1	= - {'\t\n}	.
  StrCh2	= - {"\t\n}	.					// vi "

START	Comment, Str1, Str2

RULES

#STD, Comment# "(*"	:- {++ NestingLevel; yyStart (Comment);}
#Comment#  "*)"		:- {if (-- NestingLevel == 0) yyStart (STD);}
#Comment#  "(" | "*" | CmtCh + :- {}

#STD# digit +		,
#STD# digit + / ".."	,
#STD# digit + / BY	: {GetWord (Word);
			   integer = atoi (Word);
			   return t_Integer;}
#STD# {0-7} + B		: {GetWord (Word);
			   sscanf (Word, "%o", & integer);
			   return t_Integer;}
#STD# {0-7} + C		: {GetWord (Word);
			   sscanf (Word, "%o", & ch);
			   return t_String;}
#STD# digit {0-9 A-F} * H : {
			   GetWord (Word);
			   sscanf (Word, "%x", & integer);
			   return t_Integer;}
#STD# digit + "." digit * (E {+\-} ? digit +) ? : {
			   GetWord (Word);
			   real = (float) atof (Word);
			   return t_Real;}

#STD#	'		:  {String [0] = '\0'; yyStart (Str1);}
#Str1#	StrCh1 +	:- {GetWord (S); strcat (String, S);}
#Str1#	'		:- {yyStart (STD); string = PutString1 (String);
			   return t_String;}

#STD#	\"		:  {String [0] = '\0'; yyStart (Str2);}		// vi "
#Str2#	StrCh2 +	:- {GetWord (S); strcat (String, S);}
#Str2#	\"		:- {yyStart (STD); string = PutString1 (String);
			   return t_String;}				// vi "

#Str1, Str2# \t		:- {strcat (String, "\t"); yyTab;}
#Str1, Str2# \n		:- {Message ("unterminated string", xxError, Attribute.Position);
			   string = PutString1 (String);
			   yyEol (0); yyStart (STD); return t_String;}

#STD# "#"		: {return t_hash_sign		;}
#STD# "&"		: {return t_AND			;}
#STD# "("		: {return t_left_parentheses	;}
#STD# ")"		: {return t_right_parentheses	;}
#STD# "*"		: {return t_asterisk		;}
#STD# "+"		: {return t_plus		;}
#STD# ","		: {return t_comma		;}
#STD# "-"		: {return t_minus		;}
#STD# "."		: {return t_dot			;}
#STD# ".."		: {return t_dot_dot		;}
#STD# "/"		: {return t_slash		;}
#STD# ":"		: {return t_colon		;}
#STD# ":="		: {return t_colon_equal		;}
#STD# ";"		: {return t_semicolon		;}
#STD# "<"		: {return t_less		;}
#STD# "<="		: {return t_less_equal		;}
#STD# "<>"		: {return t_hash_sign		;}
#STD# "="		: {return t_equal		;}
#STD# ">"		: {return t_greater		;}
#STD# ">="		: {return t_greater_equal	;}
#STD# "["		: {return t_left_bracket	;}
#STD# "]"		: {return t_right_bracket	;}
#STD# "^"		: {return t_uparrow		;}
#STD# "{"		: {return t_left_curly		;}
#STD# "|"		: {return t_bar			;}
#STD# "}"		: {return t_right_curly		;}
#STD# "~"		: {return t_NOT			;}

#STD# AND		: {return t_AND			;}
#STD# ARRAY		: {return t_ARRAY		;}
#STD# BEGIN		: {return t_BEGIN		;}
#STD# BY		: {return t_BY			;}
#STD# CASE		: {return t_CASE		;}
#STD# CONST		: {return t_CONST		;}
#STD# DEFINITION	: {return t_DEFINITION		;}
#STD# DIV		: {return t_DIV			;}
#STD# DO		: {return t_DO			;}
#STD# ELSE		: {return t_ELSE		;}
#STD# ELSIF		: {return t_ELSIF		;}
#STD# END		: {return t_END			;}
#STD# EXIT		: {return t_EXIT		;}
#STD# EXPORT		: {return t_EXPORT		;}
#STD# FOR		: {return t_FOR			;}
#STD# FROM		: {return t_FROM		;}
#STD# IF		: {return t_IF			;}
#STD# IMPLEMENTATION	: {return t_IMPLEMENTATION	;}
#STD# IMPORT		: {return t_IMPORT		;}
#STD# IN		: {return t_IN			;}
#STD# LOOP		: {return t_LOOP		;}
#STD# MOD		: {return t_MOD			;}
#STD# MODULE		: {return t_MODULE		;}
#STD# \NOT		: {return t_NOT			;}
#STD# OF		: {return t_OF			;}
#STD# OR		: {return t_OR			;}
#STD# POINTER		: {return t_POINTER		;}
#STD# PROCEDURE		: {return t_PROCEDURE		;}
#STD# QUALIFIED		: {return t_QUALIFIED		;}
#STD# RECORD		: {return t_RECORD		;}
#STD# REPEAT		: {return t_REPEAT		;}
#STD# RETURN		: {return t_RETURN		;}
#STD# SET		: {return t_SET			;}
#STD# THEN		: {return t_THEN		;}
#STD# TO		: {return t_TO			;}
#STD# TYPE		: {return t_TYPE		;}
#STD# UNTIL		: {return t_UNTIL		;}
#STD# VAR		: {return t_VAR			;}
#STD# WHILE		: {return t_WHILE		;}
#STD# WITH		: {return t_WITH		;}

#STD# (letter | _) (letter | digit | _) * : {
			   ident = MakeIdent (TokenPtr, TokenLength);
			   return t_Ident;}
