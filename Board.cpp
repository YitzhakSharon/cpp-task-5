#include <iostream>
#include <exception>
#include "/home/yitzhak/Desktop/cpp3/Board.h"
#include "Point.h"
using namespace std;

Board:: Board(int num1){
    this->num=num1;
    this->game= new char*[num1];
    for (int i = 0; i < this->num; ++i)
        this->game[i] = new char[this->num];

    for(int i=0; i<this->num; i++){
        for(int j=0; j<this->num; j++){
            this->game[i][j]='.';
        }
    }
}

ostream& operator << (ostream& os,Board& c){
    for(int i=0 ; i<c.num ; i++){
        for(int j=0 ; j<c.num ; j++){
            os<<c.game[i][j];
        }
    os<<'\n';
    }
    return os;
}

char& Board::operator [] (Point p){
    if(p.x<num && p.y<num && p.x>=0 && p.y>=0 && game[p.x][p.y]=='.')
        return game[p.x][p.y];
    else
        cout<<"problem"<<endl;
       // throw "iliggaal expthions";
return game[p.x][p.y];
 
}

Board& Board:: operator = (char c){
    if(c=='.'){
        for(int i=0; i<this->num; i++){
            for(int j=0; j<this->num; j++){
                this->game[i][j]='.';
            }
        }
    }
    // else throw exptions
    else
        cout << "wrong caracter"<<endl;
    return *this;
}

int main(){
    Board a (3);
    cout<<a<<endl;
    a[{1,1}]='X';
    return 0;
}
