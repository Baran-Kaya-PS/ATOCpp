//
// Created by Baran on 12/28/2024.
//

#include "Vector.h"

Vector::Vector(int s) : elem{new double[s]}, sz {s} {} // elem = new double, sz = s

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

}

// Member function: Get the size of the vector
int Vector::size() const {
    return this->sz;
}