//
// Created by Baran on 1/5/2025.
//

#ifndef ATOCPP_VECTOR_CONTAINER_H
#define ATOCPP_VECTOR_CONTAINER_H
#include "Container.h"
#include "Vector.h"

class Vector_container : public Container {
private:
    Vector v;
public:
    Vector_container(int s);
    ~Vector_container() override = default;


};


#endif //ATOCPP_VECTOR_CONTAINER_H
