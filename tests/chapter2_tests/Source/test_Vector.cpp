//
// Created by Baran on 12/31/2024.
//
#include "../../../src/chapter2/2_3_Classes/source/Vector.cpp"
#include "gtest/gtest.h"
TEST(VectorTest,ConstructorNegativeSize){
    EXPECT_THROW(Vector(-1),std::length_error);
}

TEST(VectorTest,OutofBoundsAccess){
    Vector v(5);
    EXPECT_THROW(v[10] = 42, std::out_of_range);
    EXPECT_THROW(v[-1] = 2, std::out_of_range);
}
TEST(VectorTest, NormalUsage) {
    Vector v(5);
    v[0] = 1.1;
    v[1] = 2.2;
    v[2] = 3.3;
    v[3] = 4.4;
    v[4] = 5.5;

    EXPECT_EQ(v.size(), 5);
    EXPECT_DOUBLE_EQ(v[0], 1.1);
    EXPECT_DOUBLE_EQ(v[1], 2.2);
    EXPECT_DOUBLE_EQ(v[2], 3.3);
    EXPECT_DOUBLE_EQ(v[3], 4.4);
    EXPECT_DOUBLE_EQ(v[4], 5.5);
}