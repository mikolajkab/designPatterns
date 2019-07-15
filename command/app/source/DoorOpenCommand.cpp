#include "DoorOpenCommand.h"

DoorOpenCommand::DoorOpenCommand(Door *d)
    : door(door)
{
}

DoorOpenCommand::~DoorOpenCommand() {}

void DoorOpenCommand::execute()
{
    door->open();
}