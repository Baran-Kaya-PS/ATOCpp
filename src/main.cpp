#include <iostream>
#include "chapter1/1_2_Programs/include/HelloWorld.h"
#include "../tests/chapter2_tests/test_TrafficLight.h"
#include "chapter1/1_3_Functions/include/BasicFunctions.h"
using namespace My_Func;

int main() {
    int number;
    std::cout << "Enter a number : " << std::endl;
    std::cin >> number;
    std::cout << "the square root of " << number << " is : " << sqrt(number) << std::endl;
    return 0;
}
