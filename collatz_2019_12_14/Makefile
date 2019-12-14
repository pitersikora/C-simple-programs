CFLAGS=-Wall -ggdb  # compilation flags - language standard etc.
LDLIBS=-lm # additional libraries
SRC=$(wildcard *.c)  # src is all source files one by one
HEADERS=$(wildcard *_func.c) # header files with program functions
MAINS=$(filter-out $(HEADERS),$(SRC)) # exclude header files from source files
PROGRAMS=$(patsubst %.c,%.bin,$(MAINS))  # take each name divided by whitespace and replace extension from .c to .bin

all: $(PROGRAMS)
# @ means to make it silent - command wont be printed in bash
	@echo 'Compiled !!!'

# each individual name is used to form task for compilation
%.bin: %.c
	gcc $(CFLAGS) $< $*_func.c $(LDLIBS) -o $@

clean:
	rm -f $(PROGRAMS)