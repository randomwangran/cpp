// Q2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

bool isEven(int a)
{
	if (a % 2 == 0)
		return true;
	else
		return false;
}

int main()
{
	using namespace std;

	int userInput;
	cout << "Enter an integer:";
	cin >> userInput;
	
	if (isEven(userInput))
		cout << "Your input number is even";
	else 
		cout << "Your input number is odd";
	system("pause");
    return 0;
}