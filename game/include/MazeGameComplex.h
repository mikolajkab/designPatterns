#pragma once

#include "MazeBuilder.h"

class MazeGameComplex
{
public:
  MazeGameComplex();
  ~MazeGameComplex();

  Maze *CreateMaze(MazeBuilder &builder);
};