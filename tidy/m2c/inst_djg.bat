if exist \djgpp\bin\go32.exe coff2exe -s /djgpp/bin/go32.exe tidy
copy tidy.exe "%ct_dir%"\bin
