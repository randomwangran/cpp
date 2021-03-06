// ConsoleApplication4.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include <cstdint> // for fixed width integers
#include <cmath>

class FixedPoint2
{
private:
	std::int16_t m_base; // here's our non-fractional part
	std::int8_t m_decimal; // here's our factional part

public:
	FixedPoint2(std::int16_t base = 0, int8_t decimal = 0)
		: m_base(base), m_decimal(decimal)
	{
		// We should handle the case where decimal is > 99 or < -99 here
		// but will leave as an exercise for the reader

		// If either the base or decimal or negative
		if (m_base < 0.0 || m_decimal < 0.0)
		{
			// Make sure base is negative
			if (m_base > 0.0)
				m_base = -m_base;
			// Make sure decimal is negative
			if (m_decimal > 0.0)
				m_decimal = -m_decimal;
		}
	}

	FixedPoint2(double inputDouble)
	{
		m_base = static_cast<int16_t>(round(inputDouble));
		m_decimal = static_cast<int8_t>(round((inputDouble - m_base)*100));
	}

	operator double() const
	{
		return m_base + static_cast<double>(m_decimal) / 100;
	}

	friend std::ostream& operator<<(std::ostream &out, const FixedPoint2 &fp)
	{
		out << static_cast<double>(fp);
		return out;
	}
};

int main()
{
	FixedPoint2 a(0.01);
	std::cout << a << '\n';

	FixedPoint2 b(-0.01);
	std::cout << b << '\n';

	FixedPoint2 c(5.01); // stored as 5.0099999... so we'll need to round this
	std::cout << c << '\n';

	FixedPoint2 d(-5.01); // stored as -5.0099999... so we'll need to round this
	std::cout << d << '\n';

	std::cout << "Press enter to exit" << std::endl;
	std::cin.get();

	return 0;
}