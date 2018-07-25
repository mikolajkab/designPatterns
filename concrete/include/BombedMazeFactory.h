#include "MazeFactory.h"

class BombedMazeFactory : public MazeFactory
{
  public:
    Wall *MakeWall() const override;
    Room *MakeRoom(int n) const override;
};