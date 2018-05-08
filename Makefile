CXX =g++ -std=c++14


all:  Board.o IllegalCharException.o IllegalCoordinateException.o Coordinate.o Character.o

Board.o: Board.cpp Board.h 
	$(CXX) -c Board.cpp -o Board.o

Character.o: Character.cpp Character.h 
	$(CXX) -c Character.cpp -o Character.o

Coordinate.o: Coordinate.cpp Coordinate.h 
	$(CXX) -c Coordinate.cpp -o Coordinate.o

IllegalCharException.o: IllegalCharException.cpp IllegalCharException.h
	$(CXX) -c IllegalCharException.cpp -o IllegalCharException.o

IllegalCoordinateException.o: IllegalCoordinateException.cpp IllegalCoordinateException.h
	$(CXX) -c IllegalCoordinateException.cpp -o IllegalCoordinateException.o

Clean:
	rm*.o a.out





