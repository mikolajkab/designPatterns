#pragma once

#include "Room.h"

class Maze
{
  public:
    Maze();
    virtual ~Maze();

    void AddRoom(Room *);
    Room *RoomNo(int) const;
};