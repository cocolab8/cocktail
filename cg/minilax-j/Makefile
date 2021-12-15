include ../../Makefile.config

LIB	= $(HOME)/lib
INCDIR	= $(LIB)/include
CFLAGS	= $(JDK_JNI) -I$(INCDIR)
ARCH	= -m32
ARCH	= 
CC	= cc $(ARCH) -fPIC -g
CPPC	= g++
LDFLAGS	= -lm

GSOURCES = Scanner.java Parser.java Tree.java Defs.java Semantic.java

JSOURCES = $(GSOURCES) Types.java ICode.java Minilax.java

CSOURCES = ICodeInt.h ICodeInt.c ICode.h ICode.c

OBJS	= ICodeInt.o ICode.0

all:	minilax.compiled libicode.so
	(export LD_LIBRARY_PATH=`pwd`;\
	time java -classpath $(CLASSPATH) minilax/Minilax < in1;\
	if test -f in5; then time java -classpath $(CLASSPATH) minilax/Minilax < in5; fi)

debug: minilax.compiled
	jdb -classpath $(CLASSPATH) Minilax in1

minilax.compiled: $(JSOURCES) minilax
	javac -g -classpath $(CLASSPATH) $(JSOURCES)
	touch minilax.compiled

Scanner.rpp Parser.lrk:	minilax.prs
	lpp -Jxzj minilax.prs

minilax.rex:	minilax.scn Scanner.rpp
	rpp < minilax.scn > minilax.rex

Scanner.java:	minilax.rex
	rex -jd minilax.rex

Parser.java:	Parser.lrk
	lark -jdis Parser.lrk

Tree.java:	minilax.cg Types.tidy ICode.tidy
	ast -JdimRDI minilax.cg

Semantic.java:	minilax.cg
	ag -JDI minilax.cg

Defs.java Defs.TS:	Defs.cg
	ast -Jdim4 Defs.cg

Tree.TS:	minilax.cg
	echo SELECT AbstractSyntax Output | cat - minilax.cg | ast -J4

#Types.java Types.tidy:	Types.pum Tree.TS
#	puma -Jdipku Types.pum

#ICode.java ICode.tidy:	ICode.pum Tree.TS Defs.TS
#	puma -Jdiu ICode.pum

minilax:
	ln -s . minilax

libicode.so: ICode.o ICodeInt.o
	gcc $(ARCH) -o libicode.so -shared -Wl,-soname,libicode.so  \
		-I$(JDK)/include -I$(JDK)/include/linux \
		ICode.o -static -lc ICodeInt.o

lint:	$(CSOURCES)
	lint $(CFLAGS) -u *.c

clean:
	rm -f $(GSOURCES) *.TS
	rm -f core* *.dbg *.class minilax.rex Parser.lrk Scanner.rpp *.o *.so yyNode
	rm -f minilax.compiled minilax

.SUFFIXES:	.c .o

.c.o:
	$(CC) $(CFLAGS) -c $*.c
