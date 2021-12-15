if not exist "%ct_dir%"\lib\cg\%NULL% mkdir "%ct_dir%"\lib\cg
if exist \djgpp\bin\go32.exe coff2exe -s /djgpp/bin/go32.exe cg
if exist \djgpp\bin\go32.exe coff2exe -s /djgpp/bin/go32.exe lpp
copy gcpp.bat "%ct_dir%"\bin
copy gcppt.bat "%ct_dir%"\bin
copy gupd.bat "%ct_dir%"\bin
copy grm.bat "%ct_dir%"\bin
copy cg.exe "%ct_dir%"\bin
copy typetab.c "%ct_dir%"\lib\cg
copy typetab.cx "%ct_dir%"\lib\cg
copy typetab.cxx "%ct_dir%"\lib\cg
copy typetab.m "%ct_dir%"\lib\cg
copy typetab.j "%ct_dir%"\lib\cg
copy Tree.tcl "%ct_dir%"\lib\cg
