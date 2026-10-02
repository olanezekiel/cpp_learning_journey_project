#include <iostream>
#include "header.h"

int main(){
    // Use the function we defined earlier to get a random number
    int num{guessRandom(1, 100)};

    // define a variable to hold your input
    int mine{};

    // the do-while loop that keeps from the user for a number until the user guess right
    do{
        std::cout <<"Try guessing the Number: ";

        std::cin >> mine;


        //Additional info to give the user hints if the number is less than or greater than the number to guess
        if(num > mine){
            std::cout << "The number is greater than your guess. Try again!\n";
        }
        if(num < mine){
            std::cout << "The number is less than your guess. Try again!\n";
        }

    }while(num != mine);


    // If the user guess the number, print a congratulatory message
    if(num == mine){
            std::cout << "Congratulations! You guessed the number!" <<"The number was: " << num << '\n';
        };


}