#include "House.h"

#include <iostream>

using namespace std;

int main()
{
    House houses[10];

    while (true)
    {
        int id;
        cout << "Podaj id (1-10):" << endl;
        cin >> id;
        if (id)
            houses[id - 1].build();
        else
            break;
    }

    return 0;
}