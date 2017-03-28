math:math.o
	g++ -O2 -o math math.o
math.o:math.cpp
clear:
	rm math math.o
