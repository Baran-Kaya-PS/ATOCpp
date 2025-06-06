//
// Created by Baran on 1/5/2025.
//

#ifndef ATOCPP_LIST_CONTAINER_H
#define ATOCPP_LIST_CONTAINER_H
#include <list>
#include <initializer_list>
#include "Container.h"
class List_Container : public Container {
private:
    std::list<double> Id;
public:
    List_Container(){}
    List_Container(std::initializer_list<double> il) : Id(il) {};
    ~List_Container();

    double& operator[](int i) override;
    int size() const override;
};


#endif //ATOCPP_LIST_CONTAINER_H
