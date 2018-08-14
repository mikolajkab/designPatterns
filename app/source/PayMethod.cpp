#include "PayMethod.h"

PayMethod::PayMethod() {}

PayMethod::~PayMethod() {}

void PayMethod::setNextPayMethod(PayMethod *nextPayMethod)
{
    next = nextPayMethod;
}