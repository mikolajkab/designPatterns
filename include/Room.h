#include "MapSite.h"
#include <cstdint>

class Room
    : public MapSite
{
public:
  Room(uint8_t roomNo);
  virtual ~Room();

  MapSite *GetSide(Direction) const;

  virtual void Enter();

private:
  MapSite *sides[4];
  uint8_t roomNo;
};