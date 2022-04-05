// Copyright (c) 2022 Michael Clermont All rights reserved
//
// Created by: Michael Clermont
// Created on: Apr 2022
// This program is to determine if someone can date

#include <iostream>
#include <string>

int main() {
    // this function is a age function
    std::string numberAsString;
    int numberAsInt;

    // input
    std::cout << "Please enter your age: ";
    std::cin >> numberAsString;
    std::cout << "" << std::endl;

    // process & output
    try {
        numberAsInt = std::stoi(numberAsString);
        if (numberAsInt > 25 && numberAsInt < 40) {
        std::cout << "You are an acceptable age.";
        } else {
        std::cout << "You are not an acceptable age.";
        }
    } catch (std::invalid_argument) {
        std::cout << "That is not an integer.";
        }
    std::cout << "\nDone." << std::endl;
}
