//
// Created by Baran on 12/29/2024.
//

#include "TrafficLight.h"

TrafficLight& operator++(TrafficLight &light){
    switch (light) {
        case TrafficLight::GREEN:
            light = TrafficLight::RED;
            break;
        case TrafficLight::YELLOW:
            light = TrafficLight::GREEN;
            break;
        case TrafficLight::RED:
            light = TrafficLight::YELLOW;
            break;
    }
    return light;
}

TrafficLight& operator+=(TrafficLight &light, int shift){
    for (int i = 0; i < shift; i++){
        light = ::operator++(light);
    }
    return light;
}