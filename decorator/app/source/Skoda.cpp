#include "Skoda.h"

Skoda::Skoda(double p, double w)
    : price(p), weight(w){};

Skoda::~Skoda(){};

double Skoda::getPrice()
{
    return price;
}

double Skoda::getWeight()
{
    return weight;
}