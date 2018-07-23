#pragma once

#include "MapSite.h"
#include <cstdint>

class Room
    : public MapSite
{
public:
  Room(uint8_t roomNo);
  virtual ~Room();

  MapSite *GetSide(Direction) const;
  void SetSide(Direction, MapSite *);

  virtual void Enter();

private:
  MapSite *_sides[4];
  uint8_t _roomNumber;
};