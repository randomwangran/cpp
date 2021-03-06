// ConsoleApplication4.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>

class Fraction
{
	int m_numerator;
	int m_denominator;

public:

	Fraction(int numerator, int denominator) : m_numerator(numerator), m_denominator(denominator) {}

	void print()
	{
		std::cout << m_numerator << "/" << m_denominator << std::endl;
	}
};


int main()
{
	Fraction f1(1, 4);
	f1.print();

	Fraction f2(1, 2);
	f2.print();

	std::cout << "Press enter to exit" << std::endl;
	std::cin.get();


	return 0;
}