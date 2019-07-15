#pragma once

#include "Command.h"
#include "Light.h"

class LightOffCommand
    : public Command
{
public:
  LightOffCommand(Light *light);
  virtual ~LightOffCommand();
  void execute() override;

private:
  Light *light;
};