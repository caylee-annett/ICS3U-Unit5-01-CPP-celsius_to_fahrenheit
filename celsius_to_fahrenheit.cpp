// Copyright (c) 2021 Caylee Annett All rights reserved
//
// Created by Caylee Annett
// Created on May 2021
// This program converts temperatures in Celsius to Fahrenheit

#include <iostream>
#include <string>

void Fahrenheit() {
    // This function calculates the temperature in Fahrenheit
    std::string celsiusString;
    float celsiusInteger;
    float fahrenheitTemperature;

    // Input
    std::cout << "This program converts temperatures in Celsius to Fahrenheit."
        << std::endl;
    std::cout << "" << std::endl;
    std::cout << "Enter a temperature (°C): ";
    std::cin >> celsiusString;

    // Process
    while (true) {
        try {
            celsiusInteger = std::stoi(celsiusString);

            std::cout << "" << std::endl;
            break;
        } catch (std::invalid_argument) {
                std::cout << celsiusString << " is not a valid input. Enter "
                    "a temperature (°C): ";
                std::cin >> celsiusString;
        }
    }
    fahrenheitTemperature = celsiusInteger * 9 / 5 + 32;

    // Output
    std::cout << celsiusInteger << "°C is " << fahrenheitTemperature << "°F."
        << std::endl;
    std::cout << "" << std::endl;
    std::cout << "Done." << std::endl;
}


main() {
    // This function calls other functions

    // Call functions
    Fahrenheit();
}
