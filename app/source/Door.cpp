#include "Door.h"

#include <iostream>

using namespace std;

Door::Door() {}

Door::~Door() {}

void Door::open()
{
    cout << "Door opens" << endl;
}

void Door::close()
{
    cout << "Door closes" << endl;
}