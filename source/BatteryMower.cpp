//
// Created by Nikita Tryaskin on 17.04.2024.
//

#include "BatteryMower.h"
BatteryMower::BatteryMower(std::string name, int batteryLife, float weight, std::string color) :
        Devices(batteryLife),
        Appliances(name, weight),
        _color(color)
{
}

void BatteryMower::showSpec()
{
    std::cout << "Battery mower: " << _name << std::endl
            << "Weight: " << _weight << " kg" << std::endl
            << "Battery Life: " << _batteryLife << " kg" << std::endl
            << "Color: " << _color << std::endl
            << std::endl;
}