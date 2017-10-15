/*
Laila Espinoza
Problem 6.20
*/

#include <iostream>
#include <string>
#include <cstdlib>
#include "MultiplesClass.h"
using namespace std;

int main() 
{
	//variables
	int num1, num2;
	char cont = 'Y';

	//object
	MultiplesClass ans{};
	
	//ask to use program
	cout << "Enter Two Numbers, Find Out If It's A Multiple!" << endl;
	cout << "\nContinue? (Y or N): ";
	cin >> cont;
	cout << endl;

	do
	{
		//set nums
		cout << "First Number: ";
		cin >> num1;
		cout << "\nSecond Number: ";
		cin >> num2;
		cout << endl;

		//use object to see if they are multiples
		if (ans.isMultiple(num1, num2))
		{
			cout << num1 << " is a Multiple of " << num2 << " !" << endl;
		}
		else
		{
			cout << num1 << " is not a Multiple of " << num2 << " :(" << endl;
		}

		//ask to use again
		cout << "\nContinue? (Y or N): ";
		cin >> cont;

	} while (cont == 'Y');
	
	

	return 0;
}