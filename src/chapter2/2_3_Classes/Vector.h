//
// Created by Baran on 12/28/2024.
//

#ifndef ATOCPP_VECTOR_H
#define ATOCPP_VECTOR_H

class Vector {
public:
    Vector(int size);
    ~Vector();
    double &operator[](int index);
    int size() const;
private:
    double* elem;
    int sz;
};


#endif //ATOCPP_VECTOR_H
