#include "TicTacToe.h"
#include <iostream>
using namespace std;

TicTacToe :: TicTacToe(int num){
  this->board= Board(num);
  this->num=(uint)num;
}
const Board& TicTacToe:: board(){return this->board;}
Player& TicTacToe:: winner()const {return this->win;}



void TicTacToe:: play(Player& one, Player& two){
  one.myChar='X';
  tow.myChar='O';
  int turn=0;
  bool win=false;
  // bool exception=false;
  while(!win){
    if(turn==0){
      try{
        this->board[one.play()]=one.myChar;
      }catch (const IllegalCoordinateException& ex) {
          *(this->win)=two;
         	cout << "Illegal Action: " << one.name() << endl;
          break;

      }

      if(check_win(one.myChar)){
        win = true;
        *(this->win) = one;
      }
      turn=1;
    }
    else{
      try{
        this->board[two.play()]=two.myChar;
      }catch (const IllegalCoordinateException& ex) {
          *(this->win)=one;
         	cout << "Illegal Action: " << two.name() << endl;
          break;

      }
      if(check_win(two.myChar)){
        win = true;
        *(this->win) = two;
      }
      turn=0;
    }

  }
}

bool TicTacToe:: check_win(Character a){
  int counuter = 0;
  for (int i=0; i<this->num; i++){
      if(this->board[{i,i}] == a)
         counter ++;
    }

    if (counter == this->num){
      return true;

  counter=0;
  for (int i=0; i<this->num; i++){
    for(int j=0; j<this->num;j++){
    if(this->board[{i,j}] == a)
        counter ++;
    }
    if(counter==this->num)
        return true;
    else
      counter=0;
    }

counter=0;
for (int i=0; i<this->num; i++){
  for(int j=0; j<this->num;j++){
    if(this->board[{j,i}] == a)
        counter ++;
    }
    if(counter==this->num)
        return true;
    else
      counter=0;
    }
