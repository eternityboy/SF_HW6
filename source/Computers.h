//
// Created by Nikita Tryaskin on 16.04.2024.
//

#pragma once
#import "Devices.h"

class Computers final : public Devices
{
public:
    Computers(std::string name, int batteryCapacity, float weight, float monitorWidth);
    virtual void showSpec() override;

private:
    float _weight;
    float _monitorWidth;
};