//
// Created by Baran on 1/5/2025.
//

#ifndef ATOCPP_LIST_CONTAINER_H
#define ATOCPP_LIST_CONTAINER_H
#include <list>
#include <initializer_list>

class List_Container {
private:
    std::list<double> Id;
public:
    List_Container(){}
    List_Container(std::initializer_list<double> il) : Id(il) {};
};


#endif //ATOCPP_LIST_CONTAINER_H
