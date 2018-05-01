#include <iostream>
#include <exception>
#include "/home/yitzhak/Desktop/cpp3/Board.h"

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


void Board ::insert(int i, int j, char c){
    if(i>0 && i<this->num && (c=='O' || c=='X'))
        game[i][j]=c;
}


void Board :: printGame(){
    for(int i=0 ; i<this->num ; i++){
        for(int j=0 ; j<this->num ; j++){
            cout<<game[i][j];
        }
        cout<<endl;
    }
    cout<<endl;
}


int main(){

    Board a (3);
    a.printGame();
    a.insert(1,1,'X');
    a.printGame();

    return 0;
}
