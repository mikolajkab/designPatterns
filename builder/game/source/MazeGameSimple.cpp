#include "MazeGameSimple.h"

MazeGameSimple::MazeGameSimple()
{
}

MazeGameSimple::~MazeGameSimple()
{
}

Maze *MazeGameSimple::CreateMaze(MazeBuilder &builder)
{
    builder.BuildMaze();
    builder.BuildRoom(1);
    builder.BuildRoom(2);
    builder.BuildDoor(1, 2);

    return builder.GetMaze();
}