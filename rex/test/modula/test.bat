call rex -csd1 modula.c
gcc -o scannerdr scannerdr.c scanner.c source.c -I../../reuse/c ../../reuse/c/libreuse.a
if exist \djgpp\bin\go32.exe go32 scannerdr < in
