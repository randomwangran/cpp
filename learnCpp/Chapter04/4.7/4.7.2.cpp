// ConsoleApplication4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

struct Fraction
{
	int numerator;
	int denominator;
};

void multiply(Fraction a, Fraction b)
{
	double decimalA, decimalB;

	decimalA = static_cast<double>(a.numerator) / static_cast<double>(a.denominator);
	decimalB = static_cast<double>(b.numerator) / static_cast<double>(b.denominator);

	std::cout << decimalA * decimalB;
}

int main()
{
	Fraction A, B;

	std::cout << "Enter the numerator of the first fraction: ";
	std::cin >> A.numerator;

	std::cout << "Enter the denominator of the first fraction: ";
	std::cin >> A.denominator;


	std::cout << "Enter the numerator of the second fraction: ";
	std::cin >> B.numerator;

	std::cout << "Enter the denominator of the second fraction: ";
	std::cin >> B.denominator;

	multiply(A, B);

	system("pause");

    return 0;
} 