minesweeper:minesweeper.cpp
	g++ -O2 -o minesweeper minesweeper.cpp -lcurses
math:math.o
	g++ -O2 -o math math.o
math.o:math.cpp
clear:
	rm math math.o minesweeper
