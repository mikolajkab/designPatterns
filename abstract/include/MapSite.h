#pragma once

class MapSite
{
public:
  MapSite();
  virtual ~MapSite();

  virtual void Enter() = 0;

  enum Direction
  {
    North,
    South,
    East,
    West
  };
};