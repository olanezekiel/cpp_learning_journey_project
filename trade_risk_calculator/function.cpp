#include <iostream>
#include <string>
#include "function.h"

// The function that get the name of the asset you to trade
std::string getAsset()
{
    std::cout << "Enter the asset you want to trade (e.g., GBP/USD): ";
    std::string assetName{};
    std::getline(std::cin>>std::ws, assetName);
    return assetName;
}


// The function that get your account balance
double accountBalance()
{
    std::cout << "Enter your account balance: ";
    double balance{};
    std::cin >> balance;
    return balance;
}


// The function that get your risk percentage

double riskPercentage()
{
    std::cout << "Enter your risk percentage in decimal (e.g., 1.5 for 1.5%): ";
    double risk{};
    std::cin >> risk;

    double actualMathRisk = risk/100.0;
    return actualMathRisk;
}


// The function that gets your stoploss pips

int stopLoss()
{
    std::cout << "Enter your preferred stoploss pips: ";
    int sp{};
    std::cin >> sp;
    return sp;
}