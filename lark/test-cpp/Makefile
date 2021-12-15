LIB	= $(HOME)/lib
INCDIR	= $(LIB)/cplusinc
CFLAGS	= -I$(INCDIR) -g -DYYDEBUG
CC	= g++
OBJS	= ParserDrv.o Source.o Scanner.o Parser.o

test:	ParserDrv in1 in2 in3 out1 out2 out3
	ParserDrv < in1 > o && diff out1 o
	ParserDrv < in2 > o && diff out2 o
	ParserDrv < in3 > o && diff out3 o

ParserDrv:	$(OBJS)
	$(CC) $(CFLAGS) -o ParserDrv $(OBJS) $(LIB)/librucpp.a

Scanner.h Scanner.cxx Source.h Source.cxx: d.rex
	rex -+ds d.rex
	rm -f ScannerDrv.cxx

Parser.h Parser.cxx ParserDrv.cxx: d.lrk
	lark -+dipv d.lrk

ParserDrv.o:	Parser.h Scanner.h Source.h
Parser.o:	Parser.h Scanner.h Source.h
Scanner.o:	Scanner.h Source.h

clean:
	rm -f ParserDrv* core* *.o *.dbg Parser.*[hcx] Scanner.*[hcx] Source.*[hcx] o

.SUFFIXES:	.cxx .o

.cxx.o:
	$(CC) $(CFLAGS) -c $*.cxx
