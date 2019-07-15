#include "AirCondition.h"

AirCondition::AirCondition(Car *c, double p, double w)
    : CarDecorator(c), price(p), weight(w)
{
}

AirCondition::~AirCondition(){};

double AirCondition::getPrice()
{
    return CarDecorator::getPrice() + price;
}

double AirCondition::getWeight()
{
    return CarDecorator::getWeight() + weight;
}
