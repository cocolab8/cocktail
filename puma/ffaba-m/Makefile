all:	ffaba
	time ffaba

ffaba:	ffaba.mi Compiler.md Compiler.mi ProTest.md ProTest.mi
	echo p ffaba | mc -d ../../reuse/src

ProTest.md ProTest.mi ProTest.TS: ffaba.ast
	ast -di4 ffaba.ast

Compiler.md Compiler.mi: ffaba.pum ProTest.TS
	puma -dip ffaba.pum

clean:
	rm -f core* Compiler.* ProTest.* ffaba.[mor] ffaba
