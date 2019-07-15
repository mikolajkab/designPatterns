#pragma once

class Engine
{
public:
  Engine();
  virtual ~Engine();

  virtual void Drive() = 0;
};