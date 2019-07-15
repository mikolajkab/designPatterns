#include <stdio.h>

#include "BombedMazeFactory.h"
#include "MazeGame.h"

int main()
{
    printf("Abstract factory!\n");

    MazeGame game;
    BombedMazeFactory factory;

    game.CreateMaze(factory);

    return 0;
}
