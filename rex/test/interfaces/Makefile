# OPT may be used to supply additional rex options. It is used when
# running all tests (target test1) to test -r: the results should be identical
OPT	=

include ../../../Makefile.config

SOURCES	= Source.c Scanner.c ScannerDrv.c

test1:
	$(MAKE) MC Java
	$(MAKE) MC Java OPT=r

check:	check1 check2

check1:	$(SOURCES)
	-gcc -traditional -pedantic -Wall $(CFLAGS) -c $(SOURCES) 2> check1

check2:	$(SOURCES)
	-gcc -g -ansi -pedantic -Wall $(CFLAGS) -c $(SOURCES) 2> check2

# target language C

C:
	$(MAKE) clean ScannerDrv run

ScannerDrv:	ScannerDrv.o Scanner.o Source.o
	$(CC) ScannerDrv.o Scanner.o Source.o -o ScannerDrv $(LIB)/libreuse.a

ScannerDrv.o:	Scanner.h
Scanner.o:	Scanner.h Source.h
Source.o:	Source.h

ScannerDrv.c Scanner.h Scanner.c Source.h Source.c:	C.rex
	rex -csdi$(OPT) C.rex

# target language Java

Java:
	$(MAKE) clean Scanner.java
	javac -classpath $(CLASSPATH) -deprecation -g ScannerDrv.java Scanner.java
	LC_ALL=en_US.ISO-8859-1 java -classpath $(CLASSPATH) ScannerDrv < in > out
	$(DIFF) out expected.out

ScannerDrv.java Scanner.java:	Java.rex
	rex -jsi$(OPT) Java.rex

# target language Modula using MOCKA (mc)

MC:	ScannerDrv.mi Scanner.md Scanner.mi ScannerSource.md ScannerSource.mi
	echo p ScannerDrv | mc -d $(MLIB)
	$(MAKE) run

ScannerDrv.mi Scanner.md Scanner.mi ScannerSource.md ScannerSource.mi:	Modula.rex
	rex -msdi$(OPT) Modula.rex

run:
	./ScannerDrv < in > out
	$(DIFF) out expected.m.out

lint:	$(SOURCES)
	lint $(CFLAGS) -u $(SOURCES)

clean:
	rm -rf core* check? Scan* Source* scan* source* \
		[abprs]*.e eansi.h eif2bin etrace *.err \
		ScannerDrv.p ScannerDrv.pdb ScannerDrv.op ScannerDrv.rc? out

.SUFFIXES: .ali .adb

.c.o:
	$(CC) $(CFLAGS) -c $*.c

.adb.ali:
	$(ADA) $*.adb
