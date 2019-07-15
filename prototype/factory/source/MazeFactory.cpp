#include "MazeFactory.h"

#include "MazeBombed.h"
#include "MazeJungle.h"

MazeFactory::MazeFactory()
{
    mazes[BombedMaze] = new MazeBombed();
    mazes[JungleMaze] = new MazeJungle();
}

MazeFactory::~MazeFactory(){};

Maze *MazeFactory::createMaze(MazeType type)
{
    return mazes[type]->clone();
}
