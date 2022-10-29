//
// Created by physiker on 10/28/2022.
//


#include "NumCpp.hpp"

#include <iostream>

int main()
{


    nc::NdArray<int> a = { {1, 2}, {3, 4}, {5, 6} };


    std::cout << a << std::endl;

    return 0;
}