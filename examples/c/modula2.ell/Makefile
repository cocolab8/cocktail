LIB	= $(HOME)/lib
INCDIR	= $(LIB)/include
CFLAGS	= -I$(INCDIR)
CC	= cc

all:	ParserDrv ScannerDrv

ParserDrv: ParserDrv.o Scanner.o Parser.o
	$(CC) -o ParserDrv ParserDrv.o Scanner.o Parser.o $(LIB)/libreuse.a

ParserDrv.o:	Parser.h Scanner.h
Parser.o:	Parser.h Scanner.h

ParserDrv.c Parser.c Parser.h: modula.ell
	ell -cdijpf modula.ell

ScannerDrv: ScannerDrv.o Scanner.o
	$(CC) -o ScannerDrv ScannerDrv.o Scanner.o $(LIB)/libreuse.a

ScannerDrv.o:	Scanner.h
Scanner.o:	Scanner.h

ScannerDrv.c Scanner.c Scanner.h: modula.rex
	rex -csd modula.rex

lint:	ParserDrv.c Parser.c Scanner.c
	lint $(CFLAGS) -b -u *.c

clean:
	rm -f *Drv *.[hco] core*

.SUFFIXES: .c .o

.c.o:
	$(CC) $(CFLAGS) -c $*.c
