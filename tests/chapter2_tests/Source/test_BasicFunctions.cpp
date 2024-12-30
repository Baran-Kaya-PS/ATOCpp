//
// Created by Baran on 12/29/2024.
//
#include "../../../src/chapter1/1_3_Functions/Include/BasicFunctions.h"
#include "../Include/test_BasicFunctions.h"
#include <gtest/gtest.h>
#include <cmath>


TEST(BasicFunctionTest,SqrtPositiveValue){
    EXPECT_NEAR(My_Func::sqrt(16),4,1e-9);
}

TEST(BasicFunctionTest,SqrtZero){
    EXPECT_NEAR(My_Func::sqrt(0.0),0,1e-9);
}

TEST(BasicFunctionTest, SqrtNegativeValue){
    EXPECT_TRUE(std::isnan(My_Func::sqrt(-1.0)));
}

TEST(BasicFunctionTest,SquarePositiveValue){
    EXPECT_EQ(My_Func::square(4.0),16);
}

TEST(BasicFunctionTest,SquareZero){
    EXPECT_EQ(My_Func::square(0),0);
}

TEST(BasicFunctionTest, NextElemValidPointer){
    int arr[] = {1,2,3};
    int* ptr = arr;
    EXPECT_EQ(My_Func::next_elem(ptr), &arr[1]); // regarde si on pointe vers le prochain élément
}

}