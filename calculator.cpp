// Copyright (c) 2021 Ferdous Sediqi All rights reserved.
// Created by: Ferdous Sediqi
// Created on: May. 10, 2022
// This program asks the user 2  numbers and calculating numbers
//  using the calculator function with 3 different parameters.


#include <iostream>
// import decimal
#include <iomanip>
#include <string>
using std::string;

// function to calculate user number
float Calculator(string operation, float num_1 , float num_2) {
  // variable for calculation 
  float total;
  // doing math
  if (operation == "+") {
    total =  num_1 + num_2;
    return total;
} else if (operation == "-") {
    total =  num_1 - num_2;
    return total;

} else if (operation == "*") {
    total =  num_1 * num_2;
    return total;

} else if (operation == "/") {
    total =  num_1 / num_2;
    return total;
    } else{
      std::cout << "Your operator input was not valid." << std::endl;
    }
  
} 
int main() {
    // variables
    float first_num_float;
    float second_num_float;
    std::string first_num_string;
    std::string second_num_string;
    std::string sign;
    float calc;


    // cast inputs to float
    try {
    // user inputs
        std::cout << "Enter your prefer Math operation (+, -, *, /): ";
        std::cin >> sign;

        std::cout << "Enter your first number: ";
        std::cin >> first_num_string;

        std::cout << "Enter your second number: ";
        std::cin >> second_num_string;

        first_num_float = std::stof(first_num_string);
        second_num_float = std::stof(second_num_string);

        // calling the function
        calc = Calculator(sign, first_num_float, second_num_float);

        // display answer
        std::cout << std::fixed << std::setprecision(2) << "The result of "<< first_num_float
        << " "<< sign << " " << second_num_float<< " is "  << calc << std::endl;
    }
    // invalid input
    catch (std::invalid_argument) {
        std::cout <<"Invalid input. Input was not a number" << std::endl;
  }
}
