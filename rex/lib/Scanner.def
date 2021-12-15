(* $Id: Scanner.md,v 3.4 2000/09/04 11:17:27 grosch rel $ *)

$@ DEFINITION MODULE @;

IMPORT Strings;

$- user import declarations
$E[ user export declarations
IMPORT Position;
TYPE tScanAttribute	= RECORD Position: Position.tPosition; END;
PROCEDURE ErrorAttribute (Token: INTEGER; VAR Attribute: tScanAttribute);
$]

CONST EofToken	= 0;

VAR TokenLength	: INTEGER;
VAR TokenIndex	: INTEGER;
VAR Attribute	: tScanAttribute;
VAR Exit	: PROC;

PROCEDURE BeginScanner	;
PROCEDURE BeginFile	(FileName: ARRAY OF CHAR);
PROCEDURE GetToken	(): INTEGER;
PROCEDURE GetWord	(VAR Word: Strings.tString);
PROCEDURE GetLower	(VAR Word: Strings.tString);
PROCEDURE GetUpper	(VAR Word: Strings.tString);
PROCEDURE CloseFile	;
PROCEDURE CloseScanner	;

$@ END @.
