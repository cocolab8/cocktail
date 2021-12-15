(* $Id: Parser.md,v 1.4 2002/09/25 14:28:00 grosch rel $ *)

$@ DEFINITION MODULE @;

$-	(* IMPORT section is inserted here *)
$E	(* EXPORT section is inserted here *)

CONST
					(* named constants for start symbols *)
$I	(* start symbol constants are inserted here *)
					(* named constants for nonterminals  *)
$U	(* nonterminal  constants are inserted here *)
					(* named constants for tokens *)
$6	(* token constants are inserted here *)

VAR yyDebug	: BOOLEAN;

$@ PROCEDURE Begin@;
$@ PROCEDURE @  (): CARDINAL;
$@ PROCEDURE @2 (yyStartSymbol: SHORTCARD): CARDINAL;
$@ PROCEDURE Close@;
PROCEDURE TokenName (Token: CARDINAL; VAR Name: ARRAY OF CHAR);

$@ END @.
