# Makefile for Unix

# Choose an operating system
SYS	= UNIX
# SYS	= MSDOS
# SYS	= OS2
# SYS	= MVS

# Choose a C++ compiler
CPPC	= g++
# CPPC	= g++ -pedantic -ansi -Wall

LIB	= $(HOME)/lib
INCDIR	= $(LIB)/cplusinc
REUSE	= librucpp.a
OPT	= -O
CFLAGS	= $(OPT) -I. -I.. -I../.. -D$(SYS)
LDFLAGS	= -s $(REUSE)

RANLIB		= ranlib
INSTALL		= /usr/bin/install -c
INSTALL_PROGRAM	= $(INSTALL)
INSTALL_DATA	= $(INSTALL) -m 644
ANSI_OBJECTS	= rGetopt.o rFsearch.o # rSrcMem.o

SOURCES	= rSystem.cxx General.cxx rMemory.cxx DynArray.cxx StringM.cxx Idents.cxx \
	  Sets.cxx Relation.cxx rTime.cxx Errors.cxx Position.cxx Source.cxx \
	  rString.cxx Global.cxx rGetopt.cxx rFsearch.cxx # rSrcMem.cxx
	  
TEST_PROGS = DynArrDr.cxx ErrorsDr.cxx IdentsDr.cxx RelDrv.cxx SetsDrv.cxx \
	  StringMD.cxx rMemoryD.cxx rGetoptD.cxx rGetoptLD.cxx rFsearD.cxx \
	  rStringD.cxx # rSrcMemD.cxx

OBJS	= rSystem.o General.o rMemory.o DynArray.o StringM.o Idents.o Sets.o \
	  Relation.o rTime.o Errors.o Position.o Source.o rString.o Global.o \
	  $(ANSI_OBJECTS)

# targets

$(REUSE):	$(OBJS)
	ar ruc $(REUSE) $(OBJS)
	$(RANLIB) $(REUSE)

install:	$(REUSE) $(INCDIR)
	$(INSTALL_DATA) $(REUSE) $(LIB)
	$(RANLIB) $(LIB)/$(REUSE)
	cp *.h Position.cxx Errors.cxx $(INCDIR)
	cp ../../config.h $(INCDIR)
	chmod u+w,a+r $(INCDIR)/*[hx]

image:	install

$(INCDIR):
	mkdir -p $(INCDIR)

clean:	test-clean
	rm -f *.o *Drv *Dr rMemoryD StringMD rStringD rGetoptD rGetoptLD \
	  rFsearD rSrcMemD core* .depend $(REUSE)
	rm -f *.obj *.sbr *.bsc *.exe *.pdb *.map *.vcw *.wsp
	rm -f *.OBJ *.SBR *.BSC *.EXE *.PDB *.MAP *.VCW *.WSP
	rm -f *.lib *.dll
	rm -f *.LIB *.DLL
	rm -f *.plg *.opt *.ncb
	rm -f *.PLG *.OPT *.NCB
	rm -fr Debug Release

# test programs

test:	rMemoryD DynArrDr SetsDrv RelDrv IdentsDr StringMD ErrorsDr \
	rStringD rGetoptD rGetoptLD rFsearD
#	test_rFsearch rSrcMemD

rMemoryD:	rMemoryD.o $(REUSE)
	$(CPPC) -o rMemoryD rMemoryD.o $(LDFLAGS)

DynArrDr:	DynArrDr.o $(REUSE)
	$(CPPC) -o DynArrDr DynArrDr.o $(LDFLAGS)

SetsDrv:	SetsDrv.o $(REUSE)
	$(CPPC) -o SetsDrv SetsDrv.o $(LDFLAGS)

RelDrv:		RelDrv.o $(REUSE)
	$(CPPC) -o RelDrv RelDrv.o $(LDFLAGS)

IdentsDr:	IdentsDr.o $(REUSE)
	$(CPPC) -o IdentsDr IdentsDr.o $(LDFLAGS)

StringMD:	StringMD.o $(REUSE)
	$(CPPC) -o StringMD StringMD.o $(LDFLAGS)

ErrorsDr:	ErrorsDr.o $(REUSE)
	$(CPPC) -o ErrorsDr ErrorsDr.o $(LDFLAGS)

rStringD:	rStringD.o $(REUSE)
	$(CPPC) -o rStringD rStringD.o $(LDFLAGS)

rGetoptD:	rGetoptD.o $(REUSE)
	$(CPPC) -o rGetoptD rGetoptD.o $(LDFLAGS)

rGetoptLD:	rGetoptLD.o $(REUSE)
	$(CPPC) -o rGetoptLD rGetoptLD.o $(LDFLAGS)

rFsearD:	rFsearD.o $(REUSE)
	$(CPPC) -o rFsearD rFsearD.o $(LDFLAGS)

rSrcMemD:	rSrcMemD.o $(REUSE)
	$(CPPC) -o rSrcMemD rSrcMemD.o $(LDFLAGS)

test_rFsearch:	rFsearD
	@ touch test1 TEST2 Test3
	@ touch NOT-READABLE; chmod a-r NOT-READABLE
	@ ln -s NOT-READABLE NOT-READABLE-LINK
	@ touch READABLE
	@ ln -s READABLE READABLE-LINK
	@ ln -s NO-LINK1 NO-LINK2
	@ touch XXXXX; ln -s XXXXX NO-LINK3; rm XXXXX
	@ mkdir DIR
	rFsearD
	@ chmod a+w NOT-READABLE
	$(MAKE) test-clean

test-clean:
	rm -rf DIR
	rm -f test1
	rm -f TEST2
	rm -f Test3
	rm -f NOT-READABLE*
	rm -f READABLE*
	rm -f NO-LINK*
	rm -f NO-SUCH-FILE

.depend:	$(SOURCES) $(TEST_PROGS) Makefile
	gcc -I. -I$(INCDIR) -MM $(SOURCES) $(TEST_PROGS) | \
	cpp -P | \
	sed -e 's/  */ /g' > .depend

.SUFFIXES:	.cxx .o

.cxx.o:
	$(CPPC) $(CFLAGS) -c $*.cxx

# dependencies

rSystem.o: rSystem.cxx rSystem.h ratc.h rString.h
General.o: General.cxx ratc.h General.h
rMemory.o: rMemory.cxx rMemory.h rSystem.h ratc.h General.h Errors.h Position.h Idents.h StringM.h Sets.h Global.h
DynArray.o: DynArray.cxx ratc.h DynArray.h General.h rMemory.h
StringM.o: StringM.cxx StringM.h ratc.h rString.h General.h rMemory.h Position.h Idents.h Sets.h Errors.h Global.h
Idents.o: Idents.cxx Idents.h ratc.h StringM.h Sets.h rString.h DynArray.h Errors.h Position.h Global.h
Sets.o: Sets.cxx ratc.h Sets.h DynArray.h General.h
Relation.o: Relation.cxx ratc.h Relation.h Sets.h General.h DynArray.h
rTime.o: rTime.cxx rTime.h rSystem.h ratc.h
Errors.o: Errors.cxx Errors.h ratc.h Position.h Idents.h StringM.h Sets.h rString.h rSystem.h rMemory.h Global.h
Position.o: Position.cxx Position.h Idents.h ratc.h StringM.h Sets.h rString.h Global.h Errors.h
Source.o: Source.cxx Source.h rSystem.h ratc.h rString.h
Global.o: Global.cxx Global.h StringM.h ratc.h Idents.h Sets.h Errors.h Position.h
rString.o: rString.cxx ratc.h rString.h
rGetopt.o: rGetopt.cxx rGetopt.h
rFsearch.o: rFsearch.cxx rMemory.h rSystem.h ratc.h DynArray.h rFsearch.h
rSrcMem.o: rSrcMem.cxx rSrcMem.h ratc.h Position.h Idents.h StringM.h Sets.h DynArray.h rMemory.h
DynArrDr.o: DynArrDr.cxx ratc.h rMemory.h DynArray.h
ErrorsDr.o: ErrorsDr.cxx ratc.h Position.h Idents.h StringM.h Sets.h Errors.h Global.h
IdentsDr.o: IdentsDr.cxx rMemory.h Global.h StringM.h ratc.h Idents.h Sets.h Errors.h Position.h rString.h
RelDrv.o: RelDrv.cxx ratc.h Relation.h Sets.h
SetsDrv.o: SetsDrv.cxx ratc.h Sets.h
StringMD.o: StringMD.cxx rString.h rMemory.h Global.h StringM.h ratc.h Idents.h Sets.h Errors.h Position.h
rMemoryD.o: rMemoryD.cxx ratc.h rMemory.h
rStringD.o: rStringD.cxx ratc.h rString.h
rGetoptD.o: rGetoptD.cxx rGetopt.h
rGetoptLD.o: rGetoptLD.cxx rGetopt.h
rFsearD.o: rFsearD.cxx rMemory.h rFsearch.h ratc.h rTime.h
rSrcMemD.o: rSrcMemD.cxx rMemory.h rSrcMem.h ratc.h Position.h Idents.h StringM.h Sets.h
