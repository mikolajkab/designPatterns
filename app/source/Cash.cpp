#include "Cash.h"

#include <iostream>

using namespace std;

Cash::Cash() {}

Cash::~Cash() {}

void Cash::Pay(Method method)
{
    if (method == Method::cash)
        cout << "Paying by cash" << endl;
    else if (next != 0)
        next->Pay(method);
    else
        cout << "Wrong payment method chosen " << endl;
}