//
// Created by Nikita Tryaskin on 16.04.2024.
//

#pragma once
#import "Devices.h"

class Computers final : public Devices
{
public:
    Computers(std::string name, int batteryLife, float weight, float monitorWidth);
    virtual void showSpec() override;

private:
    int _batteryLife;
    int _weight;
    int _monitorWidth;
};