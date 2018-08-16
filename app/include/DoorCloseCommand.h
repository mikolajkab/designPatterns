#pragma once

#include "Command.h"
#include "Door.h"

class DoorCloseCommand
    : public Command
{
public:
  DoorCloseCommand(Door *d);
  virtual ~DoorCloseCommand();

  void execute();

private:
  Door *door;
};