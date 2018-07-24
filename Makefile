all: babstract bconcrete bclient bapp

babstract:
	@echo Invoking abstract/makefile
	(cd abstract; $(MAKE))

bconcrete:
	@echo Invoking concrete/makefile
	(cd concrete; $(MAKE))

bclient:
	@echo Invoking client/makefile
	(cd client; $(MAKE))

bapp:
	@echo Invoking app/makefile
	(cd app; $(MAKE))

clean:
	@echo Invoking abstract/make clean
	(cd abstract; $(MAKE) clean)

	@echo Invoking concrete/make clean
	(cd concrete; $(MAKE) clean)

	@echo Invoking client/make clean
	(cd client; $(MAKE) clean)

	@echo Invoking app/make clean
	(cd app; $(MAKE) clean)