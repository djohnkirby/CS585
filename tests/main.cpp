/*
 * google_tests.cpp
 *
 *  Created on: Sep 2, 2015
 *      Author: dkirby
 */
#include "gtest/gtest.h"

int main(int argc, char* argv[])
{
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
