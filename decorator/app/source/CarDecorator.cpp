#include "CarDecorator.h"

CarDecorator::CarDecorator(Car *c)
    : car(c)
{
}

CarDecorator::~CarDecorator() {}

double CarDecorator::getPrice()
{
    return car->getPrice();
}

double CarDecorator::getWeight()
{
    return car->getWeight();
}