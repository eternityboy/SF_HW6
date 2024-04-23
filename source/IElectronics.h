//
// Created by Nikita Tryaskin on 16.04.2024.
//

#pragma once
#include <iostream>

class IElectronics
{
public:
    virtual void showSpec() = 0;
    virtual ~IElectronics() = default;
};