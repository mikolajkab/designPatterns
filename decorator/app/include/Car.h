#pragma once

class Car
{
  public:
    Car(){};
    virtual ~Car(){};

    virtual double getPrice() = 0;
    virtual double getWeight() = 0;
};