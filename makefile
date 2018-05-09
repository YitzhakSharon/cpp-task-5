CXX =g++ -std=c++14


a.out:  Board.o IllegalCharException.o IllegalCoordinateException.o Coordinate.o Character.o
	$(CCX) main.cpp *.o

Board.o: Board.h Board.cpp
	$(CXX) -c Board.cpp -o Board.o

Character.o: Character.h Character.cpp
	$(CXX) -c Character.cpp -o Character.o

Coordinate.o:Coordinate.h Coordinate.cpp
	$(CXX) -c Coordinate.cpp -o Coordinate.o

IllegalCharException.o: IllegalCharException.h IllegalCharException.cpp
	$(CXX) -c IllegalCharException.cpp -o IllegalCharException.o

IllegalCoordinateException.o: IllegalCoordinateException.h IllegalCoordinateException.cpp
	$(CXX) -c IllegalCoordinateException.cpp -o IllegalCoordinateException.o

clean:
	rm*.o a.out





