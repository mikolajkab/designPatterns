#include "MazeJungle.h"

#include <memory>
#include <iostream>

using namespace std;

MazeJungle::MazeJungle(){};
MazeJungle::~MazeJungle(){};

Maze *MazeJungle::clone()
{
    return new MazeJungle(*this);
}

void MazeJungle::printMazeName()
{
    cout << "This is mazeJungle" << endl;
}