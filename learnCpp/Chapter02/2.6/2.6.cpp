// 2.6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

bool isPrime(int x)
{
	if (x == 2) {
		return true;
	}
	else if (x == 3) {
		return true;
	}
	else if (x == 5) {
		return true;
	}
	else if (x == 7) {
		return true;
	}
	else {
		return false;
	}
	
}

int main()
{
	using namespace std;

	int userInput;

	cout << "Please input a number";

	cin >> userInput;

	if (isPrime(userInput))
		cout << "The digit is prime";
	else
		cout << "The digit is not prime";

	system("pause");
    return 0;
}