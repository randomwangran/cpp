// ConsoleApplication4.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>

class Fraction
{
    int m_numerator;
	int m_denominator;

public:

	Fraction(int numerator = 0, int denominator=1 ) : m_numerator(numerator), m_denominator(denominator) {}

	void print()
	{
		Fraction a = reduce();
		std::cout << a.m_numerator << "/" << a.m_denominator << std::endl;
	}

	int gcd(int a, int b) {
		return (b == 0) ? (a > 0 ? a : -a) : gcd(b, a % b);
	}

	Fraction reduce()
	{
		if (gcd(m_numerator, m_denominator) != 1)
			return Fraction((m_numerator / gcd(m_numerator, m_denominator)), (m_denominator / gcd(m_numerator, m_denominator)));
		else
			return Fraction(m_numerator, m_denominator);
	}

	friend Fraction operator*(const Fraction &a, const Fraction &b);
	friend Fraction operator*(const Fraction &a, int b); 
	friend Fraction operator*(int b, const Fraction &a);
};

Fraction operator*(const Fraction &a, const Fraction &b)
{
	return Fraction((a.m_numerator * b.m_numerator), (a.m_denominator * b.m_denominator));
}

Fraction operator*(const Fraction &a, int b)
{
	return Fraction((a.m_numerator * b), a.m_denominator);
}

Fraction operator*(int b, const Fraction &a)
{
	return Fraction((a.m_numerator * b), a.m_denominator);
}


int main()
{
	//std::cout <<gcdTest(1, 8);

	Fraction f1(2, 5);
	f1.print();

	Fraction f2(3, 8);
	f2.print();

	Fraction f3 = f1 * f2;
	f3.print();

	Fraction f4 = f1 * 2;
	f4.print();

	Fraction f5 = 2 * f2;
	f5.print();

	Fraction f6 = Fraction(1, 2) * Fraction(2, 3) * Fraction(3, 4);
	f6.print();


	std::cout << "Press enter to exit" << std::endl;
	std::cin.get();


	return 0;
}