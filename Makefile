all: bfactory bapp

bfactory:
	@echo Invoking factory/makefile
	(cd factory; $(MAKE))

bapp:
	@echo Invoking app/makefile
	(cd app; $(MAKE))

clean:
	@echo Invoking factory/make clean
	(cd factory; $(MAKE) clean)

	@echo Invoking app/make clean
	(cd app; $(MAKE) clean)
	