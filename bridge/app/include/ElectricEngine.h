#pragma once

#include "Engine.h"

class ElectricEngine
    : public Engine
{
  public:
    ElectricEngine();
    virtual ~ElectricEngine();

    void Drive() override;
};