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
