CFLAGS=-Wall # compilation flags - language standard etc.
LDLIBS=-lm -I ../libs/ # additional libraries
SRC=$(wildcard *.c)  # src is all source files one by one
HEADERS=$(wildcard *_func.c) # header files with program functions
MAINS=$(filter-out $(HEADERS),$(SRC)) # exclude header files from source files
PROGRAMS=$(patsubst %.c,%,$(MAINS))  # take each name divided by whitespace and replace extension from .c to .bin

all: $(PROGRAMS)
# @ means to make it silent - command wont be printed in bash
	@echo 'Completed !!!'

zadanie_0: zadanie_0.c
	@echo 'Compiling $< '
	@gcc $(CFLAGS) $< $(LDLIBS) -o $@

# each individual name is used to form task for compilation
%: %.c %_func.c ../libs/*.c
	@echo 'Compiling $< '
	@gcc $(CFLAGS) $^ $(LDLIBS) -o $@

clean:
	rm -f $(PROGRAMS)