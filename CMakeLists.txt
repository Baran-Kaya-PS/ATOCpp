cmake_minimum_required(VERSION 3.29)
project(ATOCpp)

set(CMAKE_CXX_STANDARD 23)

add_library(chapter1 STATIC
        src/chapter1/1_2_Programs/Source/HelloWorld.cpp
        src/chapter1/1_3_Functions/Source/BasicFunctions.cpp
        src/chapter1/1_3_Functions/Source/OverloadingFunctions.cpp
)
target_include_directories(chapter1 PUBLIC
        src/chapter1/1_2_Programs/Include
        src/chapter1/1_3_Functions/Include
)

add_library(chapter2 STATIC
        src/chapter2/2_3_Classes/source/Vector.cpp
        src/chapter2/2_4_Enumeration/TrafficLight.cpp
        src/chapter2/2_4_Enumeration/TrafficLight.h
)

target_include_directories(chapter2 PUBLIC
        src/chapter2/2_3_Classes/include
)

add_executable(ATOCpp
        src/main.cpp
)


target_link_libraries(ATOCpp PRIVATE chapter1 chapter2 gtest gtest_main)

add_subdirectory(third_party/googletest)

include_directories(third_party/googletest/googletest/include)

add_executable(tests
        tests/chapter2_tests/Source/test_TrafficLight.cpp
        tests/chapter2_tests/Source/test_BasicFunctions.cpp
)
target_include_directories(tests PUBLIC
        tests/chapter2_tests/Include
)