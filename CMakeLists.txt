cmake_minimum_required(VERSION 3.29)
project(ATOCpp)

set(CMAKE_CXX_STANDARD 23)

# Bibliothèque chapitre 1
add_library(chapter1 STATIC
        src/chapter1/1_2_Programs/Source/HelloWorld.cpp
        src/chapter1/1_3_Functions/Source/BasicFunctions.cpp
        src/chapter1/1_3_Functions/Source/OverloadingFunctions.cpp
)
target_include_directories(chapter1 PUBLIC
        src/chapter1/1_2_Programs/Include
        src/chapter1/1_3_Functions/Include
)

# Bibliothèque chapitre 2
add_library(chapter2 STATIC
        src/chapter2/2_3_Classes/source/Vector.cpp
        src/chapter2/2_4_Enumeration/TrafficLight.cpp
)
# Bibliothèque chapitre 5
add_library(chapter2 STATIC
        src/chapter5/Include/Container.h
)

target_include_directories(chapter2 PUBLIC
        src/chapter2/2_3_Classes/include
)

# Ajouter Google Test
add_subdirectory(third_party/googletest)
include_directories(third_party/googletest/googletest/include)

# Exécutable principal (avec tests)
add_executable(ATOCpp
        src/main.cpp
        tests/chapter2_tests/Source/test_TrafficLight.cpp
        tests/chapter2_tests/Source/test_BasicFunctions.cpp
        tests/chapter2_tests/Source/test_Vector.cpp
)
target_include_directories(ATOCpp PUBLIC
        tests/chapter2_tests/Include
)

# Lier les bibliothèques nécessaires
target_link_libraries(ATOCpp PRIVATE chapter1 chapter2 gtest gtest_main)
