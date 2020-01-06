/*************************************************************************
 * *Author: Paul Leone
 * *Date: 1/16/2019
 * *Description: This program asks the user for a number of cents, from
 * *		 0 to 99, and outputs how many of each coin.
 * **********************************************************************/

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{

	int Quarters, Dimes, Nickels, Pennies, cents;

	//Ask user to input amount of change under a dollar
	cout << "Please enter an amount in cents less than a dollar.\n";
	cin >> cents;

	//Calculate the coin amount by the value of the given coin
	Quarters = cents / 25;
	cents = cents % 25;	//Update change to distribute evenly

	Dimes = cents / 10;
	cents = cents % 10;	//Update change to distribute evenly

	Nickels = cents / 5;
	cents = cents % 5;	//Update change to distribute evenly

	Pennies = cents / 1;
	cents = cents % 1;	//Update change to distribute evenly

	//Display the amount of change they will receive
	cout << "Your change will be:\n";
	cout << "Q: " << Quarters << endl; 
	cout << "D: " << Dimes << endl;
	cout << "N: " << Nickels << endl;
	cout << "P: " << Pennies << endl;

	return 0;
} 
