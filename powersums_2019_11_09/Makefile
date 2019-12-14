CFLAGS=-Wall # compilation flags - language standard etc.
LDLIBS=-lm -I ../libs/ # additional libraries

all: power_sums # first command is default - input only "make"
	@echo 'Completed !!!'

power_sums:
	@echo 'Compiling ...'
	@cc $(CFLAGS) power_sums.c power_table.c array_op.c array_math.c ../libs/*.c $(LDLIBS) -o power_sums

clean:
	rm -f power_sums