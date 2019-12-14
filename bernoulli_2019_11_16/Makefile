CFLAGS=-ggdb -Wall # compilation flags - language standard etc.
LDLIBS=-lm # additional libraries

all: bernoulli_table
	@echo 'Completed !!!'

bernoulli_table : bernoulli_table.c bernoulli.c
	@echo 'Compiling ...'
	@gcc $(CFLAGS) $^ $(LDLIBS) -o $@

clean:
	rm -f bernoulli_table