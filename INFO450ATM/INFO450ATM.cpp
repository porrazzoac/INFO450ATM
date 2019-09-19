// INFO450ATM.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
using namespace std;


int main()
{
	int withdraw = 0;
	char answer = 'y';
	int input = 0;
	
	while (answer == 'Y', answer == 'y')

	do// loop to accept user input 
	{
		cout << "please enter a withdrawl amount " << endl;
		cin >> withdraw;
		if (withdraw < 1)
		{
			cout << " the withdraw amount is invalid " << endl;
		}

		if (withdraw > 300)
		{
			cout << " the withdraw amount is invalid " << endl;
		}

	} while (withdraw < 1 || withdraw > 300);
	cout << " the withdraw amount is " << " dollars." << endl;
	cout << "Another?  type Y to continue." << endl;
	cin >> answer;
	return 0;
}