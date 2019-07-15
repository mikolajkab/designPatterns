#pragma once

#include "MazeFactory.h"

class EnchantedMazeFactory : public MazeFactory
{
public:
  EnchantedMazeFactory();
  ~EnchantedMazeFactory();

  virtual Room *MakeRoom(int n) const;
  virtual Door *MakeDoor(Room *r1, Room *r2) const;
};
