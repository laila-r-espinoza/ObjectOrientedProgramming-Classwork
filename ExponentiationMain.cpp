/*
Laila Espinoza
Problem 6.18
*/

#include <iostream>
#include <string>
#include "ExponentiationClass.h"
using namespace std;

int main()
{
	//variables
	int base, exponent;
	//ask for info
	cout << "Please Enter Your Base Number: " << endl;
	cin >> base;
	cout << "Please Enter Your Exponent Number: " << endl;
	cin >> exponent;
	//create object
	ExponentiationClass ans{};
	//test object and display answer
	cout << "Calculating: " << base << " ^ " << exponent << " = " << ans.integerPower(base, exponent) << endl;

	return 0;
}