#pragma once

#include "Engine.h"

class Car
{
public:
  Car(Engine *eng);
  virtual ~Car();

  virtual void Drive();

private:
  Engine *engine;
};