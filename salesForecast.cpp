#include "salesForecast.h"
#include <iostream>

void salesForecast::setValidPromotion()
{
    std::string input;
    std::cout << "Enter whether a promotion is valid(Yes/No): " << std::endl;
    std::cin >> input;
    while(true)
    {
        if (input == "Yes" || input == "yes")
        {
            validPromotion = true;
            break;

        }
        else if (input == "No" || input == "no")
        {
            validPromotion = false;
            break;
        }
        else
        {
            std::cout << "Invalid! Enter if promotion is ongoing: " << std::endl;
            std::cin >> input;
        }
    }
}