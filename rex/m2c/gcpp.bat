@echo off
if exist yyyyyyyy.c del yyyyyyyy.c
ren %1 yyyyyyyy.c
where /Q cl
if errorlevel 1 (
  cpp -lang-c -P -C yyyyyyyy.c -o %1
) else (
  cl /nologo /EP /C yyyyyyyy.c > %1
)
del yyyyyyyy.c
