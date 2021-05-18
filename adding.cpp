// Copyright (c) 2021 Austin de Mora All rights reserved.
//
// Created by: Austin de Mora
// Created on: May 2021
// This program loops and adds multiple numbers

#include <iostream>
#include <string>

int main() {
    // this function loops and adds multiple numbers
    std::string input_amount_string;
    std::string chosen_number_string;
    int input_amount;
    int chosen_number;
    int number_sum = 0;
    int loop_counter = 0;

    // input

    // process & output
    while (true) {
        std::cout << "Enter how many numbers you want add together: ";
        std::cin >> input_amount_string;

        try {
            input_amount = std::stoi(input_amount_string);
            if (chosen_number < 0) {
                throw std::invalid_argument("This wasn't an integer");
            }

            break;
        } catch (std::invalid_argument) {
                // output
                std::cout << "That was not a valid integer" << std::endl;
        }
    }

    while (loop_counter < input_amount) {
        loop_counter = loop_counter + 1;

        while (true) {
            std::cout << "Enter your chosen integer: ";
            std::cin >> chosen_number_string;

            try {
                chosen_number = std::stoi(chosen_number_string);
                if (chosen_number < 0) {
                    throw std::invalid_argument("This wasn't an integer");
                }

                break;
            } catch (std::invalid_argument) {
                // output
                std::cout << "That was not a valid integer" << std::endl;
            }
        }

        number_sum = number_sum + chosen_number;

        if (loop_counter < input_amount) {
            continue;
        }

        std::cout << "" << std::endl;
        std::cout << "The sum of all numbers are: "
        << number_sum << std::endl;
    }
}
