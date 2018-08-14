#pragma once

#include "PayMethod.h"

class Card
    : public PayMethod
{
  public:
    Card();
    virtual ~Card();

    void Pay(Method method) override;
};