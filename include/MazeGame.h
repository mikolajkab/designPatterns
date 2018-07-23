#pragma once

#include "Maze.h"
#include "MazeFactory.h"

class MazeGame
{
  public:
    MazeGame();
    virtual ~MazeGame();

    Maze *CreateMaze(MazeFactory &factory);
};
