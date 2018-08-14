#pragma once

#include "Command.h"
#include "Light.h"

class LightOnCommand
    : public Command
{
public:
  LightOnCommand(const Light &light);
  virtual ~LightOnCommand();
  void execute() override;

private:
  Light *light;
};