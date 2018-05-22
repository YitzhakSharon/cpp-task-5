#include "Champion.h"
using namespace std;


const Coordinate Champion::play(const Board& board) {
  Coordinate t {(uint)0,(uint)board.num-1};
    cout<< board<<endl;
    if(board[{(uint)0,(uint)board.num-1}]=='.')
      board[t]=this->myChar;
      t.x=board.num-1;
      t.y=0;
    if(board[t]=='.')
      board[t]=this->myChar;
    bool put=false;
    int i=0;
     Coordinate temp {-1,-1};
      while(!put && i<board.num-1){
       temp.x=i;
       temp.y=i;
        if(board[temp]=='.'){
          board[temp]=this->myChar;
          put=true;
        }
      }

      return temp;
}
