PROGS = app
HEADERS = $(wildcard include/*.h)

_SRCS = $(wildcard source/*.cpp)
SRCS = $(_SRCS:source/%=%)
OBJS = $(SRCS:.cpp=.o)

GAME = $(wildcard ../game/object/*.o)
BOMBED = $(wildcard ../mazeBombed/object/*.o)
JUNGLE = $(wildcard ../mazeJungle/object/*.o)

SRCDIR = source
INCDIR = include \
		../game/include \
		../mazeBombed/include \
		../mazeJungle/include 

OBJDIR = object
OUTDIR = output

G++ = g++
CFLAGS = -g
INC = $(addprefix -I , $(INCDIR))

all: $(addprefix $(OUTDIR)/, $(PROGS))
	@echo app done

$(addprefix $(OUTDIR)/, $(PROGS)): $(addprefix $(OBJDIR)/, $(OBJS)) $(GAME) $(BOMBED) $(JUNGLE)
	@echo "Building target" $@ "..."
	$(G++) $^ -o $@

$(OBJDIR)/%.o : $(SRCDIR)/%.cpp
	@echo Complinig
	$(G++) $(CFLAGS) $(INC) -c $< -o $@

$(OBJDIR)/$(OBJS): $(HEADERS)

clean:
	rm -f $(OUTDIR)/* $(OBJDIR)/*
