//
// Created by Nikita Tryaskin on 16.04.2024.
//

#pragma once
#include "IElectronics.h"

class Devices : virtual public IElectronics
{
public:
    Devices(std::string name);
    virtual void showSpec() override;

protected:
    std::string _name;
};