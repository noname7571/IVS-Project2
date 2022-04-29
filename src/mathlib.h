/**
 * @file mathlib.h
 * @author xblazo00 xtomko06
 * @brief Header file for mathlib.cpp
 * @version 0.1
 * @date 2022-04-29
 * 
 */
#pragma once

namespace mathlib
{
    long double add(long double a, long double b);
    long double sub(long double a, long double b);
    long double mul(long double a, long double b);
    long double div(long double dividend, long double divisor);
    long long factorial(long long a);
    long double power(long double num, long long power);
    long double getRoot(long double num, long long power);
    long double abs(long double num);
}