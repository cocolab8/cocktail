include ../../Makefile.config

default:
	make Main DATA="5 4 3 2 0"

Main:	java.compiled
	echo $(DATA) | java -classpath $(CLASSPATH) Main $(SUFFIX)

Tree.java Eval.java: hag
	cg -JdimDIT hag

java.compiled: Tree.java Eval.java Main.java trees
	javac -classpath $(CLASSPATH) Tree.java Eval.java Main.java

trees:
	ln -s . trees

test:
	cg -JdimwDI hag
	make Main DATA="5 4 3 2 1 0" SUFFIX=">trace"
	echo IT >>trace
	cg -JIT hag
	make Main DATA="2 0" SUFFIX=">>trace"
	echo IX >>trace
	cg -JIX hag
	make Main DATA="2 0" SUFFIX=">>trace"
	echo IY >>trace
	cg -JIY hag
	make Main DATA="2 0" SUFFIX=">>trace"
	echo IZ >>trace
	cg -JIZ hag
	echo F > TraceTab
	make Main DATA="2 0" SUFFIX=">>trace"
	echo ITU >>trace
	cg -JITU hag
	make Main DATA="2 0" SUFFIX=">>trace"
	echo IXU >>trace
	cg -JIXU hag
	make Main DATA="2 0" SUFFIX=">>trace"
	echo IYU >>trace
	cg -JIYU hag
	make Main DATA="2 0" SUFFIX=">>trace"
	echo IZU >>trace
	cg -JIZU hag
	make Main DATA="2 0" SUFFIX=">>trace"
	-diff trace trace.exp

clean:
	rm -f TraceTab *.class Tree.* Eval.* trace trees
