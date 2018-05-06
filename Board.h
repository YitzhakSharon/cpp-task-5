#include <iostream>
#include "Point.h"
#pragma once
using namespace std;

class Board{
    public:
        int num;
        char** game;
    public:
        Board(int num1);
        void printGame();
    friend ostream& operator << (ostream& os,Board& c);
        char& operator [] (Point p);
        Board& operator = (char c);




    
};