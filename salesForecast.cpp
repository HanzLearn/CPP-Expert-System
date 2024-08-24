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

void salesForecast::setLunchTime()
{
    std::string tempLunchTime;
    std::cout << "Enter Whether Lunch time is high/low: ";
    std::cin >> tempLunchTime;
    while(true)
    {
        if (tempLunchTime == "high" || tempLunchTime == "low")
        {
            lunchTime = tempLunchTime;
            break;
        }
        else 
        {
            std::cout << "Invalid! Enter Again: " << std::endl;
            std::cin >> tempLunchTime;
        }
    }
}

void salesForecast::setEndWeekOfMonth()
{
    std::string tempEndWeekOfMonth;
    std::cout << "Enter If During The End Week Of The Month(Yes/No): ";
    std::cin >> tempEndWeekOfMonth;

    while (true)
    {
        if ( tempEndWeekOfMonth == "Yes" || tempEndWeekOfMonth == "yes" )
        {
            endWeekOfMonth = true;
            break;
        }
        else if ( tempEndWeekOfMonth == "No" || tempEndWeekOfMonth == "no")
        {
            endWeekOfMonth = false;
        }
        else
        {
            std::cout << "Invalid! Enter Again(Yes/No): ";
            std::cin >> tempEndWeekOfMonth;
        }
    }
}