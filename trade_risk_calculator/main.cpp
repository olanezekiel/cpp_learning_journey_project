#include <iostream>
#include <string>
#include <cstdlib>
#include "function.h"



int main()
{
    // Get the asset name 
    std::string asset_pairs{getAsset()};

    //Get user's balance 
    double balance{accountBalance()};

    //Get Users preferred risk percentage
    double risk{riskPercentage()};

    //Get users stoploss
    int stop_loss{stopLoss()};

    // Define the pip value
    constexpr double pip_value {10.0};

    // Calculate the risk amount based on the user's balance and risk percentage
    double risk_amount{balance * risk};

    // Calculate the standard lot size based on the risk amount, stop loss, and pip value
    double standard_lot_size{ risk_amount/ (stop_loss * pip_value)};

    // Clear the console before displaying the trade setup information
    system("cls");

    // Display the trade setup information
    std::cout << "Trade Setup: " << asset_pairs << '\n' << "Risking $" << risk_amount << " ( " << risk * 100 << "%" << " of $" << balance << ") \n" << "Execute Lot Size: " << standard_lot_size << '\n';



}