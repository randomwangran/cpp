#include "stdafx.h"
#include <string>
#include <iostream>
#include <stdexcept>

class Fraction
{
	int m_numerator;
	int m_denominator;
public:
	Fraction(int numerator, int denonminator): m_numerator(numerator), m_denominator(denonminator)
	{
		if (m_denominator == 0)
			throw std::runtime_error("Your fraction has an invalid denominator.");
	}

};

int main()
{
	
	std::cout << "Enter the numerator: ";
	int numerator;
	std::cin >> numerator;
	std::cout << "Enter the denominator :";
	try
	{
		int denominator;
		std::cin >> denominator;
		Fraction a(numerator, denominator);
	}

	catch (std::exception &exception)
	{
		std::cerr  << exception.what() << '\n';
	}

	

	system("pause");
	return 0;

}