//
// Created by Nikita Tryaskin on 16.04.2024.
//

#pragma once
#include "IElectronics.h"

class Appliances : virtual public IElectronics
{
public:
    Appliances (std::string name, float weight);
    void showSpec() override;

protected:
    std::string _name;
    float _weight;
};