//
// Created by Nikita Tryaskin on 16.04.2024.
//

#include "Devices.h"

Devices::Devices(std::string name, int batteryLife) : _name(name), _batteryLife(batteryLife)
{
}

Devices::Devices(int batteryLife) : _batteryLife(batteryLife)
{
}

void Devices::showSpec()
{
    std::cout << "!!!Brand: " << _name << std::endl;
    std::cout << "!!!Battery Life: " << _batteryLife << std::endl;
}