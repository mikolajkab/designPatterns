#pragma once

#include "MazeBuilder.h"

class MazeGameSimple
{
public:
  MazeGameSimple();
  ~MazeGameSimple();

  Maze *CreateMaze(MazeBuilder &builder);
};