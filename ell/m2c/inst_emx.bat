if not exist "%ct_dir%"\lib\ell\%NULL% mkdir "%ct_dir%"\lib\ell
emxbind ell
copy ell.exe "%ct_dir%"\bin
