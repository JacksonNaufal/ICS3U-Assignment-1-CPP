// Copyright (c) 2022 Jackson Naufal All rights reserved
// Created By Jackson Naufal
// Created On Feb 2022
// This is a "Area and Perimeter" program with proper style"



#include <iostream>

int main() {
    // this function calculates area and perimeter of a rectangle
    int perimetertriangle;
    int sideA;
    int sideB;
    int sideC;

    // input
    std::cout << "Input sideA of your triangle (mm);  ";
    std::cin >> sideA;
    std::cout << "Input sideB of your triangle (mm);  ";
    std::cin >> sideB;
    std::cout << "Input sideC of your triangle (mm);  ";
    std::cin >> sideC;
    // process

    perimetertriangle = (sideA + sideB + sideC);
    // output

    std::cout << "\nYour Triangle Perimeter is " << perimetertriangle << " mm." << std::endl;
    std::cout << "\nDone." << std::endl;
}
