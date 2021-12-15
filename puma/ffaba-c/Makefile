LIB	= $(HOME)/lib
INCDIR	= $(LIB)/include
CFLAGS	= -I$(INCDIR)
CC	= cc -O

all:	main
	time main

main:	ProTest.o Compiler.o
	cc -o main Compiler.o ProTest.o $(LIB)/libreuse.a

ProTest.o:	ProTest.h
Compiler.o:	ProTest.h

ProTest.h ProTest.c ProTest.TS: ffaba.ast
	cg -cdi4 ffaba.ast

Compiler.h Compiler.c: ffaba.pum ProTest.TS
	puma -cdip ffaba.pum

lint:	ProTest.h ProTest.c Compiler.h Compiler.c
	lint $(CFLAGS) *.c

clean:
	rm -f core* Compiler.* ProTest.* yy*.h main

.c.o:
	$(CC) $(CFLAGS) -c $*.c
