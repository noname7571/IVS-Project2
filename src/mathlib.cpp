#include "mathlib.h"
#include <math.h>
#include <stdexcept>

#define MAX 999999999999999999
#define MIN -999999999999999999


long double mathlib::add(long double a, long double b){
    long double result = a + b;
    if (result > MAX){
        throw std::out_of_range("inf");
    } else if (result < MIN){
        throw std::out_of_range("-inf");
    } else {
        return result;
    }
}

long double mathlib::sub(long double a, long double b){
    long double result = a - b;
    if (result > MAX){
        throw std::out_of_range("inf");
    } else if (result < MIN){
        throw std::out_of_range("-inf");
    } else {
        return result;
    }
}

long double mathlib::mul(long double a, long double b){
    long double result = a * b;
    if (result > MAX){
        throw std::out_of_range("inf");
    } else if (result < MIN){
        throw std::out_of_range("-inf");
    } else {
        return result;
    }
}

long double mathlib::div(long double dividend, long double divisor){
    if (divisor == 0){
        throw std::invalid_argument("Division by zero!");
    }

    long double result = dividend / divisor;
    if (result > MAX){
        throw std::out_of_range("inf");
    } else if (result < MIN){
        throw std::out_of_range("-inf");
    } else {
        return result;
    }
}

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
        throw std::out_of_range("inf");
    } else if (result < MIN){
        throw std::out_of_range("-inf");
    } else {
        return result;
    }
}

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

    long double result = pow(num, exponent);
    if (result > MAX){
        throw std::out_of_range("inf");
    } else if (result < MIN){
        throw std::out_of_range("-inf");
    } else {
        return result;
    }
}

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
            throw std::out_of_range("inf");
        } else if (result < MIN){
            throw std::out_of_range("-inf");
        } else {
            return result;
        }
    }

    long double result = pow(num, 1 / (long double)exponent);
    if (result > MAX){
        throw std::out_of_range("inf");
    } else if (result < MIN){
        throw std::out_of_range("-inf");
    } else {
        return result;
    }
}

long double mathlib::abs(long double num){
    if (num > MAX){
        throw std::out_of_range("inf");
    } else if (num < MIN){
        throw std::out_of_range("-inf");
    } else if (num < 0){
        return -num;
    } else {
        return num;
    }
}