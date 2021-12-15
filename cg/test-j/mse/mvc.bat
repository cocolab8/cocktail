set CT_DIR=h:\cocktail_test
set U_DIR=h:/cocktail_test
set PATH=%CT_DIR%\bin;%PATH%

del *.class
call ast -JimrwyogptbRkq= mse.ast
:run
javac -classpath E:\lib\reuse.jar T.java Tree.java
java -classpath E:\lib\reuse.jar;. T q
