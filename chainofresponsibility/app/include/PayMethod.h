#pragma once

enum Method
{
    cash,
    card,
    cheque,
    transfer
};

class PayMethod
{
  public:
    PayMethod();
    virtual ~PayMethod();

    void setNextPayMethod(PayMethod *nextPayMethod);
    virtual void Pay(Method method) = 0;

  protected:
    PayMethod *next;
};