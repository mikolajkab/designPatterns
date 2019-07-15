#pragma once

#include "MazeBuilder.h"
#include "MazeBombed.h"

class MazeBuilderBombed : public MazeBuilder
{
public:
  MazeBuilderBombed();
  ~MazeBuilderBombed();

  void BuildMaze() override;
  void BuildRoom(int n) override;
  void BuildDoor(int n1, int n2) override;

  virtual Maze *GetMaze() override;

private:
  MazeBombed *maze;
};
