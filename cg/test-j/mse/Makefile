include ../../../Makefile.config

test:	Tree.class T.class
	$(JAVA) -classpath $(CLASSPATH) T > out 2> err
	$(DIFF) expected.out out
	-$(DIFF) expected.err err

query:	Tree.class T.class
	$(JAVA) -classpath $(CLASSPATH) T q

Tree.java:	mse.ast
	ast -JimrwyogptbRkq= mse.ast

Tree.class:	Tree.java trees
	$(JAVAC) -classpath $(CLASSPATH) Tree.java

T.class:	T.java Tree.java trees
	$(JAVAC) -classpath $(CLASSPATH) T.java

trees:
	rm -f trees
	ln -s . trees

clean:
	rm -f *~ Tree* *.class out bin* temp* trees
