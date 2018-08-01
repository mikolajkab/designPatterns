PROGS = app
HEADERS = $(wildcard include/*.h)

_SRCS = $(wildcard source/*.cpp)
SRCS = $(_SRCS:source/%=%)
OBJS = $(SRCS:.cpp=.o)

FACTORY = $(wildcard ../factory/object/*.o)

SRCDIR = source
INCDIR = include \
		../factory/include

OBJDIR = object
OUTDIR = output

G++ = g++
CFLAGS = -g
INC = $(addprefix -I , $(INCDIR))

all: $(addprefix $(OUTDIR)/, $(PROGS))
	@echo app done

$(addprefix $(OUTDIR)/, $(PROGS)): $(addprefix $(OBJDIR)/, $(OBJS)) $(FACTORY)
	@echo "Building target" $@ "..."
	$(G++) $^ -o $@

$(OBJDIR)/%.o : $(SRCDIR)/%.cpp
	@echo Complinig
	$(G++) $(CFLAGS) $(INC) -c $< -o $@

$(OBJDIR)/$(OBJS): $(HEADERS)

clean:
	rm -f $(OUTDIR)/* $(OBJDIR)/*
