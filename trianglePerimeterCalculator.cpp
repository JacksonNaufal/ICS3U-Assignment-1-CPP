// Copyright (c) 2022 Jackson Naufal All rights reserved
// Created By Jackson Naufal
// Created On Feb 2022
// This is a "Area and Perimeter" program with proper style"



#include <iostream>

int main() {
    // this function calculates area and perimeter of a rectangle
    int perimeterTriangle;
    int sideA;
    int sideB;
    int sideC;

    // input
       std::cout <<
        "This is a perimeter of a triangle calculator, please input your"
        "triangles values down below!"
     << std::endl;
    std::cout << "\nInput side A of your triangle (mm);  ";
    std::cin >> sideA;
    std::cout << "Input side B of your triangle (mm);  ";
    std::cin >> sideB;
    std::cout << "Input side C of your triangle (mm);  ";
    std::cin >> sideC;
    // process

    perimeterTriangle = (sideA + sideB + sideC);
    // output
    std::cout << "\nYour equation, for your triangle is" << std::endl;
    std::cout << "\nP = a + b + c" << std::endl;
    std::cout << "P = " << sideA << " + " << sideB << " + " << sideC
    << std::endl;
    std::cout << "P = " << perimeterTriangle << " mm " << std::endl;
    std::cout << "\nThe perimeter of your triangle is " << perimeterTriangle
    << " mm." << std::endl;
    std::cout << "\nDone." << std::endl;
}
