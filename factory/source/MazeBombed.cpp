#include "MazeBombed.h"

#include <memory>
#include <iostream>

using namespace std;

MazeBombed::MazeBombed(){};
MazeBombed::~MazeBombed(){};

Maze *MazeBombed::clone()
{
    return new MazeBombed(*this);
}

void MazeBombed::printMazeName()
{
    cout << "This is mazeBombed" << endl;
}