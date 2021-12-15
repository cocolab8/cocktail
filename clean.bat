rem
rem Clean the source tree of the COCKTAIL Compiler-Compiler Toolbox Karlsruhe
rem
set NULL=nul
if "%OS%"=="Windows_NT" set NULL=
if exist reuse\c\%NULL%    call clean_2 reuse\c
if exist reuse\cpp\%NULL%  call clean_2 reuse\cpp
if exist reuse\m2c\%NULL%  call clean_2 reuse\m2c
if exist common\m2c\%NULL% call clean_2 common\m2c
if exist rex\m2c\%NULL%    call clean_2 rex\m2c
if exist front\m2c\%NULL%  call clean_2 front\m2c
if exist lark\m2c\%NULL%   call clean_2 lark\m2c
if exist lalr\m2c\%NULL%   call clean_2 lalr\m2c
if exist ell\m2c\%NULL%    call clean_2 ell\m2c
if exist bnf\m2c\%NULL%    call clean_2 bnf\m2c
if exist y2l\src\%NULL%    call clean_2 y2l\src
if exist l2r\src\%NULL%    call clean_2 l2r\src
if exist r2l\m2c\%NULL%    call clean_2 r2l\m2c
if exist l2cg\m2c\%NULL%   call clean_2 l2cg\m2c
if exist rpp\m2c\%NULL%    call clean_2 rpp\m2c
if exist cg\m2c\%NULL%     call clean_2 cg\m2c
if exist lpp\m2c\%NULL%    call clean_2 lpp\m2c
if exist tidy\m2c\%NULL%   call clean_2 tidy\m2c
if exist puma\m2c\%NULL%   call clean_2 puma\m2c
if exist mtc\m2c\%NULL%    call clean_2 mtc\m2c
