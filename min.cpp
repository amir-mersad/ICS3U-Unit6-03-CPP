// Copyright (c) 2019 Amirmahdi Mersad All rights reserved
//
// Created by Amir Mersad
// Created on September 2019
// This program checks if the entered number is the same as random number

#include <iostream>
#include <time.h>
#include <array>



template<size_t N>
int MinCalculator(std::array<int, N> inputList) {
    // Creating the variables
    int currentMin = 0;
    int isItMin = 0;
    // Process
    currentMin = inputList[0];
    for (int isItMin : inputList) {
        if (isItMin < currentMin) {
            currentMin = isItMin;
        }
    }
    return currentMin;
}

main() {
    // This function checks if the entered number is the same as random number
    int numberInput = 0;
    std::string numberInputStr;
    int minNumber = 0;
    int numberRandom;
    std::array<int, 10> listNumber;

    // Process
    srand(time(NULL));
    for (int numberOfNumbers = 0; numberOfNumbers < 10; numberOfNumbers ++) {
        numberRandom = rand() % 100 + 1;  // random number between 1 and 10
        std::cout << numberRandom << std::endl;
        listNumber[numberOfNumbers] = numberRandom;
    }
    // Pass the input to another function
    minNumber = MinCalculator(listNumber);
    // Output
    std::cout << "\n" << minNumber << std::endl;
}
