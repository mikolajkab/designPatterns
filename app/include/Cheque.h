#pragma once

#include "PayMethod.h"

class Cheque
    : public PayMethod
{
  public:
    Cheque();
    virtual ~Cheque();

    void Pay(Method method) override;
};