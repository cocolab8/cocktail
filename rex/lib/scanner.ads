-- $Id: scanner.ads,v 1.5 2000/09/04 11:17:27 grosch rel $

with Position, Strings;
use  Position, Strings;

$- user import declarations

$@ package @ is

$E[ user export declarations
type tScanAttribute is record Position: tPosition; end record;
procedure ErrorAttribute (Token: Integer; Attribute: out tScanAttribute);
$]

EofToken	: constant Integer := 0;

TokenLength	: Integer;
TokenIndex	: Integer;
Attribute	: tScanAttribute;

procedure BeginScanner	;
procedure BeginFile	(FileName: String);
function  GetToken	return Integer;
procedure GetWord	(Word: out Strings.tString);
procedure GetLower	(Word: out Strings.tString);
procedure GetUpper	(Word: out Strings.tString);
procedure CloseFile	;
procedure CloseScanner	;

$@ end @;
