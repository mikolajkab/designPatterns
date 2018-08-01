#pragma once

#include <memory>
#include <unordered_map>

#include "Maze.h"

using namespace std;

enum MazeType
{
    BombedMaze,
    JungleMaze
};

class MazeFactory
{
  public:
    MazeFactory();
    virtual ~MazeFactory();

    Maze *createMaze(MazeType type);

  private:
    unordered_map<MazeType, Maze *> mazes;
};