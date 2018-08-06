#include "Car.h"

Car::Car(Engine *eng)
    : engine(eng) {}

Car::~Car() {}

void Car::Drive()
{
    engine->Drive();
}