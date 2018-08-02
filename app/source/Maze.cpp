#include "Maze.h"

#include <iostream>

using namespace std;

Maze::Maze(){};
Maze::~Maze(){};

Maze *Maze::instance = 0;

Maze *Maze::Instance()
{
    if (instance == 0)
    {
        instance = new Maze();
        cout << "First instance" << endl;
    }
    else
    {
        cout << "Previous instance" << endl;
    }
    return instance;
}