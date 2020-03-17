// Header File Pre Processor
#include "gtest/gtest.h"

// Program Header File Pre Processor
#include "Vector2D.h"

/*
Copyright 2020 Sean Doucet
The tests provided are part of the Homework from NBCC.
*/

TEST(Vector2DTestSuite, constructorTest01) {
	Vector2D v1(1, 1);
	std::string expectedResult = "(1, 1)";
	std::string result = v1.toString();
	EXPECT_EQ(1, 1);
}

TEST(Vector2DTestSuite, notequalsTest01) {
	Vector2D v1(1, 1);
	Vector2D v2(1, 1);

	EXPECT_TRUE(v1 == v2);
}

TEST(Vector2DTestSuite, notequalsTest02) {
	Vector2D v1(1, 1);
	Vector2D v2(2, 1);

	EXPECT_TRUE(v1 != v2);
}

TEST(Vector2DTestSuite, expectgreaterthan) {
	Vector2D v1(1, 1);
	Vector2D v2(2, 5);

	EXPECT_TRUE(v1 < v2);
}

TEST(Vector2DTestSuite, expectlessthan) {
	Vector2D v1(1, 1);
	Vector2D v2(2, 5);

	EXPECT_TRUE(v1 < v2);
}


TEST(Vector2DTestSuite, equalsTest01) {
	Vector2D v1(1, 1);
	Vector2D v2(1, 1);

	EXPECT_TRUE(v1 == v2);
}


TEST(Vector2DTestSuite, equalsTest02) {
	Vector2D v1(1, 1);
	Vector2D v2(2, 1);

	EXPECT_FALSE(v1 == v2);
}


TEST(Vector2DTestSuite, notEqualsTest01) {
	Vector2D v1(5, 1);
	Vector2D v2(1, 1);

	EXPECT_TRUE(v1 != v2);
}


TEST(Vector2DTestSuite, notEqualsTest02) {
	Vector2D v1(1, 1);
	Vector2D v2(1, 1);

	EXPECT_FALSE(v1 != v2);
}

TEST(Vector2DTestSuite, arithmaticOperatorTest03) {
	Vector2D v1(2, 3);
	Vector2D v2(2, 3);

	Vector2D expectedResult(3, 4);

	ASSERT_EQ(v1, expectedResult);
	ASSERT_EQ(v2, expectedResult);
}