//
// Created by Nikita Tryaskin on 16.04.2024.
//

#include "Appliances.h"

Appliances::Appliances(std::string name, float weight) : _name(name), _weight(weight)
{
}

void Appliances::showSpec()
{
    std::cout << "!!!Weight: " << _weight << std::endl;
}