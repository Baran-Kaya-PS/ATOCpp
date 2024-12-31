//
// Created by Baran on 12/31/2024.
//
#include "../../../src/chapter2/2_3_Classes/source/Vector.cpp"
#include "test_Vector.h"
#include "gtest/gtest.h"
TEST(VectorTest,ConstructorNegativeSize){
    EXPECT_THROW(Vector(-1),std::length_error);
}
