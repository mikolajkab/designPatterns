#include "MazeFactory.h"

#include "MazeBombed.h"
#include "MazeJungle.h"
#include "MazeStandard.h"

Maze *MazeFactory::createMaze(MazeType mazeType)
{
    switch (mazeType)
    {
    case mazeBombed:
        return new MazeBombed();
    case mazeJungle:
        return new MazeJungle();
    case mazeStandard:
        return new MazeStandard();
    default:
        return 0;
    }
};