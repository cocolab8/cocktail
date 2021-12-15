@echo off
if exist yyyyyyyy.c del yyyyyyyy.c
where /Q cl
if errorlevel 1 (
  cpp -lang-c -P -C %1 -o yyyyyyyy.c
) else (
  cl /nologo /EP /C %1 > yyyyyyyy.c
)
%ct_dir%\bin\tidy yyyyyyyy.c > %1
del yyyyyyyy.c
