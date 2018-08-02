PROGS = app
HEADERS = $(wildcard app/include/*.h)

_SRCS = $(wildcard app/source/*.cpp)
SRCS = $(_SRCS:app/source/%=%)
OBJS = $(SRCS:.cpp=.o)

SRCDIR = app/source
INCDIR = app/include
OBJDIR = app/object
OUTDIR = app/output

G++ = g++
CFLAGS = -g
INC = $(addprefix -I , $(INCDIR))

all: $(addprefix $(OUTDIR)/, $(PROGS))
	@echo app done

$(addprefix $(OUTDIR)/, $(PROGS)): $(addprefix $(OBJDIR)/, $(OBJS))
	@echo "Building target" $@ "..."
	$(G++) $^ -o $@	

$(OBJDIR)/%.o : $(SRCDIR)/%.cpp
	@echo Complinig
	$(G++) $(CFLAGS) $(INC) -c $< -o $@

$(OBJDIR)/$(OBJS): $(HEADERS)

clean:
	rm -f $(OUTDIR)/* $(OBJDIR)/*
