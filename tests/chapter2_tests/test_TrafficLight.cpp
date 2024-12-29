//
// Created by Baran on 12/29/2024.
//

#include "test_TrafficLight.h"
#include <iostream>
#include <cassert>

void runTrafficLightTests() {
    {
        std::cout << "Running TrafficLight tests...\n";
        {
            TrafficLight light = TrafficLight::RED;
            ++light;
            assert(light == TrafficLight::YELLOW);
            std::cout << "Test 1 passed: ++ from RED to YELLOW\n";

            ++light;
            assert(light == TrafficLight::GREEN);
            std::cout << "Test 1 passed: ++ from YELLOW to GREEN\n";

            ++light;
            assert(light == TrafficLight::RED);
            std::cout << "Test 1 passed: ++ from GREEN to RED\n";
        }

        {
            TrafficLight light = TrafficLight::RED;
            light += 1; // RED -> YELLOW
            assert(light == TrafficLight::YELLOW);
            std::cout << "Test 2 passed: += 1 from RED to YELLOW\n";

            light += 2; // YELLOW -> GREEN -> RED
            assert(light == TrafficLight::RED);
            std::cout << "Test 2 passed: += 2 from YELLOW to RED\n";

            light += 3; // RED -> YELLOW -> GREEN -> RED
            assert(light == TrafficLight::RED);
            std::cout << "Test 2 passed: += 3 from RED to RED\n";
        }

        {
            TrafficLight light = TrafficLight::RED;
            (++light) += 2; // RED -> YELLOW -> GREEN -> RED
            assert(light == TrafficLight::RED);
            std::cout << "Test 3 passed: Chaining (++ += 2)\n";
        }

        {
            TrafficLight light = TrafficLight::YELLOW;
            light += 4;
            assert(light == TrafficLight::GREEN);
            std::cout << "Test 4 passed: += 4 wraps correctly\n";
        }

        std::cout << "All TrafficLight tests passed successfully!\n";
    }
}