LIB	= $(HOME)/lib
INCDIR	= $(LIB)/include
CFLAGS	= -I$(INCDIR)
CC	= cc

all:	ParsDrv cParsDrv

ParsDrv: ParsDrv.o Scanner.o Pars.o
	$(CC) -o ParsDrv ParsDrv.o Scanner.o Pars.o $(LIB)/libreuse.a

Scanner.rpp Pars.lrk: cpp.prs
	lpp -cxzj cpp.prs

cpp.rex: cpp.scn Scanner.rpp
	rpp < cpp.scn > cpp.rex

Scanner.h Scanner.c: cpp.rex
	rex -cd cpp.rex

Pars.h Pars.c ParsDrv.c: Pars.lrk
	lark -cdi0ps -n300 Pars.lrk

ParsDrv.o:	Pars.h Scanner.h
Pars.o:		Pars.h Scanner.h
Scanner.o:	Scanner.h

cParsDrv: cParsDrv.o cScanSource.o cScan.o cPars.o
	$(CC) -o cParsDrv cParsDrv.o cScanSource.o cScan.o cPars.o $(LIB)/libreuse.a

cScan.rpp cPars.lrk: c.prs
	lpp -cxzj c.prs

c.rex:	cpp.scn cScan.rpp
	(echo SCANNER cScan; rpp cScan.rpp < cpp.scn) | sed -f c.sed > c.rex

cScan.h cScan.c cScanSource.h cScanSource.c: c.rex
	rex -csd c.rex

cPars.h cPars.c cParsDrv.c: cPars.lrk
	lark -cdi0pns cPars.lrk

cParsDrv.o:	cPars.h cScan.h
cPars.o:	cPars.h cScan.h
cScan.o:	cScan.h cScanSource.h

lint: Scanner.c Pars.c ParsDrv.c cScanSource.c cScan.c cPars.c cParsDrv.c
	lint $(CFLAGS) -b -u *.c

clean:
	rm -f core *.[hco] *.dbg cParsDrv ParsDrv c.rex cpp.rex \
		cPars.lrk Pars.lrk cScan.rpp Scanner.rpp

.SUFFIXES: .c .o

.c.o:
	$(CC) $(CFLAGS) -c $*.c
