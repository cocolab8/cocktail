# OPT may be used to supply additional rex options.  It is used when
# running all tests (target test1) to test -r: the results should be identical
OPT	=

include ../../../Makefile.config

SOURCES	= Source.c Scanner.c ScannerDrv.c

test1:
	$(MAKE) Java
	$(MAKE) Java OPT=o
	$(MAKE) Java OPT=n
	$(MAKE) Java OPT=b

# target language Java

Java:
	$(MAKE) clean SmallScanner.java
	javac -classpath $(CLASSPATH) -deprecation -g Drv.java SmallScanner.java
	java -classpath $(CLASSPATH):../../.. rex.test.small.Drv < in > out
	$(DIFF) out expected.out

SmallScanner.java:	Java.rex
	rex -jgv$(OPT) Java.rex

clean:
	rm -rf core* Scan* Source* scan* source* \
		out *.class SmallScanner.java

