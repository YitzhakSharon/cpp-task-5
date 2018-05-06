#include <iostream>
# pragma once
class Coordinate{
    friend class Board;
    public:
        int x;
        int y;
    public:
        Coordinate(int x1 , int y1): x(x1), y(y1){}
};
