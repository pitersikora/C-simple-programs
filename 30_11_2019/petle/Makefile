CFLAGS=-Wall  # compilation flags - language standard etc.
LDLIBS=-lm -ggdb  # additional libraries
SRC = $(wildcard *.c)  # src is all source files one by one
PROGRAMS = $(patsubst %.c,%.bin,$(SRC))  # take each name divided by whitespace and replace extension from .c to .bin

all: $(PROGRAMS)
# @ means to make it silent - command wont be printed in bash
	@echo 'Compiled !!!'

# each individual name is used to form task for compilation
%.bin: %.c
	gcc $(CFLAGS) $< $(LDLIBS) -o $@

clean:
	rm -f $(PROGRAMS)
