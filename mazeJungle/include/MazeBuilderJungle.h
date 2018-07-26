#pragma once

#include "MazeBuilder.h"
#include "MazeJungle.h"

class MazeBuilderJungle
    : public MazeBuilder
{
public:
  MazeBuilderJungle();
  ~MazeBuilderJungle();

  void BuildMaze() override;
  void BuildRoom(int n) override;
  void BuildDoor(int n1, int n2) override;

  virtual Maze *GetMaze() override;

private:
  MazeJungle *maze;
};
