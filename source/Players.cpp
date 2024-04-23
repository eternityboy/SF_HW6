//
// Created by Nikita Tryaskin on 16.04.2024.
//

#include "Players.h"

Players::Players(std::string name, int batteryLife, int diskSize) :
        Devices(name, batteryLife),
        _diskSize(diskSize)
{
}

void Players::showSpec()
{
    std::cout << "Player: " << _name << std::endl
              << "Battery life: " << _batteryLife << " mAh" << std::endl
              << "Memory Capacity: " << _diskSize << " Gb" << std::endl
              << std::endl;
}