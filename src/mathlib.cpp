/**
 * @file mathlib.cpp
 * @authors xtomko06 xblazo00
 * @brief File containing the mathlib namespace.
 * @version 0.1
 * @date 2022-04-29
 * 
 * 
 */

#include "mathlib.h"
#include <math.h>
#include <stdexcept>

/**
 * @brief Implementation limit of math library.
 */ 
#define MAX 999999999999999999
/**
 * @brief Implementation limit of math library.
 */ 
#define MIN -999999999999999999

/**
     * @brief A function to add two numbers.
     * 
     * @param a First number.
     * @param b Second number.
     * @return The sum of the two numbers.
     */
long double mathlib::add(long double a, long double b){
    long double result = a + b;
    if (result > MAX){
        throw std::out_of_range("Inf");
    } else if (result < MIN){
        throw std::out_of_range("-Inf");
    } else {
        return result;
    }
}

/**
 * @brief A function to subtract two numbers.
 * 
 * @param a First number.
 * @param b Second number.
 * @return The difference of the two numbers.
 */
long double mathlib::sub(long double a, long double b){
    long double result = a - b;
    if (result > MAX){
        throw std::out_of_range("Inf");
    } else if (result < MIN){
        throw std::out_of_range("-Inf");
    } else {
        return result;
    }
}

/**
 * @brief A function to multiply two numbers.
 * 
 * @param a First number.
 * @param b Second number.
 * @return The product of the two numbers.
 */
long double mathlib::mul(long double a, long double b){
    long double result = a * b;
    if (result > MAX){
        throw std::out_of_range("Inf");
    } else if (result < MIN){
        throw std::out_of_range("-Inf");
    } else {
        return result;
    }
}

/**
 * @brief A function to divide two numbers.
 * 
 * @param dividend First number.
 * @param divisor Second number.
 * @return The quotient of the two numbers.
 */
long double mathlib::div(long double dividend, long double divisor){
    if (divisor == 0){
        throw std::invalid_argument("Division by zero!");
    }

    long double result = dividend / divisor;
    if (result > MAX){
        throw std::out_of_range("Inf");
    } else if (result < MIN){
        throw std::out_of_range("-Inf");
    } else {
        return result;
    }
}

/**
 * @brief A function to calculate the factorial of a number.
 * 
 * @param a Number to calculate the factorial of.
 * @return The factorial of the number.
 */
long long mathlib::factorial(long long a){
    if (a < 0){
        throw std::invalid_argument("Number less than zero!");
    } else if (a != (long long)a){
        throw std::invalid_argument("Number is not an integer!");
    } else if (a == 1 || a == 0){
        return 1;
    }

    long double result = a * factorial(a - 1);
    if (result > MAX){
        throw std::out_of_range("Inf");
    } else if (result < MIN){
        throw std::out_of_range("-Inf");
    } else {
        return result;
    }
}

/**
 * @brief A function to raise a number to a power.
 * 
 * @param num Number to raise to a power.
 * @param exponent Exponent to raise the number to.
 * @return The number raised to the power.
 */
long double mathlib::power(long double num, long long exponent){
    if (exponent != (long long int)exponent){
        throw std::invalid_argument("Exponent is not an integer!");
    } else if (exponent < 0){
        throw std::invalid_argument("Exponent is less than zero!");
    } else if (exponent == 0 && num == 0){
        throw std::invalid_argument("0^0 is not defined!");
    } else if (exponent == 0){
        return 1;
    }

    long double result = 1;
    for (long long i = 1; i <= exponent; i++){
        result = result * num;
    }
    if (result > MAX){
        throw std::out_of_range("Inf");
    } else if (result < MIN){
        throw std::out_of_range("-Inf");
    } else {
        return result;
    }
}

/**
 * @brief A function to calculate the nth root of a number.
 * 
 * @param num Number to calculate the nth root of.
 * @param exponent Root to calculate.
 * @return 
 */
long double mathlib::getRoot(long double num, long long exponent){
    if (exponent != (long long int)exponent){
        throw std::invalid_argument("Exponent is not an integer!");
    } else if (exponent == 0){
        throw std::invalid_argument("Illegal operation!");
    }

    if (num < 0){
        if (exponent % 2 == 0){
            throw std::invalid_argument("Exponent is even while number is less than zero!");
        }

        long double result = -pow(-num, 1 / (long double)exponent);
        if (result > MAX){
            throw std::out_of_range("Inf");
        } else if (result < MIN){
            throw std::out_of_range("-Inf");
        } else {
            return result;
        }
    }


    long double result = pow(num, 1 / (long double)exponent);
    if (result > MAX){
        throw std::out_of_range("Inf");
    } else if (result < MIN){
        throw std::out_of_range("-Inf");
    } else {
        return result;
    }
}

/**
 * @brief Get the absolute value of a number.
 * 
 * @param num Number to get the absolute value of.
 * @return Absolute value of the number.
 */
long double mathlib::abs(long double num){
    /**
     * @brief Checking for overflow.
     * 
     */
    if (num > MAX){
        throw std::out_of_range("Inf");
    } else if (num < MIN){
        throw std::out_of_range("-Inf");
    } else if (num < 0){
        return -num;
    } else {
        return num;
    }
}