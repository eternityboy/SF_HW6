//
// Created by Nikita Tryaskin on 17.04.2024.
//

#include "Mixer.h"
Mixer::Mixer(std::string name, float weight, short maxRPM) :
        Appliances(name, weight),
        _maxRPM(maxRPM)
{
}

void Mixer::showSpec()
{
    std::cout << "Mixer" << std::endl
              << "Weight: " << _weight << " kg" << std::endl
              << "Maximum RPM: " << _maxRPM << " rev/sec" << std::endl
              << std::endl;
}