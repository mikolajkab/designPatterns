#pragma once

#include "HouseReal.h"

class House
{
  public:
    House();
    virtual ~House();
    void build();

  private:
    HouseReal *houseReal;
    static int totalNumberHouses;
    int houseId;
};