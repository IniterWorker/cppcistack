//
//-----------------------------------------------------------------------------
//Filename:    unit_project.cpp
//-----------------------------------------------------------------------------
//
// Created by bonett_w on 1/8/18.
//-----------------------------------------------------------------------------
//


#include <gtest/gtest.h>
#include "Project.hpp"

// Tests factorial of positive numbers.
TEST(FactorialTest, HandlesZeroInput) {
    Project project;
    EXPECT_EQ(1, project.factorial(0));
}

// Tests factorial of positive numbers.
TEST(FactorialTest, HandlesPositiveInput) {
    Project project;
    EXPECT_EQ(1, project.factorial(1));
    EXPECT_EQ(2, project.factorial(2));
    EXPECT_EQ(6, project.factorial(3));
    EXPECT_EQ(40320, project.factorial(8));
}