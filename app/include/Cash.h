#pragma once

#include "PayMethod.h"

class Cash
    : public PayMethod
{
  public:
    Cash();
    virtual ~Cash();

    void Pay(Method method) override;
};