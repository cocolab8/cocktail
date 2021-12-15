if not exist "%ct_dir%"\lib\puma\%NULL% mkdir "%ct_dir%"\lib\puma
if exist \djgpp\bin\go32.exe coff2exe -s /djgpp/bin/go32.exe puma
copy gcpp.bat "%ct_dir%"\bin
copy gupd.bat "%ct_dir%"\bin
copy grm.bat "%ct_dir%"\bin
copy puma.exe "%ct_dir%"\bin
copy typetab.c "%ct_dir%"\lib\puma
copy typetab.cx "%ct_dir%"\lib\puma
copy typetab.cxx "%ct_dir%"\lib\puma
copy typetab.m "%ct_dir%"\lib\puma
copy typetab.j "%ct_dir%"\lib\puma
