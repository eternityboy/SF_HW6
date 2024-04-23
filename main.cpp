//
// Created by Nikita Tryaskin on 13.04.2024.
//
//
// Created by Nikita Tryaskin on 12.04.2024.
//

#include <iostream>
#include "source/IElectronics.h"
#include "source/Players.h"
#include "source/Computers.h"
#include "source/BreadMaker.h"
#include "source/Mixer.h"
#include "source/BatteryMower.h"

int main()
{
    IElectronics* electronics[5];

    electronics[0] = new Players("iPod", 50, 160);
    electronics[1] = new Computers("MacBook Pro", 3485, 1.55, 14.4);
    electronics[2] = new BreadMaker("Redmond", 2.5, 10);
    electronics[3] = new Mixer("KitFort", 2.5, 1200);
    electronics[4] = new BatteryMower("Greenworks", 4, 4.5, "Green");

    bool open = true;
    while (open)
    {
        const std::string chooseProductMessage = "Choose product :\n"
                                                 "1 - Player\n"
                                                 "2 - Computer\n"
                                                 "3 - Bread maker\n"
                                                 "4 - Mixer\n"
                                                 "5 - Battery mower\n"
                                                 "0 - EXIT";
        std::cout << chooseProductMessage << std::endl;
        int choice;
        std::cin >> choice;
        switch (choice)
        {
            case 1:
                electronics[0]->showSpec();
                break;

            case 2:
                electronics[1]->showSpec();
                break;

            case 3:
                electronics[2]->showSpec();
                break;

            case 4:
                electronics[3]->showSpec();
                break;

            case 5:
                electronics[4]->showSpec();
                break;

            case 0:
                open = false;
                break;

            default:
                std::cout << chooseProductMessage << std::endl;
                break;
        }
    }
    delete electronics[0];
    delete electronics[1];
    delete electronics[2];
    delete electronics[3];
    delete electronics[4];

    return 0;
}