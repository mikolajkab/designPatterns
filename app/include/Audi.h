#pragma once

#include "Car.h"

class Audi
    : public Car
{
  public:
    Audi(double p, double w);
    virtual ~Audi();

    double getPrice() override;
    double getWeight() override;

  private:
    Car *car;
    double price;
    double weight;
};