#include "Player.h"


class Champion: public Player{
public:
  const string name() const override { return "Hadar Solika Alon and Yitzhak Sharon";}
  const Coordinate play(const Board& board) override;



};
