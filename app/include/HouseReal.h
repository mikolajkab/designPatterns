#pragma once

class HouseReal
{
  public:
    HouseReal(int id);
    virtual ~HouseReal();

    void build();

  private:
    int houseId;
    static int totalNumberHouses;
};