LIB	= $(HOME)/lib

all:	test minilax hag new

test:
	cd test-c	; $(MAKE) LIB=$(LIB)
	cd test-cpp	; $(MAKE) LIB=$(LIB)
	cd test-cxx	; $(MAKE) LIB=$(LIB)
	cd test-m	; $(MAKE) LIB=$(LIB)
	cd test-j	; $(MAKE) LIB=$(LIB)
	cd lpp-j	; $(MAKE) LIB=$(LIB) test
	cd calc-j	; $(MAKE) LIB=$(LIB) test

minilax:
	cd minilax-c	; $(MAKE) LIB=$(LIB) all minilax-cpp run clean test test2 trace
	cd minilax-prefix; $(MAKE) LIB=$(LIB) all minilax-cpp run clean test test2 trace
	cd minilax-cpp	; $(MAKE) LIB=$(LIB) all test test2 trace
#	cd minilax-cpp-pre; $(MAKE) LIB=$(LIB) all test test2 trace
#	cd minilax-cpp2	; $(MAKE) LIB=$(LIB) all test test2 trace
	cd minilax-cxx	; $(MAKE) LIB=$(LIB) all test test2 trace
	cd minilax-m	; $(MAKE) LIB=$(LIB) all test test2 trace
	cd minilax-j	; $(MAKE) LIB=$(LIB)
	cd wag-c	; $(MAKE) LIB=$(LIB) all minilax-cpp run clean test2
	cd wag-m	; $(MAKE) LIB=$(LIB)

new:
	cd minilax-cpp-pre; $(MAKE) LIB=$(LIB) all test test2 trace
	cd minilax-cpp2	; $(MAKE) LIB=$(LIB) all test test2 trace

hag:
	cd hag-c	; $(MAKE) LIB=$(LIB) Main test
	cd hag-cpp	; $(MAKE) LIB=$(LIB) Main test
	cd hag-cxx	; $(MAKE) LIB=$(LIB) Main test
	cd hag-m	; $(MAKE) LIB=$(LIB) Main test
	cd hag-j	; $(MAKE) LIB=$(LIB) Main test

clean:
	cd test-c	; $(MAKE) clean
	cd test-cpp	; $(MAKE) clean
	cd test-cxx	; $(MAKE) clean
	cd test-m	; $(MAKE) clean
	cd test-j	; $(MAKE) clean
	cd lpp-j	; $(MAKE) clean
	cd calc-j	; $(MAKE) clean
	cd minilax-c	; $(MAKE) clean
	cd minilax-prefix; $(MAKE) clean
	cd minilax-cpp	; $(MAKE) clean
	cd minilax-cpp-pre; $(MAKE) clean
	cd minilax-cpp2	; $(MAKE) clean
	cd minilax-cxx	; $(MAKE) clean
	cd minilax-m	; $(MAKE) clean
	cd minilax-j	; $(MAKE) clean
	cd wag-c	; $(MAKE) clean
	cd wag-m	; $(MAKE) clean
	cd hag-c	; $(MAKE) clean
	cd hag-cpp	; $(MAKE) clean
	cd hag-cxx	; $(MAKE) clean
	cd hag-m	; $(MAKE) clean
	cd hag-j	; $(MAKE) clean
	rm -f */t.xml

