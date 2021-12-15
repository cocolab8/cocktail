if not exist "%ct_dir%"\lib\ell\%NULL% mkdir "%ct_dir%"\lib\ell
if exist \djgpp\bin\go32.exe coff2exe -s /djgpp/bin/go32.exe ell
copy ell.exe "%ct_dir%"\bin
