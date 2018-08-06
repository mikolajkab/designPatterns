#pragma once

#include "Tool.h"

class Hammer
    : public Tool
{
  public:
    Hammer();
    virtual ~Hammer();

    void use() override;
};