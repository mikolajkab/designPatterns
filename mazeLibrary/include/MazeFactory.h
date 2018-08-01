#pragma once

#include "Maze.h"

enum MazeType
{
    mazeBombed,
    mazeJungle,
    mazeStandard
};

class MazeFactory
{
  public:
    static Maze *createMaze(MazeType mazeType);
};