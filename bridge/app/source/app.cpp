#include "Car.h"
#include "SportCar.h"
#include "OldTimeCar.h"
#include "CombustionEngine.h"
#include "ElectricEngine.h"

int main()
{
    ElectricEngine *electric = new ElectricEngine();
    CombustionEngine *combustion = new CombustionEngine();

    SportCar mySportCar(electric);
    OldTimeCar myOldTimer(combustion);

    myOldTimer.Drive();
    mySportCar.Drive();

    return 0;
}
