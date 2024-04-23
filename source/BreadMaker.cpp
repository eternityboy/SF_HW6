//
// Created by Nikita Tryaskin on 17.04.2024.
//

#include "BreadMaker.h"
BreadMaker::BreadMaker(float weight, short programsNumber) :
        Appliances(weight),
        _programsNumber(programsNumber)
{
}

void BreadMaker::showSpec()
{
    std::cout << "Bread Maker" << std::endl
              << "Weight: " << _weight << " kg" << std::endl
              << "Number of Available Programs: " << _programsNumber << std::endl
              << std::endl;
}