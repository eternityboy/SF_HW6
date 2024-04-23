//
// Created by Nikita Tryaskin on 16.04.2024.
//

#include "Players.h"

Players::Players(std::string name, int batteryCapacity, int diskSize) :
        Devices(name, batteryCapacity),
        _diskSize(diskSize)
{
}

void Players::showSpec()
{
    std::cout << "Player: " << _name << std::endl
              << "Battery capacity: " << _batteryCapacity << " mAh" << std::endl
              << "Memory capacity: " << _diskSize << " Gb" << std::endl
              << std::endl;
}