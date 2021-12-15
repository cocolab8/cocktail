if not exist "%ct_dir%"\lib\lalr\%NULL% mkdir "%ct_dir%"\lib\lalr
copy errortab "%ct_dir%"\lib\lalr
copy ..\doc\bnf.cat  "%ct_dir%"\lib\lalr
copy ..\doc\bnf.syn  "%ct_dir%"\lib\lalr
