REX	= $(HOME)/tools/rex/src/rex -l$(HOME)/lib/rex
REX	= rex

include ../../../Makefile.config

LIB	= $(HOME)/lib

SOURCES	= Source.c Scanner.c ScannerDrv.c

test1:
	$(MAKE) C C++ MC Ada Eiffel Java CS MS -i

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

ScannerDrv.c Scanner.h Scanner.c Source.h Source.c:	modula.c
	$(REX) -csdi modula.c

FILE_C	= modula.c

options_C:	C1 Cr Co Cn Cg Cb Cz Ck2 Ck4 Ca

option_C:	clean
	@ echo --- $(OPTIONS) ---------------------------------------------------------
	time $(REX) -csdi $(OPTIONS) -1 $(FILE)
	wc Scanner.c
	$(MAKE) ScannerDrv run
	size Scanner.o
	
C1:	; $(MAKE) option_C FILE=$(FILE_C) OPTIONS=
Cr:	; $(MAKE) option_C FILE=$(FILE_C) OPTIONS=-r
Co:	; $(MAKE) option_C FILE=$(FILE_C) OPTIONS=-o
Cn:	; $(MAKE) option_C FILE=$(FILE_C) OPTIONS=-n
Cg:	; $(MAKE) option_C FILE=$(FILE_C) OPTIONS=-g
Cb:	; $(MAKE) option_C FILE=$(FILE_C) OPTIONS=-b
Cz:	; $(MAKE) option_C FILE=$(FILE_C) OPTIONS=-z
Ck2:	; $(MAKE) option_C FILE=$(FILE_C) OPTIONS=-k2
Ck4:	; $(MAKE) option_C FILE=$(FILE_C) OPTIONS=-k4
Ca:	; $(MAKE) option_C FILE=$(FILE_C) OPTIONS=-rongz1000k4

stats:
	$(MAKE) options_C > out 2>&1
	@echo "options"
	@grep '^---' out
	@echo "wc Scanner.c"
	@grep '[0-9] Scanner.c' out
	@echo "size Scanner.o"
	@grep '[0-9a-f]	Scanner.o' out
	@echo "  Table Entries"
	@fgrep "Table Entries" out
	@echo "  Table Size"
	@fgrep "Table Size" out
	@echo "  Memory used"
	@fgrep "Memory used" out
	@echo "  Time"
	@fgrep "user" out
	@echo "  results"
	@fgrep "3017" out
#	@echo "  messages"
#	@grep ':.*,.*:' out

CDrv:	C1Drv C2Drv C4Drv in
	C1Drv in
	C2Drv in
	C4Drv in

C1Drv:
	$(REX) -csdi modula.c
	rm -f Scanner.o Source.o
	$(MAKE) C1Drv.o Scanner.o Source.o
	$(CC) C1Drv.o Scanner.o Source.o -o C1Drv $(LIB)/libreuse.a

C2Drv:
	$(REX) -csdi -k2 modula.c
	rm -f Scanner.o Source.o
	$(MAKE) C2Drv.o Scanner.o Source.o
	$(CC) C2Drv.o Scanner.o Source.o -o C2Drv $(LIB)/libreuse.a

C4Drv:
	$(REX) -csdi -k4 modula.c
	rm -f Scanner.o Source.o
	$(MAKE) C2Drv.o Scanner.o Source.o
	$(CC) C2Drv.o Scanner.o Source.o -o C4Drv $(LIB)/libreuse.a

# target language C++

C++:
	$(MAKE) clean Scanner.cxx
	g++ -g $(CPPFLAGS) S*cxx -o ScannerDrv $(LIB)/librucpp.a
	$(MAKE) run

ScannerDrv.cxx Scanner.cxx Source.cxx:	modula.cxx
	$(REX) -+sdi modula.cxx

FILE_CXX = modula.cxx

options_C++:	C++1 C++r C++o C++n C++g C++b C++z C++k2 C++k4 C++a

option_C++:	clean
	@ echo --- $(OPTIONS) ---------------------------------------------------------
	$(REX) -+sdi $(OPTIONS) $(FILE)
	g++ -g $(CPPFLAGS) S*cxx -o ScannerDrv $(LIB)/librucpp.a
	$(MAKE) run
	
C++1:	; $(MAKE) option_C++ FILE=$(FILE_CXX) OPTIONS=
C++r:	; $(MAKE) option_C++ FILE=$(FILE_CXX) OPTIONS=-r
C++o:	; $(MAKE) option_C++ FILE=$(FILE_CXX) OPTIONS=-o
C++n:	; $(MAKE) option_C++ FILE=$(FILE_CXX) OPTIONS=-n
C++g:	; $(MAKE) option_C++ FILE=$(FILE_CXX) OPTIONS=-g
C++b:	; $(MAKE) option_C++ FILE=$(FILE_CXX) OPTIONS=-b
C++z:	; $(MAKE) option_C++ FILE=$(FILE_CXX) OPTIONS=-z
C++k2:	; $(MAKE) option_C++ FILE=$(FILE_CXX) OPTIONS=-k2
C++k4:	; $(MAKE) option_C++ FILE=$(FILE_CXX) OPTIONS=-k4
C++a:	; $(MAKE) option_C++ FILE=$(FILE_CXX) OPTIONS=-rongz1000k4

CppDrv:	Cpp1Drv Cpp2Drv Cpp4Drv in
	Cpp1Drv in
	Cpp2Drv in
	Cpp4Drv in

Cpp1Drv:
	$(REX) -+sdi modula.cxx
	g++ -g $(CPPFLAGS) Cpp1Drv.cxx Scanner.cxx Source.cxx -o Cpp1Drv $(LIB)/librucpp.a

Cpp2Drv:
	$(REX) -+sdi -k2 modula.cxx
	g++ -g $(CPPFLAGS) Cpp2Drv.cxx Scanner.cxx Source.cxx -o Cpp2Drv $(LIB)/librucpp.a

Cpp4Drv:
	$(REX) -+sdi -k4 modula.cxx
	g++ -g $(CPPFLAGS) Cpp2Drv.cxx Scanner.cxx Source.cxx -o Cpp4Drv $(LIB)/librucpp.a

# target language Modula using MOCKA (mc)

MC:	ScannerDrv.mi Scanner.md Scanner.mi Source.md Source.mi
	echo p ScannerDrv | mc -d $(MLIB)
	$(MAKE) run

ScannerDrv.mi Scanner.md Scanner.mi Source.md Source.mi:	modula.m
	$(REX) -msdi modula.m

# target language Modula using SUN modula compiler (m2c)

M2C:	ScannerDrv.mod Scanner.def Scanner.mod Source.def Source.mod
	$(MAKE) -f MakefileM2C LIB=$(MLIB)
	$(MAKE) run

ScannerDrv.mod Scanner.def Scanner.mod Source.def Source.mod:	modula.m
	$(REX) -msdi modula.m

# target language Eiffel

Eiffel:	scanner.e scannerdrv.e buffer.e
	ln -f Eiffel.pdl ScannerDrv.pdl
	ecc ScannerDrv
	$(MAKE) run

scanner.e scannerdrv.e buffer.e:	modula.e
	$(REX) -esi modula.e
	rm -f attribute.e position.e rfile.e scanattribute.e source.e

# target language Ada

Ada:	scannerdrv.ali scanner.ali source.ali
	ADA_OBJECTS_PATH=$(REUSE)/ada gnatbl scannerdrv.ali $(REUSE)/ada/rSystem.o -o ScannerDrv
	$(MAKE) run

scannerdrv.ali:	scannerdrv.adb scanner.ads source.ads
scanner.ali:	scanner.ads scanner.adb source.ads
source.ali:	source.ads source.adb

scannerdrv.adb scanner.ads scanner.adb source.ads source.adb:	modula.ada
	$(REX) -usdi modula.ada

# target language Java

Java:	ScannerDrv.class Scanner.class
	$(JAVA) -classpath $(CLASSPATH) ScannerDrv < in

ScannerDrv.java Scanner.java:	modula.j
	$(REX) -jsi modula.j

ScannerDrv.class:	ScannerDrv.java Scanner.java
	$(JAVAC) -classpath $(CLASSPATH) -deprecation -g ScannerDrv.java

Scanner.class:	Scanner.java
	$(JAVAC) -classpath $(CLASSPATH) -deprecation -g Scanner.java

FILE_J = modula.j

options_J:	J1 Jr Jo Jn Jg Jb Jz Jk2 Jk4 Ja

option_J:	clean
	@ echo --- $(OPTIONS) ---------------------------------------------------------
	$(REX) -jsi $(OPTIONS) $(FILE)
	$(JAVAC) -classpath $(CLASSPATH) -deprecation -g ScannerDrv.java
	$(JAVA) -classpath $(CLASSPATH) ScannerDrv < in
	
J1:	; $(MAKE) option_J FILE=$(FILE_J) OPTIONS=
Jr:	; $(MAKE) option_J FILE=$(FILE_J) OPTIONS=-r
Jo:	; $(MAKE) option_J FILE=$(FILE_J) OPTIONS=-o
Jn:	; $(MAKE) option_J FILE=$(FILE_J) OPTIONS=-n
Jg:	; $(MAKE) option_J FILE=$(FILE_J) OPTIONS=-g
Jb:	; $(MAKE) option_J FILE=$(FILE_J) OPTIONS=-b
Jz:	; $(MAKE) option_J FILE=$(FILE_J) OPTIONS=-z
Jk2:	; $(MAKE) option_J FILE=$(FILE_J) OPTIONS="-k2 -z512"
Jk4:	; $(MAKE) option_J FILE=$(FILE_J) OPTIONS="-k4 -z512"
Ja:	; $(MAKE) option_J FILE=$(FILE_J) OPTIONS=-rongz1000k4

ByteDrv:	ByteDrv.class
	$(JAVA) -classpath $(CLASSPATH) ByteDrv in

ByteDrv.class:	ByteDrv.java
	$(REX) -jsi modula.j
	$(JAVAC) -classpath $(CLASSPATH) -deprecation -g ByteDrv.java

CharDrv:	CharDrv.class
	$(JAVA) -classpath $(CLASSPATH) CharDrv in

CharDrv.class:	CharDrv.java
	$(REX) -ji -k2 -z1024 modula.j
	$(JAVAC) -classpath $(CLASSPATH) -deprecation -g CharDrv.java

# EBCDIC Code

CS:
	$(MAKE) clean
	$(REX) -csdi modula.cs
	$(MAKE) ScannerDrv LIB=$(LIB) CFLAGS="$(CFLAGS)" CC="$(CC) -DEBCDIC"
	dd conv=ebcdic < in | ScannerDrv

MS:
	$(MAKE) clean
	$(REX) -msdi modula.ms
	echo p ScannerDrv | mc -d $(MLIB)
	dd conv=ebcdic < in | ScannerDrv

run:
	./ScannerDrv < in

lint:	$(SOURCES)
	lint $(CFLAGS) -u $(SOURCES)

clean:	clean_win
	rm -rf core* check? Scan* Source* scan* source* *.class \
		[abprs]*.e eansi.h eif2bin etrace *.err \
		ScannerDrv.p ScannerDrv.pdb ScannerDrv.op ScannerDrv.rc? \
		C?Drv.o C?Drv Cpp?Drv.o Cpp?Drv

clean_win:
	rm -rf Debug Release *.opt *.ncb *.plg *.OPT *.NCB *.PLG

.SUFFIXES: .ali .adb .cxx

.c.o:
	$(CC) $(CFLAGS) -c $*.c

.cxx.o:
	gcc $(CPPFLAGS) -c $*.cxx

.adb.ali:
	$(ADA) $*.adb
