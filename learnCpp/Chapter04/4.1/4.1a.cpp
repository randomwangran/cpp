// ConsoleApplication4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>


int main()
{
	using namespace std;

	int userInputA, userInputB;
	cout << "Enter an integer: ";

	cin >> userInputA;

	cout << "Enter a larger integer: ";
	cin >> userInputB;

	if (userInputB < userInputA)
	{
		int dummy;

		dummy = userInputB;
		userInputB = userInputA;
		userInputA = dummy;
		cout << "The smaller value is " << userInputA << endl;
		cout << "The larger value is " << userInputB << endl;
	} // dummy dies here

	cout << "userInputA is " << userInputA << endl;
	
	cout << "userInputB is " << userInputB << endl;

	system("pause");

    return 0;
} //userInputA&B die here

