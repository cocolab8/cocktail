LIB	= $(HOME)/lib
INCDIR	= $(LIB)/include
CFLAGS	= -I$(INCDIR)
CC	= cc

ParserDrv: ParserDrv.o Scanner.o Parser.o
	$(CC) -o ParserDrv ParserDrv.o Scanner.o Parser.o $(LIB)/libreuse.a

Scanner.rpp Parser.lrk: ada.prs
	lpp -cxzj ada.prs

ada.rex: ada.scn Scanner.rpp
	rpp < ada.scn > ada.rex

Scanner.h Scanner.c: ada.rex
	@echo expect 4 warnings
	rex -cd ada.rex

Parser.h Parser.c ParserDrv.c: Parser.lrk
	lark -cdipns Parser.lrk

ParserDrv.o:	Parser.h Scanner.h
Parser.o:	Parser.h Scanner.h
Scanner.o:	Scanner.h

lint: Scanner.c Parser.c ParserDrv.c
	lint $(CFLAGS) -b -u *.c

clean:
	rm -f ParserDrv core *.[hco] *.dbg ada.rex Parser.lrk Scanner.rpp

.SUFFIXES: .c .o

.c.o:
	$(CC) $(CFLAGS) -c $*.c
