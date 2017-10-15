/*
Laila Espinoza
Problem 6.26
*/
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class CFclass 
{
public:
	//constructor
	CFclass() {}

	//function celsius
	double celsius(double f)
	{
		return (f - 32) * .5556;
	}

	//function fahrenheit
	double fahrenheit(double c)
	{
		return (c * 1.8) + 32;
	}
};