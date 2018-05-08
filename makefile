CXX =g++ -std=c++17


all:  Board.o IllegalCharException.o IllegalCoordinateException.o Coordinate.o Character.o

Board.o: Board.cpp Board.h
	$(CXX) -c Board.cpp -o Coordinate.o

Character.o: Character.h Character.cpp
	$(CXX) -c Character.cpp -o Coordinate.o

Coordinate.o:Coordinate.h Coordinate.cpp
	$(CXX) -c Coordinate.cpp -o Coordinate.o

IllegalCharException.o: IllegalCharException.h IllegalCharException.cpp
	$(CXX) -c IllegalCharException.cpp -o IllegalCharException.o

IllegalCoordinateException.o: IllegalCoordinateException.h IllegalCoordinateException.cpp
	$(CXX) -c IllegalCoordinateException.cpp -o IllegalCoordinateException.o

Clean:
	rm*.o a.out





