#pragma once

#include "MapSite.h"
#include <cstdint>

class Wall : public MapSite
{
  public:
    Wall();
    virtual ~Wall();

    virtual void Enter() override;
};