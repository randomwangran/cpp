// ConsoleApplication4.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include <cstdint>

class FixedPoint2
{
	int16_t m_nonFraction;
	int8_t  m_fraction;

public:

	FixedPoint2(int16_t nonFraction = 0, int8_t fraction = 0) : m_nonFraction(nonFraction), m_fraction(fraction) {}

	friend std::ostream& operator<< (std::ostream &out, const FixedPoint2 &point);

	operator double()
	{
		return m_nonFraction + m_fraction * 0.01;
	}
};

std::ostream& operator<< (std::ostream &out, const FixedPoint2 &point)
{
	if (point.m_fraction < 10)
	{
		if (point.m_fraction > 0)
			out << point.m_nonFraction << ".0" << static_cast<int>(point.m_fraction);

		else
			if (point.m_nonFraction >= 0)
				out <<"-" <<point.m_nonFraction << ".0" << static_cast<int>(-point.m_fraction);
			else
				out << point.m_nonFraction << ".0" << static_cast<int>(-point.m_fraction);
	}

	else
	{
		if (point.m_fraction > 0)
			out << point.m_nonFraction << "." << static_cast<int>(point.m_fraction);

		else
			if (point.m_nonFraction >= 0)
				out <<"-" <<-point.m_nonFraction << "." << static_cast<int>(-point.m_fraction);
			else
				out << point.m_nonFraction << "." << static_cast<int>(-point.m_fraction);

	}

	return out;
}

int main()
{
	FixedPoint2 a(34, 56);
	std::cout << a << '\n';

	FixedPoint2 b(-2, 8);
	std::cout << b << '\n';

	FixedPoint2 c(2, -8);
	std::cout << c << '\n';

	FixedPoint2 d(-2, -8);
	std::cout << d << '\n';

	FixedPoint2 e(0, -5);
	std::cout << e << '\n';

	std::cout << static_cast<double>(e) << '\n';


	std::cout << "Press enter to exit" << std::endl;
	std::cin.get();

	return 0;
}

