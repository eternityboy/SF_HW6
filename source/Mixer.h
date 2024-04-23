//
// Created by Nikita Tryaskin on 17.04.2024.
//

#pragma once
#import "Appliances.h"

class Mixer final : public Appliances
{
public:
    Mixer(float weight, short maxRPM);
    virtual void showSpec() override;

private:
    short _maxRPM;
};