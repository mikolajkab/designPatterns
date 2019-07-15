#include "SportCar.h"

#include <iostream>

using namespace std;

SportCar::SportCar(Engine *eng)
    : Car(eng)
{
}

SportCar::~SportCar() {}

void SportCar::Drive()
{
    cout << "SportCar: ";
    Car::Drive();
}