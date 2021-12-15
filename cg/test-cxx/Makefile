LIB	= $(HOME)/lib
INCDIR	= $(LIB)/cplusinc
CFLAGS	= -I$(INCDIR) -I/usr/X11/include -DSUPPORT_TVA -DBEAUTY # -Wall
CPPC	= g++ -g
LDFLAGS	= -L$(X11)/lib -ltk8.4 -ltcl8.4 -lX11 -lm -ldl $(LIB)/librucpp.a

all:	test1 test2 test3

test1:	Main
	Main > out
	diff expected.out out

Main:	Main.o Tree.o
	$(CPPC) -o Main Main.o Tree.o $(LDFLAGS)

Tree.h Tree.cxx yyTree.h:	g.ast
	ast -c++aeL +X g.ast

Tree.o:	Tree.h yyTree.h
Main.o:	Tree.h

test2:	Main2
	Main2 > out
	diff expected.out out

Main2: Main2.o \
tree.o treeE.o treeN.o treeR.o treeb.o treee.o treef.o treeg.o treek.o \
treem.o treeo.o treep.o treeq.o treer.o treet.o treew.o treey.o treeX.o
	$(CPPC) -o Main2 Main2.o tree.o tree?.o $(LDFLAGS)

tree.h tree.cxx treeE.cxx treeN.cxx treeR.cxx treeb.cxx treee.cxx treef.cxx treeg.cxx treek.cxx \
treem.cxx treeo.cxx treep.cxx treeq.cxx treer.cxx treet.cxx treew.cxx treey.cxx treeX.cxx: g2.ast
	echo TREE tree               | cat - g2.ast | ast -c++daeL +X
	echo TREE tree               | cat - g2.ast | ast -c++iL
	echo TREE tree SUBUNIT treem | cat - g2.ast | ast -c++im
	echo TREE tree SUBUNIT treef | cat - g2.ast | ast -c++if
	echo TREE tree SUBUNIT treeo | cat - g2.ast | ast -c++io
	echo TREE tree SUBUNIT treer | cat - g2.ast | ast -c++ir
	echo TREE tree SUBUNIT treew | cat - g2.ast | ast -c++iw
	echo TREE tree SUBUNIT treeg | cat - g2.ast | ast -c++ig
	echo TREE tree SUBUNIT treep | cat - g2.ast | ast -c++ip
	echo TREE tree SUBUNIT treeR | cat - g2.ast | ast -c++iR
	echo TREE tree SUBUNIT treet | cat - g2.ast | ast -c++it
	echo TREE tree SUBUNIT treeb | cat - g2.ast | ast -c++ib
	echo TREE tree SUBUNIT treey | cat - g2.ast | ast -c++iy
	echo TREE tree SUBUNIT treeE | cat - g2.ast | ast -c++i=
	echo TREE tree SUBUNIT treek | cat - g2.ast | ast -c++ik
	echo TREE tree SUBUNIT treeq | cat - g2.ast | ast -c++iq
	echo TREE tree SUBUNIT treee | cat - g2.ast | ast -c++ie
	echo TREE tree SUBUNIT treeX | cat - g2.ast | ast -c++i +X
	echo TREE tree SUBUNIT treeN | cat - g2.ast | ast -c++i_

Main2.o:	tree.h

test3:	Main3
	@echo "*** expect CheckTree errors and output of question marks"
	echo q | Main3

Main3:	Main3.o tree3.o
	$(CPPC) -o Main3 Main3.o tree3.o $(LDFLAGS)

tree3.h tree3.cxx yytree3.h:	t3.ast
	ast -c++ae +X t3.ast

tree3.o:	tree3.h yytree3.h
Main3.o:	tree3.h

test4:	Main4
	Main4

Main4:	Main4.o Tree.o
	$(CPPC) -o Main4 Main4.o Tree.o $(LDFLAGS)

clean:
	rm -f Main Main? [Tt]ree*.* yy[Tt]ree*.h a aa aaa b bb t.xml
	rm -f *.o core* yyNode yySource out *.obj *.exe

.SUFFIXES:	.cxx .o

.cxx.o:
	$(CPPC) $(CFLAGS) -c $*.cxx
