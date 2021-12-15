ADA	= gcc -c -g
# ADA	= gcc -c -g -gnat83
ADAL	= gnatbl
CFLAGS	= -g -I. -I .. -I../..
CC	= cc

all:	dynarray.ali errors.ali general.ali idents.ali position.ali sets.ali \
	sort.ali source.ali stringm.ali strings.ali rSystem.o

drv:	dynarrdr.ali errorsdr.ali identsdr.ali setsdrv.ali sourcedr.ali \
	stringmd.ali

test:	DynArrDr ErrorsDr IdentsDr SetsDrv SourceDr StringMD

dynarray.ali:	dynarray.adb dynarray.ads

specs:	dynarray.ads

dynarrdr.ali:	dynarrdr.adb dynarray.ads dynarray.adb

DynArrDr:	dynarrdr.ali dynarray.ali
	$(ADAL) dynarrdr.ali -o DynArrDr

errors.ali:	errors.adb errors.ads dynarray.ads

specs:	errors.ads

errorsdr.ali:	errorsdr.adb errors.ads errors.adb strings.ads idents.ads sets.ads

ErrorsDr:	errorsdr.ali all
	$(ADAL) errorsdr.ali -o ErrorsDr

idents.ali:	idents.adb idents.ads strings.ads

specs:	idents.ads

identsdr.ali:	identsdr.adb idents.ads idents.adb strings.ads

IdentsDr:	identsdr.ali idents.ali stringm.ali strings.ali
	$(ADAL) identsdr.ali -o IdentsDr

general.ali:	general.adb general.ads

specs:	general.ads

position.ali:	position.adb position.ads

specs:	position.ads

sets.ali:	sets.adb sets.ads dynarray.ads

specs:	sets.ads

setsdrv.ali:	setsdrv.adb sets.ads dynarray.ads dynarray.adb

SetsDrv:	setsdrv.ali sets.ali general.ali
	$(ADAL) setsdrv.ali -o SetsDrv

sort.ali:	sort.adb sort.ads

specs:	sort.ads

source.ali:	source.adb source.ads

specs:	source.ads

sourcedr.ali:	sourcedr.adb

SourceDr:	sourcedr.ali source.ali rSystem.o
	$(ADAL) sourcedr.ali rSystem.o -o SourceDr

strings.ali:	strings.adb strings.ads

specs:	strings.ads

stringm.ali:	stringm.adb stringm.ads strings.ads

specs:	stringm.ads

stringmd.ali:	stringmd.adb strings.ads

StringMD:	stringmd.ali stringm.ali strings.ali
	$(ADAL) stringmd.ali -o StringMD

clean:
	rm -f *drv.ali *dr.ali *d.ali *drv.o *dr.o rmemoryd.o stringmd.o \
		*Drv *Dr rMemoryD StringMD

CLEAN:
	rm -f *.ali *.o *Drv *Dr rMemoryD StringMD

.SUFFIXES: .ali .adb

.c.o:
	$(CC) $(CFLAGS) -c $*.c

.adb.ali:
	$(ADA) $*.adb
