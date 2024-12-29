cmake_minimum_required(VERSION 3.29)
project(ATOCpp)

set(CMAKE_CXX_STANDARD 23)

add_library(chapter1 STATIC
        src/chapter1/1_2_Programs/source/HelloWorld.cpp
        src/chapter1/1_3_Functions/source/BasicFunctions.cpp
        src/chapter1/1_3_Functions/source/OverloadingFunctions.cpp
)
target_include_directories(chapter1 PUBLIC
        src/chapter1/1_2_Programs/include
        src/chapter1/1_3_Functions/include
)

add_library(chapter2 STATIC
        src/chapter2/2_3_Classes/source/Vector.cpp
)

target_include_directories(chapter2 PUBLIC
        src/chapter2/2_3_Classes/include/Vector.h
)

add_executable(ATOCpp
        src/main.cpp
)

target_link_libraries(ATOCpp PRIVATE chapter1 chapter2)