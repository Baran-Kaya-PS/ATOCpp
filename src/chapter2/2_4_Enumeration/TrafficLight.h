//
// Created by Baran on 12/29/2024.
//
#include <iostream>
#ifndef ATOCPP_TRAFFICLIGHT_H
#define ATOCPP_TRAFFICLIGHT_H


enum class TrafficLight {
    RED,YELLOW,GREEN
};

TrafficLight& operator++(TrafficLight light);

TrafficLight& operator++(TrafficLight light,int);

#endif //ATOCPP_TRAFFICLIGHT_H
