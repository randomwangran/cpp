#include "stdafx.h"
#include <string>
#include <iostream>
#include <memory>

class Fraction
{
private:
	int m_numerator = 0;
	int m_denominator = 1;

public:
	Fraction(int numerator = 0, int denominator = 1) :
		m_numerator(numerator), m_denominator(denominator)
	{
	}

	friend std::ostream& operator<<(std::ostream& out, const Fraction &f1)
	{
		out << f1.m_numerator << "/" << f1.m_denominator;
		return out;
	}
};

void printFraction(const Fraction* const ptr)
{
	if (ptr)
		std::cout << *ptr;
}


int main()
{
	std::unique_ptr<Fraction> ptr(new Fraction(3,5));
	//Fraction *ptr = new Fraction(3, 5);

	printFraction(ptr.get());

	//delete ptr;

	system("pause");
	return 0;

}