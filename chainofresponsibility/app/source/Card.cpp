#include "Card.h"

#include <iostream>

using namespace std;

Card::Card() {}

Card::~Card() {}

void Card::Pay(Method method)
{
    if (method == Method::card)
        cout << "Paying by Card" << endl;
    else if (next != 0)
        next->Pay(method);
    else
        cout << "Wrong payment method chosen " << endl;
}