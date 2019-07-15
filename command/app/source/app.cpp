#include "Button.h"
#include "DoorOpenCommand.h"
#include "DoorCloseCommand.h"
#include "LightOnCommand.h"
#include "LightOffCommand.h"

int main()
{

    Button ControlButton;
    Light *mainLight = new Light();
    Door *mainDoor = new Door();

    DoorOpenCommand *doorOpen = new DoorOpenCommand(mainDoor);
    DoorCloseCommand *doorClose = new DoorCloseCommand(mainDoor);
    LightOnCommand *lightOn = new LightOnCommand(mainLight);
    LightOffCommand *lightOff = new LightOffCommand(mainLight);

    ControlButton.set(doorOpen);
    ControlButton.push();

    ControlButton.set(doorClose);
    ControlButton.push();

    ControlButton.set(lightOn);
    ControlButton.push();

    ControlButton.set(lightOff);
    ControlButton.push();

    return 0;
}