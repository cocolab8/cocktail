# Makefile for Unix

# Choose an operating system
SYS	= UNIX
# SYS	= MSDOS
# SYS	= MVS

# Choose a C compiler
CC	= cc
# CC	= gcc

# Choose a C++ compiler
CPPC	= g++

LIB		= $(HOME)/lib
INC_DIR		= $(LIB)/include
LIB_FILE	= libreuse.a
SHLIB_FILE	= libreuse.so
LIB_FILE_CPP	= librugpp.a
OPT		= -O
CHECK		= # -pedantic -ansi -Wall
CFLAGS		= $(CHECK) $(OPT) -I. -I.. -I../.. -I../../.. -D $(SYS) \

#		  -D WITH_GETTEXT
LDFLAGS		= -s $(LIB_FILE)

RANLIB		= ranlib
INSTALL		= /usr/bin/install -c
INSTALL_PROGRAM	= $(INSTALL)
INSTALL_DATA	= $(INSTALL) -m 644
ANSI_OBJECTS	= rGetopt.o rFsearch.o rSrcMem.o

SOURCES	= rSystem.c General.c rMemory.c DynArray.c StringM.c Idents.c Sets.c \
	  Relation.c rTime.c Errors.c Position.c Source.c rString.c \
	  rGetopt.c rFsearch.c rSrcMem.c

HEADERS	= rSystem.h General.h rMemory.h DynArray.h StringM.h Idents.h Sets.h \
	  Relation.h rTime.h Errors.h Position.h Source.h rString.h \
	  rGetopt.h rFsearch.h rSrcMem.h \
	  ratc.h Reuse.h

TEST_PROGS = rMemoryD.c DynArrDr.c SetsDrv.c RelDrv.c IdentsDr.c StringMD.c \
	  ErrorsDr.c rStringD.c rGetoptD.c rGetoptLD.c rFsearD.c rSrcMemD.c

OBJS	= rSystem.o General.o rMemory.o DynArray.o StringM.o Idents.o Sets.o \
	  Relation.o rTime.o Errors.o Position.o Source.o rString.o \
	  $(ANSI_OBJECTS)

# targets

all par: $(LIB_FILE)

$(LIB_FILE):	$(OBJS)
	ar ruc $(LIB_FILE) $(OBJS)
	$(RANLIB) $(LIB_FILE)

# shared library for Linux

$(SHLIB_FILE):	$(OBJS)
	ld -shared -o $(SHLIB_FILE) $(OBJS)

$(LIB_FILE_CPP):	$(SOURCES) $(HEADERS)
	cd cpp; for f in $(SOURCES); do $(CPPC) $(CFLAGS) -c ../$$f; done
	ar ruc $(LIB_FILE_CPP) cpp/*.o

install:	$(LIB_FILE) $(INC_DIR)
	$(INSTALL_DATA) $(LIB_FILE) $(LIB)
	$(RANLIB) $(LIB)/$(LIB_FILE)
	sh -c 'if test -f $(SHLIB_FILE); then \
		$(INSTALL_DATA) $(SHLIB_FILE) $(LIB); else true; fi'
	sh -c 'if test -f $(LIB_FILE_CPP); then \
		$(INSTALL_DATA) $(LIB_FILE_CPP) $(LIB); \
		$(RANLIB) $(LIB)/$(LIB_FILE_CPP); else true; fi'
	cp *.h Position.c Errors.c $(INC_DIR)
	cp ../../config.h $(INC_DIR)
	chmod u+w,a+r $(INC_DIR)/*.[hc]

image:	install

$(INC_DIR):
	sh -c "if test ! -d $(INC_DIR); then mkdir -p $(INC_DIR); else true; fi"

# exploring gettext

gettext gt:
	xgettext -k_ --package-name=Cocktail --package-version=0810 \
	  --copyright-holder=CoCoLab Errors.c

messages.mo: messages.po
	msgfmt messages.po

install_gt: messages.mo
	cp messages.mo /usr/share/locale/de/LC_MESSAGES/Cocktail.mo

test_gt: # compile with -D WITH_GETTEXT
	$(MAKE) ErrorsDr OPT="-D WITH_GETTEXT"
	LC_ALL=				ErrorsDr 2>&1 | fgrep Real	# en
	LC_ALL= LC_MESSAGES=en_US	ErrorsDr 2>&1 | fgrep Real	# en
	LC_ALL= LC_MESSAGES=de_DE	ErrorsDr 2>&1 | fgrep Real	# de
	LC_ALL=C			ErrorsDr 2>&1 | fgrep Real	# en
	LC_ALL=en_US			ErrorsDr 2>&1 | fgrep Real	# en
	LC_ALL=de_DE			ErrorsDr 2>&1 | fgrep Real	# de

# cleaning

clean:	clean-objects clean-test
	rm -f *Drv *Dr rMemoryD StringMD rStringD rGetoptD rGetoptLD rFsearD \
	  rSrcMemD core* .depend cpp/*
	rm -f *.obj *.sbr *.bsc *.exe *.pdb *.map *.vcw *.wsp
	rm -f *.OBJ *.SBR *.BSC *.EXE *.PDB *.MAP *.VCW *.WSP
	rm -f *.lib *.dll
	rm -f *.LIB *.DLL
	rm -f *.plg *.opt *.ncb
	rm -f *.PLG *.OPT *.NCB
	rm -fr Debug Release

clean-objects:
	rm -f *.o *.obj $(LIB_FILE) $(SHLIB_FILE) $(LIB_FILE_CPP)

# test programs

test:	rMemoryD DynArrDr SetsDrv RelDrv IdentsDr StringMD ErrorsDr rStringD \
	rGetoptD rGetoptLD rSrcMemD rFsearD
#	test_rFsearch

rMemoryD:	rMemoryD.o $(LIB_FILE)
	$(CC) -o rMemoryD rMemoryD.o $(LDFLAGS)

DynArrDr:	DynArrDr.o $(LIB_FILE)
	$(CC) -o DynArrDr DynArrDr.o $(LDFLAGS)

SetsDrv:	SetsDrv.o $(LIB_FILE)
	$(CC) -o SetsDrv SetsDrv.o $(LDFLAGS)

RelDrv:		RelDrv.o $(LIB_FILE)
	$(CC) -o RelDrv RelDrv.o $(LDFLAGS)

IdentsDr:	IdentsDr.o $(LIB_FILE)
	$(CC) -o IdentsDr IdentsDr.o $(LDFLAGS)

IdentsD2:	IdentsD2.o $(LIB_FILE)
	$(CC) -o IdentsD2 IdentsD2.o $(LDFLAGS)

StringMD:	StringMD.o $(LIB_FILE)
	$(CC) -o StringMD StringMD.o $(LDFLAGS)

ErrorsDr:	ErrorsDr.o $(LIB_FILE)
	$(CC) -o ErrorsDr ErrorsDr.o $(LDFLAGS)

rStringD:	rStringD.o $(LIB_FILE)
	$(CC) -o rStringD rStringD.o $(LDFLAGS)

rGetoptD:	rGetoptD.o $(LIB_FILE)
	$(CC) -o rGetoptD rGetoptD.o $(LDFLAGS)

rGetoptLD:	rGetoptLD.o $(LIB_FILE)
	$(CC) -o rGetoptLD rGetoptLD.o $(LDFLAGS)

rFsearD:	rFsearD.o $(LIB_FILE)
	$(CC) -o rFsearD rFsearD.o $(LDFLAGS)

rSrcMemD:	rSrcMemD.o $(LIB_FILE)
	$(CC) -o rSrcMemD rSrcMemD.o $(LDFLAGS)

test_rFsearch:	rFsearD
	@ touch test1 TEST2 Test3
	@ touch NOT-READABLE; chmod a-r NOT-READABLE
	@ ln -s NOT-READABLE NOT-READABLE-LINK
	@ touch READABLE
	@ ln -s READABLE READABLE-LINK
	@ ln -s NO-LINK1 NO-LINK2
	@ touch XXXXX; ln -s XXXXX NO-LINK3; rm XXXXX
	@ mkdir DIR foo foo/foo bar bar/foo
	@ touch foo/foo/foobar.h
	@ touch bar/foo/barfoo.h
	rFsearD
	@ chmod a+w NOT-READABLE
	$(MAKE) clean-test

clean-test:
	rm -rf DIR
	rm -rf foo
	rm -rf bar
	rm -f test1
	rm -f TEST2
	rm -f Test3
	rm -f NOT-READABLE*
	rm -f READABLE*
	rm -f NO-LINK*
	rm -f NO-SUCH-FILE

lint:
	lint -I. -I.. -I../.. -u *.c

sources:

docu:

depend:

.depend:	$(SOURCES) $(TEST_PROGS) Makefile
	gcc $(CFLAGS) -MM $(SOURCES) $(TEST_PROGS) > .depend

.SUFFIXES:	.c .o

.c.o:
	$(CC) $(CFLAGS) -c $*.c

# dependencies

rSystem.o: rSystem.c rSystem.h ratc.h rIntType.h ../../config.h rString.h \
  systimes.h
General.o: General.c General.h ratc.h rIntType.h
rMemory.o: rMemory.c rMemory.h ratc.h rIntType.h ../../config.h rSystem.h \
  General.h Errors.h Position.h Idents.h StringM.h
DynArray.o: DynArray.c DynArray.h ratc.h rIntType.h General.h rMemory.h
StringM.o: StringM.c StringM.h ../../config.h ratc.h rIntType.h rString.h \
  General.h rMemory.h Errors.h Position.h Idents.h
Idents.o: Idents.c Idents.h ../../config.h ratc.h rIntType.h StringM.h \
  rString.h DynArray.h Sets.h Errors.h Position.h
Sets.o: Sets.c Sets.h ratc.h rIntType.h DynArray.h General.h
Relation.o: Relation.c Relation.h ratc.h rIntType.h Sets.h General.h \
  DynArray.h
rTime.o: rTime.c rTime.h ratc.h rIntType.h rSystem.h
Errors.o: Errors.c Errors.h ratc.h rIntType.h Position.h Idents.h \
  ../../config.h StringM.h rString.h rSystem.h rMemory.h Sets.h DynArray.h
Position.o: Position.c Position.h ratc.h rIntType.h Idents.h ../../config.h \
  StringM.h rString.h
Source.o: Source.c Source.h ../../config.h ratc.h rIntType.h rSystem.h \
  rString.h
rString.o: rString.c rString.h ratc.h rIntType.h ../../config.h
rGetopt.o: rGetopt.c rSystem.h ratc.h rIntType.h rString.h ../../config.h \
  rGetopt.h
rFsearch.o: rFsearch.c rSystem.h ratc.h rIntType.h rMemory.h DynArray.h \
  rFsearch.h rString.h ../../config.h
rSrcMem.o: rSrcMem.c rSystem.h ratc.h rIntType.h rString.h ../../config.h \
  rSrcMem.h Idents.h StringM.h Position.h DynArray.h rMemory.h Errors.h
rMemoryD.o: rMemoryD.c rMemory.h ratc.h rIntType.h
DynArrDr.o: DynArrDr.c rMemory.h ratc.h rIntType.h DynArray.h
SetsDrv.o: SetsDrv.c Sets.h ratc.h rIntType.h
RelDrv.o: RelDrv.c Relation.h ratc.h rIntType.h Sets.h
IdentsDr.o: IdentsDr.c ../../config.h Idents.h ratc.h rIntType.h StringM.h \
  rMemory.h
StringMD.o: StringMD.c rString.h ratc.h rIntType.h ../../config.h StringM.h
ErrorsDr.o: ErrorsDr.c ../../config.h Position.h ratc.h rIntType.h Idents.h \
  StringM.h Errors.h Sets.h
rStringD.o: rStringD.c rString.h ratc.h rIntType.h ../../config.h
rGetoptD.o: rGetoptD.c rString.h ratc.h rIntType.h ../../config.h rGetopt.h \
  ratc.h
rGetoptLD.o: rGetoptLD.c rString.h ratc.h rIntType.h ../../config.h rGetopt.h \
  ratc.h
rFsearD.o: rFsearD.c rString.h ratc.h rIntType.h ../../config.h rMemory.h \
  rFsearch.h rTime.h
rSrcMemD.o: rSrcMemD.c rMemory.h ratc.h rIntType.h rString.h ../../config.h \
  rSrcMem.h Idents.h StringM.h Position.h
