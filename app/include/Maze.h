#pragma once

#include "Door.h"
#include "Room.h"

class Maze
{
  public:
    static Maze *Instance();

  private:
    Maze();
    ~Maze();

    static Maze *instance;

    Door door;
    Room room;
};
