LIB	= $(HOME)/lib
INCDIR	= $(LIB)/include
CFLAGS	= -I$(INCDIR)
CC	= cc

ParserDrv: ParserDrv.o Scanner.o Parser.o
	$(CC) -o ParserDrv ParserDrv.o Scanner.o Parser.o $(LIB)/libreuse.a

Scanner.rpp Parser.lrk: oberon2.prs
	lpp -cxzj oberon2.prs

oberon2.rex: oberon2.scn Scanner.rpp
	rpp < oberon2.scn > oberon2.rex

Scanner.h Scanner.c: oberon2.rex
	rex -cd oberon2.rex

Parser.h Parser.c ParserDrv.c: Parser.lrk
	lark -cdips Parser.lrk

ParserDrv.o:	Parser.h Scanner.h
Parser.o:	Parser.h Scanner.h
Scanner.o:	Scanner.h

lint: Scanner.c Parser.c ParserDrv.c
	lint $(CFLAGS) -b -u *.c

clean:
	rm -f ParserDrv core *.[hco] *.dbg oberon2.rex Parser.lrk Scanner.rpp

.SUFFIXES: .c .o

.c.o:
	$(CC) $(CFLAGS) -c $*.c
