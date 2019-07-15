#pragma once

#include "CarDecorator.h"

class AirCondition
    : public CarDecorator
{
  public:
    AirCondition(Car *c, double p, double w);
    virtual ~AirCondition();

    double getPrice() override;
    double getWeight() override;

  private:
    double price;
    double weight;
};