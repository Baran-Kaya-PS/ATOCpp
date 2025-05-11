//
// Created by Baran on 1/5/2025.
//

#include "../Include/Vector_container.h"
#include <stdexcept>

Vector_container::Vector_container(int s) : v(s) {}

double &Vector_container::operator[](int i) {
    if (i < 0 || i >= size()){
        throw std::out_of_range("Index out of range");
    }
    return this->v[i];
}

int Vector_container::size() const {
    return this->v.size();
}