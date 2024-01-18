all:prime_numbers

prime_numbers: main.o
				gcc main.o -o prime_numbers

clean:
		rm	-rf	*o prime_numbers