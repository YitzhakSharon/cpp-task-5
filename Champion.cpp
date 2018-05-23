#include "Champion.h"
using namespace std;



const Coordinate Champion::play(const Board& board) {
  Coordinate temp {(uint)0,board.num-1};
  if(board[temp]=='.'){
    return temp;
  }
  else if(board[{board.num-1,(uint)0}]=='.'){
    Coordinate n {board.num-1,(uint)0};
    return n;
  }
  else{
    bool point =false;
    uint i= board.num-1;
    uint j=0;
    while(i>0){
      Coordinate core {i,j};
      if(board[core]=='.'){
        return core;
      }
      i--;
      j++;
    }
    return {0,0};
  }
}
