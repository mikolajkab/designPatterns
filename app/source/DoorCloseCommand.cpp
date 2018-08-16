#include "DoorCloseCommand.h"

DoorCloseCommand::DoorCloseCommand(Door *d)
    : door(door)
{
}

DoorCloseCommand::~DoorCloseCommand() {}

void DoorCloseCommand::execute()
{
    door->close();
}