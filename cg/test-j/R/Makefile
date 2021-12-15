include ../../../Makefile.config

test:	Tree.class T.class
	$(JAVA) -classpath $(CLASSPATH) T 4 > out
	$(DIFF) expected.out out

time:	Tree.class T.class
	time $(JAVA) -classpath $(CLASSPATH) T 200 > out

Tree.java:	R.ast
	ast -JimRw R.ast

Tree.class:	Tree.java
	$(JAVAC) -classpath $(CLASSPATH) Tree.java

T.class:	T.java
	$(JAVAC) -classpath $(CLASSPATH) T.java

clean:
	rm -f *~ Tree* *.class out
