PROGS = app
HEADERS = *.h

_SRCS = $(wildcard app/source/*.cpp) \
		$(wildcard abstract/source/*.cpp) \
		$(wildcard concrete/source/*.cpp) \
		$(wildcard client/source/*.cpp)

SRCS = $(_SRCS:source/%=%)
OBJS = $(SRCS:.cpp=.o)

SRCDIR = app/source \
		 abstract/source \
		 concrete/source \
		 client/source

INCDIR = app/include \
		 abstract/include \
		 concrete/include \
		 client/include

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
	@echo Complitaion...
	$(G++) $(CFLAGS) $(INC) -c $< -o $@

$(OBJDIR)/$(OBJS): $(addprefix $(INCDIR)/, $(HEADERS))

clean:
	rm -f $(OUTDIR)/* $(OBJDIR)/*
