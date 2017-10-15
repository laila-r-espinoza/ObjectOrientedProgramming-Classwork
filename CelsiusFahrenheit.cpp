/*
Laila Espinoza
Problem 6.26
*/

#include <iostream>
#include <iomanip>
#include <string>
#include "CFclass.h"
using namespace std;


int main()
{
	//object
	CFclass ans{};
	
	//chart 1
	cout << "Celsius to Fahrenheit Chart" << endl;
	cout << "\nCelsius\t\tFahrenheit\tCelsius\t\tFahrenheit" << endl;

	for (int cc = 0; cc <= 50; cc++)
	{
		cout << cc << "\t\t" << ans.fahrenheit(cc) << setprecision(2) << fixed << 
			"\t\t" << cc + 50 << "\t\t" << ans.fahrenheit(cc+50) << endl;
	}
	
	//chart 2
	cout << "\nFahrenheit to Celsius Chart" << endl;
	cout << "\nFahrenheit\tCelsius\t\tFahrenheit\tCelsius" << endl;

	for (int f = 0; f <= 90; f++)
	{
		cout << f + 32 << "\t\t" << ans.celsius(f + 32) << setprecision(2) << fixed <<
			"\t\t" << f + 122 << "\t\t" << ans.celsius(f + 122) << endl;
	}

	return 0;
}

