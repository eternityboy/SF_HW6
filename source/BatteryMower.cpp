//
// Created by Nikita Tryaskin on 17.04.2024.
//

#include "BatteryMower.h"
BatteryMower::BatteryMower(std::string name, int batteryCapacity, float weight, std::string color) :
        Devices(name, batteryCapacity),
        Appliances(name, weight),
        _color(color)
{
}

void BatteryMower::showSpec()
{
    std::cout << "Battery mower: " << Appliances::_name << std::endl
              << "Weight: " << _weight << " kg" << std::endl
              << "Battery capacity: " << _batteryCapacity << " mAh" << std::endl
              << "Color: " << _color << std::endl
              << std::endl;
}