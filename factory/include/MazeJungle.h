#pragma once

#include "Maze.h"

class MazeJungle
    : public Maze
{
  public:
    MazeJungle();
    virtual ~MazeJungle();

    virtual void printMazeName() override;
    virtual Maze *clone() override;

  private:
    int numRooms;
    int numDoors;
};