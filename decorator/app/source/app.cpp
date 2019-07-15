#include "Audi.h"
#include "Skoda.h"
#include "AirCondition.h"
#include "Navigation.h"

#include <iostream>

using namespace std;

int main()
{
    Car *mySkoda = new Skoda(1000, 100);
    Car *myAudi = new Audi(2000, 120);

    cout << mySkoda->getPrice() << endl;
    cout << mySkoda->getWeight() << endl;
    cout << myAudi->getPrice() << endl;
    cout << myAudi->getWeight() << endl;

    mySkoda = new AirCondition(mySkoda, 1, 10);
    myAudi = new Navigation(myAudi, 1, 10);

    cout << mySkoda->getPrice() << endl;
    cout << mySkoda->getWeight() << endl;
    cout << myAudi->getPrice() << endl;
    cout << myAudi->getWeight() << endl;

    mySkoda = new Navigation(mySkoda, 1, 10);
    myAudi = new Navigation(myAudi, 1, 10);

    cout << mySkoda->getPrice() << endl;
    cout << mySkoda->getWeight() << endl;
    cout << myAudi->getPrice() << endl;
    cout << myAudi->getWeight() << endl;

    return 0;
}