LIB	= $(HOME)/lib
INCDIR	= $(LIB)/include
CFLAGS	= -I$(INCDIR)
CC	= cc

ParserDrv: ParserDrv.o Scanner.o Parser.o
	$(CC) -o ParserDrv ParserDrv.o Scanner.o Parser.o $(LIB)/libreuse.a

Scanner.rpp Parser.lrk: sather.prs
	lpp -cxzj sather.prs

sather.rex: sather.scn Scanner.rpp
	rpp < sather.scn > sather.rex

Scanner.h Scanner.c: sather.rex
	rex -cd sather.rex

Parser.h Parser.c ParserDrv.c: Parser.lrk
	lark -cdips Parser.lrk

ParserDrv.o:	Parser.h Scanner.h
Parser.o:	Parser.h Scanner.h
Scanner.o:	Scanner.h

lint:	ParserDrv.c Parser.c Scanner.c
	lint $(CFLAGS) -b -u *.c

clean:
	rm -f core *.[hco] *.dbg ParserDrv sather.rex Parser.lrk Scanner.rpp

.SUFFIXES: .c .o

.c.o:
	$(CC) $(CFLAGS) -c $*.c
