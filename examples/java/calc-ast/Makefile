include ../../../Makefile.config

JFLAGS	= -classpath $(CLASSPATH)

GSRC	= Scanner.java ParserDrv.java Parser.java Tree.java
SRC	=	

calc.compiled: $(GSRC) $(SRC)
	javac -g $(JFLAGS) *.java
	touch calc.compiled

gen:	Scanner.rex Parser.lrk

test:	calc.compiled in1
	java $(JFLAGS) ParserDrv < in1 > o; diff out1 o

debug:	calc.compiled in1
	jdb $(JFLAGS) ParserDrv in1

Tree.java:	calc.ast
	cg -JimRb calc.ast

Scanner.java:	Scanner.rex
	rex -j Scanner.rex

Parser.java ParserDrv.java:	Parser.lrk
	lark -ajs Parser.lrk

Scanner.rpp Parser.lrk:	calc.prs
	lpp -Jxzj calc.prs
#	cg -Jxzj calc.prs

Scanner.rex:	calc.scn Scanner.rpp
	rpp < calc.scn > Scanner.rex

clean:
	rm -f o $(GSRC) *.class *.rpp *.rex *.lrk calc.compiled
