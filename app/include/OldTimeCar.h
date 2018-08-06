#pragma once

#include "Car.h"
#include "Engine.h"

class OldTimeCar
    : public Car
{
  public:
    OldTimeCar(Engine *eng);
    virtual ~OldTimeCar();

    void Drive() override;
};
