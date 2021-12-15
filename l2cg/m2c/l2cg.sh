#!/bin/sh
cd LIB/lalr
cat > /tmp/in
fgrep PARSER /tmp/in > /dev/null 2> /dev/null || (echo PARSER; echo)
sed '/^TOKEN/,$d' < /tmp/in
l2cg < /tmp/in
