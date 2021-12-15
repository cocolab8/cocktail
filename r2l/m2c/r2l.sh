#!/bin/sh
exec LIB/r2l/r2l $* |
sed -e '
s/<>//
s/<,/</
s/yyStart/BEGIN/g
s;yyPrevious;/*** sorry - cannot translate yyPrevious ***/;g
s/yyEcho/ECHO/g
s/STD/INITIAL/g
'
