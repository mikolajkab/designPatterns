#pragma once

#include "Maze.h"

class MazeBombed
    : public Maze
{
  public:
    MazeBombed();
    virtual ~MazeBombed();

    virtual void printMazeName() override;
};
