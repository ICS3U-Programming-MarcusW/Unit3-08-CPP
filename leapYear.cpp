// Copyright (c) 2022 Immaculata HS All rights reserved.
//
// Created by: Marcus Wehbi
// Created on: Oct 2022
// This program asks the user to input any year
// the program then calculates if the year they inputted is a leap year
// it also uses a try catch to ensure the user correctly inputs a year

#include <iomanip>
#include <iostream>

int main() {
    // this function checks which years are leap years
    // declare input as int
    int userInputYearInt;

    // declare input as string
    std::string userInputYearString;

    // get the users chosen year
    std::cout << "Enter a year: ";
    std::cin >> userInputYearString;

    // use a try catch to make sure the user inputs a valid year
    try {
        // convert the input as string to an integer
        userInputYearInt = std::stoi(userInputYearString);

        // check if year is evenly divisible by 4
        if (userInputYearInt % 4 == 0) {
            // check if year is evenly divisible by 100
            if (userInputYearInt % 100 == 0) {
                // check if year is evenly divisible by 400
                if (userInputYearInt % 400 == 0) {
                    std::cout << "This is a leap year.";
                } else {
                    std::cout << "This is not a leap year.";
                }
            } else {
                std::cout << "This is a leap year.";
            }
        } else {
            std::cout << "This is not a leap year.";
        }
    } catch (std::invalid_argument) {
        // display if error is encountered - an invalid year
        std::cout << "Please enter a valid year.\n";
    }
}
