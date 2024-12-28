cmake_minimum_required(VERSION 3.29)
project(ATOCpp)

set(CMAKE_CXX_STANDARD 23)

add_executable(ATOCpp
        "src/chapter1/1_2_Programs/HelloWorld.cpp"
        "src/chapter1/1_2_Programs/HelloWorld.h"
        src/main.cpp
        src/chapter1/1_3_Functions/BasicFunctions.cpp
        src/chapter1/1_3_Functions/BasicFunctions.h
        src/chapter1/1_3_Functions/OverloadingFunctions.cpp
        src/chapter1/1_3_Functions/OverloadingFunctions.h
        src/chapter2/2_3_Classes/Vector.cpp
        src/chapter2/2_3_Classes/Vector.h)
