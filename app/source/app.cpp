#include <iostream>

#include "MazeBuilderBombed.h"
#include "MazeBuilderJungle.h"
#include "MazeGameSimple.h"
#include "MazeGameComplex.h"

using namespace std;

int main()
{
    cout << "Builder design pattern example" << endl;

    MazeBuilderBombed builderBombed;
    MazeBuilderJungle builderJungle;

    MazeGameSimple simpleGame;
    simpleGame.CreateMaze(builderBombed);
    simpleGame.CreateMaze(builderJungle);

    MazeGameComplex complexGame;
    complexGame.CreateMaze(builderBombed);
    complexGame.CreateMaze(builderJungle);

    return 0;
}