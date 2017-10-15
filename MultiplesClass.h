/*
Laila Espinoza
Problem 6.20
*/

#include <iostream>
#include <string>
using namespace std;

class MultiplesClass
{
public:
	//constructor
	MultiplesClass() {}
	
	//function that returns a boolean
	bool isMultiple(int num1, int num2)
	{
		if (num2 % num1 == 0)
		{
			return true;
		}
		else
			return false;
		
	}
};