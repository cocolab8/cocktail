if not exist "%ct_dir%"\lib\lark\%NULL% mkdir "%ct_dir%"\lib\lark
if exist \djgpp\bin\go32.exe coff2exe -s /djgpp/bin/go32.exe lark
copy gcpp.bat "%ct_dir%"\bin
copy gupd.bat "%ct_dir%"\bin
copy lark.exe "%ct_dir%"\bin
cd ..\lib
copy *.* "%ct_dir%"\lib\lark
