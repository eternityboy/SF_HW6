//
// Created by Nikita Tryaskin on 16.04.2024.
//

#pragma once
#include "IElectronics.h"

class Appliances : virtual public IElectronics
{
public:
    Appliances (float weight);
    void showSpec() override;

protected:
    float _weight;
};