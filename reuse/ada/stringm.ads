-- $Id: StringM.md,v 1.3 1992/08/07 14:45:41 grosch rel $

-- $Log: StringM.md,v $

-- Ich, Doktor Josef Grosch, Informatiker, Sept. 1994

with Text_Io, Strings;
use  Text_Io, Strings;

package StringM is

subtype	 tStringRef	is Integer;

function PutString	(s: tString) return tStringRef;
			-- Stores string 's' in the string memory and
			-- returns a reference to the stored string.

function GetString	(r: tStringRef) return tString;
			-- Returns the string 's' from the string
			-- memory which is referenced by 'r'.

function Length		(r: tStringRef) return Integer;
			-- Returns the length of the string 's'
			-- which is referenced by 'r'.

function IsEqual	(r: tStringRef; s: tString) return Boolean;
			-- Compares the string referenced by 'r' and
			-- the string 's'.
			-- Returns True if both are equal.

procedure WriteString	(f: File_Type; r: tStringRef);
			-- The string referenced by 'r' is printed on
			-- file 'f'.

procedure WriteStringMemory;
			-- The contents of the string memory is printed
			-- on the terminal.

procedure InitStringMemory;
			-- The string memory is initialized.

end StringM;
