CXX =g++ -std=c++17


all:  Board.o IllegalCharException.o IllegalCoordinateException.o Coordinate.o Character.o

Board.o: Board.cpp Board.h
	$(CXX) -c Board.cpp -o Coordinate.o

Character.o: Character.hpp
	$(CXX) -c Character.hpp -o Coordinate.o

Coordinate.o:Coordinate.hpp
	$(CXX) -c Coordinate.hpp -o Coordinate.o

IllegalCharException.o: IllegalCharException.hpp IllegalCharException.cpp
	$(CXX) -c IllegalCharException.cpp -o IllegalCharException.o

IllegalCoordinateException.o: IllegalCoordinateException.hpp IllegalCoordinateException.cpp
	$(CXX) -c IllegalCoordinateException.cpp -o IllegalCoordinateException.o

Clean:
	rm*.o a.out





