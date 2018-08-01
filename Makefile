all: bmazeLibrary bapp

bmazeLibrary:
	@echo Invoking mazeLibrary/makefile
	(cd mazeLibrary; $(MAKE))

bapp:
	@echo Invoking app/makefile
	(cd app; $(MAKE))

clean:
	@echo Invoking mazeLibrary/make clean
	(cd mazeLibrary; $(MAKE) clean)

	@echo Invoking app/make clean
	(cd app; $(MAKE) clean)
	