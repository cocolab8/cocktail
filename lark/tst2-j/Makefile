include ../../Makefile.config

JFLAGS	= -classpath $(CLASSPATH)

CLASS	= Scanner.class ParserDrv.class Parser.class

test1:	$(CLASS) in1 in2 in3 out1 out2
	java $(JFLAGS) ParserDrv < in1 > o ; diff out1 o
	java $(JFLAGS) ParserDrv < in2 > o ; diff out2 o
	java $(JFLAGS) ParserDrv < in3 > o ; diff out3 o

set:	$(CLASS) in1 in2 in3
	java $(JFLAGS) ParserDrv < in1 > out1
	java $(JFLAGS) ParserDrv < in2 > out2
	java $(JFLAGS) ParserDrv < in3 > out3

Scanner.class:		Scanner.java
	javac -g $(JFLAGS) $<

Parser.class:		Parser.java Scanner.java
	javac -g $(JFLAGS) $<

ParserDrv.class:	ParserDrv.java Scanner.java Parser.java
	javac -g $(JFLAGS) $<

Scanner.java: d.rex
	rex -ij d.rex

Parser.java ParserDrv.java: d.lrk
	lark -ipj d.lrk

do2:
	lark $(OPT) d.lrk
	rm -f ParserDrv.class
	$(MAKE) ParserDrv.class
	java $(JFLAGS) ParserDrv < in1 > o

test2:
	$(MAKE) do2 OPT=-ip0j
	$(MAKE) do2 OPT=-ij
	$(MAKE) do2 OPT=-i1j
	$(MAKE) do2 OPT=-ir0j
	$(MAKE) do2 OPT=-irj
	$(MAKE) do2 OPT=-ir1j

clean:
	rm -f o ParserDrv* core* Parser.java Scanner.java *.class
