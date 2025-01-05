//
// Created by Baran on 1/5/2025.
//

#ifndef ATOCPP_CONTAINER_H
#define ATOCPP_CONTAINER_H


class Container {
public:
    virtual double& operator[](int) = 0;
    virtual int size() const = 0;
    virtual ~Container(){};
};


#endif //ATOCPP_CONTAINER_H
