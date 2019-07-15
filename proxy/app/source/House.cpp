#include "House.h"

#include "HouseReal.h"

int House::totalNumberHouses = 0;

House::House()
{
    totalNumberHouses++;
    houseId = totalNumberHouses;
    houseReal = 0;
}

void House::build()
{
    if (!houseReal)
    {
        houseReal = new HouseReal(houseId);
        houseReal->build();
    }
}

House::~House()
{
    if (houseReal)
    {
        delete houseReal;
    }
}
