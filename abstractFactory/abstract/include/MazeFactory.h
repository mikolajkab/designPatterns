#pragma once

#include "Maze.h"
#include "Wall.h"
#include "Room.h"
#include "Door.h"

class MazeFactory
{
  public:
    MazeFactory();
    virtual ~MazeFactory();

    virtual Maze *MakeMaze() const;
    virtual Wall *MakeWall() const;
    virtual Room *MakeRoom(int n) const;
    virtual Door *MakeDoor(Room *r1, Room *r2) const;
};