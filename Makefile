CFLAGS=-Wall # compilation flags - language standard etc.
LDLIBS=-lm # additional libraries

all: hello_world ansi roots_2 sums_100 sums_1000 # first command is default - input only "make"

clean:
	rm -f a.out hello_world ansi roots_2 sums_100 sums_1000