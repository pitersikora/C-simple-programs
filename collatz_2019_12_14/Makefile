CFLAGS=-Wall -O2 # compilation flags - language standard etc.
LDLIBS=-lm # additional libraries
SRC=$(wildcard *.c)  # src is all source files one by one
HEADERS=$(wildcard *_func.c) # header files with program functions
MAINS=$(filter-out $(HEADERS),$(SRC)) # exclude header files from source files
PROGRAMS=$(patsubst %.c,%,$(MAINS))  # take each name divided by whitespace and remove extension
OUT=$(patsubst %.c,%.o,$(HEADERS))  # Precompiled functions file

all: $(PROGRAMS)
# @ means to make it silent - command wont be printed in bash
	@echo 'Completed !!!'

# each individual name is used to form task for compilation
%:
	@gcc $(CFLAGS) -c $@_func.c
	@echo 'Compiling $@ '
	@gcc $(CFLAGS) $@.c $@_func.o $(LDLIBS) -o $@

clean:
	rm -f $(PROGRAMS) $(OUT)