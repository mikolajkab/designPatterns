#pragma once

#include "Engine.h"

class CombustionEngine
    : public Engine
{
  public:
    CombustionEngine();
    virtual ~CombustionEngine();

    void Drive() override;
};