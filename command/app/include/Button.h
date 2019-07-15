#pragma once

#include "Command.h"

class Button
{
  public:
    Button();
    virtual ~Button();

    void set(Command *c);
    void push();

  private:
    Command *command;
};
