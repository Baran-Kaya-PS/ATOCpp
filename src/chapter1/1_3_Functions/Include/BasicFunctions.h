//
// Created by Baran on 12/28/2024.
//

#ifndef ATOCPP_BASICFUNCTIONS_H
#define ATOCPP_BASICFUNCTIONS_H
namespace My_Func {
    double sqrt(double value);

    double square(double value);

    int *next_elem(int *ptr);

    auto multiply(double a, double b) -> double; // works only if auto keywork is used
}
#endif //ATOCPP_BASICFUNCTIONS_H