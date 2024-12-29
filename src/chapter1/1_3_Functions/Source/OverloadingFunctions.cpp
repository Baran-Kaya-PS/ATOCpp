//
// Created by Baran on 12/28/2024.
//
#include "../include/OverloadingFunctions.h"
void print(int value){
    std::cout << "the value is : " << value << std::endl;
}
void print(double value){
    std::cout << "the value is : " << value << std::endl;
}
void print(const std::string& value){
    std::cout << "the value is : " << value << std::endl;
}
