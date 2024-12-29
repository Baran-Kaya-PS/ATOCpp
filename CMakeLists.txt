cmake_minimum_required(VERSION 3.29)
project(ATOCpp)

set(CMAKE_CXX_STANDARD 23)

set(SOURCES
        src/main.cpp
        src/chapter1/1_2_Programs/source/HelloWorld.cpp
        src/chapter1/1_3_Functions/source/BasicFunctions.cpp
        src/chapter1/1_3_Functions/source/OverloadingFunctions.cpp
        src/chapter2/2_3_Classes/source/Vector.cpp
    )

set(HEADERS
        src/chapter1/1_2_Programs/include/HelloWorld.h
        src/chapter1/1_3_Functions/include/BasicFunctions.h
        src/chapter1/1_3_Functions/include/OverloadingFunctions.h
        src/chapter2/2_3_Classes/include/Vector.h
)

add_executable(ATOCpp ${SOURCES} ${HEADERS})