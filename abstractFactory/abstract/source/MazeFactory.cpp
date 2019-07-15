#include "MazeFactory.h"

MazeFactory::MazeFactory()
{
}

MazeFactory::~MazeFactory()
{
}

Maze *MazeFactory::MakeMaze() const
{
    return new Maze;
}

Wall *MazeFactory::MakeWall() const
{
    return new Wall;
}

Room *MazeFactory::MakeRoom(int n) const
{
    return new Room(n);
}

Door *MazeFactory::MakeDoor(Room *r1, Room *r2) const
{
    return new Door(r1, r2);
}
