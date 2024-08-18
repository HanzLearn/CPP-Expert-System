#pragma once
#include <string>
#include <iostream>

class salesForecast
{
private:

std::string lunchTime;
bool validPromotion;
bool endWeekOfMonth;
double probabilityHigh = 0;
double probabilityLow = 0;

public:

void setLunchTime();
void setValidPromotion();
void setEndWeekOfMonth();

std::string getLunchTime();
bool getValidPromotion();
bool getEndWeekOfMonth();
void setProbabilityHigh(double inputHigh);
void setProbabilityLow(double inputLow);
double getProbabilityHigh();
double getProbabilityLow();

};