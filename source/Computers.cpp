//
// Created by Nikita Tryaskin on 16.04.2024.
//

#include "Computers.h"

Computers::Computers(std::string name, int batteryLife, float weight, float monitorWidth) :
        Devices(name),
        _batteryLife(batteryLife),
        _weight(weight),
        _monitorWidth(monitorWidth)
{
}

void Computers::showSpec()
{
    std::cout << "Computer: " << _name << std::endl
            << "Battery life: " << _batteryLife << " mAh" << std::endl
            << "Device wight: " << _weight << " kg" << std::endl
            << "Monitor width: " << _monitorWidth << " inches" << std::endl
            << std::endl;
}