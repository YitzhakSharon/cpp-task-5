CXX =g++ -std=c++17


a.out: Board.h Board.o IllegalCharException.o IllegalCoordinateException.o Coordinate.o
		$(CXX) main.cpp *.o

Board.o: Board.cpp Board.h
	$(CXX) -c Board.cpp

Character.o: Character.hpp
	$(CXX) -c Character.hpp

Coordinate.o:Coordinate.hpp
	$(CXX) -c Coordinate.hpp

IllegalCharException.o:IllegalCharException.hpp IllegalCharException.cpp
	$(CXX) -c IllegalCharException.cpp

IllegalCoordinateException.o:IllegalCoordinateException.hpp IllegalCoordinateException.cpp
	$(CXX) -c IllegalCoordinateException.cpp

Clean:
	rm*.o a.out





