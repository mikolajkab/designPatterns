#include "Maze.h"

#include <iostream>

using namespace std;

Maze::Maze(){};

Maze &Maze::getInstance()
{
    static Maze instance;
    return instance;
}