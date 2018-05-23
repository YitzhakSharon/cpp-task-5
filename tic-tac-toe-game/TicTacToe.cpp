#include "TicTacToe.h"
#include <iostream>
using namespace std;

TicTacToe :: TicTacToe(int num){
  this->b= Board(num);
  this->num=(uint)num;
}
const Board& TicTacToe:: board() const{return this->b;}
Player& TicTacToe:: winner()const {return *(this->win);}



void TicTacToe:: play(Player& one, Player& two){
  one.myChar='X';
  tow.myChar='O';
  int counter = 0;
  int turn=0;
  bool win=false;
  // bool exception=false;
  while(!win && counter<(this->num)*2){
    if(turn==0){
      try{
        this->board[one.play()]=one.myChar;
        counter++;
      }catch (const IllegalCoordinateException& ex) {
          //*(this->win)=two;
          this->win = &two;
         	cout << "Illegal Action: " << one.name() << endl;
          break;

      }

      if(check_win(one.myChar)){
        win = true;
        // *(this->win) = one;
        this->win = &one;
      }
      turn=1;
    }
    else{
      try{
        this->b[two.play()]=two.myChar;
        counter++;
      }catch (const IllegalCoordinateException& ex) {
          // *(this->win)=one;
          this->win = &one;
         	cout << "Illegal Action: " << two.name() << endl;
          break;

      }
      if(check_win(two.myChar)){
        win = true;
        // *(this->win) = two;
        this->win = &two;
      }
      turn=0;
    }

  }
  if (counter == (this->num)*2){
    this->win = &two;
  }
}

bool TicTacToe:: check_win(Character a){
  int counter = 0;
  for (int i=0; i<this->num; i++){
      if(this->b[{i,i}] == a)
         counter ++;
    }

    if (counter == this->num){
      return true;

  counter=0;
  for (int i=0; i<this->num; i++){
    for(int j=0; j<this->num;j++){
    if(this->b[{i,j}] == a)
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
    if(this->b[{j,i}] == a)
        counter ++;
    }
    if(counter==this->num)
        return true;
    else
      counter=0;
    }
