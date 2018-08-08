#pragma once

#include "CarDecorator.h"

class Navigation
    : public CarDecorator
{
public:
  Navigation(Car *c, double p, double w);
  virtual ~Navigation();

  double getPrice() override;
  double getWeight() override;

private:
  double price;
  double weight;
};