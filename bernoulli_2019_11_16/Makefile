CFLAGS=-ggdb -Wall # compilation flags - language standard etc.
LDLIBS=-lm # additional libraries

all: bernoulli_table

bernoulli_table : bernoulli_table.c bernoulli.c
	gcc $(CFLAGS) $^ $(LDLIBS) -o $@

clean:
	rm -f bernoulli_table