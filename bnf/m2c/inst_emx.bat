if not exist "%ct_dir%"\lib\lalr\%NULL% mkdir "%ct_dir%"\lib\lalr
emxbind bnf
copy bnf.bat "%ct_dir%"\bin\bnf.bat
copy bnf.exe "%ct_dir%"\lib\lalr
