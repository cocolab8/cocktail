LIB	= $(HOME)/lib
INCDIR	= $(LIB)/include
CCL	= $(HOME)/projects/cocolab
CFLAGS	= -I$(INCDIR) -I/usr/local/include -g -DYYDEBUG
CFLAGS	= -I$(INCDIR) -g -DYYDEBUG
CFLAGS	= -I$(CCL)/reuse -I$(CCL)/common -g -DYYDEBUG
CC	= cc
LDFLAGS	= -L$(X11)/lib -ltk8.5 -ltcl8.5 -lX11 -lm -ldl $(LIB)/libreuse.a
LDFLAGS	= -L$(X11)/lib -ltk8.5 -ltcl8.5 -lX11 -lm -ldl \
	  $(CCL)/common/libcommon.a $(CCL)/reuse/libreuse.a
OBJS	= ParserDrv.o Scanner.o Parser.o

test:	test2

test1:	i.lrk errors parser
	-lark -ci i.lrk 2> err
	diff errors err
	-diff parser p.c

test1b:	j.lrk
	-lark -ci j.lrk

test2:	ParserDrv in1 in2 in3 out1 out2 out3
	ParserDrv < in1 > o && diff out1 o
	ParserDrv < in2 > o && diff out2 o
	ParserDrv < in3 > o && diff out3 o

ParserDrv:	$(OBJS)
	$(CC) -o ParserDrv $(OBJS) $(LDFLAGS)

visual:	Scanner.c
	lark -cdi5 d.lrk
	$(MAKE) Drv.o Parser.o Scanner.o
	$(CC) -o ParserDrv Drv.o Parser.o Scanner.o $(LDFLAGS)
	ParserDrv in1

Scanner.h Scanner.c: d.rex
	rex -cd d.rex

Parser.h Parser.c ParserDrv.c: d.lrk
	lark -cdipv -N d.lrk

ParserDrv.o:	Parser.h
Parser.o:	Parser.h Scanner.h
Scanner.o:	Scanner.h

main:	$(OBJS) main.o
	$(CC) -o main main.o Scanner.o Parser.o $(LDFLAGS)

t0:	main
	main < in1 > o && diff out1 o

test3:
	lark -ci0	d.lrk
	lark -cir0	d.lrk
	lark -ci	d.lrk
	lark -cir	d.lrk
	lark -ci1	d.lrk
	lark -cir1	d.lrk
	lark -ci0w	d.lrk
	lark -cir0w	d.lrk
	lark -ciw	d.lrk
	lark -cirw	d.lrk
	lark -ci1w	d.lrk
	lark -cir1w	d.lrk
	lark -ci0v	d.lrk
	lark -cir0v	d.lrk
	lark -civ	d.lrk
	lark -cirv	d.lrk
	lark -ci1v	d.lrk
	lark -cir1v	d.lrk

do4:
	lark $(OPT) d.lrk
	rm -f Parser.o ParserDrv
	$(MAKE) ParserDrv
	ParserDrv < in1 > o

test4:
	$(MAKE) do4 OPT=-cidp0
	$(MAKE) do4 OPT=-cir0
	$(MAKE) do4 OPT=-ci
	$(MAKE) do4 OPT=-cir
	$(MAKE) do4 OPT=-ci1
	$(MAKE) do4 OPT=-cir1

test5:
	lark -cidp d.lrk
	$(CC) -I$(INCDIR) -g -c Parser.c
	$(CC) -I$(INCDIR) -g -DYYReParse	-c Parser.c
	$(CC) -I$(INCDIR) -g -DYYGetLook	-c Parser.c
	$(CC) -I$(INCDIR) -g -DYYMemoParse	-c Parser.c
	$(CC) -I$(INCDIR) -g -DYYDEBUG		-c Parser.c
	$(CC) -I$(INCDIR) -g -DYYReParse -DYYGetLook -DYYMemoParse -c Parser.c
	$(CC) -I$(INCDIR) -g -DYYReParse -DYYGetLook -DYYMemoParse -DYYDEBUG -c Parser.c
	rm -f Parser.o ParserDrv
	$(MAKE) ParserDrv test2

lint:	Scanner.c Parser.c ParserDrv.c
	lint $(CFLAGS) -b -u Scanner.c Parser.c ParserDrv.c

clean:
	rm -f ParserDrv* core* *.o *.dbg yy* Parser.[hc] Scanner.[hc] o err p.c

.SUFFIXES:	.c .o

.c.o:
	$(CC) $(CFLAGS) -c $*.c
