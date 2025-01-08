//
// Created by Baran on 1/5/2025.
//
#include <iostream>
#include "../Include/List_Container.h"

int List_Container::size() const {
    return Id.size();
}

double &List_Container::operator[](int i) { // les listes n'ont pas l'opérateur [] implémenter. il faut utiliser un pointeur vers le premier élément et itérer jusqu'a i.
    if (i < 0 || i >= size()){
        throw std::out_of_range("Index out of range");
    }
    std::list<double>::iterator it = this->Id.begin(); // pointeur vers le premier élément.
    std::advance(it,i); // on avance le pointeur de i pas.
    return *it; // on retourne l'élément à la Ième position.
}