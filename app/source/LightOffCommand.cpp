#include "LightOffCommand.h"

LightOffCommand::LightOffCommand(Light *lig)
    : light(lig)
{
}

LightOffCommand::~LightOffCommand() {}

void LightOffCommand::execute()
{
    light->switchOff();
}