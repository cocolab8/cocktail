include ../../../Makefile.config

test:	de/cocolab/test/myTree.class de/cocolab/test/T.class
	$(JAVA) -classpath $(CLASSPATH) de.cocolab.test.T > out
	-$(DIFF) expected.out out

myTree.java:	o.ast
	ast -Jia o.ast

de/cocolab/test/myTree.class:	myTree.java
	$(JAVAC) -classpath $(CLASSPATH) -d . myTree.java

de/cocolab/test/T.class:	T.java myTree.java
	$(JAVAC) -classpath $(CLASSPATH) -d . T.java

clean:
	rm -f *~ myTree* out
	rm -rf de

