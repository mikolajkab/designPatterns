#include "Light.h"

#include <iostream>

using namespace std;

Light::Light(){};
Light::~Light(){};

void Light::switchOn()
{
    cout << "Light goes on" << endl;
}

void Light::switchOff()
{
    cout << "Light goes off" << endl;
}