if not exist "%ct_dir%"\lib\rex\%NULL% mkdir "%ct_dir%"\lib\rex
if exist \djgpp\bin\go32.exe coff2exe -s /djgpp/bin/go32.exe rex
copy gupd.bat "%ct_dir%"\bin
copy gcpp.bat "%ct_dir%"\bin
copy rex.exe "%ct_dir%"\bin
copy ..\lib\*.* "%ct_dir%"\lib\rex
