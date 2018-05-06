#include <iostream>
#include "/home/yitzhak/Desktop/cpp3/Coordinate.h"
#pragma once
using namespace std;

class Board{
    public:
        int num;
        char** game;
    public:
        Board (int num1);
        char& operator [] (Coordinate p);
        Board& operator = (char c);
    friend ostream& operator << (ostream& os,Board& c);




    
};