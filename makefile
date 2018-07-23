PROGS = app
HEADERS = *.h

_SRCS = $(wildcard source/*.cpp)
SRCS = $(_SRCS:source/%=%)
OBJS = $(SRCS:.cpp=.o)

SRCDIR = source
INCDIR = include
OBJDIR = object
OUTDIR = output

G++ = g++ 
CFLAGS = -g
INC = -I $(INCDIR)

all: $(addprefix $(OUTDIR)/, $(PROGS))
	@echo all done

$(addprefix $(OUTDIR)/, $(PROGS)): $(addprefix $(OBJDIR)/, $(OBJS))
	@echo "Building target" $@ "..."
	$(G++) $^ -o $@

$(OBJDIR)/%.o : $(SRCDIR)/%.cpp
	@echo "Compiling " $@ "..."
	$(G++) $(CFLAGS) $(INC) -c $< -o $@

$(OBJDIR)/$(OBJS): $(addprefix $(INCDIR)/, $(HEADERS))

clean:
	rm -f $(OUTDIR)/* $(OBJDIR)/*
