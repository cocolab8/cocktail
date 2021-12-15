REUSE	= ../../reuse/ada
ADA	= ADA_INCLUDE_PATH=$(REUSE) gcc -c -g
SOURCES	= scanner.ads scanner.adb parser.ads parser.adb parserdrv.adb

test1:	ParserDrv in1 in2 in3 out1 out2 out3
	ParserDrv < in1 > o && diff out1 o
	ParserDrv < in2 > o && diff out2 o
	ParserDrv < in3 > o && diff out3 o

ParserDrv:	parserdrv.ali parser.ali scanner.ali
	ADA_OBJECTS_PATH=$(REUSE) gnatbl parserdrv.ali $(REUSE)/rSystem.o -o ParserDrv

scanner.ali:	scanner.ads scanner.adb
parser.ali:	parser.ads parser.adb scanner.ads
parserdrv.ali:	parserdrv.adb parser.ads scanner.ads

scanner.ads scanner.adb: d.rex
	rex -du d.rex

parser.ads parser.adb parserdrv.adb: d.lrk
	lark -dip3 d.lrk

do2:
	lark $(OPT) d.lrk
	rm -f parser.ali ParserDrv
	$(MAKE) ParserDrv
	ParserDrv < in1 > o

test2:
	$(MAKE) do2 OPT=-3dip0
	$(MAKE) do2 OPT=-3i
	$(MAKE) do2 OPT=-3i1
	$(MAKE) do2 OPT=-3ir0
	$(MAKE) do2 OPT=-3ir
	$(MAKE) do2 OPT=-3ir1

clean:
	rm -f ParserDrv core* *.o *.ali *.dbg parserdrv.ad? parser.ad? scanner.ad? o

.SUFFIXES: .ali .adb

.adb.ali:
	$(ADA) $*.adb
