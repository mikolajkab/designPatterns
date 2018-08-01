#pragma once

#include "Maze.h"

class MazeStandard
    : public Maze
{
  public:
    MazeStandard();
    virtual ~MazeStandard();

    virtual void printMazeName() override;
};