#include "MazeGame.h"
#include "MapSite.h"
#include "Maze.h"
#include "Room.h"
#include "Door.h"

MazeGame::MazeGame()
{
}

MazeGame::~MazeGame()
{
}

Maze *MazeGame::CreateMaze(MazeFactory &factory)
{
    Maze *aMaze = factory.MakeMaze();
    Room *r1 = factory.MakeRoom(1);
    Room *r2 = factory.MakeRoom(2);
    Door *aDoor = factory.MakeDoor(r1, r2);

    aMaze->AddRoom(r1);
    aMaze->AddRoom(r2);

    r1->SetSide(MapSite::Direction::North, factory.MakeWall());
    r1->SetSide(MapSite::Direction::South, aDoor);
    r1->SetSide(MapSite::Direction::East, factory.MakeWall());
    r1->SetSide(MapSite::Direction::West, factory.MakeWall());

    r1->SetSide(MapSite::Direction::North, factory.MakeWall());
    r1->SetSide(MapSite::Direction::South, factory.MakeWall());
    r1->SetSide(MapSite::Direction::East, factory.MakeWall());
    r1->SetSide(MapSite::Direction::West, aDoor);

    return aMaze;
}
