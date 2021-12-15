-- $Id: buffer.e,v 2.1 1997/05/27 21:44:43 grosch rel $

$@ class $Buffer

creation BeginBuffer

feature

EolCh		: CHARACTER	is '%N'
EobCh		: CHARACTER	is '%/127/'
ChBufferSize	: INTEGER	is 8192

$@ SourceFile	: $Source
ChBuffer	: STRING
ChBufferIndex	: INTEGER
Eof		: BOOLEAN
BytesRead	: INTEGER
LineCount	: INTEGER
LineStart	: INTEGER

BeginBuffer (FileName: STRING) is
   do
      !! SourceFile.Open (FileName)
      !! ChBuffer.make (3)
      ChBuffer.put (EolCh, 1)			-- end of line indicator
      ChBuffer.put (EobCh, 2)			-- end of buffer sentinel
      ChBuffer.put (' '  , 3)

      ChBufferIndex	:= 2
      Eof		:= FALSE
      BytesRead		:= 0
      LineCount		:= 1
      LineStart		:= 1
   end

GetBuffer (TokenLength: INTEGER) is
   do
			-- copy initial part of token in front of input buffer
      ChBuffer := ChBuffer.substring (ChBufferIndex - TokenLength - 1, ChBufferIndex - 1)
      LineStart := LineStart - (ChBufferIndex - TokenLength - 2)
      ChBufferIndex := TokenLength + 2
      ChBuffer.append (SourceFile.GetLine (ChBufferSize))
      BytesRead := ChBuffer.count - ChBufferIndex + 1
      if BytesRead <= 0 then
	 BytesRead := 0
	 Eof := TRUE
      end
      ChBuffer.extend (EobCh)
      ChBuffer.extend (' ')
   end

CloseBuffer is
   do
      SourceFile.Close
   end

-- SetChBuffer	 (value: STRING ) is do ChBuffer	:= value end
SetChBufferIndex (value: INTEGER) is do ChBufferIndex	:= value end
SetLineCount	 (value: INTEGER) is do LineCount	:= value end
SetLineStart	 (value: INTEGER) is do LineStart	:= value end

end
