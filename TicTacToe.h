#include "Board.h"
#include "Player.h"
class TicTacToe{

public:
  uint num;
  Board board;
  Player* win;
  TicTacToe(int num);
  void play(Player& one, Player& tow);
  Player& winner ();
  bool check_win(Character a);
  void board();
};
