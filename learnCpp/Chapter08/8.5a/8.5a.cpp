// ConsoleApplication4.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include <string>
#include <cstdint>

class RGBA
{
	std::uint8_t m_red;
	std::uint8_t m_green;
	std::uint8_t m_blue;
	std::uint8_t m_alpha;

public:
	// My way to initialize those value is not correct!
	// Better to assign value in the ()

	//RGBA(std::uint8_t value1, std::uint8_t value2, std::uint8_t value3)
	//	: m_red(value1),
	//	m_green(value2),
	//	m_blue(value3),
	//	m_alpha(255)
	//{
	//}

	RGBA(std::uint8_t red = 0, std::uint8_t green = 127, std::uint8_t blue = 127, std::uint8_t alpha = 255)
		: m_red(red),
		  m_green(green),
		  m_blue(blue),
		  m_alpha(alpha)
	{
	}

	void print()
	{
//		std::cout << "r = " << static_cast<int>(m_red) << " g = " << m_green << " b = " << m_blue << " a = " << m_alpha;
		std::cout << "r = " << static_cast<int>(m_red) << " g = " << static_cast<int>(m_green) << " b = " << static_cast<int>(m_blue) << " a = " << static_cast<int>(m_alpha);
	}
};

int main()
{

	RGBA teal( 0, 127, 127);
	teal.print();

	std::cout << "Press enter to exit" << std::endl;
	std::cin.get();

	return 0;
}