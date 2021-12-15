-- $Id: parser.ads,v 1.0 1994/09/13 12:55:32 grosch rel $

$-	-- IMPORT section is inserted here

$@ package @ is

$E	-- EXPORT section is inserted here

					-- named constants for start symbols
$I	-- start symbol constants are inserted here
					-- named constants for nonterminals
$U	-- nonterminal  constants are inserted here

yyDebug	: Boolean := False;

$@ procedure Begin@;
$@ function  @ return Integer;
$@ function  @2 (yyStartSymbol: Integer) return Integer;
$@ procedure Close@;
function  TokenName (Token: Integer) return String;

$@ end @;
