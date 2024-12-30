//
// Created by Baran on 12/28/2024.
//
#include <cmath>
#include "../include/BasicFunctions.h"
namespace My_Func {
    double sqrt(double value) {
        if (value < 0) return NULL;
        return std::pow(value, 0.5); // could use std::sqrt function
    }

    double square(double value) {
        return value * value; // could use std::pow(value,2)
    }

    int *next_elem(int *ptr) {
        return ptr + 1; // can be use to iterate through an int array
    }
}