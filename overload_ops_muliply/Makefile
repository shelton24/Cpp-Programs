all : Fraction_mult Fraction_io
Fraction_mult : Fraction.o main.o
	g++ -o $@ $^
Fraction_io : Fraction.o main_io_overload.o
	g++ -o $@ $^
