#include "LightOnCommand.h"

LightOnCommand::LightOnCommand(Light *lig)
    : light(lig)
{
}

LightOnCommand::~LightOnCommand() {}

void LightOnCommand::execute()
{
    light->switchOn();
}