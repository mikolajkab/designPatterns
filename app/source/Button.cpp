#include "Button.h"

Button::Button() {}

Button::~Button() {}

void Button::set(Command *c)
{
    command = c;
}

void Button::push()
{
    command->execute();
}