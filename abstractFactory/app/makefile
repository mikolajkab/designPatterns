PROGS = app
HEADERS = $(wildcard include/*.h)

_SRCS = $(wildcard source/*.cpp)
SRCS = $(_SRCS:source/%=%)
OBJS = $(SRCS:.cpp=.o)

ABSTRACT = $(wildcard ../abstract/object/*.o)
CLIENT = $(wildcard ../client/object/*.o)
CONCRETE = $(wildcard ../concrete/object/*.o)

SRCDIR = source
INCDIR = include \
		../client/include \
		../abstract/include \
		../concrete/include 

OBJDIR = object
OUTDIR = output

G++ = g++
CFLAGS = -g
INC = $(addprefix -I , $(INCDIR))

all: $(addprefix $(OUTDIR)/, $(PROGS))
	@echo app done

$(addprefix $(OUTDIR)/, $(PROGS)): $(addprefix $(OBJDIR)/, $(OBJS)) $(ABSTRACT) $(CONCRETE) $(CLIENT)
	@echo "Building target" $@ "..."
	$(G++) $^ -o $@

$(OBJDIR)/%.o : $(SRCDIR)/%.cpp
	$(G++) $(CFLAGS) $(INC) -c $< -o $@

$(OBJDIR)/$(OBJS): $(HEADERS)

clean:
	rm -f $(OUTDIR)/* $(OBJDIR)/*
