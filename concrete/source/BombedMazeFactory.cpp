#include "BombedMazeFactory.h"

Wall *BombedMazeFactory::MakeWall() const
{
    return new Wall();
}

Room *BombedMazeFactory::MakeRoom(int n) const
{
    return new Room(n);
}