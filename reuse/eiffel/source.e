-- $Id:$

class Source

creation Open

feature

SourceFile	: rFILE

Open (filename: STRING) is
   do
      if filename = void then
	 !! SourceFile.make_read_from_fp (SourceFile.stdin_fp)
      else
	 !! SourceFile.make_read (filename)
      end
   end

GetLine (wanted: INTEGER): STRING is
   do
      SourceFile.readstream (wanted)
      Result := SourceFile.laststring
   end

Close is
   do
      SourceFile.close
   end

end
