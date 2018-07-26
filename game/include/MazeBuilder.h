#pragma once

#include "Maze.h"

class MazeBuilder
{
public:
  virtual void BuildMaze() = 0;
  virtual void BuildRoom(int n) = 0;
  virtual void BuildDoor(int roomFrom, int roomTo) = 0;

  virtual Maze *GetMaze() = 0;
};