/* $Id: yacc.rex,v 1.7 2016/04/22 07:32:30 grosch Exp $ */

/*
 * $Log: yacc.rex,v $
 * Revision 1.7  2016/04/22 07:32:30  grosch
 * added handling of directives %code and %destructor
 * allow optional string after nonterminal 'nmno' (opt_string)
 *
 * Revision 1.6  2013/01/15 13:56:55  grosch
 * added handling of directive '%pure_parser'
 * make use of named constants for tokens
 *
 * Revision 1.5  2000/04/03 10:27:58  grosch
 * added missing assignment of Attribute.Position
 *
 * Revision 1.4  1997/05/27 21:46:12  grosch
 * truncation of filenames to 8.3 format
 *
 * Revision 1.3  1996/10/01 12:20:00  grosch
 * some bug fixes and improvements
 *
 * Revision 1.2  1996/05/14  19:54:04  grosch
 * fixed bug for MS-DOS at \ \r \n
 *
 * Revision 1.1  1995/02/23  19:50:30  grosch
 * renamed Positions to Position, StringMem to StringM, Relations to Relation
 *
 * Revision 1.0  1993/08/17  16:24:35  grosch
 * Initial revision
 *
 */

/************************************************************************/
/*									*/
/* scanner for yacc input language					*/
/*									*/
/************************************************************************/

EXPORT {
# include "StringM.h"
# include "Position.h"
# include "Tables.h"

typedef struct	{ tPosition Position;
		     tStringRef		string;
		     int		number;
		     struct tCell *	action;
		} tScanAttribute;

extern void ErrorAttribute ();
}

GLOBAL {
# include <string.h>
# include "Parser.h"

char UNION1  [] = "\ntypedef union {";
char UNION2  [] = "} YYSTYPE;\n";

void ErrorAttribute (Token, pAttribute)
  int Token;
  tScanAttribute * pAttribute;
{
  pAttribute->Position = Attribute.Position;
  switch (Token) {
  case t_identifier	:
  case t_C_IDENT	: pAttribute->string = NoString	; break;
  case t_number		: pAttribute->number = 0	; break;
  case t_right_curly	: pAttribute->action = NULL	; break;
  }
}

int level = 0;	/* nesting level of braces in actions */

void get_put ()	/* this procedure has a side-effect */
{
  int l,i;
  char v [256];

  l = GetWord (v);
  if (v [0] == '\'')
    for (i = 1; v [i + 1] != '\0'; i ++)
      if ((v [i - 1] != '\\') && (v [i] == '\\') && (v [i + 1] == '\''))
	v [i] = '\'';
  Attribute.string = PutString (v, l);
  put_name (Attribute.string);
}

char v [1024], w [1024];
int i, l = 0;
tStringRef r;
}

DEFAULT {
  GetWord (w);
  fprintf (stderr, "%3d, %2d: illegal character: '%s'\n",
    Attribute.Position.Line, Attribute.Position.Column, w);
}

DEFINE
  Letter	= {A-Za-z._} .
  Digit		= {0-9} .
  Octal		= {0-7} .
  comment	= "/*" - {*} * "*" + (- {*/} - {*} * "*" +) * "/" .
  ToSkip	= ( {\ \t\n\f\r} | comment ) * .

START Block Code Union RulePart Action String1 String2 Str2 Comment LineCmt
      SubPart

RULES

/* scan idents, literals and numbers */
#RulePart# Letter (Letter | Digit) * / ToSkip ":" :
				  { get_put (); return t_C_IDENT; }
#STD, RulePart# Letter (Letter | Digit) * :
				  { get_put (); return t_identifier; }
#STD, RulePart# ' - {'\\\n} + '	: { get_put ();
				    if (yyStartState == RulePart)
				      put_token (Attribute.string, 0);
				    return t_identifier; }
#STD, RulePart# ' \\ Octal + '	: { get_put ();
				    if (yyStartState == RulePart)
				      put_token (Attribute.string, 0);
				    return t_identifier; }
#STD, RulePart# ' \\ ANY + '	: { get_put ();
				    if (yyStartState == RulePart)
				      put_token (Attribute.string, 0);
				    return t_identifier; }
#STD, RulePart# Digit +		: { GetWord (v);
				    Attribute.number = atoi (v);
				    return t_number; }

#STD# "%left"		: { return t_percent_left	; }
#STD# "%right"		: { return t_percent_right	; }
#STD# "%nonassoc"	: { return t_percent_nonassoc	; }
#STD# "%token"		: { return t_percent_token	; }
#STD, RulePart# "%prec"	: { return t_percent_prec	; }
#STD# "%type"		: { return t_percent_type	; }
#STD# "%start"		: { return t_percent_start	; }
#STD# "%expect"		: { return t_percent_expect	; }
#STD# "%pure_parser"	: { return t_percent_pure_parser; }
#STD# "%code"		: { return t_percent_code	; }
#STD# "%destructor"	: { return t_percent_destructor	; }
#STD# "%define"		: { return t_percent_define	; }
#STD# "%lex-param"	: { return t_percent_lex_param	; }
#STD# "%parse-param"	: { return t_percent_parse_param; }

#STD# \.		: { return t_dot		; }

#STD# "%union"		: { yyStart (Union); level = 0; l = 0;
			    put_global (PutString (UNION1, strlen (UNION1))); }
#Union# \{		: { if (level) l += GetWord (& v [l]); level ++; }
#Union# - {{\}\n\r} *	,
#Union# \r		: { l += GetWord (& v [l]); }
#Union# \r ? \n		: { yyEol (0); l += GetWord (& v [l]);
			    put_global (PutString (v, l)); l = 0; }
#Union# \}		: { if (-- level)
			      l += GetWord (& v [l]);
			    else {
			      put_global (PutString (v, l)); l = 0;
			      put_global (PutString (UNION2, strlen (UNION2)));
			      yyPrevious;
			      return t_percent_union;
			    } }

#STD# \{		: { yyStart (Block); level = 1; }
#Block# \{		: { level ++; }
#Block# - {{\}\n\r} *	,
#Block# \r		: {}
#Block# \r ? \n		: { yyEol (0); }
#Block# \}		: { level --;
			    if (level == 0) {
			      yyPrevious;
			      return t_code_block;
			    } }

#STD# \"		: { yyStart (Str2); }
#Str2# - {"} +		: {}
#Str2# \"		: { yyPrevious; return t_string; }

#STD#	   %%		: { yyStart (RulePart); l = 0;
			    return t_percent_percent; }

#RulePart# %%		: { yyStart (SubPart ); l = 0;
			    return t_percent_percent; }

#STD# "%{"		: { yyStart (Code); l = 0; }
#Code# - {%\n\r} +	,
#Code# {%\r}		: { l += GetWord (& v [l]); }
#Code# \r ? \n		: { yyEol (0); l += GetWord (& v [l]);
			    put_global (PutString (v, l)); l = 0; }
#Code# "%}"		: { yyPrevious; v [l ++] = '\n';
			    put_global (PutString (v, l)); l = 0; }

#STD, RulePart# "<"	: { return t_less	; }
#STD, RulePart# ">"	: { return t_greater	; }
#STD, RulePart# ","	: { return t_comma	; }
#STD, RulePart# "|"	: { return t_bar	; }
#STD, RulePart# ";"	: { return t_semicolon	; }
#STD, RulePart# ":"	: { return t_colon	; }

/* scanning actions */
#RulePart# "{"		: { yyStart (Action);
			    level = 1;
			    action_list = 0;
			    l = 0; v [0] = '\0';
			    return t_left_curly; }

#Action# "{"		: { level ++; v [l ++] = '{'; }

#Action# $ \< - {>} * \> (\- ? Digit + | $) :
			  { GetWord (w);
			    v [l ++] = '$';
			    for (i = 2; w [i] != '>'; i ++);
			    i ++;
			    while (v [l ++] = w [i ++]);
			    l --;
			    strcpy (& v [l], ".");
			    l += 1;
			    for (i = 2; w [i] != '>'; v [l ++] = w [i ++]); }

#Action# $ (\- ? Digit + | $) :
			  { i = GetWord (w);
			    strcpy (& v [l], w);
			    l += i;
			    if (w [1] == '$') {
			      r = get_type (0);
			    } else {
			      i = atoi (& w [1]);
			      if (i > 0) r = get_type (i);
			      else       r = 0;
			    }
			    if (r) {
			      StGetString (r, (tString) w);
			      v [l ++] = '.';
			      strcpy (& v [l], w);
			      l += strlen (w);
			    } }

#Action# '		: { yyStart (String1); v [l ++] = '\''; }
#String1# - {'} +	: { l += GetWord (& v [l]); }
#String1# '		: { yyPrevious; l += GetWord (& v [l]); }

#Action# \"		: { yyStart (String2); v [l ++] = '"'; }
#String2# - {"} +	: { l += GetWord (& v [l]); }
#String2# \"		: { yyPrevious; l += GetWord (& v [l]); }

#STD#    "/*"		: { yyStart (Comment); l = GetWord (v); }
#STD#    "//"		: { yyStart (LineCmt); l = GetWord (v); }
#Action# "/*"		: { yyStart (Comment); l += GetWord (& v [l]); }
#Action# "//"		: { yyStart (LineCmt); l += GetWord (& v [l]); }
#Comment# - {\n\r*} + | {*\r} : { l += GetWord (& v [l]); }
#Comment# \r ? \n	: { yyEol (0); l += GetWord (& v [l]);
			    if (yyPreviousStart == Action) {
			      put_action  (PutString (v, l)); l = 0;
			    } else if (yyPreviousStart == STD) {
			      put_global  (PutString (v, l)); l = 0;
			    } else {
			      append_text (PutString (v, l)); l = 0;
			    } }
#Comment# "*/"		: { yyPrevious; l += GetWord (& v [l]);
			    if (yyStartState == STD) {
			      v [l ++] = '\n'; put_global (PutString (v, l));
			      l = 0;
			    } }
#LineCmt# - {\n\r} +	: { l += GetWord (& v [l]); }
#LineCmt# \r ? \n	: { yyEol (0); l += GetWord (& v [l]);
			    if (yyPreviousStart == Action) {
			      put_action  (PutString (v, l)); l = 0;
			    } else if (yyPreviousStart == STD) {
			      put_global  (PutString (v, l)); l = 0;
			    } else {
			      append_text (PutString (v, l)); l = 0;
			    }
			    yyPrevious;
			  }

#String1, String2, Comment# ANY : { v [l ++] = '\\'; l += GetWord (& v [l]); }

#Action# - {${\}'"/\n\r} + | {/$\r} : { l += GetWord (& v [l]); }
#Action# \r ? \n	: { yyEol (0); l += GetWord (& v [l]);
			    put_action (PutString (v, l)); l = 0; }
#Action# "}"		: { if (-- level)
			      v [l ++] = '}';
			    else {
			      yyStart (RulePart);
			      l += GetWord (& v [l]);
			      l += GetWord (& v [l]);
			      put_action (PutString (v, l)); l = 0;
			      Attribute.action = action_list;
			      return t_right_curly;
			    } }

/* scan white space and comments between rules */
#RulePart# "/*"		: { yyStart (Comment); l += GetWord (& v [l]); }
#RulePart# "//"		: { yyStart (LineCmt); l += GetWord (& v [l]); }
#RulePart# " " +	: { l += GetWord (& v [l]); }
#RulePart# \t		: { yyTab; v [l ++] = '\t'; }
#RulePart# \r ? \n	: { yyEol (0); l += GetWord (& v [l]);
			    append_text (PutString (v, l)); l = 0; }

/* scan tail after second %% */
#SubPart# ANY +		: { l += GetWord (& v [l]); }
#SubPart# \r ? \n	: { yyEol (0); l += GetWord (& v [l]);
			    put_global (PutString (v, l)); l = 0; }

\f | \r | \26		:- {}
