#include "Cheque.h"

#include <iostream>

using namespace std;

Cheque::Cheque() {}

Cheque::~Cheque() {}

void Cheque::Pay(Method method)
{
    if (method == Method::cheque)
        cout << "Paying by Cheque" << endl;
    else if (next != 0)
        next->Pay(method);
    else
        cout << "Wrong payment method chosen " << endl;
}