//
// Created by Nikita Tryaskin on 17.04.2024.
//

#pragma once
#import "Devices.h"
#import "Appliances.h"


class BatteryMower final : public Devices, public Appliances
{
public:
    BatteryMower(std::string name, int batteryLife, float weight, std::string color);
    virtual void showSpec() override;

private:
    int _batteryLife;
    std::string _color;
};
