//
// Created by Nikita Tryaskin on 16.04.2024.
//

#pragma once
#import "Devices.h"

class Players final : public Devices
{
public:
    Players(std::string name, int batteryLife, int diskSize);
    virtual void showSpec() override;

private:
    int _diskSize;
};