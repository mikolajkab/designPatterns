#include "MazeFactory.h"
#include "Maze.h"

int main()
{
    MazeFactory mazeFactory;

    Maze *myMazeBombed = mazeFactory.createMaze(BombedMaze);
    myMazeBombed->printMazeName();

    Maze *myMazeJungle = mazeFactory.createMaze(JungleMaze);
    myMazeJungle->printMazeName();

    return 0;
}