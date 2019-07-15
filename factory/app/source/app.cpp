#include "Maze.h"
#include "MazeFactory.h"

#include <iostream>

using namespace std;

int main()
{
    cout << "Factory method example" << endl;

    Maze *myMazeBombed = MazeFactory::createMaze(MazeType::mazeBombed);
    myMazeBombed->printMazeName();

    Maze *myMazeStandard = MazeFactory::createMaze(MazeType::mazeStandard);
    myMazeStandard->printMazeName();

    Maze *myMazeJungle = MazeFactory::createMaze(MazeType::mazeJungle);
    myMazeJungle->printMazeName();
}