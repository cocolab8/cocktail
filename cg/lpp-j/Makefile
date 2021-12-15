include ../../Makefile.config

JFLAGS	= -classpath $(CLASSPATH)

GSRC	= CScanner.java CParserDrv.java CParser.java
SRC	=	

calc.compiled: $(GSRC) $(SRC)
	$(JAVAC) -g $(JFLAGS) *.java
	touch calc.compiled

test:	calc.compiled in1
#	Expect syntax error at 1,3
	$(JAVA) $(JFLAGS) CParserDrv < in1 > o; diff out1 o

# these targets are for one-off testing of the 'string' bug.

ada:
	lpp --xzj calc.prs
	rpp CScanner.rpp < calc.scn > CScanner.rex
	rex CScanner.rex
	lark -3a CParser.lrk
	
c:
	lpp -cxzj calc.prs
	rpp CScanner.rpp < calc.scn > CScanner.rex
	rex CScanner.rex
	lark -ca CParser.lrk
	
c++:
	lpp -+xzj calc.prs
	rpp CScanner.rpp < calc.scn > CScanner.rex
	rex CScanner.rex
	lark -+a CParser.lrk
	
modula:
	lpp -xzj calc.prs
	rpp CScanner.rpp < calc.scn > CScanner.rex
	rex CScanner.rex
	lark -a CParser.lrk

yacc:
	lpp -uj calc.prs
	yacc CParser.y
	

debug:	calc.compiled in1
	jdb $(JFLAGS) CParserDrv in1

CScanner.java:	CScanner.rex
	rex -j CScanner.rex

CParser.java CParserDrv.java:	CParser.lrk
	lark -ajs CParser.lrk

CScanner.rpp CParser.lrk:	calc.prs
	lpp -Jxzj calc.prs
#	cg -Jxzj calc.prs

CScanner.rex:	calc.scn CScanner.rpp
	rpp CScanner.rpp < calc.scn > CScanner.rex

clean:
	rm -f o CParserDrv* core* CParser.java CScanner.java calc.compiled
	rm -f  *.class CScanner.rpp CScanner.rex CParser.lrk
