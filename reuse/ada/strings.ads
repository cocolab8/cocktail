-- $Id: Strings.md,v 1.3 1992/08/07 14:45:41 grosch rel $

-- $Log: Strings.md,v $

-- Ich, Doktor Josef Grosch, Informatiker, Sept. 1994

with Text_Io; use Text_Io;

package strings is

type	  tString	is access String;

	  NoString	: tString := new String'("");

function  Length	(Source: tString) return Natural;

procedure To_tString	(Source: String; Target: in out tString); 
function  To_String	(Source: tString) return String;

function  "&"		(Left, Right: tString) return tString; 
function  "&"		(Left: tString	; Right: String	  ) return tString;
function  "&"		(Left: String	; Right: tString  ) return tString; 
function  "&"		(Left: tString	; Right: Character) return tString; 
function  "&"		(Left: Character; Right: tString  ) return tString;

function  Element	(Source: tString; Index: Positive) return Character;
procedure Replace_Element (Source: in out tString; Index: Positive; By: Character);

function  Slice		(Source: tString; Low: Positive; High: Natural) return String;
function  Replace_Slice	(Source: tString; Low: Positive; High: Natural; By: String) return tString;

function  "=" 		(Left, Right : tString) return Boolean;
function  "<" 		(Left, Right : tString) return Boolean;
function  "<="		(Left, Right : tString) return Boolean;
function  ">" 		(Left, Right : tString) return Boolean;
function  ">="		(Left, Right : tString) return Boolean;

procedure ReadS		(File: File_Type; Target: in out tString);
procedure WriteS	(File: File_Type; Source: tString);

end strings;
