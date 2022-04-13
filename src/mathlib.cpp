#include "mathlib.h"
#include <math.h>
#include <stdexcept>


long double mathlib::add(long double a, long double b){
    return a + b;
}

long double mathlib::sub(long double a, long double b){
    return a - b;
}

long double mathlib::mul(long double a, long double b){
    return a * b;
}

long double mathlib::div(long double dividend, long double divisor){
    if (divisor == 0){
        throw std::invalid_argument("Division by zero!");
    }
    return dividend / divisor;
}

long long mathlib::factorial(long long a){
    if (a < 0){
        throw std::invalid_argument("Number less than zero!");
    } else if (a != (int)a){
        throw std::invalid_argument("Number is not an integer!");
    } else if (a == 1 || a == 0){
        return 1;
    }
    return a * factorial(a - 1);
}

long double mathlib::power(long double num, long long exponent){
    if (exponent != (int)exponent){
        throw std::invalid_argument("Exponent is not an integer!");
    } else if (exponent < 0){
        throw std::invalid_argument("Exponent is less than zero!");
    } else if (exponent == 0){
        return 1;
    }

    return pow(num, exponent);
}

long double mathlib::getRoot(long double num, long long exponent){
    if (exponent != (long long int)exponent){
        throw std::invalid_argument("Exponent is not an integer!");
    }

    if (num < 0){
        if (exponent % 2 == 0){
            throw std::invalid_argument("Exponent is even while number is less than zero!");
        }
        return pow(num, (long double)(1 / exponent));
    }
    return pow(num, (long double)(1 / exponent));
}

long double mathlib::abs(long double num){
    if (num < 0){
        return -1 * num;
    }
    return num;
}