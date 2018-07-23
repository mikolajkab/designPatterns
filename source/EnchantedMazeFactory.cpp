#include "EnchantedMazeFactory.h"

EnchantedMazeFactory::EnchantedMazeFactory()
{
}

EnchantedMazeFactory::~EnchantedMazeFactory()
{
}

Room *EnchantedMazeFactory::MakeRoom(int n) const
{
    return new Room(n);
}

Door *EnchantedMazeFactory::MakeDoor(Room *r1, Room *r2) const
{
    return new Door(r1, r2);
}