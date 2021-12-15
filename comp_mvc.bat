rem
rem Compile COCKTAIL Compiler-Compiler Toolbox Karlsruhe
rem using Microsoft Visual C++ under Windows 95, 98, ME, NT, 2000, XP, Vista
rem
set NULL=nul
if "%OS%"=="Windows_NT" set NULL=
copy config.d\config.coco reuse\m2c\config.h
if exist reuse\c\%NULL%    call make_mvc reuse\c
if exist reuse\cpp\%NULL%  call make_mvc reuse\cpp
if exist reuse\m2c\%NULL%  call make_mvc reuse\m2c
rem if exist common\m2c\%NULL% call make_mvc common\m2c
if exist rex\m2c\%NULL%    call make_mvc rex\m2c
if exist front\m2c\%NULL%  call make_mvc front\m2c
if exist lark\m2c\%NULL%   call make_mvc lark\m2c
rem if exist lalr\m2c\%NULL%   call make_mvc lalr\m2c
if exist ell\m2c\%NULL%    call make_mvc ell\m2c
if exist bnf\m2c\%NULL%    call make_mvc bnf\m2c
if exist y2l\src\%NULL%    call make_mvc y2l\src
if exist l2r\src\%NULL%    call make_mvc l2r\src
if exist r2l\m2c\%NULL%    call make_mvc r2l\m2c
if exist l2cg\m2c\%NULL%   call make_mvc l2cg\m2c
if exist rpp\m2c\%NULL%    call make_mvc rpp\m2c
if exist cg\m2c\%NULL%     call make_mvc cg\m2c
if exist lpp\m2c\%NULL%    call make_mvc lpp\m2c
if exist tidy\m2c\%NULL%   call make_mvc tidy\m2c
if exist puma\m2c\%NULL%   call make_mvc puma\m2c
rem if exist mtc\m2c\%NULL%    call make_mvc mtc\m2c
