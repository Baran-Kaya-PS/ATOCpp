//
// Created by Baran on 12/28/2024.
//

#include "../include/Vector.h"
#include <stdexcept>
Vector::Vector(int s)
    : elem {nullptr},
    sz {s}
    {
    if (s < 0) {
        throw std::length_error{"Vector constructor : Negative size"};
    }
    elem = new double[s];
} // elem = new double, sz = s

// Constructor can be written this way
/*
Vector::Vector(int s) {
    elem = new double[s];
    sz = s;
}
*/

Vector::~Vector() {

}

// Member function: Access elements in the vector
double& Vector::operator[](int index) {
    if (index < 0 || index >= this->size()){
        throw std::out_of_range("Index out of bounds");
    }
    return this->elem[index];
}

// Member function: Get the size of the vector
int Vector::size() const {
    return this->sz;
}