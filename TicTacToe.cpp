#include "TicTacToe.h"
#include <iostream>
using namespace std;

TicTacToe :: TicTacToe(int num){
  this->b= Board(num);
  this->num=(uint)num;
}
const Board& TicTacToe:: board() const {return this->b;}
const  Player& TicTacToe:: winner() const {return *(this->win);}



void TicTacToe:: play(Player& one, Player& two){
  one.myChar='X';
  two.myChar='O';
  int turn=0;
  bool win=false;
  while(!win){
    if(turn==0){
      Coordinate t=one.play(this->b);
      try{
        if(this->b[t]!='.'){
          win =true;
          this->win=&two;
          throw IllegalCharException(b[t]);
        }
        else
          this->b[t]=one.myChar;

      }catch (...) {
         	cout << "Illegal Action: " << one.name() << endl;
          break;
      }

      if(check_win(one.myChar)){
        cout<<"enter "<<endl;
          win = true;
          this->win=&one;
          break;
      }
      turn=1;
    }
    else{
      Coordinate t = two.play(this->b);
      try{
        if(this->b[t]!='.'){
          win =true;
          this->win=&one;
        throw IllegalCharException(b[t]);
        }
        else
          this->b[t]=two.myChar;

      }catch (...) {
        cout<< "la"<<endl;
         	cout << "Illegal Action: " << two.name() << endl;
          break;
      }

      if(check_win(two.myChar)){
          win = true;
          this->win=&two;
          break;
      }
      turn=0;

    }
  }

}

bool TicTacToe:: check_win(Character a){
  int counter = 0;
  for (int i=0; i<this->num; i++){
      if(this->b[{i,i}] == a)
         counter ++;
    }

    if (counter == this->num)
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
return false;
}
