#pragma once
#include <iostream>
#include "Character.h"
#include "IllegalCoordinateException.h"
#include "IllegalCharException.h"

using namespace std;

class Board{
    public:
        int num;
        Character** board;
    public:
        Board(int num1):num(num1){
            Character** b = new Character*[this->num];
            for (int i = 0; i < this->num; i++)
                b[i] = new Character[num];

            for(int i=0; i<this->num; i++){
                for(int j=0; j<this->num; j++){
                    b[i][j]='.';
                }
            }
            this->board = b;
        };

        Board():num(2){
            Character** b = new Character*[this->num];
            for (int i = 0; i < this->num; i++)
                b[i] = new Character[num];

            for(int i=0; i<this->num; i++){
                for(int j=0; j<this->num; j++){
                    b[i][j]='.';
                }
            }
            this->board = b;
        };

        Board(const Board& b);
        Character& operator [] (Coordinate);
        Board& operator =(char);
        Board& operator = (const Board& b);
        ~Board();
friend ostream& operator << (ostream& os,Board& c);
};