// copyright 2021 Shahd Elsaman
// Author: Shahd Elsaman

// This program calculates the area and the perimeter of a circle
//    with radius 15 mm

#include <iostream>
#include <cmath>


int main() {
    std::cout << "If a circle has a radius of 15 mm: " << std::endl;
    std::cout << std::endl;
    std::cout << "Area is " << (M_PI * pow(15, 2)) << " mm²." << std::endl;
    std::cout << "Perimeter is " << (2 * M_PI * 15) << " mm." << std::endl;
    std::cout << std::endl;
    std::cout << "Done." << std::endl;
}
