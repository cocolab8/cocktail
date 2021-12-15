if not exist "%ct_dir%"\lib\lalr\%NULL% mkdir "%ct_dir%"\lib\lalr
if exist \djgpp\bin\go32.exe coff2exe -s /djgpp/bin/go32.exe bnf
copy bnf.bat "%ct_dir%"\bin\bnf.bat
copy bnf.exe "%ct_dir%"\lib\lalr
