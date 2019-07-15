#include "OldTimeCar.h"

#include <iostream>

using namespace std;

OldTimeCar::OldTimeCar(Engine *eng)
    : Car(eng)
{
}

OldTimeCar::~OldTimeCar() {}

void OldTimeCar::Drive()
{
    cout << "OldTimeCar: ";
    Car::Drive();
}