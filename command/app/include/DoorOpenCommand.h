#pragma once

#include "Command.h"
#include "Door.h"

class DoorOpenCommand
    : public Command
{
  public:
    DoorOpenCommand(Door *d);
    virtual ~DoorOpenCommand();

    void execute();

  private:
    Door *door;
};