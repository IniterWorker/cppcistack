//
//-----------------------------------------------------------------------------
//Filename:    main.cpp
//-----------------------------------------------------------------------------
//
// Created by bonett_w on 1/9/18.
//-----------------------------------------------------------------------------
//

#include <cstdlib>
#include <Project.hpp>
#include <iostream>

int main(int argc, char *argv[]) {
    Project project;

    std::cout << "factorial(10)" << project.factorial(10) << std::endl;
    return (EXIT_SUCCESS);
}