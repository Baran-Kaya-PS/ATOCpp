//
// Created by Baran on 1/5/2025.
//

#include "../Include/Vector_container.h"
#include <stdexcept>

Vector_container::Vector_container(int s) : v(s) {}

double &Vector_container::operator[](int i) {
    return this->v[i];
}