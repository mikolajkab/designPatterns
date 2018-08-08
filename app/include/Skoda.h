#pragma once

#include "Car.h"

class Skoda
    : public Car
{
public:
  Skoda(double p, double w);
  virtual ~Skoda();

  double getPrice() override;
  double getWeight() override;

private:
  Car *car;
  double price;
  double weight;
};