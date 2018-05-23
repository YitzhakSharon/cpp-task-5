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
      try{
        Coordinate t=one.play(this->b);
        //cout<<"Chep"<< t.x<<" "<<t.y<<endl;
        if(this->b[t]!='.'){
          this->win=&two;
            win =true;

          throw IllegalCharException(b[t]);
        }
        else
          this->b[t]=one.myChar;

      }catch (...) {
        this->win=&two;
          win =true;
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
      try{
        Coordinate t = two.play(this->b);
      //  cout<<"XY"<< t.x<<" "<<t.y<<endl;

        if(this->b[t]!='.'){
          this->win=&one;
            win =true;

          throw IllegalCharException(b[t]);
        }
        else
          this->b[t]=two.myChar;

      }catch (...) {
        this->win=&one;
          win =true;

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

  int i=this->num-1;
  int j=0;
  while (i>=0) {
      if(this->b[{i,j}]==a)
        counter++;
      i--;
      j++;
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
