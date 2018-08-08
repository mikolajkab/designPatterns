#include "Navigation.h"

Navigation::Navigation(Car *c, double p, double w)
    : CarDecorator(c), price(p), weight(w)
{
}

Navigation::~Navigation(){};

double Navigation::getPrice()
{
    return CarDecorator::getPrice() + price;
}

double Navigation::getWeight()
{
    return CarDecorator::getWeight() + weight;
}
