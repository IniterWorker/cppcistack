//
//-----------------------------------------------------------------------------
//Filename:    Projet.cpp
//-----------------------------------------------------------------------------
//
// Created by bonett_w on 1/8/18.
//-----------------------------------------------------------------------------
//

#include <iostream>
#include "Project.hpp"

Project::Project() {
    std::cout << "Project::constructor:: Hello world!" << std::endl;
}

Project::~Project() {

}

unsigned long long Project::factorial(unsigned int n) {
    if(n > 1)
        return n * factorial(n - 1);
    else
        return 1;
}
