LIB	= $(HOME)/lib
INCDIR	= $(LIB)/cplusinc
CFLAGS	= -I$(INCDIR) -I/usr/X11/include -DSUPPORT_TVA
CPPC	= g++ -g
LDFLAGS	= -L$(X11)/lib -ltk8.4 -ltcl8.4 -lX11 -lm -ldl $(LIB)/librucpp.a

all:	test test3 test2

test:	Main
	Main > out
	diff expected.out out

test3:
	ast -+di +P g.ast; $(MAKE) Tree.o CPPC="g++ -pipe -ansi -pedantic"

Main:	Main.o Tree.o
	$(CPPC) -o Main Main.o Tree.o $(LDFLAGS)

Main.o:	Tree.h

Tree.h Tree.cxx: g.ast
	ast -+aeL +X g.ast

Tree.o:	Tree.h

Main2.o:	tree.h

test2:	Main2
	Main2 > out
	diff expected.out out

Main2: Main2.o \
tree.o treeE.o treeF.o treeN.o treeR.o treeb.o treee.o treef.o treeg.o treek.o \
treem.o treen.o treeo.o treep.o treeq.o treer.o treet.o treew.o treey.o treeX.o
	$(CPPC) -o Main2 Main2.o tree.o tree?.o $(LDFLAGS)

tree.h tree.cxx treeE.cxx treeF.cxx treeN.cxx treeR.cxx treeb.cxx treee.cxx treef.cxx treeg.cxx treek.cxx \
treem.cxx treen.cxx treeo.cxx treep.cxx treeq.cxx treer.cxx treet.cxx treew.cxx treey.cxx treeX.cxx: g2.ast
	echo TREE tree PRE_               | cat - g2.ast | ast -+daeL +X
	echo TREE tree PRE_               | cat - g2.ast | ast -+iL
	echo TREE tree PRE_ SUBUNIT treen | cat - g2.ast | ast -+in
	echo TREE tree PRE_ SUBUNIT treem | cat - g2.ast | ast -+im
	echo TREE tree PRE_ SUBUNIT treef | cat - g2.ast | ast -+if
	echo TREE tree PRE_ SUBUNIT treeF | cat - g2.ast | ast -+iF
	echo TREE tree PRE_ SUBUNIT treeo | cat - g2.ast | ast -+io
	echo TREE tree PRE_ SUBUNIT treer | cat - g2.ast | ast -+ir
	echo TREE tree PRE_ SUBUNIT treew | cat - g2.ast | ast -+iw
	echo TREE tree PRE_ SUBUNIT treeg | cat - g2.ast | ast -+ig
	echo TREE tree PRE_ SUBUNIT treep | cat - g2.ast | ast -+ip
	echo TREE tree PRE_ SUBUNIT treeR | cat - g2.ast | ast -+iR
	echo TREE tree PRE_ SUBUNIT treet | cat - g2.ast | ast -+it
	echo TREE tree PRE_ SUBUNIT treeb | cat - g2.ast | ast -+ib
	echo TREE tree PRE_ SUBUNIT treey | cat - g2.ast | ast -+iy
	echo TREE tree PRE_ SUBUNIT treeE | cat - g2.ast | ast -+i=
	echo TREE tree PRE_ SUBUNIT treek | cat - g2.ast | ast -+ik
	echo TREE tree PRE_ SUBUNIT treeq | cat - g2.ast | ast -+iq
	echo TREE tree PRE_ SUBUNIT treee | cat - g2.ast | ast -+ie
	echo TREE tree PRE_ SUBUNIT treeX | cat - g2.ast | ast -+i +X
	echo TREE tree PRE_ SUBUNIT treeN | cat - g2.ast | ast -+i_

clean:
	rm -f Main Main2 [Tt]ree*.* Main*.o yy[Tt]ree*.h a aa aaa b bb core* \
	   yyNode yySource out *.obj *.exe

.SUFFIXES:	.cxx .o

.cxx.o:
	$(CPPC) $(CFLAGS) -c $*.cxx
