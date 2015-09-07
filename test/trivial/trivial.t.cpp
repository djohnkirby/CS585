//trivial.t.cpp
#include "gtest/gtest.h"

/* This file contians trivial test cases to confirm that Google Test works.*/

//This test checks whether 1==1
TEST(trivialTest, oneEqualsOne)
{
  EXPECT_EQ(1, 1);
}

//This test checks whether 3+3=6 (Rick and Morty reference)
TEST(trivialTest, threePlusThree)
{
  EXPECT_TRUE(3 + 3 == 6);
}

//This test checks whether false is false.
TEST(trivialTest, falseIsFalse)
{
  EXPECT_FALSE(false);
}
