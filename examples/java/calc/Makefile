include ../../../Makefile.config

JFLAGS	= -classpath $(CLASSPATH)

OBJ	= Scanner.class ParserDrv.class Parser.class

test:	$(OBJ) in1
	java $(JFLAGS) ParserDrv < in1 > o; diff out1 o

test2:
#	lark -aju calc.lrk; make test
	lark -ajo calc.lrk; make test
	lark -ajb calc.lrk; make test

Scanner.class:		Scanner.java
	javac -g $(JFLAGS) $<

Parser.class:		Parser.java Scanner.java
	javac -g $(JFLAGS) $<

ParserDrv.class:	ParserDrv.java Scanner.java Parser.java
	javac -g $(JFLAGS) $<

Scanner.java:	calc.rex
	rex -j calc.rex

Parser.java ParserDrv.java:	calc.lrk
	lark -ajs calc.lrk

clean:
	rm -f o ParserDrv* core* Parser.java Scanner.java *.class
