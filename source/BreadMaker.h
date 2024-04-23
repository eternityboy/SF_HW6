//
// Created by Nikita Tryaskin on 17.04.2024.
//

#pragma once
#import "Appliances.h"

class BreadMaker final : public Appliances
{
public:
    BreadMaker(std::string name, float weight, short programsNumber);
    virtual void showSpec() override;

private:
    short _programsNumber;
};
