#pragma once

#include "Maze.h"

class MazeJungle
    : public Maze
{
  public:
    MazeJungle();
    ~MazeJungle();

    virtual void printMazeName() override;
};
