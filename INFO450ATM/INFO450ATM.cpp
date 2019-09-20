// INFO450ATM.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
using namespace std;


int main()
{
	int withdraw = 0;
	char answer = 'y';
	int i50 = 0;
	int i20 = 0;
	int i10 = 0;
	int i5 = 0;
	int i1 = 0;


	
	while (answer == 'y')//loop that allows for additional valid withdrawls 

	do// loop that asks for valid user input 
	{
		cout << "Please enter a withdrawl amount " << endl;
		cin >> withdraw;
		if (withdraw < 1)
		{
			cout << "The withdraw amount is invalid! " << endl;//withdrawl is invalid if below 1
			break;
		}

		if (withdraw > 300)
		{
			cout << "The withdraw amount is invalid! " << endl;//withdrawl is invalid if above 300
			break;
		}
		if (withdraw >= 1 & withdraw <= 300)//count # of bills if withdrawl is within the range of 1 and 300
		{
			i50 = withdraw / 50;
			cout << "You have " << i50 <<" "<< "$50.00 bills " << endl;
			i20 = withdraw / 20;
			cout << "You have " << i20 <<" "<< "$20.00 bills " << endl;
			i10 = withdraw / 10;
			cout << "You have " << i10 <<" "<< "$10.00 bills " << endl;
			i5 = withdraw / 5;
			cout << "You have " << i5 <<" "<< "$5.00 bills " << endl;
			i1 = withdraw / 1;
			cout << "You have " << i1 <<" "<< "$1.00 bills " << endl;
		}
		cout << "Another?  type Y to continue " << endl;//ask for additional withdrawl if previous withdrawl was valid
		cin >> answer;
		break;
		cout << "Please enter a withdrawl amount " << endl;
		cin >> withdraw;
	} while (answer == 'y');
	
	return 0;
}