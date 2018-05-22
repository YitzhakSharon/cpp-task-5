
#include "Board.h"
#include "Player.h"
class TicTacToe{

public:
  uint num;
  Board board;
  Player win;
  TicTacToe(int num);
  void play(Player& one, Player& tow);
  const Player& winner () const;
  bool check_win(Character a);
  const Board& board();

};
