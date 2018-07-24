#pragma once

#include "Room.h"

class Maze
{
public:
  Maze();
  virtual ~Maze();

  void AddRoom(Room *r);
  Room *RoomNo(int) const;
};