@echo off
%ct_dir%\lib\r2l\r2l < %1 > %2

rem sed -e "
rem s/<>//
rem s/<,/</
rem s/yyStart/BEGIN/g
rem s;yyPrevious;/*** sorry - cannot translate yyPrevious ***/;g
rem s/yyEcho/ECHO/g
rem s/STD/INITIAL/g
rem "
