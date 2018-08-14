#include "LightOnCommand.h"

LightOnCommand::LightOnCommand(const Light &lig)
    : light(lig)
{
}

LightOnCommand::~LightOnCommand() {}

void LightOnCommand::execute()
{
    light->switchOn();
}