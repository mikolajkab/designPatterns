#include "MazeBuilderBombed.h"

#include <iostream>

using namespace std;

MazeBuilderBombed::MazeBuilderBombed()
{
    maze = 0;
}

MazeBuilderBombed::~MazeBuilderBombed() {}

void MazeBuilderBombed::BuildMaze()
{
    cout << "Bombed Maze built" << endl;
}

void MazeBuilderBombed::BuildRoom(int n)
{
    cout << "Bombed Maze room " << n << " built" << endl;
}

void MazeBuilderBombed::BuildDoor(int n1, int n2)
{
    cout << "Bombed Maze door between room " << n1 << " and " << n2 << " built" << endl;
}

Maze *MazeBuilderBombed::GetMaze()
{
    return maze;
}