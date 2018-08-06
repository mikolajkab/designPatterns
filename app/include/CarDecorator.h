#pragma once

#include "Car.h"

class CarDecorator
    : public Car
{
  public:
    CarDecorator(Car *c);
    ~CarDecorator();

    double getPrice();
    double getWeight();

  private:
    Car *car;
};