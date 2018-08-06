#pragma once

#include "Tool.h"

class Saw
    : public Tool
{
  public:
    Saw();
    virtual ~Saw();

    void use() override;
};