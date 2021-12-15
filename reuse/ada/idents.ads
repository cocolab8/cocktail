-- $Id: Idents.md,v 1.6 1992/08/07 14:45:41 grosch rel $

-- $Log: Idents.md,v $

-- Ich, Doktor Josef Grosch, Informatiker, Sept. 1994

with Text_Io, Strings, StringM;
use  Text_Io, Strings, StringM;

package Idents is

subtype	  tIdent	is Integer range 0 .. 2 ** 16 - 1;

	  NoIdent	: tIdent;	-- := MakeIdent (NoString);
			-- A default identifer (empty string).

function  MakeIdent	(s: tString) return tIdent;
			-- The string 's' is mapped to a unique number
			-- (an integer) which is returned.

procedure GetString	(i: tIdent; s: in out tString);
			-- Returns the string 's' whose number is 'i'.

function  GetStringRef	(i: tIdent) return tStringRef;
			-- Returns a reference to the string whose
			-- number is 'i'.

function  MaxIdent	return tIdent;
			-- Returns the current maximal value of the
			-- type 'tIdent'.

procedure WriteIdent	(f: File_Type; i: tIdent);
			-- The string encoded by the ident 'i' is
			-- printed on file 'f'.

procedure WriteIdents	;
			-- The contents of the identifier table is
			-- printed on the terminal.

procedure InitIdents	;
			-- The identifier table	is initialized.

procedure WriteHashTable;

end Idents;
