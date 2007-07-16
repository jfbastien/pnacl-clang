LEVEL = ../..
DIRS := Basic Lex Parse AST Sema CodeGen Driver

include $(LEVEL)/Makefile.common

check::
	cd test; $(MAKE)

test::
	cd test; $(MAKE)

clean::
	@rm -rf build
	@rm -rf `find test -name Output`
