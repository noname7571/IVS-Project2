#include "mathlib.cpp"
#include "gtest/gtest.h"
#include <limits.h>

/*
 * Tests for mathlib::add function
 */
TEST(AddTests,Trivial)
{
    EXPECT_EQ(mathlib::add(0,0),0);
}

TEST(AddTests, Positive) {
    EXPECT_EQ(mathlib::add(1, 1), 2);
    EXPECT_EQ(mathlib::add(7, 7), 14);
    EXPECT_EQ(mathlib::add(13, 13), 26);
    EXPECT_EQ(mathlib::add(19, 19), 38);
    EXPECT_EQ(mathlib::add(25, 25), 50);
    EXPECT_EQ(mathlib::add(26, 26), 52);
}

TEST(AddTests, Negative)
{
    EXPECT_EQ(mathlib::add(-1, -1), -2);
    EXPECT_EQ(mathlib::add(-7, -7), -14);
    EXPECT_EQ(mathlib::add(-13, -13), -26);
    EXPECT_EQ(mathlib::add(-19, -19), -38);
    EXPECT_EQ(mathlib::add(-25, -25), -50);
    EXPECT_EQ(mathlib::add(-26, -26), -52);
}

TEST(AddTests, Mixed)
{
    EXPECT_EQ(mathlib::add(1, -1), 0);
    EXPECT_EQ(mathlib::add(-1, 1), 0);
    EXPECT_EQ(mathlib::add(7, -7), 0);
    EXPECT_EQ(mathlib::add(-7, 7), 0);
    EXPECT_EQ(mathlib::add(13, -13), 0);
    EXPECT_EQ(mathlib::add(-13, 13), 0);
    EXPECT_EQ(mathlib::add(19, -50), -31);
    EXPECT_EQ(mathlib::add(-19, 50), 31);
}

TEST(AddTests, floatingPoint)
{
    EXPECT_DOUBLE_EQ(mathlib::add(1.1, 1.9), 3.0);
    EXPECT_DOUBLE_EQ(mathlib::add(1.1, -1.9), -0.8);
    EXPECT_DOUBLE_EQ(mathlib::add(-1.1, 1.9), 0.8);
    EXPECT_DOUBLE_EQ(mathlib::add(-1.1, -1.9), -3.0);
    EXPECT_DOUBLE_EQ(mathlib::add(1.1, 1.1), 2.2);
    EXPECT_DOUBLE_EQ(mathlib::add(1.1, -1.1), 0.0);
    EXPECT_DOUBLE_EQ(mathlib::add(-1.1, 1.1), 0.0);
    EXPECT_DOUBLE_EQ(mathlib::add(-1.1, -1.1), -2.2);
}

TEST(AddTests, Overflow)
{
    EXPECT_ANY_THROW(mathlib::add(LDBL_MAX, 1));
    EXPECT_ANY_THROW(mathlib::add(LDBL_MIN, -1));
}

/*
 * Tests for mathlib::sub function
 */
TEST(SubTests, Trivial)
{
    EXPECT_EQ(mathlib::sub(0,0),0);
}

TEST(SubTests, Positive) {
    EXPECT_EQ(mathlib::sub(1, 1), 0);
    EXPECT_EQ(mathlib::sub(7, 7), 0);
    EXPECT_EQ(mathlib::sub(13, 13), 0);
    EXPECT_EQ(mathlib::sub(19, 19), 0);
    EXPECT_EQ(mathlib::sub(25, 25), 0);
    EXPECT_EQ(mathlib::sub(26, 26), 0);
}

TEST(SubTests, Negative)
{
    EXPECT_EQ(mathlib::sub(-1, -1), 0);
    EXPECT_EQ(mathlib::sub(-7, -7), 0);
    EXPECT_EQ(mathlib::sub(-13, -13), 0);
    EXPECT_EQ(mathlib::sub(-19, -19), 0);
    EXPECT_EQ(mathlib::sub(-25, -25), 0);
    EXPECT_EQ(mathlib::sub(-26, -26), 0);
}

TEST(SubTests, Mixed)
{
    EXPECT_EQ(mathlib::sub(1, -1), 2);
    EXPECT_EQ(mathlib::sub(-1, 1), -2);
    EXPECT_EQ(mathlib::sub(7, -7), 14);
    EXPECT_EQ(mathlib::sub(-7, 7), -14);
    EXPECT_EQ(mathlib::sub(13, -13), 26);
    EXPECT_EQ(mathlib::sub(-13, 13), -26);
    EXPECT_EQ(mathlib::sub(19, -50), 69);
    EXPECT_EQ(mathlib::sub(-19, 50), -69);
}

TEST(SubTests, floatingPoint)
{
    EXPECT_DOUBLE_EQ(mathlib::sub(1.1, 1.9), -0.8);
    EXPECT_DOUBLE_EQ(mathlib::sub(1.1, -1.9), 3);
    EXPECT_DOUBLE_EQ(mathlib::sub(-1.1, 1.9), -3);
    EXPECT_DOUBLE_EQ(mathlib::sub(-1.1, -1.9), 0.8);
    EXPECT_DOUBLE_EQ(mathlib::sub(1.1, 1.1), 0.0);
    EXPECT_DOUBLE_EQ(mathlib::sub(1.1, -1.1), 2.2);
    EXPECT_DOUBLE_EQ(mathlib::sub(-1.1, 1.1), -2.2);
}

TEST(SubTests, Overflow)
{
    EXPECT_ANY_THROW(mathlib::sub(LDBL_MAX, -1));
    EXPECT_ANY_THROW(mathlib::sub(LDBL_MIN, 1));
}

/*
 * Tests for mathlib::mul function
 */
TEST(MulTests, Trivial)
{
    EXPECT_EQ(mathlib::mul(0,0),0);
    EXPECT_EQ(mathlib::mul(1,0),0);
    EXPECT_EQ(mathlib::mul(0,1),0);
    EXPECT_EQ(mathlib::mul(1,1),1);
}

TEST(MulTests, Positive) {
    EXPECT_EQ(mathlib::mul(1, 1), 1);
    EXPECT_EQ(mathlib::mul(7, 7), 49);
    EXPECT_EQ(mathlib::mul(13, 13), 169);
    EXPECT_EQ(mathlib::mul(19, 19), 361);
    EXPECT_EQ(mathlib::mul(25, 25), 625);
    EXPECT_EQ(mathlib::mul(26, 26), 676);
    EXPECT_EQ(mathlib::mul(4,6), 24);
    EXPECT_EQ(mathlib::mul(7,8), 56);
    EXPECT_EQ(mathlib::mul(9,10), 90);
    EXPECT_EQ(mathlib::mul(11,12), 132);
}

TEST(MulTests, Negative)
{
    EXPECT_EQ(mathlib::mul(-1, -1), 1);
    EXPECT_EQ(mathlib::mul(-7, -7), 49);
    EXPECT_EQ(mathlib::mul(-13, -13), 169);
    EXPECT_EQ(mathlib::mul(-19, -19), 361);
    EXPECT_EQ(mathlib::mul(-25, -25), 625);
    EXPECT_EQ(mathlib::mul(-26, -26), 676);
    EXPECT_EQ(mathlib::mul(-4,-6),24);
    EXPECT_EQ(mathlib::mul(-7,-8),56);
    EXPECT_EQ(mathlib::mul(-9,-10),90);
    EXPECT_EQ(mathlib::mul(-11,-12),132);
}

TEST(MulTests, Mixed)
{
    EXPECT_EQ(mathlib::mul(1, -1), -1);
    EXPECT_EQ(mathlib::mul(-1, 1), -1);
    EXPECT_EQ(mathlib::mul(7, -7), -49);
    EXPECT_EQ(mathlib::mul(-7, 7), -49);
    EXPECT_EQ(mathlib::mul(13, -13), -169);
    EXPECT_EQ(mathlib::mul(-13, 13), -169);
    EXPECT_EQ(mathlib::mul(19, -50), -950);
    EXPECT_EQ(mathlib::mul(-19, 50), -950);
    EXPECT_EQ(mathlib::mul(25, -25), -625);
    EXPECT_EQ(mathlib::mul(-25, 25), -625);
    EXPECT_EQ(mathlib::mul(26, -26), -676);
    EXPECT_EQ(mathlib::mul(-26, 26), -676);
    EXPECT_EQ(mathlib::mul(4,-6),-24);
    EXPECT_EQ(mathlib::mul(-4,6),-24);
    EXPECT_EQ(mathlib::mul(7,-8),-56);
    EXPECT_EQ(mathlib::mul(-7,8),-56);
    EXPECT_EQ(mathlib::mul(9,-10),-90);
    EXPECT_EQ(mathlib::mul(-9,10),-90);
    EXPECT_EQ(mathlib::mul(11,-12),-132);
    EXPECT_EQ(mathlib::mul(-11,12),-132);
}

TEST(MulTests, floatingPoint)
{
    EXPECT_DOUBLE_EQ(mathlib::mul(1.1, 1.9), 2.09);
    EXPECT_DOUBLE_EQ(mathlib::mul(1.1, -1.9), -2.09);
    EXPECT_DOUBLE_EQ(mathlib::mul(-1.1, 1.9), -2.09);
    EXPECT_DOUBLE_EQ(mathlib::mul(-1.1, -1.9), 2.09);
    EXPECT_DOUBLE_EQ(mathlib::mul(1.1, 1.1), 1.21);
    EXPECT_DOUBLE_EQ(mathlib::mul(1.1, -1.1), -1.21);
    EXPECT_DOUBLE_EQ(mathlib::mul(-1.3, 1.4), -1.82);
    EXPECT_DOUBLE_EQ(mathlib::mul(-1.3, -1.4), 1.82);
}

TEST(MulTests, Overflow)
{
    EXPECT_ANY_THROW(mathlib::div(LDBL_MIN, -1));
    EXPECT_ANY_THROW(mathlib::mul(LDBL_MAX, 1.01));
    EXPECT_ANY_THROW(mathlib::mul(LDBL_MIN, 1.01));
}

/*
 * Tests for mathlib::div function
 */
TEST(DivTests, Trivial)
{
    EXPECT_ANY_THROW(mathlib::div(1,0));
    EXPECT_ANY_THROW(mathlib::div(0,0));
    EXPECT_EQ(mathlib::div(5,1),5);
    EXPECT_EQ(mathlib::div(1,1),1);
}

TEST(DivTests, Positive)
{
    EXPECT_EQ(mathlib::div(34, 2), 17);
    EXPECT_EQ(mathlib::div(25,5),5);
    EXPECT_EQ(mathlib::div(20,4),5);
    EXPECT_EQ(mathlib::div(9,3),3);
    EXPECT_EQ(mathlib::div(99,3),33);
}

TEST(DivTests, Negative)
{
    EXPECT_EQ(mathlib::div(-34, -2), 17);
    EXPECT_EQ(mathlib::div(-25,-5),5);
    EXPECT_EQ(mathlib::div(-20,-4),5);
    EXPECT_EQ(mathlib::div(-9,-3),3);
    EXPECT_EQ(mathlib::div(-99,-3),33);
}

TEST(DivTests, Mixed)
{
    EXPECT_EQ(mathlib::div(34,-2), -17);
    EXPECT_EQ(mathlib::div(-34,2), -17);
    EXPECT_EQ(mathlib::div(25,-5),-5);
    EXPECT_EQ(mathlib::div(-25,5),-5);
    EXPECT_EQ(mathlib::div(20,-4),-5);
    EXPECT_EQ(mathlib::div(-20,4),-5);
    EXPECT_EQ(mathlib::div(9,-3),-3);
    EXPECT_EQ(mathlib::div(-9,3),-3);
    EXPECT_EQ(mathlib::div(99,-3),-33);
    EXPECT_EQ(mathlib::div(-99,3),-33);
}

TEST(DivTests, floatingPoint)
{
    EXPECT_DOUBLE_EQ(mathlib::div(9.874,1), 9.874);
    EXPECT_DOUBLE_EQ(mathlib::div(21.35, -7), -3.05);
    EXPECT_DOUBLE_EQ(mathlib::div(-99.99, 3), -33.33);
    EXPECT_DOUBLE_EQ(mathlib::div(-198.478, -2), 99.239);
    EXPECT_DOUBLE_EQ(mathlib::div(1.21,11), 0.11);
    EXPECT_DOUBLE_EQ(mathlib::div(1.21,0.5), 2.42);
}

TEST(DivTests, Overflow)
{
    EXPECT_ANY_THROW(mathlib::div(LDBL_MIN, -1));
    EXPECT_ANY_THROW(mathlib::div(LDBL_MAX, 0.5));
    EXPECT_ANY_THROW(mathlib::div(LDBL_MIN, 0.5));
}

/*
 * Tests for mathlib::factorial function
 */

TEST(factTests, Trivial)
{
    EXPECT_EQ(mathlib::factorial(0), 1);
    EXPECT_EQ(mathlib::factorial(1), 1);
    EXPECT_ANY_THROW(mathlib::factorial(-1));
}

TEST(factTests, Positive)
{
    EXPECT_EQ(mathlib::factorial(5), 120);
    EXPECT_EQ(mathlib::factorial(6), 720);
    EXPECT_EQ(mathlib::factorial(7), 5040);
    EXPECT_EQ(mathlib::factorial(8), 40320);
    EXPECT_EQ(mathlib::factorial(9), 362880);
    EXPECT_EQ(mathlib::factorial(10), 3628800);
}

TEST(factTests, Overflow)
{
    EXPECT_ANY_THROW(mathlib::factorial(250));
    EXPECT_ANY_THROW(mathlib::factorial(1000));
}

/*
 * Tests for mathlib::power function
 */

TEST(powTests, Trivial)
{
    EXPECT_EQ(mathlib::power(0,1), 0);
    EXPECT_EQ(mathlib::power(1,1), 1);
    EXPECT_EQ(mathlib::power(1,647), 1);
    // 0^0 is undefined
    EXPECT_ANY_THROW(mathlib::power(0,0));
}

TEST(powTests, Positive)
{
    EXPECT_EQ(mathlib::power(2,3), 8);
    EXPECT_EQ(mathlib::power(3,2), 9);
    EXPECT_EQ(mathlib::power(4,3), 64);
    EXPECT_EQ(mathlib::power(5,2), 25);
    EXPECT_EQ(mathlib::power(6,3), 216);
    EXPECT_EQ(mathlib::power(9,5), 59049);
}

TEST(powTests, Negative)
{
    EXPECT_EQ(mathlib::power(-2,3), -8);
    EXPECT_EQ(mathlib::power(-3,2), 9);
    EXPECT_EQ(mathlib::power(-4,3), -64);
    EXPECT_EQ(mathlib::power(-5,2), 25);
    EXPECT_EQ(mathlib::power(-6,3), -216);
    EXPECT_EQ(mathlib::power(-9,5), -59049);
}

TEST(powTests, floatingPoint)
{
    EXPECT_DOUBLE_EQ(mathlib::power(2.5,3), 15.625);
    EXPECT_DOUBLE_EQ(mathlib::power(3.5,2), 12.25);
    EXPECT_DOUBLE_EQ(mathlib::power(4.5,3), 91.125);
    EXPECT_DOUBLE_EQ(mathlib::power(-8.5,3), -614.125);
}

TEST(powTests, Overflow)
{
    EXPECT_ANY_THROW(mathlib::power(LDBL_MAX,2));
    EXPECT_ANY_THROW(mathlib::power(LDBL_MIN,3));
}

/*
 * Tests for mathlib::getRoot function
 */

TEST(getRootTests, Trivial)
{
    EXPECT_EQ(mathlib::getRoot(0,1), 0);
    EXPECT_EQ(mathlib::getRoot(1,1), 1);
    EXPECT_EQ(mathlib::getRoot(1,647), 1);
    EXPECT_EQ(mathlib::getRoot(647,1), 647);
    // 0^0 is undefined
    EXPECT_ANY_THROW(mathlib::getRoot(0,0));
}

TEST(getRootTests, Positive)
{
    EXPECT_DOUBLE_EQ(mathlib::getRoot(8,3), 2);
    EXPECT_DOUBLE_EQ(mathlib::getRoot(64,3), 4);
    EXPECT_DOUBLE_EQ(mathlib::getRoot(25,2), 5);
    EXPECT_DOUBLE_EQ(mathlib::getRoot(625,4), 5);
    EXPECT_DOUBLE_EQ(mathlib::getRoot(27,3), 3);
    EXPECT_DOUBLE_EQ(mathlib::getRoot(32768,5), 8);
}

TEST(getRootTests, Negative)
{
    EXPECT_DOUBLE_EQ(mathlib::getRoot(-8,3), -2);
    EXPECT_DOUBLE_EQ(mathlib::getRoot(-64,3), -4);
    EXPECT_ANY_THROW(mathlib::getRoot(-25,2));
    EXPECT_ANY_THROW(mathlib::getRoot(-625,4));
    EXPECT_DOUBLE_EQ(mathlib::getRoot(-27,3), -3);
    EXPECT_DOUBLE_EQ(mathlib::getRoot(-32768,5), -8);
}

TEST(getRootTests, floatingPoint)
{
    EXPECT_DOUBLE_EQ(mathlib::getRoot(0.25,2), 0.5);
    EXPECT_DOUBLE_EQ(mathlib::getRoot(0.0144,2), 0.12);
    EXPECT_DOUBLE_EQ(mathlib::getRoot(0.125,3), 0.5);
    EXPECT_DOUBLE_EQ(mathlib::getRoot(0.16807,5), 0.7);
}