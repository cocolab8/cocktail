if not exist "%ct_dir%"\lib\lark\%NULL% mkdir "%ct_dir%"\lib\lark
copy gcpp.bat "%ct_dir%"\bin
copy gupd.bat "%ct_dir%"\bin
copy lark.exe "%ct_dir%"\bin
cd ..\lib
copy *.* "%ct_dir%"\lib\lark
