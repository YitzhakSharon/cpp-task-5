#include "TicTacToe.h"
#include <iostream>
using namespace std;

TicTacToe :: TicTacToe(int num){
  this->board= Board(num);
  this->num=(uint)num;
}

void TicTacToe:: play(Player& one, Player& two){
  one.myChar='X';
  tow.myChar='O';
  int turn=0;
  bool win=false;
  bool exception=false;
  while(!win){
    if(turn==0){
        try{
          this->board[one.play()]=one.myChar;

         } catch (const IllegalCoordinateException& ex) {
           this->win=two;
           break;
         	cout << "Illegal Action: " << one.name() << endl;  // prints "Illegal coordinate: 3,4"
         }







      turn=1;
    }
    else{

      turn=0;
    }

  }





}

bool TicTacToe:: check_win(Character a){
  this->
}
