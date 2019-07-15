#include "MazeBuilderJungle.h"

#include <iostream>

using namespace std;

MazeBuilderJungle::MazeBuilderJungle()
{
    maze = 0;
}

MazeBuilderJungle::~MazeBuilderJungle() {}

void MazeBuilderJungle::BuildMaze()
{
    cout << "Jungle Maze built" << endl;
}

void MazeBuilderJungle::BuildRoom(int n)
{
    cout << "Jungle Maze room " << n << " built" << endl;
}

void MazeBuilderJungle::BuildDoor(int n1, int n2)
{
    cout << "Jungle Maze door between room " << n1 << " and " << n2 << " built" << endl;
}

Maze *MazeBuilderJungle::GetMaze()
{
    return maze;
}