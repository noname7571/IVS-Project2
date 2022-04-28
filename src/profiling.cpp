#include <iostream>
#include "mathlib.h"

int main() {
	using namespace std;
	long double sum = 0;
	long double x = 0;
	long double y = 1;
	long double z = 0;
	long long size = 0;
	long double number;
	while (cin >> number)
	{
		x = mathlib::add(x, number);
		z = mathlib::add(z, mathlib::power(number,2));
		size++;
	}
	y = mathlib::div(y, (size-1));
	x = mathlib::div(x, size);
	sum = mathlib::sub(z,mathlib::mul(size, mathlib::power(x,2)));
	sum = mathlib::getRoot(mathlib::mul(sum,y), 2);
	cout << sum << endl;
	cout << size << endl;
	return 0;
}

