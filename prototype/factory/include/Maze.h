#pragma once

class Maze
{
  public:
    Maze(){};
    virtual ~Maze(){};

    virtual Maze *clone() = 0;
    virtual void printMazeName() = 0;
};