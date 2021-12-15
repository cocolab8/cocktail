LIB	= $(HOME)/lib
INCDIR	= $(LIB)/include
CFLAGS	= -I$(INCDIR) -I/usr/local/include
CFLAGS	= -I$(INCDIR) -DSUPPORT_TVA
CC	= cc -g
REUSE	= $(LIB)/libreuse.a
LDFLAGS	= -L$(X11)/lib -ltk8.4 -ltcl8.4 -lX11 -lm -ldl $(REUSE)

all:	test1 test3 test4 test5 test6 # test2

test1:
	$(MAKE) run clean LIB="$(LIB)" CC="cc -pipe"

test2:
	$(MAKE) run clean LIB="$(LIB)" CC="gcc -pipe -traditional"

test3:
	$(MAKE) run clean LIB="$(LIB)" CC="gcc -pipe -ansi -pedantic -Wall"

test4:
	$(MAKE) run clean LIB="$(LIB)" CC="g++ -pipe" REUSE="$(LIB)/librugpp.a"

test5:
	ast -cdi +P g.ast; $(MAKE) Tree.o CC="gcc -pipe -ansi -pedantic -Wall"

test6:	run2

run:	Main
	Main > out
	diff expected.out out

Main:	Main.o Tree.o
	$(CC) -o Main Main.o Tree.o $(LDFLAGS)

Main.o:	Tree.h

Tree.h Tree.c: g.ast
	ast -caeL +X g.ast

lint:
	lint $(CFLAGS) -u *.c

run2:	Main2
	Main2 > out
	diff expected.out out

Main2: \
tree.o treeE.o treeF.o treeN.o treeR.o treeb.o treee.o treef.o treeg.o treek.o \
treem.o treen.o treeo.o treep.o treeq.o treer.o treet.o treew.o treey.o treeX.o
	$(CC) $(CFLAGS) -o Main2 Main2.c tree.o tree?.o $(LDFLAGS)

tree.h \
tree.c treeE.c treeF.c treeN.c treeR.c treeb.c treee.c treef.c treeg.c treek.c \
treem.c treen.c treeo.c treep.c treeq.c treer.c treet.c treew.c treey.c \
treeX.c: g2.ast
	echo TREE tree PRE_               | cat - g2.ast | ast -cdeL
	echo TREE tree PRE_               | cat - g2.ast | ast -ciL
	echo TREE tree PRE_ SUBUNIT treen | cat - g2.ast | ast -cdin
	echo TREE tree PRE_ SUBUNIT treem | cat - g2.ast | ast -cdim
	echo TREE tree PRE_ SUBUNIT treef | cat - g2.ast | ast -cdif
	echo TREE tree PRE_ SUBUNIT treeF | cat - g2.ast | ast -cdiF
	echo TREE tree PRE_ SUBUNIT treeo | cat - g2.ast | ast -cdio
	echo TREE tree PRE_ SUBUNIT treer | cat - g2.ast | ast -cdir
	echo TREE tree PRE_ SUBUNIT treew | cat - g2.ast | ast -cdiw
	echo TREE tree PRE_ SUBUNIT treeg | cat - g2.ast | ast -cdig
	echo TREE tree PRE_ SUBUNIT treep | cat - g2.ast | ast -cdip
	echo TREE tree PRE_ SUBUNIT treeR | cat - g2.ast | ast -cdiR
	echo TREE tree PRE_ SUBUNIT treet | cat - g2.ast | ast -cdit
	echo TREE tree PRE_ SUBUNIT treeb | cat - g2.ast | ast -cdib
	echo TREE tree PRE_ SUBUNIT treey | cat - g2.ast | ast -cdiy
	echo TREE tree PRE_ SUBUNIT treeE | cat - g2.ast | ast -cdi=
	echo TREE tree PRE_ SUBUNIT treek | cat - g2.ast | ast -cdik
	echo TREE tree PRE_ SUBUNIT treeq | cat - g2.ast | ast -cdiq
	echo TREE tree PRE_ SUBUNIT treee | cat - g2.ast | ast -cdie
	echo TREE tree PRE_ SUBUNIT treeX | cat - g2.ast | ast -cdi +X
	echo TREE tree PRE_ SUBUNIT treeN | cat - g2.ast | ast -cdi_

clean:
	rm -f Main Main2 [Tt]ree*.* Main*.o yy* a aa aaa b bb core* out t.xml

.SUFFIXES:	.c .o

.c.o:
	$(CC) $(CFLAGS) -c $*.c
