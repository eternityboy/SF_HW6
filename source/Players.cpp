//
// Created by Nikita Tryaskin on 16.04.2024.
//

#include "Players.h"

Players::Players(int batteryLife, int diskSize) :
        Devices(batteryLife),
        _diskSize(diskSize)
{
}

void Players::showSpec()
{
    std::cout << "Player" << std::endl
              << "Battery Life: " << _batteryLife << " mAh" << std::endl
              << "Memory Capacity: " << _diskSize << " size" << std::endl
              << std::endl;
}