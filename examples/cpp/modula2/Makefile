LIB	= $(HOME)/lib
INCDIR	= $(LIB)/cplusinc
CFLAGS	= -I$(INCDIR)
CPPC	= g++
LDFLAGS	= $(LIB)/librucpp.a

all:	ScannerDrv ParserDrv

ParserDrv: ParserDrv.o Source.o Scanner.o Parser.o
	$(CPPC) -o ParserDrv ParserDrv.o Source.o Scanner.o Parser.o $(LDFLAGS)

ScannerDrv: ScannerDrv.o Source.o Scanner.o
	$(CPPC) -o ScannerDrv ScannerDrv.o Source.o Scanner.o $(LDFLAGS)

Scanner.rpp Parser.lrk: modula.prs
	lpp -+xzj modula.prs

modula.rex: modula.scn Scanner.rpp
	rpp < modula.scn > modula.rex

Scanner.h Scanner.cxx ScannerDrv.cxx Source.h Source.cxx: modula.rex
	rex -+ds modula.rex

Parser.h Parser.cxx ParserDrv.cxx: Parser.lrk
	lark -+dips Parser.lrk

ParserDrv.o:	Parser.h Scanner.h Source.h
ScannerDrv.o:	Scanner.h Source.h
Parser.o:	Parser.h Scanner.h Source.h
Scanner.o:	Scanner.h Source.h

clean:
	rm -f core* *.[ho] *.cxx *.dbg ParserDrv modula.rex Parser.lrk \
		Scanner.rpp ScannerDrv

.SUFFIXES: .cxx .o

.cxx.o:
	$(CPPC) $(CFLAGS) -c $*.cxx
