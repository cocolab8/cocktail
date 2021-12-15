if not exist "%ct_dir%"\lib\rex\%NULL% mkdir "%ct_dir%"\lib\rex
copy gupd.bat "%ct_dir%"\bin
copy gcpp.bat "%ct_dir%"\bin
copy rex.exe "%ct_dir%"\bin
copy ..\lib\*.* "%ct_dir%"\lib\rex
