// ConsoleApplication4.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include <string>
#include <cstdint>

class Ball
{
private:
	std::string m_color = "black";
	double m_radius = 10.0;

public:
	// Default constructor with no parameters
	Ball()
		:m_color("black"),
		 m_radius(10.0)
	{
	}

	// Constructor with only color parameter (radius will use default value)
	Ball(const std::string &color)
		:m_color(color),
		m_radius(10.0)
	{
	}

	// Constructor with only radius parameter (color will use default value)
	Ball(double radius)
		: m_radius(radius),
		m_color("black")
	{
	}

	Ball(const std::string string, double radius)
		:m_color(string),
		m_radius(radius)
	{
	}


	void print()
	{
		std::cout << "color: " << m_color << ", radius: " << m_radius << '\n';
	}
};


int main()
{

	Ball def;
	def.print();

	Ball blue("blue");
	blue.print();

	Ball twenty(20.0);
	twenty.print();

	Ball blueTwenty("blue", 20.0);
	blueTwenty.print();


	std::cout << "Press enter to exit" << std::endl;
	std::cin.get();

	return 0;
}