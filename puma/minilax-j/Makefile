include ../../Makefile.config

LIB	= $(HOME)/lib
INCDIR	= $(LIB)/include
CFLAGS	= $(JDK_JNI) -I$(INCDIR) -fPIC
CC	= cc -m32 -g
CC	= cc -g
GCC	= gcc -m32
GCC	= gcc
CPPC	= g++
LDFLAGS	= -lm

GSOURCES = Scanner.java Parser.java Tree.java Defs.java Semantic.java Types.java ICode.java

JSOURCES = $(GSOURCES) Minilax.java

CSOURCES = ICodeInt.h ICodeInt.c ICode.h ICode.c

OBJS	= ICodeInt.o ICode.o

all:	minilax.compiled libicode.so
	(export LD_LIBRARY_PATH=`pwd`;\
	time java -classpath $(CLASSPATH) Minilax < in1;\
	if test -f in5; then time java -classpath $(CLASSPATH) Minilax < in5; fi)

debug:	minilax.compiled
	jdb -classpath $(CLASSPATH) Minilax in1

minilax: $(OBJS)
	$(CC) $(CFLAGS) -o minilax $(OBJS) $(LDFLAGS)

minilax.compiled: $(JSOURCES)
	ln -sf . trees
	javac -g -classpath $(CLASSPATH) $(JSOURCES)
	touch minilax.compiled

Scanner.rpp Parser.lrk:	minilax.prs
	lpp -Jxzj minilax.prs

minilax.rex:	minilax.scn Scanner.rpp
	rpp < minilax.scn > minilax.rex

Scanner.java:	minilax.rex
	rex -jd minilax.rex

Parser.java:	Parser.lrk
	lark -jdi Parser.lrk

Tree.java:	minilax.cg
	ast -JdimRDI minilax.cg

Semantic.java:	minilax.cg
	ag -JDI minilax.cg

Defs.java Defs.TS:	Defs.cg
	ast -Jdim4 Defs.cg

Tree.TS:	minilax.cg
	echo SELECT AbstractSyntax Output | cat - minilax.cg | ast -J4

Types.java:	Types.pum Tree.TS
	puma -Jdipku Types.pum

ICode.java:	ICode.pum Tree.TS Defs.TS
	puma -Jdiu ICode.pum

libicode.so: $(OBJS)
	$(GCC) -o libicode.so -shared -Wl,-soname,libicode.so $(OBJS)

lint:	$(CSOURCES)
	lint $(CFLAGS) -u *.c

clean:
	rm -f $(GSOURCES) *.TS
	rm -f core* *.dbg *.class minilax.rex Parser.lrk Scanner.rpp *.o *.so \
	  yyNode yySource
	rm -f minilax.compiled trees

.SUFFIXES: .c .o

.c.o:
	$(GCC) $(CFLAGS) -c $*.c
