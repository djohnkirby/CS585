//trivial.t.cpp
#include "gtest/gtest.h"

TEST(trivialTest, oneEqualsOne)
{
  EXPECT_EQ(1, 1);
}

TEST(trivialTest, threePlusThree)
{
  EXPECT_TRUE(3 + 3 == 6);
}

TEST(trivialTest, falseIsFalse)
{
  EXPECT_FALSE(false);
}
