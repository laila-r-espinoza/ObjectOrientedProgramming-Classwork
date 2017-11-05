/*
Laila Espinoza
Problem 7.21
*/
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
	//define variables
	int spersonNum, productNum;
	double totalValue;
	double sales[5][4]{};
	char ans;

	//Slip entering system
	cout << "Would you like to enter in a slip? (y or n): ";
	cin >> ans;

	while (ans == 'y')
	{
		cout << "Enter the Salesperson Number (1 to 4): ";
		cin >> spersonNum;
		cout << "Enter the Product Number (1 to 5): ";
		cin >> productNum;
		cout << "Enter the Total Dollar Value of the Produt Sold that Day: $";
		cin >> totalValue;

		sales[productNum - 1][spersonNum - 1] += totalValue;

		cout << "Would you like to enter in a slip? (y or n): ";
		cin >> ans;
	}

	//Prints top salesperson numbering row
	cout << "\nSALESPERSON vs PRODUCT NUMBER \n\t1\t2\t3\t4\tTotal\n";

	//Calculates and prints Salesperson vs Product Number table
	double pSum = 0;
	for (int i = 0; i < 5; i++) 
	{
		cout << i + 1 << "\t";
		
		for (int j = 0; j < 4; j++)
		{
			cout << "$" << sales[i][j];
			cout << "\t";
			pSum += sales[i][j];
		}
		cout << "$" << pSum << "\n";
		pSum = 0;
	}

	//Calculates and prints totals by salesperson
	cout << "Total\t";
	double sum = 0;
	for (int i = 0; i < 4; i++)
	{
		
		for (int j = 0; j < 5; j++)
		{
			sum += sales[j][i];
		}
		cout << "$" << sum << "\t";
		sum = 0;
	}
	cout << endl;
	

	return 0;
}