/*
 *	OCCAM2 lexical analysis routine
 *
 *	pjmp	HRC	9/3/89
 *
 */

/*
 * This work is in the public domain.
 * It was written by Peter Polkinghorne in 1986 & 1989 at
 * GEC Hirst Research Centre, Wembley, England.
 * No liability is accepted or warranty given by the Author,
 * still less my employers.
 */

/* revision history

	0.0	first release					pjmp	9/3/89

end revisions */

#include <stdio.h>
#include <ctype.h>
#include "lex2.h"

#define	MAXLINE	256

#define	TRUE	1
#define	FALSE	0

/************************************************************************/
/* reserved word list - ordered for binary chomp */

static struct reserv { char * word; int tok, len; } rlist[] = {
		"AFTER",	AFTER,	5,
		"ALT",		ALT,	3,
		"AND",		BOOLOP,	3,
		"ANY",		ANY,	3,
		"AT",		AT,	2,
		"BYTE",		BYTE,	4,
		"CASE",		CASE,	4,
		"CHAN",		CHAN,	4,
		"DEF",		DEF,	3,
		"ELSE",		ELSE,	4,
		"FALSE",	BOOL,	5,
		"FOR",		FOR,	3,
		"FROM",		FROM,	4,
		"FUNCTION",	FUNCTION,	8,
		"IF",		IF,	2,
		"INT",		INT,	3,
		"INT16",	INT16,	5,
		"INT32",	INT32,	5,
		"INT64",	INT64,	5,
		"IS",		IS,	2,
		"MOSTNEG",	MOSTNEG,7,
		"MOSTPOS",	MOSTPOS,7,
		"NOT",		NOT,	3,
		"NOW",		NOW,	3,
		"OR",		BOOLOP,	2,
		"OF",		OF,	2,
		"PAR",		PAR,	3,
		"PLACE",	PLACE,	5,
		"PLACED",	PLACED,	6,
		"PORT",		PORT,	4,
		"PRI",		PRI,	3,
		"PROC",		PROC,	4,
		"PROCESSOR",	PROCESSOR,	9,
		"PROTOCOL",	PROTOCOL,	8,
		"ROUND",	ROUND,	5,
		"REAL",		REAL,	4,
		"REAL32",	REAL32,	6,
		"REAL64",	REAL64,	6,
		"RESULT",	RESULT,	6,
		"RETYPES",	RETYPES,	7,
		"SEQ",		SEQ,	3,
		"SIZE",		SIZE,	4,
		"SKIP",		SKIP,	4,
		"STOP",		STOP,	4,
		"TABLE",	TABLE,	5,
		"TIMER",	TIMER,	5,
		"TO",		TO,	2,
		"TRUE",		BOOL,	4,
		"TRUNC",	TRUNC,	5,
		"VALUE",	VALUE,	5,
		"VAL",		VAL,	3,
		"VALOF",	VALOF,	5,
		"VAR",		VAR,	3,
		"WHILE",	WHILE,	5,
		0,		0,	0

	};

/************************************************************************/

static	char	line[MAXLINE];	/* where we store the input, line as a time */

char	yytext[MAXLINE];	/* where we store text associated with token */

int	yylineno=1,		/* line number of input */
	yylen;			/* amount of text stored */

static	int	llen,		/* how much in line */
		curind,		/* current indentation */
		indent=0,	/* this lines indent */
		ldebug = TRUE,	/* set to TRUE for debug */
		index;		/* where we are in the line */

/* state we are in: either start - get new input, decide what next
			ind - processing indentation
			rest - processing some occam stmt
			eof - tidy up processing
*/

static	enum	lexstate { Start, Ind, Rest, Eof } state = Start;

/************************************************************************/

yylex()
/* this function returns the next token (defined by lex.h), a character
value or 0 for end of input. The tokens are defined by standard input
*/
{
	int	tok = -1,	/* token to return - init to impossible value */
		sind = index;	/* start of input being processed */

/* go round and round until token to return */
	while ( tok < 0  ) {

/* decide by state */
	switch (state) {

		case Start: {
/*grab some more line */
			if ( fgets( line, MAXLINE-1, stdin ) == NULL ) {
				state = Eof;
				break;

			} else if ( (llen=strlen(line)) >= MAXLINE-1 ) {
				fprintf( stderr,
					"line <%s> longer than %d\n",
					line, MAXLINE-1 );
				exit( 1 );
			}/*if*/

			index = 0;
			sind = 0;
			indent = 0;


/* if blank line OR has just comment skip, otherwise got to appropriate state */

			if ( m_nulline() ) {
				/* do nowt */

			} else if ( line[0]==' ' && line[1]==' ' ) {
				state = Ind;

			} else {
				state = Rest;

			}/*if*/

		break;}/*Start*/

		case Ind: {
/* work out indentation */
			if ( line[index]==' ' && line[index+1]==' ' ) {
				indent++;
				index+=2;
				sind+=2;
			} else {
				state = Rest;
			
			}/*if*/
	
		break;}/*Ind*/

		case Rest: {
/* do we have some indentation to adjust for ... */
			if ( curind > indent ) {
				curind--;
				tok = END;
				break;

			} else if ( curind < indent ) {
				curind++;
				tok = BEG;
				break;

			}/*if*/

/* process ch as appropriate */
			switch ( line[index] ) {

/* space ignored */
				case ' ': {
					sind++;
					index++;
				break;}

/* eol change state again */
				case '\n': {
					yylineno++;
					index++;
					state = Start;
					tok = EOL;
				break;}

/* - a comment perhaps OR just itself */
				case '-': {
					if ( line[index+1] == '-' ) {
						index = llen+1;
						state = Start;
						tok = EOL;

					} else {
						tok = line[index++];

					}/*if*/
				break;}

				case '<': {
					if ( line[index+1] == '<' ) {
						index+=2;
						tok = SHIFTOP;

					} else {
						if ( line[index+1] == '=' ||
							line[index+1] == '>' ) {
							index++;
						}/*if*/
						index++;
						tok = COMPOP;
					}/*if*/
				break;}

				case '>': {
					if ( line[index+1] == '>' ) {
						index+=2;
						tok = SHIFTOP;

					} else if ( line[index+1] == '<' ) {
						index+=2;
						tok = LOGOP;

					} else {
						if ( line[index+1] == '=' ) {
							index++;
						}/*if*/
						index++;
						tok = COMPOP;
					}/*if*/

				break;}

				case '/': {
					if ( line[index+1] == '\\' ) {
						index+=2;
						tok = LOGOP;

					} else {
						tok = line[index++];

					}/*if*/
				break;}

				case '\\': {
					if ( line[index+1] == '/' ) {
						index+=2;
						tok = LOGOP;

					} else {
						tok = line[index++];

					}/*if*/
				break;}

				case '#': {
					if ( isxdigit( line[index+1] ) ) {
/* gobble up hex digits */
						index++;
						while ( isxdigit(line[index]) ){
							index++;
						}/*while*/

						tok = NUMBER;

					} else {
						tok = line[index++];

					}/*if*/

				break;}

				case '\'': {
					if ( line[index+1] != '*'
					     && line[index+2] == '\'' ) {

						index+=3;
						tok = CHCON;

					} else if ( line[index+1] == '*'
					     && line[index+2] != '#' 
					     && line[index+3] == '\'' ) {

						index+=4;
						tok = CHCON;

					} else if ( line[index+1] == '*'
					     && line[index+2] == '#' 
					     && isxdigit( line[index+3] )
					     && isxdigit( line[index+4] )
					     && line[index+5] == '\'' ) {

						index+=6;
						tok = CHCON;

					} else {
						tok = line[index++];

					}/*if*/

				break;}


				case '"': {
					int	lindex=index+1;

					while ( line[lindex] != '"'
					     && lindex <= llen ) {
						lindex++;
					}/*while*/

					if ( line[lindex] == '"' ) {
						index = lindex+1;
						tok = STR;

					} else {
						tok = line[index++];

					}/*if*/

				break;}

/* oh well pass back to yacc & let it cope  - if not digit or alpha */
				default: {
					if ( isdigit( line[index] ) ) {
/* gobble up digits */
						index++;
						while ( isdigit(line[index]) ){
							index++;
						}/*while*/

						tok = NUMBER;
						break;

					} else if ( isalpha( line[index] ) ) {
						int	i, wlen = 1;
						index++;
/* gobble up associated chs */
						while ( isalpha( line[index] )
							|| isdigit( line[index])
							|| line[index] == '.' ){
							wlen++;
							index++;
						}/*while*/

/* now check against reserved word list */
						for ( i=0;
						     rlist[i].word != NULL;
							i++ ) {

							if ( rlist[i].len
								!= wlen ) {
								continue;
							}/*if*/

							if ( strncmp(
							  &line[index-wlen],
							  rlist[i].word,
							  wlen ) == 0 ) {

							 tok = rlist[i].tok;
							 break;
							}/*if*/
						}/*for*/

/* not a reserved word */
						if ( tok < 0 ) {
							tok = ID;
						}/*if*/
						break;

					}/*if*/

					tok = line[index++];

				break;}/*default*/

			}/*switch*/

		break;}/*Rest*/

		case Eof: {
/* do we have some indentation to adjust for ... */
			if ( curind > 0 ) {
				curind--;
				tok = END;
			} else {
				tok = 0;
			}/*if*/


		break;}/*Eof*/


	}/*switch*/

	}/*while*/

/* return whats required after setting yytext etc */
	if ( index > sind ) {
		int	i;
		yylen = index - sind;

		for ( i = 0; i < yylen; i++ ) {
			yytext[i] = line[sind+i];
		}/*for*/

		yytext[yylen] = '\0';

	} else {
		yylen = 0;
		yytext[0] = '\0';

	}/*if*/

/* debug report */
	if ( ldebug ) {
		fprintf( stderr, "yylex: token %d <%s>\n", tok, yytext );
	}/*if*/

	return( tok );

}/*yylex*/

/*************************************************************************/

m_nulline()
/* return true if a null line */
{

	int	lindex=index;	/* local index */

/* tramp thru spaces */
	while ( line[lindex] == ' ' ) {
		lindex++;
	}/*while*/

/* any comment ? */
	if ( line[lindex] == '-' && line[lindex+1] == '-' ) {
		yylineno++;
		return( TRUE );

/* or we got to the end of the line */
	} else if ( line[lindex]== '\n' ) {
		yylineno++;
		return( TRUE );

	}/*if*/

	return( FALSE );

}/*m_nulline*/

/* end occam2lex.c */
