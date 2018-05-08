#pragma once
#include <iostream>
//#include "Coordinate.hpp"
#include "IllegalCoordinateException.hpp"
#include "IllegalCharException.hpp"

using namespace std;

class Board{
    public:
        int num;
        char** board;
    public:
        Board(int num1):num(num1){
            char** b = new char*[this->num];
            for (int i = 0; i < this->num; i++)
                b[i] = new char[num];

            for(int i=0; i<this->num; i++){
                for(int j=0; j<this->num; j++){
                    b[i][j]='.';
                }
            }
            this->board = b;
        };
        // Board(int num1);
        Board(){};
        Board(const Board& b);
        char& operator [] (Coordinate);
        Board& operator =(char);
        Board& operator = (const Board& b);
        ~Board();
friend ostream& operator << (ostream& os,Board& c);
};