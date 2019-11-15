CFLAGS=-Wall # compilation flags - language standard etc.
LDLIBS=-lm # additional libraries

all: ansi roots_2 power_sums # first command is default - input only "make"

power_sums:
	cc -Wall power_sums.c array_op.c array_math.c -lm -o power_sums

clean:
	rm -f a.out ansi roots_2 power_sums