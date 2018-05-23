#pragma once
#include <string>
#include "Board.h"

class Player{
public:
  Character myChar;
  virtual const  string name() const=0;
  virtual const Coordinate play(const Board& board)=0;
  Character getChar() const{return this->myChar;}

};
