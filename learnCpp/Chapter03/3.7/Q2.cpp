// Q2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <math.h>

int greaterThan1Digital(int userInput, int power)
{
	if (userInput >= pow(2,power-1)) {
		std::cout << "1";
		return userInput = (userInput - pow(2,power-1));
	}
	else
	{
		std::cout << "0";
		return userInput;
	}
}

int main()
{
	using namespace std;

	int userInput;
	cin >> userInput;

	for (int powerChecker = 8; powerChecker >= 1; powerChecker--)
	{
		userInput = greaterThan1Digital(userInput, powerChecker);
	}

	system("pause");
    
	return 0;
}