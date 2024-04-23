//
// Created by Nikita Tryaskin on 16.04.2024.
//

#include "Devices.h"

Devices::Devices(int batteryLife) : _batteryLife(batteryLife)
{
}

void Devices::showSpec()
{
    std::cout << "Battery Life: " << _batteryLife << std::endl;
}