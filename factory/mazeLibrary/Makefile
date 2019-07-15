HEADERS = $(wildcard include/*.h)

_SRCS = $(wildcard source/*.cpp)
SRCS = $(_SRCS:source/%=%)
OBJS = $(SRCS:.cpp=.o)

SRCDIR = source
INCDIR = include		
OBJDIR = object

G++ = g++
CFLAGS = -g
INC = $(addprefix -I , $(INCDIR))

all: $(addprefix $(OBJDIR)/, $(OBJS))
	@echo mazeLibrary objects done

$(OBJDIR)/%.o : $(SRCDIR)/%.cpp
	$(G++) $(CFLAGS) $(INC) -c $< -o $@

$(OBJDIR)/$(OBJS): $(HEADERS)

clean:
	rm -f $(OBJDIR)/*
