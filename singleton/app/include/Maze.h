#pragma once

#include "Door.h"
#include "Room.h"

class Maze
{
  public:
    static Maze &getInstance();

  private:
    Maze();

    Door door;
    Room room;
};
