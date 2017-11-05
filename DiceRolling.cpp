/*
Laila Espinoza
Problem 7.16
*/
#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	//seed rand
	srand(time(0));

	//define & initialize array to 0
	unsigned int fsums[11]{};

	//roll 2 dice 36000000 times
	for (int roll = 0; roll < 36000000; roll++)
	{
		fsums[((1 + rand() % 6) + (1 + rand() % 6))-2]++;
	}

	//print
	cout << "Face" << setw(24) << "Frequency of Sums" << endl;

	for (int i = 0; i < 11; i++) {
		cout << i + 2 << setw(20) << fsums[i] << endl;
	}

	return 0;
}