#include "Audi.h"

Audi::Audi(double p, double w)
    : price(p), weight(w){};

Audi::~Audi(){};

double Audi::getPrice()
{
    return price;
}

double Audi::getWeight()
{
    return weight;
}