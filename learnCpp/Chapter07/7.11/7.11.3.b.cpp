// ConsoleApplication4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

void printBinary(uint32_t x)
{
	// Termination case
	if (x == 0)
		return;

	// Recurse to the next bit
	printBinary(x / 2);

	// Print out the remainders (in reverse order)
	std::cout << x % 2;
}

int main()
{
	std::cout << "Enter an integer: " << std::endl;

	int a;

	std::cin >> a;

	std::cout << "Before cast: ";
	std::cout << a;

	if (a < 0)
		printBinary(static_cast<uint32_t>(a));
	else
		printBinary(a);

	system("pause");
	return 0;

}