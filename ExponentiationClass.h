/*
Laila Espinoza
Problem 6.18
*/

#include <iostream>
using namespace std;

class ExponentiationClass
{
public:
	//constructor
	ExponentiationClass() {}

	//function
	int integerPower(int base, int exponent)
	{
		if (exponent == 1)
		{
			return base;
		}
		else
		{
			return base * integerPower(base, exponent - 1);
		}
	}

};

