MC	= mc
MCFLAGS	= -d ../../reuse/src

all:	test0 test1 test2

test0:	Main
	Main > out
	diff expected.out out

Main:	Main.mi Tree.md Tree.mi
	echo p Main | $(MC) $(MCFLAGS)

Tree.md Tree.mi: g.ast
	ast -aL g.ast

test1:	Main1
	Main1 > out
	diff expected.out out

Main1:	Main1.mi
	ast -aeL g.ast
	rm -f Tree.[dor]
	echo p Main1 | $(MC) $(MCFLAGS)

test2:	Main2
	Main2 > out
	diff expected.out out

Main2: \
tree.md \
tree.mi treeE.mi treeF.mi treeN.mi treeR.mi treeb.mi treee.mi treef.mi \
treeg.mi treek.mi treem.mi treen.mi treeo.mi treep.mi treeq.mi treer.mi \
treet.mi treew.mi treey.mi
	echo p Main2 | $(MC) $(MCFLAGS)

tree.md \
tree.mi treeE.mi treeF.mi treeN.mi treeR.mi treeb.mi treee.mi treef.mi \
treeg.mi treek.mi treem.mi treen.mi treeo.mi treep.mi treeq.mi treer.mi \
treet.mi treew.mi treey.mi	: g2.ast
	echo TREE tree               | cat - g2.ast | ast -di_oteL
	echo TREE tree SUBUNIT treen | cat - g2.ast | ast -din
	echo TREE tree SUBUNIT treem | cat - g2.ast | ast -dim
	echo TREE tree SUBUNIT treef | cat - g2.ast | ast -dif
	echo TREE tree SUBUNIT treeF | cat - g2.ast | ast -diF
	echo TREE tree SUBUNIT treeo | cat - g2.ast | ast -dio
	echo TREE tree SUBUNIT treer | cat - g2.ast | ast -dir
	echo TREE tree SUBUNIT treew | cat - g2.ast | ast -diw
	echo TREE tree SUBUNIT treeg | cat - g2.ast | ast -dig
	echo TREE tree SUBUNIT treep | cat - g2.ast | ast -dip
	echo TREE tree SUBUNIT treeR | cat - g2.ast | ast -diR
	echo TREE tree SUBUNIT treet | cat - g2.ast | ast -dit
	echo TREE tree SUBUNIT treeb | cat - g2.ast | ast -dib
	echo TREE tree SUBUNIT treey | cat - g2.ast | ast -diy
	echo TREE tree SUBUNIT treeE | cat - g2.ast | ast -di=
	echo TREE tree SUBUNIT treek | cat - g2.ast | ast -dik
	echo TREE tree SUBUNIT treeq | cat - g2.ast | ast -diq
	echo TREE tree SUBUNIT treee | cat - g2.ast | ast -die
	echo TREE tree SUBUNIT treeN | cat - g2.ast | ast -di_

clean:
	rm -f Main Main[12] [Tt]ree*.* Main*.[dor] a aa aaa b bb core* yy* out
