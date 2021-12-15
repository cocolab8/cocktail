rem
rem Install COCKTAIL Compiler-Compiler Toolbox Karlsruhe
rem using Microsoft Visual C++ under Windows 95, 98, ME, NT, 2000, XP, Vista
rem
set NULL=nul
if "%OS%"=="Windows_NT" set NULL=
if not exist "%ct_dir%"\%NULL% mkdir "%ct_dir%"
if not exist "%ct_dir%"\bin\%NULL% mkdir "%ct_dir%"\bin
if not exist "%ct_dir%"\lib\%NULL% mkdir "%ct_dir%"\lib
copy ctlicens.dat "%ct_dir%"\lib
if exist reuse\c\%NULL%    call instmvc2 reuse\c
if exist reuse\cpp\%NULL%  call instmvc2 reuse\cpp
if exist rex\m2c\%NULL%    call instmvc2 rex\m2c
if exist front\m2c\%NULL%  call instmvc2 front\m2c
if exist lark\m2c\%NULL%   call instmvc2 lark\m2c
rem if exist lalr\m2c\%NULL%   call instmvc2 lalr\m2c
if exist ell\m2c\%NULL%    call instmvc2 ell\m2c
if exist bnf\m2c\%NULL%    call instmvc2 bnf\m2c
if exist y2l\src\%NULL%    call instmvc2 y2l\src
if exist l2r\src\%NULL%    call instmvc2 l2r\src
if exist r2l\m2c\%NULL%    call instmvc2 r2l\m2c
if exist l2cg\m2c\%NULL%   call instmvc2 l2cg\m2c
if exist rpp\m2c\%NULL%    call instmvc2 rpp\m2c
if exist cg\m2c\%NULL%     call instmvc2 cg\m2c
if exist lpp\m2c\%NULL%    call instmvc2 lpp\m2c
if exist tidy\m2c\%NULL%   call instmvc2 tidy\m2c
if exist puma\m2c\%NULL%   call instmvc2 puma\m2c
rem if exist mtc\m2c\%NULL%    call instmvc2 mtc\m2c
