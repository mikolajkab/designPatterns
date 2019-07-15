#pragma once

#include "Room.h"

class BombedRoom : public Room
{
  public:
    BombedRoom(uint8_t roomNo);
    ~BombedRoom();
};