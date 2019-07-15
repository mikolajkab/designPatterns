#include "HouseReal.h"

#include <iostream>

using namespace std;

int HouseReal::totalNumberHouses = 0;

HouseReal::HouseReal(int id)
    : houseId(id)
{
    totalNumberHouses++;
}

HouseReal::~HouseReal(){};

void HouseReal::build()
{
    cout << "Building house number " << houseId << endl;
    cout << "Total number of houses is " << totalNumberHouses << endl;
}
