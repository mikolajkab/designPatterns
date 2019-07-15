#include "Transfer.h"

#include <iostream>

using namespace std;

Transfer::Transfer() {}

Transfer::~Transfer() {}

void Transfer::Pay(Method method)
{
    if (method == Method::transfer)
        cout << "Paying by Transfer" << endl;
    else if (next != 0)
        next->Pay(method);
    else
        cout << "Wrong payment method chosen " << endl;
}