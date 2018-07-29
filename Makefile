all: bgame bmazeBombed bmazeJungle bapp

bgame:
	@echo Invoking game/makefile
	(cd game; $(MAKE))

bmazeBombed:
	@echo Invoking mazeBombed/makefile
	(cd mazeBombed; $(MAKE))

bmazeJungle:
	@echo Invoking mazeJungle/makefile
	(cd mazeJungle; $(MAKE))

bapp:
	@echo Invoking app/makefile
	(cd app; $(MAKE))

clean:
	@echo Invoking game/make clean
	(cd game; $(MAKE) clean)

	@echo Invoking mazeBombed/make clean
	(cd mazeBombed; $(MAKE) clean)

	@echo Invoking mazeJungle/make clean
	(cd mazeJungle; $(MAKE) clean)

	@echo Invoking app/make clean
	(cd app; $(MAKE) clean)
	