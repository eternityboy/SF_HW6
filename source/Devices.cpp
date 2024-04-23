//
// Created by Nikita Tryaskin on 16.04.2024.
//

#include "Devices.h"

Devices::Devices(std::string name, int batteryLife) : _name(name), _batteryCapacity(batteryLife)
{
}

void Devices::showSpec()
{
    std::cout << "!!!Base devices output for " << _name << std::endl;
    std::cout << "!!!Should be overrided" << std::endl;
}