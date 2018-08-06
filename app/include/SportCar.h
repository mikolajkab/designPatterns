#pragma once

#include "Car.h"
#include "Engine.h"

class SportCar
    : public Car
{
  public:
    SportCar(Engine *eng);
    virtual ~SportCar();

    void Drive() override;
};
