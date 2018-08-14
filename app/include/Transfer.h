#pragma once

#include "PayMethod.h"

class Transfer
    : public PayMethod
{
  public:
    Transfer();
    virtual ~Transfer();

    void Pay(Method method) override;
};