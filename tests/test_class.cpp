#include "gtest/gtest.h"

class ClassTest: public ::testing::Test
{

};

TEST_F(ClassTest, failingtest)
{
	ASSERT_TRUE(false);
}
