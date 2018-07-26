#include "MazeGameComplex.h"

MazeGameComplex::MazeGameComplex()
{
}

MazeGameComplex::~MazeGameComplex()
{
}

Maze *MazeGameComplex::CreateMaze(MazeBuilder &builder)
{
    builder.BuildMaze();
    builder.BuildRoom(1);
    builder.BuildRoom(2);
    builder.BuildRoom(3);
    builder.BuildRoom(4);
    builder.BuildRoom(5);
    builder.BuildRoom(6);
    builder.BuildRoom(7);
    builder.BuildRoom(8);
    builder.BuildRoom(9);
    builder.BuildRoom(10);
    builder.BuildDoor(1, 2);
    builder.BuildDoor(2, 3);
    builder.BuildDoor(3, 4);
    builder.BuildDoor(4, 5);
    builder.BuildDoor(5, 6);
    builder.BuildDoor(6, 7);
    builder.BuildDoor(7, 8);
    builder.BuildDoor(8, 9);
    builder.BuildDoor(9, 10);

    return builder.GetMaze();
}