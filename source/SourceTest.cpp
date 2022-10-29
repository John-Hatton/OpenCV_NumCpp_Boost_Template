//
// Created by physiker on 10/28/2022.
//


#include "NumCpp.hpp"

#include "Camera.cpp"

#include <iostream>

int main()
{


    nc::NdArray<int> ab = { {1, 2}, {3, 4}, {5, 6} };
    std::cout << ab << std::endl;


    auto a = nc::arange<int64>(15).reshape({3,5});


    std::cout << a << std::endl;

    //Camera::displayWebcam();

    return 0;
}